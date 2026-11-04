using System.Collections;
using ApplicationManagers;
using CustomLogic;
using Events;
using GameManagers;
using Photon.Pun;
using Photon.Realtime;
using UnityEngine;
using Utility;

namespace Map
{
    internal class CustomLogicTransfer : MonoBehaviour
    {
        private const float ChunkInterval = 0.5f; // seconds between chunks

        public static bool LogicTransferReady;
        public static string LogicHash;
        private static CustomLogicTransfer _instance;
        private static readonly CustomLogicTransferData _transferData = new CustomLogicTransferData();
        private static readonly ContentTransferChangeTracker _changeTracker = new ContentTransferChangeTracker();

        public static void Init()
        {
            _instance = SingletonFactory.CreateSingleton(_instance);
            EventManager.OnPreLoadScene += OnPreLoadScene;
        }

        private static void OnPreLoadScene(SceneName sceneName)
        {
            _instance.StopAllCoroutines();
            _transferData.Reset();
            LogicTransferReady = false;
        }

        public static void Start(string modeName)
        {
            string hash = Util.CreateMD5(CustomLogicManager.Logic);
            bool changed = _changeTracker.Update(modeName, hash);
            LogicHash = hash;
            _transferData.Prepare(CustomLogicManager.Logic, LogicHash);
            foreach (Player player in PhotonNetwork.PlayerListOthers)
            {
                if (!changed && player.GetStringProperty(PlayerProperty.CustomLogicHash) == hash)
                    RPCManager.PhotonView.RPC("LoadCachedLogicRPC", player, new object[0]);
                else
                    Transfer(player);
            }
            LogicTransferReady = true;
        }

        public static void UseBuiltin(string modeName)
        {
            _changeTracker.Update(modeName, string.Empty);
            LogicHash = string.Empty;
        }

        public static void Transfer(Player player)
        {
            _instance.StartCoroutine(TransferLogicData(player));
        }

        private static IEnumerator TransferLogicData(Player player)
        {
            for (int i = 0; i < _transferData.Messages.Count; i++)
            {
                RPCManager.PhotonView.RPC("TransferLogicRPC", player, _transferData.Messages[i], i, _transferData.Messages.Count);
                yield return new WaitForSeconds(ChunkInterval);
            }
        }

        public static void OnTransferLogicRPC(byte[][] byteArr, int msgNumber, int msgTotal, PhotonMessageInfo info)
        {
            if (info.Sender == null || !info.Sender.IsMasterClient)
                return;
            if (_transferData.TryReceive(byteArr, msgNumber, msgTotal, out string logic, out string hash))
            {
                CustomLogicManager.Logic = logic;
                LogicHash = hash;
                CustomLogicManager.LogicHash = LogicHash;
                CustomLogicManager.FinishLoadLogic();
            }
        }
    }
}
