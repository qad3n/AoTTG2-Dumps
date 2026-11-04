// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Globalization.Unicode.TailoringInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Mono.Globalization.Unicode;

[Token(Token = "0x2000050")]
internal class TailoringInfo
{
	[Token(Token = "0x400015B")]
	[FieldOffset(Offset = "0x10")]
	public readonly int LCID;

	[Token(Token = "0x400015C")]
	[FieldOffset(Offset = "0x14")]
	public readonly int TailoringIndex;

	[Token(Token = "0x400015D")]
	[FieldOffset(Offset = "0x18")]
	public readonly int TailoringCount;

	[Token(Token = "0x400015E")]
	[FieldOffset(Offset = "0x1C")]
	public readonly bool FrenchSort;

	[Token(Token = "0x60000BD")]
	[Address(RVA = "0xE59FC0", Offset = "0xE585C0", VA = "0x180E59FC0")]
	public TailoringInfo(int lcid, int tailoringIndex, int tailoringCount, bool frenchSort)
	{
	}
}
