// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.Enumeration.FileSystemName
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.IO.Enumeration;

[Token(Token = "0x2000695")]
public static class FileSystemName
{
	[Token(Token = "0x4001A9F")]
	[FieldOffset(Offset = "0x0")]
	private static readonly char[] s_wildcardChars;

	[Token(Token = "0x4001AA0")]
	[FieldOffset(Offset = "0x8")]
	private static readonly char[] s_simpleWildcardChars;

	[Token(Token = "0x60033DF")]
	[Address(RVA = "0x5490F40", Offset = "0x548FF40", VA = "0x5490F40")]
	public static string TranslateWin32Expression(string expression)
	{
		return null;
	}

	[Token(Token = "0x60033E0")]
	[Address(RVA = "0x5491660", Offset = "0x5490660", VA = "0x5491660")]
	public static bool MatchesWin32Expression(ReadOnlySpan<char> expression, ReadOnlySpan<char> name, bool ignoreCase = true)
	{
		return default(bool);
	}

	[Token(Token = "0x60033E1")]
	[Address(RVA = "0x54915E0", Offset = "0x54905E0", VA = "0x54915E0")]
	public static bool MatchesSimpleExpression(ReadOnlySpan<char> expression, ReadOnlySpan<char> name, bool ignoreCase = true)
	{
		return default(bool);
	}

	[Token(Token = "0x60033E2")]
	[Address(RVA = "0x5492A90", Offset = "0x5491A90", VA = "0x5492A90")]
	private static bool MatchPattern(ReadOnlySpan<char> expression, ReadOnlySpan<char> name, bool ignoreCase, bool useExtendedWildcards)
	{
		return default(bool);
	}
}
