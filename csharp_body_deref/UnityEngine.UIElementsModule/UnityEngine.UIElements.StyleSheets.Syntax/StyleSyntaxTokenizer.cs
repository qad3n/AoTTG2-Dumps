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

[Token(Token = "0x2000649")]
internal class StyleSyntaxTokenizer
{
	[Token(Token = "0x400182A")]
	[FieldOffset(Offset = "0x10")]
	private List<StyleSyntaxToken> m_Tokens;

	[Token(Token = "0x400182B")]
	[FieldOffset(Offset = "0x18")]
	private int m_CurrentTokenIndex;

	[Token(Token = "0x17000B7A")]
	public StyleSyntaxToken current
	{
		[Token(Token = "0x6002DF3")]
		[Address(RVA = "0x6BFB6A0", Offset = "0x6BFA6A0", VA = "0x6BFB6A0")]
		get
		{
			return default(StyleSyntaxToken);
		}
	}

	[Token(Token = "0x6002DF4")]
	[Address(RVA = "0x6BFC850", Offset = "0x6BFB850", VA = "0x6BFC850")]
	public StyleSyntaxToken MoveNext()
	{
		return default(StyleSyntaxToken);
	}

	[Token(Token = "0x6002DF5")]
	[Address(RVA = "0x6BFCBD0", Offset = "0x6BFBBD0", VA = "0x6BFCBD0")]
	public StyleSyntaxToken PeekNext()
	{
		return default(StyleSyntaxToken);
	}

	[Token(Token = "0x6002DF6")]
	[Address(RVA = "0x6BFA760", Offset = "0x6BF9760", VA = "0x6BFA760")]
	public void Tokenize(string syntax)
	{
	}

	[Token(Token = "0x6002DF7")]
	[Address(RVA = "0x6BFD910", Offset = "0x6BFC910", VA = "0x6BFD910")]
	private static bool IsNextCharacter(string s, int index, char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6002DF8")]
	[Address(RVA = "0x6BFD9A0", Offset = "0x6BFC9A0", VA = "0x6BFD9A0")]
	private static bool IsNextLetterOrDash(string s, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6002DF9")]
	[Address(RVA = "0x6BFD940", Offset = "0x6BFC940", VA = "0x6BFD940")]
	private static bool IsNextNumber(string s, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6002DFA")]
	[Address(RVA = "0x6BFD8C0", Offset = "0x6BFC8C0", VA = "0x6BFD8C0")]
	private static int GlobCharacter(string s, int index, char c)
	{
		return default(int);
	}

	[Token(Token = "0x6002DFB")]
	[Address(RVA = "0x6BFA6E0", Offset = "0x6BF96E0", VA = "0x6BFA6E0")]
	public StyleSyntaxTokenizer()
	{
	}
}
