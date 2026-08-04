// ==================== AoTTG2 cross-reference ====================
// Type: Anticheat.ModeratorManager
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Anticheat/ModeratorManager.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using ExitGames.Client.Photon;
using Il2CppDummyDll;
using Photon.Realtime;
using UnityEngine;

namespace Anticheat;

[Token(Token = "0x20007E0")]
internal class ModeratorManager : MonoBehaviour, IOnEventCallback, IInRoomCallbacks, IMatchmakingCallbacks
{
	[Token(Token = "0x40025B8")]
	private const byte CodeRoomRemove = 180;

	[Token(Token = "0x40025B9")]
	private const byte CodeRoomBanList = 181;

	[Token(Token = "0x40025BA")]
	private const byte CodeRoomPlayerList = 182;

	[Token(Token = "0x40025BB")]
	private const byte CodeRegionRemove = 183;

	[Token(Token = "0x40025BC")]
	private const byte CodeRegionBanList = 184;

	[Token(Token = "0x40025BD")]
	private const byte CodePlayerListNotification = 188;

	[Token(Token = "0x40025BE")]
	private const byte CodePlayerJoinNotification = 189;

	[Token(Token = "0x40025BF")]
	private const byte CodeServerResponse = 190;

	[Token(Token = "0x40025C0")]
	private const int RemoveKick = 1;

	[Token(Token = "0x40025C1")]
	private const int RemoveBan = 2;

	[Token(Token = "0x40025C2")]
	private const int RemoveIPBan = 3;

	[Token(Token = "0x40025C3")]
	private const int RemoveUnban = 4;

	[Token(Token = "0x40025C4")]
	private const int RemoveUnIPBan = 5;

	[Token(Token = "0x40025C5")]
	private const int TargetByActorNumber = 0;

	[Token(Token = "0x40025C6")]
	private const int TargetBySessionID = 1;

	[Token(Token = "0x40025C7")]
	private const int TargetByIPAddress = 2;

	[Token(Token = "0x40025C8")]
	private const int TargetByTargetID = 3;

	[Token(Token = "0x40025C9")]
	private const int TargetByEncryptedIPAddress = 4;

