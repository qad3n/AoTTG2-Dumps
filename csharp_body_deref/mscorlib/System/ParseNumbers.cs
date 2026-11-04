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

[Token(Token = "0x2000126")]
internal static class ParseNumbers
{
	[Token(Token = "0x600098B")]
	[Address(RVA = "0x1B47780", Offset = "0x1B45D80", VA = "0x181B47780")]
	public static long StringToLong(ReadOnlySpan<char> s, int radix, int flags)
	{
		return default(long);
	}

	[Token(Token = "0x600098C")]
	[Address(RVA = "0x1B472B0", Offset = "0x1B458B0", VA = "0x181B472B0")]
	public static long StringToLong(ReadOnlySpan<char> s, int radix, int flags, ref int currPos)
	{
		return default(long);
	}

	[Token(Token = "0x600098D")]
	[Address(RVA = "0x1B46D10", Offset = "0x1B45310", VA = "0x181B46D10")]
	public static int StringToInt(ReadOnlySpan<char> s, int radix, int flags)
	{
		return default(int);
	}

	[Token(Token = "0x600098E")]
	[Address(RVA = "0x1B46D40", Offset = "0x1B45340", VA = "0x181B46D40")]
	public static int StringToInt(ReadOnlySpan<char> s, int radix, int flags, ref int currPos)
	{
		return default(int);
	}

	[Token(Token = "0x600098F")]
	[Address(RVA = "0x1B46560", Offset = "0x1B44B60", VA = "0x181B46560")]
	public static string IntToString(int n, int radix, int width, char paddingChar, int flags)
	{
		return null;
	}

	[Token(Token = "0x6000990")]
	[Address(RVA = "0x1B46910", Offset = "0x1B44F10", VA = "0x181B46910")]
	public static string LongToString(long n, int radix, int width, char paddingChar, int flags)
	{
		return null;
	}

	[Token(Token = "0x6000991")]
	[Address(RVA = "0x1B46130", Offset = "0x1B44730", VA = "0x181B46130")]
	private static void EatWhiteSpace(ReadOnlySpan<char> s, ref int i)
	{
	}

	[Token(Token = "0x6000992")]
	[Address(RVA = "0x1B463A0", Offset = "0x1B449A0", VA = "0x181B463A0")]
	private static long GrabLongs(int radix, ReadOnlySpan<char> s, ref int i, bool isUnsigned)
	{
		return default(long);
	}

	[Token(Token = "0x6000993")]
	[Address(RVA = "0x1B461D0", Offset = "0x1B447D0", VA = "0x181B461D0")]
	private static int GrabInts(int radix, ReadOnlySpan<char> s, ref int i, bool isUnsigned)
	{
		return default(int);
	}

	[Token(Token = "0x6000994")]
	[Address(RVA = "0x1B477B0", Offset = "0x1B45DB0", VA = "0x181B477B0")]
	private static void ThrowOverflowInt32Exception()
	{
	}

	[Token(Token = "0x6000995")]
	[Address(RVA = "0x1B47800", Offset = "0x1B45E00", VA = "0x181B47800")]
	private static void ThrowOverflowInt64Exception()
	{
	}

	[Token(Token = "0x6000996")]
	[Address(RVA = "0x1B47850", Offset = "0x1B45E50", VA = "0x181B47850")]
	private static void ThrowOverflowUInt32Exception()
	{
	}

	[Token(Token = "0x6000997")]
	[Address(RVA = "0x1B478A0", Offset = "0x1B45EA0", VA = "0x181B478A0")]
	private static void ThrowOverflowUInt64Exception()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000998")]
	[Address(RVA = "0x1B468B0", Offset = "0x1B44EB0", VA = "0x181B468B0")]
	private static bool IsDigit(char c, int radix, out int result)
	{
		return default(bool);
	}
}
