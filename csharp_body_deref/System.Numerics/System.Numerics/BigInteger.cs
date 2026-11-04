// ==================== AoTTG2 cross-reference ====================
// Type: System.Numerics.BigInteger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x25C1260", Offset = "0x25BF860", VA = "0x1825C1260")]
		get
		{
			return default(BigInteger);
		}
	}

	[Token(Token = "0x17000002")]
	public static BigInteger MinusOne
	{
		[Token(Token = "0x600000E")]
		[Address(RVA = "0x25C11F0", Offset = "0x25BF7F0", VA = "0x1825C11F0")]
		get
		{
			return default(BigInteger);
		}
	}

	[Token(Token = "0x17000003")]
	public bool IsZero
	{
		[Token(Token = "0x600000F")]
		[Address(RVA = "0x2372150", Offset = "0x2370750", VA = "0x182372150")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000004")]
	public bool IsEven
	{
		[Token(Token = "0x6000010")]
		[Address(RVA = "0x25C11B0", Offset = "0x25BF7B0", VA = "0x1825C11B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000005")]
	public int Sign
	{
		[Token(Token = "0x6000011")]
		[Address(RVA = "0x25C1250", Offset = "0x25BF850", VA = "0x1825C1250")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000002")]
	[Address(RVA = "0x25C1130", Offset = "0x25BF730", VA = "0x1825C1130")]
	public BigInteger(int value)
	{
	}

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x25C09D0", Offset = "0x25BEFD0", VA = "0x1825C09D0")]
	[CLSCompliant(false)]
	public BigInteger(uint value)
	{
	}

	[Token(Token = "0x6000004")]
	[Address(RVA = "0x25C0830", Offset = "0x25BEE30", VA = "0x1825C0830")]
	public BigInteger(long value)
	{
	}

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x25C0120", Offset = "0x25BE720", VA = "0x1825C0120")]
	[CLSCompliant(false)]
	public BigInteger(ulong value)
	{
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x25C07D0", Offset = "0x25BEDD0", VA = "0x1825C07D0")]
	public BigInteger(float value)
	{
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x25C0240", Offset = "0x25BE840", VA = "0x1825C0240")]
	public BigInteger(double value)
	{
	}

	[Token(Token = "0x6000008")]
	[Address(RVA = "0x25C05D0", Offset = "0x25BEBD0", VA = "0x1825C05D0")]
	public BigInteger(decimal value)
	{
	}

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x25C0030", Offset = "0x25BE630", VA = "0x1825C0030")]
	[CLSCompliant(false)]
	public BigInteger(byte[] value)
	{
	}

	[Token(Token = "0x600000A")]
	[Address(RVA = "0x25C0A90", Offset = "0x25BF090", VA = "0x1825C0A90")]
	public BigInteger(ReadOnlySpan<byte> value, bool isUnsigned = false, bool isBigEndian = false)
	{
	}

	[Token(Token = "0x600000B")]
	[Address(RVA = "0x1028B90", Offset = "0x1027190", VA = "0x181028B90")]
	internal BigInteger(int n, uint[] rgu)
	{
	}

	[Token(Token = "0x600000C")]
	[Address(RVA = "0x25BFE30", Offset = "0x25BE430", VA = "0x1825BFE30")]
	internal BigInteger(uint[] value, bool negative)
	{
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x25BECB0", Offset = "0x25BD2B0", VA = "0x1825BECB0")]
	public static BigInteger Parse(string value, IFormatProvider provider)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x25BED40", Offset = "0x25BD340", VA = "0x1825BED40")]
	public static BigInteger Parse(string value, NumberStyles style, IFormatProvider provider)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x25BE450", Offset = "0x25BCA50", VA = "0x1825BE450")]
	public static BigInteger ModPow(BigInteger value, BigInteger exponent, BigInteger modulus)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x25BE340", Offset = "0x25BC940", VA = "0x1825BE340", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x25BE230", Offset = "0x25BC830", VA = "0x1825BE230", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x25BE1B0", Offset = "0x25BC7B0", VA = "0x1825BE1B0")]
	public bool Equals(long other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x25BE0B0", Offset = "0x25BC6B0", VA = "0x1825BE0B0", Slot = "7")]
	public bool Equals(BigInteger other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x25BDEF0", Offset = "0x25BC4F0", VA = "0x1825BDEF0")]
	public int CompareTo(long other)
	{
		return default(int);
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x25BDD30", Offset = "0x25BC330", VA = "0x1825BDD30", Slot = "6")]
	public int CompareTo(BigInteger other)
	{
		return default(int);
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x25BDFA0", Offset = "0x25BC5A0", VA = "0x1825BDFA0", Slot = "5")]
	public int CompareTo(object obj)
	{
		return default(int);
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x25BF1F0", Offset = "0x25BD7F0", VA = "0x1825BF1F0")]
	public byte[] ToByteArray()
	{
		return null;
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x25BF140", Offset = "0x25BD740", VA = "0x1825BF140")]
	public byte[] ToByteArray(bool isUnsigned = false, bool isBigEndian = false)
	{
		return null;
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x25BFA40", Offset = "0x25BE040", VA = "0x1825BFA40")]
	public bool TryWriteBytes(Span<byte> destination, out int bytesWritten, bool isUnsigned = false, bool isBigEndian = false)
	{
		return default(bool);
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x25BFAF0", Offset = "0x25BE0F0", VA = "0x1825BFAF0")]
	internal bool TryWriteOrCountBytes(Span<byte> destination, out int bytesWritten, bool isUnsigned = false, bool isBigEndian = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x25BF4D0", Offset = "0x25BDAD0", VA = "0x1825BF4D0")]
	private byte[] TryGetBytes(GetBytesMode mode, Span<byte> destination, bool isUnsigned, bool isBigEndian, ref int bytesWritten)
	{
		return null;
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x25BF240", Offset = "0x25BD840", VA = "0x1825BF240", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x25BF300", Offset = "0x25BD900", VA = "0x1825BF300")]
	public string ToString(IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6000023")]
	[Address(RVA = "0x25BF3D0", Offset = "0x25BD9D0", VA = "0x1825BF3D0", Slot = "4")]
	public string ToString(string format, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6000024")]
	[Address(RVA = "0x25BDB80", Offset = "0x25BC180", VA = "0x1825BDB80")]
	private static BigInteger Add(uint[] leftBits, int leftSign, uint[] rightBits, int rightSign)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x6000025")]
	[Address(RVA = "0x25C3470", Offset = "0x25C1A70", VA = "0x1825C3470")]
	public static BigInteger operator -(BigInteger left, BigInteger right)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x25BEF40", Offset = "0x25BD540", VA = "0x1825BEF40")]
	private static BigInteger Subtract(uint[] leftBits, int leftSign, uint[] rightBits, int rightSign)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x6000027")]
	[Address(RVA = "0x25C23F0", Offset = "0x25C09F0", VA = "0x1825C23F0")]
	public static implicit operator BigInteger(byte value)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x25C2350", Offset = "0x25C0950", VA = "0x1825C2350")]
	[CLSCompliant(false)]
	public static implicit operator BigInteger(sbyte value)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x6000029")]
	[Address(RVA = "0x25C23C0", Offset = "0x25C09C0", VA = "0x1825C23C0")]
	public static implicit operator BigInteger(short value)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x25C2440", Offset = "0x25C0A40", VA = "0x1825C2440")]
	[CLSCompliant(false)]
	public static implicit operator BigInteger(ushort value)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x600002B")]
	[Address(RVA = "0x25C2330", Offset = "0x25C0930", VA = "0x1825C2330")]
	public static implicit operator BigInteger(int value)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x25C23A0", Offset = "0x25C09A0", VA = "0x1825C23A0")]
	[CLSCompliant(false)]
	public static implicit operator BigInteger(uint value)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x600002D")]
	[Address(RVA = "0x25C2420", Offset = "0x25C0A20", VA = "0x1825C2420")]
	public static implicit operator BigInteger(long value)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x600002E")]
	[Address(RVA = "0x25C2380", Offset = "0x25C0980", VA = "0x1825C2380")]
	[CLSCompliant(false)]
	public static implicit operator BigInteger(ulong value)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x600002F")]
	[Address(RVA = "0x25C2110", Offset = "0x25C0710", VA = "0x1825C2110")]
	public static explicit operator byte(BigInteger value)
	{
		return default(byte);
	}

	[Token(Token = "0x6000030")]
	[Address(RVA = "0x25C1C40", Offset = "0x25C0240", VA = "0x1825C1C40")]
	[CLSCompliant(false)]
	public static explicit operator sbyte(BigInteger value)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000031")]
	[Address(RVA = "0x25C1940", Offset = "0x25BFF40", VA = "0x1825C1940")]
	public static explicit operator short(BigInteger value)
	{
		return default(short);
	}

	[Token(Token = "0x6000032")]
	[Address(RVA = "0x25C2090", Offset = "0x25C0690", VA = "0x1825C2090")]
	[CLSCompliant(false)]
	public static explicit operator ushort(BigInteger value)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000033")]
	[Address(RVA = "0x25C1B10", Offset = "0x25C0110", VA = "0x1825C1B10")]
	public static explicit operator int(BigInteger value)
	{
		return default(int);
	}

	[Token(Token = "0x6000034")]
	[Address(RVA = "0x25C1E10", Offset = "0x25C0410", VA = "0x1825C1E10")]
	[CLSCompliant(false)]
	public static explicit operator uint(BigInteger value)
	{
		return default(uint);
	}

	[Token(Token = "0x6000035")]
	[Address(RVA = "0x25C2190", Offset = "0x25C0790", VA = "0x1825C2190")]
	public static explicit operator long(BigInteger value)
	{
		return default(long);
	}

	[Token(Token = "0x6000036")]
	[Address(RVA = "0x25C1FD0", Offset = "0x25C05D0", VA = "0x1825C1FD0")]
	[CLSCompliant(false)]
	public static explicit operator ulong(BigInteger value)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000037")]
	[Address(RVA = "0x25C1CC0", Offset = "0x25C02C0", VA = "0x1825C1CC0")]
	public static explicit operator float(BigInteger value)
	{
		return default(float);
	}

	[Token(Token = "0x6000038")]
	[Address(RVA = "0x25C1EC0", Offset = "0x25C04C0", VA = "0x1825C1EC0")]
	public static explicit operator double(BigInteger value)
	{
		return default(double);
	}

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x25C19C0", Offset = "0x25BFFC0", VA = "0x1825C19C0")]
	public static explicit operator decimal(BigInteger value)
	{
		return 0m;
	}

	[Token(Token = "0x600003A")]
	[Address(RVA = "0x25C2540", Offset = "0x25C0B40", VA = "0x1825C2540")]
	public static BigInteger operator <<(BigInteger value, int shift)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x600003B")]
	[Address(RVA = "0x25C2FB0", Offset = "0x25C15B0", VA = "0x1825C2FB0")]
	public static BigInteger operator >>(BigInteger value, int shift)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x600003C")]
	[Address(RVA = "0x25C37E0", Offset = "0x25C1DE0", VA = "0x1825C37E0")]
	public static BigInteger operator -(BigInteger value)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x600003D")]
	[Address(RVA = "0x25C12C0", Offset = "0x25BF8C0", VA = "0x1825C12C0")]
	public static BigInteger operator +(BigInteger left, BigInteger right)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x600003E")]
	[Address(RVA = "0x25C2CB0", Offset = "0x25C12B0", VA = "0x1825C2CB0")]
	public static BigInteger operator *(BigInteger left, BigInteger right)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x600003F")]
	[Address(RVA = "0x25C1640", Offset = "0x25BFC40", VA = "0x1825C1640")]
	public static BigInteger operator /(BigInteger dividend, BigInteger divisor)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x6000040")]
	[Address(RVA = "0x25C2A90", Offset = "0x25C1090", VA = "0x1825C2A90")]
	public static BigInteger operator %(BigInteger dividend, BigInteger divisor)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x6000041")]
	[Address(RVA = "0x25C28A0", Offset = "0x25C0EA0", VA = "0x1825C28A0")]
	public static bool operator <=(BigInteger left, BigInteger right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x25C22C0", Offset = "0x25C08C0", VA = "0x1825C22C0")]
	public static bool operator >=(BigInteger left, BigInteger right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000043")]
	[Address(RVA = "0x25C24D0", Offset = "0x25C0AD0", VA = "0x1825C24D0")]
	public static bool operator !=(BigInteger left, BigInteger right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x25C2A30", Offset = "0x25C1030", VA = "0x1825C2A30")]
	public static bool operator <(BigInteger left, long right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x25C2910", Offset = "0x25C0F10", VA = "0x1825C2910")]
	public static bool operator <=(BigInteger left, long right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x25C18E0", Offset = "0x25BFEE0", VA = "0x1825C18E0")]
	public static bool operator ==(BigInteger left, long right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x25C2470", Offset = "0x25C0A70", VA = "0x1825C2470")]
	public static bool operator !=(BigInteger left, long right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x25C29D0", Offset = "0x25C0FD0", VA = "0x1825C29D0")]
	public static bool operator <(long left, BigInteger right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x25C2970", Offset = "0x25C0F70", VA = "0x1825C2970")]
	public static bool operator <=(long left, BigInteger right)
	{
		return default(bool);
	}

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x25BE390", Offset = "0x25BC990", VA = "0x1825BE390")]
	private static bool GetPartsForBitManipulation(ref BigInteger x, out uint[] xd, out int xl)
	{
		return default(bool);
	}

	[Token(Token = "0x600004B")]
	[Address(RVA = "0x25BE2E0", Offset = "0x25BC8E0", VA = "0x1825BE2E0")]
	internal static int GetDiffLength(uint[] rgu1, uint[] rgu2, int cu)
	{
		return default(int);
	}
}
