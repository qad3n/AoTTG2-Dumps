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

[Token(Token = "0x20009D3")]
internal class ModeratorManager : MonoBehaviour, IOnEventCallback, IInRoomCallbacks, IMatchmakingCallbacks
{
	[Token(Token = "0x400313A")]
	private const byte CodeRoomRemove = 180;

	[Token(Token = "0x400313B")]
	private const byte CodeRoomBanList = 181;

	[Token(Token = "0x400313C")]
	private const byte CodeRoomPlayerList = 182;

	[Token(Token = "0x400313D")]
	private const byte CodeRegionRemove = 183;

	[Token(Token = "0x400313E")]
	private const byte CodeRegionBanList = 184;

	[Token(Token = "0x400313F")]
	private const byte CodePlayerListNotification = 188;

	[Token(Token = "0x4003140")]
	private const byte CodePlayerJoinNotification = 189;

	[Token(Token = "0x4003141")]
	private const byte CodeServerResponse = 190;

	[Token(Token = "0x4003142")]
	private const int RemoveKick = 1;

	[Token(Token = "0x4003143")]
	private const int RemoveBan = 2;

	[Token(Token = "0x4003144")]
	private const int RemoveIPBan = 3;

	[Token(Token = "0x4003145")]
	private const int RemoveUnban = 4;

	[Token(Token = "0x4003146")]
	private const int RemoveUnIPBan = 5;

	[Token(Token = "0x4003147")]
	private const int TargetByActorNumber = 0;

	[Token(Token = "0x4003148")]
	private const int TargetBySessionID = 1;

	[Token(Token = "0x4003149")]
	private const int TargetByIPAddress = 2;

	[Token(Token = "0x400314A")]
	private const int TargetByTargetID = 3;

	[Token(Token = "0x400314B")]
	private const int TargetByEncryptedIPAddress = 4;

