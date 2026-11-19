// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Realtime.FindFriendsOptions
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonRealtime/Code/LoadbalancingPeer.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x2000024")]
public class FindFriendsOptions
{
	[Token(Token = "0x40000D6")]
	[FieldOffset(Offset = "0x10")]
	public bool CreatedOnGs;

	[Token(Token = "0x40000D7")]
	[FieldOffset(Offset = "0x11")]
	public bool Visible;

	[Token(Token = "0x40000D8")]
	[FieldOffset(Offset = "0x12")]
	public bool Open;

	[Token(Token = "0x6000119")]
	[Address(RVA = "0x56BA2C0", Offset = "0x56B92C0", VA = "0x56BA2C0")]
	internal int ToIntFlags()
	{
		return default(int);
	}

	[Token(Token = "0x600011A")]
	[Address(RVA = "0x56BB4D0", Offset = "0x56BA4D0", VA = "0x56BB4D0")]
	public FindFriendsOptions()
	{
	}
}