	[Token(Token = "0x40025CA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static ModeratorManager _instance;

	[Token(Token = "0x40025CB")]
	public const int AuthLevelTrusted = 0;

	[Token(Token = "0x40025CC")]
	public const int AuthLevelModerator = 1;

	[Token(Token = "0x40025CD")]
	public const int AuthLevelAdmin = 2;

	[Token(Token = "0x40025D7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly Dictionary<string, Action<Dictionary<byte, object>>> _pendingCallbacks;

	[Token(Token = "0x40025D8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly Dictionary<string, float> _pendingTimestamps;

	[Token(Token = "0x40025D9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private readonly Dictionary<string, float> _pendingTimeouts;

	[Token(Token = "0x40025DA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private readonly Dictionary<string, Action> _pendingTimeoutCallbacks;

	[Token(Token = "0x17000E64")]
	public static bool IsAuthenticated
	{
		[Token(Token = "0x6004AFF")]
		[Address(RVA = "0x43D39C0", Offset = "0x43D39C0", VA = "0x43D39C0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6004B00")]
		[Address(RVA = "0x43D3A30", Offset = "0x43D3A30", VA = "0x43D3A30")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000E65")]
	public static int AuthLevel
	{
		[Token(Token = "0x6004B01")]
		[Address(RVA = "0x43D3A80", Offset = "0x43D3A80", VA = "0x43D3A80")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6004B02")]
		[Address(RVA = "0x43D3AF0", Offset = "0x43D3AF0", VA = "0x43D3AF0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000E66")]
	public static string AuthUsername
	{
		[Token(Token = "0x6004B03")]
		[Address(RVA = "0x43D3B40", Offset = "0x43D3B40", VA = "0x43D3B40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000E67")]
	public static Dictionary<int, PlayerEntry> ActivePlayers
	{
		[Token(Token = "0x6004B04")]
		[Address(RVA = "0x43D3BC0", Offset = "0x43D3BC0", VA = "0x43D3BC0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6004B05")]
		[Address(RVA = "0x43D3C30", Offset = "0x43D3C30", VA = "0x43D3C30")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000E68")]
	public static List<PlayerEntry> PastPlayers
	{
		[Token(Token = "0x6004B06")]
		[Address(RVA = "0x43D3C90", Offset = "0x43D3C90", VA = "0x43D3C90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6004B07")]
		[Address(RVA = "0x43D3D00", Offset = "0x43D3D00", VA = "0x43D3D00")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x14000011")]
	public static event Action AuthChanged
	{
		[Token(Token = "0x6004B08")]
		[Address(RVA = "0x43D3D60", Offset = "0x43D3D60", VA = "0x43D3D60")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6004B09")]
		[Address(RVA = "0x43D3E40", Offset = "0x43D3E40", VA = "0x43D3E40")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000012")]
	public static event Action PlayerListChanged
	{
		[Token(Token = "0x6004B0A")]
		[Address(RVA = "0x43D3F20", Offset = "0x43D3F20", VA = "0x43D3F20")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6004B0B")]
		[Address(RVA = "0x43D4000", Offset = "0x43D4000", VA = "0x43D4000")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000013")]
	public static event Action<string> StatusMessage
	{
		[Token(Token = "0x6004B0C")]
		[Address(RVA = "0x43D40E0", Offset = "0x43D40E0", VA = "0x43D40E0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6004B0D")]
		[Address(RVA = "0x43D41E0", Offset = "0x43D41E0", VA = "0x43D41E0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000014")]
	public static event Action<RoomBanPage> RoomBanListReceived
	{
		[Token(Token = "0x6004B0E")]
		[Address(RVA = "0x43D42E0", Offset = "0x43D42E0", VA = "0x43D42E0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6004B0F")]
		[Address(RVA = "0x43D43E0", Offset = "0x43D43E0", VA = "0x43D43E0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000015")]
	public static event Action<RegionBanPage> RegionBanListReceived
	{
		[Token(Token = "0x6004B10")]
		[Address(RVA = "0x43D44E0", Offset = "0x43D44E0", VA = "0x43D44E0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6004B11")]
		[Address(RVA = "0x43D45E0", Offset = "0x43D45E0", VA = "0x43D45E0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6004B12")]
	[Address(RVA = "0x43D46E0", Offset = "0x43D46E0", VA = "0x43D46E0")]
	public static void Init()
	{
	}

	[Token(Token = "0x6004B13")]
	[Address(RVA = "0x43D4760", Offset = "0x43D4760", VA = "0x43D4760")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x6004B14")]
	[Address(RVA = "0x43D4860", Offset = "0x43D4860", VA = "0x43D4860")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6004B15")]
	[Address(RVA = "0x43D4960", Offset = "0x43D4960", VA = "0x43D4960")]
	private void Update()
	{
	}

	[Token(Token = "0x6004B16")]
	[Address(RVA = "0x43D4F90", Offset = "0x43D4F90", VA = "0x43D4F90", Slot = "4")]
	public void OnEvent(EventData photonEvent)
	{
	}

	[Token(Token = "0x6004B17")]
	[Address(RVA = "0x43D5B60", Offset = "0x43D5B60", VA = "0x43D5B60", Slot = "5")]
	public void OnPlayerEnteredRoom(Player newPlayer)
	{
	}

	[Token(Token = "0x6004B18")]
	[Address(RVA = "0x43D5B70", Offset = "0x43D5B70", VA = "0x43D5B70", Slot = "6")]
	public void OnPlayerLeftRoom(Player otherPlayer)
	{
	}

	[Token(Token = "0x6004B19")]
	[Address(RVA = "0x43D5DE0", Offset = "0x43D5DE0", VA = "0x43D5DE0", Slot = "7")]
	public void OnRoomPropertiesUpdate(Hashtable propertiesThatChanged)
	{
	}

	[Token(Token = "0x6004B1A")]
	[Address(RVA = "0x43D5DF0", Offset = "0x43D5DF0", VA = "0x43D5DF0", Slot = "8")]
	public void OnPlayerPropertiesUpdate(Player targetPlayer, Hashtable changedProps)
	{
	}

	[Token(Token = "0x6004B1B")]
	[Address(RVA = "0x43D5E00", Offset = "0x43D5E00", VA = "0x43D5E00", Slot = "9")]
	public void OnMasterClientSwitched(Player newMasterClient)
	{
	}

	[Token(Token = "0x6004B1C")]
	[Address(RVA = "0x43D5E10", Offset = "0x43D5E10", VA = "0x43D5E10", Slot = "13")]
	public void OnJoinedRoom()
	{
	}

	[Token(Token = "0x6004B1D")]
	[Address(RVA = "0x43D62A0", Offset = "0x43D62A0", VA = "0x43D62A0", Slot = "16")]
	public void OnLeftRoom()
	{
	}

	[Token(Token = "0x6004B1E")]
	[Address(RVA = "0x43D5E60", Offset = "0x43D5E60", VA = "0x43D5E60")]
	private static void UpdateAuthFromRoles()
	{
	}

	[Token(Token = "0x6004B1F")]
	[Address(RVA = "0x43D64C0", Offset = "0x43D64C0", VA = "0x43D64C0")]
	private static void ClearAuth()
	{
	}

	[Token(Token = "0x6004B20")]
	[Address(RVA = "0x43D6860", Offset = "0x43D6860", VA = "0x43D6860", Slot = "10")]
	public void OnFriendListUpdate(List<FriendInfo> friendList)
	{
	}

	[Token(Token = "0x6004B21")]
	[Address(RVA = "0x43D6870", Offset = "0x43D6870", VA = "0x43D6870", Slot = "11")]
	public void OnCreatedRoom()
	{
	}

	[Token(Token = "0x6004B22")]
	[Address(RVA = "0x43D6880", Offset = "0x43D6880", VA = "0x43D6880", Slot = "12")]
	public void OnCreateRoomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x6004B23")]
	[Address(RVA = "0x43D6890", Offset = "0x43D6890", VA = "0x43D6890", Slot = "14")]
	public void OnJoinRoomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x6004B24")]
	[Address(RVA = "0x43D68A0", Offset = "0x43D68A0", VA = "0x43D68A0", Slot = "15")]
	public void OnJoinRandomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x6004B25")]
	[Address(RVA = "0x43D4970", Offset = "0x43D4970", VA = "0x43D4970")]
	private void TickTimeouts()
	{
	}

	[Token(Token = "0x6004B26")]
	[Address(RVA = "0x43D68B0", Offset = "0x43D68B0", VA = "0x43D68B0")]
	private static string TrackRequest(float timeoutSec, Action<Dictionary<byte, object>> onResponse, [Optional] Action onTimeout)
	{
		return null;
	}

	[Token(Token = "0x6004B27")]
	[Address(RVA = "0x43D6A50", Offset = "0x43D6A50", VA = "0x43D6A50")]
	private static void RaiseModEvent(byte code, Dictionary<byte, object> data)
	{
	}

	[Token(Token = "0x6004B28")]
	[Address(RVA = "0x43D6B70", Offset = "0x43D6B70", VA = "0x43D6B70")]
	private static void InvokeStatus(string text, [Optional] Action<string> localStatus)
	{
	}

	[Token(Token = "0x6004B29")]
	[Address(RVA = "0x43D6C20", Offset = "0x43D6C20", VA = "0x43D6C20")]
	private static Dictionary<byte, object>[] GetResponseEntries(Dictionary<byte, object> data, byte entriesKey)
	{
		return null;
	}

	[Token(Token = "0x6004B2A")]
	[Address(RVA = "0x43D6E40", Offset = "0x43D6E40", VA = "0x43D6E40")]
	private static int ReadInt(Dictionary<byte, object> data, byte key, int defaultValue = 0)
	{
		return default(int);
	}

	[Token(Token = "0x6004B2B")]
	[Address(RVA = "0x43D6F50", Offset = "0x43D6F50", VA = "0x43D6F50")]
	private static PlayerEntry ParsePlayerEntry(Dictionary<byte, object> entry)
	{
		return null;
	}

	[Token(Token = "0x6004B2C")]
	[Address(RVA = "0x43D7180", Offset = "0x43D7180", VA = "0x43D7180")]
	public static void RequestPlayerList([Optional] Action<string> localStatus)
	{
	}

	[Token(Token = "0x6004B2D")]
	[Address(RVA = "0x43D73F0", Offset = "0x43D73F0", VA = "0x43D73F0")]
	private static void PopulatePlayerList(Dictionary<byte, object> data)
	{
	}

	[Token(Token = "0x6004B2E")]
	[Address(RVA = "0x43D5390", Offset = "0x43D5390", VA = "0x43D5390")]
	private static void HandlePlayerListNotification(EventData photonEvent)
	{
	}

	[Token(Token = "0x6004B2F")]
	[Address(RVA = "0x43D57D0", Offset = "0x43D57D0", VA = "0x43D57D0")]
	private static void HandlePlayerJoinNotification(EventData photonEvent)
	{
	}

	[Token(Token = "0x6004B30")]
	[Address(RVA = "0x43D7660", Offset = "0x43D7660", VA = "0x43D7660")]
	public static void KickPlayer(int actorNumber, [Optional] Action<string> localStatus)
	{
	}

	[Token(Token = "0x6004B31")]
	[Address(RVA = "0x43D7960", Offset = "0x43D7960", VA = "0x43D7960")]
	public static void RoomBan(int actorNumber, bool ipBan, [Optional] Action<string> localStatus, [Optional] string reason)
	{
	}

	[Token(Token = "0x6004B32")]
	[Address(RVA = "0x43D7CD0", Offset = "0x43D7CD0", VA = "0x43D7CD0")]
	public static void RoomBanPlayerEntry(PlayerEntry player, bool ipBan, [Optional] Action<string> localStatus, [Optional] string reason)
	{
	}

	[Token(Token = "0x6004B33")]
	[Address(RVA = "0x43D8260", Offset = "0x43D8260", VA = "0x43D8260")]
	public static void RoomUnban(RoomBanEntry banEntry, [Optional] Action<string> localStatus, [Optional] string reason)
	{
	}

	[Token(Token = "0x6004B34")]
	[Address(RVA = "0x43D8690", Offset = "0x43D8690", VA = "0x43D8690")]
	public static void RequestRoomBanList([Optional] Action<string> localStatus)
	{
	}

	[Token(Token = "0x6004B35")]
	[Address(RVA = "0x43D86E0", Offset = "0x43D86E0", VA = "0x43D86E0")]
	public static void RequestRoomBanList(int startIndex, [Optional][DefaultParameterValue(50)] int amount, [Optional] Action<string> localStatus)
	{
	}

	[Token(Token = "0x6004B36")]
	[Address(RVA = "0x43D89C0", Offset = "0x43D89C0", VA = "0x43D89C0")]
	private static RoomBanEntry[] ParseRoomBanEntries(Dictionary<byte, object>[] entries)
	{
		return null;
	}

	[Token(Token = "0x6004B37")]
	[Address(RVA = "0x43D8F60", Offset = "0x43D8F60", VA = "0x43D8F60")]
	public static void RegionBan(int actorNumber, bool ipBan, [Optional] Action<string> localStatus, [Optional] string reason)
	{
	}

	[Token(Token = "0x6004B38")]
	[Address(RVA = "0x43D92D0", Offset = "0x43D92D0", VA = "0x43D92D0")]
	public static void RegionBanPlayerEntry(PlayerEntry player, bool ipBan, [Optional] Action<string> localStatus, [Optional] string reason)
	{
	}

	[Token(Token = "0x6004B39")]
	[Address(RVA = "0x43D9860", Offset = "0x43D9860", VA = "0x43D9860")]
	public static void RegionUnban(RegionBanEntry banEntry, [Optional] Action<string> localStatus, [Optional] string reason)
	{
	}

	[Token(Token = "0x6004B3A")]
	[Address(RVA = "0x43D9BA0", Offset = "0x43D9BA0", VA = "0x43D9BA0")]
	public static void RequestRegionBanList([Optional] Action<string> localStatus)
	{
	}

	[Token(Token = "0x6004B3B")]
	[Address(RVA = "0x43D9BF0", Offset = "0x43D9BF0", VA = "0x43D9BF0")]
	public static void RequestRegionBanList(int startIndex, [Optional][DefaultParameterValue(50)] int amount, [Optional] Action<string> localStatus)
	{
	}

	[Token(Token = "0x6004B3C")]
	[Address(RVA = "0x43D9ED0", Offset = "0x43D9ED0", VA = "0x43D9ED0")]
	private static RegionBanEntry[] ParseRegionBanEntries(Dictionary<byte, object>[] entries)
	{
		return null;
	}

	[Token(Token = "0x6004B3D")]
	[Address(RVA = "0x43DA3E0", Offset = "0x43DA3E0", VA = "0x43DA3E0")]
	public static void BatchSessionBan(string targets)
	{
	}

	[Token(Token = "0x6004B3E")]
	[Address(RVA = "0x43DA740", Offset = "0x43DA740", VA = "0x43DA740")]
	public static void BatchIPBan(string targets)
	{
	}

	[Token(Token = "0x6004B3F")]
	[Address(RVA = "0x43DA830", Offset = "0x43DA830", VA = "0x43DA830")]
	public static void BatchSessionUnban(string targets)
	{
	}

	[Token(Token = "0x6004B40")]
	[Address(RVA = "0x43DA8B0", Offset = "0x43DA8B0", VA = "0x43DA8B0")]
	public static void BatchIPUnban(string targets)
	{
	}

	[Token(Token = "0x6004B41")]
	[Address(RVA = "0x43DA450", Offset = "0x43DA450", VA = "0x43DA450")]
	private static void SendBatchRoomRemove(int removeType, int targetBy, string targets, Action<string> localStatus)
	{
	}

	[Token(Token = "0x6004B42")]
	[Address(RVA = "0x43DA9A0", Offset = "0x43DA9A0", VA = "0x43DA9A0")]
	public ModeratorManager()
	{
	}
}
