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
	[Address(RVA = "0x3E72510", Offset = "0x3E72510", VA = "0x3E72510")]
	[Preserve]
	public PhotonClientWebSocket(PeerBase peerBase)
	{
	}

	[Token(Token = "0x6000156")]
	[Address(RVA = "0x3E72580", Offset = "0x3E72580", VA = "0x3E72580", Slot = "4")]
	public override bool Connect()
	{
		return default(bool);
	}

	[Token(Token = "0x6000157")]
	[Address(RVA = "0x3E72650", Offset = "0x3E72650", VA = "0x3E72650")]
	private void AsyncConnectAndReceive()
	{
	}

	[Token(Token = "0x6000158")]
	[Address(RVA = "0x3E738F0", Offset = "0x3E738F0", VA = "0x3E738F0", Slot = "5")]
	public override bool Disconnect()
	{
		return default(bool);
	}

	[Token(Token = "0x6000159")]
	[Address(RVA = "0x3E73C30", Offset = "0x3E73C30", VA = "0x3E73C30", Slot = "6")]
	public override PhotonSocketError Send(byte[] data, int length)
	{
		return default(PhotonSocketError);
	}

	[Token(Token = "0x600015A")]
	[Address(RVA = "0x3E73ED0", Offset = "0x3E73ED0", VA = "0x3E73ED0", Slot = "7")]
	public override PhotonSocketError Receive(out byte[] data)
	{
		return default(PhotonSocketError);
	}
}
