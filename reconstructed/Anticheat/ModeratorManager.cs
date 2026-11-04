using System;
using System.Collections.Generic;
using System.Linq;
using ApplicationManagers;
using ExitGames.Client.Photon;
using Photon.Pun;
using Photon.Realtime;
using UnityEngine;
using Utility;

namespace Anticheat
{
    internal class ModeratorManager : MonoBehaviour, IOnEventCallback, IInRoomCallbacks, IMatchmakingCallbacks
    {
        private const byte CodeRoomRemove = 180;
        private const byte CodeRoomBanList = 181;
        private const byte CodeRoomPlayerList = 182;
        private const byte CodeRegionRemove = 183;
        private const byte CodeRegionBanList = 184;
        private const byte CodePlayerListNotification = 188;
        private const byte CodePlayerJoinNotification = 189;
        private const byte CodeServerResponse = 190;
        private const int RemoveKick = 1;
        private const int RemoveBan = 2;
        private const int RemoveIPBan = 3;
        private const int RemoveUnban = 4;
        private const int RemoveUnIPBan = 5;
        private const int TargetByActorNumber = 0;
        private const int TargetBySessionID = 1;
        private const int TargetByIPAddress = 2;
        private const int TargetByTargetID = 3;
        private const int TargetByEncryptedIPAddress = 4;
        public const int AuthLevelTrusted = 0;
        public const int AuthLevelModerator = 1;
        public const int AuthLevelAdmin = 2;

        private const int ServerSender = -1;
        private const int AuthLevelNone = -1;
        private const int DefaultPageSize = 50;
        private const float RoomRequestTimeout = 5f;
        private const float RegionRequestTimeout = 10f;
        private const float LongRequestTimeout = 15f;
        private const int RoomEntryIPBanType = 1;
        private const string SendingStatus = "Sending request...";
        private const string TimedOutStatus = "Request timed out";

        private const byte ParamRequestId = 0;
        private const byte ParamRemoveType = 1;
        private const byte ParamTargetBy = 2;
        private const byte ParamTarget = 3;
        private const byte ParamReason = 4;
        private const byte ParamStartIndex = 1;
        private const byte ParamAmount = 2;
        private const byte ParamSuccess = 1;
        private const byte ParamMessage = 2;
        private const byte ParamRetryAfter = 3;
        private const byte ParamProcessed = 4;
        private const byte ParamFailed = 5;
        private const byte ParamCount = 1;
        private const byte ParamEndIndex = 2;
        private const byte ParamEntries = 3;
        private const byte ParamPlayerEntries = 1;
        private const byte ParamNotificationEntries = 0;

        private const byte EntrySessionId = 0;
        private const byte EntryIPAddress = 1;
        private const byte EntryUsername = 2;
        private const byte EntryActorNumber = 3;
        private const byte EntryBanType = 4;
        private const byte EntryReason = 6;
        private const byte RegionEntryTargetId = 0;
        private const byte RegionEntryBanType = 1;
        private const byte RegionEntryUsername = 2;
        private const byte RegionEntryReason = 5;
        private const byte RegionEntryBannedBy = 6;

        private static ModeratorManager _instance;
        private readonly Dictionary<string, Action<Dictionary<byte, object>>> _pendingCallbacks = new Dictionary<string, Action<Dictionary<byte, object>>>();
        private readonly Dictionary<string, float> _pendingTimestamps = new Dictionary<string, float>();
        private readonly Dictionary<string, float> _pendingTimeouts = new Dictionary<string, float>();
        private readonly Dictionary<string, Action> _pendingTimeoutCallbacks = new Dictionary<string, Action>();

        public static bool IsAuthenticated { get; private set; }
        public static int AuthLevel { get; private set; } = AuthLevelNone;
        public static string AuthUsername => AccountManager.Username ?? string.Empty;
        public static Dictionary<int, PlayerEntry> ActivePlayers { get; private set; } = new Dictionary<int, PlayerEntry>();
        public static List<PlayerEntry> PastPlayers { get; private set; } = new List<PlayerEntry>();

