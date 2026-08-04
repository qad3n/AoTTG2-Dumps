// ==================== AoTTG2 cross-reference ====================
// Type: ExitGames.Client.Photon.SocketUdpBlocking
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x3E93A40", Offset = "0x3E93A40", VA = "0x3E93A40")]
	[Preserve]
	public SocketUdpBlocking(PeerBase npeer)
	{
	}

	[Token(Token = "0x60002DA")]
	[Address(RVA = "0x3E93B80", Offset = "0x3E93B80", VA = "0x3E93B80", Slot = "1")]
	~SocketUdpBlocking()
	{
	}

	[Token(Token = "0x60002DB")]
	[Address(RVA = "0x3E93C00", Offset = "0x3E93C00", VA = "0x3E93C00", Slot = "8")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60002DC")]
	[Address(RVA = "0x3E93D10", Offset = "0x3E93D10", VA = "0x3E93D10", Slot = "4")]
	public override bool Connect()
	{
		return default(bool);
	}

	[Token(Token = "0x60002DD")]
	[Address(RVA = "0x3E93EB0", Offset = "0x3E93EB0", VA = "0x3E93EB0", Slot = "5")]
	public override bool Disconnect()
	{
		return default(bool);
	}

	[Token(Token = "0x60002DE")]
	[Address(RVA = "0x3E940E0", Offset = "0x3E940E0", VA = "0x3E940E0", Slot = "6")]
	public override PhotonSocketError Send(byte[] data, int length)
	{
		return default(PhotonSocketError);
	}

	[Token(Token = "0x60002DF")]
	[Address(RVA = "0x3E945E0", Offset = "0x3E945E0", VA = "0x3E945E0", Slot = "7")]
	public override PhotonSocketError Receive(out byte[] data)
	{
		return default(PhotonSocketError);
	}

	[Token(Token = "0x60002E0")]
	[Address(RVA = "0x3E94600", Offset = "0x3E94600", VA = "0x3E94600")]
	internal void DnsAndConnect()
	{
	}

	[Token(Token = "0x60002E1")]
	[Address(RVA = "0x3E94CE0", Offset = "0x3E94CE0", VA = "0x3E94CE0")]
	public void ReceiveLoop()
	{
	}
}
