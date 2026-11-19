// ==================== AoTTG2 cross-reference ====================
// Type: System.MemoryExtensions
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20000EA")]
public static class MemoryExtensions
{
	[Token(Token = "0x60008A8")]
	[Address(RVA = "0x54BB8D0", Offset = "0x54BA8D0", VA = "0x54BB8D0")]
	public static bool Contains(this ReadOnlySpan<char> span, ReadOnlySpan<char> value, StringComparison comparisonType)
	{
		return default(bool);
	}

	[Token(Token = "0x60008A9")]
	[Address(RVA = "0x54BBAD0", Offset = "0x54BAAD0", VA = "0x54BBAD0")]
	public static bool Equals(this ReadOnlySpan<char> span, ReadOnlySpan<char> other, StringComparison comparisonType)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008AA")]
	[Address(RVA = "0x54BBD60", Offset = "0x54BAD60", VA = "0x54BBD60")]
	internal static bool EqualsOrdinal(this ReadOnlySpan<char> span, ReadOnlySpan<char> value)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008AB")]
	[Address(RVA = "0x54BBDE0", Offset = "0x54BADE0", VA = "0x54BBDE0")]
	internal static bool EqualsOrdinalIgnoreCase(this ReadOnlySpan<char> span, ReadOnlySpan<char> value)
	{
		return default(bool);
	}

	[Token(Token = "0x60008AC")]
	[Address(RVA = "0x54BBE70", Offset = "0x54BAE70", VA = "0x54BBE70")]
	internal static bool Contains(this ReadOnlySpan<char> source, char value)
	{
		return default(bool);
	}

	[Token(Token = "0x60008AD")]
	[Address(RVA = "0x54BB8E0", Offset = "0x54BA8E0", VA = "0x54BB8E0")]
	public static int IndexOf(this ReadOnlySpan<char> span, ReadOnlySpan<char> value, StringComparison comparisonType)
	{
		return default(int);
	}

	[Token(Token = "0x60008AE")]
	[Address(RVA = "0x54BBEE0", Offset = "0x54BAEE0", VA = "0x54BBEE0")]
	public static int ToUpperInvariant(this ReadOnlySpan<char> source, Span<char> destination)
	{
		return default(int);
	}

	[Token(Token = "0x60008AF")]
	[Address(RVA = "0x54BC0A0", Offset = "0x54BB0A0", VA = "0x54BC0A0")]
	public static bool EndsWith(this ReadOnlySpan<char> span, ReadOnlySpan<char> value, StringComparison comparisonType)
	{
		return default(bool);
	}

	[Token(Token = "0x60008B0")]
	[Address(RVA = "0x54BC2F0", Offset = "0x54BB2F0", VA = "0x54BC2F0")]
	public static bool StartsWith(this ReadOnlySpan<char> span, ReadOnlySpan<char> value, StringComparison comparisonType)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008B1")]
	public static Span<T> AsSpan<T>(this T[] array, int start)
	{
		return default(Span<T>);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008B2")]
	[Address(RVA = "0x54BC540", Offset = "0x54BB540", VA = "0x54BC540")]
	public static ReadOnlySpan<char> AsSpan(this string text)
	{
		return default(ReadOnlySpan<char>);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008B3")]
	[Address(RVA = "0x54BC580", Offset = "0x54BB580", VA = "0x54BC580")]
	public static ReadOnlySpan<char> AsSpan(this string text, int start)
	{
		return default(ReadOnlySpan<char>);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008B4")]
	[Address(RVA = "0x54BC600", Offset = "0x54BB600", VA = "0x54BC600")]
	public static ReadOnlySpan<char> AsSpan(this string text, int start, int length)
	{
		return default(ReadOnlySpan<char>);
	}

	[Token(Token = "0x60008B5")]
	[Address(RVA = "0x54B2470", Offset = "0x54B1470", VA = "0x54B2470")]
	public static ReadOnlySpan<char> Trim(this ReadOnlySpan<char> span)
	{
		return default(ReadOnlySpan<char>);
	}

	[Token(Token = "0x60008B6")]
	[Address(RVA = "0x54BC680", Offset = "0x54BB680", VA = "0x54BC680")]
	public static ReadOnlySpan<char> TrimStart(this ReadOnlySpan<char> span)
	{
		return default(ReadOnlySpan<char>);
	}

	[Token(Token = "0x60008B7")]
	[Address(RVA = "0x54BC760", Offset = "0x54BB760", VA = "0x54BC760")]
	public static ReadOnlySpan<char> TrimEnd(this ReadOnlySpan<char> span)
	{
		return default(ReadOnlySpan<char>);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008B8")]
	public static int IndexOf<T>(this Span<T> span, T value) where T : IEquatable<T>
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008B9")]
	public static int IndexOf<T>(this Span<T> span, ReadOnlySpan<T> value) where T : IEquatable<T>
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008BA")]
	public static int IndexOf<T>(this ReadOnlySpan<T> span, T value) where T : IEquatable<T>
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008BB")]
	public static int IndexOfAny<T>(this ReadOnlySpan<T> span, ReadOnlySpan<T> values) where T : IEquatable<T>
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008BC")]
	public static bool SequenceEqual<T>(this ReadOnlySpan<T> span, ReadOnlySpan<T> other) where T : IEquatable<T>
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008BD")]
	public static bool StartsWith<T>(this ReadOnlySpan<T> span, ReadOnlySpan<T> value) where T : IEquatable<T>
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008BE")]
	public static bool EndsWith<T>(this ReadOnlySpan<T> span, ReadOnlySpan<T> value) where T : IEquatable<T>
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008BF")]
	public static Span<T> AsSpan<T>(this T[] array)
	{
		return default(Span<T>);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008C0")]
	public static Span<T> AsSpan<T>(this T[] array, int start, int length)
	{
		return default(Span<T>);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008C1")]
	public static void CopyTo<T>(this T[] source, Span<T> destination)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008C2")]
	private static bool IsTypeComparableAsBytes<T>(out ulong size)
	{
		return default(bool);
	}
}
