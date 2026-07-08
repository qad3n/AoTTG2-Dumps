using System.Net.WebSockets;
using System.Threading.Tasks;
using Il2CppDummyDll;

namespace ExitGames.Client.Photon;

[Token(Token = "0x2000027")]
public class PhotonClientWebSocket : IPhotonSocket
{
	[Token(Token = "0x400011F")]
	[FieldOffset(Offset = "0x58")]
	private ClientWebSocket clientWebSocket;

	[Token(Token = "0x4000120")]
	[FieldOffset(Offset = "0x60")]
	private Task sendTask;

	[Token(Token = "0x6000155")]
	[Address(RVA = "0x3B7CBC0", Offset = "0x3B7CBC0", VA = "0x3B7CBC0")]
	[Preserve]
	public PhotonClientWebSocket(PeerBase peerBase)
	{
	}

	[Token(Token = "0x6000156")]
	[Address(RVA = "0x3B7CC30", Offset = "0x3B7CC30", VA = "0x3B7CC30", Slot = "4")]
	public override bool Connect()
	{
		return default(bool);
	}

	[Token(Token = "0x6000157")]
	[Address(RVA = "0x3B7CD00", Offset = "0x3B7CD00", VA = "0x3B7CD00")]
	private void AsyncConnectAndReceive()
	{
	}

	[Token(Token = "0x6000158")]
	[Address(RVA = "0x3B7DFA0", Offset = "0x3B7DFA0", VA = "0x3B7DFA0", Slot = "5")]
	public override bool Disconnect()
	{
		return default(bool);
	}

	[Token(Token = "0x6000159")]
	[Address(RVA = "0x3B7E2E0", Offset = "0x3B7E2E0", VA = "0x3B7E2E0", Slot = "6")]
	public override PhotonSocketError Send(byte[] data, int length)
	{
		return default(PhotonSocketError);
	}

	[Token(Token = "0x600015A")]
	[Address(RVA = "0x3B7E580", Offset = "0x3B7E580", VA = "0x3B7E580", Slot = "7")]
	public override PhotonSocketError Receive(out byte[] data)
	{
		return default(PhotonSocketError);
	}
}
