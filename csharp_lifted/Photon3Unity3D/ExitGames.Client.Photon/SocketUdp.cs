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
	[Address(RVA = "0x567DFF0", Offset = "0x567CFF0", VA = "0x567DFF0")]
	[Preserve]
	public SocketUdp(PeerBase npeer)
	{
	}

	[Token(Token = "0x60002C7")]
	[Address(RVA = "0x567E130", Offset = "0x567D130", VA = "0x567E130", Slot = "1")]
	~SocketUdp()
	{
	}

	[Token(Token = "0x60002C8")]
	[Address(RVA = "0x567E1C0", Offset = "0x567D1C0", VA = "0x567E1C0", Slot = "8")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60002C9")]
	[Address(RVA = "0x567E2D0", Offset = "0x567D2D0", VA = "0x567E2D0", Slot = "4")]
	public override bool Connect()
	{
		return default(bool);
	}

	[Token(Token = "0x60002CA")]
	[Address(RVA = "0x567E450", Offset = "0x567D450", VA = "0x567E450", Slot = "5")]
	public override bool Disconnect()
	{
		return default(bool);
	}

	[Token(Token = "0x60002CB")]
	[Address(RVA = "0x567E670", Offset = "0x567D670", VA = "0x567E670", Slot = "6")]
	public override PhotonSocketError Send(byte[] data, int length)
	{
		return default(PhotonSocketError);
	}

	[Token(Token = "0x60002CC")]
	[Address(RVA = "0x567ED50", Offset = "0x567DD50", VA = "0x567ED50", Slot = "7")]
	public override PhotonSocketError Receive(out byte[] data)
	{
		return default(PhotonSocketError);
	}

	[Token(Token = "0x60002CD")]
	[Address(RVA = "0x567ED70", Offset = "0x567DD70", VA = "0x567ED70")]
	internal void DnsAndConnect()
	{
	}

	[Token(Token = "0x60002CE")]
	[Address(RVA = "0x567F3E0", Offset = "0x567E3E0", VA = "0x567F3E0")]
	public void ReceiveLoop()
	{
	}
}
