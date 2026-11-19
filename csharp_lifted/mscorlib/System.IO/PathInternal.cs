// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.PathInternal
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.IO;

[Token(Token = "0x2000645")]
internal static class PathInternal
{
	[Token(Token = "0x400191E")]
	[FieldOffset(Offset = "0x0")]
	private static readonly bool s_isCaseSensitive;

	[Token(Token = "0x170007E9")]
	internal static bool IsCaseSensitive
	{
		[Token(Token = "0x60030CE")]
		[Address(RVA = "0x5468600", Offset = "0x5467600", VA = "0x5468600")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60030C3")]
	[Address(RVA = "0x5463B10", Offset = "0x5462B10", VA = "0x5463B10")]
	internal static int GetRootLength(ReadOnlySpan<char> path)
	{
		return default(int);
	}

	[Token(Token = "0x60030C4")]
	[Address(RVA = "0x5463AE0", Offset = "0x5462AE0", VA = "0x5463AE0")]
	internal static bool IsDirectorySeparator(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60030C5")]
	[Address(RVA = "0x5467F40", Offset = "0x5466F40", VA = "0x5467F40")]
	internal static bool IsEffectivelyEmpty(ReadOnlySpan<char> path)
	{
		return default(bool);
	}

	[Token(Token = "0x60030C6")]
	[Address(RVA = "0x5463A70", Offset = "0x5462A70", VA = "0x5463A70")]
	internal static bool EndsInDirectorySeparator(ReadOnlySpan<char> path)
	{
		return default(bool);
	}

	[Token(Token = "0x60030C7")]
	[Address(RVA = "0x5467F90", Offset = "0x5466F90", VA = "0x5467F90")]
	internal static bool StartsWithDirectorySeparator(ReadOnlySpan<char> path)
	{
		return default(bool);
	}

	[Token(Token = "0x60030C8")]
	[Address(RVA = "0x5463000", Offset = "0x5462000", VA = "0x5463000")]
	internal static string TrimEndingDirectorySeparator(string path)
	{
		return null;
	}

	[Token(Token = "0x60030C9")]
	[Address(RVA = "0x5464400", Offset = "0x5463400", VA = "0x5464400")]
	internal static ReadOnlySpan<char> TrimEndingDirectorySeparator(ReadOnlySpan<char> path)
	{
		return default(ReadOnlySpan<char>);
	}

	[Token(Token = "0x60030CA")]
	[Address(RVA = "0x5468000", Offset = "0x5467000", VA = "0x5468000")]
	internal static bool IsRoot(ReadOnlySpan<char> path)
	{
		return default(bool);
	}

	[Token(Token = "0x60030CB")]
	[Address(RVA = "0x54680E0", Offset = "0x54670E0", VA = "0x54680E0")]
	internal static int GetCommonPathLength(string first, string second, bool ignoreCase)
	{
		return default(int);
	}

	[Token(Token = "0x60030CC")]
	[Address(RVA = "0x5468240", Offset = "0x5467240", VA = "0x5468240")]
	internal static int EqualStartingCharacterCount(string first, string second, bool ignoreCase)
	{
		return default(int);
	}

	[Token(Token = "0x60030CD")]
	[Address(RVA = "0x54683D0", Offset = "0x54673D0", VA = "0x54683D0")]
	internal static bool AreRootsEqual(string first, string second, StringComparison comparisonType)
	{
		return default(bool);
	}

	[Token(Token = "0x60030CF")]
	[Address(RVA = "0x5468670", Offset = "0x5467670", VA = "0x5468670")]
	private static bool GetIsCaseSensitive()
	{
		return default(bool);
	}

	[Token(Token = "0x60030D0")]
	[Address(RVA = "0x5468920", Offset = "0x5467920", VA = "0x5468920")]
	public static bool IsPartiallyQualified(string path)
	{
		return default(bool);
	}
}
