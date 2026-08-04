// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Globalization.Unicode.Contraction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Mono.Globalization.Unicode;

[Token(Token = "0x2000033")]
internal class Contraction
{
	[Token(Token = "0x40000DD")]
	[FieldOffset(Offset = "0x10")]
	public int Index;

	[Token(Token = "0x40000DE")]
	[FieldOffset(Offset = "0x18")]
	public readonly char[] Source;

	[Token(Token = "0x40000DF")]
	[FieldOffset(Offset = "0x20")]
	public readonly string Replacement;

	[Token(Token = "0x40000E0")]
	[FieldOffset(Offset = "0x28")]
	public readonly byte[] SortKey;

	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x3AD17B0", Offset = "0x3AD17B0", VA = "0x3AD17B0")]
	public Contraction(int index, char[] source, string replacement, byte[] sortkey)
	{
	}
}
