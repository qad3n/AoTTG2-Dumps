using System;
using System.Collections;
using System.Collections.Generic;
using System.IO.Compression;
using System.Text;
using ApplicationManagers;
using Events;
using GameManagers;
using Photon.Pun;
using Photon.Realtime;
using SimpleJSONFixed;
using UI;
using UnityEngine;
using Utility;
using Utility.Algorithms;

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
        private const int MaxHashLength = 1024;
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
        private static readonly ContentTransferChangeTracker _changeTracker = new ContentTransferChangeTracker();
        private static readonly OrderedTransferReceiver _receiver = new OrderedTransferReceiver();
        private static bool _receivingLogic;

        public static void Init()
        {
            _instance = SingletonFactory.CreateSingleton(_instance);
            EventManager.OnPreLoadScene += OnPreLoadScene;
        }

        private static void OnPreLoadScene(SceneName sceneName)
        {
            _instance.StopAllCoroutines();
            _receiver.Reset();
            ResetReceiveState();
            MapTransferReady = false;
        }

        public static void Start(string mapName)
        {
            string hash = MapManager.MapScript.MapHash;
            bool changed = _changeTracker.Update(mapName, hash);
            MapHash = hash;
            CreateTransferData();
            foreach (Player player in PhotonNetwork.PlayerListOthers)
            {
                if (!changed && player.GetStringProperty(PlayerProperty.CustomMapHash) == hash)
                    RPCManager.PhotonView.RPC("LoadCachedMapRPC", player, new object[0]);
                else
                    Transfer(player);
            }
            MapTransferReady = true;
        }

        public static void UseBuiltin(string category, string mapName)
        {
            _changeTracker.Update(string.Concat(category, "/", mapName), string.Empty);
            MapHash = string.Empty;
        }

        public static void CreateTransferData()
        {
            string serialize = MapManager.MapScript.Objects.Serialize();
            string logic = MapManager.MapScript.Logic;
            object[] result = CSVCompression.Compress(serialize, CompressDeltaRows, RowDelimiter, FieldDelimiter);
            _mapScriptCompressed = new List<byte>((byte[])result[0]);
            _mapScriptSymbolTable = (JSONNode)result[1];
            _mapTransferData = new List<byte[][]>();
            _mapTransferData.Add(new byte[][]
            {
                new byte[] { MsgMapStart },
                DataCompressors.Brotli.CompressString(MapManager.MapScript.Options.Serialize(), CompressionLevel.Fastest),
                DataCompressors.Brotli.CompressString(MapManager.MapScript.CustomAssets.Serialize(), CompressionLevel.Fastest),
                DataCompressors.Brotli.CompressString(MapManager.MapScript.Weather.SerializeToJsonString(), CompressionLevel.Fastest),
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
            _receiver.TryReceive(byteArr, msgNumber, msgTotal, ValidateMessage,
                (message, messageIndex) => ProcessMessage(message, messageIndex, msgTotal), ResetReceiveState);
        }

        private static bool ValidateMessage(byte[][] message, int messageIndex, int messageTotal)
        {
            if (message.Length < 2 || message[0].Length != 1)
                return false;
            switch (message[0][0])
            {
                case MsgMapStart:
                    return messageIndex == 0 && message.Length == 5;
                case MsgMapBody:
                case MsgLogicBody:
                    return messageIndex > 0 && messageIndex < messageTotal - 1 && message.Length == 2 && message[1].Length <= ChunkSize;
                case MsgMapEnd:
                    return messageIndex == messageTotal - 1 && message.Length == 2 && message[1].Length <= MaxHashLength;
                default:
                    return false;
            }
        }

        private static void ProcessMessage(byte[][] message, int messageIndex, int messageTotal)
        {
            UIManager.LoadingMenu.UpdateLoading(messageIndex / (float)messageTotal * 0.5f);
            byte header = message[0][0];
            int bufferSize = CompressionAlgorithm.DefaultBufferSize;
            long maxSize = CompressionAlgorithm.DefaultMaxSize;

            switch (header)
            {
                case MsgMapStart:
                    MapHash = string.Empty;
                    PhotonNetwork.LocalPlayer.SetCustomProperty(PlayerProperty.CustomMapHash, string.Empty);
                    MapManager.MapScript = new MapScript();
                    MapManager.MapScript.Options.Deserialize(DataCompressors.Brotli.DecompressString(message[1], bufferSize, maxSize));
                    MapManager.MapScript.CustomAssets.Deserialize(DataCompressors.Brotli.DecompressString(message[2], bufferSize, maxSize));
                    MapManager.MapScript.Weather.DeserializeFromJsonString(DataCompressors.Brotli.DecompressString(message[3], bufferSize, maxSize));
                    _mapScriptSymbolTable = JSON.Parse(DataCompressors.Brotli.DecompressString(message[4], bufferSize, maxSize));
                    _mapScriptCompressed = new List<byte>();
                    _logicScriptCompressed = new List<byte>();
                    _receivingLogic = false;
                    break;
                case MsgMapBody:
                    if (_receivingLogic)
                        throw new InvalidOperationException("Map data received after map logic data.");
                    _mapScriptCompressed.AddRange(message[1]);
                    break;
                case MsgLogicBody:
                    _receivingLogic = true;
                    _logicScriptCompressed.AddRange(message[1]);
                    break;
                case MsgMapEnd:
                    if (_mapScriptCompressed.Count > 0)
                    {
                        string objects = CSVCompression.Decompress(_mapScriptCompressed.ToArray(), _mapScriptSymbolTable, CompressDeltaRows, RowDelimiter, FieldDelimiter);
                        MapManager.MapScript.Objects.Deserialize(objects);
                    }
                    if (_logicScriptCompressed.Count > 0)
                        MapManager.MapScript.Logic = DataCompressors.Brotli.DecompressString(_logicScriptCompressed.ToArray(), bufferSize, maxSize);
                    MapHash = Encoding.UTF8.GetString(message[1]);
                    MapManager.LoadMap(true);
                    break;
            }
        }

        private static void ResetReceiveState()
        {
            _mapScriptSymbolTable = null;
            _mapScriptCompressed = new List<byte>();
            _logicScriptCompressed = new List<byte>();
            _receivingLogic = false;
        }
    }
}
