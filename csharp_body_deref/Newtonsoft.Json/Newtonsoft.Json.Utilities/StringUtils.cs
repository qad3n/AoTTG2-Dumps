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
	[Address(RVA = "0x55BF950", Offset = "0x55BE950", VA = "0x55BF950")]
	public static bool IsNullOrEmpty([NotNullWhen(false)] string? value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000702")]
	[Address(RVA = "0x55BF960", Offset = "0x55BE960", VA = "0x55BF960")]
	public static string FormatWith(this string format, IFormatProvider provider, object? arg0)
	{
		return null;
	}

	[Token(Token = "0x6000703")]
	[Address(RVA = "0x55BFAA0", Offset = "0x55BEAA0", VA = "0x55BFAA0")]
	public static string FormatWith(this string format, IFormatProvider provider, object? arg0, object? arg1)
	{
		return null;
	}

	[Token(Token = "0x6000704")]
	[Address(RVA = "0x55BFB90", Offset = "0x55BEB90", VA = "0x55BFB90")]
	public static string FormatWith(this string format, IFormatProvider provider, object? arg0, object? arg1, object? arg2)
	{
		return null;
	}

	[Token(Token = "0x6000705")]
	[Address(RVA = "0x55BFCC0", Offset = "0x55BECC0", VA = "0x55BFCC0")]
	public static string? FormatWith(this string format, IFormatProvider provider, object? arg0, object? arg1, object? arg2, object? arg3)
	{
		return null;
	}

	[Token(Token = "0x6000706")]
	[Address(RVA = "0x55BFA10", Offset = "0x55BEA10", VA = "0x55BFA10")]
	private static string FormatWith(this string format, IFormatProvider provider, params object?[] args)
	{
		return null;
	}

	[Token(Token = "0x6000707")]
	[Address(RVA = "0x55BFE80", Offset = "0x55BEE80", VA = "0x55BFE80")]
	public static bool IsWhiteSpace(string s)
	{
		return default(bool);
	}

	[Token(Token = "0x6000708")]
	[Address(RVA = "0x55BFF40", Offset = "0x55BEF40", VA = "0x55BFF40")]
	public static StringWriter CreateStringWriter(int capacity)
	{
		return null;
	}

	[Token(Token = "0x6000709")]
	[Address(RVA = "0x55BFFF0", Offset = "0x55BEFF0", VA = "0x55BFFF0")]
	public static void ToCharAsUnicode(char c, char[] buffer)
	{
	}

	[Token(Token = "0x600070A")]
	public static TSource ForgivingCaseSensitiveFind<TSource>(this IEnumerable<TSource> source, Func<TSource, string> valueSelector, string testValue) where TSource : notnull
	{
		return (TSource)null;
	}

	[Token(Token = "0x600070B")]
	[Address(RVA = "0x55C0090", Offset = "0x55BF090", VA = "0x55C0090")]
	public static string ToCamelCase(string s)
	{
		return null;
	}

	[Token(Token = "0x600070C")]
	[Address(RVA = "0x55C0340", Offset = "0x55BF340", VA = "0x55C0340")]
	private static char ToLower(char c)
	{
		return default(char);
	}

	[Token(Token = "0x600070D")]
	[Address(RVA = "0x55C03C0", Offset = "0x55BF3C0", VA = "0x55C03C0")]
	public static string ToSnakeCase(string s)
	{
		return null;
	}

	[Token(Token = "0x600070E")]
	[Address(RVA = "0x55C0680", Offset = "0x55BF680", VA = "0x55C0680")]
	public static string ToKebabCase(string s)
	{
		return null;
	}

	[Token(Token = "0x600070F")]
	[Address(RVA = "0x55C03D0", Offset = "0x55BF3D0", VA = "0x55C03D0")]
	private static string ToSeparatedCase(string s, char separator)
	{
		return null;
	}

	[Token(Token = "0x6000710")]
	[Address(RVA = "0x55C0690", Offset = "0x55BF690", VA = "0x55C0690")]
	public static bool IsHighSurrogate(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000711")]
	[Address(RVA = "0x55C06D0", Offset = "0x55BF6D0", VA = "0x55C06D0")]
	public static bool IsLowSurrogate(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000712")]
	[Address(RVA = "0x55C0710", Offset = "0x55BF710", VA = "0x55C0710")]
	public static int IndexOf(string s, char c)
	{
		return default(int);
	}

	[Token(Token = "0x6000713")]
	[Address(RVA = "0x55C0730", Offset = "0x55BF730", VA = "0x55C0730")]
	public static string Replace(string s, string oldValue, string newValue)
	{
		return null;
	}

	[Token(Token = "0x6000714")]
	[Address(RVA = "0x55C0750", Offset = "0x55BF750", VA = "0x55C0750")]
	public static bool StartsWith(this string source, char value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000715")]
	[Address(RVA = "0x55C0780", Offset = "0x55BF780", VA = "0x55C0780")]
	public static bool EndsWith(this string source, char value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000716")]
	[Address(RVA = "0x55C07B0", Offset = "0x55BF7B0", VA = "0x55C07B0")]
	public static string Trim(this string s, int start, int length)
	{
		return null;
	}
}
