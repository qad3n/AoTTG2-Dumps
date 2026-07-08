using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using ExitGames.Client.Photon;
using Il2CppDummyDll;
using Photon.Realtime;
using UnityEngine;

namespace Anticheat;

[Token(Token = "0x200077E")]
internal class ModeratorManager : MonoBehaviour, IOnEventCallback, IInRoomCallbacks, IMatchmakingCallbacks
{
	[Token(Token = "0x400241A")]
	private const byte CodeRoomRemove = 180;

	[Token(Token = "0x400241B")]
	private const byte CodeRoomBanList = 181;

	[Token(Token = "0x400241C")]
	private const byte CodeRoomPlayerList = 182;

	[Token(Token = "0x400241D")]
	private const byte CodeRegionRemove = 183;

	[Token(Token = "0x400241E")]
	private const byte CodeRegionBanList = 184;

	[Token(Token = "0x400241F")]
	private const byte CodePlayerListNotification = 188;

	[Token(Token = "0x4002420")]
	private const byte CodePlayerJoinNotification = 189;

	[Token(Token = "0x4002421")]
	private const byte CodeServerResponse = 190;

	[Token(Token = "0x4002422")]
	private const int RemoveKick = 1;

	[Token(Token = "0x4002423")]
	private const int RemoveBan = 2;

	[Token(Token = "0x4002424")]
	private const int RemoveIPBan = 3;

	[Token(Token = "0x4002425")]
	private const int RemoveUnban = 4;

	[Token(Token = "0x4002426")]
	private const int RemoveUnIPBan = 5;

	[Token(Token = "0x4002427")]
	private const int TargetByActorNumber = 0;

	[Token(Token = "0x4002428")]
	private const int TargetBySessionID = 1;

	[Token(Token = "0x4002429")]
	private const int TargetByIPAddress = 2;

	[Token(Token = "0x400242A")]
	private const int TargetByTargetID = 3;

	[Token(Token = "0x400242B")]
	private const int TargetByEncryptedIPAddress = 4;

