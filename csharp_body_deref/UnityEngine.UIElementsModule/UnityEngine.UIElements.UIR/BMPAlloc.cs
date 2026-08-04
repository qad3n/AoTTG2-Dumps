// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.BMPAlloc
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x20004D4")]
internal struct BMPAlloc
{
	[Token(Token = "0x4000FAD")]
	[FieldOffset(Offset = "0x0")]
	public static readonly BMPAlloc Invalid;

	[Token(Token = "0x4000FAE")]
	[FieldOffset(Offset = "0x0")]
	public int page;

	[Token(Token = "0x4000FAF")]
	[FieldOffset(Offset = "0x4")]
	public ushort pageLine;

	[Token(Token = "0x4000FB0")]
	[FieldOffset(Offset = "0x6")]
	public byte bitIndex;

	[Token(Token = "0x4000FB1")]
	[FieldOffset(Offset = "0x7")]
	public OwnedState ownedState;

	[Token(Token = "0x6001DE9")]
	[Address(RVA = "0x4F9D960", Offset = "0x4F9D960", VA = "0x4F9D960")]
	public bool Equals(BMPAlloc other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001DEA")]
	[Address(RVA = "0x4F9F250", Offset = "0x4F9F250", VA = "0x4F9F250")]
	public bool IsValid()
	{
		return default(bool);
	}

	[Token(Token = "0x6001DEB")]
	[Address(RVA = "0x4FA86C0", Offset = "0x4FA86C0", VA = "0x4FA86C0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
