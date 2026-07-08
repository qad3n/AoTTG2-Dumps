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
	[Address(RVA = "0x4DEBC90", Offset = "0x4DEBC90", VA = "0x4DEBC90")]
	public Contraction(int index, char[] source, string replacement, byte[] sortkey)
	{
	}
}
