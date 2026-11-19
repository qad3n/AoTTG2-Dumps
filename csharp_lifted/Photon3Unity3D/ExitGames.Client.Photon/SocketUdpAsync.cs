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
	[Address(RVA = "0x567FA60", Offset = "0x567EA60", VA = "0x567FA60")]
	[Preserve]
	public SocketUdpAsync(PeerBase npeer)
	{
	}

	[Token(Token = "0x60002D0")]
	[Address(RVA = "0x567FBA0", Offset = "0x567EBA0", VA = "0x567FBA0", Slot = "1")]
	~SocketUdpAsync()
	{
	}

	[Token(Token = "0x60002D1")]
	[Address(RVA = "0x567FC30", Offset = "0x567EC30", VA = "0x567FC30", Slot = "8")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60002D2")]
	[Address(RVA = "0x567FD40", Offset = "0x567ED40", VA = "0x567FD40", Slot = "4")]
	public override bool Connect()
	{
		return default(bool);
	}

	[Token(Token = "0x60002D3")]
	[Address(RVA = "0x567FEC0", Offset = "0x567EEC0", VA = "0x567FEC0", Slot = "5")]
	public override bool Disconnect()
	{
		return default(bool);
	}

	[Token(Token = "0x60002D4")]
	[Address(RVA = "0x56800E0", Offset = "0x567F0E0", VA = "0x56800E0", Slot = "6")]
	public override PhotonSocketError Send(byte[] data, int length)
	{
		return default(PhotonSocketError);
	}

	[Token(Token = "0x60002D5")]
	[Address(RVA = "0x56804B0", Offset = "0x567F4B0", VA = "0x56804B0", Slot = "7")]
	public override PhotonSocketError Receive(out byte[] data)
	{
		return default(PhotonSocketError);
	}

	[Token(Token = "0x60002D6")]
	[Address(RVA = "0x56804D0", Offset = "0x567F4D0", VA = "0x56804D0")]
	internal void DnsAndConnect()
	{
	}

	[Token(Token = "0x60002D7")]
	[Address(RVA = "0x5680A90", Offset = "0x567FA90", VA = "0x5680A90")]
	public void StartReceive()
	{
	}

	[Token(Token = "0x60002D8")]
	[Address(RVA = "0x5680D30", Offset = "0x567FD30", VA = "0x5680D30")]
	private void OnReceive(IAsyncResult ar)
	{
	}
}