        public static event Action AuthChanged;
        public static event Action PlayerListChanged;
        public static event Action<string> StatusMessage;
        public static event Action<RoomBanPage> RoomBanListReceived;
        public static event Action<RegionBanPage> RegionBanListReceived;

        public static void Init()
        {
            _instance = SingletonFactory.CreateSingleton(_instance);
        }

        private void OnEnable()
        {
            PhotonNetwork.AddCallbackTarget(this);
            AccountManager.OnLoggedIn += UpdateAuthFromRoles;
            AccountManager.OnLoggedOut += ClearAuth;
        }

        private void OnDisable()
        {
            PhotonNetwork.RemoveCallbackTarget(this);
            AccountManager.OnLoggedIn -= UpdateAuthFromRoles;
            AccountManager.OnLoggedOut -= ClearAuth;
        }

        private void Update()
        {
            TickTimeouts();
        }

        public void OnEvent(EventData photonEvent)
        {
            if (photonEvent.Sender != ServerSender)
                return;
            switch (photonEvent.Code)
            {
                case CodePlayerListNotification:
                    HandlePlayerListNotification(photonEvent);
                    return;
                case CodePlayerJoinNotification:
                    HandlePlayerJoinNotification(photonEvent);
                    return;
                case CodeServerResponse:
                    Dictionary<byte, object> data = CopyParameters(photonEvent);
                    if (!data.ContainsKey(ParamRequestId))
                        return;
                    string requestId = (string)data[ParamRequestId];
                    if (!_pendingCallbacks.TryGetValue(requestId, out Action<Dictionary<byte, object>> callback))
                        return;
                    _pendingCallbacks.Remove(requestId);
                    _pendingTimestamps.Remove(requestId);
                    _pendingTimeouts.Remove(requestId);
                    _pendingTimeoutCallbacks.Remove(requestId);
                    callback?.Invoke(data);
                    return;
            }
        }

        public void OnPlayerEnteredRoom(Player newPlayer)
        {
        }

        public void OnPlayerLeftRoom(Player otherPlayer)
        {
            int actorNumber = otherPlayer.ActorNumber;
            if (!ActivePlayers.TryGetValue(actorNumber, out PlayerEntry entry))
                return;
            ActivePlayers.Remove(actorNumber);
            PastPlayers.Add(entry);
            PlayerListChanged?.Invoke();
        }

        public void OnRoomPropertiesUpdate(Hashtable propertiesThatChanged)
        {
        }

        public void OnPlayerPropertiesUpdate(Player targetPlayer, Hashtable changedProps)
        {
        }

        public void OnMasterClientSwitched(Player newMasterClient)
        {
        }

        public void OnJoinedRoom()
        {
            UpdateAuthFromRoles();
        }

        public void OnLeftRoom()
        {
            ClearAuth();
            ActivePlayers.Clear();
            PastPlayers.Clear();
            _pendingCallbacks.Clear();
            _pendingTimestamps.Clear();
            _pendingTimeouts.Clear();
            _pendingTimeoutCallbacks.Clear();
        }

        private static void UpdateAuthFromRoles()
        {
            string[] roles = AccountManager.Roles;
            if (roles == null)
            {
                ClearAuth();
                return;
            }
            if (roles.Contains("admin"))
            {
                IsAuthenticated = true;
                AuthLevel = AuthLevelAdmin;
            }
            else if (roles.Contains("moderator"))
            {
                IsAuthenticated = true;
                AuthLevel = AuthLevelModerator;
            }
            else if (roles.Contains("trusted"))
            {
                IsAuthenticated = true;
                AuthLevel = AuthLevelTrusted;
            }
            else
            {
                ClearAuth();
                return;
            }
            AuthChanged?.Invoke();
        }

        private static void ClearAuth()
        {
            bool changed = IsAuthenticated || AuthLevel != AuthLevelNone;
            IsAuthenticated = false;
            AuthLevel = AuthLevelNone;
            if (changed)
                AuthChanged?.Invoke();
        }

        public void OnFriendListUpdate(List<FriendInfo> friendList)
        {
        }

        public void OnCreatedRoom()
        {
        }

        public void OnCreateRoomFailed(short returnCode, string message)
        {
        }