	[Token(Token = "0x400314C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static ModeratorManager _instance;

	[Token(Token = "0x400314D")]
	public const int AuthLevelTrusted = 0;

	[Token(Token = "0x400314E")]
	public const int AuthLevelModerator = 1;

	[Token(Token = "0x400314F")]
	public const int AuthLevelAdmin = 2;

	[Token(Token = "0x4003154")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	[CompilerGenerated]
	private static Action m_AuthChanged;

	[Token(Token = "0x4003155")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	[CompilerGenerated]
	private static Action m_PlayerListChanged;

	[Token(Token = "0x4003156")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	[CompilerGenerated]
	private static Action<string> m_StatusMessage;

	[Token(Token = "0x4003157")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	[CompilerGenerated]
	private static Action<RoomBanPage> m_RoomBanListReceived;

	[Token(Token = "0x4003158")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	[CompilerGenerated]
	private static Action<RegionBanPage> m_RegionBanListReceived;

	[Token(Token = "0x4003159")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly Dictionary<string, Action<Dictionary<byte, object>>> _pendingCallbacks;

	[Token(Token = "0x400315A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly Dictionary<string, float> _pendingTimestamps;

	[Token(Token = "0x400315B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private readonly Dictionary<string, float> _pendingTimeouts;

	[Token(Token = "0x400315C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private readonly Dictionary<string, Action> _pendingTimeoutCallbacks;

	[Token(Token = "0x17000FA6")]
	public static bool IsAuthenticated
	{
		[Token(Token = "0x6005ACF")]
		[Address(RVA = "0x5D2EF00", Offset = "0x5D2DF00", VA = "0x5D2EF00")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6005AD0")]
		[Address(RVA = "0x5D2EF70", Offset = "0x5D2DF70", VA = "0x5D2EF70")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000FA7")]
	public static int AuthLevel
	{
		[Token(Token = "0x6005AD1")]
		[Address(RVA = "0x5D2EFC0", Offset = "0x5D2DFC0", VA = "0x5D2EFC0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6005AD2")]
		[Address(RVA = "0x5D2F030", Offset = "0x5D2E030", VA = "0x5D2F030")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000FA8")]
	public static string AuthUsername
	{
		[Token(Token = "0x6005AD3")]
		[Address(RVA = "0x5D2F080", Offset = "0x5D2E080", VA = "0x5D2F080")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000FA9")]
	public static Dictionary<int, PlayerEntry> ActivePlayers
	{
		[Token(Token = "0x6005AD4")]
		[Address(RVA = "0x5D2F100", Offset = "0x5D2E100", VA = "0x5D2F100")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6005AD5")]
		[Address(RVA = "0x5D2F170", Offset = "0x5D2E170", VA = "0x5D2F170")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000FAA")]
	public static List<PlayerEntry> PastPlayers
	{
		[Token(Token = "0x6005AD6")]
		[Address(RVA = "0x5D2F1D0", Offset = "0x5D2E1D0", VA = "0x5D2F1D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6005AD7")]
		[Address(RVA = "0x5D2F240", Offset = "0x5D2E240", VA = "0x5D2F240")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x14000015")]
	public static event Action AuthChanged
	{
		[Token(Token = "0x6005AD8")]
		[Address(RVA = "0x5D2F2A0", Offset = "0x5D2E2A0", VA = "0x5D2F2A0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6005AD9")]
		[Address(RVA = "0x5D2F380", Offset = "0x5D2E380", VA = "0x5D2F380")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000016")]
	public static event Action PlayerListChanged
	{
		[Token(Token = "0x6005ADA")]
		[Address(RVA = "0x5D2F460", Offset = "0x5D2E460", VA = "0x5D2F460")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6005ADB")]
		[Address(RVA = "0x5D2F540", Offset = "0x5D2E540", VA = "0x5D2F540")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000017")]
	public static event Action<string> StatusMessage
	{
		[Token(Token = "0x6005ADC")]
		[Address(RVA = "0x5D2F620", Offset = "0x5D2E620", VA = "0x5D2F620")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6005ADD")]
		[Address(RVA = "0x5D2F710", Offset = "0x5D2E710", VA = "0x5D2F710")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000018")]
	public static event Action<RoomBanPage> RoomBanListReceived
	{
		[Token(Token = "0x6005ADE")]
		[Address(RVA = "0x5D2F800", Offset = "0x5D2E800", VA = "0x5D2F800")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6005ADF")]
		[Address(RVA = "0x5D2F8F0", Offset = "0x5D2E8F0", VA = "0x5D2F8F0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000019")]
	public static event Action<RegionBanPage> RegionBanListReceived
	{
		[Token(Token = "0x6005AE0")]
		[Address(RVA = "0x5D2F9E0", Offset = "0x5D2E9E0", VA = "0x5D2F9E0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6005AE1")]
		[Address(RVA = "0x5D2FAD0", Offset = "0x5D2EAD0", VA = "0x5D2FAD0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6005AE2")]
	[Address(RVA = "0x5D2FBC0", Offset = "0x5D2EBC0", VA = "0x5D2FBC0")]
	public static void Init()
	{
	}

	[Token(Token = "0x6005AE3")]
	[Address(RVA = "0x5D2FC40", Offset = "0x5D2EC40", VA = "0x5D2FC40")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x6005AE4")]
	[Address(RVA = "0x5D2FD40", Offset = "0x5D2ED40", VA = "0x5D2FD40")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6005AE5")]
	[Address(RVA = "0x5D2FE40", Offset = "0x5D2EE40", VA = "0x5D2FE40")]
	private void Update()
	{
	}

	[Token(Token = "0x6005AE6")]
	[Address(RVA = "0x5D30380", Offset = "0x5D2F380", VA = "0x5D30380", Slot = "4")]
	public void OnEvent(EventData photonEvent)
	{
	}

	[Token(Token = "0x6005AE7")]
	[Address(RVA = "0x5D30EC0", Offset = "0x5D2FEC0", VA = "0x5D30EC0", Slot = "5")]
	public void OnPlayerEnteredRoom(Player newPlayer)
	{
	}

	[Token(Token = "0x6005AE8")]
	[Address(RVA = "0x5D30ED0", Offset = "0x5D2FED0", VA = "0x5D30ED0", Slot = "6")]
	public void OnPlayerLeftRoom(Player otherPlayer)
	{
	}

	[Token(Token = "0x6005AE9")]
	[Address(RVA = "0x5D31140", Offset = "0x5D30140", VA = "0x5D31140", Slot = "7")]
	public void OnRoomPropertiesUpdate(Hashtable propertiesThatChanged)
	{
	}

	[Token(Token = "0x6005AEA")]
	[Address(RVA = "0x5D31150", Offset = "0x5D30150", VA = "0x5D31150", Slot = "8")]
	public void OnPlayerPropertiesUpdate(Player targetPlayer, Hashtable changedProps)
	{
	}

	[Token(Token = "0x6005AEB")]
	[Address(RVA = "0x5D31160", Offset = "0x5D30160", VA = "0x5D31160", Slot = "9")]
	public void OnMasterClientSwitched(Player newMasterClient)
	{
	}

	[Token(Token = "0x6005AEC")]
	[Address(RVA = "0x5D31170", Offset = "0x5D30170", VA = "0x5D31170", Slot = "13")]
	public void OnJoinedRoom()
	{
	}

	[Token(Token = "0x6005AED")]
	[Address(RVA = "0x5D31610", Offset = "0x5D30610", VA = "0x5D31610", Slot = "16")]
	public void OnLeftRoom()
	{
	}

	[Token(Token = "0x6005AEE")]
	[Address(RVA = "0x5D311D0", Offset = "0x5D301D0", VA = "0x5D311D0")]
	private static void UpdateAuthFromRoles()
	{
	}

	[Token(Token = "0x6005AEF")]
	[Address(RVA = "0x5D31820", Offset = "0x5D30820", VA = "0x5D31820")]
	private static void ClearAuth()
	{
	}

	[Token(Token = "0x6005AF0")]
	[Address(RVA = "0x5D31B90", Offset = "0x5D30B90", VA = "0x5D31B90", Slot = "10")]
	public void OnFriendListUpdate(List<FriendInfo> friendList)
	{
	}

	[Token(Token = "0x6005AF1")]
	[Address(RVA = "0x5D31BA0", Offset = "0x5D30BA0", VA = "0x5D31BA0", Slot = "11")]
	public void OnCreatedRoom()
	{
	}

	[Token(Token = "0x6005AF2")]
	[Address(RVA = "0x5D31BB0", Offset = "0x5D30BB0", VA = "0x5D31BB0", Slot = "12")]
	public void OnCreateRoomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x6005AF3")]
	[Address(RVA = "0x5D31BC0", Offset = "0x5D30BC0", VA = "0x5D31BC0", Slot = "14")]
	public void OnJoinRoomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x6005AF4")]
	[Address(RVA = "0x5D31BD0", Offset = "0x5D30BD0", VA = "0x5D31BD0", Slot = "15")]
	public void OnJoinRandomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x6005AF5")]
	[Address(RVA = "0x5D2FE50", Offset = "0x5D2EE50", VA = "0x5D2FE50")]
	private void TickTimeouts()
	{
	}

	[Token(Token = "0x6005AF6")]
	[Address(RVA = "0x5D31BE0", Offset = "0x5D30BE0", VA = "0x5D31BE0")]
	private static string TrackRequest(float timeoutSec, Action<Dictionary<byte, object>> onResponse, [Optional] Action onTimeout)
	{
		return null;
	}

	[Token(Token = "0x6005AF7")]
	[Address(RVA = "0x5D31D80", Offset = "0x5D30D80", VA = "0x5D31D80")]
	private static void RaiseModEvent(byte code, Dictionary<byte, object> data)
	{
	}

	[Token(Token = "0x6005AF8")]
	[Address(RVA = "0x5D31EA0", Offset = "0x5D30EA0", VA = "0x5D31EA0")]
	private static void InvokeStatus(string text, [Optional] Action<string> localStatus)
	{
	}

	[Token(Token = "0x6005AF9")]
	[Address(RVA = "0x5D31F50", Offset = "0x5D30F50", VA = "0x5D31F50")]
	private static Dictionary<byte, object>[] GetResponseEntries(Dictionary<byte, object> data, byte entriesKey)
	{
		return null;
	}

	[Token(Token = "0x6005AFA")]
	[Address(RVA = "0x5D32160", Offset = "0x5D31160", VA = "0x5D32160")]
	private static int ReadInt(Dictionary<byte, object> data, byte key, int defaultValue = 0)
	{
		return default(int);
	}

	[Token(Token = "0x6005AFB")]
	[Address(RVA = "0x5D32280", Offset = "0x5D31280", VA = "0x5D32280")]
	private static PlayerEntry ParsePlayerEntry(Dictionary<byte, object> entry)
	{
		return null;
	}

	[Token(Token = "0x6005AFC")]
	[Address(RVA = "0x5D324E0", Offset = "0x5D314E0", VA = "0x5D324E0")]
	public static void RequestPlayerList([Optional] Action<string> localStatus)
	{
	}

	[Token(Token = "0x6005AFD")]
	[Address(RVA = "0x5D32760", Offset = "0x5D31760", VA = "0x5D32760")]
	private static void PopulatePlayerList(Dictionary<byte, object> data)
	{
	}

	[Token(Token = "0x6005AFE")]
	[Address(RVA = "0x5D30770", Offset = "0x5D2F770", VA = "0x5D30770")]
	private static void HandlePlayerListNotification(EventData photonEvent)
	{
	}

	[Token(Token = "0x6005AFF")]
	[Address(RVA = "0x5D30B60", Offset = "0x5D2FB60", VA = "0x5D30B60")]
	private static void HandlePlayerJoinNotification(EventData photonEvent)
	{
	}

	[Token(Token = "0x6005B00")]
	[Address(RVA = "0x5D329D0", Offset = "0x5D319D0", VA = "0x5D329D0")]
	public static void KickPlayer(int actorNumber, [Optional] Action<string> localStatus)
	{
	}

	[Token(Token = "0x6005B01")]
	[Address(RVA = "0x5D32CE0", Offset = "0x5D31CE0", VA = "0x5D32CE0")]
	public static void RoomBan(int actorNumber, bool ipBan, [Optional] Action<string> localStatus, [Optional] string reason)
	{
	}

	[Token(Token = "0x6005B02")]
	[Address(RVA = "0x5D33060", Offset = "0x5D32060", VA = "0x5D33060")]
	public static void RoomBanPlayerEntry(PlayerEntry player, bool ipBan, [Optional] Action<string> localStatus, [Optional] string reason)
	{
	}

	[Token(Token = "0x6005B03")]
	[Address(RVA = "0x5D335E0", Offset = "0x5D325E0", VA = "0x5D335E0")]
	public static void RoomUnban(RoomBanEntry banEntry, [Optional] Action<string> localStatus, [Optional] string reason)
	{
	}

	[Token(Token = "0x6005B04")]
	[Address(RVA = "0x5D33A20", Offset = "0x5D32A20", VA = "0x5D33A20")]
	public static void RequestRoomBanList([Optional] Action<string> localStatus)
	{
	}

	[Token(Token = "0x6005B05")]
	[Address(RVA = "0x5D33A70", Offset = "0x5D32A70", VA = "0x5D33A70")]
	public static void RequestRoomBanList(int startIndex, [Optional][DefaultParameterValue(50)] int amount, [Optional] Action<string> localStatus)
	{
	}

	[Token(Token = "0x6005B06")]
	[Address(RVA = "0x5D33D70", Offset = "0x5D32D70", VA = "0x5D33D70")]
	private static RoomBanEntry[] ParseRoomBanEntries(Dictionary<byte, object>[] entries)
	{
		return null;
	}

	[Token(Token = "0x6005B07")]
	[Address(RVA = "0x5D34350", Offset = "0x5D33350", VA = "0x5D34350")]
	public static void RegionBan(int actorNumber, bool ipBan, [Optional] Action<string> localStatus, [Optional] string reason)
	{
	}

	[Token(Token = "0x6005B08")]
	[Address(RVA = "0x5D346D0", Offset = "0x5D336D0", VA = "0x5D346D0")]
	public static void RegionBanPlayerEntry(PlayerEntry player, bool ipBan, [Optional] Action<string> localStatus, [Optional] string reason)
	{
	}

	[Token(Token = "0x6005B09")]
	[Address(RVA = "0x5D34C50", Offset = "0x5D33C50", VA = "0x5D34C50")]
	public static void RegionUnban(RegionBanEntry banEntry, [Optional] Action<string> localStatus, [Optional] string reason)
	{
	}

	[Token(Token = "0x6005B0A")]
	[Address(RVA = "0x5D34FA0", Offset = "0x5D33FA0", VA = "0x5D34FA0")]
	public static void RequestRegionBanList([Optional] Action<string> localStatus)
	{
	}

	[Token(Token = "0x6005B0B")]
	[Address(RVA = "0x5D34FF0", Offset = "0x5D33FF0", VA = "0x5D34FF0")]
	public static void RequestRegionBanList(int startIndex, [Optional][DefaultParameterValue(50)] int amount, [Optional] Action<string> localStatus)
	{
	}

	[Token(Token = "0x6005B0C")]
	[Address(RVA = "0x5D352F0", Offset = "0x5D342F0", VA = "0x5D352F0")]
	private static RegionBanEntry[] ParseRegionBanEntries(Dictionary<byte, object>[] entries)
	{
		return null;
	}

	[Token(Token = "0x6005B0D")]
	[Address(RVA = "0x5D35830", Offset = "0x5D34830", VA = "0x5D35830")]
	public static void BatchSessionBan(string targets)
	{
	}

	[Token(Token = "0x6005B0E")]
	[Address(RVA = "0x5D35BA0", Offset = "0x5D34BA0", VA = "0x5D35BA0")]
	public static void BatchIPBan(string targets)
	{
	}

	[Token(Token = "0x6005B0F")]
	[Address(RVA = "0x5D35CB0", Offset = "0x5D34CB0", VA = "0x5D35CB0")]
	public static void BatchSessionUnban(string targets)
	{
	}

	[Token(Token = "0x6005B10")]
	[Address(RVA = "0x5D35D30", Offset = "0x5D34D30", VA = "0x5D35D30")]
	public static void BatchIPUnban(string targets)
	{
	}

	[Token(Token = "0x6005B11")]
	[Address(RVA = "0x5D358B0", Offset = "0x5D348B0", VA = "0x5D358B0")]
	private static void SendBatchRoomRemove(int removeType, int targetBy, string targets, Action<string> localStatus)
	{
	}

	[Token(Token = "0x6005B12")]
	[Address(RVA = "0x5D35E50", Offset = "0x5D34E50", VA = "0x5D35E50")]
	public ModeratorManager()
	{
	}
}
