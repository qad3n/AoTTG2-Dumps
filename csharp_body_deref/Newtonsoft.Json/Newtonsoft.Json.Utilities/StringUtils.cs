// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Utilities.StringUtils
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x3DC6C60", Offset = "0x3DC6C60", VA = "0x3DC6C60")]
	public static bool IsNullOrEmpty([NotNullWhen(false)] string? value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000702")]
	[Address(RVA = "0x3DC6C70", Offset = "0x3DC6C70", VA = "0x3DC6C70")]
	public static string FormatWith(this string format, IFormatProvider provider, object? arg0)
	{
		return null;
	}

	[Token(Token = "0x6000703")]
	[Address(RVA = "0x3DC6DB0", Offset = "0x3DC6DB0", VA = "0x3DC6DB0")]
	public static string FormatWith(this string format, IFormatProvider provider, object? arg0, object? arg1)
	{
		return null;
	}

	[Token(Token = "0x6000704")]
	[Address(RVA = "0x3DC6EA0", Offset = "0x3DC6EA0", VA = "0x3DC6EA0")]
	public static string FormatWith(this string format, IFormatProvider provider, object? arg0, object? arg1, object? arg2)
	{
		return null;
	}

	[Token(Token = "0x6000705")]
	[Address(RVA = "0x3DC6FD0", Offset = "0x3DC6FD0", VA = "0x3DC6FD0")]
	public static string? FormatWith(this string format, IFormatProvider provider, object? arg0, object? arg1, object? arg2, object? arg3)
	{
		return null;
	}

	[Token(Token = "0x6000706")]
	[Address(RVA = "0x3DC6D20", Offset = "0x3DC6D20", VA = "0x3DC6D20")]
	private static string FormatWith(this string format, IFormatProvider provider, params object?[] args)
	{
		return null;
	}

	[Token(Token = "0x6000707")]
	[Address(RVA = "0x3DC7180", Offset = "0x3DC7180", VA = "0x3DC7180")]
	public static bool IsWhiteSpace(string s)
	{
		return default(bool);
	}

	[Token(Token = "0x6000708")]
	[Address(RVA = "0x3DC7250", Offset = "0x3DC7250", VA = "0x3DC7250")]
	public static StringWriter CreateStringWriter(int capacity)
	{
		return null;
	}

	[Token(Token = "0x6000709")]
	[Address(RVA = "0x3DC7300", Offset = "0x3DC7300", VA = "0x3DC7300")]
	public static void ToCharAsUnicode(char c, char[] buffer)
	{
	}

	[Token(Token = "0x600070A")]
	public static TSource ForgivingCaseSensitiveFind<TSource>(this IEnumerable<TSource> source, Func<TSource, string> valueSelector, string testValue) where TSource : notnull
	{
		return (TSource)null;
	}

	[Token(Token = "0x600070B")]
	[Address(RVA = "0x3DC73A0", Offset = "0x3DC73A0", VA = "0x3DC73A0")]
	public static string ToCamelCase(string s)
	{
		return null;
	}

	[Token(Token = "0x600070C")]
	[Address(RVA = "0x3DC7650", Offset = "0x3DC7650", VA = "0x3DC7650")]
	private static char ToLower(char c)
	{
		return default(char);
	}

	[Token(Token = "0x600070D")]
	[Address(RVA = "0x3DC76D0", Offset = "0x3DC76D0", VA = "0x3DC76D0")]
	public static string ToSnakeCase(string s)
	{
		return null;
	}

	[Token(Token = "0x600070E")]
	[Address(RVA = "0x3DC79C0", Offset = "0x3DC79C0", VA = "0x3DC79C0")]
	public static string ToKebabCase(string s)
	{
		return null;
	}

	[Token(Token = "0x600070F")]
	[Address(RVA = "0x3DC76E0", Offset = "0x3DC76E0", VA = "0x3DC76E0")]
	private static string ToSeparatedCase(string s, char separator)
	{
		return null;
	}

	[Token(Token = "0x6000710")]
	[Address(RVA = "0x3DC79D0", Offset = "0x3DC79D0", VA = "0x3DC79D0")]
	public static bool IsHighSurrogate(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000711")]
	[Address(RVA = "0x3DC7A10", Offset = "0x3DC7A10", VA = "0x3DC7A10")]
	public static bool IsLowSurrogate(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000712")]
	[Address(RVA = "0x3DC7A50", Offset = "0x3DC7A50", VA = "0x3DC7A50")]
	public static int IndexOf(string s, char c)
	{
		return default(int);
	}

	[Token(Token = "0x6000713")]
	[Address(RVA = "0x3DC7A70", Offset = "0x3DC7A70", VA = "0x3DC7A70")]
	public static string Replace(string s, string oldValue, string newValue)
	{
		return null;
	}

	[Token(Token = "0x6000714")]
	[Address(RVA = "0x3DC7A90", Offset = "0x3DC7A90", VA = "0x3DC7A90")]
	public static bool StartsWith(this string source, char value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000715")]
	[Address(RVA = "0x3DC7AC0", Offset = "0x3DC7AC0", VA = "0x3DC7AC0")]
	public static bool EndsWith(this string source, char value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000716")]
	[Address(RVA = "0x3DC7AF0", Offset = "0x3DC7AF0", VA = "0x3DC7AF0")]
	public static string Trim(this string s, int start, int length)
	{
		return null;
	}
}
