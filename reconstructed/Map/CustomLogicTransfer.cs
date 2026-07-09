using System;
using System.Collections;
using System.Collections.Generic;
using System.IO.Compression;
using System.Text;
using GameManagers;
using Photon.Pun;
using Photon.Realtime;
using UnityEngine;
using Utility;

namespace Map
{
    internal class CustomLogicTransfer : MonoBehaviour
    {
        private const byte MsgLogicStart = 0;
        private const byte MsgLogicBody = 1;
        private const byte MsgLogicEnd = 2;
        private const int ChunkSize = 10000; // bytes per photon rpc chunk
        private const float ChunkInterval = 0.5f; // seconds between chunks

        public static bool LogicTransferReady;
        public static string LogicHash;
        private static CustomLogicTransfer _instance;
        private static List<byte> _logicScriptCompressed;
        private static List<byte[][]> _logicTransferData;

        public static void CreateTransferData()
        {
            LogicHash = Util.CreateMD5(CustomLogicManager.Logic);
            byte[] compressed = DataCompressors.Brotli.CompressString(CustomLogicManager.Logic, CompressionLevel.Fastest);
            _logicScriptCompressed = new List<byte>(compressed);
            _logicTransferData = new List<byte[][]>();

            // when compressed is empty only the start frame is queued and no end frame is ever sent
            // so a receiver of empty logic never runs the terminator branch that finalizes it
            _logicTransferData.Add(new byte[][] { new byte[] { MsgLogicStart }, new byte[0] });
            for (int i = 0; i < compressed.Length; i += ChunkSize)
            {
                int count = Math.Min(ChunkSize, compressed.Length - i);
                byte[] chunk = _logicScriptCompressed.GetRange(i, count).ToArray();
                if (i + ChunkSize >= compressed.Length)
                    _logicTransferData.Add(new byte[][] { new byte[] { MsgLogicEnd }, chunk, Encoding.UTF8.GetBytes(LogicHash) });
                else
                    _logicTransferData.Add(new byte[][] { new byte[] { MsgLogicBody }, chunk });
            }
        }

        public static void Transfer(Player player)
        {
            _instance.StartCoroutine(TransferLogicData(player));
        }

        private static IEnumerator TransferLogicData(Player player)
        {
            for (int i = 0; i < _logicTransferData.Count; i++)
            {
                RPCManager.PhotonView.RPC("TransferLogicRPC", player, _logicTransferData[i], i, _logicTransferData.Count);
                yield return new WaitForSeconds(ChunkInterval);
            }
        }

        public static void OnTransferLogicRPC(byte[][] byteArr, int msgNumber, int msgTotal, PhotonMessageInfo info)
        {
            if (info.Sender == null || !info.Sender.IsMasterClient)
                return;
            byte header = byteArr[0][0];
            if (header == MsgLogicStart)
            {
                CustomLogicManager.Logic = string.Empty;
                _logicScriptCompressed = new List<byte>();
            }
            if (byteArr.Length >= 2)
                _logicScriptCompressed.AddRange(byteArr[1]);
            if (header == MsgLogicEnd)
            {
                CustomLogicManager.Logic = DataCompressors.Brotli.DecompressString(_logicScriptCompressed.ToArray(),
                    Algorithms.CompressionAlgorithm.DefaultBufferSize, Algorithms.CompressionAlgorithm.DefaultMaxSize);
                LogicHash = Encoding.UTF8.GetString(byteArr[2]);
                CustomLogicManager.FinishLoadLogic();
            }
        }
    }
}
