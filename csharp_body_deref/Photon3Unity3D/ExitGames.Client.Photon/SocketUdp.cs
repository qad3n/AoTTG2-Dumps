// ==================== AoTTG2 cross-reference ====================
// Type: ExitGames.Client.Photon.SocketUdp
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Net.Sockets;
using Il2CppDummyDll;

namespace ExitGames.Client.Photon;

[Token(Token = "0x2000041")]
public class SocketUdp : IPhotonSocket, IDisposable
{
	[Token(Token = "0x40001FC")]
	[FieldOffset(Offset = "0x58")]
	private Socket sock;

	[Token(Token = "0x40001FD")]
	[FieldOffset(Offset = "0x60")]
	private readonly object syncer;

	[Token(Token = "0x60002C6")]
	[Address(RVA = "0x3E8F900", Offset = "0x3E8F900", VA = "0x3E8F900")]
	[Preserve]
	public SocketUdp(PeerBase npeer)
	{
	}

	[Token(Token = "0x60002C7")]
	[Address(RVA = "0x3E8FA40", Offset = "0x3E8FA40", VA = "0x3E8FA40", Slot = "1")]
	~SocketUdp()
	{
	}

	[Token(Token = "0x60002C8")]
	[Address(RVA = "0x3E8FAC0", Offset = "0x3E8FAC0", VA = "0x3E8FAC0", Slot = "8")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60002C9")]
	[Address(RVA = "0x3E8FBD0", Offset = "0x3E8FBD0", VA = "0x3E8FBD0", Slot = "4")]
	public override bool Connect()
	{
		return default(bool);
	}

	[Token(Token = "0x60002CA")]
	[Address(RVA = "0x3E8FD70", Offset = "0x3E8FD70", VA = "0x3E8FD70", Slot = "5")]
	public override bool Disconnect()
	{
		return default(bool);
	}

	[Token(Token = "0x60002CB")]
	[Address(RVA = "0x3E8FFA0", Offset = "0x3E8FFA0", VA = "0x3E8FFA0", Slot = "6")]
	public override PhotonSocketError Send(byte[] data, int length)
	{
		return default(PhotonSocketError);
	}

	[Token(Token = "0x60002CC")]
	[Address(RVA = "0x3E908E0", Offset = "0x3E908E0", VA = "0x3E908E0", Slot = "7")]
	public override PhotonSocketError Receive(out byte[] data)
	{
		return default(PhotonSocketError);
	}

	[Token(Token = "0x60002CD")]
	[Address(RVA = "0x3E90900", Offset = "0x3E90900", VA = "0x3E90900")]
	internal void DnsAndConnect()
	{
	}

	[Token(Token = "0x60002CE")]
	[Address(RVA = "0x3E90FE0", Offset = "0x3E90FE0", VA = "0x3E90FE0")]
	public void ReceiveLoop()
	{
	}
}
