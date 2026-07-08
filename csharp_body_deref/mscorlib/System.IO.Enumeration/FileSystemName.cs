using Il2CppDummyDll;

namespace System.IO.Enumeration;

[Token(Token = "0x2000593")]
public static class FileSystemName
{
	[Token(Token = "0x400175E")]
	[FieldOffset(Offset = "0x0")]
	private static readonly char[] s_wildcardChars;

	[Token(Token = "0x400175F")]
	[FieldOffset(Offset = "0x8")]
	private static readonly char[] s_simpleWildcardChars;

	[Token(Token = "0x6002B4C")]
	[Address(RVA = "0x4F52FB0", Offset = "0x4F52FB0", VA = "0x4F52FB0")]
	public static string TranslateWin32Expression(string expression)
	{
		return null;
	}

	[Token(Token = "0x6002B4D")]
	[Address(RVA = "0x4F53720", Offset = "0x4F53720", VA = "0x4F53720")]
	public static bool MatchesWin32Expression(ReadOnlySpan<char> expression, ReadOnlySpan<char> name, bool ignoreCase = true)
	{
		return default(bool);
	}

	[Token(Token = "0x6002B4E")]
	[Address(RVA = "0x4F536A0", Offset = "0x4F536A0", VA = "0x4F536A0")]
	public static bool MatchesSimpleExpression(ReadOnlySpan<char> expression, ReadOnlySpan<char> name, bool ignoreCase = true)
	{
		return default(bool);
	}

	[Token(Token = "0x6002B4F")]
	[Address(RVA = "0x4F54B50", Offset = "0x4F54B50", VA = "0x4F54B50")]
	private static bool MatchPattern(ReadOnlySpan<char> expression, ReadOnlySpan<char> name, bool ignoreCase, bool useExtendedWildcards)
	{
		return default(bool);
	}
}
