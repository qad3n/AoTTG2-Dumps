using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.StyleSheets.Syntax;

[Token(Token = "0x2000553")]
internal class StyleSyntaxTokenizer
{
	[Token(Token = "0x400127D")]
	[FieldOffset(Offset = "0x10")]
	private List<StyleSyntaxToken> m_Tokens;

	[Token(Token = "0x400127E")]
	[FieldOffset(Offset = "0x18")]
	private int m_CurrentTokenIndex;

	[Token(Token = "0x1700085D")]
	public StyleSyntaxToken current
	{
		[Token(Token = "0x6002086")]
		[Address(RVA = "0x4CAA290", Offset = "0x4CAA290", VA = "0x4CAA290")]
		get
		{
			return default(StyleSyntaxToken);
		}
	}

	[Token(Token = "0x6002087")]
	[Address(RVA = "0x4CAB070", Offset = "0x4CAB070", VA = "0x4CAB070")]
	public StyleSyntaxToken MoveNext()
	{
		return default(StyleSyntaxToken);
	}

	[Token(Token = "0x6002088")]
	[Address(RVA = "0x4CAB2B0", Offset = "0x4CAB2B0", VA = "0x4CAB2B0")]
	public StyleSyntaxToken PeekNext()
	{
		return default(StyleSyntaxToken);
	}

	[Token(Token = "0x6002089")]
	[Address(RVA = "0x4CA9260", Offset = "0x4CA9260", VA = "0x4CA9260")]
	public void Tokenize(string syntax)
	{
	}

	[Token(Token = "0x600208A")]
	[Address(RVA = "0x4CABC40", Offset = "0x4CABC40", VA = "0x4CABC40")]
	private static bool IsNextCharacter(string s, int index, char c)
	{
		return default(bool);
	}

	[Token(Token = "0x600208B")]
	[Address(RVA = "0x4CABCD0", Offset = "0x4CABCD0", VA = "0x4CABCD0")]
	private static bool IsNextLetterOrDash(string s, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x600208C")]
	[Address(RVA = "0x4CABC70", Offset = "0x4CABC70", VA = "0x4CABC70")]
	private static bool IsNextNumber(string s, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x600208D")]
	[Address(RVA = "0x4CABBF0", Offset = "0x4CABBF0", VA = "0x4CABBF0")]
	private static int GlobCharacter(string s, int index, char c)
	{
		return default(int);
	}

	[Token(Token = "0x600208E")]
	[Address(RVA = "0x4CA91E0", Offset = "0x4CA91E0", VA = "0x4CA91E0")]
	public StyleSyntaxTokenizer()
	{
	}
}