        public void OnJoinRoomFailed(short returnCode, string message)
        {
        }

        public void OnJoinRandomFailed(short returnCode, string message)
        {
        }

        private void TickTimeouts()
        {
            if (_pendingTimestamps.Count == 0)
                return;
            float now = Time.realtimeSinceStartup;
            List<string> expired = null;
            foreach (KeyValuePair<string, float> pending in _pendingTimestamps)
            {
                if (_pendingTimeouts[pending.Key] <= now - pending.Value)
                {
                    if (expired == null)
                        expired = new List<string>();
                    expired.Add(pending.Key);
                }
            }
            if (expired == null)
                return;
            foreach (string requestId in expired)
            {
                _pendingTimestamps.Remove(requestId);
                _pendingTimeouts.Remove(requestId);
                _pendingCallbacks.Remove(requestId);
                _pendingTimeoutCallbacks.TryGetValue(requestId, out Action onTimeout);
                _pendingTimeoutCallbacks.Remove(requestId);
                onTimeout?.Invoke();
            }
        }

        private static string TrackRequest(float timeoutSec, Action<Dictionary<byte, object>> onResponse, Action onTimeout = null)
        {
            string requestId = Guid.NewGuid().ToString();
            _instance._pendingCallbacks[requestId] = onResponse;
            _instance._pendingTimestamps[requestId] = Time.realtimeSinceStartup;
            _instance._pendingTimeouts[requestId] = timeoutSec;
            if (onTimeout != null)
                _instance._pendingTimeoutCallbacks[requestId] = onTimeout;
            return requestId;
        }

        private static void RaiseModEvent(byte code, Dictionary<byte, object> data)
        {
            RaiseEventOptions options = new RaiseEventOptions { TargetActors = new int[] { PhotonNetwork.LocalPlayer.ActorNumber } };
            PhotonNetwork.RaiseEvent(code, data, options, SendOptions.SendReliable);
        }

        private static void InvokeStatus(string text, Action<string> localStatus = null)
        {
            StatusMessage?.Invoke(text);
            localStatus?.Invoke(text);
        }

        private static Dictionary<byte, object> CopyParameters(EventData photonEvent)
        {
            Dictionary<byte, object> data = new Dictionary<byte, object>();
            foreach (KeyValuePair<byte, object> parameter in photonEvent.Parameters)
                data[parameter.Key] = parameter.Value;
            return data;
        }

        private static Dictionary<byte, object>[] GetResponseEntries(Dictionary<byte, object> data, byte entriesKey)
        {
            if (!data.ContainsKey(entriesKey))
                return null;
            object value = data[entriesKey];
            if (value is Dictionary<byte, object>[] entries)
                return entries;
            if (value is object[] objects)
            {
                Dictionary<byte, object>[] result = new Dictionary<byte, object>[objects.Length];
                for (int i = 0; i < objects.Length; i++)
                    result[i] = objects[i] as Dictionary<byte, object>;
                return result;
            }
            return null;
        }

        private static int ReadInt(Dictionary<byte, object> data, byte key, int defaultValue = 0)
        {
            if (data == null || !data.ContainsKey(key) || data[key] == null)
                return defaultValue;
            object value = data[key];
            if (value is int)
                return (int)value;
            if (value is long)
                return (int)(long)value;
            if (value is short)
                return (short)value;
            if (value is byte)
                return (byte)value;
            if (value is string text && int.TryParse(text, out int parsed))
                return parsed;
            return defaultValue;
        }

        private static string ReadString(Dictionary<byte, object> data, byte key)
        {
            return data.ContainsKey(key) ? (string)data[key] : string.Empty;
        }

        private static int ReadIntOrZero(Dictionary<byte, object> data, byte key)
        {
            return data.ContainsKey(key) ? (int)data[key] : 0;
        }

        private static PlayerEntry ParsePlayerEntry(Dictionary<byte, object> entry)
        {
            PlayerEntry player = new PlayerEntry();
            player.SessionId = ReadString(entry, EntrySessionId);
            player.IPAddress = ReadString(entry, EntryIPAddress);
            player.Username = ReadString(entry, EntryUsername);
            player.ActorNumber = ReadIntOrZero(entry, EntryActorNumber);
            return player;
        }

