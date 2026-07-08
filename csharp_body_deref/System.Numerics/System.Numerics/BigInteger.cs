using System.Globalization;
using Il2CppDummyDll;

namespace System.Numerics;

[Serializable]
[Token(Token = "0x2000003")]
public readonly struct BigInteger : IFormattable, IComparable, IComparable<BigInteger>, IEquatable<BigInteger>
{
	[Token(Token = "0x2000004")]
	private enum GetBytesMode
	{
		[Token(Token = "0x4000009")]
		AllocateArray,
		[Token(Token = "0x400000A")]
		Count,
		[Token(Token = "0x400000B")]
		Span
	}

	[Token(Token = "0x4000001")]
	[FieldOffset(Offset = "0x0")]
	internal readonly int _sign;

	[Token(Token = "0x4000002")]
	[FieldOffset(Offset = "0x8")]
	internal readonly uint[] _bits;

	[Token(Token = "0x4000003")]
	[FieldOffset(Offset = "0x0")]
	private static readonly BigInteger s_bnMinInt;

	[Token(Token = "0x4000004")]
	[FieldOffset(Offset = "0x10")]
	private static readonly BigInteger s_bnOneInt;

	[Token(Token = "0x4000005")]
	[FieldOffset(Offset = "0x20")]
	private static readonly BigInteger s_bnZeroInt;

	[Token(Token = "0x4000006")]
	[FieldOffset(Offset = "0x30")]
	private static readonly BigInteger s_bnMinusOneInt;

	[Token(Token = "0x4000007")]
	[FieldOffset(Offset = "0x40")]
	private static readonly byte[] s_success;

	[Token(Token = "0x17000001")]
	public static BigInteger Zero
	{
		[Token(Token = "0x600000D")]
		[Address(RVA = "0x4328710", Offset = "0x4328710", VA = "0x4328710")]
		get
		{
			return default(BigInteger);
		}
	}

	[Token(Token = "0x17000002")]
	public static BigInteger MinusOne
	{
		[Token(Token = "0x600000E")]
		[Address(RVA = "0x4328760", Offset = "0x4328760", VA = "0x4328760")]
		get
		{
			return default(BigInteger);
		}
	}

	[Token(Token = "0x17000003")]
	public bool IsZero
	{
		[Token(Token = "0x600000F")]
		[Address(RVA = "0x43287B0", Offset = "0x43287B0", VA = "0x43287B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000004")]
	public bool IsEven
	{
		[Token(Token = "0x6000010")]
		[Address(RVA = "0x43287C0", Offset = "0x43287C0", VA = "0x43287C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000005")]
	public int Sign
	{
		[Token(Token = "0x6000011")]
		[Address(RVA = "0x43287F0", Offset = "0x43287F0", VA = "0x43287F0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000002")]
	[Address(RVA = "0x43272C0", Offset = "0x43272C0", VA = "0x43272C0")]
	public BigInteger(int value)
	{
	}

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x4327340", Offset = "0x4327340", VA = "0x4327340")]
	[CLSCompliant(false)]
	public BigInteger(uint value)
	{
	}

	[Token(Token = "0x6000004")]
	[Address(RVA = "0x43273E0", Offset = "0x43273E0", VA = "0x43273E0")]
	public BigInteger(long value)
	{
	}

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x4327520", Offset = "0x4327520", VA = "0x4327520")]
	[CLSCompliant(false)]
	public BigInteger(ulong value)
	{
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x4327610", Offset = "0x4327610", VA = "0x4327610")]
	public BigInteger(float value)
	{
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x4327680", Offset = "0x4327680", VA = "0x4327680")]
	public BigInteger(double value)
	{
	}

	[Token(Token = "0x6000008")]
	[Address(RVA = "0x4327A50", Offset = "0x4327A50", VA = "0x4327A50")]
	public BigInteger(decimal value)
	{
	}

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x4327C20", Offset = "0x4327C20", VA = "0x4327C20")]
	[CLSCompliant(false)]
	public BigInteger(byte[] value)
	{
	}

	[Token(Token = "0x600000A")]
	[Address(RVA = "0x4327CE0", Offset = "0x4327CE0", VA = "0x4327CE0")]
	public BigInteger(ReadOnlySpan<byte> value, bool isUnsigned = false, bool isBigEndian = false)
	{
	}

	[Token(Token = "0x600000B")]
	[Address(RVA = "0x4328510", Offset = "0x4328510", VA = "0x4328510")]
	internal BigInteger(int n, uint[] rgu)
	{
	}

	[Token(Token = "0x600000C")]
	[Address(RVA = "0x4328530", Offset = "0x4328530", VA = "0x4328530")]
	internal BigInteger(uint[] value, bool negative)
	{
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x4328800", Offset = "0x4328800", VA = "0x4328800")]
	public static BigInteger Parse(string value, IFormatProvider provider)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x4328870", Offset = "0x4328870", VA = "0x4328870")]
	public static BigInteger Parse(string value, NumberStyles style, IFormatProvider provider)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x4328940", Offset = "0x4328940", VA = "0x4328940")]
	public static BigInteger ModPow(BigInteger value, BigInteger exponent, BigInteger modulus)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x4329540", Offset = "0x4329540", VA = "0x4329540", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x4329590", Offset = "0x4329590", VA = "0x4329590", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x43296E0", Offset = "0x43296E0", VA = "0x43296E0")]
	public bool Equals(long other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x4329620", Offset = "0x4329620", VA = "0x4329620", Slot = "7")]
	public bool Equals(BigInteger other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x43297B0", Offset = "0x43297B0", VA = "0x43297B0")]
	public int CompareTo(long other)
	{
		return default(int);
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x4329840", Offset = "0x4329840", VA = "0x4329840", Slot = "6")]
	public int CompareTo(BigInteger other)
	{
		return default(int);
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x4329940", Offset = "0x4329940", VA = "0x4329940", Slot = "5")]
	public int CompareTo(object obj)
	{
		return default(int);
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x4329A30", Offset = "0x4329A30", VA = "0x4329A30")]
	public byte[] ToByteArray()
	{
		return null;
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x4329B10", Offset = "0x4329B10", VA = "0x4329B10")]
	public byte[] ToByteArray(bool isUnsigned = false, bool isBigEndian = false)
	{
		return null;
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x432A160", Offset = "0x432A160", VA = "0x432A160")]
	public bool TryWriteBytes(Span<byte> destination, out int bytesWritten, bool isUnsigned = false, bool isBigEndian = false)
	{
		return default(bool);
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x432A200", Offset = "0x432A200", VA = "0x432A200")]
	internal bool TryWriteOrCountBytes(Span<byte> destination, out int bytesWritten, bool isUnsigned = false, bool isBigEndian = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x4329B90", Offset = "0x4329B90", VA = "0x4329B90")]
	private byte[] TryGetBytes(GetBytesMode mode, Span<byte> destination, bool isUnsigned, bool isBigEndian, ref int bytesWritten)
	{
		return null;
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x432A290", Offset = "0x432A290", VA = "0x432A290", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x432A3D0", Offset = "0x432A3D0", VA = "0x432A3D0")]
	public string ToString(IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6000023")]
	[Address(RVA = "0x432A460", Offset = "0x432A460", VA = "0x432A460", Slot = "4")]
	public string ToString(string format, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6000024")]
	[Address(RVA = "0x432A520", Offset = "0x432A520", VA = "0x432A520")]
	private static BigInteger Add(uint[] leftBits, int leftSign, uint[] rightBits, int rightSign)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x6000025")]
	[Address(RVA = "0x432A980", Offset = "0x432A980", VA = "0x432A980")]
	public static BigInteger operator -(BigInteger left, BigInteger right)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x432AA10", Offset = "0x432AA10", VA = "0x432AA10")]
	private static BigInteger Subtract(uint[] leftBits, int leftSign, uint[] rightBits, int rightSign)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x6000027")]
	[Address(RVA = "0x432AF40", Offset = "0x432AF40", VA = "0x432AF40")]
	public static implicit operator BigInteger(byte value)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x432AF90", Offset = "0x432AF90", VA = "0x432AF90")]
	[CLSCompliant(false)]
	public static implicit operator BigInteger(sbyte value)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x6000029")]
	[Address(RVA = "0x432AFE0", Offset = "0x432AFE0", VA = "0x432AFE0")]
	public static implicit operator BigInteger(short value)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x432B030", Offset = "0x432B030", VA = "0x432B030")]
	[CLSCompliant(false)]
	public static implicit operator BigInteger(ushort value)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x600002B")]
	[Address(RVA = "0x432B080", Offset = "0x432B080", VA = "0x432B080")]
	public static implicit operator BigInteger(int value)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x432B110", Offset = "0x432B110", VA = "0x432B110")]
	[CLSCompliant(false)]
	public static implicit operator BigInteger(uint value)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x600002D")]
	[Address(RVA = "0x43291E0", Offset = "0x43291E0", VA = "0x43291E0")]
	public static implicit operator BigInteger(long value)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x600002E")]
	[Address(RVA = "0x4327A20", Offset = "0x4327A20", VA = "0x4327A20")]
	[CLSCompliant(false)]
	public static implicit operator BigInteger(ulong value)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x600002F")]
	[Address(RVA = "0x432B140", Offset = "0x432B140", VA = "0x432B140")]
	public static explicit operator byte(BigInteger value)
	{
		return default(byte);
	}

	[Token(Token = "0x6000030")]
	[Address(RVA = "0x432B280", Offset = "0x432B280", VA = "0x432B280")]
	[CLSCompliant(false)]
	public static explicit operator sbyte(BigInteger value)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000031")]
	[Address(RVA = "0x432B300", Offset = "0x432B300", VA = "0x432B300")]
	public static explicit operator short(BigInteger value)
	{
		return default(short);
	}

	[Token(Token = "0x6000032")]
	[Address(RVA = "0x432B380", Offset = "0x432B380", VA = "0x432B380")]
	[CLSCompliant(false)]
	public static explicit operator ushort(BigInteger value)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000033")]
	[Address(RVA = "0x432B1C0", Offset = "0x432B1C0", VA = "0x432B1C0")]
	public static explicit operator int(BigInteger value)
	{
		return default(int);
	}

	[Token(Token = "0x6000034")]
	[Address(RVA = "0x432B400", Offset = "0x432B400", VA = "0x432B400")]
	[CLSCompliant(false)]
	public static explicit operator uint(BigInteger value)
	{
		return default(uint);
	}

	[Token(Token = "0x6000035")]
	[Address(RVA = "0x432B4A0", Offset = "0x432B4A0", VA = "0x432B4A0")]
	public static explicit operator long(BigInteger value)
	{
		return default(long);
	}

	[Token(Token = "0x6000036")]
	[Address(RVA = "0x432B540", Offset = "0x432B540", VA = "0x432B540")]
	[CLSCompliant(false)]
	public static explicit operator ulong(BigInteger value)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000037")]
	[Address(RVA = "0x432B5F0", Offset = "0x432B5F0", VA = "0x432B5F0")]
	public static explicit operator float(BigInteger value)
	{
		return default(float);
	}

	[Token(Token = "0x6000038")]
	[Address(RVA = "0x432B650", Offset = "0x432B650", VA = "0x432B650")]
	public static explicit operator double(BigInteger value)
	{
		return default(double);
	}

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x432B9F0", Offset = "0x432B9F0", VA = "0x432B9F0")]
	public static explicit operator decimal(BigInteger value)
	{
		return default(decimal);
	}

	[Token(Token = "0x600003A")]
	[Address(RVA = "0x432BB20", Offset = "0x432BB20", VA = "0x432BB20")]
	public static BigInteger operator <<(BigInteger value, int shift)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x600003B")]
	[Address(RVA = "0x432BDE0", Offset = "0x432BDE0", VA = "0x432BDE0")]
	public static BigInteger operator >>(BigInteger value, int shift)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x600003C")]
	[Address(RVA = "0x432C400", Offset = "0x432C400", VA = "0x432C400")]
	public static BigInteger operator -(BigInteger value)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x600003D")]
	[Address(RVA = "0x432C430", Offset = "0x432C430", VA = "0x432C430")]
	public static BigInteger operator +(BigInteger left, BigInteger right)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x600003E")]
	[Address(RVA = "0x432C4C0", Offset = "0x432C4C0", VA = "0x432C4C0")]
	public static BigInteger operator *(BigInteger left, BigInteger right)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x600003F")]
	[Address(RVA = "0x432C8E0", Offset = "0x432C8E0", VA = "0x432C8E0")]
	public static BigInteger operator /(BigInteger dividend, BigInteger divisor)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x6000040")]
	[Address(RVA = "0x432CC80", Offset = "0x432CC80", VA = "0x432CC80")]
	public static BigInteger operator %(BigInteger dividend, BigInteger divisor)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x6000041")]
	[Address(RVA = "0x432CFE0", Offset = "0x432CFE0", VA = "0x432CFE0")]
	public static bool operator <=(BigInteger left, BigInteger right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x432D050", Offset = "0x432D050", VA = "0x432D050")]
	public static bool operator >=(BigInteger left, BigInteger right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000043")]
	[Address(RVA = "0x432D0C0", Offset = "0x432D0C0", VA = "0x432D0C0")]
	public static bool operator !=(BigInteger left, BigInteger right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x432D120", Offset = "0x432D120", VA = "0x432D120")]
	public static bool operator <(BigInteger left, long right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x432D1F0", Offset = "0x432D1F0", VA = "0x432D1F0")]
	public static bool operator <=(BigInteger left, long right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x432D2C0", Offset = "0x432D2C0", VA = "0x432D2C0")]
	public static bool operator ==(BigInteger left, long right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x432D370", Offset = "0x432D370", VA = "0x432D370")]
	public static bool operator !=(BigInteger left, long right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x432D420", Offset = "0x432D420", VA = "0x432D420")]
	public static bool operator <(long left, BigInteger right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x432D4F0", Offset = "0x432D4F0", VA = "0x432D4F0")]
	public static bool operator <=(long left, BigInteger right)
	{
		return default(bool);
	}

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x432C340", Offset = "0x432C340", VA = "0x432C340")]
	private static bool GetPartsForBitManipulation(ref BigInteger x, out uint[] xd, out int xl)
	{
		return default(bool);
	}

	[Token(Token = "0x600004B")]
	[Address(RVA = "0x4329750", Offset = "0x4329750", VA = "0x4329750")]
	internal static int GetDiffLength(uint[] rgu1, uint[] rgu2, int cu)
	{
		return default(int);
	}
}
