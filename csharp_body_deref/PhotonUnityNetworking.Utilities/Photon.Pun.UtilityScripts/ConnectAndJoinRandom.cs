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

[Token(Token = "0x2000019")]
public class ConnectAndJoinRandom : MonoBehaviourPunCallbacks
{
	[Token(Token = "0x4000066")]
	[FieldOffset(Offset = "0x28")]
	public bool AutoConnect;

	[Token(Token = "0x4000067")]
	[FieldOffset(Offset = "0x29")]
	public byte Version;

	[Token(Token = "0x4000068")]
	[FieldOffset(Offset = "0x2A")]
	[Tooltip("The max number of players allowed in room. Once full, a new room will be created by the next connection attemping to join.")]
	public byte MaxPlayers;

	[Token(Token = "0x4000069")]
	[FieldOffset(Offset = "0x2C")]
	public int playerTTL;

	[Token(Token = "0x600008F")]
	[Address(RVA = "0x56F37F0", Offset = "0x56F27F0", VA = "0x56F37F0")]
	public void Start()
	{
	}

	[Token(Token = "0x6000090")]
	[Address(RVA = "0x56F3800", Offset = "0x56F2800", VA = "0x56F3800")]
	public void ConnectNow()
	{
	}

	[Token(Token = "0x6000091")]
	[Address(RVA = "0x56F3890", Offset = "0x56F2890", VA = "0x56F3890", Slot = "45")]
	public override void OnConnectedToMaster()
	{
	}

	[Token(Token = "0x6000092")]
	[Address(RVA = "0x56F3940", Offset = "0x56F2940", VA = "0x56F3940", Slot = "36")]
	public override void OnJoinedLobby()
	{
	}

	[Token(Token = "0x6000093")]
	[Address(RVA = "0x56F39F0", Offset = "0x56F29F0", VA = "0x56F39F0", Slot = "44")]
	public override void OnJoinRandomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x6000094")]
	[Address(RVA = "0x56F3B20", Offset = "0x56F2B20", VA = "0x56F3B20", Slot = "38")]
	public override void OnDisconnected(DisconnectCause cause)
	{
	}

	[Token(Token = "0x6000095")]
	[Address(RVA = "0x56F3BE0", Offset = "0x56F2BE0", VA = "0x56F3BE0", Slot = "41")]
	public override void OnJoinedRoom()
	{
	}

	[Token(Token = "0x6000096")]
	[Address(RVA = "0x56F3C90", Offset = "0x56F2C90", VA = "0x56F3C90")]
	public ConnectAndJoinRandom()
	{
	}
}