        public static void RequestPlayerList(Action<string> localStatus = null)
        {
            InvokeStatus(SendingStatus, localStatus);
            string requestId = TrackRequest(RoomRequestTimeout, data =>
            {
                InvokeStatus(string.Empty, localStatus);
                PopulatePlayerList(data);
            }, () => InvokeStatus(TimedOutStatus, localStatus));
            RaiseModEvent(CodeRoomPlayerList, new Dictionary<byte, object> { { ParamRequestId, requestId } });
        }

        private static void PopulatePlayerList(Dictionary<byte, object> data)
        {
            ActivePlayers.Clear();
            AddPlayerEntries(GetResponseEntries(data, ParamPlayerEntries));
            PlayerListChanged?.Invoke();
        }

        private static void AddPlayerEntries(Dictionary<byte, object>[] entries)
        {
            if (entries == null)
                return;
            foreach (Dictionary<byte, object> entry in entries)
            {
                if (entry == null)
                    continue;
                PlayerEntry player = ParsePlayerEntry(entry);
                if (player.ActorNumber > 0)
                    ActivePlayers[player.ActorNumber] = player;
            }
        }

        private static void HandlePlayerListNotification(EventData photonEvent)
        {
            Dictionary<byte, object> data = CopyParameters(photonEvent);
            ActivePlayers.Clear();
            AddPlayerEntries(GetResponseEntries(data, ParamNotificationEntries));
            PlayerListChanged?.Invoke();
        }

        private static void HandlePlayerJoinNotification(EventData photonEvent)
        {
            Dictionary<byte, object> data = CopyParameters(photonEvent);
            Dictionary<byte, object>[] entries = GetResponseEntries(data, ParamNotificationEntries);
            if (entries == null || entries.Length == 0 || entries[0] == null)
                return;
            PlayerEntry player = ParsePlayerEntry(entries[0]);
            if (player.ActorNumber > 0)
                ActivePlayers[player.ActorNumber] = player;
            PlayerListChanged?.Invoke();
        }

        private static bool ReadResult(Dictionary<byte, object> data, Action<string> localStatus)
        {
            bool success = data.ContainsKey(ParamSuccess) && (bool)data[ParamSuccess];
            InvokeStatus(ReadString(data, ParamMessage), localStatus);
            return success;
        }

        public static void KickPlayer(int actorNumber, Action<string> localStatus = null)
        {
            InvokeStatus(SendingStatus, localStatus);
            string requestId = TrackRequest(RoomRequestTimeout, data =>
            {
                if (ReadResult(data, localStatus))
                    RequestPlayerList(localStatus);
            }, () => InvokeStatus(TimedOutStatus, localStatus));
            RaiseModEvent(CodeRoomRemove, new Dictionary<byte, object>
            {
                { ParamRequestId, requestId },
                { ParamRemoveType, RemoveKick },
                { ParamTargetBy, TargetByActorNumber },
                { ParamTarget, actorNumber }
            });
        }

        public static void RoomBan(int actorNumber, bool ipBan, Action<string> localStatus = null, string reason = null)
        {
            InvokeStatus(SendingStatus, localStatus);
            string requestId = TrackRequest(RoomRequestTimeout, data =>
            {
                if (ReadResult(data, localStatus))
                    RequestPlayerList(localStatus);
            }, () => InvokeStatus(TimedOutStatus, localStatus));
            RaiseModEvent(CodeRoomRemove, new Dictionary<byte, object>
            {
                { ParamRequestId, requestId },
                { ParamRemoveType, ipBan ? RemoveIPBan : RemoveBan },
                { ParamTargetBy, TargetByActorNumber },
                { ParamTarget, actorNumber },
                { ParamReason, reason ?? string.Empty }
            });
        }

