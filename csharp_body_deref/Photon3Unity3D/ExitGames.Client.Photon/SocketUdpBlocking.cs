using System;
using System.Net.Sockets;
using Il2CppDummyDll;

namespace ExitGames.Client.Photon;

[Token(Token = "0x2000043")]
public class SocketUdpBlocking : IPhotonSocket, IDisposable
{
	[Token(Token = "0x4000200")]
	[FieldOffset(Offset = "0x58")]
	private Socket sock;

	[Token(Token = "0x4000201")]
	[FieldOffset(Offset = "0x60")]
	private readonly object syncer;

	[Token(Token = "0x60002D9")]
	[Address(RVA = "0x3B9E0F0", Offset = "0x3B9E0F0", VA = "0x3B9E0F0")]
	[Preserve]
	public SocketUdpBlocking(PeerBase npeer)
	{
	}

	[Token(Token = "0x60002DA")]
	[Address(RVA = "0x3B9E230", Offset = "0x3B9E230", VA = "0x3B9E230", Slot = "1")]
	~SocketUdpBlocking()
	{
	}

	[Token(Token = "0x60002DB")]
	[Address(RVA = "0x3B9E2B0", Offset = "0x3B9E2B0", VA = "0x3B9E2B0", Slot = "8")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60002DC")]
	[Address(RVA = "0x3B9E3C0", Offset = "0x3B9E3C0", VA = "0x3B9E3C0", Slot = "4")]
	public override bool Connect()
	{
		return default(bool);
	}

	[Token(Token = "0x60002DD")]
	[Address(RVA = "0x3B9E560", Offset = "0x3B9E560", VA = "0x3B9E560", Slot = "5")]
	public override bool Disconnect()
	{
		return default(bool);
	}

	[Token(Token = "0x60002DE")]
	[Address(RVA = "0x3B9E790", Offset = "0x3B9E790", VA = "0x3B9E790", Slot = "6")]
	public override PhotonSocketError Send(byte[] data, int length)
	{
		return default(PhotonSocketError);
	}

	[Token(Token = "0x60002DF")]
	[Address(RVA = "0x3B9EC90", Offset = "0x3B9EC90", VA = "0x3B9EC90", Slot = "7")]
	public override PhotonSocketError Receive(out byte[] data)
	{
		return default(PhotonSocketError);
	}

	[Token(Token = "0x60002E0")]
	[Address(RVA = "0x3B9ECB0", Offset = "0x3B9ECB0", VA = "0x3B9ECB0")]
	internal void DnsAndConnect()
	{
	}

	[Token(Token = "0x60002E1")]
	[Address(RVA = "0x3B9F390", Offset = "0x3B9F390", VA = "0x3B9F390")]
	public void ReceiveLoop()
	{
	}
}
