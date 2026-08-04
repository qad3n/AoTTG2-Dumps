// ==================== AoTTG2 cross-reference ====================
// Type: System.Globalization.CharUnicodeInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Globalization;

[Token(Token = "0x2000594")]
public static class CharUnicodeInfo
{
	[Token(Token = "0x1700063D")]
	private static ReadOnlySpan<byte> CategoryLevel1Index
	{
		[Token(Token = "0x6002B5C")]
		[Address(RVA = "0x3C3B2F0", Offset = "0x3C3B2F0", VA = "0x3C3B2F0")]
		get
		{
			return default(ReadOnlySpan<byte>);
		}
	}

	[Token(Token = "0x1700063E")]
	private static ReadOnlySpan<byte> CategoryLevel2Index
	{
		[Token(Token = "0x6002B5D")]
		[Address(RVA = "0x3C3B330", Offset = "0x3C3B330", VA = "0x3C3B330")]
		get
		{
			return default(ReadOnlySpan<byte>);
		}
	}

	[Token(Token = "0x1700063F")]
	private static ReadOnlySpan<byte> CategoryLevel3Index
	{
		[Token(Token = "0x6002B5E")]
		[Address(RVA = "0x3C3B370", Offset = "0x3C3B370", VA = "0x3C3B370")]
		get
		{
			return default(ReadOnlySpan<byte>);
		}
	}

	[Token(Token = "0x17000640")]
	private static ReadOnlySpan<byte> CategoriesValue
	{
		[Token(Token = "0x6002B5F")]
		[Address(RVA = "0x3C3B3B0", Offset = "0x3C3B3B0", VA = "0x3C3B3B0")]
		get
		{
			return default(ReadOnlySpan<byte>);
		}
	}

	[Token(Token = "0x6002B51")]
	[Address(RVA = "0x3C3AEF0", Offset = "0x3C3AEF0", VA = "0x3C3AEF0")]
	internal static int InternalConvertToUtf32(string s, int index)
	{
		return default(int);
	}

	[Token(Token = "0x6002B52")]
	[Address(RVA = "0x3C3AF80", Offset = "0x3C3AF80", VA = "0x3C3AF80")]
	internal static int InternalConvertToUtf32(string s, int index, out int charLength)
	{
		return default(int);
	}

	[Token(Token = "0x6002B53")]
	[Address(RVA = "0x3C3B020", Offset = "0x3C3B020", VA = "0x3C3B020")]
	public static UnicodeCategory GetUnicodeCategory(char ch)
	{
		return default(UnicodeCategory);
	}

	[Token(Token = "0x6002B54")]
	[Address(RVA = "0x3C3B040", Offset = "0x3C3B040", VA = "0x3C3B040")]
	public static UnicodeCategory GetUnicodeCategory(string s, int index)
	{
		return default(UnicodeCategory);
	}

	[Token(Token = "0x6002B55")]
	[Address(RVA = "0x3C3B030", Offset = "0x3C3B030", VA = "0x3C3B030")]
	public static UnicodeCategory GetUnicodeCategory(int codePoint)
	{
		return default(UnicodeCategory);
	}

	[Token(Token = "0x6002B56")]
	[Address(RVA = "0x3C3B160", Offset = "0x3C3B160", VA = "0x3C3B160")]
	internal static byte InternalGetCategoryValue(int ch, int offset)
	{
		return default(byte);
	}

	[Token(Token = "0x6002B57")]
	[Address(RVA = "0x3C3B0D0", Offset = "0x3C3B0D0", VA = "0x3C3B0D0")]
	internal static UnicodeCategory InternalGetUnicodeCategory(string value, int index)
	{
		return default(UnicodeCategory);
	}

	[Token(Token = "0x6002B58")]
	[Address(RVA = "0x3C3B3F0", Offset = "0x3C3B3F0", VA = "0x3C3B3F0")]
	internal static UnicodeCategory InternalGetUnicodeCategory(string str, int index, out int charLength)
	{
		return default(UnicodeCategory);
	}

	[Token(Token = "0x6002B59")]
	[Address(RVA = "0x3C3B4A0", Offset = "0x3C3B4A0", VA = "0x3C3B4A0")]
	internal static bool IsCombiningCategory(UnicodeCategory uc)
	{
		return default(bool);
	}

	[Token(Token = "0x6002B5A")]
	[Address(RVA = "0x3C3B4C0", Offset = "0x3C3B4C0", VA = "0x3C3B4C0")]
	internal static bool IsWhiteSpace(string s, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6002B5B")]
	[Address(RVA = "0x3C3B4E0", Offset = "0x3C3B4E0", VA = "0x3C3B4E0")]
	internal static bool IsWhiteSpace(char c)
	{
		return default(bool);
	}
}
