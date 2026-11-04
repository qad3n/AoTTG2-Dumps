// ==================== AoTTG2 cross-reference ====================
// Type: ExitGames.Client.Photon.PhotonClientWebSocket
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x1CCFBD0", Offset = "0x1CCE1D0", VA = "0x181CCFBD0")]
	[Preserve]
	public PhotonClientWebSocket(PeerBase peerBase)
	{
	}

	[Token(Token = "0x6000156")]
	[Address(RVA = "0x1CCF590", Offset = "0x1CCDB90", VA = "0x181CCF590", Slot = "4")]
	public override bool Connect()
	{
		return default(bool);
	}

	[Token(Token = "0x6000157")]
	[Address(RVA = "0x1CCE630", Offset = "0x1CCCC30", VA = "0x181CCE630")]
	private void AsyncConnectAndReceive()
	{
	}

	[Token(Token = "0x6000158")]
	[Address(RVA = "0x1CCF660", Offset = "0x1CCDC60", VA = "0x181CCF660", Slot = "5")]
	public override bool Disconnect()
	{
		return default(bool);
	}

	[Token(Token = "0x6000159")]
	[Address(RVA = "0x1CCF910", Offset = "0x1CCDF10", VA = "0x181CCF910", Slot = "6")]
	public override PhotonSocketError Send(byte[] data, int length)
	{
		return default(PhotonSocketError);
	}

	[Token(Token = "0x600015A")]
	[Address(RVA = "0x1CCF8D0", Offset = "0x1CCDED0", VA = "0x181CCF8D0", Slot = "7")]
	public override PhotonSocketError Receive(out byte[] data)
	{
		return default(PhotonSocketError);
	}
}
