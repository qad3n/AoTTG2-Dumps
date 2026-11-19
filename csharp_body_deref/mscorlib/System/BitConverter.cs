// ==================== AoTTG2 cross-reference ====================
// Type: System.BitConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x2000097")]
public static class BitConverter
{
	[Token(Token = "0x40001FD")]
	[FieldOffset(Offset = "0x0")]
	[System.Runtime.CompilerServices.Intrinsic]
	public static readonly bool IsLittleEndian;

	[Token(Token = "0x6000430")]
	[Address(RVA = "0x541A9C0", Offset = "0x54199C0", VA = "0x541A9C0")]
	public static byte[] GetBytes(bool value)
	{
		return null;
	}

	[Token(Token = "0x6000431")]
	[Address(RVA = "0x541AA10", Offset = "0x5419A10", VA = "0x541AA10")]
	public static byte[] GetBytes(char value)
	{
		return null;
	}

	[Token(Token = "0x6000432")]
	[Address(RVA = "0x541AA60", Offset = "0x5419A60", VA = "0x541AA60")]
	public static byte[] GetBytes(short value)
	{
		return null;
	}

	[Token(Token = "0x6000433")]
	[Address(RVA = "0x541AAB0", Offset = "0x5419AB0", VA = "0x541AAB0")]
	public static byte[] GetBytes(int value)
	{
		return null;
	}

	[Token(Token = "0x6000434")]
	[Address(RVA = "0x541AB00", Offset = "0x5419B00", VA = "0x541AB00")]
	public static byte[] GetBytes(long value)
	{
		return null;
	}

	[Token(Token = "0x6000435")]
	[Address(RVA = "0x541AB50", Offset = "0x5419B50", VA = "0x541AB50")]
	[CLSCompliant(false)]
	public static byte[] GetBytes(ushort value)
	{
		return null;
	}

	[Token(Token = "0x6000436")]
	[Address(RVA = "0x541ABA0", Offset = "0x5419BA0", VA = "0x541ABA0")]
	[CLSCompliant(false)]
	public static byte[] GetBytes(uint value)
	{
		return null;
	}

	[Token(Token = "0x6000437")]
	[Address(RVA = "0x541ABF0", Offset = "0x5419BF0", VA = "0x541ABF0")]
	[CLSCompliant(false)]
	public static bool TryWriteBytes(Span<byte> destination, uint value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000438")]
	[Address(RVA = "0x541AC50", Offset = "0x5419C50", VA = "0x541AC50")]
	[CLSCompliant(false)]
	public static byte[] GetBytes(ulong value)
	{
		return null;
	}

	[Token(Token = "0x6000439")]
	[Address(RVA = "0x541ACA0", Offset = "0x5419CA0", VA = "0x541ACA0")]
	public static byte[] GetBytes(float value)
	{
		return null;
	}

	[Token(Token = "0x600043A")]
	[Address(RVA = "0x541AD00", Offset = "0x5419D00", VA = "0x541AD00")]
	public static byte[] GetBytes(double value)
	{
		return null;
	}

	[Token(Token = "0x600043B")]
	[Address(RVA = "0x541AD60", Offset = "0x5419D60", VA = "0x541AD60")]
	public static int ToInt32(byte[] value, int startIndex)
	{
		return default(int);
	}

	[Token(Token = "0x600043C")]
	[Address(RVA = "0x541ADE0", Offset = "0x5419DE0", VA = "0x541ADE0")]
	public static int ToInt32(ReadOnlySpan<byte> value)
	{
		return default(int);
	}

	[Token(Token = "0x600043D")]
	[Address(RVA = "0x541AE40", Offset = "0x5419E40", VA = "0x541AE40")]
	public static long ToInt64(byte[] value, int startIndex)
	{
		return default(long);
	}

	[Token(Token = "0x600043E")]
	[Address(RVA = "0x541AEC0", Offset = "0x5419EC0", VA = "0x541AEC0")]
	public static float ToSingle(byte[] value, int startIndex)
	{
		return default(float);
	}

	[Token(Token = "0x600043F")]
	[Address(RVA = "0x541AF40", Offset = "0x5419F40", VA = "0x541AF40")]
	public static double ToDouble(byte[] value, int startIndex)
	{
		return default(double);
	}

	[Token(Token = "0x6000440")]
	[Address(RVA = "0x541AFC0", Offset = "0x5419FC0", VA = "0x541AFC0")]
	public static string ToString(byte[] value, int startIndex, int length)
	{
		return null;
	}

	[Token(Token = "0x6000441")]
	[Address(RVA = "0x541B290", Offset = "0x541A290", VA = "0x541B290")]
	public static string ToString(byte[] value)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000442")]
	[Address(RVA = "0x541B2C0", Offset = "0x541A2C0", VA = "0x541B2C0")]
	public static long DoubleToInt64Bits(double value)
	{
		return default(long);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000443")]
	[Address(RVA = "0x541B2D0", Offset = "0x541A2D0", VA = "0x541B2D0")]
	public static double Int64BitsToDouble(long value)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000444")]
	[Address(RVA = "0x541B2E0", Offset = "0x541A2E0", VA = "0x541B2E0")]
	public static int SingleToInt32Bits(float value)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000445")]
	[Address(RVA = "0x541B2F0", Offset = "0x541A2F0", VA = "0x541B2F0")]
	public static float Int32BitsToSingle(int value)
	{
		return default(float);
	}

	[Token(Token = "0x6000446")]
	[Address(RVA = "0x541B300", Offset = "0x541A300", VA = "0x541B300")]
	static BitConverter()
	{
	}
}
