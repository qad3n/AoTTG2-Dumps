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
	[Address(RVA = "0x1C52D30", Offset = "0x1C51330", VA = "0x181C52D30")]
	public static bool IsNullOrEmpty([NotNullWhen(false)] string? value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000702")]
	[Address(RVA = "0x1C52A30", Offset = "0x1C51030", VA = "0x181C52A30")]
	public static string FormatWith(this string format, IFormatProvider provider, object? arg0)
	{
		return null;
	}

	[Token(Token = "0x6000703")]
	[Address(RVA = "0x1C52B40", Offset = "0x1C51140", VA = "0x181C52B40")]
	public static string FormatWith(this string format, IFormatProvider provider, object? arg0, object? arg1)
	{
		return null;
	}

	[Token(Token = "0x6000704")]
	[Address(RVA = "0x1C52870", Offset = "0x1C50E70", VA = "0x181C52870")]
	public static string FormatWith(this string format, IFormatProvider provider, object? arg0, object? arg1, object? arg2)
	{
		return null;
	}

	[Token(Token = "0x6000705")]
	[Address(RVA = "0x1C52660", Offset = "0x1C50C60", VA = "0x181C52660")]
	public static string? FormatWith(this string format, IFormatProvider provider, object? arg0, object? arg1, object? arg2, object? arg3)
	{
		return null;
	}

	[Token(Token = "0x6000706")]
	[Address(RVA = "0x1C525C0", Offset = "0x1C50BC0", VA = "0x181C525C0")]
	private static string FormatWith(this string format, IFormatProvider provider, params object?[] args)
	{
		return null;
	}

	[Token(Token = "0x6000707")]
	[Address(RVA = "0x1C52D40", Offset = "0x1C51340", VA = "0x181C52D40")]
	public static bool IsWhiteSpace(string s)
	{
		return default(bool);
	}

	[Token(Token = "0x6000708")]
	[Address(RVA = "0x1C524C0", Offset = "0x1C50AC0", VA = "0x181C524C0")]
	public static StringWriter CreateStringWriter(int capacity)
	{
		return null;
	}

	[Token(Token = "0x6000709")]
	[Address(RVA = "0x1C53040", Offset = "0x1C51640", VA = "0x181C53040")]
	public static void ToCharAsUnicode(char c, char[] buffer)
	{
	}

	[Token(Token = "0x600070A")]
	public static TSource ForgivingCaseSensitiveFind<TSource>(this IEnumerable<TSource> source, Func<TSource, string> valueSelector, string testValue) where TSource : notnull
	{
		return (TSource)null;
	}

	[Token(Token = "0x600070B")]
	[Address(RVA = "0x1C52E70", Offset = "0x1C51470", VA = "0x181C52E70")]
	public static string ToCamelCase(string s)
	{
		return null;
	}

	[Token(Token = "0x600070C")]
	[Address(RVA = "0x1C53100", Offset = "0x1C51700", VA = "0x181C53100")]
	private static char ToLower(char c)
	{
		return default(char);
	}

	[Token(Token = "0x600070D")]
	[Address(RVA = "0x1C53450", Offset = "0x1C51A50", VA = "0x181C53450")]
	public static string ToSnakeCase(string s)
	{
		return null;
	}

	[Token(Token = "0x600070E")]
	[Address(RVA = "0x1C530F0", Offset = "0x1C516F0", VA = "0x181C530F0")]
	public static string ToKebabCase(string s)
	{
		return null;
	}

	[Token(Token = "0x600070F")]
	[Address(RVA = "0x1C53180", Offset = "0x1C51780", VA = "0x181C53180")]
	private static string ToSeparatedCase(string s, char separator)
	{
		return null;
	}

	[Token(Token = "0x6000710")]
	[Address(RVA = "0x1C52CD0", Offset = "0x1C512D0", VA = "0x181C52CD0")]
	public static bool IsHighSurrogate(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000711")]
	[Address(RVA = "0x1C52D00", Offset = "0x1C51300", VA = "0x181C52D00")]
	public static bool IsLowSurrogate(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000712")]
	[Address(RVA = "0x1C52CB0", Offset = "0x1C512B0", VA = "0x181C52CB0")]
	public static int IndexOf(string s, char c)
	{
		return default(int);
	}

	[Token(Token = "0x6000713")]
	[Address(RVA = "0x1C52E10", Offset = "0x1C51410", VA = "0x181C52E10")]
	public static string Replace(string s, string oldValue, string newValue)
	{
		return null;
	}

	[Token(Token = "0x6000714")]
	[Address(RVA = "0x1C52E30", Offset = "0x1C51430", VA = "0x181C52E30")]
	public static bool StartsWith(this string source, char value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000715")]
	[Address(RVA = "0x1C52580", Offset = "0x1C50B80", VA = "0x181C52580")]
	public static bool EndsWith(this string source, char value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000716")]
	[Address(RVA = "0x1C53460", Offset = "0x1C51A60", VA = "0x181C53460")]
	public static string Trim(this string s, int start, int length)
	{
		return null;
	}
}
