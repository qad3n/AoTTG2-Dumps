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
		[Address(RVA = "0x31FAEE0", Offset = "0x31F94E0", VA = "0x1831FAEE0")]
		get
		{
			return default(StyleSyntaxToken);
		}
	}

	[Token(Token = "0x6002DF4")]
	[Address(RVA = "0x31FA120", Offset = "0x31F8720", VA = "0x1831FA120")]
	public StyleSyntaxToken MoveNext()
	{
		return default(StyleSyntaxToken);
	}

	[Token(Token = "0x6002DF5")]
	[Address(RVA = "0x31FA1E0", Offset = "0x31F87E0", VA = "0x1831FA1E0")]
	public StyleSyntaxToken PeekNext()
	{
		return default(StyleSyntaxToken);
	}

	[Token(Token = "0x6002DF6")]
	[Address(RVA = "0x31FA2D0", Offset = "0x31F88D0", VA = "0x1831FA2D0")]
	public void Tokenize(string syntax)
	{
	}

	[Token(Token = "0x6002DF7")]
	[Address(RVA = "0x31F9FC0", Offset = "0x31F85C0", VA = "0x1831F9FC0")]
	private static bool IsNextCharacter(string s, int index, char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6002DF8")]
	[Address(RVA = "0x31FA010", Offset = "0x31F8610", VA = "0x1831FA010")]
	private static bool IsNextLetterOrDash(string s, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6002DF9")]
	[Address(RVA = "0x31FA0C0", Offset = "0x31F86C0", VA = "0x1831FA0C0")]
	private static bool IsNextNumber(string s, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6002DFA")]
	[Address(RVA = "0x31F9F60", Offset = "0x31F8560", VA = "0x1831F9F60")]
	private static int GlobCharacter(string s, int index, char c)
	{
		return default(int);
	}

	[Token(Token = "0x6002DFB")]
	[Address(RVA = "0x31FAE60", Offset = "0x31F9460", VA = "0x1831FAE60")]
	public StyleSyntaxTokenizer()
	{
	}
}
