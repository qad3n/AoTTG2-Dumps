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

[Token(Token = "0x200096D")]
internal class ModeratorManager : MonoBehaviour, IOnEventCallback, IInRoomCallbacks, IMatchmakingCallbacks
{
	[Token(Token = "0x4002E8A")]
	private const byte CodeRoomRemove = 180;

	[Token(Token = "0x4002E8B")]
	private const byte CodeRoomBanList = 181;

	[Token(Token = "0x4002E8C")]
	private const byte CodeRoomPlayerList = 182;

	[Token(Token = "0x4002E8D")]
	private const byte CodeRegionRemove = 183;

	[Token(Token = "0x4002E8E")]
	private const byte CodeRegionBanList = 184;

	[Token(Token = "0x4002E8F")]
	private const byte CodePlayerListNotification = 188;

	[Token(Token = "0x4002E90")]
	private const byte CodePlayerJoinNotification = 189;

	[Token(Token = "0x4002E91")]
	private const byte CodeServerResponse = 190;

	[Token(Token = "0x4002E92")]
	private const int RemoveKick = 1;

	[Token(Token = "0x4002E93")]
	private const int RemoveBan = 2;

	[Token(Token = "0x4002E94")]
	private const int RemoveIPBan = 3;

	[Token(Token = "0x4002E95")]
	private const int RemoveUnban = 4;

	[Token(Token = "0x4002E96")]
	private const int RemoveUnIPBan = 5;

	[Token(Token = "0x4002E97")]
	private const int TargetByActorNumber = 0;

	[Token(Token = "0x4002E98")]
	private const int TargetBySessionID = 1;

	[Token(Token = "0x4002E99")]
	private const int TargetByIPAddress = 2;

	[Token(Token = "0x4002E9A")]
	private const int TargetByTargetID = 3;

	[Token(Token = "0x4002E9B")]
	private const int TargetByEncryptedIPAddress = 4;

