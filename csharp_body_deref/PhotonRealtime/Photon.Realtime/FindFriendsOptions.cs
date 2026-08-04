// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Realtime.FindFriendsOptions
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonRealtime/Code/LoadbalancingPeer.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x2000026")]
public class FindFriendsOptions
{
	[Token(Token = "0x40000DB")]
	[FieldOffset(Offset = "0x10")]
	public bool CreatedOnGs;

	[Token(Token = "0x40000DC")]
	[FieldOffset(Offset = "0x11")]
	public bool Visible;

	[Token(Token = "0x40000DD")]
	[FieldOffset(Offset = "0x12")]
	public bool Open;

	[Token(Token = "0x600011B")]
	[Address(RVA = "0x3ECDC30", Offset = "0x3ECDC30", VA = "0x3ECDC30")]
	internal int ToIntFlags()
	{
		return default(int);
	}

	[Token(Token = "0x600011C")]
	[Address(RVA = "0x3ECEE90", Offset = "0x3ECEE90", VA = "0x3ECEE90")]
	public FindFriendsOptions()
	{
	}
}
