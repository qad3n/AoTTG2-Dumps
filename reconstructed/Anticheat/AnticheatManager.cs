using System.Collections.Generic;
using ApplicationManagers;
using Events;
using GameManagers;
using Photon.Pun;
using Photon.Realtime;
using Settings;
using UnityEngine;
using Utility;

namespace Anticheat
{
    internal class AnticheatManager : MonoBehaviour
    {
        private static AnticheatManager _instance;
        private static readonly Dictionary<int, Dictionary<PhotonEventType, BaseEventFilter>> _IdToEventFilters = new Dictionary<int, Dictionary<PhotonEventType, BaseEventFilter>>();
        private static BallotBox VoteKick = new BallotBox();
        public static HashSet<string> BanList = new HashSet<string>();

        public static void Init()
        {
            _instance = SingletonFactory.CreateSingleton(_instance);
            EventManager.OnLoadScene += OnLoadScene;
        }

        public static void Reset()
        {
            BanList.Clear();
            VoteKick = new BallotBox();
        }

        private static void OnLoadScene(SceneName sceneName)
        {
            _IdToEventFilters.Clear();
        }

        // only instantiate gets a filter so other event types throw on lookup
        public static bool CheckPhotonEvent(Player sender, PhotonEventType eventType, object[] data)
        {
            if (!_IdToEventFilters.ContainsKey(sender.ActorNumber))
                _IdToEventFilters.Add(sender.ActorNumber, new Dictionary<PhotonEventType, BaseEventFilter>());
            Dictionary<PhotonEventType, BaseEventFilter> filters = _IdToEventFilters[sender.ActorNumber];
            if (!filters.ContainsKey(eventType) && eventType == PhotonEventType.Instantiate)
                filters.Add(eventType, new InstantiateEventFilter(sender, eventType));
            return filters[eventType].CheckEvent(data);
        }

        private static bool HasModPassword()
        {
            return SettingsManager.MultiplayerSettings.ModPassword.Value != string.Empty;
        }

        public static void KickPlayer(Player player, bool ban = false, string reason = "")
        {
            if (!PhotonNetwork.IsMasterClient)
                return;
            if (PhotonNetwork.IsMasterClient && player == PhotonNetwork.LocalPlayer && reason != string.Empty)
            {
                DebugConsole.Log("Attempting to ban myself for: " + reason + ", please report this to the devs.", true);
                return;
            }
            if (ban && InGameManager.AllPlayerInfo.ContainsKey(player.ActorNumber))
                BanList.Add(InGameManager.AllPlayerInfo[player.ActorNumber].Profile.ID.Value);
            PhotonNetwork.DestroyPlayerObjects(player);
            PhotonNetwork.CloseConnection(player);
            if (reason != string.Empty)
                DebugConsole.Log("Player " + player.ActorNumber.ToString() + " was autobanned. Reason:" + reason, true);
        }

        public static BallotBox.Result TryVoteKickPlayer(Player voter, Player target)
        {
            BallotBox.Result result = VoteKick.TryCastBallot(voter, target);
            if (result.IsSuccess)
                KickPlayer(target);
            return result;
        }

        public static void ResetVoteKicks(Player voter)
        {
            VoteKick.ResetBallots(voter);
        }
    }
}
