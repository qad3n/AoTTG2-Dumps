// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Pun.PhotonHandler
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonUnityNetworking/Code/PhotonHandler.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Diagnostics;
using ExitGames.Client.Photon;
using Il2CppDummyDll;
using Photon.Realtime;

namespace Photon.Pun;

[Token(Token = "0x2000010")]
public class PhotonHandler : ConnectionHandler, IInRoomCallbacks, IMatchmakingCallbacks
{
	[Token(Token = "0x400001C")]
	[FieldOffset(Offset = "0x0")]
	private static PhotonHandler instance;

	[Token(Token = "0x400001D")]
	[FieldOffset(Offset = "0x8")]
	public static int MaxDatagrams;

	[Token(Token = "0x400001E")]
	[FieldOffset(Offset = "0xC")]
	public static bool SendAsap;

	[Token(Token = "0x400001F")]
	private const int SerializeRateFrameCorrection = 8;

	[Token(Token = "0x4000020")]
	[FieldOffset(Offset = "0x40")]
	protected internal int UpdateInterval;

	[Token(Token = "0x4000021")]
	[FieldOffset(Offset = "0x44")]
	protected internal int UpdateIntervalOnSerialize;

	[Token(Token = "0x4000022")]
	[FieldOffset(Offset = "0x48")]
	private readonly Stopwatch swSendOutgoing;

	[Token(Token = "0x4000023")]
	[FieldOffset(Offset = "0x50")]
	private readonly Stopwatch swViewUpdate;

	[Token(Token = "0x4000024")]
	[FieldOffset(Offset = "0x58")]
	private SupportLogger supportLoggerComponent;

	[Token(Token = "0x4000025")]
	[FieldOffset(Offset = "0x60")]
	protected List<int> reusableIntList;

	[Token(Token = "0x17000001")]
	internal static PhotonHandler Instance
	{
		[Token(Token = "0x600000F")]
		[Address(RVA = "0x1D311D0", Offset = "0x1D2F7D0", VA = "0x181D311D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000010")]
	[Address(RVA = "0x1D2F750", Offset = "0x1D2DD50", VA = "0x181D2F750", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6000011")]
	[Address(RVA = "0x1D2FF30", Offset = "0x1D2E530", VA = "0x181D2FF30", Slot = "18")]
	protected virtual void OnEnable()
	{
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x1D30FA0", Offset = "0x1D2F5A0", VA = "0x181D30FA0")]
	protected void Start()
	{
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x1D2FED0", Offset = "0x1D2E4D0", VA = "0x181D2FED0", Slot = "5")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x1D2FAE0", Offset = "0x1D2E0E0", VA = "0x181D2FAE0")]
	protected void FixedUpdate()
	{
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x1D2FB60", Offset = "0x1D2E160", VA = "0x181D2FB60")]
	protected void LateUpdate()
	{
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x1D2F8A0", Offset = "0x1D2DEA0", VA = "0x181D2F8A0")]
	protected void Dispatch()
	{
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x1D2FE80", Offset = "0x1D2E480", VA = "0x181D2FE80", Slot = "12")]
	public void OnCreatedRoom()
	{
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x1D30F60", Offset = "0x1D2F560", VA = "0x181D30F60", Slot = "8")]
	public void OnRoomPropertiesUpdate(Hashtable propertiesThatChanged)
	{
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "9")]
	public void OnPlayerPropertiesUpdate(Player targetPlayer, Hashtable changedProps)
	{
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x1D30720", Offset = "0x1D2ED20", VA = "0x181D30720", Slot = "10")]
	public void OnMasterClientSwitched(Player newMasterClient)
	{
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "11")]
	public void OnFriendListUpdate(List<FriendInfo> friendList)
	{
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "13")]
	public void OnCreateRoomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "15")]
	public void OnJoinRoomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "16")]
	public void OnJoinRandomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x1D30320", Offset = "0x1D2E920", VA = "0x181D30320", Slot = "14")]
	public void OnJoinedRoom()
	{
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x1D306D0", Offset = "0x1D2ECD0", VA = "0x181D306D0", Slot = "17")]
	public void OnLeftRoom()
	{
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x1D30900", Offset = "0x1D2EF00", VA = "0x181D30900", Slot = "6")]
	public void OnPlayerEnteredRoom(Player newPlayer)
	{
	}

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x1D30C00", Offset = "0x1D2F200", VA = "0x181D30C00", Slot = "7")]
	public void OnPlayerLeftRoom(Player otherPlayer)
	{
	}

	[Token(Token = "0x6000023")]
	[Address(RVA = "0x1D310F0", Offset = "0x1D2F6F0", VA = "0x181D310F0")]
	public PhotonHandler()
	{
	}
}
