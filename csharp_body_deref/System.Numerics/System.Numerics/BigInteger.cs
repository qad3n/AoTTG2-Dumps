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
		[Address(RVA = "0x5F779D0", Offset = "0x5F769D0", VA = "0x5F779D0")]
		get
		{
			return default(BigInteger);
		}
	}

	[Token(Token = "0x17000002")]
	public static BigInteger MinusOne
	{
		[Token(Token = "0x600000E")]
		[Address(RVA = "0x5F77A20", Offset = "0x5F76A20", VA = "0x5F77A20")]
		get
		{
			return default(BigInteger);
		}
	}

	[Token(Token = "0x17000003")]
	public bool IsZero
	{
		[Token(Token = "0x600000F")]
		[Address(RVA = "0x5F77A70", Offset = "0x5F76A70", VA = "0x5F77A70")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000004")]
	public bool IsEven
	{
		[Token(Token = "0x6000010")]
		[Address(RVA = "0x5F77A80", Offset = "0x5F76A80", VA = "0x5F77A80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000005")]
	public int Sign
	{
		[Token(Token = "0x6000011")]
		[Address(RVA = "0x5F77AB0", Offset = "0x5F76AB0", VA = "0x5F77AB0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000002")]
	[Address(RVA = "0x5F762D0", Offset = "0x5F752D0", VA = "0x5F762D0")]
	public BigInteger(int value)
	{
	}

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x5F76350", Offset = "0x5F75350", VA = "0x5F76350")]
	[CLSCompliant(false)]
	public BigInteger(uint value)
	{
	}

	[Token(Token = "0x6000004")]
	[Address(RVA = "0x5F763F0", Offset = "0x5F753F0", VA = "0x5F763F0")]
	public BigInteger(long value)
	{
	}

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x5F76530", Offset = "0x5F75530", VA = "0x5F76530")]
	[CLSCompliant(false)]
	public BigInteger(ulong value)
	{
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x5F76620", Offset = "0x5F75620", VA = "0x5F76620")]
	public BigInteger(float value)
	{
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x5F76690", Offset = "0x5F75690", VA = "0x5F76690")]
	public BigInteger(double value)
	{
	}

	[Token(Token = "0x6000008")]
	[Address(RVA = "0x5F76A40", Offset = "0x5F75A40", VA = "0x5F76A40")]
	public BigInteger(decimal value)
	{
	}

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x5F76C20", Offset = "0x5F75C20", VA = "0x5F76C20")]
	[CLSCompliant(false)]
	public BigInteger(byte[] value)
	{
	}

	[Token(Token = "0x600000A")]
	[Address(RVA = "0x5F76CE0", Offset = "0x5F75CE0", VA = "0x5F76CE0")]
	public BigInteger(ReadOnlySpan<byte> value, bool isUnsigned = false, bool isBigEndian = false)
	{
	}

	[Token(Token = "0x600000B")]
	[Address(RVA = "0x5F777C0", Offset = "0x5F767C0", VA = "0x5F777C0")]
	internal BigInteger(int n, uint[] rgu)
	{
	}

	[Token(Token = "0x600000C")]
	[Address(RVA = "0x5F777E0", Offset = "0x5F767E0", VA = "0x5F777E0")]
	internal BigInteger(uint[] value, bool negative)
	{
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x5F77AC0", Offset = "0x5F76AC0", VA = "0x5F77AC0")]
	public static BigInteger Parse(string value, IFormatProvider provider)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x5F77B30", Offset = "0x5F76B30", VA = "0x5F77B30")]
	public static BigInteger Parse(string value, NumberStyles style, IFormatProvider provider)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x5F77C00", Offset = "0x5F76C00", VA = "0x5F77C00")]
	public static BigInteger ModPow(BigInteger value, BigInteger exponent, BigInteger modulus)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x5F78D60", Offset = "0x5F77D60", VA = "0x5F78D60", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x5F78DF0", Offset = "0x5F77DF0", VA = "0x5F78DF0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x5F78F50", Offset = "0x5F77F50", VA = "0x5F78F50")]
	public bool Equals(long other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x5F78E90", Offset = "0x5F77E90", VA = "0x5F78E90", Slot = "7")]
	public bool Equals(BigInteger other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x5F79020", Offset = "0x5F78020", VA = "0x5F79020")]
	public int CompareTo(long other)
	{
		return default(int);
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x5F790A0", Offset = "0x5F780A0", VA = "0x5F790A0", Slot = "6")]
	public int CompareTo(BigInteger other)
	{
		return default(int);
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x5F791A0", Offset = "0x5F781A0", VA = "0x5F791A0", Slot = "5")]
	public int CompareTo(object obj)
	{
		return default(int);
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x5F79290", Offset = "0x5F78290", VA = "0x5F79290")]
	public byte[] ToByteArray()
	{
		return null;
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x5F79350", Offset = "0x5F78350", VA = "0x5F79350")]
	public byte[] ToByteArray(bool isUnsigned = false, bool isBigEndian = false)
	{
		return null;
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x5F79930", Offset = "0x5F78930", VA = "0x5F79930")]
	public bool TryWriteBytes(Span<byte> destination, out int bytesWritten, bool isUnsigned = false, bool isBigEndian = false)
	{
		return default(bool);
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x5F799D0", Offset = "0x5F789D0", VA = "0x5F799D0")]
	internal bool TryWriteOrCountBytes(Span<byte> destination, out int bytesWritten, bool isUnsigned = false, bool isBigEndian = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x5F793C0", Offset = "0x5F783C0", VA = "0x5F793C0")]
	private byte[] TryGetBytes(GetBytesMode mode, Span<byte> destination, bool isUnsigned, bool isBigEndian, ref int bytesWritten)
	{
		return null;
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x5F79A60", Offset = "0x5F78A60", VA = "0x5F79A60", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x5F79B90", Offset = "0x5F78B90", VA = "0x5F79B90")]
	public string ToString(IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6000023")]
	[Address(RVA = "0x5F79C20", Offset = "0x5F78C20", VA = "0x5F79C20", Slot = "4")]
	public string ToString(string format, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6000024")]
	[Address(RVA = "0x5F79CE0", Offset = "0x5F78CE0", VA = "0x5F79CE0")]
	private static BigInteger Add(uint[] leftBits, int leftSign, uint[] rightBits, int rightSign)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x6000025")]
	[Address(RVA = "0x5F7A0E0", Offset = "0x5F790E0", VA = "0x5F7A0E0")]
	public static BigInteger operator -(BigInteger left, BigInteger right)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x5F7A170", Offset = "0x5F79170", VA = "0x5F7A170")]
	private static BigInteger Subtract(uint[] leftBits, int leftSign, uint[] rightBits, int rightSign)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x6000027")]
	[Address(RVA = "0x5F7A640", Offset = "0x5F79640", VA = "0x5F7A640")]
	public static implicit operator BigInteger(byte value)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x5F7A6A0", Offset = "0x5F796A0", VA = "0x5F7A6A0")]
	[CLSCompliant(false)]
	public static implicit operator BigInteger(sbyte value)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x6000029")]
	[Address(RVA = "0x5F7A700", Offset = "0x5F79700", VA = "0x5F7A700")]
	public static implicit operator BigInteger(short value)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x5F7A760", Offset = "0x5F79760", VA = "0x5F7A760")]
	[CLSCompliant(false)]
	public static implicit operator BigInteger(ushort value)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x600002B")]
	[Address(RVA = "0x5F7A7C0", Offset = "0x5F797C0", VA = "0x5F7A7C0")]
	public static implicit operator BigInteger(int value)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x5F7A850", Offset = "0x5F79850", VA = "0x5F7A850")]
	[CLSCompliant(false)]
	public static implicit operator BigInteger(uint value)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x600002D")]
	[Address(RVA = "0x5F789E0", Offset = "0x5F779E0", VA = "0x5F789E0")]
	public static implicit operator BigInteger(long value)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x600002E")]
	[Address(RVA = "0x5F76A10", Offset = "0x5F75A10", VA = "0x5F76A10")]
	[CLSCompliant(false)]
	public static implicit operator BigInteger(ulong value)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x600002F")]
	[Address(RVA = "0x5F7A880", Offset = "0x5F79880", VA = "0x5F7A880")]
	public static explicit operator byte(BigInteger value)
	{
		return default(byte);
	}

	[Token(Token = "0x6000030")]
	[Address(RVA = "0x5F7A9D0", Offset = "0x5F799D0", VA = "0x5F7A9D0")]
	[CLSCompliant(false)]
	public static explicit operator sbyte(BigInteger value)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000031")]
	[Address(RVA = "0x5F7AA50", Offset = "0x5F79A50", VA = "0x5F7AA50")]
	public static explicit operator short(BigInteger value)
	{
		return default(short);
	}

	[Token(Token = "0x6000032")]
	[Address(RVA = "0x5F7AAD0", Offset = "0x5F79AD0", VA = "0x5F7AAD0")]
	[CLSCompliant(false)]
	public static explicit operator ushort(BigInteger value)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000033")]
	[Address(RVA = "0x5F7A900", Offset = "0x5F79900", VA = "0x5F7A900")]
	public static explicit operator int(BigInteger value)
	{
		return default(int);
	}

	[Token(Token = "0x6000034")]
	[Address(RVA = "0x5F7AB50", Offset = "0x5F79B50", VA = "0x5F7AB50")]
	[CLSCompliant(false)]
	public static explicit operator uint(BigInteger value)
	{
		return default(uint);
	}

	[Token(Token = "0x6000035")]
	[Address(RVA = "0x5F7ABF0", Offset = "0x5F79BF0", VA = "0x5F7ABF0")]
	public static explicit operator long(BigInteger value)
	{
		return default(long);
	}

	[Token(Token = "0x6000036")]
	[Address(RVA = "0x5F7AC80", Offset = "0x5F79C80", VA = "0x5F7AC80")]
	[CLSCompliant(false)]
	public static explicit operator ulong(BigInteger value)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000037")]
	[Address(RVA = "0x5F7AD30", Offset = "0x5F79D30", VA = "0x5F7AD30")]
	public static explicit operator float(BigInteger value)
	{
		return default(float);
	}

	[Token(Token = "0x6000038")]
	[Address(RVA = "0x5F7AD90", Offset = "0x5F79D90", VA = "0x5F7AD90")]
	public static explicit operator double(BigInteger value)
	{
		return default(double);
	}

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x5F7B0B0", Offset = "0x5F7A0B0", VA = "0x5F7B0B0")]
	public static explicit operator decimal(BigInteger value)
	{
		return 0m;
	}

	[Token(Token = "0x600003A")]
	[Address(RVA = "0x5F7B1D0", Offset = "0x5F7A1D0", VA = "0x5F7B1D0")]
	public static BigInteger operator <<(BigInteger value, int shift)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x600003B")]
	[Address(RVA = "0x5F7B480", Offset = "0x5F7A480", VA = "0x5F7B480")]
	public static BigInteger operator >>(BigInteger value, int shift)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x600003C")]
	[Address(RVA = "0x5F7BBB0", Offset = "0x5F7ABB0", VA = "0x5F7BBB0")]
	public static BigInteger operator -(BigInteger value)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x600003D")]
	[Address(RVA = "0x5F7BBE0", Offset = "0x5F7ABE0", VA = "0x5F7BBE0")]
	public static BigInteger operator +(BigInteger left, BigInteger right)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x600003E")]
	[Address(RVA = "0x5F7BC70", Offset = "0x5F7AC70", VA = "0x5F7BC70")]
	public static BigInteger operator *(BigInteger left, BigInteger right)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x600003F")]
	[Address(RVA = "0x5F7C070", Offset = "0x5F7B070", VA = "0x5F7C070")]
	public static BigInteger operator /(BigInteger dividend, BigInteger divisor)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x6000040")]
	[Address(RVA = "0x5F7C420", Offset = "0x5F7B420", VA = "0x5F7C420")]
	public static BigInteger operator %(BigInteger dividend, BigInteger divisor)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x6000041")]
	[Address(RVA = "0x5F7C870", Offset = "0x5F7B870", VA = "0x5F7C870")]
	public static bool operator <=(BigInteger left, BigInteger right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x5F7C8E0", Offset = "0x5F7B8E0", VA = "0x5F7C8E0")]
	public static bool operator >=(BigInteger left, BigInteger right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000043")]
	[Address(RVA = "0x5F7C950", Offset = "0x5F7B950", VA = "0x5F7C950")]
	public static bool operator !=(BigInteger left, BigInteger right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x5F7CA50", Offset = "0x5F7BA50", VA = "0x5F7CA50")]
	public static bool operator <(BigInteger left, long right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x5F7CB30", Offset = "0x5F7BB30", VA = "0x5F7CB30")]
	public static bool operator <=(BigInteger left, long right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x5F7CC10", Offset = "0x5F7BC10", VA = "0x5F7CC10")]
	public static bool operator ==(BigInteger left, long right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x5F7CCC0", Offset = "0x5F7BCC0", VA = "0x5F7CCC0")]
	public static bool operator !=(BigInteger left, long right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x5F7CD70", Offset = "0x5F7BD70", VA = "0x5F7CD70")]
	public static bool operator <(long left, BigInteger right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x5F7CE50", Offset = "0x5F7BE50", VA = "0x5F7CE50")]
	public static bool operator <=(long left, BigInteger right)
	{
		return default(bool);
	}

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x5F7BB00", Offset = "0x5F7AB00", VA = "0x5F7BB00")]
	private static bool GetPartsForBitManipulation(ref BigInteger x, out uint[] xd, out int xl)
	{
		return default(bool);
	}

	[Token(Token = "0x600004B")]
	[Address(RVA = "0x5F78FC0", Offset = "0x5F77FC0", VA = "0x5F78FC0")]
	internal static int GetDiffLength(uint[] rgu1, uint[] rgu2, int cu)
	{
		return default(int);
	}
}
