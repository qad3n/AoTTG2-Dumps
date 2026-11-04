// ==================== AoTTG2 cross-reference ====================
// Type: System.MemoryExtensions
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x2000112")]
public static class MemoryExtensions
{
	[Token(Token = "0x60008CD")]
	[Address(RVA = "0x1B2CD20", Offset = "0x1B2B320", VA = "0x181B2CD20")]
	public static bool Contains(this ReadOnlySpan<char> span, ReadOnlySpan<char> value, StringComparison comparisonType)
	{
		return default(bool);
	}

	[Token(Token = "0x60008CE")]
	[Address(RVA = "0x1B2D2F0", Offset = "0x1B2B8F0", VA = "0x181B2D2F0")]
	public static bool Equals(this ReadOnlySpan<char> span, ReadOnlySpan<char> other, StringComparison comparisonType)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008CF")]
	[Address(RVA = "0x1B2D260", Offset = "0x1B2B860", VA = "0x181B2D260")]
	internal static bool EqualsOrdinal(this ReadOnlySpan<char> span, ReadOnlySpan<char> value)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008D0")]
	[Address(RVA = "0x1B2D1B0", Offset = "0x1B2B7B0", VA = "0x181B2D1B0")]
	internal static bool EqualsOrdinalIgnoreCase(this ReadOnlySpan<char> span, ReadOnlySpan<char> value)
	{
		return default(bool);
	}

	[Token(Token = "0x60008D1")]
	[Address(RVA = "0x1B2CD50", Offset = "0x1B2B350", VA = "0x181B2CD50")]
	internal static bool Contains(this ReadOnlySpan<char> source, char value)
	{
		return default(bool);
	}

	[Token(Token = "0x60008D2")]
	[Address(RVA = "0x1B2D650", Offset = "0x1B2BC50", VA = "0x181B2D650")]
	public static int IndexOf(this ReadOnlySpan<char> span, ReadOnlySpan<char> value, StringComparison comparisonType)
	{
		return default(int);
	}

	[Token(Token = "0x60008D3")]
	[Address(RVA = "0x1B2DBA0", Offset = "0x1B2C1A0", VA = "0x181B2DBA0")]
	public static int ToUpperInvariant(this ReadOnlySpan<char> source, Span<char> destination)
	{
		return default(int);
	}

	[Token(Token = "0x60008D4")]
	[Address(RVA = "0x1B2CDC0", Offset = "0x1B2B3C0", VA = "0x181B2CDC0")]
	public static bool EndsWith(this ReadOnlySpan<char> span, ReadOnlySpan<char> value, StringComparison comparisonType)
	{
		return default(bool);
	}

	[Token(Token = "0x60008D5")]
	[Address(RVA = "0x1B2D8D0", Offset = "0x1B2BED0", VA = "0x181B2D8D0")]
	public static bool StartsWith(this ReadOnlySpan<char> span, ReadOnlySpan<char> value, StringComparison comparisonType)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008D6")]
	public static Span<T> AsSpan<T>(this T[] array, int start)
	{
		return default(Span<T>);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008D7")]
	[Address(RVA = "0x1B2CB50", Offset = "0x1B2B150", VA = "0x181B2CB50")]
	public static ReadOnlySpan<char> AsSpan(this string text)
	{
		return default(ReadOnlySpan<char>);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008D8")]
	[Address(RVA = "0x1B2CC80", Offset = "0x1B2B280", VA = "0x181B2CC80")]
	public static ReadOnlySpan<char> AsSpan(this string text, int start)
	{
		return default(ReadOnlySpan<char>);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008D9")]
	[Address(RVA = "0x1B2CBD0", Offset = "0x1B2B1D0", VA = "0x181B2CBD0")]
	public static ReadOnlySpan<char> AsSpan(this string text, int start, int length)
	{
		return default(ReadOnlySpan<char>);
	}

	[Token(Token = "0x60008DA")]
	[Address(RVA = "0x1B2DF50", Offset = "0x1B2C550", VA = "0x181B2DF50")]
	public static ReadOnlySpan<char> Trim(this ReadOnlySpan<char> span)
	{
		return default(ReadOnlySpan<char>);
	}

	[Token(Token = "0x60008DB")]
	[Address(RVA = "0x1B2DE50", Offset = "0x1B2C450", VA = "0x181B2DE50")]
	public static ReadOnlySpan<char> TrimStart(this ReadOnlySpan<char> span)
	{
		return default(ReadOnlySpan<char>);
	}

	[Token(Token = "0x60008DC")]
	[Address(RVA = "0x1B2DD50", Offset = "0x1B2C350", VA = "0x181B2DD50")]
	public static ReadOnlySpan<char> TrimEnd(this ReadOnlySpan<char> span)
	{
		return default(ReadOnlySpan<char>);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008DD")]
	public static int IndexOf<T>(this Span<T> span, T value) where T : IEquatable<T>
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008DE")]
	public static int IndexOf<T>(this Span<T> span, ReadOnlySpan<T> value) where T : IEquatable<T>
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008DF")]
	public static int IndexOf<T>(this ReadOnlySpan<T> span, T value) where T : IEquatable<T>
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008E0")]
	public static int IndexOfAny<T>(this ReadOnlySpan<T> span, ReadOnlySpan<T> values) where T : IEquatable<T>
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008E1")]
	public static bool SequenceEqual<T>(this ReadOnlySpan<T> span, ReadOnlySpan<T> other) where T : IEquatable<T>
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008E2")]
	public static bool StartsWith<T>(this ReadOnlySpan<T> span, ReadOnlySpan<T> value) where T : IEquatable<T>
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008E3")]
	public static bool EndsWith<T>(this ReadOnlySpan<T> span, ReadOnlySpan<T> value) where T : IEquatable<T>
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008E4")]
	public static Span<T> AsSpan<T>(this T[] array)
	{
		return default(Span<T>);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008E5")]
	public static Span<T> AsSpan<T>(this T[] array, int start, int length)
	{
		return default(Span<T>);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008E6")]
	public static void CopyTo<T>(this T[] source, Span<T> destination)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008E7")]
	private static bool IsTypeComparableAsBytes<T>(out ulong size)
	{
		return default(bool);
	}
}
