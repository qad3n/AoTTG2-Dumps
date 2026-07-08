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
	[Address(RVA = "0x3B95C90", Offset = "0x3B95C90", VA = "0x3B95C90")]
	[Preserve]
	public SocketTcp(PeerBase npeer)
	{
	}

	[Token(Token = "0x60002AD")]
	[Address(RVA = "0x3B95DD0", Offset = "0x3B95DD0", VA = "0x3B95DD0", Slot = "1")]
	~SocketTcp()
	{
	}

	[Token(Token = "0x60002AE")]
	[Address(RVA = "0x3B95E50", Offset = "0x3B95E50", VA = "0x3B95E50", Slot = "8")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60002AF")]
	[Address(RVA = "0x3B95F60", Offset = "0x3B95F60", VA = "0x3B95F60", Slot = "4")]
	public override bool Connect()
	{
		return default(bool);
	}

	[Token(Token = "0x60002B0")]
	[Address(RVA = "0x3B96100", Offset = "0x3B96100", VA = "0x3B96100", Slot = "5")]
	public override bool Disconnect()
	{
		return default(bool);
	}

	[Token(Token = "0x60002B1")]
	[Address(RVA = "0x3B96320", Offset = "0x3B96320", VA = "0x3B96320", Slot = "6")]
	public override PhotonSocketError Send(byte[] data, int length)
	{
		return default(PhotonSocketError);
	}

	[Token(Token = "0x60002B2")]
	[Address(RVA = "0x3B96810", Offset = "0x3B96810", VA = "0x3B96810", Slot = "7")]
	public override PhotonSocketError Receive(out byte[] data)
	{
		return default(PhotonSocketError);
	}

	[Token(Token = "0x60002B3")]
	[Address(RVA = "0x3B96830", Offset = "0x3B96830", VA = "0x3B96830")]
	internal void DnsAndConnect()
	{
	}

	[Token(Token = "0x60002B4")]
	[Address(RVA = "0x3B970C0", Offset = "0x3B970C0", VA = "0x3B970C0")]
	public void ReceiveLoop()
	{
	}
}
