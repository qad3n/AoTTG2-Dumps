using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20000EA")]
public static class MemoryExtensions
{
	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000898")]
	[Address(RVA = "0x4FD2BC0", Offset = "0x4FD2BC0", VA = "0x4FD2BC0")]
	internal static bool EqualsOrdinal(this ReadOnlySpan<char> span, ReadOnlySpan<char> value)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000899")]
	[Address(RVA = "0x4FD2C40", Offset = "0x4FD2C40", VA = "0x4FD2C40")]
	internal static bool EqualsOrdinalIgnoreCase(this ReadOnlySpan<char> span, ReadOnlySpan<char> value)
	{
		return default(bool);
	}

	[Token(Token = "0x600089A")]
	[Address(RVA = "0x4FD2CD0", Offset = "0x4FD2CD0", VA = "0x4FD2CD0")]
	internal static bool Contains(this ReadOnlySpan<char> source, char value)
	{
		return default(bool);
	}

	[Token(Token = "0x600089B")]
	[Address(RVA = "0x4FD2D20", Offset = "0x4FD2D20", VA = "0x4FD2D20")]
	public static int ToUpperInvariant(this ReadOnlySpan<char> source, Span<char> destination)
	{
		return default(int);
	}

	[Token(Token = "0x600089C")]
	[Address(RVA = "0x4FD2EA0", Offset = "0x4FD2EA0", VA = "0x4FD2EA0")]
	public static bool EndsWith(this ReadOnlySpan<char> span, ReadOnlySpan<char> value, StringComparison comparisonType)
	{
		return default(bool);
	}

	[Token(Token = "0x600089D")]
	[Address(RVA = "0x4FD30E0", Offset = "0x4FD30E0", VA = "0x4FD30E0")]
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
	[Address(RVA = "0x4FD3320", Offset = "0x4FD3320", VA = "0x4FD3320")]
	public static ReadOnlySpan<char> AsSpan(this string text)
	{
		return default(ReadOnlySpan<char>);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008A0")]
	[Address(RVA = "0x4FD3360", Offset = "0x4FD3360", VA = "0x4FD3360")]
	public static ReadOnlySpan<char> AsSpan(this string text, int start)
	{
		return default(ReadOnlySpan<char>);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008A1")]
	[Address(RVA = "0x4FD33E0", Offset = "0x4FD33E0", VA = "0x4FD33E0")]
	public static ReadOnlySpan<char> AsSpan(this string text, int start, int length)
	{
		return default(ReadOnlySpan<char>);
	}

	[Token(Token = "0x60008A2")]
	[Address(RVA = "0x4FC9540", Offset = "0x4FC9540", VA = "0x4FC9540")]
	public static ReadOnlySpan<char> Trim(this ReadOnlySpan<char> span)
	{
		return default(ReadOnlySpan<char>);
	}

	[Token(Token = "0x60008A3")]
	[Address(RVA = "0x4FD3460", Offset = "0x4FD3460", VA = "0x4FD3460")]
	public static ReadOnlySpan<char> TrimStart(this ReadOnlySpan<char> span)
	{
		return default(ReadOnlySpan<char>);
	}

	[Token(Token = "0x60008A4")]
	[Address(RVA = "0x4FD3540", Offset = "0x4FD3540", VA = "0x4FD3540")]
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
