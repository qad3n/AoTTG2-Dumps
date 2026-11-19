// ==================== AoTTG2 cross-reference ====================
// Type: System.UInt16
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Globalization;
using System.Runtime.InteropServices;
using System.Runtime.Versioning;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x2000124")]
[CLSCompliant(false)]
public readonly struct UInt16 : IComparable, IConvertible, IFormattable, IComparable<ushort>, IEquatable<ushort>, System.ISpanFormattable
{
	[Token(Token = "0x40003DA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly ushort m_value;

	[Token(Token = "0x6000B54")]
	[Address(RVA = "0x54DB8C0", Offset = "0x54DA8C0", VA = "0x54DB8C0", Slot = "4")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000B55")]
	[Address(RVA = "0x54DB940", Offset = "0x54DA940", VA = "0x54DB940", Slot = "23")]
	public int CompareTo(ushort value)
	{
		return default(int);
	}

	[Token(Token = "0x6000B56")]
	[Address(RVA = "0x54DB950", Offset = "0x54DA950", VA = "0x54DB950", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B57")]
	[Address(RVA = "0x54DB980", Offset = "0x54DA980", VA = "0x54DB980", Slot = "24")]
	[System.Runtime.Versioning.NonVersionable]
	public bool Equals(ushort obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B58")]
	[Address(RVA = "0x54DB990", Offset = "0x54DA990", VA = "0x54DB990", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000B59")]
	[Address(RVA = "0x54DB9A0", Offset = "0x54DA9A0", VA = "0x54DB9A0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000B5A")]
	[Address(RVA = "0x54DBA20", Offset = "0x54DAA20", VA = "0x54DBA20", Slot = "20")]
	public string ToString(IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6000B5B")]
	[Address(RVA = "0x54DBAB0", Offset = "0x54DAAB0", VA = "0x54DBAB0")]
	public string ToString(string format)
	{
		return null;
	}

	[Token(Token = "0x6000B5C")]
	[Address(RVA = "0x54DBB70", Offset = "0x54DAB70", VA = "0x54DBB70", Slot = "22")]
	public string ToString(string format, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6000B5D")]
	[Address(RVA = "0x54DBC40", Offset = "0x54DAC40", VA = "0x54DBC40", Slot = "25")]
	public bool TryFormat(Span<char> destination, out int charsWritten, [Optional] ReadOnlySpan<char> format, [Optional] IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B5E")]
	[Address(RVA = "0x54DBCD0", Offset = "0x54DACD0", VA = "0x54DBCD0")]
	[CLSCompliant(false)]
	public static ushort Parse(string s, IFormatProvider provider)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000B5F")]
	[Address(RVA = "0x54DBED0", Offset = "0x54DAED0", VA = "0x54DBED0")]
	[CLSCompliant(false)]
	public static ushort Parse(string s, NumberStyles style, IFormatProvider provider)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000B60")]
	[Address(RVA = "0x54DBD60", Offset = "0x54DAD60", VA = "0x54DBD60")]
	private static ushort Parse(ReadOnlySpan<char> s, NumberStyles style, NumberFormatInfo info)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000B61")]
	[Address(RVA = "0x54DBF70", Offset = "0x54DAF70", VA = "0x54DBF70")]
	[CLSCompliant(false)]
	public static bool TryParse(string s, out ushort result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B62")]
	[Address(RVA = "0x54DC110", Offset = "0x54DB110", VA = "0x54DC110")]
	[CLSCompliant(false)]
	public static bool TryParse(string s, NumberStyles style, IFormatProvider provider, out ushort result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B63")]
	[Address(RVA = "0x54DC060", Offset = "0x54DB060", VA = "0x54DC060")]
	private static bool TryParse(ReadOnlySpan<char> s, NumberStyles style, NumberFormatInfo info, out ushort result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B64")]
	[Address(RVA = "0x54DC200", Offset = "0x54DB200", VA = "0x54DC200", Slot = "5")]
	public TypeCode GetTypeCode()
	{
		return default(TypeCode);
	}

	[Token(Token = "0x6000B65")]
	[Address(RVA = "0x54DC210", Offset = "0x54DB210", VA = "0x54DC210", Slot = "6")]
	private bool System_002EIConvertible_002EToBoolean(IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B66")]
	[Address(RVA = "0x54DC270", Offset = "0x54DB270", VA = "0x54DC270", Slot = "7")]
	private char System_002EIConvertible_002EToChar(IFormatProvider provider)
	{
		return default(char);
	}

	[Token(Token = "0x6000B67")]
	[Address(RVA = "0x54DC2D0", Offset = "0x54DB2D0", VA = "0x54DC2D0", Slot = "8")]
	private sbyte System_002EIConvertible_002EToSByte(IFormatProvider provider)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000B68")]
	[Address(RVA = "0x54DC330", Offset = "0x54DB330", VA = "0x54DC330", Slot = "9")]
	private byte System_002EIConvertible_002EToByte(IFormatProvider provider)
	{
		return default(byte);
	}

	[Token(Token = "0x6000B69")]
	[Address(RVA = "0x54DC390", Offset = "0x54DB390", VA = "0x54DC390", Slot = "10")]
	private short System_002EIConvertible_002EToInt16(IFormatProvider provider)
	{
		return default(short);
	}

	[Token(Token = "0x6000B6A")]
	[Address(RVA = "0x54DC3F0", Offset = "0x54DB3F0", VA = "0x54DC3F0", Slot = "11")]
	private ushort System_002EIConvertible_002EToUInt16(IFormatProvider provider)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000B6B")]
	[Address(RVA = "0x54DC400", Offset = "0x54DB400", VA = "0x54DC400", Slot = "12")]
	private int System_002EIConvertible_002EToInt32(IFormatProvider provider)
	{
		return default(int);
	}

	[Token(Token = "0x6000B6C")]
	[Address(RVA = "0x54DC460", Offset = "0x54DB460", VA = "0x54DC460", Slot = "13")]
	private uint System_002EIConvertible_002EToUInt32(IFormatProvider provider)
	{
		return default(uint);
	}

	[Token(Token = "0x6000B6D")]
	[Address(RVA = "0x54DC4C0", Offset = "0x54DB4C0", VA = "0x54DC4C0", Slot = "14")]
	private long System_002EIConvertible_002EToInt64(IFormatProvider provider)
	{
		return default(long);
	}

	[Token(Token = "0x6000B6E")]
	[Address(RVA = "0x54DC520", Offset = "0x54DB520", VA = "0x54DC520", Slot = "15")]
	private ulong System_002EIConvertible_002EToUInt64(IFormatProvider provider)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000B6F")]
	[Address(RVA = "0x54DC580", Offset = "0x54DB580", VA = "0x54DC580", Slot = "16")]
	private float System_002EIConvertible_002EToSingle(IFormatProvider provider)
	{
		return default(float);
	}

	[Token(Token = "0x6000B70")]
	[Address(RVA = "0x54DC5E0", Offset = "0x54DB5E0", VA = "0x54DC5E0", Slot = "17")]
	private double System_002EIConvertible_002EToDouble(IFormatProvider provider)
	{
		return default(double);
	}

	[Token(Token = "0x6000B71")]
	[Address(RVA = "0x54DC640", Offset = "0x54DB640", VA = "0x54DC640", Slot = "18")]
	private decimal System_002EIConvertible_002EToDecimal(IFormatProvider provider)
	{
		return 0m;
	}

	[Token(Token = "0x6000B72")]
	[Address(RVA = "0x54DC6A0", Offset = "0x54DB6A0", VA = "0x54DC6A0", Slot = "19")]
	private DateTime System_002EIConvertible_002EToDateTime(IFormatProvider provider)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000B73")]
	[Address(RVA = "0x54DC720", Offset = "0x54DB720", VA = "0x54DC720", Slot = "21")]
	private object System_002EIConvertible_002EToType(Type type, IFormatProvider provider)
	{
		return null;
	}
}
