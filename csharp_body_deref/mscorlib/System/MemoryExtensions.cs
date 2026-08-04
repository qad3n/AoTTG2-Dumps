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
	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000898")]
	[Address(RVA = "0x3CB86E0", Offset = "0x3CB86E0", VA = "0x3CB86E0")]
	internal static bool EqualsOrdinal(this ReadOnlySpan<char> span, ReadOnlySpan<char> value)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000899")]
	[Address(RVA = "0x3CB8760", Offset = "0x3CB8760", VA = "0x3CB8760")]
	internal static bool EqualsOrdinalIgnoreCase(this ReadOnlySpan<char> span, ReadOnlySpan<char> value)
	{
		return default(bool);
	}

	[Token(Token = "0x600089A")]
	[Address(RVA = "0x3CB87F0", Offset = "0x3CB87F0", VA = "0x3CB87F0")]
	internal static bool Contains(this ReadOnlySpan<char> source, char value)
	{
		return default(bool);
	}

	[Token(Token = "0x600089B")]
	[Address(RVA = "0x3CB8840", Offset = "0x3CB8840", VA = "0x3CB8840")]
	public static int ToUpperInvariant(this ReadOnlySpan<char> source, Span<char> destination)
	{
		return default(int);
	}

	[Token(Token = "0x600089C")]
	[Address(RVA = "0x3CB89C0", Offset = "0x3CB89C0", VA = "0x3CB89C0")]
	public static bool EndsWith(this ReadOnlySpan<char> span, ReadOnlySpan<char> value, StringComparison comparisonType)
	{
		return default(bool);
	}

	[Token(Token = "0x600089D")]
	[Address(RVA = "0x3CB8C00", Offset = "0x3CB8C00", VA = "0x3CB8C00")]
	public static bool StartsWith(this ReadOnlySpan<char> span, ReadOnlySpan<char> value, StringComparison comparisonType)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600089E")]
	public static Span<T> AsSpan<T>(this T[] array, int start)
	{
		return default(Span<T>);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600089F")]
	[Address(RVA = "0x3CB8E40", Offset = "0x3CB8E40", VA = "0x3CB8E40")]
	public static ReadOnlySpan<char> AsSpan(this string text)
	{
		return default(ReadOnlySpan<char>);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008A0")]
	[Address(RVA = "0x3CB8E80", Offset = "0x3CB8E80", VA = "0x3CB8E80")]
	public static ReadOnlySpan<char> AsSpan(this string text, int start)
	{
		return default(ReadOnlySpan<char>);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008A1")]
	[Address(RVA = "0x3CB8F00", Offset = "0x3CB8F00", VA = "0x3CB8F00")]
	public static ReadOnlySpan<char> AsSpan(this string text, int start, int length)
	{
		return default(ReadOnlySpan<char>);
	}

	[Token(Token = "0x60008A2")]
	[Address(RVA = "0x3CAF060", Offset = "0x3CAF060", VA = "0x3CAF060")]
	public static ReadOnlySpan<char> Trim(this ReadOnlySpan<char> span)
	{
		return default(ReadOnlySpan<char>);
	}

	[Token(Token = "0x60008A3")]
	[Address(RVA = "0x3CB8F80", Offset = "0x3CB8F80", VA = "0x3CB8F80")]
	public static ReadOnlySpan<char> TrimStart(this ReadOnlySpan<char> span)
	{
		return default(ReadOnlySpan<char>);
	}

	[Token(Token = "0x60008A4")]
	[Address(RVA = "0x3CB9060", Offset = "0x3CB9060", VA = "0x3CB9060")]
	public static ReadOnlySpan<char> TrimEnd(this ReadOnlySpan<char> span)
	{
		return default(ReadOnlySpan<char>);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008A5")]
	public static int IndexOf<T>(this ReadOnlySpan<T> span, T value) where T : IEquatable<T>
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008A6")]
	public static int IndexOfAny<T>(this ReadOnlySpan<T> span, ReadOnlySpan<T> values) where T : IEquatable<T>
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008A7")]
	public static bool SequenceEqual<T>(this ReadOnlySpan<T> span, ReadOnlySpan<T> other) where T : IEquatable<T>
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008A8")]
	public static bool StartsWith<T>(this ReadOnlySpan<T> span, ReadOnlySpan<T> value) where T : IEquatable<T>
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008A9")]
	public static bool EndsWith<T>(this ReadOnlySpan<T> span, ReadOnlySpan<T> value) where T : IEquatable<T>
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008AA")]
	public static Span<T> AsSpan<T>(this T[] array, int start, int length)
	{
		return default(Span<T>);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008AB")]
	public static void CopyTo<T>(this T[] source, Span<T> destination)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008AC")]
	private static bool IsTypeComparableAsBytes<T>(out ulong size)
	{
		return default(bool);
	}
}
