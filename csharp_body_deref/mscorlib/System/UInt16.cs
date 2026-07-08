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
	[Token(Token = "0x4000419")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly ushort m_value;

	[Token(Token = "0x400041A")]
	public const ushort MaxValue = 65535;

	[Token(Token = "0x400041B")]
	public const ushort MinValue = 0;

	[Token(Token = "0x6000B31")]
	[Address(RVA = "0x4FF1D40", Offset = "0x4FF1D40", VA = "0x4FF1D40", Slot = "4")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000B32")]
	[Address(RVA = "0x4FF1DC0", Offset = "0x4FF1DC0", VA = "0x4FF1DC0", Slot = "23")]
	public int CompareTo(ushort value)
	{
		return default(int);
	}

	[Token(Token = "0x6000B33")]
	[Address(RVA = "0x4FF1DD0", Offset = "0x4FF1DD0", VA = "0x4FF1DD0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B34")]
	[Address(RVA = "0x4FF1E00", Offset = "0x4FF1E00", VA = "0x4FF1E00", Slot = "24")]
	[System.Runtime.Versioning.NonVersionable]
	public bool Equals(ushort obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B35")]
	[Address(RVA = "0x4FF1E10", Offset = "0x4FF1E10", VA = "0x4FF1E10", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000B36")]
	[Address(RVA = "0x4FF1E20", Offset = "0x4FF1E20", VA = "0x4FF1E20", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000B37")]
	[Address(RVA = "0x4FF1EA0", Offset = "0x4FF1EA0", VA = "0x4FF1EA0", Slot = "20")]
	public string ToString(IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6000B38")]
	[Address(RVA = "0x4FF1F30", Offset = "0x4FF1F30", VA = "0x4FF1F30")]
	public string ToString(string format)
	{
		return null;
	}

	[Token(Token = "0x6000B39")]
	[Address(RVA = "0x4FF1FF0", Offset = "0x4FF1FF0", VA = "0x4FF1FF0", Slot = "22")]
	public string ToString(string format, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6000B3A")]
	[Address(RVA = "0x4FF20C0", Offset = "0x4FF20C0", VA = "0x4FF20C0", Slot = "25")]
	public bool TryFormat(Span<char> destination, out int charsWritten, [Optional] ReadOnlySpan<char> format, [Optional] IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B3B")]
	[Address(RVA = "0x4FF2150", Offset = "0x4FF2150", VA = "0x4FF2150")]
	[CLSCompliant(false)]
	public static ushort Parse(string s, IFormatProvider provider)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000B3C")]
	[Address(RVA = "0x4FF2340", Offset = "0x4FF2340", VA = "0x4FF2340")]
	[CLSCompliant(false)]
	public static ushort Parse(string s, NumberStyles style, IFormatProvider provider)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000B3D")]
	[Address(RVA = "0x4FF21C0", Offset = "0x4FF21C0", VA = "0x4FF21C0")]
	private static ushort Parse(ReadOnlySpan<char> s, NumberStyles style, NumberFormatInfo info)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000B3E")]
	[Address(RVA = "0x4FF23C0", Offset = "0x4FF23C0", VA = "0x4FF23C0")]
	[CLSCompliant(false)]
	public static bool TryParse(string s, out ushort result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B3F")]
	[Address(RVA = "0x4FF2560", Offset = "0x4FF2560", VA = "0x4FF2560")]
	[CLSCompliant(false)]
	public static bool TryParse(string s, NumberStyles style, IFormatProvider provider, out ushort result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B40")]
	[Address(RVA = "0x4FF24B0", Offset = "0x4FF24B0", VA = "0x4FF24B0")]
	private static bool TryParse(ReadOnlySpan<char> s, NumberStyles style, NumberFormatInfo info, out ushort result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B41")]
	[Address(RVA = "0x4FF2650", Offset = "0x4FF2650", VA = "0x4FF2650", Slot = "5")]
	public TypeCode GetTypeCode()
	{
		return default(TypeCode);
	}

	[Token(Token = "0x6000B42")]
	[Address(RVA = "0x4FF2660", Offset = "0x4FF2660", VA = "0x4FF2660", Slot = "6")]
	private bool System_002EIConvertible_002EToBoolean(IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B43")]
	[Address(RVA = "0x4FF26C0", Offset = "0x4FF26C0", VA = "0x4FF26C0", Slot = "7")]
	private char System_002EIConvertible_002EToChar(IFormatProvider provider)
	{
		return default(char);
	}

	[Token(Token = "0x6000B44")]
	[Address(RVA = "0x4FF2720", Offset = "0x4FF2720", VA = "0x4FF2720", Slot = "8")]
	private sbyte System_002EIConvertible_002EToSByte(IFormatProvider provider)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000B45")]
	[Address(RVA = "0x4FF2780", Offset = "0x4FF2780", VA = "0x4FF2780", Slot = "9")]
	private byte System_002EIConvertible_002EToByte(IFormatProvider provider)
	{
		return default(byte);
	}

	[Token(Token = "0x6000B46")]
	[Address(RVA = "0x4FF27E0", Offset = "0x4FF27E0", VA = "0x4FF27E0", Slot = "10")]
	private short System_002EIConvertible_002EToInt16(IFormatProvider provider)
	{
		return default(short);
	}

	[Token(Token = "0x6000B47")]
	[Address(RVA = "0x4FF2840", Offset = "0x4FF2840", VA = "0x4FF2840", Slot = "11")]
	private ushort System_002EIConvertible_002EToUInt16(IFormatProvider provider)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000B48")]
	[Address(RVA = "0x4FF2850", Offset = "0x4FF2850", VA = "0x4FF2850", Slot = "12")]
	private int System_002EIConvertible_002EToInt32(IFormatProvider provider)
	{
		return default(int);
	}

	[Token(Token = "0x6000B49")]
	[Address(RVA = "0x4FF28B0", Offset = "0x4FF28B0", VA = "0x4FF28B0", Slot = "13")]
	private uint System_002EIConvertible_002EToUInt32(IFormatProvider provider)
	{
		return default(uint);
	}

	[Token(Token = "0x6000B4A")]
	[Address(RVA = "0x4FF2910", Offset = "0x4FF2910", VA = "0x4FF2910", Slot = "14")]
	private long System_002EIConvertible_002EToInt64(IFormatProvider provider)
	{
		return default(long);
	}

	[Token(Token = "0x6000B4B")]
	[Address(RVA = "0x4FF2970", Offset = "0x4FF2970", VA = "0x4FF2970", Slot = "15")]
	private ulong System_002EIConvertible_002EToUInt64(IFormatProvider provider)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000B4C")]
	[Address(RVA = "0x4FF29D0", Offset = "0x4FF29D0", VA = "0x4FF29D0", Slot = "16")]
	private float System_002EIConvertible_002EToSingle(IFormatProvider provider)
	{
		return default(float);
	}

	[Token(Token = "0x6000B4D")]
	[Address(RVA = "0x4FF2A30", Offset = "0x4FF2A30", VA = "0x4FF2A30", Slot = "17")]
	private double System_002EIConvertible_002EToDouble(IFormatProvider provider)
	{
		return default(double);
	}

	[Token(Token = "0x6000B4E")]
	[Address(RVA = "0x4FF2A90", Offset = "0x4FF2A90", VA = "0x4FF2A90", Slot = "18")]
	private decimal System_002EIConvertible_002EToDecimal(IFormatProvider provider)
	{
		return default(decimal);
	}

	[Token(Token = "0x6000B4F")]
	[Address(RVA = "0x4FF2AF0", Offset = "0x4FF2AF0", VA = "0x4FF2AF0", Slot = "19")]
	private DateTime System_002EIConvertible_002EToDateTime(IFormatProvider provider)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000B50")]
	[Address(RVA = "0x4FF2B70", Offset = "0x4FF2B70", VA = "0x4FF2B70", Slot = "21")]
	private object System_002EIConvertible_002EToType(Type type, IFormatProvider provider)
	{
		return null;
	}
}
