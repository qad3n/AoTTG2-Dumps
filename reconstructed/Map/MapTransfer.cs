using System;
using System.Collections;
using System.Collections.Generic;
using System.IO.Compression;
using System.Text;
using GameManagers;
using Photon.Pun;
using Photon.Realtime;
using SimpleJSONFixed;
using UnityEngine;
using Utility;

namespace Map
{
    internal class MapTransfer : MonoBehaviour
    {
        private const byte MsgMapStart = 0;
        private const byte MsgMapBody = 1;
        private const byte MsgLogicBody = 2;
        private const byte MsgMapEnd = 3;
        private const int CompressDeltaRows = 22; // leading fields delta encoded per csv row
        private const int ChunkSize = 10000;
        private const char RowDelimiter = ';';
        private const char FieldDelimiter = ',';
        private const float ChunkInterval = 0.25f;

        public static bool MapTransferReady;
        public static string MapHash;
        public static string MapName;
        private static MapTransfer _instance;
        private static JSONNode _mapScriptSymbolTable;
        private static List<byte> _mapScriptCompressed;
        private static List<byte[][]> _mapTransferData;
        private static List<byte> _logicScriptCompressed;

        public static void CreateTransferData()
        {
            MapScript mapScript = MapManager.MapScript;
            MapHash = Util.CreateMD5(mapScript.Objects.Serialize());
            string logic = mapScript.Logic;
            if (logic.Trim() != string.Empty)
                MapHash += Util.CreateMD5(logic);

            object[] result = CSVCompression.Compress(mapScript.Objects.Serialize(), CompressDeltaRows, RowDelimiter, FieldDelimiter);
            _mapScriptCompressed = new List<byte>((byte[])result[0]);
            _mapScriptSymbolTable = (JSONNode)result[1];
            _mapTransferData = new List<byte[][]>();

            // metageneral metaoptions and metaextra are placeholders the three metadata property
            // names are not recoverable from the stripped stubs only the byte layout is confirmed
            _mapTransferData.Add(new byte[][]
            {
                new byte[] { MsgMapStart },
                DataCompressors.Brotli.CompressString(mapScript.MetaGeneral, CompressionLevel.Fastest),
                DataCompressors.Brotli.CompressString(mapScript.MetaOptions, CompressionLevel.Fastest),
                DataCompressors.Brotli.CompressString(mapScript.MetaExtra, CompressionLevel.Fastest),
                DataCompressors.Brotli.CompressString(_mapScriptSymbolTable.ToString(), CompressionLevel.Fastest)
            });

            AddBodyChunks(MsgMapBody, _mapScriptCompressed);

            if (logic.Trim() != string.Empty)
            {
                _logicScriptCompressed = new List<byte>(DataCompressors.Brotli.CompressString(logic, CompressionLevel.Fastest));
                AddBodyChunks(MsgLogicBody, _logicScriptCompressed);
            }

            _mapTransferData.Add(new byte[][] { new byte[] { MsgMapEnd }, Encoding.UTF8.GetBytes(MapHash) });
        }

        private static void AddBodyChunks(byte header, List<byte> data)
        {
            for (int i = 0; i < data.Count; i += ChunkSize)
            {
                int count = Math.Min(ChunkSize, data.Count - i);
                _mapTransferData.Add(new byte[][] { new byte[] { header }, data.GetRange(i, count).ToArray() });
            }
        }

        public static void Transfer(Player player)
        {
            _instance.StartCoroutine(TransferMapData(player));
        }

        private static IEnumerator TransferMapData(Player player)
        {
            for (int i = 0; i < _mapTransferData.Count; i++)
            {
                RPCManager.PhotonView.RPC("TransferMapRPC", player, _mapTransferData[i], i, _mapTransferData.Count);
                yield return new WaitForSeconds(ChunkInterval);
            }
        }

        public static void OnTransferMapRPC(byte[][] byteArr, int msgNumber, int msgTotal, PhotonMessageInfo info)
        {
            if (info.Sender == null || !info.Sender.IsMasterClient)
                return;
            UIManager.LoadingMenu.UpdateLoading(msgNumber / (float)msgTotal * 0.5f);
            byte header = byteArr[0][0];
            int bufferSize = Algorithms.CompressionAlgorithm.DefaultBufferSize;
            long maxSize = Algorithms.CompressionAlgorithm.DefaultMaxSize;

            switch (header)
            {
                case MsgMapStart:
                    MapManager.MapScript = new MapScript();
                    MapManager.MapScript.MetaGeneral = DataCompressors.Brotli.DecompressString(byteArr[1], bufferSize, maxSize);
                    MapManager.MapScript.MetaOptions = DataCompressors.Brotli.DecompressString(byteArr[2], bufferSize, maxSize);
                    MapManager.MapScript.MetaExtra = DataCompressors.Brotli.DecompressString(byteArr[3], bufferSize, maxSize);
                    _mapScriptSymbolTable = JSON.Parse(DataCompressors.Brotli.DecompressString(byteArr[4], bufferSize, maxSize));
                    _mapScriptCompressed = new List<byte>();
                    _logicScriptCompressed = new List<byte>();
                    break;
                case MsgMapBody:
                    _mapScriptCompressed.AddRange(byteArr[1]);
                    break;
                case MsgLogicBody:
                    _logicScriptCompressed.AddRange(byteArr[1]);
                    break;
                case MsgMapEnd:
                    if (_mapScriptCompressed.Count > 0)
                    {
                        string objects = CSVCompression.Decompress(_mapScriptCompressed.ToArray(), _mapScriptSymbolTable, CompressDeltaRows, RowDelimiter, FieldDelimiter);
                        MapManager.MapScript.Objects.Deserialize(objects);
                    }
                    if (_logicScriptCompressed.Count > 0)
                        MapManager.MapScript.Logic = DataCompressors.Brotli.DecompressString(_logicScriptCompressed.ToArray(), bufferSize, maxSize);
                    MapHash = Encoding.UTF8.GetString(byteArr[1]);
                    MapManager.LoadMap(true);
                    break;
            }
        }
    }
}
