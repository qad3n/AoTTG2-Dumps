// ==================== AoTTG2 cross-reference ====================
// Type: System.Globalization.CharUnicodeInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Globalization;

[Token(Token = "0x2000541")]
public static class CharUnicodeInfo
{
	[Token(Token = "0x170005CB")]
	private static ReadOnlySpan<byte> CategoryLevel1Index
	{
		[Token(Token = "0x6002842")]
		[Address(RVA = "0x53F0DD0", Offset = "0x53EFDD0", VA = "0x53F0DD0")]
		get
		{
			return default(ReadOnlySpan<byte>);
		}
	}

	[Token(Token = "0x170005CC")]
	private static ReadOnlySpan<byte> CategoryLevel2Index
	{
		[Token(Token = "0x6002843")]
		[Address(RVA = "0x53F0E10", Offset = "0x53EFE10", VA = "0x53F0E10")]
		get
		{
			return default(ReadOnlySpan<byte>);
		}
	}

	[Token(Token = "0x170005CD")]
	private static ReadOnlySpan<byte> CategoryLevel3Index
	{
		[Token(Token = "0x6002844")]
		[Address(RVA = "0x53F0E50", Offset = "0x53EFE50", VA = "0x53F0E50")]
		get
		{
			return default(ReadOnlySpan<byte>);
		}
	}

	[Token(Token = "0x170005CE")]
	private static ReadOnlySpan<byte> CategoriesValue
	{
		[Token(Token = "0x6002845")]
		[Address(RVA = "0x53F0E90", Offset = "0x53EFE90", VA = "0x53F0E90")]
		get
		{
			return default(ReadOnlySpan<byte>);
		}
	}

	[Token(Token = "0x6002837")]
	[Address(RVA = "0x53F09D0", Offset = "0x53EF9D0", VA = "0x53F09D0")]
	internal static int InternalConvertToUtf32(string s, int index)
	{
		return default(int);
	}

	[Token(Token = "0x6002838")]
	[Address(RVA = "0x53F0A60", Offset = "0x53EFA60", VA = "0x53F0A60")]
	internal static int InternalConvertToUtf32(string s, int index, out int charLength)
	{
		return default(int);
	}

	[Token(Token = "0x6002839")]
	[Address(RVA = "0x53F0B00", Offset = "0x53EFB00", VA = "0x53F0B00")]
	public static UnicodeCategory GetUnicodeCategory(char ch)
	{
		return default(UnicodeCategory);
	}

	[Token(Token = "0x600283A")]
	[Address(RVA = "0x53F0B20", Offset = "0x53EFB20", VA = "0x53F0B20")]
	public static UnicodeCategory GetUnicodeCategory(string s, int index)
	{
		return default(UnicodeCategory);
	}

	[Token(Token = "0x600283B")]
	[Address(RVA = "0x53F0B10", Offset = "0x53EFB10", VA = "0x53F0B10")]
	public static UnicodeCategory GetUnicodeCategory(int codePoint)
	{
		return default(UnicodeCategory);
	}

	[Token(Token = "0x600283C")]
	[Address(RVA = "0x53F0C40", Offset = "0x53EFC40", VA = "0x53F0C40")]
	internal static byte InternalGetCategoryValue(int ch, int offset)
	{
		return default(byte);
	}

	[Token(Token = "0x600283D")]
	[Address(RVA = "0x53F0BB0", Offset = "0x53EFBB0", VA = "0x53F0BB0")]
	internal static UnicodeCategory InternalGetUnicodeCategory(string value, int index)
	{
		return default(UnicodeCategory);
	}

	[Token(Token = "0x600283E")]
	[Address(RVA = "0x53F0ED0", Offset = "0x53EFED0", VA = "0x53F0ED0")]
	internal static UnicodeCategory InternalGetUnicodeCategory(string str, int index, out int charLength)
	{
		return default(UnicodeCategory);
	}

	[Token(Token = "0x600283F")]
	[Address(RVA = "0x53F0F80", Offset = "0x53EFF80", VA = "0x53F0F80")]
	internal static bool IsCombiningCategory(UnicodeCategory uc)
	{
		return default(bool);
	}

	[Token(Token = "0x6002840")]
	[Address(RVA = "0x53F0F90", Offset = "0x53EFF90", VA = "0x53F0F90")]
	internal static bool IsWhiteSpace(string s, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6002841")]
	[Address(RVA = "0x53F0FB0", Offset = "0x53EFFB0", VA = "0x53F0FB0")]
	internal static bool IsWhiteSpace(char c)
	{
		return default(bool);
	}
}
