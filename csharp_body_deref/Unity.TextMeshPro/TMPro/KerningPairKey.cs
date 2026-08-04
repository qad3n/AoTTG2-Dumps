// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.KerningPairKey
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace TMPro;

[Token(Token = "0x2000044")]
public struct KerningPairKey
{
	[Token(Token = "0x4000211")]
	[FieldOffset(Offset = "0x0")]
	public uint ascii_Left;

	[Token(Token = "0x4000212")]
	[FieldOffset(Offset = "0x4")]
	public uint ascii_Right;

	[Token(Token = "0x4000213")]
	[FieldOffset(Offset = "0x8")]
	public uint key;

	[Token(Token = "0x600023C")]
	[Address(RVA = "0x4C564A0", Offset = "0x4C564A0", VA = "0x4C564A0")]
	public KerningPairKey(uint ascii_left, uint ascii_right)
	{
	}
}
