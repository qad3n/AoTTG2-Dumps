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

[Token(Token = "0x200003D")]
public class PingMono : PhotonPing
{
	[Token(Token = "0x40001E0")]
	[FieldOffset(Offset = "0x30")]
	private Socket sock;

	[Token(Token = "0x6000157")]
	[Address(RVA = "0x3ECFCA0", Offset = "0x3ECFCA0", VA = "0x3ECFCA0", Slot = "5")]
	public override bool StartPing(string ip)
	{
		return default(bool);
	}

	[Token(Token = "0x6000158")]
	[Address(RVA = "0x3ED0000", Offset = "0x3ED0000", VA = "0x3ED0000", Slot = "6")]
	public override bool Done()
	{
		return default(bool);
	}

	[Token(Token = "0x6000159")]
	[Address(RVA = "0x3ED0240", Offset = "0x3ED0240", VA = "0x3ED0240", Slot = "7")]
	public override void Dispose()
	{
	}

	[Token(Token = "0x600015A")]
	[Address(RVA = "0x3ED02F0", Offset = "0x3ED02F0", VA = "0x3ED02F0")]
	public PingMono()
	{
	}
}