        public static void RoomBanPlayerEntry(PlayerEntry player, bool ipBan, Action<string> localStatus = null, string reason = null)
        {
            if (!TryGetBanTarget(player, ipBan, localStatus, out string target, out int targetBy))
                return;
            InvokeStatus(SendingStatus, localStatus);
            string requestId = TrackRequest(RoomRequestTimeout, data =>
            {
                if (ReadResult(data, localStatus))
                    RequestPlayerList(localStatus);
            }, () => InvokeStatus(TimedOutStatus, localStatus));
            RaiseModEvent(CodeRoomRemove, new Dictionary<byte, object>
            {
                { ParamRequestId, requestId },
                { ParamRemoveType, ipBan ? RemoveIPBan : RemoveBan },
                { ParamTargetBy, targetBy },
                { ParamTarget, target },
                { ParamReason, reason ?? string.Empty }
            });
        }

        private static bool TryGetBanTarget(PlayerEntry player, bool ipBan, Action<string> localStatus, out string target, out int targetBy)
        {
            target = null;
            targetBy = TargetByActorNumber;
            if (player == null)
            {
                InvokeStatus("Invalid player entry.", localStatus);
                return false;
            }
            if (ipBan)
            {
                if (string.IsNullOrEmpty(player.IPAddress))
                {
                    InvokeStatus("Player has no IP address to ban.", localStatus);
                    return false;
                }
                target = player.IPAddress;
                targetBy = IsAuthenticated ? TargetByIPAddress : TargetByEncryptedIPAddress;
                return true;
            }
            if (string.IsNullOrEmpty(player.SessionId))
            {
                InvokeStatus("Player has no session ID to ban.", localStatus);
                return false;
            }
            target = player.SessionId;
            targetBy = TargetBySessionID;
            return true;
        }

        public static void RoomUnban(RoomBanEntry banEntry, Action<string> localStatus = null, string reason = null)
        {
            InvokeStatus(SendingStatus, localStatus);
            string requestId = TrackRequest(RoomRequestTimeout, data =>
            {
                if (ReadResult(data, localStatus))
                    RequestRoomBanList(0, DefaultPageSize, localStatus);
            }, () => InvokeStatus(TimedOutStatus, localStatus));
            object target;
            int targetBy;
            if (banEntry.ActorNumber > 0)
            {
                target = banEntry.ActorNumber;
                targetBy = TargetByActorNumber;
            }
            else if (banEntry.IsIPBan)
            {
                target = banEntry.IPAddress;
                targetBy = IsAuthenticated ? TargetByIPAddress : TargetByEncryptedIPAddress;
            }
            else
            {
                target = banEntry.SessionId;
                targetBy = TargetBySessionID;
            }
            RaiseModEvent(CodeRoomRemove, new Dictionary<byte, object>
            {
                { ParamRequestId, requestId },
                { ParamRemoveType, banEntry.IsIPBan ? RemoveUnIPBan : RemoveUnban },
                { ParamTargetBy, targetBy },
                { ParamTarget, target },
                { ParamReason, reason ?? string.Empty }
            });
        }

        public static void RequestRoomBanList(Action<string> localStatus = null)
        {
            RequestRoomBanList(0, DefaultPageSize, localStatus);
        }

        public static void RequestRoomBanList(int startIndex, int amount = DefaultPageSize, Action<string> localStatus = null)
        {
            InvokeStatus(SendingStatus, localStatus);
            string requestId = TrackRequest(RoomRequestTimeout, data =>
            {
                InvokeStatus(string.Empty, localStatus);
                int count = ReadInt(data, ParamCount);
                int endIndex = ReadInt(data, ParamEndIndex, -1);
                RoomBanEntry[] entries = ParseRoomBanEntries(GetResponseEntries(data, ParamEntries));
                RoomBanListReceived?.Invoke(new RoomBanPage { Count = count, EndIndex = endIndex, Entries = entries });
            }, () => InvokeStatus(TimedOutStatus, localStatus));
            RaiseModEvent(CodeRoomBanList, new Dictionary<byte, object>
            {
                { ParamRequestId, requestId },
                { ParamStartIndex, Math.Max(startIndex, 0) },
                { ParamAmount, Math.Max(amount, 1) }
            });
        }

