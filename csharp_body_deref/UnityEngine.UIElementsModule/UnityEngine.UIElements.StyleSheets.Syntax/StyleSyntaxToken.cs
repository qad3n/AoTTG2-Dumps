using Il2CppDummyDll;

namespace UnityEngine.UIElements.StyleSheets.Syntax;

[Token(Token = "0x2000552")]
internal struct StyleSyntaxToken
{
	[Token(Token = "0x400127A")]
	[FieldOffset(Offset = "0x0")]
	public StyleSyntaxTokenType type;

	[Token(Token = "0x400127B")]
	[FieldOffset(Offset = "0x8")]
	public string text;

	[Token(Token = "0x400127C")]
	[FieldOffset(Offset = "0x10")]
	public int number;

	[Token(Token = "0x6002083")]
	[Address(RVA = "0x4CABB70", Offset = "0x4CABB70", VA = "0x4CABB70")]
	public StyleSyntaxToken(StyleSyntaxTokenType t)
	{
	}

	[Token(Token = "0x6002084")]
	[Address(RVA = "0x4CABBA0", Offset = "0x4CABBA0", VA = "0x4CABBA0")]
	public StyleSyntaxToken(StyleSyntaxTokenType type, string text)
	{
	}

	[Token(Token = "0x6002085")]
	[Address(RVA = "0x4CABBC0", Offset = "0x4CABBC0", VA = "0x4CABBC0")]
	public StyleSyntaxToken(StyleSyntaxTokenType type, int number)
	{
	}
}
