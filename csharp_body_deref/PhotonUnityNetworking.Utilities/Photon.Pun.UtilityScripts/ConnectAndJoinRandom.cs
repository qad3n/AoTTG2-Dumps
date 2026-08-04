// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Pun.UtilityScripts.ConnectAndJoinRandom
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonUnityNetworking/UtilityScripts/Prototyping/ConnectAndJoinRandom.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x3F08730", Offset = "0x3F08730", VA = "0x3F08730")]
	public void Start()
	{
	}

	[Token(Token = "0x6000092")]
	[Address(RVA = "0x3F08740", Offset = "0x3F08740", VA = "0x3F08740")]
	public void ConnectNow()
	{
	}

	[Token(Token = "0x6000093")]
	[Address(RVA = "0x3F087D0", Offset = "0x3F087D0", VA = "0x3F087D0", Slot = "45")]
	public override void OnConnectedToMaster()
	{
	}

	[Token(Token = "0x6000094")]
	[Address(RVA = "0x3F08880", Offset = "0x3F08880", VA = "0x3F08880", Slot = "36")]
	public override void OnJoinedLobby()
	{
	}

	[Token(Token = "0x6000095")]
	[Address(RVA = "0x3F08930", Offset = "0x3F08930", VA = "0x3F08930", Slot = "44")]
	public override void OnJoinRandomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x6000096")]
	[Address(RVA = "0x3F08A60", Offset = "0x3F08A60", VA = "0x3F08A60", Slot = "38")]
	public override void OnDisconnected(DisconnectCause cause)
	{
	}

	[Token(Token = "0x6000097")]
	[Address(RVA = "0x3F08B20", Offset = "0x3F08B20", VA = "0x3F08B20", Slot = "41")]
	public override void OnJoinedRoom()
	{
	}

	[Token(Token = "0x6000098")]
	[Address(RVA = "0x3F08BD0", Offset = "0x3F08BD0", VA = "0x3F08BD0")]
	public ConnectAndJoinRandom()
	{
	}
}
