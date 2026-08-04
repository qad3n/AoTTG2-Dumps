// ==================== AoTTG2 cross-reference ====================
// Type: ExitGames.Client.Photon.SocketTcp
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Net.Sockets;
using Il2CppDummyDll;

namespace ExitGames.Client.Photon;

[Token(Token = "0x200003E")]
public class SocketTcp : IPhotonSocket, IDisposable
{
	[Token(Token = "0x40001F2")]
	[FieldOffset(Offset = "0x58")]
	private Socket sock;

	[Token(Token = "0x40001F3")]
	[FieldOffset(Offset = "0x60")]
	private readonly object syncer;

	[Token(Token = "0x60002AC")]
	[Address(RVA = "0x3E8B5E0", Offset = "0x3E8B5E0", VA = "0x3E8B5E0")]
	[Preserve]
	public SocketTcp(PeerBase npeer)
	{
	}

	[Token(Token = "0x60002AD")]
	[Address(RVA = "0x3E8B720", Offset = "0x3E8B720", VA = "0x3E8B720", Slot = "1")]
	~SocketTcp()
	{
	}

	[Token(Token = "0x60002AE")]
	[Address(RVA = "0x3E8B7A0", Offset = "0x3E8B7A0", VA = "0x3E8B7A0", Slot = "8")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60002AF")]
	[Address(RVA = "0x3E8B8B0", Offset = "0x3E8B8B0", VA = "0x3E8B8B0", Slot = "4")]
	public override bool Connect()
	{
		return default(bool);
	}

	[Token(Token = "0x60002B0")]
	[Address(RVA = "0x3E8BA50", Offset = "0x3E8BA50", VA = "0x3E8BA50", Slot = "5")]
	public override bool Disconnect()
	{
		return default(bool);
	}

	[Token(Token = "0x60002B1")]
	[Address(RVA = "0x3E8BC70", Offset = "0x3E8BC70", VA = "0x3E8BC70", Slot = "6")]
	public override PhotonSocketError Send(byte[] data, int length)
	{
		return default(PhotonSocketError);
	}

	[Token(Token = "0x60002B2")]
	[Address(RVA = "0x3E8C160", Offset = "0x3E8C160", VA = "0x3E8C160", Slot = "7")]
	public override PhotonSocketError Receive(out byte[] data)
	{
		return default(PhotonSocketError);
	}

	[Token(Token = "0x60002B3")]
	[Address(RVA = "0x3E8C180", Offset = "0x3E8C180", VA = "0x3E8C180")]
	internal void DnsAndConnect()
	{
	}

	[Token(Token = "0x60002B4")]
	[Address(RVA = "0x3E8CA10", Offset = "0x3E8CA10", VA = "0x3E8CA10")]
	public void ReceiveLoop()
	{
	}
}
