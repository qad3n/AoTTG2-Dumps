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
	[Address(RVA = "0x1CEB300", Offset = "0x1CE9900", VA = "0x181CEB300")]
	[Preserve]
	public SocketTcp(PeerBase npeer)
	{
	}

	[Token(Token = "0x60002AD")]
	[Address(RVA = "0x1CE8CF0", Offset = "0x1CE72F0", VA = "0x181CE8CF0", Slot = "1")]
	~SocketTcp()
	{
	}

	[Token(Token = "0x60002AE")]
	[Address(RVA = "0x1CE8500", Offset = "0x1CE6B00", VA = "0x181CE8500", Slot = "8")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60002AF")]
	[Address(RVA = "0x1CE9E00", Offset = "0x1CE8400", VA = "0x181CE9E00", Slot = "4")]
	public override bool Connect()
	{
		return default(bool);
	}

	[Token(Token = "0x60002B0")]
	[Address(RVA = "0x1CE9F60", Offset = "0x1CE8560", VA = "0x181CE9F60", Slot = "5")]
	public override bool Disconnect()
	{
		return default(bool);
	}

	[Token(Token = "0x60002B1")]
	[Address(RVA = "0x1CE9820", Offset = "0x1CE7E20", VA = "0x181CE9820", Slot = "6")]
	public override PhotonSocketError Send(byte[] data, int length)
	{
		return default(PhotonSocketError);
	}

	[Token(Token = "0x60002B2")]
	[Address(RVA = "0x1CE9800", Offset = "0x1CE7E00", VA = "0x181CE9800", Slot = "7")]
	public override PhotonSocketError Receive(out byte[] data)
	{
		return default(PhotonSocketError);
	}

	[Token(Token = "0x60002B3")]
	[Address(RVA = "0x1CEA110", Offset = "0x1CE8710", VA = "0x181CEA110")]
	internal void DnsAndConnect()
	{
	}

	[Token(Token = "0x60002B4")]
	[Address(RVA = "0x1CEA8A0", Offset = "0x1CE8EA0", VA = "0x181CEA8A0")]
	public void ReceiveLoop()
	{
	}
}