	[Token(Token = "0x400242C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static ModeratorManager _instance;

	[Token(Token = "0x400242D")]
	public const int AuthLevelTrusted = 0;

	[Token(Token = "0x400242E")]
	public const int AuthLevelModerator = 1;

	[Token(Token = "0x400242F")]
	public const int AuthLevelAdmin = 2;

	[Token(Token = "0x4002439")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly Dictionary<string, Action<Dictionary<byte, object>>> _pendingCallbacks;

	[Token(Token = "0x400243A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly Dictionary<string, float> _pendingTimestamps;

	[Token(Token = "0x400243B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private readonly Dictionary<string, float> _pendingTimeouts;

	[Token(Token = "0x400243C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private readonly Dictionary<string, Action> _pendingTimeoutCallbacks;

	[Token(Token = "0x17000DC8")]
	public static bool IsAuthenticated
	{
		[Token(Token = "0x600480C")]
		[Address(RVA = "0x40B6040", Offset = "0x40B6040", VA = "0x40B6040")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600480D")]
		[Address(RVA = "0x40B60B0", Offset = "0x40B60B0", VA = "0x40B60B0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000DC9")]
	public static int AuthLevel
	{
		[Token(Token = "0x600480E")]
		[Address(RVA = "0x40B6100", Offset = "0x40B6100", VA = "0x40B6100")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600480F")]
		[Address(RVA = "0x40B6170", Offset = "0x40B6170", VA = "0x40B6170")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000DCA")]
	public static string AuthUsername
	{
		[Token(Token = "0x6004810")]
		[Address(RVA = "0x40B61C0", Offset = "0x40B61C0", VA = "0x40B61C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000DCB")]
	public static Dictionary<int, PlayerEntry> ActivePlayers
	{
		[Token(Token = "0x6004811")]
		[Address(RVA = "0x40B6240", Offset = "0x40B6240", VA = "0x40B6240")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6004812")]
		[Address(RVA = "0x40B62B0", Offset = "0x40B62B0", VA = "0x40B62B0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000DCC")]
	public static List<PlayerEntry> PastPlayers
	{
		[Token(Token = "0x6004813")]
		[Address(RVA = "0x40B6310", Offset = "0x40B6310", VA = "0x40B6310")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6004814")]
		[Address(RVA = "0x40B6380", Offset = "0x40B6380", VA = "0x40B6380")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x14000010")]
	public static event Action AuthChanged
	{
		[Token(Token = "0x6004815")]
		[Address(RVA = "0x40B63E0", Offset = "0x40B63E0", VA = "0x40B63E0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6004816")]
		[Address(RVA = "0x40B64C0", Offset = "0x40B64C0", VA = "0x40B64C0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000011")]
	public static event Action PlayerListChanged
	{
		[Token(Token = "0x6004817")]
		[Address(RVA = "0x40B65A0", Offset = "0x40B65A0", VA = "0x40B65A0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6004818")]
		[Address(RVA = "0x40B6680", Offset = "0x40B6680", VA = "0x40B6680")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000012")]
	public static event Action<string> StatusMessage
	{
		[Token(Token = "0x6004819")]
		[Address(RVA = "0x40B6760", Offset = "0x40B6760", VA = "0x40B6760")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600481A")]
		[Address(RVA = "0x40B6860", Offset = "0x40B6860", VA = "0x40B6860")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000013")]
	public static event Action<RoomBanPage> RoomBanListReceived
	{
		[Token(Token = "0x600481B")]
		[Address(RVA = "0x40B6960", Offset = "0x40B6960", VA = "0x40B6960")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600481C")]
		[Address(RVA = "0x40B6A60", Offset = "0x40B6A60", VA = "0x40B6A60")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000014")]
	public static event Action<RegionBanPage> RegionBanListReceived
	{
		[Token(Token = "0x600481D")]
		[Address(RVA = "0x40B6B60", Offset = "0x40B6B60", VA = "0x40B6B60")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600481E")]
		[Address(RVA = "0x40B6C60", Offset = "0x40B6C60", VA = "0x40B6C60")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x600481F")]
	[Address(RVA = "0x40B6D60", Offset = "0x40B6D60", VA = "0x40B6D60")]
	public static void Init()
	{
	}

	[Token(Token = "0x6004820")]
	[Address(RVA = "0x40B6DE0", Offset = "0x40B6DE0", VA = "0x40B6DE0")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x6004821")]
	[Address(RVA = "0x40B6EE0", Offset = "0x40B6EE0", VA = "0x40B6EE0")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6004822")]
	[Address(RVA = "0x40B6FE0", Offset = "0x40B6FE0", VA = "0x40B6FE0")]
	private void Update()
	{
	}

	[Token(Token = "0x6004823")]
	[Address(RVA = "0x40B7610", Offset = "0x40B7610", VA = "0x40B7610", Slot = "4")]
	public void OnEvent(EventData photonEvent)
	{
	}

	[Token(Token = "0x6004824")]
	[Address(RVA = "0x40B81E0", Offset = "0x40B81E0", VA = "0x40B81E0", Slot = "5")]
	public void OnPlayerEnteredRoom(Player newPlayer)
	{
	}

	[Token(Token = "0x6004825")]
	[Address(RVA = "0x40B81F0", Offset = "0x40B81F0", VA = "0x40B81F0", Slot = "6")]
	public void OnPlayerLeftRoom(Player otherPlayer)
	{
	}

	[Token(Token = "0x6004826")]
	[Address(RVA = "0x40B8460", Offset = "0x40B8460", VA = "0x40B8460", Slot = "7")]
	public void OnRoomPropertiesUpdate(Hashtable propertiesThatChanged)
	{
	}

	[Token(Token = "0x6004827")]
	[Address(RVA = "0x40B8470", Offset = "0x40B8470", VA = "0x40B8470", Slot = "8")]
	public void OnPlayerPropertiesUpdate(Player targetPlayer, Hashtable changedProps)
	{
	}

	[Token(Token = "0x6004828")]
	[Address(RVA = "0x40B8480", Offset = "0x40B8480", VA = "0x40B8480", Slot = "9")]
	public void OnMasterClientSwitched(Player newMasterClient)
	{
	}

	[Token(Token = "0x6004829")]
	[Address(RVA = "0x40B8490", Offset = "0x40B8490", VA = "0x40B8490", Slot = "13")]
	public void OnJoinedRoom()
	{
	}

	[Token(Token = "0x600482A")]
	[Address(RVA = "0x40B8920", Offset = "0x40B8920", VA = "0x40B8920", Slot = "16")]
	public void OnLeftRoom()
	{
	}

	[Token(Token = "0x600482B")]
	[Address(RVA = "0x40B84E0", Offset = "0x40B84E0", VA = "0x40B84E0")]
	private static void UpdateAuthFromRoles()
	{
	}

	[Token(Token = "0x600482C")]
	[Address(RVA = "0x40B8B40", Offset = "0x40B8B40", VA = "0x40B8B40")]
	private static void ClearAuth()
	{
	}

	[Token(Token = "0x600482D")]
	[Address(RVA = "0x40B8EE0", Offset = "0x40B8EE0", VA = "0x40B8EE0", Slot = "10")]
	public void OnFriendListUpdate(List<FriendInfo> friendList)
	{
	}

	[Token(Token = "0x600482E")]
	[Address(RVA = "0x40B8EF0", Offset = "0x40B8EF0", VA = "0x40B8EF0", Slot = "11")]
	public void OnCreatedRoom()
	{
	}

	[Token(Token = "0x600482F")]
	[Address(RVA = "0x40B8F00", Offset = "0x40B8F00", VA = "0x40B8F00", Slot = "12")]
	public void OnCreateRoomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x6004830")]
	[Address(RVA = "0x40B8F10", Offset = "0x40B8F10", VA = "0x40B8F10", Slot = "14")]
	public void OnJoinRoomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x6004831")]
	[Address(RVA = "0x40B8F20", Offset = "0x40B8F20", VA = "0x40B8F20", Slot = "15")]
	public void OnJoinRandomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x6004832")]
	[Address(RVA = "0x40B6FF0", Offset = "0x40B6FF0", VA = "0x40B6FF0")]
	private void TickTimeouts()
	{
	}

	[Token(Token = "0x6004833")]
	[Address(RVA = "0x40B8F30", Offset = "0x40B8F30", VA = "0x40B8F30")]
	private static string TrackRequest(float timeoutSec, Action<Dictionary<byte, object>> onResponse, [Optional] Action onTimeout)
	{
		return null;
	}

	[Token(Token = "0x6004834")]
	[Address(RVA = "0x40B90D0", Offset = "0x40B90D0", VA = "0x40B90D0")]
	private static void RaiseModEvent(byte code, Dictionary<byte, object> data)
	{
	}

	[Token(Token = "0x6004835")]
	[Address(RVA = "0x40B91F0", Offset = "0x40B91F0", VA = "0x40B91F0")]
	private static void InvokeStatus(string text, [Optional] Action<string> localStatus)
	{
	}

	[Token(Token = "0x6004836")]
	[Address(RVA = "0x40B92A0", Offset = "0x40B92A0", VA = "0x40B92A0")]
	private static Dictionary<byte, object>[] GetResponseEntries(Dictionary<byte, object> data, byte entriesKey)
	{
		return null;
	}

	[Token(Token = "0x6004837")]
	[Address(RVA = "0x40B94C0", Offset = "0x40B94C0", VA = "0x40B94C0")]
	private static int ReadInt(Dictionary<byte, object> data, byte key, int defaultValue = 0)
	{
		return default(int);
	}

	[Token(Token = "0x6004838")]
	[Address(RVA = "0x40B95D0", Offset = "0x40B95D0", VA = "0x40B95D0")]
	private static PlayerEntry ParsePlayerEntry(Dictionary<byte, object> entry)
	{
		return null;
	}

	[Token(Token = "0x6004839")]
	[Address(RVA = "0x40B9800", Offset = "0x40B9800", VA = "0x40B9800")]
	public static void RequestPlayerList([Optional] Action<string> localStatus)
	{
	}

	[Token(Token = "0x600483A")]
	[Address(RVA = "0x40B9A70", Offset = "0x40B9A70", VA = "0x40B9A70")]
	private static void PopulatePlayerList(Dictionary<byte, object> data)
	{
	}

	[Token(Token = "0x600483B")]
	[Address(RVA = "0x40B7A10", Offset = "0x40B7A10", VA = "0x40B7A10")]
	private static void HandlePlayerListNotification(EventData photonEvent)
	{
	}

	[Token(Token = "0x600483C")]
	[Address(RVA = "0x40B7E50", Offset = "0x40B7E50", VA = "0x40B7E50")]
	private static void HandlePlayerJoinNotification(EventData photonEvent)
	{
	}

	[Token(Token = "0x600483D")]
	[Address(RVA = "0x40B9CE0", Offset = "0x40B9CE0", VA = "0x40B9CE0")]
	public static void KickPlayer(int actorNumber, [Optional] Action<string> localStatus)
	{
	}

	[Token(Token = "0x600483E")]
	[Address(RVA = "0x40B9FE0", Offset = "0x40B9FE0", VA = "0x40B9FE0")]
	public static void RoomBan(int actorNumber, bool ipBan, [Optional] Action<string> localStatus, [Optional] string reason)
	{
	}

	[Token(Token = "0x600483F")]
	[Address(RVA = "0x40BA350", Offset = "0x40BA350", VA = "0x40BA350")]
	public static void RoomBanPlayerEntry(PlayerEntry player, bool ipBan, [Optional] Action<string> localStatus, [Optional] string reason)
	{
	}

	[Token(Token = "0x6004840")]
	[Address(RVA = "0x40BA8E0", Offset = "0x40BA8E0", VA = "0x40BA8E0")]
	public static void RoomUnban(RoomBanEntry banEntry, [Optional] Action<string> localStatus, [Optional] string reason)
	{
	}

	[Token(Token = "0x6004841")]
	[Address(RVA = "0x40BAD10", Offset = "0x40BAD10", VA = "0x40BAD10")]
	public static void RequestRoomBanList([Optional] Action<string> localStatus)
	{
	}

	[Token(Token = "0x6004842")]
	[Address(RVA = "0x40BAD60", Offset = "0x40BAD60", VA = "0x40BAD60")]
	public static void RequestRoomBanList(int startIndex, [Optional][DefaultParameterValue(50)] int amount, [Optional] Action<string> localStatus)
	{
	}

	[Token(Token = "0x6004843")]
	[Address(RVA = "0x40BB040", Offset = "0x40BB040", VA = "0x40BB040")]
	private static RoomBanEntry[] ParseRoomBanEntries(Dictionary<byte, object>[] entries)
	{
		return null;
	}

	[Token(Token = "0x6004844")]
	[Address(RVA = "0x40BB5E0", Offset = "0x40BB5E0", VA = "0x40BB5E0")]
	public static void RegionBan(int actorNumber, bool ipBan, [Optional] Action<string> localStatus, [Optional] string reason)
	{
	}

	[Token(Token = "0x6004845")]
	[Address(RVA = "0x40BB950", Offset = "0x40BB950", VA = "0x40BB950")]
	public static void RegionBanPlayerEntry(PlayerEntry player, bool ipBan, [Optional] Action<string> localStatus, [Optional] string reason)
	{
	}

	[Token(Token = "0x6004846")]
	[Address(RVA = "0x40BBEE0", Offset = "0x40BBEE0", VA = "0x40BBEE0")]
	public static void RegionUnban(RegionBanEntry banEntry, [Optional] Action<string> localStatus, [Optional] string reason)
	{
	}

	[Token(Token = "0x6004847")]
	[Address(RVA = "0x40BC220", Offset = "0x40BC220", VA = "0x40BC220")]
	public static void RequestRegionBanList([Optional] Action<string> localStatus)
	{
	}

	[Token(Token = "0x6004848")]
	[Address(RVA = "0x40BC270", Offset = "0x40BC270", VA = "0x40BC270")]
	public static void RequestRegionBanList(int startIndex, [Optional][DefaultParameterValue(50)] int amount, [Optional] Action<string> localStatus)
	{
	}

	[Token(Token = "0x6004849")]
	[Address(RVA = "0x40BC550", Offset = "0x40BC550", VA = "0x40BC550")]
	private static RegionBanEntry[] ParseRegionBanEntries(Dictionary<byte, object>[] entries)
	{
		return null;
	}

	[Token(Token = "0x600484A")]
	[Address(RVA = "0x40BCA60", Offset = "0x40BCA60", VA = "0x40BCA60")]
	public static void BatchSessionBan(string targets)
	{
	}

	[Token(Token = "0x600484B")]
	[Address(RVA = "0x40BCDC0", Offset = "0x40BCDC0", VA = "0x40BCDC0")]
	public static void BatchIPBan(string targets)
	{
	}

	[Token(Token = "0x600484C")]
	[Address(RVA = "0x40BCEB0", Offset = "0x40BCEB0", VA = "0x40BCEB0")]
	public static void BatchSessionUnban(string targets)
	{
	}

	[Token(Token = "0x600484D")]
	[Address(RVA = "0x40BCF30", Offset = "0x40BCF30", VA = "0x40BCF30")]
	public static void BatchIPUnban(string targets)
	{
	}

	[Token(Token = "0x600484E")]
	[Address(RVA = "0x40BCAD0", Offset = "0x40BCAD0", VA = "0x40BCAD0")]
	private static void SendBatchRoomRemove(int removeType, int targetBy, string targets, Action<string> localStatus)
	{
	}

	[Token(Token = "0x600484F")]
	[Address(RVA = "0x40BD020", Offset = "0x40BD020", VA = "0x40BD020")]
	public ModeratorManager()
	{
	}
}
