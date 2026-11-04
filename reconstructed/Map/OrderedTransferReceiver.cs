using System;
using System.Collections.Generic;

namespace Map
{
    internal class OrderedTransferReceiver
    {
        public const long MaxTransferBytes = 2147483648L;
        private const int ChunkSize = 10000;
        private const int ExtraMessages = 2; // start and end frames around the body chunks

        private readonly SortedDictionary<int, byte[][]> _pending = new SortedDictionary<int, byte[][]>();
        private readonly long _maxTransferBytes;
        private readonly int _maxTransferMessages;
        private int _expectedIndex;
        private int _messageTotal;
        private long _receivedBytes;
        private bool _active;

        public OrderedTransferReceiver(long maxTransferBytes = MaxTransferBytes)
        {
            if (maxTransferBytes <= 0 || maxTransferBytes > MaxTransferBytes)
                throw new ArgumentOutOfRangeException("maxTransferBytes");
            _maxTransferBytes = maxTransferBytes;
            _maxTransferMessages = (int)Math.Min(int.MaxValue, maxTransferBytes / ChunkSize + ExtraMessages);
        }

        public bool TryReceive(byte[][] message, int messageIndex, int messageTotal, Func<byte[][], int, int, bool> validator,
            Action<byte[][], int> processor, Action resetState)
        {
            if (!IsValidEnvelope(message, messageIndex, messageTotal) || !validator(message, messageIndex, messageTotal))
                return Fail(resetState);
            if (!_active)
            {
                _active = true;
                _messageTotal = messageTotal;
            }
            else if (_messageTotal != messageTotal)
                return Fail(resetState);

            Drain(processor);
            if (messageIndex < _expectedIndex || _pending.ContainsKey(messageIndex))
                return true;
            long messageBytes = GetMessageBytes(message);
            if (messageBytes > _maxTransferBytes - _receivedBytes)
                return Fail(resetState);
            _receivedBytes += messageBytes;

            if (messageIndex == _expectedIndex)
            {
                Process(message, messageIndex, processor);
                Drain(processor);
            }
            else
                _pending.Add(messageIndex, message);
            if (_expectedIndex == _messageTotal)
                Reset();
            return true;
        }

        public void Reset()
        {
            _pending.Clear();
            _expectedIndex = 0;
            _messageTotal = 0;
            _receivedBytes = 0;
            _active = false;
        }

        private bool IsValidEnvelope(byte[][] message, int messageIndex, int messageTotal)
        {
            return message != null && messageTotal > 1 && messageTotal <= _maxTransferMessages && messageIndex >= 0 && messageIndex < messageTotal;
        }

        private void Drain(Action<byte[][], int> processor)
        {
            while (_pending.TryGetValue(_expectedIndex, out byte[][] message))
            {
                _pending.Remove(_expectedIndex);
                Process(message, _expectedIndex, processor);
            }
        }

        private void Process(byte[][] message, int messageIndex, Action<byte[][], int> processor)
        {
            processor(message, messageIndex);
            _expectedIndex++;
        }

        private bool Fail(Action resetState)
        {
            Reset();
            resetState?.Invoke();
            return false;
        }

        private static long GetMessageBytes(byte[][] message)
        {
            long total = 0;
            for (int i = 0; i < message.Length; i++)
                total += message[i].Length;
            return total;
        }
    }
}
