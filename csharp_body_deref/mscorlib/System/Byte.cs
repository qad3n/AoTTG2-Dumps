using System.Globalization;
using System.Runtime.InteropServices;
using System.Runtime.Versioning;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x200009A")]
public readonly struct Byte : IComparable, IConvertible, IFormattable, IComparable<byte>, IEquatable<byte>, System.ISpanFormattable
{
	[Token(Token = "0x4000207")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly byte m_value;

	[Token(Token = "0x4000208")]
	public const byte MaxValue = 255;

	[Token(Token = "0x4000209")]
	public const byte MinValue = 0;

	[Token(Token = "0x600045F")]
	[Address(RVA = "0x4F31740", Offset = "0x4F31740", VA = "0x4F31740", Slot = "4")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000460")]
	[Address(RVA = "0x4F317C0", Offset = "0x4F317C0", VA = "0x4F317C0", Slot = "23")]
	public int CompareTo(byte value)
	{
		return default(int);
	}

	[Token(Token = "0x6000461")]
	[Address(RVA = "0x4F317D0", Offset = "0x4F317D0", VA = "0x4F317D0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000462")]
	[Address(RVA = "0x4F31800", Offset = "0x4F31800", VA = "0x4F31800", Slot = "24")]
	[System.Runtime.Versioning.NonVersionable]
	public bool Equals(byte obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000463")]
	[Address(RVA = "0x4F31810", Offset = "0x4F31810", VA = "0x4F31810", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000464")]
	[Address(RVA = "0x4F31820", Offset = "0x4F31820", VA = "0x4F31820")]
	public static byte Parse(string s, IFormatProvider provider)
	{
		return default(byte);
	}

	[Token(Token = "0x6000465")]
	[Address(RVA = "0x4F31A20", Offset = "0x4F31A20", VA = "0x4F31A20")]
	public static byte Parse(string s, NumberStyles style, IFormatProvider provider)
	{
		return default(byte);
	}

	[Token(Token = "0x6000466")]
	[Address(RVA = "0x4F318A0", Offset = "0x4F318A0", VA = "0x4F318A0")]
	private static byte Parse(ReadOnlySpan<char> s, NumberStyles style, NumberFormatInfo info)
	{
		return default(byte);
	}

	[Token(Token = "0x6000467")]
	[Address(RVA = "0x4F31AC0", Offset = "0x4F31AC0", VA = "0x4F31AC0")]
	public static bool TryParse(string s, out byte result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000468")]
	[Address(RVA = "0x4F31C40", Offset = "0x4F31C40", VA = "0x4F31C40")]
	public static bool TryParse(string s, NumberStyles style, IFormatProvider provider, out byte result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000469")]
	[Address(RVA = "0x4F31BA0", Offset = "0x4F31BA0", VA = "0x4F31BA0")]
	private static bool TryParse(ReadOnlySpan<char> s, NumberStyles style, NumberFormatInfo info, out byte result)
	{
		return default(bool);
	}

	[Token(Token = "0x600046A")]
	[Address(RVA = "0x4F31D30", Offset = "0x4F31D30", VA = "0x4F31D30", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600046B")]
	[Address(RVA = "0x4F31DB0", Offset = "0x4F31DB0", VA = "0x4F31DB0")]
	public string ToString(string format)
	{
		return null;
	}

	[Token(Token = "0x600046C")]
	[Address(RVA = "0x4F31E70", Offset = "0x4F31E70", VA = "0x4F31E70", Slot = "20")]
	public string ToString(IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x600046D")]
	[Address(RVA = "0x4F31F00", Offset = "0x4F31F00", VA = "0x4F31F00", Slot = "22")]
	public string ToString(string format, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x600046E")]
	[Address(RVA = "0x4F31FD0", Offset = "0x4F31FD0", VA = "0x4F31FD0", Slot = "25")]
	public bool TryFormat(Span<char> destination, out int charsWritten, [Optional] ReadOnlySpan<char> format, [Optional] IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x600046F")]
	[Address(RVA = "0x4F32060", Offset = "0x4F32060", VA = "0x4F32060", Slot = "5")]
	public TypeCode GetTypeCode()
	{
		return default(TypeCode);
	}

	[Token(Token = "0x6000470")]
	[Address(RVA = "0x4F32070", Offset = "0x4F32070", VA = "0x4F32070", Slot = "6")]
	private bool System_002EIConvertible_002EToBoolean(IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x6000471")]
	[Address(RVA = "0x4F320D0", Offset = "0x4F320D0", VA = "0x4F320D0", Slot = "7")]
	private char System_002EIConvertible_002EToChar(IFormatProvider provider)
	{
		return default(char);
	}

	[Token(Token = "0x6000472")]
	[Address(RVA = "0x4F32130", Offset = "0x4F32130", VA = "0x4F32130", Slot = "8")]
	private sbyte System_002EIConvertible_002EToSByte(IFormatProvider provider)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000473")]
	[Address(RVA = "0x4F32200", Offset = "0x4F32200", VA = "0x4F32200", Slot = "9")]
	private byte System_002EIConvertible_002EToByte(IFormatProvider provider)
	{
		return default(byte);
	}

	[Token(Token = "0x6000474")]
	[Address(RVA = "0x4F32210", Offset = "0x4F32210", VA = "0x4F32210", Slot = "10")]
	private short System_002EIConvertible_002EToInt16(IFormatProvider provider)
	{
		return default(short);
	}

	[Token(Token = "0x6000475")]
	[Address(RVA = "0x4F32270", Offset = "0x4F32270", VA = "0x4F32270", Slot = "11")]
	private ushort System_002EIConvertible_002EToUInt16(IFormatProvider provider)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000476")]
	[Address(RVA = "0x4F322D0", Offset = "0x4F322D0", VA = "0x4F322D0", Slot = "12")]
	private int System_002EIConvertible_002EToInt32(IFormatProvider provider)
	{
		return default(int);
	}

	[Token(Token = "0x6000477")]
	[Address(RVA = "0x4F32330", Offset = "0x4F32330", VA = "0x4F32330", Slot = "13")]
	private uint System_002EIConvertible_002EToUInt32(IFormatProvider provider)
	{
		return default(uint);
	}

	[Token(Token = "0x6000478")]
	[Address(RVA = "0x4F32390", Offset = "0x4F32390", VA = "0x4F32390", Slot = "14")]
	private long System_002EIConvertible_002EToInt64(IFormatProvider provider)
	{
		return default(long);
	}

	[Token(Token = "0x6000479")]
	[Address(RVA = "0x4F323F0", Offset = "0x4F323F0", VA = "0x4F323F0", Slot = "15")]
	private ulong System_002EIConvertible_002EToUInt64(IFormatProvider provider)
	{
		return default(ulong);
	}

	[Token(Token = "0x600047A")]
	[Address(RVA = "0x4F32450", Offset = "0x4F32450", VA = "0x4F32450", Slot = "16")]
	private float System_002EIConvertible_002EToSingle(IFormatProvider provider)
	{
		return default(float);
	}

	[Token(Token = "0x600047B")]
	[Address(RVA = "0x4F324B0", Offset = "0x4F324B0", VA = "0x4F324B0", Slot = "17")]
	private double System_002EIConvertible_002EToDouble(IFormatProvider provider)
	{
		return default(double);
	}

	[Token(Token = "0x600047C")]
	[Address(RVA = "0x4F32510", Offset = "0x4F32510", VA = "0x4F32510", Slot = "18")]
	private decimal System_002EIConvertible_002EToDecimal(IFormatProvider provider)
	{
		return default(decimal);
	}

	[Token(Token = "0x600047D")]
	[Address(RVA = "0x4F32610", Offset = "0x4F32610", VA = "0x4F32610", Slot = "19")]
	private DateTime System_002EIConvertible_002EToDateTime(IFormatProvider provider)
	{
		return default(DateTime);
	}

	[Token(Token = "0x600047E")]
	[Address(RVA = "0x4F32690", Offset = "0x4F32690", VA = "0x4F32690", Slot = "21")]
	private object System_002EIConvertible_002EToType(Type type, IFormatProvider provider)
	{
		return null;
	}
}
