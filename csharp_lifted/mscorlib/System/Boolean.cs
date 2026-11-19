// ==================== AoTTG2 cross-reference ====================
// Type: System.Boolean
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Versioning;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x2000099")]
public readonly struct Boolean : IComparable, IConvertible, IComparable<bool>, IEquatable<bool>
{
	[Token(Token = "0x4000200")]
	[FieldOffset(Offset = "0x0")]
	private readonly bool m_value;

	[Token(Token = "0x4000201")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string TrueString;

	[Token(Token = "0x4000202")]
	[FieldOffset(Offset = "0x8")]
	public static readonly string FalseString;

	[Token(Token = "0x600044A")]
	[Address(RVA = "0x541B5A0", Offset = "0x541A5A0", VA = "0x541B5A0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600044B")]
	[Address(RVA = "0x541B5B0", Offset = "0x541A5B0", VA = "0x541B5B0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600044C")]
	[Address(RVA = "0x541B600", Offset = "0x541A600", VA = "0x541B600", Slot = "20")]
	public string ToString(IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x600044D")]
	[Address(RVA = "0x541B670", Offset = "0x541A670", VA = "0x541B670", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600044E")]
	[Address(RVA = "0x541B6A0", Offset = "0x541A6A0", VA = "0x541B6A0", Slot = "23")]
	[System.Runtime.Versioning.NonVersionable]
	public bool Equals(bool obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600044F")]
	[Address(RVA = "0x541B6B0", Offset = "0x541A6B0", VA = "0x541B6B0", Slot = "4")]
	public int CompareTo(object obj)
	{
		return default(int);
	}

	[Token(Token = "0x6000450")]
	[Address(RVA = "0x541B750", Offset = "0x541A750", VA = "0x541B750", Slot = "22")]
	public int CompareTo(bool value)
	{
		return default(int);
	}

	[Token(Token = "0x6000451")]
	[Address(RVA = "0x541B770", Offset = "0x541A770", VA = "0x541B770")]
	public static bool Parse(string value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000452")]
	[Address(RVA = "0x541B820", Offset = "0x541A820", VA = "0x541B820")]
	public static bool Parse(ReadOnlySpan<char> value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000453")]
	[Address(RVA = "0x541BBE0", Offset = "0x541ABE0", VA = "0x541BBE0")]
	public static bool TryParse(string value, out bool result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000454")]
	[Address(RVA = "0x541B8B0", Offset = "0x541A8B0", VA = "0x541B8B0")]
	public static bool TryParse(ReadOnlySpan<char> value, out bool result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000455")]
	[Address(RVA = "0x541BC60", Offset = "0x541AC60", VA = "0x541BC60")]
	private static ReadOnlySpan<char> TrimWhiteSpaceAndNull(ReadOnlySpan<char> value)
	{
		return default(ReadOnlySpan<char>);
	}

	[Token(Token = "0x6000456")]
	[Address(RVA = "0x541BF90", Offset = "0x541AF90", VA = "0x541BF90", Slot = "5")]
	public TypeCode GetTypeCode()
	{
		return default(TypeCode);
	}

	[Token(Token = "0x6000457")]
	[Address(RVA = "0x541BFA0", Offset = "0x541AFA0", VA = "0x541BFA0", Slot = "6")]
	private bool System_002EIConvertible_002EToBoolean(IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x6000458")]
	[Address(RVA = "0x541BFB0", Offset = "0x541AFB0", VA = "0x541BFB0", Slot = "7")]
	private char System_002EIConvertible_002EToChar(IFormatProvider provider)
	{
		return default(char);
	}

	[Token(Token = "0x6000459")]
	[Address(RVA = "0x541C030", Offset = "0x541B030", VA = "0x541C030", Slot = "8")]
	private sbyte System_002EIConvertible_002EToSByte(IFormatProvider provider)
	{
		return default(sbyte);
	}

	[Token(Token = "0x600045A")]
	[Address(RVA = "0x541C090", Offset = "0x541B090", VA = "0x541C090", Slot = "9")]
	private byte System_002EIConvertible_002EToByte(IFormatProvider provider)
	{
		return default(byte);
	}

	[Token(Token = "0x600045B")]
	[Address(RVA = "0x541C0F0", Offset = "0x541B0F0", VA = "0x541C0F0", Slot = "10")]
	private short System_002EIConvertible_002EToInt16(IFormatProvider provider)
	{
		return default(short);
	}

	[Token(Token = "0x600045C")]
	[Address(RVA = "0x541C150", Offset = "0x541B150", VA = "0x541C150", Slot = "11")]
	private ushort System_002EIConvertible_002EToUInt16(IFormatProvider provider)
	{
		return default(ushort);
	}

	[Token(Token = "0x600045D")]
	[Address(RVA = "0x541C1B0", Offset = "0x541B1B0", VA = "0x541C1B0", Slot = "12")]
	private int System_002EIConvertible_002EToInt32(IFormatProvider provider)
	{
		return default(int);
	}

	[Token(Token = "0x600045E")]
	[Address(RVA = "0x541C210", Offset = "0x541B210", VA = "0x541C210", Slot = "13")]
	private uint System_002EIConvertible_002EToUInt32(IFormatProvider provider)
	{
		return default(uint);
	}

	[Token(Token = "0x600045F")]
	[Address(RVA = "0x541C270", Offset = "0x541B270", VA = "0x541C270", Slot = "14")]
	private long System_002EIConvertible_002EToInt64(IFormatProvider provider)
	{
		return default(long);
	}

	[Token(Token = "0x6000460")]
	[Address(RVA = "0x541C2D0", Offset = "0x541B2D0", VA = "0x541C2D0", Slot = "15")]
	private ulong System_002EIConvertible_002EToUInt64(IFormatProvider provider)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000461")]
	[Address(RVA = "0x541C330", Offset = "0x541B330", VA = "0x541C330", Slot = "16")]
	private float System_002EIConvertible_002EToSingle(IFormatProvider provider)
	{
		return default(float);
	}

	[Token(Token = "0x6000462")]
	[Address(RVA = "0x541C3B0", Offset = "0x541B3B0", VA = "0x541C3B0", Slot = "17")]
	private double System_002EIConvertible_002EToDouble(IFormatProvider provider)
	{
		return default(double);
	}

	[Token(Token = "0x6000463")]
	[Address(RVA = "0x541C430", Offset = "0x541B430", VA = "0x541C430", Slot = "18")]
	private decimal System_002EIConvertible_002EToDecimal(IFormatProvider provider)
	{
		return 0m;
	}

	[Token(Token = "0x6000464")]
	[Address(RVA = "0x541C530", Offset = "0x541B530", VA = "0x541C530", Slot = "19")]
	private DateTime System_002EIConvertible_002EToDateTime(IFormatProvider provider)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000465")]
	[Address(RVA = "0x541C5B0", Offset = "0x541B5B0", VA = "0x541C5B0", Slot = "21")]
	private object System_002EIConvertible_002EToType(Type type, IFormatProvider provider)
	{
		return null;
	}
}
