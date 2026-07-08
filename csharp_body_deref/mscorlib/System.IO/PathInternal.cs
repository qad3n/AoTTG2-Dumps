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
		[Address(RVA = "0x4F08280", Offset = "0x4F08280", VA = "0x4F08280")]
		get
		{
			return default(StringComparison);
		}
	}

	[Token(Token = "0x170005D6")]
	internal static bool IsCaseSensitive
	{
		[Token(Token = "0x600283B")]
		[Address(RVA = "0x4F082D0", Offset = "0x4F082D0", VA = "0x4F082D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600282E")]
	[Address(RVA = "0x4F07800", Offset = "0x4F07800", VA = "0x4F07800")]
	internal static int GetRootLength(ReadOnlySpan<char> path)
	{
		return default(int);
	}

	[Token(Token = "0x600282F")]
	[Address(RVA = "0x4F07870", Offset = "0x4F07870", VA = "0x4F07870")]
	internal static bool IsDirectorySeparator(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6002830")]
	[Address(RVA = "0x4F07880", Offset = "0x4F07880", VA = "0x4F07880")]
	internal static bool IsEffectivelyEmpty(string path)
	{
		return default(bool);
	}

	[Token(Token = "0x6002831")]
	[Address(RVA = "0x4F07890", Offset = "0x4F07890", VA = "0x4F07890")]
	internal static bool IsEffectivelyEmpty(ReadOnlySpan<char> path)
	{
		return default(bool);
	}

	[Token(Token = "0x6002832")]
	[Address(RVA = "0x4F078E0", Offset = "0x4F078E0", VA = "0x4F078E0")]
	internal static bool EndsInDirectorySeparator(ReadOnlySpan<char> path)
	{
		return default(bool);
	}

	[Token(Token = "0x6002833")]
	[Address(RVA = "0x4F07950", Offset = "0x4F07950", VA = "0x4F07950")]
	internal static bool StartsWithDirectorySeparator(ReadOnlySpan<char> path)
	{
		return default(bool);
	}

	[Token(Token = "0x6002834")]
	[Address(RVA = "0x4F079C0", Offset = "0x4F079C0", VA = "0x4F079C0")]
	internal static string TrimEndingDirectorySeparator(string path)
	{
		return null;
	}

	[Token(Token = "0x6002835")]
	[Address(RVA = "0x4F07C40", Offset = "0x4F07C40", VA = "0x4F07C40")]
	internal static ReadOnlySpan<char> TrimEndingDirectorySeparator(ReadOnlySpan<char> path)
	{
		return default(ReadOnlySpan<char>);
	}

	[Token(Token = "0x6002836")]
	[Address(RVA = "0x4F07B60", Offset = "0x4F07B60", VA = "0x4F07B60")]
	internal static bool IsRoot(ReadOnlySpan<char> path)
	{
		return default(bool);
	}

	[Token(Token = "0x6002837")]
	[Address(RVA = "0x4F07D60", Offset = "0x4F07D60", VA = "0x4F07D60")]
	internal static int GetCommonPathLength(string first, string second, bool ignoreCase)
	{
		return default(int);
	}

	[Token(Token = "0x6002838")]
	[Address(RVA = "0x4F07EC0", Offset = "0x4F07EC0", VA = "0x4F07EC0")]
	internal static int EqualStartingCharacterCount(string first, string second, bool ignoreCase)
	{
		return default(int);
	}

	[Token(Token = "0x6002839")]
	[Address(RVA = "0x4F08050", Offset = "0x4F08050", VA = "0x4F08050")]
	internal static bool AreRootsEqual(string first, string second, StringComparison comparisonType)
	{
		return default(bool);
	}

	[Token(Token = "0x600283C")]
	[Address(RVA = "0x4F08340", Offset = "0x4F08340", VA = "0x4F08340")]
	private static bool GetIsCaseSensitive()
	{
		return default(bool);
	}

	[Token(Token = "0x600283D")]
	[Address(RVA = "0x4F08880", Offset = "0x4F08880", VA = "0x4F08880")]
	public static bool IsPartiallyQualified(string path)
	{
		return default(bool);
	}
}
