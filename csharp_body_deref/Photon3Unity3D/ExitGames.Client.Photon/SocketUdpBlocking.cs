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
	[Address(RVA = "0x1CEE0C0", Offset = "0x1CEC6C0", VA = "0x181CEE0C0")]
	[Preserve]
	public SocketUdpBlocking(PeerBase npeer)
	{
	}

	[Token(Token = "0x60002DA")]
	[Address(RVA = "0x1CED9D0", Offset = "0x1CEBFD0", VA = "0x181CED9D0", Slot = "1")]
	~SocketUdpBlocking()
	{
	}

	[Token(Token = "0x60002DB")]
	[Address(RVA = "0x1CED2A0", Offset = "0x1CEB8A0", VA = "0x181CED2A0", Slot = "8")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60002DC")]
	[Address(RVA = "0x1CECF90", Offset = "0x1CEB590", VA = "0x181CECF90", Slot = "4")]
	public override bool Connect()
	{
		return default(bool);
	}

	[Token(Token = "0x60002DD")]
	[Address(RVA = "0x1CED0F0", Offset = "0x1CEB6F0", VA = "0x181CED0F0", Slot = "5")]
	public override bool Disconnect()
	{
		return default(bool);
	}

	[Token(Token = "0x60002DE")]
	[Address(RVA = "0x1CEC700", Offset = "0x1CEAD00", VA = "0x181CEC700", Slot = "6")]
	public override PhotonSocketError Send(byte[] data, int length)
	{
		return default(PhotonSocketError);
	}

	[Token(Token = "0x60002DF")]
	[Address(RVA = "0x1CE9800", Offset = "0x1CE7E00", VA = "0x181CE9800", Slot = "7")]
	public override PhotonSocketError Receive(out byte[] data)
	{
		return default(PhotonSocketError);
	}

	[Token(Token = "0x60002E0")]
	[Address(RVA = "0x1CED380", Offset = "0x1CEB980", VA = "0x181CED380")]
	internal void DnsAndConnect()
	{
	}

	[Token(Token = "0x60002E1")]
	[Address(RVA = "0x1CEDA30", Offset = "0x1CEC030", VA = "0x181CEDA30")]
	public void ReceiveLoop()
	{
	}
}
