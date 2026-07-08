using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20000FE")]
internal static class ParseNumbers
{
	[Token(Token = "0x6000950")]
	[Address(RVA = "0x4FE3CC0", Offset = "0x4FE3CC0", VA = "0x4FE3CC0")]
	public static long StringToLong(ReadOnlySpan<char> s, int radix, int flags)
	{
		return default(long);
	}

	[Token(Token = "0x6000951")]
	[Address(RVA = "0x4FE3CE0", Offset = "0x4FE3CE0", VA = "0x4FE3CE0")]
	public static long StringToLong(ReadOnlySpan<char> s, int radix, int flags, ref int currPos)
	{
		return default(long);
	}

	[Token(Token = "0x6000952")]
	[Address(RVA = "0x4FE4370", Offset = "0x4FE4370", VA = "0x4FE4370")]
	public static int StringToInt(ReadOnlySpan<char> s, int radix, int flags)
	{
		return default(int);
	}

	[Token(Token = "0x6000953")]
	[Address(RVA = "0x4FE4390", Offset = "0x4FE4390", VA = "0x4FE4390")]
	public static int StringToInt(ReadOnlySpan<char> s, int radix, int flags, ref int currPos)
	{
		return default(int);
	}

	[Token(Token = "0x6000954")]
	[Address(RVA = "0x4FE49D0", Offset = "0x4FE49D0", VA = "0x4FE49D0")]
	public static string IntToString(int n, int radix, int width, char paddingChar, int flags)
	{
		return null;
	}

	[Token(Token = "0x6000955")]
	[Address(RVA = "0x4FE4EB0", Offset = "0x4FE4EB0", VA = "0x4FE4EB0")]
	public static string LongToString(long n, int radix, int width, char paddingChar, int flags)
	{
		return null;
	}

	[Token(Token = "0x6000956")]
	[Address(RVA = "0x4FE40F0", Offset = "0x4FE40F0", VA = "0x4FE40F0")]
	private static void EatWhiteSpace(ReadOnlySpan<char> s, ref int i)
	{
	}

	[Token(Token = "0x6000957")]
	[Address(RVA = "0x4FE41A0", Offset = "0x4FE41A0", VA = "0x4FE41A0")]
	private static long GrabLongs(int radix, ReadOnlySpan<char> s, ref int i, bool isUnsigned)
	{
		return default(long);
	}

	[Token(Token = "0x6000958")]
	[Address(RVA = "0x4FE4800", Offset = "0x4FE4800", VA = "0x4FE4800")]
	private static int GrabInts(int radix, ReadOnlySpan<char> s, ref int i, bool isUnsigned)
	{
		return default(int);
	}

	[Token(Token = "0x6000959")]
	[Address(RVA = "0x4FE54E0", Offset = "0x4FE54E0", VA = "0x4FE54E0")]
	private static void ThrowOverflowInt32Exception()
	{
	}

	[Token(Token = "0x600095A")]
	[Address(RVA = "0x4FE5440", Offset = "0x4FE5440", VA = "0x4FE5440")]
	private static void ThrowOverflowInt64Exception()
	{
	}

	[Token(Token = "0x600095B")]
	[Address(RVA = "0x4FE5530", Offset = "0x4FE5530", VA = "0x4FE5530")]
	private static void ThrowOverflowUInt32Exception()
	{
	}

	[Token(Token = "0x600095C")]
	[Address(RVA = "0x4FE5490", Offset = "0x4FE5490", VA = "0x4FE5490")]
	private static void ThrowOverflowUInt64Exception()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600095D")]
	[Address(RVA = "0x4FE5580", Offset = "0x4FE5580", VA = "0x4FE5580")]
	private static bool IsDigit(char c, int radix, out int result)
	{
		return default(bool);
	}
}
