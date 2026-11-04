using System;
using System.Collections.Generic;
using System.IO.Compression;
using System.Text;
using Utility;
using Utility.Algorithms;

namespace Map
{
    internal class CustomLogicTransferData
    {
        private const byte MsgStart = 0;
        private const byte MsgBody = 1;
        private const byte MsgEnd = 2;
        private const int ChunkSize = 10000;
        private const int MaxHashLength = 1024;

        private List<byte> _compressed = new List<byte>();
        private List<byte[][]> _messages = new List<byte[][]>();
        private readonly OrderedTransferReceiver _receiver = new OrderedTransferReceiver();

        public IReadOnlyList<byte[][]> Messages => _messages;

        public void Prepare(string source, string hash)
        {
            _compressed = new List<byte>(DataCompressors.Brotli.CompressString(source, CompressionLevel.Fastest));
            _messages = new List<byte[][]> { new byte[][] { new byte[] { MsgStart }, new byte[0] } };
            for (int i = 0; i < _compressed.Count; i += ChunkSize)
            {
                int count = Math.Min(ChunkSize, _compressed.Count - i);
                byte[] chunk = _compressed.GetRange(i, count).ToArray();
                if (i + count == _compressed.Count)
                    _messages.Add(new byte[][] { new byte[] { MsgEnd }, chunk, Encoding.UTF8.GetBytes(hash) });
                else
                    _messages.Add(new byte[][] { new byte[] { MsgBody }, chunk });
            }
            if (_compressed.Count == 0)
                _messages.Add(new byte[][] { new byte[] { MsgEnd }, new byte[0], Encoding.UTF8.GetBytes(hash) });
        }

        public bool TryReceive(byte[][] message, int messageIndex, int messageTotal, out string source, out string hash)
        {
            string completedSource = null;
            string completedHash = null;
            bool completed = false;
            _receiver.TryReceive(message, messageIndex, messageTotal, ValidateMessage, (orderedMessage, _) =>
            {
                byte header = orderedMessage[0][0];
                if (header == MsgStart)
                    _compressed = new List<byte>();
                _compressed.AddRange(orderedMessage[1]);
                if (header != MsgEnd)
                    return;
                completedSource = DataCompressors.Brotli.DecompressString(_compressed.ToArray(),
                    CompressionAlgorithm.DefaultBufferSize, CompressionAlgorithm.DefaultMaxSize);
                completedHash = Encoding.UTF8.GetString(orderedMessage[2]);
                completed = true;
            }, ResetReceiveState);
            source = completedSource;
            hash = completedHash;
            return completed;
        }

        private static bool ValidateMessage(byte[][] message, int messageIndex, int messageTotal)
        {
            if (message.Length < 2 || message[0].Length != 1)
                return false;
            switch (message[0][0])
            {
                case MsgStart:
                    return messageIndex == 0 && message.Length == 2 && message[1].Length == 0;
                case MsgBody:
                    return messageIndex > 0 && messageIndex < messageTotal - 1 && message.Length == 2 && message[1].Length <= ChunkSize;
                case MsgEnd:
                    return messageIndex == messageTotal - 1 && message.Length == 3 && message[1].Length <= ChunkSize
                        && message[2].Length <= MaxHashLength;
                default:
                    return false;
            }
        }

        public void Reset()
        {
            _receiver.Reset();
            ResetReceiveState();
        }

        private void ResetReceiveState()
        {
            _compressed = new List<byte>();
        }
    }
}
