// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.BMPAlloc
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x20005E5")]
internal struct BMPAlloc
{
	[Token(Token = "0x40015EE")]
	[FieldOffset(Offset = "0x0")]
	public static readonly BMPAlloc Invalid;

	[Token(Token = "0x40015EF")]
	[FieldOffset(Offset = "0x0")]
	public int page;

	[Token(Token = "0x40015F0")]
	[FieldOffset(Offset = "0x4")]
	public ushort pageLine;

	[Token(Token = "0x40015F1")]
	[FieldOffset(Offset = "0x6")]
	public byte bitIndex;

	[Token(Token = "0x40015F2")]
	[FieldOffset(Offset = "0x7")]
	public OwnedState ownedState;

	[Token(Token = "0x6002B99")]
	[Address(RVA = "0x31A21F0", Offset = "0x31A07F0", VA = "0x1831A21F0")]
	public bool Equals(BMPAlloc other)
	{
		return default(bool);
	}

	[Token(Token = "0x6002B9A")]
	[Address(RVA = "0x31A2210", Offset = "0x31A0810", VA = "0x1831A2210")]
	public bool IsValid()
	{
		return default(bool);
	}

	[Token(Token = "0x6002B9B")]
	[Address(RVA = "0x31A2220", Offset = "0x31A0820", VA = "0x1831A2220", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
