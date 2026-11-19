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
		[Address(RVA = "0x56C5AB0", Offset = "0x56C4AB0", VA = "0x56C5AB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000010")]
	[Address(RVA = "0x56C5C70", Offset = "0x56C4C70", VA = "0x56C5C70", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6000011")]
	[Address(RVA = "0x56C5DC0", Offset = "0x56C4DC0", VA = "0x56C5DC0", Slot = "18")]
	protected virtual void OnEnable()
	{
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x56C65F0", Offset = "0x56C55F0", VA = "0x56C65F0")]
	protected void Start()
	{
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x56C6740", Offset = "0x56C5740", VA = "0x56C6740", Slot = "5")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x56C6A50", Offset = "0x56C5A50", VA = "0x56C6A50")]
	protected void FixedUpdate()
	{
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x56C6DC0", Offset = "0x56C5DC0", VA = "0x56C6DC0")]
	protected void LateUpdate()
	{
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x56C6AD0", Offset = "0x56C5AD0", VA = "0x56C6AD0")]
	protected void Dispatch()
	{
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x56C76C0", Offset = "0x56C66C0", VA = "0x56C76C0", Slot = "12")]
	public void OnCreatedRoom()
	{
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x56C7CA0", Offset = "0x56C6CA0", VA = "0x56C7CA0", Slot = "8")]
	public void OnRoomPropertiesUpdate(Hashtable propertiesThatChanged)
	{
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x56C7FB0", Offset = "0x56C6FB0", VA = "0x56C7FB0", Slot = "9")]
	public void OnPlayerPropertiesUpdate(Player targetPlayer, Hashtable changedProps)
	{
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x56C7FC0", Offset = "0x56C6FC0", VA = "0x56C7FC0", Slot = "10")]
	public void OnMasterClientSwitched(Player newMasterClient)
	{
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x56C8A60", Offset = "0x56C7A60", VA = "0x56C8A60", Slot = "11")]
	public void OnFriendListUpdate(List<FriendInfo> friendList)
	{
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x56C8A70", Offset = "0x56C7A70", VA = "0x56C8A70", Slot = "13")]
	public void OnCreateRoomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x56C8A80", Offset = "0x56C7A80", VA = "0x56C8A80", Slot = "15")]
	public void OnJoinRoomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x56C8A90", Offset = "0x56C7A90", VA = "0x56C8A90", Slot = "16")]
	public void OnJoinRandomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x56C8AA0", Offset = "0x56C7AA0", VA = "0x56C8AA0", Slot = "14")]
	public void OnJoinedRoom()
	{
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x56C93E0", Offset = "0x56C83E0", VA = "0x56C93E0", Slot = "17")]
	public void OnLeftRoom()
	{
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x56C9870", Offset = "0x56C8870", VA = "0x56C9870", Slot = "6")]
	public void OnPlayerEnteredRoom(Player newPlayer)
	{
	}

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x56C9D80", Offset = "0x56C8D80", VA = "0x56C9D80", Slot = "7")]
	public void OnPlayerLeftRoom(Player otherPlayer)
	{
	}

	[Token(Token = "0x6000023")]
	[Address(RVA = "0x56CA410", Offset = "0x56C9410", VA = "0x56CA410")]
	public PhotonHandler()
	{
	}
}
