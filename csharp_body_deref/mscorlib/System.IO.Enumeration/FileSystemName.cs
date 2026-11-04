// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.Enumeration.FileSystemName
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.IO.Enumeration;

[Token(Token = "0x20006BA")]
public static class FileSystemName
{
	[Token(Token = "0x4001B32")]
	[FieldOffset(Offset = "0x0")]
	private static readonly char[] s_wildcardChars;

	[Token(Token = "0x4001B33")]
	[FieldOffset(Offset = "0x8")]
	private static readonly char[] s_simpleWildcardChars;

	[Token(Token = "0x6003415")]
	[Address(RVA = "0x1B05EF0", Offset = "0x1B044F0", VA = "0x181B05EF0")]
	public static string TranslateWin32Expression(string expression)
	{
		return null;
	}

	[Token(Token = "0x6003416")]
	[Address(RVA = "0x1B05E60", Offset = "0x1B04460", VA = "0x181B05E60")]
	public static bool MatchesWin32Expression(ReadOnlySpan<char> expression, ReadOnlySpan<char> name, bool ignoreCase = true)
	{
		return default(bool);
	}

	[Token(Token = "0x6003417")]
	[Address(RVA = "0x1B05DD0", Offset = "0x1B043D0", VA = "0x181B05DD0")]
	public static bool MatchesSimpleExpression(ReadOnlySpan<char> expression, ReadOnlySpan<char> name, bool ignoreCase = true)
	{
		return default(bool);
	}

	[Token(Token = "0x6003418")]
	[Address(RVA = "0x1B05570", Offset = "0x1B03B70", VA = "0x181B05570")]
	private static bool MatchPattern(ReadOnlySpan<char> expression, ReadOnlySpan<char> name, bool ignoreCase, bool useExtendedWildcards)
	{
		return default(bool);
	}
}
