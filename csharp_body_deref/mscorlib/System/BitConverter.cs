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

	[Token(Token = "0x6000428")]
	[Address(RVA = "0x4F2EC30", Offset = "0x4F2EC30", VA = "0x4F2EC30")]
	public static byte[] GetBytes(bool value)
	{
		return null;
	}

	[Token(Token = "0x6000429")]
	[Address(RVA = "0x4F2EC80", Offset = "0x4F2EC80", VA = "0x4F2EC80")]
	public static byte[] GetBytes(char value)
	{
		return null;
	}

	[Token(Token = "0x600042A")]
	[Address(RVA = "0x4F2ECD0", Offset = "0x4F2ECD0", VA = "0x4F2ECD0")]
	public static byte[] GetBytes(short value)
	{
		return null;
	}

	[Token(Token = "0x600042B")]
	[Address(RVA = "0x4F2ED20", Offset = "0x4F2ED20", VA = "0x4F2ED20")]
	public static byte[] GetBytes(int value)
	{
		return null;
	}

	[Token(Token = "0x600042C")]
	[Address(RVA = "0x4F2ED70", Offset = "0x4F2ED70", VA = "0x4F2ED70")]
	public static byte[] GetBytes(long value)
	{
		return null;
	}

	[Token(Token = "0x600042D")]
	[Address(RVA = "0x4F2EDC0", Offset = "0x4F2EDC0", VA = "0x4F2EDC0")]
	[CLSCompliant(false)]
	public static byte[] GetBytes(ushort value)
	{
		return null;
	}

	[Token(Token = "0x600042E")]
	[Address(RVA = "0x4F2EE10", Offset = "0x4F2EE10", VA = "0x4F2EE10")]
	[CLSCompliant(false)]
	public static byte[] GetBytes(uint value)
	{
		return null;
	}

	[Token(Token = "0x600042F")]
	[Address(RVA = "0x4F2EE60", Offset = "0x4F2EE60", VA = "0x4F2EE60")]
	[CLSCompliant(false)]
	public static bool TryWriteBytes(Span<byte> destination, uint value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000430")]
	[Address(RVA = "0x4F2EEC0", Offset = "0x4F2EEC0", VA = "0x4F2EEC0")]
	[CLSCompliant(false)]
	public static byte[] GetBytes(ulong value)
	{
		return null;
	}

	[Token(Token = "0x6000431")]
	[Address(RVA = "0x4F2EF10", Offset = "0x4F2EF10", VA = "0x4F2EF10")]
	public static byte[] GetBytes(float value)
	{
		return null;
	}

	[Token(Token = "0x6000432")]
	[Address(RVA = "0x4F2EF70", Offset = "0x4F2EF70", VA = "0x4F2EF70")]
	public static byte[] GetBytes(double value)
	{
		return null;
	}

	[Token(Token = "0x6000433")]
	[Address(RVA = "0x4F2EFD0", Offset = "0x4F2EFD0", VA = "0x4F2EFD0")]
	public static int ToInt32(byte[] value, int startIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000434")]
	[Address(RVA = "0x4F2F050", Offset = "0x4F2F050", VA = "0x4F2F050")]
	public static int ToInt32(ReadOnlySpan<byte> value)
	{
		return default(int);
	}

	[Token(Token = "0x6000435")]
	[Address(RVA = "0x4F2F0B0", Offset = "0x4F2F0B0", VA = "0x4F2F0B0")]
	public static long ToInt64(byte[] value, int startIndex)
	{
		return default(long);
	}

	[Token(Token = "0x6000436")]
	[Address(RVA = "0x4F2F130", Offset = "0x4F2F130", VA = "0x4F2F130")]
	public static float ToSingle(byte[] value, int startIndex)
	{
		return default(float);
	}

	[Token(Token = "0x6000437")]
	[Address(RVA = "0x4F2F1B0", Offset = "0x4F2F1B0", VA = "0x4F2F1B0")]
	public static double ToDouble(byte[] value, int startIndex)
	{
		return default(double);
	}

	[Token(Token = "0x6000438")]
	[Address(RVA = "0x4F2F230", Offset = "0x4F2F230", VA = "0x4F2F230")]
	public static string ToString(byte[] value, int startIndex, int length)
	{
		return null;
	}

	[Token(Token = "0x6000439")]
	[Address(RVA = "0x4F2F500", Offset = "0x4F2F500", VA = "0x4F2F500")]
	public static string ToString(byte[] value)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600043A")]
	[Address(RVA = "0x4F2F530", Offset = "0x4F2F530", VA = "0x4F2F530")]
	public static long DoubleToInt64Bits(double value)
	{
		return default(long);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600043B")]
	[Address(RVA = "0x4F2F540", Offset = "0x4F2F540", VA = "0x4F2F540")]
	public static double Int64BitsToDouble(long value)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600043C")]
	[Address(RVA = "0x4F2F550", Offset = "0x4F2F550", VA = "0x4F2F550")]
	public static int SingleToInt32Bits(float value)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600043D")]
	[Address(RVA = "0x4F2F560", Offset = "0x4F2F560", VA = "0x4F2F560")]
	public static float Int32BitsToSingle(int value)
	{
		return default(float);
	}

	[Token(Token = "0x600043E")]
	[Address(RVA = "0x4F2F570", Offset = "0x4F2F570", VA = "0x4F2F570")]
	static BitConverter()
	{
	}
}
