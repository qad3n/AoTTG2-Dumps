// ==================== AoTTG2 cross-reference ====================
// Type: ExitGames.Client.Photon.SocketUdpAsync
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x3E91890", Offset = "0x3E91890", VA = "0x3E91890")]
	[Preserve]
	public SocketUdpAsync(PeerBase npeer)
	{
	}

	[Token(Token = "0x60002D0")]
	[Address(RVA = "0x3E919D0", Offset = "0x3E919D0", VA = "0x3E919D0", Slot = "1")]
	~SocketUdpAsync()
	{
	}

	[Token(Token = "0x60002D1")]
	[Address(RVA = "0x3E91A50", Offset = "0x3E91A50", VA = "0x3E91A50", Slot = "8")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60002D2")]
	[Address(RVA = "0x3E91B60", Offset = "0x3E91B60", VA = "0x3E91B60", Slot = "4")]
	public override bool Connect()
	{
		return default(bool);
	}

	[Token(Token = "0x60002D3")]
	[Address(RVA = "0x3E91D00", Offset = "0x3E91D00", VA = "0x3E91D00", Slot = "5")]
	public override bool Disconnect()
	{
		return default(bool);
	}

	[Token(Token = "0x60002D4")]
	[Address(RVA = "0x3E91F20", Offset = "0x3E91F20", VA = "0x3E91F20", Slot = "6")]
	public override PhotonSocketError Send(byte[] data, int length)
	{
		return default(PhotonSocketError);
	}

	[Token(Token = "0x60002D5")]
	[Address(RVA = "0x3E92420", Offset = "0x3E92420", VA = "0x3E92420", Slot = "7")]
	public override PhotonSocketError Receive(out byte[] data)
	{
		return default(PhotonSocketError);
	}

	[Token(Token = "0x60002D6")]
	[Address(RVA = "0x3E92440", Offset = "0x3E92440", VA = "0x3E92440")]
	internal void DnsAndConnect()
	{
	}

	[Token(Token = "0x60002D7")]
	[Address(RVA = "0x3E92A70", Offset = "0x3E92A70", VA = "0x3E92A70")]
	public void StartReceive()
	{
	}

	[Token(Token = "0x60002D8")]
	[Address(RVA = "0x3E92DA0", Offset = "0x3E92DA0", VA = "0x3E92DA0")]
	private void OnReceive(IAsyncResult ar)
	{
	}
}
