// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.PathInternal
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.IO;

[Token(Token = "0x200066C")]
internal static class PathInternal
{
	[Token(Token = "0x40019BB")]
	[FieldOffset(Offset = "0x0")]
	private static readonly bool s_isCaseSensitive;

	[Token(Token = "0x170007EC")]
	internal static StringComparison StringComparison
	{
		[Token(Token = "0x600310F")]
		[Address(RVA = "0x1AD9DD0", Offset = "0x1AD83D0", VA = "0x181AD9DD0")]
		get
		{
			return default(StringComparison);
		}
	}

	[Token(Token = "0x170007ED")]
	internal static bool IsCaseSensitive
	{
		[Token(Token = "0x6003110")]
		[Address(RVA = "0x1AD9D80", Offset = "0x1AD8380", VA = "0x181AD9D80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60030FD")]
	[Address(RVA = "0x1AD98C0", Offset = "0x1AD7EC0", VA = "0x181AD98C0")]
	internal static bool IsValidDriveChar(char value)
	{
		return default(bool);
	}

	[Token(Token = "0x60030FE")]
	[Address(RVA = "0x1AD89B0", Offset = "0x1AD6FB0", VA = "0x181AD89B0")]
	internal static bool EndsWithPeriodOrSpace(string path)
	{
		return default(bool);
	}

	[Token(Token = "0x60030FF")]
	[Address(RVA = "0x1AD8A10", Offset = "0x1AD7010", VA = "0x181AD8A10")]
	internal static string EnsureExtendedPrefixIfNeeded(string path)
	{
		return null;
	}

	[Token(Token = "0x6003100")]
	[Address(RVA = "0x1AD8AB0", Offset = "0x1AD70B0", VA = "0x181AD8AB0")]
	internal static string EnsureExtendedPrefix(string path)
	{
		return null;
	}

	[Token(Token = "0x6003101")]
	[Address(RVA = "0x1AD9590", Offset = "0x1AD7B90", VA = "0x181AD9590")]
	internal static bool IsDevice(ReadOnlySpan<char> path)
	{
		return default(bool);
	}

	[Token(Token = "0x6003102")]
	[Address(RVA = "0x1AD94A0", Offset = "0x1AD7AA0", VA = "0x181AD94A0")]
	internal static bool IsDeviceUNC(ReadOnlySpan<char> path)
	{
		return default(bool);
	}

	[Token(Token = "0x6003103")]
	[Address(RVA = "0x1AD97D0", Offset = "0x1AD7DD0", VA = "0x181AD97D0")]
	internal static bool IsExtended(ReadOnlySpan<char> path)
	{
		return default(bool);
	}

	[Token(Token = "0x6003104")]
	[Address(RVA = "0x1AD9120", Offset = "0x1AD7720", VA = "0x181AD9120")]
	internal static int GetRootLength(ReadOnlySpan<char> path)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6003105")]
	[Address(RVA = "0x1AD9730", Offset = "0x1AD7D30", VA = "0x181AD9730")]
	internal static bool IsDirectorySeparator(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6003106")]
	[Address(RVA = "0x1AD9750", Offset = "0x1AD7D50", VA = "0x181AD9750")]
	internal static bool IsEffectivelyEmpty(ReadOnlySpan<char> path)
	{
		return default(bool);
	}

	[Token(Token = "0x6003107")]
	[Address(RVA = "0x1AD8920", Offset = "0x1AD6F20", VA = "0x181AD8920")]
	internal static bool EndsInDirectorySeparator(ReadOnlySpan<char> path)
	{
		return default(bool);
	}

	[Token(Token = "0x6003108")]
	[Address(RVA = "0x1AD98E0", Offset = "0x1AD7EE0", VA = "0x181AD98E0")]
	internal static bool StartsWithDirectorySeparator(ReadOnlySpan<char> path)
	{
		return default(bool);
	}

	[Token(Token = "0x6003109")]
	[Address(RVA = "0x1AD9960", Offset = "0x1AD7F60", VA = "0x181AD9960")]
	internal static string TrimEndingDirectorySeparator(string path)
	{
		return null;
	}

	[Token(Token = "0x600310A")]
	[Address(RVA = "0x1AD9B80", Offset = "0x1AD8180", VA = "0x181AD9B80")]
	internal static ReadOnlySpan<char> TrimEndingDirectorySeparator(ReadOnlySpan<char> path)
	{
		return default(ReadOnlySpan<char>);
	}

	[Token(Token = "0x600310B")]
	[Address(RVA = "0x1AD9850", Offset = "0x1AD7E50", VA = "0x181AD9850")]
	internal static bool IsRoot(ReadOnlySpan<char> path)
	{
		return default(bool);
	}

	[Token(Token = "0x600310C")]
	[Address(RVA = "0x1AD8D30", Offset = "0x1AD7330", VA = "0x181AD8D30")]
	internal static int GetCommonPathLength(string first, string second, bool ignoreCase)
	{
		return default(int);
	}

	[Token(Token = "0x600310D")]
	[Address(RVA = "0x1AD8C00", Offset = "0x1AD7200", VA = "0x181AD8C00")]
	internal static int EqualStartingCharacterCount(string first, string second, bool ignoreCase)
	{
		return default(int);
	}

	[Token(Token = "0x600310E")]
	[Address(RVA = "0x1AD87D0", Offset = "0x1AD6DD0", VA = "0x181AD87D0")]
	internal static bool AreRootsEqual(string first, string second, StringComparison comparisonType)
	{
		return default(bool);
	}

	[Token(Token = "0x6003111")]
	[Address(RVA = "0x1AD8F60", Offset = "0x1AD7560", VA = "0x181AD8F60")]
	private static bool GetIsCaseSensitive()
	{
		return default(bool);
	}

	[Token(Token = "0x6003112")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280")]
	public static bool IsPartiallyQualified(string path)
	{
		return default(bool);
	}
}
