// ==================== AoTTG2 cross-reference ====================
// Type: System.ParseNumbers
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20000FE")]
internal static class ParseNumbers
{
	[Token(Token = "0x6000966")]
	[Address(RVA = "0x54CD0F0", Offset = "0x54CC0F0", VA = "0x54CD0F0")]
	public static long StringToLong(ReadOnlySpan<char> s, int radix, int flags)
	{
		return default(long);
	}

	[Token(Token = "0x6000967")]
	[Address(RVA = "0x54CD110", Offset = "0x54CC110", VA = "0x54CD110")]
	public static long StringToLong(ReadOnlySpan<char> s, int radix, int flags, ref int currPos)
	{
		return default(long);
	}

	[Token(Token = "0x6000968")]
	[Address(RVA = "0x54CD830", Offset = "0x54CC830", VA = "0x54CD830")]
	public static int StringToInt(ReadOnlySpan<char> s, int radix, int flags)
	{
		return default(int);
	}

	[Token(Token = "0x6000969")]
	[Address(RVA = "0x54CD850", Offset = "0x54CC850", VA = "0x54CD850")]
	public static int StringToInt(ReadOnlySpan<char> s, int radix, int flags, ref int currPos)
	{
		return default(int);
	}

	[Token(Token = "0x600096A")]
	[Address(RVA = "0x54CDEF0", Offset = "0x54CCEF0", VA = "0x54CDEF0")]
	public static string IntToString(int n, int radix, int width, char paddingChar, int flags)
	{
		return null;
	}

	[Token(Token = "0x600096B")]
	[Address(RVA = "0x54CE2F0", Offset = "0x54CD2F0", VA = "0x54CE2F0")]
	public static string LongToString(long n, int radix, int width, char paddingChar, int flags)
	{
		return null;
	}

	[Token(Token = "0x600096C")]
	[Address(RVA = "0x54CD530", Offset = "0x54CC530", VA = "0x54CD530")]
	private static void EatWhiteSpace(ReadOnlySpan<char> s, ref int i)
	{
	}

	[Token(Token = "0x600096D")]
	[Address(RVA = "0x54CD5F0", Offset = "0x54CC5F0", VA = "0x54CD5F0")]
	private static long GrabLongs(int radix, ReadOnlySpan<char> s, ref int i, bool isUnsigned)
	{
		return default(long);
	}

	[Token(Token = "0x600096E")]
	[Address(RVA = "0x54CDCC0", Offset = "0x54CCCC0", VA = "0x54CDCC0")]
	private static int GrabInts(int radix, ReadOnlySpan<char> s, ref int i, bool isUnsigned)
	{
		return default(int);
	}

	[Token(Token = "0x600096F")]
	[Address(RVA = "0x54CE860", Offset = "0x54CD860", VA = "0x54CE860")]
	private static void ThrowOverflowInt32Exception()
	{
	}

	[Token(Token = "0x6000970")]
	[Address(RVA = "0x54CE7C0", Offset = "0x54CD7C0", VA = "0x54CE7C0")]
	private static void ThrowOverflowInt64Exception()
	{
	}

	[Token(Token = "0x6000971")]
	[Address(RVA = "0x54CE8B0", Offset = "0x54CD8B0", VA = "0x54CE8B0")]
	private static void ThrowOverflowUInt32Exception()
	{
	}

	[Token(Token = "0x6000972")]
	[Address(RVA = "0x54CE810", Offset = "0x54CD810", VA = "0x54CE810")]
	private static void ThrowOverflowUInt64Exception()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000973")]
	[Address(RVA = "0x54CE900", Offset = "0x54CD900", VA = "0x54CE900")]
	private static bool IsDigit(char c, int radix, out int result)
	{
		return default(bool);
	}
}
