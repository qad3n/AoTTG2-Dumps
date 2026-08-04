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

	[Token(Token = "0x6000428")]
	[Address(RVA = "0x3C14750", Offset = "0x3C14750", VA = "0x3C14750")]
	public static byte[] GetBytes(bool value)
	{
		return null;
	}

	[Token(Token = "0x6000429")]
	[Address(RVA = "0x3C147A0", Offset = "0x3C147A0", VA = "0x3C147A0")]
	public static byte[] GetBytes(char value)
	{
		return null;
	}

	[Token(Token = "0x600042A")]
	[Address(RVA = "0x3C147F0", Offset = "0x3C147F0", VA = "0x3C147F0")]
	public static byte[] GetBytes(short value)
	{
		return null;
	}

	[Token(Token = "0x600042B")]
	[Address(RVA = "0x3C14840", Offset = "0x3C14840", VA = "0x3C14840")]
	public static byte[] GetBytes(int value)
	{
		return null;
	}

	[Token(Token = "0x600042C")]
	[Address(RVA = "0x3C14890", Offset = "0x3C14890", VA = "0x3C14890")]
	public static byte[] GetBytes(long value)
	{
		return null;
	}

	[Token(Token = "0x600042D")]
	[Address(RVA = "0x3C148E0", Offset = "0x3C148E0", VA = "0x3C148E0")]
	[CLSCompliant(false)]
	public static byte[] GetBytes(ushort value)
	{
		return null;
	}

	[Token(Token = "0x600042E")]
	[Address(RVA = "0x3C14930", Offset = "0x3C14930", VA = "0x3C14930")]
	[CLSCompliant(false)]
	public static byte[] GetBytes(uint value)
	{
		return null;
	}

	[Token(Token = "0x600042F")]
	[Address(RVA = "0x3C14980", Offset = "0x3C14980", VA = "0x3C14980")]
	[CLSCompliant(false)]
	public static bool TryWriteBytes(Span<byte> destination, uint value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000430")]
	[Address(RVA = "0x3C149E0", Offset = "0x3C149E0", VA = "0x3C149E0")]
	[CLSCompliant(false)]
	public static byte[] GetBytes(ulong value)
	{
		return null;
	}

	[Token(Token = "0x6000431")]
	[Address(RVA = "0x3C14A30", Offset = "0x3C14A30", VA = "0x3C14A30")]
	public static byte[] GetBytes(float value)
	{
		return null;
	}

	[Token(Token = "0x6000432")]
	[Address(RVA = "0x3C14A90", Offset = "0x3C14A90", VA = "0x3C14A90")]
	public static byte[] GetBytes(double value)
	{
		return null;
	}

	[Token(Token = "0x6000433")]
	[Address(RVA = "0x3C14AF0", Offset = "0x3C14AF0", VA = "0x3C14AF0")]
	public static int ToInt32(byte[] value, int startIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000434")]
	[Address(RVA = "0x3C14B70", Offset = "0x3C14B70", VA = "0x3C14B70")]
	public static int ToInt32(ReadOnlySpan<byte> value)
	{
		return default(int);
	}

	[Token(Token = "0x6000435")]
	[Address(RVA = "0x3C14BD0", Offset = "0x3C14BD0", VA = "0x3C14BD0")]
	public static long ToInt64(byte[] value, int startIndex)
	{
		return default(long);
	}

	[Token(Token = "0x6000436")]
	[Address(RVA = "0x3C14C50", Offset = "0x3C14C50", VA = "0x3C14C50")]
	public static float ToSingle(byte[] value, int startIndex)
	{
		return default(float);
	}

	[Token(Token = "0x6000437")]
	[Address(RVA = "0x3C14CD0", Offset = "0x3C14CD0", VA = "0x3C14CD0")]
	public static double ToDouble(byte[] value, int startIndex)
	{
		return default(double);
	}

	[Token(Token = "0x6000438")]
	[Address(RVA = "0x3C14D50", Offset = "0x3C14D50", VA = "0x3C14D50")]
	public static string ToString(byte[] value, int startIndex, int length)
	{
		return null;
	}

	[Token(Token = "0x6000439")]
	[Address(RVA = "0x3C15020", Offset = "0x3C15020", VA = "0x3C15020")]
	public static string ToString(byte[] value)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600043A")]
	[Address(RVA = "0x3C15050", Offset = "0x3C15050", VA = "0x3C15050")]
	public static long DoubleToInt64Bits(double value)
	{
		return default(long);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600043B")]
	[Address(RVA = "0x3C15060", Offset = "0x3C15060", VA = "0x3C15060")]
	public static double Int64BitsToDouble(long value)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600043C")]
	[Address(RVA = "0x3C15070", Offset = "0x3C15070", VA = "0x3C15070")]
	public static int SingleToInt32Bits(float value)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600043D")]
	[Address(RVA = "0x3C15080", Offset = "0x3C15080", VA = "0x3C15080")]
	public static float Int32BitsToSingle(int value)
	{
		return default(float);
	}

	[Token(Token = "0x600043E")]
	[Address(RVA = "0x3C15090", Offset = "0x3C15090", VA = "0x3C15090")]
	static BitConverter()
	{
	}
}