        private static RoomBanEntry[] ParseRoomBanEntries(Dictionary<byte, object>[] entries)
        {
            if (entries == null)
                return Array.Empty<RoomBanEntry>();
            List<RoomBanEntry> result = new List<RoomBanEntry>();
            foreach (Dictionary<byte, object> entry in entries)
            {
                if (entry == null)
                    continue;
                string sessionId = ReadString(entry, EntrySessionId);
                string ipAddress = ReadString(entry, EntryIPAddress);
                string username = ReadString(entry, EntryUsername);
                int actorNumber = ReadIntOrZero(entry, EntryActorNumber);
                int banType = ReadIntOrZero(entry, EntryBanType);
                string reason = ReadString(entry, EntryReason);
                bool isIPBan = banType == RoomEntryIPBanType;
                string target = isIPBan ? ipAddress : sessionId;
                result.Add(new RoomBanEntry
                {
                    SessionId = sessionId,
                    IPAddress = ipAddress,
                    Username = username,
                    IsIPBan = isIPBan,
                    ActorNumber = actorNumber,
                    Reason = reason,
                    CanUnban = !string.IsNullOrEmpty(target) || actorNumber > 0
                });
            }
            return result.ToArray();
        }

        public static void RegionBan(int actorNumber, bool ipBan, Action<string> localStatus = null, string reason = null)
        {
            InvokeStatus(SendingStatus, localStatus);
            string requestId = TrackRequest(RegionRequestTimeout, data =>
            {
                if (ReadResult(data, localStatus))
                    RequestRegionBanList(0, DefaultPageSize, localStatus);
            }, () => InvokeStatus(TimedOutStatus, localStatus));
            RaiseModEvent(CodeRegionRemove, new Dictionary<byte, object>
            {
                { ParamRequestId, requestId },
                { ParamRemoveType, ipBan ? RemoveIPBan : RemoveBan },
                { ParamTargetBy, TargetByActorNumber },
                { ParamTarget, actorNumber },
                { ParamReason, reason ?? string.Empty }
            });
        }

        public static void RegionBanPlayerEntry(PlayerEntry player, bool ipBan, Action<string> localStatus = null, string reason = null)
        {
            if (!TryGetBanTarget(player, ipBan, localStatus, out string target, out int targetBy))
                return;
            InvokeStatus(SendingStatus, localStatus);
            string requestId = TrackRequest(RegionRequestTimeout, data =>
            {
                if (ReadResult(data, localStatus))
                    RequestRegionBanList(0, DefaultPageSize, localStatus);
            }, () => InvokeStatus(TimedOutStatus, localStatus));
            RaiseModEvent(CodeRegionRemove, new Dictionary<byte, object>
            {
                { ParamRequestId, requestId },
                { ParamRemoveType, ipBan ? RemoveIPBan : RemoveBan },
                { ParamTargetBy, targetBy },
                { ParamTarget, target },
                { ParamReason, reason ?? string.Empty }
            });
        }

        public static void RegionUnban(RegionBanEntry banEntry, Action<string> localStatus = null, string reason = null)
        {
            InvokeStatus(SendingStatus, localStatus);
            string requestId = TrackRequest(RegionRequestTimeout, data =>
            {
                if (ReadResult(data, localStatus))
                    RequestRegionBanList(0, DefaultPageSize, localStatus);
            }, () => InvokeStatus(TimedOutStatus, localStatus));
            RaiseModEvent(CodeRegionRemove, new Dictionary<byte, object>
            {
                { ParamRequestId, requestId },
                { ParamRemoveType, banEntry.IsIPBan ? RemoveUnIPBan : RemoveUnban },
                { ParamTargetBy, TargetByTargetID },
                { ParamTarget, banEntry.TargetId },
                { ParamReason, reason ?? string.Empty }
            });
        }

        public static void RequestRegionBanList(Action<string> localStatus = null)
        {
            RequestRegionBanList(0, DefaultPageSize, localStatus);
        }

