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
		[Address(RVA = "0x4665E70", Offset = "0x4665E70", VA = "0x4665E70")]
		get
		{
			return default(BigInteger);
		}
	}

	[Token(Token = "0x17000002")]
	public static BigInteger MinusOne
	{
		[Token(Token = "0x600000E")]
		[Address(RVA = "0x4665EC0", Offset = "0x4665EC0", VA = "0x4665EC0")]
		get
		{
			return default(BigInteger);
		}
	}

	[Token(Token = "0x17000003")]
	public bool IsZero
	{
		[Token(Token = "0x600000F")]
		[Address(RVA = "0x4665F10", Offset = "0x4665F10", VA = "0x4665F10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000004")]
	public bool IsEven
	{
		[Token(Token = "0x6000010")]
		[Address(RVA = "0x4665F20", Offset = "0x4665F20", VA = "0x4665F20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000005")]
	public int Sign
	{
		[Token(Token = "0x6000011")]
		[Address(RVA = "0x4665F50", Offset = "0x4665F50", VA = "0x4665F50")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000002")]
	[Address(RVA = "0x4664A20", Offset = "0x4664A20", VA = "0x4664A20")]
	public BigInteger(int value)
	{
	}

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x4664AA0", Offset = "0x4664AA0", VA = "0x4664AA0")]
	[CLSCompliant(false)]
	public BigInteger(uint value)
	{
	}

	[Token(Token = "0x6000004")]
	[Address(RVA = "0x4664B40", Offset = "0x4664B40", VA = "0x4664B40")]
	public BigInteger(long value)
	{
	}

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x4664C80", Offset = "0x4664C80", VA = "0x4664C80")]
	[CLSCompliant(false)]
	public BigInteger(ulong value)
	{
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x4664D70", Offset = "0x4664D70", VA = "0x4664D70")]
	public BigInteger(float value)
	{
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x4664DE0", Offset = "0x4664DE0", VA = "0x4664DE0")]
	public BigInteger(double value)
	{
	}

	[Token(Token = "0x6000008")]
	[Address(RVA = "0x46651B0", Offset = "0x46651B0", VA = "0x46651B0")]
	public BigInteger(decimal value)
	{
	}

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x4665380", Offset = "0x4665380", VA = "0x4665380")]
	[CLSCompliant(false)]
	public BigInteger(byte[] value)
	{
	}

	[Token(Token = "0x600000A")]
	[Address(RVA = "0x4665440", Offset = "0x4665440", VA = "0x4665440")]
	public BigInteger(ReadOnlySpan<byte> value, bool isUnsigned = false, bool isBigEndian = false)
	{
	}

	[Token(Token = "0x600000B")]
	[Address(RVA = "0x4665C70", Offset = "0x4665C70", VA = "0x4665C70")]
	internal BigInteger(int n, uint[] rgu)
	{
	}

	[Token(Token = "0x600000C")]
	[Address(RVA = "0x4665C90", Offset = "0x4665C90", VA = "0x4665C90")]
	internal BigInteger(uint[] value, bool negative)
	{
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x4665F60", Offset = "0x4665F60", VA = "0x4665F60")]
	public static BigInteger Parse(string value, IFormatProvider provider)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x4665FD0", Offset = "0x4665FD0", VA = "0x4665FD0")]
	public static BigInteger Parse(string value, NumberStyles style, IFormatProvider provider)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x46660A0", Offset = "0x46660A0", VA = "0x46660A0")]
	public static BigInteger ModPow(BigInteger value, BigInteger exponent, BigInteger modulus)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x4666CA0", Offset = "0x4666CA0", VA = "0x4666CA0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x4666CF0", Offset = "0x4666CF0", VA = "0x4666CF0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x4666E40", Offset = "0x4666E40", VA = "0x4666E40")]
	public bool Equals(long other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x4666D80", Offset = "0x4666D80", VA = "0x4666D80", Slot = "7")]
	public bool Equals(BigInteger other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x4666F10", Offset = "0x4666F10", VA = "0x4666F10")]
	public int CompareTo(long other)
	{
		return default(int);
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x4666FA0", Offset = "0x4666FA0", VA = "0x4666FA0", Slot = "6")]
	public int CompareTo(BigInteger other)
	{
		return default(int);
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x46670A0", Offset = "0x46670A0", VA = "0x46670A0", Slot = "5")]
	public int CompareTo(object obj)
	{
		return default(int);
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x4667190", Offset = "0x4667190", VA = "0x4667190")]
	public byte[] ToByteArray()
	{
		return null;
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x4667270", Offset = "0x4667270", VA = "0x4667270")]
	public byte[] ToByteArray(bool isUnsigned = false, bool isBigEndian = false)
	{
		return null;
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x46678C0", Offset = "0x46678C0", VA = "0x46678C0")]
	public bool TryWriteBytes(Span<byte> destination, out int bytesWritten, bool isUnsigned = false, bool isBigEndian = false)
	{
		return default(bool);
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x4667960", Offset = "0x4667960", VA = "0x4667960")]
	internal bool TryWriteOrCountBytes(Span<byte> destination, out int bytesWritten, bool isUnsigned = false, bool isBigEndian = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x46672F0", Offset = "0x46672F0", VA = "0x46672F0")]
	private byte[] TryGetBytes(GetBytesMode mode, Span<byte> destination, bool isUnsigned, bool isBigEndian, ref int bytesWritten)
	{
		return null;
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x46679F0", Offset = "0x46679F0", VA = "0x46679F0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x4667B30", Offset = "0x4667B30", VA = "0x4667B30")]
	public string ToString(IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6000023")]
	[Address(RVA = "0x4667BC0", Offset = "0x4667BC0", VA = "0x4667BC0", Slot = "4")]
	public string ToString(string format, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6000024")]
	[Address(RVA = "0x4667C80", Offset = "0x4667C80", VA = "0x4667C80")]
	private static BigInteger Add(uint[] leftBits, int leftSign, uint[] rightBits, int rightSign)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x6000025")]
	[Address(RVA = "0x46680E0", Offset = "0x46680E0", VA = "0x46680E0")]
	public static BigInteger operator -(BigInteger left, BigInteger right)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x4668170", Offset = "0x4668170", VA = "0x4668170")]
	private static BigInteger Subtract(uint[] leftBits, int leftSign, uint[] rightBits, int rightSign)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x6000027")]
	[Address(RVA = "0x46686A0", Offset = "0x46686A0", VA = "0x46686A0")]
	public static implicit operator BigInteger(byte value)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x46686F0", Offset = "0x46686F0", VA = "0x46686F0")]
	[CLSCompliant(false)]
	public static implicit operator BigInteger(sbyte value)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x6000029")]
	[Address(RVA = "0x4668740", Offset = "0x4668740", VA = "0x4668740")]
	public static implicit operator BigInteger(short value)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x4668790", Offset = "0x4668790", VA = "0x4668790")]
	[CLSCompliant(false)]
	public static implicit operator BigInteger(ushort value)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x600002B")]
	[Address(RVA = "0x46687E0", Offset = "0x46687E0", VA = "0x46687E0")]
	public static implicit operator BigInteger(int value)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x4668870", Offset = "0x4668870", VA = "0x4668870")]
	[CLSCompliant(false)]
	public static implicit operator BigInteger(uint value)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x600002D")]
	[Address(RVA = "0x4666940", Offset = "0x4666940", VA = "0x4666940")]
	public static implicit operator BigInteger(long value)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x600002E")]
	[Address(RVA = "0x4665180", Offset = "0x4665180", VA = "0x4665180")]
	[CLSCompliant(false)]
	public static implicit operator BigInteger(ulong value)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x600002F")]
	[Address(RVA = "0x46688A0", Offset = "0x46688A0", VA = "0x46688A0")]
	public static explicit operator byte(BigInteger value)
	{
		return default(byte);
	}

	[Token(Token = "0x6000030")]
	[Address(RVA = "0x46689E0", Offset = "0x46689E0", VA = "0x46689E0")]
	[CLSCompliant(false)]
	public static explicit operator sbyte(BigInteger value)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000031")]
	[Address(RVA = "0x4668A60", Offset = "0x4668A60", VA = "0x4668A60")]
	public static explicit operator short(BigInteger value)
	{
		return default(short);
	}

	[Token(Token = "0x6000032")]
	[Address(RVA = "0x4668AE0", Offset = "0x4668AE0", VA = "0x4668AE0")]
	[CLSCompliant(false)]
	public static explicit operator ushort(BigInteger value)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000033")]
	[Address(RVA = "0x4668920", Offset = "0x4668920", VA = "0x4668920")]
	public static explicit operator int(BigInteger value)
	{
		return default(int);
	}

	[Token(Token = "0x6000034")]
	[Address(RVA = "0x4668B60", Offset = "0x4668B60", VA = "0x4668B60")]
	[CLSCompliant(false)]
	public static explicit operator uint(BigInteger value)
	{
		return default(uint);
	}

	[Token(Token = "0x6000035")]
	[Address(RVA = "0x4668C00", Offset = "0x4668C00", VA = "0x4668C00")]
	public static explicit operator long(BigInteger value)
	{
		return default(long);
	}

	[Token(Token = "0x6000036")]
	[Address(RVA = "0x4668CA0", Offset = "0x4668CA0", VA = "0x4668CA0")]
	[CLSCompliant(false)]
	public static explicit operator ulong(BigInteger value)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000037")]
	[Address(RVA = "0x4668D50", Offset = "0x4668D50", VA = "0x4668D50")]
	public static explicit operator float(BigInteger value)
	{
		return default(float);
	}

	[Token(Token = "0x6000038")]
	[Address(RVA = "0x4668DB0", Offset = "0x4668DB0", VA = "0x4668DB0")]
	public static explicit operator double(BigInteger value)
	{
		return default(double);
	}

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x4669150", Offset = "0x4669150", VA = "0x4669150")]
	public static explicit operator decimal(BigInteger value)
	{
		return default(decimal);
	}

	[Token(Token = "0x600003A")]
	[Address(RVA = "0x4669280", Offset = "0x4669280", VA = "0x4669280")]
	public static BigInteger operator <<(BigInteger value, int shift)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x600003B")]
	[Address(RVA = "0x4669540", Offset = "0x4669540", VA = "0x4669540")]
	public static BigInteger operator >>(BigInteger value, int shift)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x600003C")]
	[Address(RVA = "0x4669B60", Offset = "0x4669B60", VA = "0x4669B60")]
	public static BigInteger operator -(BigInteger value)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x600003D")]
	[Address(RVA = "0x4669B90", Offset = "0x4669B90", VA = "0x4669B90")]
	public static BigInteger operator +(BigInteger left, BigInteger right)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x600003E")]
	[Address(RVA = "0x4669C20", Offset = "0x4669C20", VA = "0x4669C20")]
	public static BigInteger operator *(BigInteger left, BigInteger right)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x600003F")]
	[Address(RVA = "0x466A040", Offset = "0x466A040", VA = "0x466A040")]
	public static BigInteger operator /(BigInteger dividend, BigInteger divisor)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x6000040")]
	[Address(RVA = "0x466A3E0", Offset = "0x466A3E0", VA = "0x466A3E0")]
	public static BigInteger operator %(BigInteger dividend, BigInteger divisor)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x6000041")]
	[Address(RVA = "0x466A740", Offset = "0x466A740", VA = "0x466A740")]
	public static bool operator <=(BigInteger left, BigInteger right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x466A7B0", Offset = "0x466A7B0", VA = "0x466A7B0")]
	public static bool operator >=(BigInteger left, BigInteger right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000043")]
	[Address(RVA = "0x466A820", Offset = "0x466A820", VA = "0x466A820")]
	public static bool operator !=(BigInteger left, BigInteger right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x466A880", Offset = "0x466A880", VA = "0x466A880")]
	public static bool operator <(BigInteger left, long right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x466A950", Offset = "0x466A950", VA = "0x466A950")]
	public static bool operator <=(BigInteger left, long right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x466AA20", Offset = "0x466AA20", VA = "0x466AA20")]
	public static bool operator ==(BigInteger left, long right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x466AAD0", Offset = "0x466AAD0", VA = "0x466AAD0")]
	public static bool operator !=(BigInteger left, long right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x466AB80", Offset = "0x466AB80", VA = "0x466AB80")]
	public static bool operator <(long left, BigInteger right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x466AC50", Offset = "0x466AC50", VA = "0x466AC50")]
	public static bool operator <=(long left, BigInteger right)
	{
		return default(bool);
	}

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x4669AA0", Offset = "0x4669AA0", VA = "0x4669AA0")]
	private static bool GetPartsForBitManipulation(ref BigInteger x, out uint[] xd, out int xl)
	{
		return default(bool);
	}

	[Token(Token = "0x600004B")]
	[Address(RVA = "0x4666EB0", Offset = "0x4666EB0", VA = "0x4666EB0")]
	internal static int GetDiffLength(uint[] rgu1, uint[] rgu2, int cu)
	{
		return default(int);
	}
}
