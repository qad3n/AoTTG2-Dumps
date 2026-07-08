using Il2CppDummyDll;
using Photon.Realtime;
using UnityEngine;

namespace Photon.Pun.UtilityScripts;

[Token(Token = "0x200001B")]
public class ConnectAndJoinRandom : MonoBehaviourPunCallbacks
{
	[Token(Token = "0x400006B")]
	[FieldOffset(Offset = "0x28")]
	public bool AutoConnect;

	[Token(Token = "0x400006C")]
	[FieldOffset(Offset = "0x29")]
	public byte Version;

	[Token(Token = "0x400006D")]
	[FieldOffset(Offset = "0x2A")]
	[Tooltip("The max number of players allowed in room. Once full, a new room will be created by the next connection attemping to join.")]
	public byte MaxPlayers;

	[Token(Token = "0x400006E")]
	[FieldOffset(Offset = "0x2C")]
	public int playerTTL;

	[Token(Token = "0x6000091")]
	[Address(RVA = "0x3BF0260", Offset = "0x3BF0260", VA = "0x3BF0260")]
	public void Start()
	{
	}

	[Token(Token = "0x6000092")]
	[Address(RVA = "0x3BF0270", Offset = "0x3BF0270", VA = "0x3BF0270")]
	public void ConnectNow()
	{
	}

	[Token(Token = "0x6000093")]
	[Address(RVA = "0x3BF0300", Offset = "0x3BF0300", VA = "0x3BF0300", Slot = "45")]
	public override void OnConnectedToMaster()
	{
	}

	[Token(Token = "0x6000094")]
	[Address(RVA = "0x3BF03B0", Offset = "0x3BF03B0", VA = "0x3BF03B0", Slot = "36")]
	public override void OnJoinedLobby()
	{
	}

	[Token(Token = "0x6000095")]
	[Address(RVA = "0x3BF0460", Offset = "0x3BF0460", VA = "0x3BF0460", Slot = "44")]
	public override void OnJoinRandomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x6000096")]
	[Address(RVA = "0x3BF0590", Offset = "0x3BF0590", VA = "0x3BF0590", Slot = "38")]
	public override void OnDisconnected(DisconnectCause cause)
	{
	}

	[Token(Token = "0x6000097")]
	[Address(RVA = "0x3BF0650", Offset = "0x3BF0650", VA = "0x3BF0650", Slot = "41")]
	public override void OnJoinedRoom()
	{
	}

	[Token(Token = "0x6000098")]
	[Address(RVA = "0x3BF0700", Offset = "0x3BF0700", VA = "0x3BF0700")]
	public ConnectAndJoinRandom()
	{
	}
}
