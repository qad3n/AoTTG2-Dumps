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
	[Address(RVA = "0x1D50770", Offset = "0x1D4ED70", VA = "0x181D50770")]
	public void Start()
	{
	}

	[Token(Token = "0x6000090")]
	[Address(RVA = "0x1D50300", Offset = "0x1D4E900", VA = "0x181D50300")]
	public void ConnectNow()
	{
	}

	[Token(Token = "0x6000091")]
	[Address(RVA = "0x1D50380", Offset = "0x1D4E980", VA = "0x181D50380", Slot = "45")]
	public override void OnConnectedToMaster()
	{
	}

	[Token(Token = "0x6000092")]
	[Address(RVA = "0x1D50610", Offset = "0x1D4EC10", VA = "0x181D50610", Slot = "36")]
	public override void OnJoinedLobby()
	{
	}

	[Token(Token = "0x6000093")]
	[Address(RVA = "0x1D504E0", Offset = "0x1D4EAE0", VA = "0x181D504E0", Slot = "44")]
	public override void OnJoinRandomFailed(short returnCode, string message)
	{
	}

	[Token(Token = "0x6000094")]
	[Address(RVA = "0x1D50430", Offset = "0x1D4EA30", VA = "0x181D50430", Slot = "38")]
	public override void OnDisconnected(DisconnectCause cause)
	{
	}

	[Token(Token = "0x6000095")]
	[Address(RVA = "0x1D506C0", Offset = "0x1D4ECC0", VA = "0x181D506C0", Slot = "41")]
	public override void OnJoinedRoom()
	{
	}

	[Token(Token = "0x6000096")]
	[Address(RVA = "0x1D50800", Offset = "0x1D4EE00", VA = "0x181D50800")]
	public ConnectAndJoinRandom()
	{
	}
}
