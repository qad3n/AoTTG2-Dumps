// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Globalization.Unicode.Contraction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Mono.Globalization.Unicode;

[Token(Token = "0x2000051")]
internal class Contraction
{
	[Token(Token = "0x400015F")]
	[FieldOffset(Offset = "0x10")]
	public int Index;

	[Token(Token = "0x4000160")]
	[FieldOffset(Offset = "0x18")]
	public readonly char[] Source;

	[Token(Token = "0x4000161")]
	[FieldOffset(Offset = "0x20")]
	public readonly string Replacement;

	[Token(Token = "0x4000162")]
	[FieldOffset(Offset = "0x28")]
	public readonly byte[] SortKey;

	[Token(Token = "0x60000BE")]
	[Address(RVA = "0x1941B20", Offset = "0x1940120", VA = "0x181941B20")]
	public Contraction(int index, char[] source, string replacement, byte[] sortkey)
	{
	}
}
