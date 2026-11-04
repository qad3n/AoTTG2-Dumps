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
	[Address(RVA = "0x1CECEB0", Offset = "0x1CEB4B0", VA = "0x181CECEB0")]
	[Preserve]
	public SocketUdpAsync(PeerBase npeer)
	{
	}

	[Token(Token = "0x60002D0")]
	[Address(RVA = "0x1CE8CF0", Offset = "0x1CE72F0", VA = "0x181CE8CF0", Slot = "1")]
	~SocketUdpAsync()
	{
	}

	[Token(Token = "0x60002D1")]
	[Address(RVA = "0x1CE8500", Offset = "0x1CE6B00", VA = "0x181CE8500", Slot = "8")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60002D2")]
	[Address(RVA = "0x1CEB3E0", Offset = "0x1CE99E0", VA = "0x181CEB3E0", Slot = "4")]
	public override bool Connect()
	{
		return default(bool);
	}

	[Token(Token = "0x60002D3")]
	[Address(RVA = "0x1CEB540", Offset = "0x1CE9B40", VA = "0x181CEB540", Slot = "5")]
	public override bool Disconnect()
	{
		return default(bool);
	}

	[Token(Token = "0x60002D4")]
	[Address(RVA = "0x1CEC700", Offset = "0x1CEAD00", VA = "0x181CEC700", Slot = "6")]
	public override PhotonSocketError Send(byte[] data, int length)
	{
		return default(PhotonSocketError);
	}

	[Token(Token = "0x60002D5")]
	[Address(RVA = "0x1CE9800", Offset = "0x1CE7E00", VA = "0x181CE9800", Slot = "7")]
	public override PhotonSocketError Receive(out byte[] data)
	{
		return default(PhotonSocketError);
	}

	[Token(Token = "0x60002D6")]
	[Address(RVA = "0x1CEB6F0", Offset = "0x1CE9CF0", VA = "0x181CEB6F0")]
	internal void DnsAndConnect()
	{
	}

	[Token(Token = "0x60002D7")]
	[Address(RVA = "0x1CECC30", Offset = "0x1CEB230", VA = "0x181CECC30")]
	public void StartReceive()
	{
	}

	[Token(Token = "0x60002D8")]
	[Address(RVA = "0x1CEBCA0", Offset = "0x1CEA2A0", VA = "0x181CEBCA0")]
	private void OnReceive(IAsyncResult ar)
	{
	}
}
