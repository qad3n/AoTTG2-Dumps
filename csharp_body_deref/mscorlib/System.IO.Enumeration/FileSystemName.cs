// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.Enumeration.FileSystemName
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x3C38AD0", Offset = "0x3C38AD0", VA = "0x3C38AD0")]
	public static string TranslateWin32Expression(string expression)
	{
		return null;
	}

	[Token(Token = "0x6002B4D")]
	[Address(RVA = "0x3C39240", Offset = "0x3C39240", VA = "0x3C39240")]
	public static bool MatchesWin32Expression(ReadOnlySpan<char> expression, ReadOnlySpan<char> name, bool ignoreCase = true)
	{
		return default(bool);
	}

	[Token(Token = "0x6002B4E")]
	[Address(RVA = "0x3C391C0", Offset = "0x3C391C0", VA = "0x3C391C0")]
	public static bool MatchesSimpleExpression(ReadOnlySpan<char> expression, ReadOnlySpan<char> name, bool ignoreCase = true)
	{
		return default(bool);
	}

	[Token(Token = "0x6002B4F")]
	[Address(RVA = "0x3C3A670", Offset = "0x3C3A670", VA = "0x3C3A670")]
	private static bool MatchPattern(ReadOnlySpan<char> expression, ReadOnlySpan<char> name, bool ignoreCase, bool useExtendedWildcards)
	{
		return default(bool);
	}
}