	[Token(Token = "0x4002E9C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static ModeratorManager _instance;

	[Token(Token = "0x4002E9D")]
	public const int AuthLevelTrusted = 0;

	[Token(Token = "0x4002E9E")]
	public const int AuthLevelModerator = 1;

	[Token(Token = "0x4002E9F")]
	public const int AuthLevelAdmin = 2;

	[Token(Token = "0x4002EA4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	[CompilerGenerated]
	private static Action m_AuthChanged;

	[Token(Token = "0x4002EA5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	[CompilerGenerated]
	private static Action m_PlayerListChanged;

	[Token(Token = "0x4002EA6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	[CompilerGenerated]
	private static Action<string> m_StatusMessage;

	[Token(Token = "0x4002EA7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	[CompilerGenerated]
	private static Action<RoomBanPage> m_RoomBanListReceived;

	[Token(Token = "0x4002EA8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	[CompilerGenerated]
	private static Action<RegionBanPage> m_RegionBanListReceived;

	[Token(Token = "0x4002EA9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly Dictionary<string, Action<Dictionary<byte, object>>> _pendingCallbacks;

	[Token(Token = "0x4002EAA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly Dictionary<string, float> _pendingTimestamps;

	[Token(Token = "0x4002EAB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private readonly Dictionary<string, float> _pendingTimeouts;

	[Token(Token = "0x4002EAC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private readonly Dictionary<string, Action> _pendingTimeoutCallbacks;

	[Token(Token = "0x17000FC7")]
	public static bool IsAuthenticated
	{
		[Token(Token = "0x6005778")]
		[Address(RVA = "0x2371360", Offset = "0x236F960", VA = "0x182371360")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6005779")]
		[Address(RVA = "0x2371A00", Offset = "0x2370000", VA = "0x182371A00")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000FC8")]
	public static int AuthLevel
	{
		[Token(Token = "0x600577A")]
		[Address(RVA = "0x23712B0", Offset = "0x236F8B0", VA = "0x1823712B0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600577B")]
		[Address(RVA = "0x23719A0", Offset = "0x236FFA0", VA = "0x1823719A0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000FC9")]
	public static string AuthUsername
	{
		[Token(Token = "0x600577C")]
		[Address(RVA = "0x2371300", Offset = "0x236F900", VA = "0x182371300")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000FCA")]
	public static Dictionary<int, PlayerEntry> ActivePlayers
	{
		[Token(Token = "0x600577D")]
		[Address(RVA = "0x2371260", Offset = "0x236F860", VA = "0x182371260")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600577E")]
		[Address(RVA = "0x2371930", Offset = "0x236FF30", VA = "0x182371930")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000FCB")]
	public static List<PlayerEntry> PastPlayers
	{
		[Token(Token = "0x600577F")]
		[Address(RVA = "0x23713B0", Offset = "0x236F9B0", VA = "0x1823713B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6005780")]
		[Address(RVA = "0x2371A60", Offset = "0x2370060", VA = "0x182371A60")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x14000011")]
	public static event Action AuthChanged
	{
		[Token(Token = "0x6005781")]
		[Address(RVA = "0x2370D30", Offset = "0x236F330", VA = "0x182370D30")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6005782")]
		[Address(RVA = "0x2371400", Offset = "0x236FA00", VA = "0x182371400")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000012")]
	public static event Action PlayerListChanged
	{
		[Token(Token = "0x6005783")]
		[Address(RVA = "0x2370E30", Offset = "0x236F430", VA = "0x182370E30")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6005784")]
		[Address(RVA = "0x2371500", Offset = "0x236FB00", VA = "0x182371500")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000013")]
	public static event Action<string> StatusMessage
	{
		[Token(Token = "0x6005785")]
		[Address(RVA = "0x2371150", Offset = "0x236F750", VA = "0x182371150")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6005786")]
		[Address(RVA = "0x2371820", Offset = "0x236FE20", VA = "0x182371820")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000014")]
	public static event Action<RoomBanPage> RoomBanListReceived
	{
		[Token(Token = "0x6005787")]
		[Address(RVA = "0x2371040", Offset = "0x236F640", VA = "0x182371040")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6005788")]
		[Address(RVA = "0x2371710", Offset = "0x236FD10", VA = "0x182371710")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000015")]
	public static event Action<RegionBanPage> RegionBanListReceived
	{
		[Token(Token = "0x6005789")]
		[Address(RVA = "0x2370F30", Offset = "0x236F530", VA = "0x182370F30")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600578A")]
		[Address(RVA = "0x2371600", Offset = "0x236FC00", VA = "0x182371600")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x600578B")]
	[Address(RVA = "0x236C650", Offset = "0x236AC50", VA = "0x18236C650")]
	public static void Init()
	{
	}

	[Token(Token = "0x600578C")]
	[Address(RVA = "0x236CB00", Offset = "0x236B100", VA = "0x18236CB00")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x600578D")]
	[Address(RVA = "0x236CA10", Offset = "0x236B010", VA = "0x18236CA10")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x600578E")]
	[Address(RVA = "0x2370AE0", Offset = "0x236F0E0", VA = "0x182370AE0")]
	private void Update()
	{
	}

	[Token(Token = "0x600578F")]
	[Address(RVA = "0x236CBF0", Offset = "0x236B1F0", VA = "0x18236CBF0", Slot = "4")]
	public void OnEvent(EventData photonEvent)
	{
	}

	[Token(Token = "0x6005790")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
	public void OnPlayerEnteredRoom(Player newPlayer)
	{
	}

	[Token(Token = "0x6005791")]
	[Address(RVA = "0x236D190", Offset = "0x236B790", VA = "0x18236D190", Slot = "6")]
	public void OnPlayerLeftRoom(Player otherPlayer)
	{
	}

	[Token(Token = "0x6005792")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "7")]
	public void OnRoomPropertiesUpdate(Hashtable propertiesThatChanged)
	{
	}

	[Token(Token = "0x6005793")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "8")]
	public void OnPlayerPropertiesUpdate(Player targetPlayer, Hashtable changedProps)
	{
	}

	[Token(Token = "0x6005794")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "9")]
	public void OnMasterClientSwitched(Player newMasterClient)
	{
	}

	[Token(Token = "0x6005795")]
	[Address(RVA = "0x236CFA0", Offset = "0x236B5A0", VA = "0x18236CFA0", Slot = "13")]
	public void OnJoinedRoom()
	{
	}

	[Token(Token = "0x6005796")]
	[Address(RVA = "0x236CFE0", Offset = "0x236B5E0", VA = "0x18236CFE0", Slot = "16")]
	public void OnLeftRoom()
	{
	}

	[Token(Token = "0x6005797")]
	[Address(RVA = "0x23708B0", Offset = "0x236EEB0", VA = "0x1823708B0")]
	private static void UpdateAuthFromRoles()
	{
	}

	[Token(Token = "0x6005798")]
	[Address(RVA = "0x236BC90", Offset = "0x236A290", VA = "0x18236BC90")]
	private static void ClearAuth()
	{
	}

	[Token(Token = "0x6005799")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "10")]
	public void OnFriendListUpdate(List<FriendInfo> friendList)
	{
	}

	[Token(Token = "0x600579A")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "11")]
	public void OnCreatedRoom()
	{
	}

	[Token(Token = "0x600579B")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "12")]
	public void OnCreateRoomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x600579C")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "14")]
	public void OnJoinRoomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x600579D")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "15")]
	public void OnJoinRandomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x600579E")]
	[Address(RVA = "0x23702A0", Offset = "0x236E8A0", VA = "0x1823702A0")]
	private void TickTimeouts()
	{
	}

	[Token(Token = "0x600579F")]
	[Address(RVA = "0x23706F0", Offset = "0x236ECF0", VA = "0x1823706F0")]
	private static string TrackRequest(float timeoutSec, Action<Dictionary<byte, object>> onResponse, [Optional] Action onTimeout)
	{
		return null;
	}

	[Token(Token = "0x60057A0")]
	[Address(RVA = "0x236DFE0", Offset = "0x236C5E0", VA = "0x18236DFE0")]
	private static void RaiseModEvent(byte code, Dictionary<byte, object> data)
	{
	}

	[Token(Token = "0x60057A1")]
	[Address(RVA = "0x236C6E0", Offset = "0x236ACE0", VA = "0x18236C6E0")]
	private static void InvokeStatus(string text, [Optional] Action<string> localStatus)
	{
	}

	[Token(Token = "0x60057A2")]
	[Address(RVA = "0x236BE60", Offset = "0x236A460", VA = "0x18236BE60")]
	private static Dictionary<byte, object>[] GetResponseEntries(Dictionary<byte, object> data, byte entriesKey)
	{
		return null;
	}

	[Token(Token = "0x60057A3")]
	[Address(RVA = "0x236E100", Offset = "0x236C700", VA = "0x18236E100")]
	private static int ReadInt(Dictionary<byte, object> data, byte key, int defaultValue = 0)
	{
		return default(int);
	}

	[Token(Token = "0x60057A4")]
	[Address(RVA = "0x236D3B0", Offset = "0x236B9B0", VA = "0x18236D3B0")]
	private static PlayerEntry ParsePlayerEntry(Dictionary<byte, object> entry)
	{
		return null;
	}

	[Token(Token = "0x60057A5")]
	[Address(RVA = "0x236ED30", Offset = "0x236D330", VA = "0x18236ED30")]
	public static void RequestPlayerList([Optional] Action<string> localStatus)
	{
	}

	[Token(Token = "0x60057A6")]
	[Address(RVA = "0x236DE20", Offset = "0x236C420", VA = "0x18236DE20")]
	private static void PopulatePlayerList(Dictionary<byte, object> data)
	{
	}

	[Token(Token = "0x60057A7")]
	[Address(RVA = "0x236C330", Offset = "0x236A930", VA = "0x18236C330")]
	private static void HandlePlayerListNotification(EventData photonEvent)
	{
	}

	[Token(Token = "0x60057A8")]
	[Address(RVA = "0x236C060", Offset = "0x236A660", VA = "0x18236C060")]
	private static void HandlePlayerJoinNotification(EventData photonEvent)
	{
	}

	[Token(Token = "0x60057A9")]
	[Address(RVA = "0x236C770", Offset = "0x236AD70", VA = "0x18236C770")]
	public static void KickPlayer(int actorNumber, [Optional] Action<string> localStatus)
	{
	}

	[Token(Token = "0x60057AA")]
	[Address(RVA = "0x236F970", Offset = "0x236DF70", VA = "0x18236F970")]
	public static void RoomBan(int actorNumber, bool ipBan, [Optional] Action<string> localStatus, [Optional] string reason)
	{
	}

	[Token(Token = "0x60057AB")]
	[Address(RVA = "0x236F520", Offset = "0x236DB20", VA = "0x18236F520")]
	public static void RoomBanPlayerEntry(PlayerEntry player, bool ipBan, [Optional] Action<string> localStatus, [Optional] string reason)
	{
	}

	[Token(Token = "0x60057AC")]
	[Address(RVA = "0x236FC70", Offset = "0x236E270", VA = "0x18236FC70")]
	public static void RoomUnban(RoomBanEntry banEntry, [Optional] Action<string> localStatus, [Optional] string reason)
	{
	}

	[Token(Token = "0x60057AD")]
	[Address(RVA = "0x236F4C0", Offset = "0x236DAC0", VA = "0x18236F4C0")]
	public static void RequestRoomBanList([Optional] Action<string> localStatus)
	{
	}

	[Token(Token = "0x60057AE")]
	[Address(RVA = "0x236F230", Offset = "0x236D830", VA = "0x18236F230")]
	public static void RequestRoomBanList(int startIndex, [Optional][DefaultParameterValue(50)] int amount, [Optional] Action<string> localStatus)
	{
	}

	[Token(Token = "0x60057AF")]
	[Address(RVA = "0x236D9C0", Offset = "0x236BFC0", VA = "0x18236D9C0")]
	private static RoomBanEntry[] ParseRoomBanEntries(Dictionary<byte, object>[] entries)
	{
		return null;
	}

	[Token(Token = "0x60057B0")]
	[Address(RVA = "0x236E750", Offset = "0x236CD50", VA = "0x18236E750")]
	public static void RegionBan(int actorNumber, bool ipBan, [Optional] Action<string> localStatus, [Optional] string reason)
	{
	}

	[Token(Token = "0x60057B1")]
	[Address(RVA = "0x236E300", Offset = "0x236C900", VA = "0x18236E300")]
	public static void RegionBanPlayerEntry(PlayerEntry player, bool ipBan, [Optional] Action<string> localStatus, [Optional] string reason)
	{
	}

	[Token(Token = "0x60057B2")]
	[Address(RVA = "0x236EA50", Offset = "0x236D050", VA = "0x18236EA50")]
	public static void RegionUnban(RegionBanEntry banEntry, [Optional] Action<string> localStatus, [Optional] string reason)
	{
	}

	[Token(Token = "0x60057B3")]
	[Address(RVA = "0x236F1D0", Offset = "0x236D7D0", VA = "0x18236F1D0")]
	public static void RequestRegionBanList([Optional] Action<string> localStatus)
	{
	}

	[Token(Token = "0x60057B4")]
	[Address(RVA = "0x236EF40", Offset = "0x236D540", VA = "0x18236EF40")]
	public static void RequestRegionBanList(int startIndex, [Optional][DefaultParameterValue(50)] int amount, [Optional] Action<string> localStatus)
	{
	}

	[Token(Token = "0x60057B5")]
	[Address(RVA = "0x236D5F0", Offset = "0x236BBF0", VA = "0x18236D5F0")]
	private static RegionBanEntry[] ParseRegionBanEntries(Dictionary<byte, object>[] entries)
	{
		return null;
	}

	[Token(Token = "0x60057B6")]
	[Address(RVA = "0x236BB90", Offset = "0x236A190", VA = "0x18236BB90")]
	public static void BatchSessionBan(string targets)
	{
	}

	[Token(Token = "0x60057B7")]
	[Address(RVA = "0x236B9B0", Offset = "0x2369FB0", VA = "0x18236B9B0")]
	public static void BatchIPBan(string targets)
	{
	}

	[Token(Token = "0x60057B8")]
	[Address(RVA = "0x236BC10", Offset = "0x236A210", VA = "0x18236BC10")]
	public static void BatchSessionUnban(string targets)
	{
	}

	[Token(Token = "0x60057B9")]
	[Address(RVA = "0x236BAA0", Offset = "0x236A0A0", VA = "0x18236BAA0")]
	public static void BatchIPUnban(string targets)
	{
	}

	[Token(Token = "0x60057BA")]
	[Address(RVA = "0x2370000", Offset = "0x236E600", VA = "0x182370000")]
	private static void SendBatchRoomRemove(int removeType, int targetBy, string targets, Action<string> localStatus)
	{
	}

	[Token(Token = "0x60057BB")]
	[Address(RVA = "0x2370BF0", Offset = "0x236F1F0", VA = "0x182370BF0")]
	public ModeratorManager()
	{
	}
}
