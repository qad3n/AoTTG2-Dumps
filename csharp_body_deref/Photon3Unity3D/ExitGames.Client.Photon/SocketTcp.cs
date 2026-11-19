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
	[Address(RVA = "0x567A360", Offset = "0x5679360", VA = "0x567A360")]
	[Preserve]
	public SocketTcp(PeerBase npeer)
	{
	}

	[Token(Token = "0x60002AD")]
	[Address(RVA = "0x567A4A0", Offset = "0x56794A0", VA = "0x567A4A0", Slot = "1")]
	~SocketTcp()
	{
	}

	[Token(Token = "0x60002AE")]
	[Address(RVA = "0x567A530", Offset = "0x5679530", VA = "0x567A530", Slot = "8")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60002AF")]
	[Address(RVA = "0x567A640", Offset = "0x5679640", VA = "0x567A640", Slot = "4")]
	public override bool Connect()
	{
		return default(bool);
	}

	[Token(Token = "0x60002B0")]
	[Address(RVA = "0x567A7C0", Offset = "0x56797C0", VA = "0x567A7C0", Slot = "5")]
	public override bool Disconnect()
	{
		return default(bool);
	}

	[Token(Token = "0x60002B1")]
	[Address(RVA = "0x567A9E0", Offset = "0x56799E0", VA = "0x567A9E0", Slot = "6")]
	public override PhotonSocketError Send(byte[] data, int length)
	{
		return default(PhotonSocketError);
	}

	[Token(Token = "0x60002B2")]
	[Address(RVA = "0x567AD80", Offset = "0x5679D80", VA = "0x567AD80", Slot = "7")]
	public override PhotonSocketError Receive(out byte[] data)
	{
		return default(PhotonSocketError);
	}

	[Token(Token = "0x60002B3")]
	[Address(RVA = "0x567ADA0", Offset = "0x5679DA0", VA = "0x567ADA0")]
	internal void DnsAndConnect()
	{
	}

	[Token(Token = "0x60002B4")]
	[Address(RVA = "0x567B550", Offset = "0x567A550", VA = "0x567B550")]
	public void ReceiveLoop()
	{
	}
}
