// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxTokenizer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4FD1BC0", Offset = "0x4FD1BC0", VA = "0x4FD1BC0")]
		get
		{
			return default(StyleSyntaxToken);
		}
	}

	[Token(Token = "0x6002087")]
	[Address(RVA = "0x4FD29A0", Offset = "0x4FD29A0", VA = "0x4FD29A0")]
	public StyleSyntaxToken MoveNext()
	{
		return default(StyleSyntaxToken);
	}

	[Token(Token = "0x6002088")]
	[Address(RVA = "0x4FD2BE0", Offset = "0x4FD2BE0", VA = "0x4FD2BE0")]
	public StyleSyntaxToken PeekNext()
	{
		return default(StyleSyntaxToken);
	}

	[Token(Token = "0x6002089")]
	[Address(RVA = "0x4FD0B90", Offset = "0x4FD0B90", VA = "0x4FD0B90")]
	public void Tokenize(string syntax)
	{
	}

	[Token(Token = "0x600208A")]
	[Address(RVA = "0x4FD3570", Offset = "0x4FD3570", VA = "0x4FD3570")]
	private static bool IsNextCharacter(string s, int index, char c)
	{
		return default(bool);
	}

	[Token(Token = "0x600208B")]
	[Address(RVA = "0x4FD3600", Offset = "0x4FD3600", VA = "0x4FD3600")]
	private static bool IsNextLetterOrDash(string s, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x600208C")]
	[Address(RVA = "0x4FD35A0", Offset = "0x4FD35A0", VA = "0x4FD35A0")]
	private static bool IsNextNumber(string s, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x600208D")]
	[Address(RVA = "0x4FD3520", Offset = "0x4FD3520", VA = "0x4FD3520")]
	private static int GlobCharacter(string s, int index, char c)
	{
		return default(int);
	}

	[Token(Token = "0x600208E")]
	[Address(RVA = "0x4FD0B10", Offset = "0x4FD0B10", VA = "0x4FD0B10")]
	public StyleSyntaxTokenizer()
	{
	}
}
