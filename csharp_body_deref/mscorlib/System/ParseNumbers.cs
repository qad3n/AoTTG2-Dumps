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
	[Token(Token = "0x6000950")]
	[Address(RVA = "0x3CC97E0", Offset = "0x3CC97E0", VA = "0x3CC97E0")]
	public static long StringToLong(ReadOnlySpan<char> s, int radix, int flags)
	{
		return default(long);
	}

	[Token(Token = "0x6000951")]
	[Address(RVA = "0x3CC9800", Offset = "0x3CC9800", VA = "0x3CC9800")]
	public static long StringToLong(ReadOnlySpan<char> s, int radix, int flags, ref int currPos)
	{
		return default(long);
	}

	[Token(Token = "0x6000952")]
	[Address(RVA = "0x3CC9E90", Offset = "0x3CC9E90", VA = "0x3CC9E90")]
	public static int StringToInt(ReadOnlySpan<char> s, int radix, int flags)
	{
		return default(int);
	}

	[Token(Token = "0x6000953")]
	[Address(RVA = "0x3CC9EB0", Offset = "0x3CC9EB0", VA = "0x3CC9EB0")]
	public static int StringToInt(ReadOnlySpan<char> s, int radix, int flags, ref int currPos)
	{
		return default(int);
	}

	[Token(Token = "0x6000954")]
	[Address(RVA = "0x3CCA4F0", Offset = "0x3CCA4F0", VA = "0x3CCA4F0")]
	public static string IntToString(int n, int radix, int width, char paddingChar, int flags)
	{
		return null;
	}

	[Token(Token = "0x6000955")]
	[Address(RVA = "0x3CCA9D0", Offset = "0x3CCA9D0", VA = "0x3CCA9D0")]
	public static string LongToString(long n, int radix, int width, char paddingChar, int flags)
	{
		return null;
	}

	[Token(Token = "0x6000956")]
	[Address(RVA = "0x3CC9C10", Offset = "0x3CC9C10", VA = "0x3CC9C10")]
	private static void EatWhiteSpace(ReadOnlySpan<char> s, ref int i)
	{
	}

	[Token(Token = "0x6000957")]
	[Address(RVA = "0x3CC9CC0", Offset = "0x3CC9CC0", VA = "0x3CC9CC0")]
	private static long GrabLongs(int radix, ReadOnlySpan<char> s, ref int i, bool isUnsigned)
	{
		return default(long);
	}

	[Token(Token = "0x6000958")]
	[Address(RVA = "0x3CCA320", Offset = "0x3CCA320", VA = "0x3CCA320")]
	private static int GrabInts(int radix, ReadOnlySpan<char> s, ref int i, bool isUnsigned)
	{
		return default(int);
	}

	[Token(Token = "0x6000959")]
	[Address(RVA = "0x3CCB000", Offset = "0x3CCB000", VA = "0x3CCB000")]
	private static void ThrowOverflowInt32Exception()
	{
	}

	[Token(Token = "0x600095A")]
	[Address(RVA = "0x3CCAF60", Offset = "0x3CCAF60", VA = "0x3CCAF60")]
	private static void ThrowOverflowInt64Exception()
	{
	}

	[Token(Token = "0x600095B")]
	[Address(RVA = "0x3CCB050", Offset = "0x3CCB050", VA = "0x3CCB050")]
	private static void ThrowOverflowUInt32Exception()
	{
	}

	[Token(Token = "0x600095C")]
	[Address(RVA = "0x3CCAFB0", Offset = "0x3CCAFB0", VA = "0x3CCAFB0")]
	private static void ThrowOverflowUInt64Exception()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600095D")]
	[Address(RVA = "0x3CCB0A0", Offset = "0x3CCB0A0", VA = "0x3CCB0A0")]
	private static bool IsDigit(char c, int radix, out int result)
	{
		return default(bool);
	}
}
