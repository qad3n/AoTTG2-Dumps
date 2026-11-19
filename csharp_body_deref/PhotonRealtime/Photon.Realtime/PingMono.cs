// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Realtime.PingMono
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonRealtime/Code/PhotonPing.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Net.Sockets;
using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x200003B")]
public class PingMono : PhotonPing
{
	[Token(Token = "0x40001DB")]
	[FieldOffset(Offset = "0x30")]
	private Socket sock;

	[Token(Token = "0x6000155")]
	[Address(RVA = "0x56BC300", Offset = "0x56BB300", VA = "0x56BC300", Slot = "5")]
	public override bool StartPing(string ip)
	{
		return default(bool);
	}

	[Token(Token = "0x6000156")]
	[Address(RVA = "0x56BC5E0", Offset = "0x56BB5E0", VA = "0x56BC5E0", Slot = "6")]
	public override bool Done()
	{
		return default(bool);
	}

	[Token(Token = "0x6000157")]
	[Address(RVA = "0x56BC7F0", Offset = "0x56BB7F0", VA = "0x56BC7F0", Slot = "7")]
	public override void Dispose()
	{
	}

	[Token(Token = "0x6000158")]
	[Address(RVA = "0x56BC8A0", Offset = "0x56BB8A0", VA = "0x56BC8A0")]
	public PingMono()
	{
	}
}
