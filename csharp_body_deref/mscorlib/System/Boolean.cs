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
	internal const int True = 1;

	[Token(Token = "0x4000202")]
	internal const int False = 0;

	[Token(Token = "0x4000203")]
	internal const string TrueLiteral = "True";

	[Token(Token = "0x4000204")]
	internal const string FalseLiteral = "False";

	[Token(Token = "0x4000205")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string TrueString;

	[Token(Token = "0x4000206")]
	[FieldOffset(Offset = "0x8")]
	public static readonly string FalseString;

	[Token(Token = "0x6000442")]
	[Address(RVA = "0x4F2F810", Offset = "0x4F2F810", VA = "0x4F2F810", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000443")]
	[Address(RVA = "0x4F2F820", Offset = "0x4F2F820", VA = "0x4F2F820", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000444")]
	[Address(RVA = "0x4F2F870", Offset = "0x4F2F870", VA = "0x4F2F870", Slot = "20")]
	public string ToString(IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6000445")]
	[Address(RVA = "0x4F2F8E0", Offset = "0x4F2F8E0", VA = "0x4F2F8E0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000446")]
	[Address(RVA = "0x4F2F910", Offset = "0x4F2F910", VA = "0x4F2F910", Slot = "23")]
	[System.Runtime.Versioning.NonVersionable]
	public bool Equals(bool obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000447")]
	[Address(RVA = "0x4F2F920", Offset = "0x4F2F920", VA = "0x4F2F920", Slot = "4")]
	public int CompareTo(object obj)
	{
		return default(int);
	}

	[Token(Token = "0x6000448")]
	[Address(RVA = "0x4F2F9C0", Offset = "0x4F2F9C0", VA = "0x4F2F9C0", Slot = "22")]
	public int CompareTo(bool value)
	{
		return default(int);
	}

	[Token(Token = "0x6000449")]
	[Address(RVA = "0x4F2F9E0", Offset = "0x4F2F9E0", VA = "0x4F2F9E0")]
	public static bool Parse(string value)
	{
		return default(bool);
	}

	[Token(Token = "0x600044A")]
	[Address(RVA = "0x4F2FA90", Offset = "0x4F2FA90", VA = "0x4F2FA90")]
	public static bool Parse(ReadOnlySpan<char> value)
	{
		return default(bool);
	}

	[Token(Token = "0x600044B")]
	[Address(RVA = "0x4F2FE80", Offset = "0x4F2FE80", VA = "0x4F2FE80")]
	public static bool TryParse(string value, out bool result)
	{
		return default(bool);
	}

	[Token(Token = "0x600044C")]
	[Address(RVA = "0x4F2FB20", Offset = "0x4F2FB20", VA = "0x4F2FB20")]
	public static bool TryParse(ReadOnlySpan<char> value, out bool result)
	{
		return default(bool);
	}

	[Token(Token = "0x600044D")]
	[Address(RVA = "0x4F2FF00", Offset = "0x4F2FF00", VA = "0x4F2FF00")]
	private static ReadOnlySpan<char> TrimWhiteSpaceAndNull(ReadOnlySpan<char> value)
	{
		return default(ReadOnlySpan<char>);
	}

	[Token(Token = "0x600044E")]
	[Address(RVA = "0x4F30200", Offset = "0x4F30200", VA = "0x4F30200", Slot = "5")]
	public TypeCode GetTypeCode()
	{
		return default(TypeCode);
	}

	[Token(Token = "0x600044F")]
	[Address(RVA = "0x4F30210", Offset = "0x4F30210", VA = "0x4F30210", Slot = "6")]
	private bool System_002EIConvertible_002EToBoolean(IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x6000450")]
	[Address(RVA = "0x4F30220", Offset = "0x4F30220", VA = "0x4F30220", Slot = "7")]
	private char System_002EIConvertible_002EToChar(IFormatProvider provider)
	{
		return default(char);
	}

	[Token(Token = "0x6000451")]
	[Address(RVA = "0x4F302A0", Offset = "0x4F302A0", VA = "0x4F302A0", Slot = "8")]
	private sbyte System_002EIConvertible_002EToSByte(IFormatProvider provider)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000452")]
	[Address(RVA = "0x4F30300", Offset = "0x4F30300", VA = "0x4F30300", Slot = "9")]
	private byte System_002EIConvertible_002EToByte(IFormatProvider provider)
	{
		return default(byte);
	}

	[Token(Token = "0x6000453")]
	[Address(RVA = "0x4F30360", Offset = "0x4F30360", VA = "0x4F30360", Slot = "10")]
	private short System_002EIConvertible_002EToInt16(IFormatProvider provider)
	{
		return default(short);
	}

	[Token(Token = "0x6000454")]
	[Address(RVA = "0x4F303C0", Offset = "0x4F303C0", VA = "0x4F303C0", Slot = "11")]
	private ushort System_002EIConvertible_002EToUInt16(IFormatProvider provider)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000455")]
	[Address(RVA = "0x4F30420", Offset = "0x4F30420", VA = "0x4F30420", Slot = "12")]
	private int System_002EIConvertible_002EToInt32(IFormatProvider provider)
	{
		return default(int);
	}

	[Token(Token = "0x6000456")]
	[Address(RVA = "0x4F30480", Offset = "0x4F30480", VA = "0x4F30480", Slot = "13")]
	private uint System_002EIConvertible_002EToUInt32(IFormatProvider provider)
	{
		return default(uint);
	}

	[Token(Token = "0x6000457")]
	[Address(RVA = "0x4F304E0", Offset = "0x4F304E0", VA = "0x4F304E0", Slot = "14")]
	private long System_002EIConvertible_002EToInt64(IFormatProvider provider)
	{
		return default(long);
	}

	[Token(Token = "0x6000458")]
	[Address(RVA = "0x4F30540", Offset = "0x4F30540", VA = "0x4F30540", Slot = "15")]
	private ulong System_002EIConvertible_002EToUInt64(IFormatProvider provider)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000459")]
	[Address(RVA = "0x4F305A0", Offset = "0x4F305A0", VA = "0x4F305A0", Slot = "16")]
	private float System_002EIConvertible_002EToSingle(IFormatProvider provider)
	{
		return default(float);
	}

	[Token(Token = "0x600045A")]
	[Address(RVA = "0x4F30620", Offset = "0x4F30620", VA = "0x4F30620", Slot = "17")]
	private double System_002EIConvertible_002EToDouble(IFormatProvider provider)
	{
		return default(double);
	}

	[Token(Token = "0x600045B")]
	[Address(RVA = "0x4F306A0", Offset = "0x4F306A0", VA = "0x4F306A0", Slot = "18")]
	private decimal System_002EIConvertible_002EToDecimal(IFormatProvider provider)
	{
		return default(decimal);
	}

	[Token(Token = "0x600045C")]
	[Address(RVA = "0x4F30790", Offset = "0x4F30790", VA = "0x4F30790", Slot = "19")]
	private DateTime System_002EIConvertible_002EToDateTime(IFormatProvider provider)
	{
		return default(DateTime);
	}

	[Token(Token = "0x600045D")]
	[Address(RVA = "0x4F30810", Offset = "0x4F30810", VA = "0x4F30810", Slot = "21")]
	private object System_002EIConvertible_002EToType(Type type, IFormatProvider provider)
	{
		return null;
	}
}
