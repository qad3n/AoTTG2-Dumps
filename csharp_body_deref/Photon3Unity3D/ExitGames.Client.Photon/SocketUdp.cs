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
	[Address(RVA = "0x3B99FB0", Offset = "0x3B99FB0", VA = "0x3B99FB0")]
	[Preserve]
	public SocketUdp(PeerBase npeer)
	{
	}

	[Token(Token = "0x60002C7")]
	[Address(RVA = "0x3B9A0F0", Offset = "0x3B9A0F0", VA = "0x3B9A0F0", Slot = "1")]
	~SocketUdp()
	{
	}

	[Token(Token = "0x60002C8")]
	[Address(RVA = "0x3B9A170", Offset = "0x3B9A170", VA = "0x3B9A170", Slot = "8")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60002C9")]
	[Address(RVA = "0x3B9A280", Offset = "0x3B9A280", VA = "0x3B9A280", Slot = "4")]
	public override bool Connect()
	{
		return default(bool);
	}

	[Token(Token = "0x60002CA")]
	[Address(RVA = "0x3B9A420", Offset = "0x3B9A420", VA = "0x3B9A420", Slot = "5")]
	public override bool Disconnect()
	{
		return default(bool);
	}

	[Token(Token = "0x60002CB")]
	[Address(RVA = "0x3B9A650", Offset = "0x3B9A650", VA = "0x3B9A650", Slot = "6")]
	public override PhotonSocketError Send(byte[] data, int length)
	{
		return default(PhotonSocketError);
	}

	[Token(Token = "0x60002CC")]
	[Address(RVA = "0x3B9AF90", Offset = "0x3B9AF90", VA = "0x3B9AF90", Slot = "7")]
	public override PhotonSocketError Receive(out byte[] data)
	{
		return default(PhotonSocketError);
	}

	[Token(Token = "0x60002CD")]
	[Address(RVA = "0x3B9AFB0", Offset = "0x3B9AFB0", VA = "0x3B9AFB0")]
	internal void DnsAndConnect()
	{
	}

	[Token(Token = "0x60002CE")]
	[Address(RVA = "0x3B9B690", Offset = "0x3B9B690", VA = "0x3B9B690")]
	public void ReceiveLoop()
	{
	}
}
