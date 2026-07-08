using System;
using System.Collections.Generic;
using System.Diagnostics.CodeAnalysis;
using System.IO;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Utilities;

[Token(Token = "0x20000F0")]
internal static class StringUtils
{
	[Token(Token = "0x20000F1")]
	private enum SeparatedCaseState
	{
		[Token(Token = "0x40004D0")]
		Start,
		[Token(Token = "0x40004D1")]
		Lower,
		[Token(Token = "0x40004D2")]
		Upper,
		[Token(Token = "0x40004D3")]
		NewWord
	}

	[Token(Token = "0x40004CA")]
	public const string CarriageReturnLineFeed = "\r\n";

	[Token(Token = "0x40004CB")]
	public const string Empty = "";

	[Token(Token = "0x40004CC")]
	public const char CarriageReturn = '\r';

	[Token(Token = "0x40004CD")]
	public const char LineFeed = '\n';

	[Token(Token = "0x40004CE")]
	public const char Tab = '\t';

	[Token(Token = "0x6000701")]
	[Address(RVA = "0x3AD1310", Offset = "0x3AD1310", VA = "0x3AD1310")]
	public static bool IsNullOrEmpty([NotNullWhen(false)] string? value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000702")]
	[Address(RVA = "0x3AD1320", Offset = "0x3AD1320", VA = "0x3AD1320")]
	public static string FormatWith(this string format, IFormatProvider provider, object? arg0)
	{
		return null;
	}

	[Token(Token = "0x6000703")]
	[Address(RVA = "0x3AD1460", Offset = "0x3AD1460", VA = "0x3AD1460")]
	public static string FormatWith(this string format, IFormatProvider provider, object? arg0, object? arg1)
	{
		return null;
	}

	[Token(Token = "0x6000704")]
	[Address(RVA = "0x3AD1550", Offset = "0x3AD1550", VA = "0x3AD1550")]
	public static string FormatWith(this string format, IFormatProvider provider, object? arg0, object? arg1, object? arg2)
	{
		return null;
	}

	[Token(Token = "0x6000705")]
	[Address(RVA = "0x3AD1680", Offset = "0x3AD1680", VA = "0x3AD1680")]
	public static string? FormatWith(this string format, IFormatProvider provider, object? arg0, object? arg1, object? arg2, object? arg3)
	{
		return null;
	}

	[Token(Token = "0x6000706")]
	[Address(RVA = "0x3AD13D0", Offset = "0x3AD13D0", VA = "0x3AD13D0")]
	private static string FormatWith(this string format, IFormatProvider provider, params object?[] args)
	{
		return null;
	}

	[Token(Token = "0x6000707")]
	[Address(RVA = "0x3AD1830", Offset = "0x3AD1830", VA = "0x3AD1830")]
	public static bool IsWhiteSpace(string s)
	{
		return default(bool);
	}

	[Token(Token = "0x6000708")]
	[Address(RVA = "0x3AD1900", Offset = "0x3AD1900", VA = "0x3AD1900")]
	public static StringWriter CreateStringWriter(int capacity)
	{
		return null;
	}

	[Token(Token = "0x6000709")]
	[Address(RVA = "0x3AD19B0", Offset = "0x3AD19B0", VA = "0x3AD19B0")]
	public static void ToCharAsUnicode(char c, char[] buffer)
	{
	}

	[Token(Token = "0x600070A")]
	public static TSource ForgivingCaseSensitiveFind<TSource>(this IEnumerable<TSource> source, Func<TSource, string> valueSelector, string testValue) where TSource : notnull
	{
		return (TSource)null;
	}

	[Token(Token = "0x600070B")]
	[Address(RVA = "0x3AD1A50", Offset = "0x3AD1A50", VA = "0x3AD1A50")]
	public static string ToCamelCase(string s)
	{
		return null;
	}

	[Token(Token = "0x600070C")]
	[Address(RVA = "0x3AD1D00", Offset = "0x3AD1D00", VA = "0x3AD1D00")]
	private static char ToLower(char c)
	{
		return default(char);
	}

	[Token(Token = "0x600070D")]
	[Address(RVA = "0x3AD1D80", Offset = "0x3AD1D80", VA = "0x3AD1D80")]
	public static string ToSnakeCase(string s)
	{
		return null;
	}

	[Token(Token = "0x600070E")]
	[Address(RVA = "0x3AD2070", Offset = "0x3AD2070", VA = "0x3AD2070")]
	public static string ToKebabCase(string s)
	{
		return null;
	}

	[Token(Token = "0x600070F")]
	[Address(RVA = "0x3AD1D90", Offset = "0x3AD1D90", VA = "0x3AD1D90")]
	private static string ToSeparatedCase(string s, char separator)
	{
		return null;
	}

	[Token(Token = "0x6000710")]
	[Address(RVA = "0x3AD2080", Offset = "0x3AD2080", VA = "0x3AD2080")]
	public static bool IsHighSurrogate(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000711")]
	[Address(RVA = "0x3AD20C0", Offset = "0x3AD20C0", VA = "0x3AD20C0")]
	public static bool IsLowSurrogate(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000712")]
	[Address(RVA = "0x3AD2100", Offset = "0x3AD2100", VA = "0x3AD2100")]
	public static int IndexOf(string s, char c)
	{
		return default(int);
	}

	[Token(Token = "0x6000713")]
	[Address(RVA = "0x3AD2120", Offset = "0x3AD2120", VA = "0x3AD2120")]
	public static string Replace(string s, string oldValue, string newValue)
	{
		return null;
	}

	[Token(Token = "0x6000714")]
	[Address(RVA = "0x3AD2140", Offset = "0x3AD2140", VA = "0x3AD2140")]
	public static bool StartsWith(this string source, char value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000715")]
	[Address(RVA = "0x3AD2170", Offset = "0x3AD2170", VA = "0x3AD2170")]
	public static bool EndsWith(this string source, char value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000716")]
	[Address(RVA = "0x3AD21A0", Offset = "0x3AD21A0", VA = "0x3AD21A0")]
	public static string Trim(this string s, int start, int length)
	{
		return null;
	}
}
