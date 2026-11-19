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
	[Address(RVA = "0x5681750", Offset = "0x5680750", VA = "0x5681750")]
	[Preserve]
	public SocketUdpBlocking(PeerBase npeer)
	{
	}

	[Token(Token = "0x60002DA")]
	[Address(RVA = "0x5681890", Offset = "0x5680890", VA = "0x5681890", Slot = "1")]
	~SocketUdpBlocking()
	{
	}

	[Token(Token = "0x60002DB")]
	[Address(RVA = "0x5681920", Offset = "0x5680920", VA = "0x5681920", Slot = "8")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60002DC")]
	[Address(RVA = "0x5681A30", Offset = "0x5680A30", VA = "0x5681A30", Slot = "4")]
	public override bool Connect()
	{
		return default(bool);
	}

	[Token(Token = "0x60002DD")]
	[Address(RVA = "0x5681BB0", Offset = "0x5680BB0", VA = "0x5681BB0", Slot = "5")]
	public override bool Disconnect()
	{
		return default(bool);
	}

	[Token(Token = "0x60002DE")]
	[Address(RVA = "0x5681DD0", Offset = "0x5680DD0", VA = "0x5681DD0", Slot = "6")]
	public override PhotonSocketError Send(byte[] data, int length)
	{
		return default(PhotonSocketError);
	}

	[Token(Token = "0x60002DF")]
	[Address(RVA = "0x56821A0", Offset = "0x56811A0", VA = "0x56821A0", Slot = "7")]
	public override PhotonSocketError Receive(out byte[] data)
	{
		return default(PhotonSocketError);
	}

	[Token(Token = "0x60002E0")]
	[Address(RVA = "0x56821C0", Offset = "0x56811C0", VA = "0x56821C0")]
	internal void DnsAndConnect()
	{
	}

	[Token(Token = "0x60002E1")]
	[Address(RVA = "0x5682830", Offset = "0x5681830", VA = "0x5682830")]
	public void ReceiveLoop()
	{
	}
}
