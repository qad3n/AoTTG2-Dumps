// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.PathInternal
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.IO;

[Token(Token = "0x2000543")]
internal static class PathInternal
{
	[Token(Token = "0x40015DA")]
	[FieldOffset(Offset = "0x0")]
	private static readonly bool s_isCaseSensitive;

	[Token(Token = "0x170005D5")]
	internal static StringComparison StringComparison
	{
		[Token(Token = "0x600283A")]
		[Address(RVA = "0x3BEDDA0", Offset = "0x3BEDDA0", VA = "0x3BEDDA0")]
		get
		{
			return default(StringComparison);
		}
	}

	[Token(Token = "0x170005D6")]
	internal static bool IsCaseSensitive
	{
		[Token(Token = "0x600283B")]
		[Address(RVA = "0x3BEDDF0", Offset = "0x3BEDDF0", VA = "0x3BEDDF0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600282E")]
	[Address(RVA = "0x3BED320", Offset = "0x3BED320", VA = "0x3BED320")]
	internal static int GetRootLength(ReadOnlySpan<char> path)
	{
		return default(int);
	}

	[Token(Token = "0x600282F")]
	[Address(RVA = "0x3BED390", Offset = "0x3BED390", VA = "0x3BED390")]
	internal static bool IsDirectorySeparator(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6002830")]
	[Address(RVA = "0x3BED3A0", Offset = "0x3BED3A0", VA = "0x3BED3A0")]
	internal static bool IsEffectivelyEmpty(string path)
	{
		return default(bool);
	}

	[Token(Token = "0x6002831")]
	[Address(RVA = "0x3BED3B0", Offset = "0x3BED3B0", VA = "0x3BED3B0")]
	internal static bool IsEffectivelyEmpty(ReadOnlySpan<char> path)
	{
		return default(bool);
	}

	[Token(Token = "0x6002832")]
	[Address(RVA = "0x3BED400", Offset = "0x3BED400", VA = "0x3BED400")]
	internal static bool EndsInDirectorySeparator(ReadOnlySpan<char> path)
	{
		return default(bool);
	}

	[Token(Token = "0x6002833")]
	[Address(RVA = "0x3BED470", Offset = "0x3BED470", VA = "0x3BED470")]
	internal static bool StartsWithDirectorySeparator(ReadOnlySpan<char> path)
	{
		return default(bool);
	}

	[Token(Token = "0x6002834")]
	[Address(RVA = "0x3BED4E0", Offset = "0x3BED4E0", VA = "0x3BED4E0")]
	internal static string TrimEndingDirectorySeparator(string path)
	{
		return null;
	}

	[Token(Token = "0x6002835")]
	[Address(RVA = "0x3BED760", Offset = "0x3BED760", VA = "0x3BED760")]
	internal static ReadOnlySpan<char> TrimEndingDirectorySeparator(ReadOnlySpan<char> path)
	{
		return default(ReadOnlySpan<char>);
	}

	[Token(Token = "0x6002836")]
	[Address(RVA = "0x3BED680", Offset = "0x3BED680", VA = "0x3BED680")]
	internal static bool IsRoot(ReadOnlySpan<char> path)
	{
		return default(bool);
	}

	[Token(Token = "0x6002837")]
	[Address(RVA = "0x3BED880", Offset = "0x3BED880", VA = "0x3BED880")]
	internal static int GetCommonPathLength(string first, string second, bool ignoreCase)
	{
		return default(int);
	}

	[Token(Token = "0x6002838")]
	[Address(RVA = "0x3BED9E0", Offset = "0x3BED9E0", VA = "0x3BED9E0")]
	internal static int EqualStartingCharacterCount(string first, string second, bool ignoreCase)
	{
		return default(int);
	}

	[Token(Token = "0x6002839")]
	[Address(RVA = "0x3BEDB70", Offset = "0x3BEDB70", VA = "0x3BEDB70")]
	internal static bool AreRootsEqual(string first, string second, StringComparison comparisonType)
	{
		return default(bool);
	}

	[Token(Token = "0x600283C")]
	[Address(RVA = "0x3BEDE60", Offset = "0x3BEDE60", VA = "0x3BEDE60")]
	private static bool GetIsCaseSensitive()
	{
		return default(bool);
	}

	[Token(Token = "0x600283D")]
	[Address(RVA = "0x3BEE3A0", Offset = "0x3BEE3A0", VA = "0x3BEE3A0")]
	public static bool IsPartiallyQualified(string path)
	{
		return default(bool);
	}
}
