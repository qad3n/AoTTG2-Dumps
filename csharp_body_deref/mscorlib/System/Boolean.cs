// ==================== AoTTG2 cross-reference ====================
// Type: System.Boolean
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Versioning;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x20000C2")]
public readonly struct Boolean : IComparable, IConvertible, IComparable<bool>, IEquatable<bool>
{
	[Token(Token = "0x40002A9")]
	[FieldOffset(Offset = "0x0")]
	private readonly bool m_value;

	[Token(Token = "0x40002AA")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string TrueString;

	[Token(Token = "0x40002AB")]
	[FieldOffset(Offset = "0x8")]
	public static readonly string FalseString;

	[Token(Token = "0x6000475")]
	[Address(RVA = "0x1A79880", Offset = "0x1A77E80", VA = "0x181A79880", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000476")]
	[Address(RVA = "0x1A7A030", Offset = "0x1A78630", VA = "0x181A7A030", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000477")]
	[Address(RVA = "0x1A7A080", Offset = "0x1A78680", VA = "0x181A7A080", Slot = "20")]
	public string ToString(IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6000478")]
	[Address(RVA = "0x1A79810", Offset = "0x1A77E10", VA = "0x181A79810", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000479")]
	[Address(RVA = "0x1A79870", Offset = "0x1A77E70", VA = "0x181A79870", Slot = "23")]
	[System.Runtime.Versioning.NonVersionable]
	public bool Equals(bool obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600047A")]
	[Address(RVA = "0x1A79740", Offset = "0x1A77D40", VA = "0x181A79740", Slot = "4")]
	public int CompareTo(object obj)
	{
		return default(int);
	}

	[Token(Token = "0x600047B")]
	[Address(RVA = "0x1A79720", Offset = "0x1A77D20", VA = "0x181A79720", Slot = "22")]
	public int CompareTo(bool value)
	{
		return default(int);
	}

	[Token(Token = "0x600047C")]
	[Address(RVA = "0x1A79930", Offset = "0x1A77F30", VA = "0x181A79930")]
	public static bool Parse(string value)
	{
		return default(bool);
	}

	[Token(Token = "0x600047D")]
	[Address(RVA = "0x1A79890", Offset = "0x1A77E90", VA = "0x181A79890")]
	public static bool Parse(ReadOnlySpan<char> value)
	{
		return default(bool);
	}

	[Token(Token = "0x600047E")]
	[Address(RVA = "0x1A7A6E0", Offset = "0x1A78CE0", VA = "0x181A7A6E0")]
	public static bool TryParse(string value, out bool result)
	{
		return default(bool);
	}

	[Token(Token = "0x600047F")]
	[Address(RVA = "0x1A7A240", Offset = "0x1A78840", VA = "0x181A7A240")]
	public static bool TryParse(ReadOnlySpan<char> value, out bool result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000480")]
	[Address(RVA = "0x1A7A0E0", Offset = "0x1A786E0", VA = "0x181A7A0E0")]
	private static ReadOnlySpan<char> TrimWhiteSpaceAndNull(ReadOnlySpan<char> value)
	{
		return default(ReadOnlySpan<char>);
	}

	[Token(Token = "0x6000481")]
	[Address(RVA = "0x565FB0", Offset = "0x5645B0", VA = "0x180565FB0", Slot = "5")]
	public TypeCode GetTypeCode()
	{
		return default(TypeCode);
	}

	[Token(Token = "0x6000482")]
	[Address(RVA = "0x1A79A80", Offset = "0x1A78080", VA = "0x181A79A80", Slot = "6")]
	private bool System_002EIConvertible_002EToBoolean(IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x6000483")]
	[Address(RVA = "0x1A79AE0", Offset = "0x1A780E0", VA = "0x181A79AE0", Slot = "7")]
	private char System_002EIConvertible_002EToChar(IFormatProvider provider)
	{
		return default(char);
	}

	[Token(Token = "0x6000484")]
	[Address(RVA = "0x1A79E00", Offset = "0x1A78400", VA = "0x181A79E00", Slot = "8")]
	private sbyte System_002EIConvertible_002EToSByte(IFormatProvider provider)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000485")]
	[Address(RVA = "0x1A79A90", Offset = "0x1A78090", VA = "0x181A79A90", Slot = "9")]
	private byte System_002EIConvertible_002EToByte(IFormatProvider provider)
	{
		return default(byte);
	}

	[Token(Token = "0x6000486")]
	[Address(RVA = "0x1A79D10", Offset = "0x1A78310", VA = "0x181A79D10", Slot = "10")]
	private short System_002EIConvertible_002EToInt16(IFormatProvider provider)
	{
		return default(short);
	}

	[Token(Token = "0x6000487")]
	[Address(RVA = "0x1A79F40", Offset = "0x1A78540", VA = "0x181A79F40", Slot = "11")]
	private ushort System_002EIConvertible_002EToUInt16(IFormatProvider provider)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000488")]
	[Address(RVA = "0x1A79D60", Offset = "0x1A78360", VA = "0x181A79D60", Slot = "12")]
	private int System_002EIConvertible_002EToInt32(IFormatProvider provider)
	{
		return default(int);
	}

	[Token(Token = "0x6000489")]
	[Address(RVA = "0x1A79F90", Offset = "0x1A78590", VA = "0x181A79F90", Slot = "13")]
	private uint System_002EIConvertible_002EToUInt32(IFormatProvider provider)
	{
		return default(uint);
	}

	[Token(Token = "0x600048A")]
	[Address(RVA = "0x1A79DB0", Offset = "0x1A783B0", VA = "0x181A79DB0", Slot = "14")]
	private long System_002EIConvertible_002EToInt64(IFormatProvider provider)
	{
		return default(long);
	}

	[Token(Token = "0x600048B")]
	[Address(RVA = "0x1A79FE0", Offset = "0x1A785E0", VA = "0x181A79FE0", Slot = "15")]
	private ulong System_002EIConvertible_002EToUInt64(IFormatProvider provider)
	{
		return default(ulong);
	}

	[Token(Token = "0x600048C")]
	[Address(RVA = "0x1A79E50", Offset = "0x1A78450", VA = "0x181A79E50", Slot = "16")]
	private float System_002EIConvertible_002EToSingle(IFormatProvider provider)
	{
		return default(float);
	}

	[Token(Token = "0x600048D")]
	[Address(RVA = "0x1A79CB0", Offset = "0x1A782B0", VA = "0x181A79CB0", Slot = "17")]
	private double System_002EIConvertible_002EToDouble(IFormatProvider provider)
	{
		return default(double);
	}

	[Token(Token = "0x600048E")]
	[Address(RVA = "0x1A79C00", Offset = "0x1A78200", VA = "0x181A79C00", Slot = "18")]
	private decimal System_002EIConvertible_002EToDecimal(IFormatProvider provider)
	{
		return 0m;
	}

	[Token(Token = "0x600048F")]
	[Address(RVA = "0x1A79B70", Offset = "0x1A78170", VA = "0x181A79B70", Slot = "19")]
	private DateTime System_002EIConvertible_002EToDateTime(IFormatProvider provider)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000490")]
	[Address(RVA = "0x1A79EB0", Offset = "0x1A784B0", VA = "0x181A79EB0", Slot = "21")]
	private object System_002EIConvertible_002EToType(Type type, IFormatProvider provider)
	{
		return null;
	}
}
