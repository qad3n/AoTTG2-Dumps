using System.Collections.Generic;
using System.Diagnostics;
using ExitGames.Client.Photon;
using Il2CppDummyDll;
using Photon.Realtime;

namespace Photon.Pun;

[Token(Token = "0x2000012")]
public class PhotonHandler : ConnectionHandler, IInRoomCallbacks, IMatchmakingCallbacks
{
	[Token(Token = "0x4000021")]
	[FieldOffset(Offset = "0x0")]
	private static PhotonHandler instance;

	[Token(Token = "0x4000022")]
	[FieldOffset(Offset = "0x8")]
	public static int MaxDatagrams;

	[Token(Token = "0x4000023")]
	[FieldOffset(Offset = "0xC")]
	public static bool SendAsap;

	[Token(Token = "0x4000024")]
	private const int SerializeRateFrameCorrection = 8;

	[Token(Token = "0x4000025")]
	[FieldOffset(Offset = "0x40")]
	protected internal int UpdateInterval;

	[Token(Token = "0x4000026")]
	[FieldOffset(Offset = "0x44")]
	protected internal int UpdateIntervalOnSerialize;

	[Token(Token = "0x4000027")]
	[FieldOffset(Offset = "0x48")]
	private readonly Stopwatch swSendOutgoing;

	[Token(Token = "0x4000028")]
	[FieldOffset(Offset = "0x50")]
	private readonly Stopwatch swViewUpdate;

	[Token(Token = "0x4000029")]
	[FieldOffset(Offset = "0x58")]
	private SupportLogger supportLoggerComponent;

	[Token(Token = "0x400002A")]
	[FieldOffset(Offset = "0x60")]
	protected List<int> reusableIntList;

	[Token(Token = "0x17000001")]
	internal static PhotonHandler Instance
	{
		[Token(Token = "0x6000011")]
		[Address(RVA = "0x3BF6440", Offset = "0x3BF6440", VA = "0x3BF6440")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x3BF6600", Offset = "0x3BF6600", VA = "0x3BF6600", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x3BF6750", Offset = "0x3BF6750", VA = "0x3BF6750", Slot = "18")]
	protected virtual void OnEnable()
	{
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x3BF6F80", Offset = "0x3BF6F80", VA = "0x3BF6F80")]
	protected void Start()
	{
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x3BF70D0", Offset = "0x3BF70D0", VA = "0x3BF70D0", Slot = "5")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x3BF73E0", Offset = "0x3BF73E0", VA = "0x3BF73E0")]
	protected void FixedUpdate()
	{
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x3BF7770", Offset = "0x3BF7770", VA = "0x3BF7770")]
	protected void LateUpdate()
	{
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x3BF7460", Offset = "0x3BF7460", VA = "0x3BF7460")]
	protected void Dispatch()
	{
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x3BF80F0", Offset = "0x3BF80F0", VA = "0x3BF80F0", Slot = "12")]
	public void OnCreatedRoom()
	{
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x3BF86E0", Offset = "0x3BF86E0", VA = "0x3BF86E0", Slot = "8")]
	public void OnRoomPropertiesUpdate(Hashtable propertiesThatChanged)
	{
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x3BF8A10", Offset = "0x3BF8A10", VA = "0x3BF8A10", Slot = "9")]
	public void OnPlayerPropertiesUpdate(Player targetPlayer, Hashtable changedProps)
	{
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x3BF8A20", Offset = "0x3BF8A20", VA = "0x3BF8A20", Slot = "10")]
	public void OnMasterClientSwitched(Player newMasterClient)
	{
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x3BF9530", Offset = "0x3BF9530", VA = "0x3BF9530", Slot = "11")]
	public void OnFriendListUpdate(List<FriendInfo> friendList)
	{
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x3BF9540", Offset = "0x3BF9540", VA = "0x3BF9540", Slot = "13")]
	public void OnCreateRoomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x3BF9550", Offset = "0x3BF9550", VA = "0x3BF9550", Slot = "15")]
	public void OnJoinRoomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x3BF9560", Offset = "0x3BF9560", VA = "0x3BF9560", Slot = "16")]
	public void OnJoinRandomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x3BF9570", Offset = "0x3BF9570", VA = "0x3BF9570", Slot = "14")]
	public void OnJoinedRoom()
	{
	}

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x3BF9EF0", Offset = "0x3BF9EF0", VA = "0x3BF9EF0", Slot = "17")]
	public void OnLeftRoom()
	{
	}

	[Token(Token = "0x6000023")]
	[Address(RVA = "0x3BFA3E0", Offset = "0x3BFA3E0", VA = "0x3BFA3E0", Slot = "6")]
	public void OnPlayerEnteredRoom(Player newPlayer)
	{
	}

	[Token(Token = "0x6000024")]
	[Address(RVA = "0x3BFA870", Offset = "0x3BFA870", VA = "0x3BFA870", Slot = "7")]
	public void OnPlayerLeftRoom(Player otherPlayer)
	{
	}

	[Token(Token = "0x6000025")]
	[Address(RVA = "0x3BFAFE0", Offset = "0x3BFAFE0", VA = "0x3BFAFE0")]
	public PhotonHandler()
	{
	}
}
