using System;
using System.Net.Sockets;
using Il2CppDummyDll;

namespace ExitGames.Client.Photon;

[Token(Token = "0x2000042")]
public class SocketUdpAsync : IPhotonSocket, IDisposable
{
	[Token(Token = "0x40001FE")]
	[FieldOffset(Offset = "0x58")]
	private Socket sock;

	[Token(Token = "0x40001FF")]
	[FieldOffset(Offset = "0x60")]
	private readonly object syncer;

	[Token(Token = "0x60002CF")]
	[Address(RVA = "0x3B9BF40", Offset = "0x3B9BF40", VA = "0x3B9BF40")]
	[Preserve]
	public SocketUdpAsync(PeerBase npeer)
	{
	}

	[Token(Token = "0x60002D0")]
	[Address(RVA = "0x3B9C080", Offset = "0x3B9C080", VA = "0x3B9C080", Slot = "1")]
	~SocketUdpAsync()
	{
	}

	[Token(Token = "0x60002D1")]
	[Address(RVA = "0x3B9C100", Offset = "0x3B9C100", VA = "0x3B9C100", Slot = "8")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60002D2")]
	[Address(RVA = "0x3B9C210", Offset = "0x3B9C210", VA = "0x3B9C210", Slot = "4")]
	public override bool Connect()
	{
		return default(bool);
	}

	[Token(Token = "0x60002D3")]
	[Address(RVA = "0x3B9C3B0", Offset = "0x3B9C3B0", VA = "0x3B9C3B0", Slot = "5")]
	public override bool Disconnect()
	{
		return default(bool);
	}

	[Token(Token = "0x60002D4")]
	[Address(RVA = "0x3B9C5D0", Offset = "0x3B9C5D0", VA = "0x3B9C5D0", Slot = "6")]
	public override PhotonSocketError Send(byte[] data, int length)
	{
		return default(PhotonSocketError);
	}

	[Token(Token = "0x60002D5")]
	[Address(RVA = "0x3B9CAD0", Offset = "0x3B9CAD0", VA = "0x3B9CAD0", Slot = "7")]
	public override PhotonSocketError Receive(out byte[] data)
	{
		return default(PhotonSocketError);
	}

	[Token(Token = "0x60002D6")]
	[Address(RVA = "0x3B9CAF0", Offset = "0x3B9CAF0", VA = "0x3B9CAF0")]
	internal void DnsAndConnect()
	{
	}

	[Token(Token = "0x60002D7")]
	[Address(RVA = "0x3B9D120", Offset = "0x3B9D120", VA = "0x3B9D120")]
	public void StartReceive()
	{
	}

	[Token(Token = "0x60002D8")]
	[Address(RVA = "0x3B9D450", Offset = "0x3B9D450", VA = "0x3B9D450")]
	private void OnReceive(IAsyncResult ar)
	{
	}
}
