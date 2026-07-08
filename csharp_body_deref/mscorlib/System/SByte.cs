using System.Globalization;
using System.Runtime.InteropServices;
using System.Runtime.Versioning;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x2000106")]
[CLSCompliant(false)]
public readonly struct SByte : IComparable, IConvertible, IFormattable, IComparable<sbyte>, IEquatable<sbyte>, System.ISpanFormattable
{
	[Token(Token = "0x40003BC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly sbyte m_value;

	[Token(Token = "0x6000993")]
	[Address(RVA = "0x4FE6380", Offset = "0x4FE6380", VA = "0x4FE6380", Slot = "4")]
	public int CompareTo(object obj)
	{
		return default(int);
	}

	[Token(Token = "0x6000994")]
	[Address(RVA = "0x4FE6400", Offset = "0x4FE6400", VA = "0x4FE6400", Slot = "23")]
	public int CompareTo(sbyte value)
	{
		return default(int);
	}

	[Token(Token = "0x6000995")]
	[Address(RVA = "0x4FE6410", Offset = "0x4FE6410", VA = "0x4FE6410", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000996")]
	[Address(RVA = "0x4FE6440", Offset = "0x4FE6440", VA = "0x4FE6440", Slot = "24")]
	[System.Runtime.Versioning.NonVersionable]
	public bool Equals(sbyte obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000997")]
	[Address(RVA = "0x4FE6450", Offset = "0x4FE6450", VA = "0x4FE6450", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000998")]
	[Address(RVA = "0x4FE6460", Offset = "0x4FE6460", VA = "0x4FE6460", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000999")]
	[Address(RVA = "0x4FE64E0", Offset = "0x4FE64E0", VA = "0x4FE64E0", Slot = "20")]
	public string ToString(IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x600099A")]
	[Address(RVA = "0x4FE6570", Offset = "0x4FE6570", VA = "0x4FE6570", Slot = "22")]
	public string ToString(string format, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x600099B")]
	[Address(RVA = "0x4FE66C0", Offset = "0x4FE66C0", VA = "0x4FE66C0", Slot = "25")]
	public bool TryFormat(Span<char> destination, out int charsWritten, [Optional] ReadOnlySpan<char> format, [Optional] IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x600099C")]
	[Address(RVA = "0x4FE67B0", Offset = "0x4FE67B0", VA = "0x4FE67B0")]
	[CLSCompliant(false)]
	public static sbyte Parse(string s, IFormatProvider provider)
	{
		return default(sbyte);
	}

	[Token(Token = "0x600099D")]
	[Address(RVA = "0x4FE69D0", Offset = "0x4FE69D0", VA = "0x4FE69D0")]
	[CLSCompliant(false)]
	public static sbyte Parse(string s, NumberStyles style, IFormatProvider provider)
	{
		return default(sbyte);
	}

	[Token(Token = "0x600099E")]
	[Address(RVA = "0x4FE6840", Offset = "0x4FE6840", VA = "0x4FE6840")]
	private static sbyte Parse(ReadOnlySpan<char> s, NumberStyles style, NumberFormatInfo info)
	{
		return default(sbyte);
	}

	[Token(Token = "0x600099F")]
	[Address(RVA = "0x4FE6A50", Offset = "0x4FE6A50", VA = "0x4FE6A50")]
	[CLSCompliant(false)]
	public static bool TryParse(string s, out sbyte result)
	{
		return default(bool);
	}

	[Token(Token = "0x60009A0")]
	[Address(RVA = "0x4FE6BE0", Offset = "0x4FE6BE0", VA = "0x4FE6BE0")]
	[CLSCompliant(false)]
	public static bool TryParse(string s, NumberStyles style, IFormatProvider provider, out sbyte result)
	{
		return default(bool);
	}

	[Token(Token = "0x60009A1")]
	[Address(RVA = "0x4FE6B30", Offset = "0x4FE6B30", VA = "0x4FE6B30")]
	private static bool TryParse(ReadOnlySpan<char> s, NumberStyles style, NumberFormatInfo info, out sbyte result)
	{
		return default(bool);
	}

	[Token(Token = "0x60009A2")]
	[Address(RVA = "0x4FE6CE0", Offset = "0x4FE6CE0", VA = "0x4FE6CE0", Slot = "5")]
	public TypeCode GetTypeCode()
	{
		return default(TypeCode);
	}

	[Token(Token = "0x60009A3")]
	[Address(RVA = "0x4FE6CF0", Offset = "0x4FE6CF0", VA = "0x4FE6CF0", Slot = "6")]
	private bool System_002EIConvertible_002EToBoolean(IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x60009A4")]
	[Address(RVA = "0x4FE6D40", Offset = "0x4FE6D40", VA = "0x4FE6D40", Slot = "7")]
	private char System_002EIConvertible_002EToChar(IFormatProvider provider)
	{
		return default(char);
	}

	[Token(Token = "0x60009A5")]
	[Address(RVA = "0x4FE6D90", Offset = "0x4FE6D90", VA = "0x4FE6D90", Slot = "8")]
	private sbyte System_002EIConvertible_002EToSByte(IFormatProvider provider)
	{
		return default(sbyte);
	}

	[Token(Token = "0x60009A6")]
	[Address(RVA = "0x4FE6DA0", Offset = "0x4FE6DA0", VA = "0x4FE6DA0", Slot = "9")]
	private byte System_002EIConvertible_002EToByte(IFormatProvider provider)
	{
		return default(byte);
	}

	[Token(Token = "0x60009A7")]
	[Address(RVA = "0x4FE6DF0", Offset = "0x4FE6DF0", VA = "0x4FE6DF0", Slot = "10")]
	private short System_002EIConvertible_002EToInt16(IFormatProvider provider)
	{
		return default(short);
	}

	[Token(Token = "0x60009A8")]
	[Address(RVA = "0x4FE6E40", Offset = "0x4FE6E40", VA = "0x4FE6E40", Slot = "11")]
	private ushort System_002EIConvertible_002EToUInt16(IFormatProvider provider)
	{
		return default(ushort);
	}

	[Token(Token = "0x60009A9")]
	[Address(RVA = "0x4FE6E90", Offset = "0x4FE6E90", VA = "0x4FE6E90", Slot = "12")]
	private int System_002EIConvertible_002EToInt32(IFormatProvider provider)
	{
		return default(int);
	}

	[Token(Token = "0x60009AA")]
	[Address(RVA = "0x4FE6EA0", Offset = "0x4FE6EA0", VA = "0x4FE6EA0", Slot = "13")]
	private uint System_002EIConvertible_002EToUInt32(IFormatProvider provider)
	{
		return default(uint);
	}

	[Token(Token = "0x60009AB")]
	[Address(RVA = "0x4FE6EF0", Offset = "0x4FE6EF0", VA = "0x4FE6EF0", Slot = "14")]
	private long System_002EIConvertible_002EToInt64(IFormatProvider provider)
	{
		return default(long);
	}

	[Token(Token = "0x60009AC")]
	[Address(RVA = "0x4FE6F40", Offset = "0x4FE6F40", VA = "0x4FE6F40", Slot = "15")]
	private ulong System_002EIConvertible_002EToUInt64(IFormatProvider provider)
	{
		return default(ulong);
	}

	[Token(Token = "0x60009AD")]
	[Address(RVA = "0x4FE6F90", Offset = "0x4FE6F90", VA = "0x4FE6F90", Slot = "16")]
	private float System_002EIConvertible_002EToSingle(IFormatProvider provider)
	{
		return default(float);
	}

	[Token(Token = "0x60009AE")]
	[Address(RVA = "0x4FE6FE0", Offset = "0x4FE6FE0", VA = "0x4FE6FE0", Slot = "17")]
	private double System_002EIConvertible_002EToDouble(IFormatProvider provider)
	{
		return default(double);
	}

	[Token(Token = "0x60009AF")]
	[Address(RVA = "0x4FE7030", Offset = "0x4FE7030", VA = "0x4FE7030", Slot = "18")]
	private decimal System_002EIConvertible_002EToDecimal(IFormatProvider provider)
	{
		return default(decimal);
	}

	[Token(Token = "0x60009B0")]
	[Address(RVA = "0x4FE7080", Offset = "0x4FE7080", VA = "0x4FE7080", Slot = "19")]
	private DateTime System_002EIConvertible_002EToDateTime(IFormatProvider provider)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60009B1")]
	[Address(RVA = "0x4FE7100", Offset = "0x4FE7100", VA = "0x4FE7100", Slot = "21")]
	private object System_002EIConvertible_002EToType(Type type, IFormatProvider provider)
	{
		return null;
	}
}
