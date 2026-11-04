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

[Token(Token = "0x20000C0")]
public static class BitConverter
{
	[Token(Token = "0x40002A6")]
	[FieldOffset(Offset = "0x0")]
	[System.Runtime.CompilerServices.Intrinsic]
	public static readonly bool IsLittleEndian;

	[Token(Token = "0x600045B")]
	[Address(RVA = "0x1A78F20", Offset = "0x1A77520", VA = "0x181A78F20")]
	public static byte[] GetBytes(bool value)
	{
		return null;
	}

	[Token(Token = "0x600045C")]
	[Address(RVA = "0x1A78D40", Offset = "0x1A77340", VA = "0x181A78D40")]
	public static byte[] GetBytes(char value)
	{
		return null;
	}

	[Token(Token = "0x600045D")]
	[Address(RVA = "0x1A78CE0", Offset = "0x1A772E0", VA = "0x181A78CE0")]
	public static byte[] GetBytes(short value)
	{
		return null;
	}

	[Token(Token = "0x600045E")]
	[Address(RVA = "0x1A78FE0", Offset = "0x1A775E0", VA = "0x181A78FE0")]
	public static byte[] GetBytes(int value)
	{
		return null;
	}

	[Token(Token = "0x600045F")]
	[Address(RVA = "0x1A78EC0", Offset = "0x1A774C0", VA = "0x181A78EC0")]
	public static byte[] GetBytes(long value)
	{
		return null;
	}

	[Token(Token = "0x6000460")]
	[Address(RVA = "0x1A78DA0", Offset = "0x1A773A0", VA = "0x181A78DA0")]
	[CLSCompliant(false)]
	public static byte[] GetBytes(ushort value)
	{
		return null;
	}

	[Token(Token = "0x6000461")]
	[Address(RVA = "0x1A78E60", Offset = "0x1A77460", VA = "0x181A78E60")]
	[CLSCompliant(false)]
	public static byte[] GetBytes(uint value)
	{
		return null;
	}

	[Token(Token = "0x6000462")]
	[Address(RVA = "0x1A79660", Offset = "0x1A77C60", VA = "0x181A79660")]
	[CLSCompliant(false)]
	public static bool TryWriteBytes(Span<byte> destination, uint value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000463")]
	[Address(RVA = "0x1A78E00", Offset = "0x1A77400", VA = "0x181A78E00")]
	[CLSCompliant(false)]
	public static byte[] GetBytes(ulong value)
	{
		return null;
	}

	[Token(Token = "0x6000464")]
	[Address(RVA = "0x1A78F80", Offset = "0x1A77580", VA = "0x181A78F80")]
	public static byte[] GetBytes(float value)
	{
		return null;
	}

	[Token(Token = "0x6000465")]
	[Address(RVA = "0x1A79040", Offset = "0x1A77640", VA = "0x181A79040")]
	public static byte[] GetBytes(double value)
	{
		return null;
	}

	[Token(Token = "0x6000466")]
	[Address(RVA = "0x1A79150", Offset = "0x1A77750", VA = "0x181A79150")]
	public static int ToInt32(byte[] value, int startIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000467")]
	[Address(RVA = "0x1A791D0", Offset = "0x1A777D0", VA = "0x181A791D0")]
	public static int ToInt32(ReadOnlySpan<byte> value)
	{
		return default(int);
	}

	[Token(Token = "0x6000468")]
	[Address(RVA = "0x1A79240", Offset = "0x1A77840", VA = "0x181A79240")]
	public static long ToInt64(byte[] value, int startIndex)
	{
		return default(long);
	}

	[Token(Token = "0x6000469")]
	[Address(RVA = "0x1A792C0", Offset = "0x1A778C0", VA = "0x181A792C0")]
	public static float ToSingle(byte[] value, int startIndex)
	{
		return default(float);
	}

	[Token(Token = "0x600046A")]
	[Address(RVA = "0x1A790D0", Offset = "0x1A776D0", VA = "0x181A790D0")]
	public static double ToDouble(byte[] value, int startIndex)
	{
		return default(double);
	}

	[Token(Token = "0x600046B")]
	[Address(RVA = "0x1A79370", Offset = "0x1A77970", VA = "0x181A79370")]
	public static string ToString(byte[] value, int startIndex, int length)
	{
		return null;
	}

	[Token(Token = "0x600046C")]
	[Address(RVA = "0x1A79340", Offset = "0x1A77940", VA = "0x181A79340")]
	public static string ToString(byte[] value)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600046D")]
	[Address(RVA = "0x1A78CD0", Offset = "0x1A772D0", VA = "0x181A78CD0")]
	public static long DoubleToInt64Bits(double value)
	{
		return default(long);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600046E")]
	[Address(RVA = "0x1A790B0", Offset = "0x1A776B0", VA = "0x181A790B0")]
	public static double Int64BitsToDouble(long value)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600046F")]
	[Address(RVA = "0x1A790C0", Offset = "0x1A776C0", VA = "0x181A790C0")]
	public static int SingleToInt32Bits(float value)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000470")]
	[Address(RVA = "0x1A790A0", Offset = "0x1A776A0", VA = "0x181A790A0")]
	public static float Int32BitsToSingle(int value)
	{
		return default(float);
	}

	[Token(Token = "0x6000471")]
	[Address(RVA = "0x1A796E0", Offset = "0x1A77CE0", VA = "0x181A796E0")]
	static BitConverter()
	{
	}
}