        public static void RequestRegionBanList(int startIndex, int amount = DefaultPageSize, Action<string> localStatus = null)
        {
            InvokeStatus(SendingStatus, localStatus);
            string requestId = TrackRequest(LongRequestTimeout, data =>
            {
                InvokeStatus(string.Empty, localStatus);
                int count = ReadInt(data, ParamCount);
                int endIndex = ReadInt(data, ParamEndIndex, -1);
                RegionBanEntry[] entries = ParseRegionBanEntries(GetResponseEntries(data, ParamEntries));
                RegionBanListReceived?.Invoke(new RegionBanPage { Count = count, EndIndex = endIndex, Entries = entries });
            }, () => InvokeStatus(TimedOutStatus, localStatus));
            RaiseModEvent(CodeRegionBanList, new Dictionary<byte, object>
            {
                { ParamRequestId, requestId },
                { ParamStartIndex, Math.Max(startIndex, 0) },
                { ParamAmount, Math.Max(amount, 1) }
            });
        }

        private static RegionBanEntry[] ParseRegionBanEntries(Dictionary<byte, object>[] entries)
        {
            if (entries == null)
                return Array.Empty<RegionBanEntry>();
            List<RegionBanEntry> result = new List<RegionBanEntry>();
            foreach (Dictionary<byte, object> entry in entries)
            {
                if (entry == null)
                    continue;
                string targetId = ReadString(entry, RegionEntryTargetId);
                int banType = ReadIntOrZero(entry, RegionEntryBanType);
                string username = ReadString(entry, RegionEntryUsername);
                string reason = ReadString(entry, RegionEntryReason);
                string bannedBy = ReadString(entry, RegionEntryBannedBy);
                result.Add(new RegionBanEntry
                {
                    TargetId = targetId,
                    Username = username,
                    Reason = reason,
                    IsIPBan = banType == RemoveIPBan,
                    BannedBy = bannedBy
                });
            }
            return result.ToArray();
        }

        public static void BatchSessionBan(string targets)
        {
            string trimmed = targets?.Trim();
            if (!string.IsNullOrEmpty(trimmed))
                SendBatchRoomRemove(RemoveBan, TargetBySessionID, trimmed, null);
        }

        public static void BatchIPBan(string targets)
        {
            string trimmed = targets?.Trim();
            if (!string.IsNullOrEmpty(trimmed))
                SendBatchRoomRemove(RemoveIPBan, IsAuthenticated ? TargetByIPAddress : TargetByEncryptedIPAddress, trimmed, null);
        }

        public static void BatchSessionUnban(string targets)
        {
            string trimmed = targets?.Trim();
            if (!string.IsNullOrEmpty(trimmed))
                SendBatchRoomRemove(RemoveUnban, TargetBySessionID, trimmed, null);
        }

        public static void BatchIPUnban(string targets)
        {
            string trimmed = targets?.Trim();
            if (!string.IsNullOrEmpty(trimmed))
                SendBatchRoomRemove(RemoveUnIPBan, IsAuthenticated ? TargetByIPAddress : TargetByEncryptedIPAddress, trimmed, null);
        }

        // the success flag is read and type checked but the status text ignores it
        private static void SendBatchRoomRemove(int removeType, int targetBy, string targets, Action<string> localStatus)
        {
            InvokeStatus(SendingStatus, localStatus);
            string requestId = TrackRequest(LongRequestTimeout, data =>
            {
                _ = data.ContainsKey(ParamSuccess) && (bool)data[ParamSuccess];
                string message = ReadString(data, ParamMessage);
                int retryAfter = ReadIntOrZero(data, ParamRetryAfter);
                int processed = ReadIntOrZero(data, ParamProcessed);
                int failed = ReadIntOrZero(data, ParamFailed);
                if (retryAfter > 0)
                    InvokeStatus("Rate limited. Retry in " + retryAfter.ToString() + "s.", localStatus);
                else if (processed < 1 && failed < 1)
                    InvokeStatus(message, localStatus);
                else
                    InvokeStatus("Done: " + processed.ToString() + " processed, " + failed.ToString() + " failed.", localStatus);
            }, () => InvokeStatus(TimedOutStatus, localStatus));
            RaiseModEvent(CodeRoomRemove, new Dictionary<byte, object>
            {
                { ParamRequestId, requestId },
                { ParamRemoveType, removeType },
                { ParamTargetBy, targetBy },
                { ParamTarget, targets }
            });
        }
    }
}
