using Il2CppDummyDll;

namespace System.Globalization;

[Token(Token = "0x2000594")]
public static class CharUnicodeInfo
{
	[Token(Token = "0x1700063D")]
	private static ReadOnlySpan<byte> CategoryLevel1Index
	{
		[Token(Token = "0x6002B5C")]
		[Address(RVA = "0x4F557D0", Offset = "0x4F557D0", VA = "0x4F557D0")]
		get
		{
			return default(ReadOnlySpan<byte>);
		}
	}

	[Token(Token = "0x1700063E")]
	private static ReadOnlySpan<byte> CategoryLevel2Index
	{
		[Token(Token = "0x6002B5D")]
		[Address(RVA = "0x4F55810", Offset = "0x4F55810", VA = "0x4F55810")]
		get
		{
			return default(ReadOnlySpan<byte>);
		}
	}

	[Token(Token = "0x1700063F")]
	private static ReadOnlySpan<byte> CategoryLevel3Index
	{
		[Token(Token = "0x6002B5E")]
		[Address(RVA = "0x4F55850", Offset = "0x4F55850", VA = "0x4F55850")]
		get
		{
			return default(ReadOnlySpan<byte>);
		}
	}

	[Token(Token = "0x17000640")]
	private static ReadOnlySpan<byte> CategoriesValue
	{
		[Token(Token = "0x6002B5F")]
		[Address(RVA = "0x4F55890", Offset = "0x4F55890", VA = "0x4F55890")]
		get
		{
			return default(ReadOnlySpan<byte>);
		}
	}

	[Token(Token = "0x6002B51")]
	[Address(RVA = "0x4F553D0", Offset = "0x4F553D0", VA = "0x4F553D0")]
	internal static int InternalConvertToUtf32(string s, int index)
	{
		return default(int);
	}

	[Token(Token = "0x6002B52")]
	[Address(RVA = "0x4F55460", Offset = "0x4F55460", VA = "0x4F55460")]
	internal static int InternalConvertToUtf32(string s, int index, out int charLength)
	{
		return default(int);
	}

	[Token(Token = "0x6002B53")]
	[Address(RVA = "0x4F55500", Offset = "0x4F55500", VA = "0x4F55500")]
	public static UnicodeCategory GetUnicodeCategory(char ch)
	{
		return default(UnicodeCategory);
	}

	[Token(Token = "0x6002B54")]
	[Address(RVA = "0x4F55520", Offset = "0x4F55520", VA = "0x4F55520")]
	public static UnicodeCategory GetUnicodeCategory(string s, int index)
	{
		return default(UnicodeCategory);
	}

	[Token(Token = "0x6002B55")]
	[Address(RVA = "0x4F55510", Offset = "0x4F55510", VA = "0x4F55510")]
	public static UnicodeCategory GetUnicodeCategory(int codePoint)
	{
		return default(UnicodeCategory);
	}

	[Token(Token = "0x6002B56")]
	[Address(RVA = "0x4F55640", Offset = "0x4F55640", VA = "0x4F55640")]
	internal static byte InternalGetCategoryValue(int ch, int offset)
	{
		return default(byte);
	}

	[Token(Token = "0x6002B57")]
	[Address(RVA = "0x4F555B0", Offset = "0x4F555B0", VA = "0x4F555B0")]
	internal static UnicodeCategory InternalGetUnicodeCategory(string value, int index)
	{
		return default(UnicodeCategory);
	}

	[Token(Token = "0x6002B58")]
	[Address(RVA = "0x4F558D0", Offset = "0x4F558D0", VA = "0x4F558D0")]
	internal static UnicodeCategory InternalGetUnicodeCategory(string str, int index, out int charLength)
	{
		return default(UnicodeCategory);
	}

	[Token(Token = "0x6002B59")]
	[Address(RVA = "0x4F55980", Offset = "0x4F55980", VA = "0x4F55980")]
	internal static bool IsCombiningCategory(UnicodeCategory uc)
	{
		return default(bool);
	}

	[Token(Token = "0x6002B5A")]
	[Address(RVA = "0x4F559A0", Offset = "0x4F559A0", VA = "0x4F559A0")]
	internal static bool IsWhiteSpace(string s, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6002B5B")]
	[Address(RVA = "0x4F559C0", Offset = "0x4F559C0", VA = "0x4F559C0")]
	internal static bool IsWhiteSpace(char c)
	{
		return default(bool);
	}
}
