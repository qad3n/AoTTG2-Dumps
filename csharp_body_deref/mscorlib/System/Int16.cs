using System.Globalization;
using System.Runtime.InteropServices;
using System.Runtime.Versioning;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x20000DA")]
public readonly struct Int16 : IComparable, IConvertible, IFormattable, IComparable<short>, IEquatable<short>, System.ISpanFormattable
{
	[Token(Token = "0x400036A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly short m_value;

	[Token(Token = "0x400036B")]
	public const short MaxValue = 32767;

	[Token(Token = "0x400036C")]
	public const short MinValue = -32768;

	[Token(Token = "0x60007B9")]
	[Address(RVA = "0x4FCC780", Offset = "0x4FCC780", VA = "0x4FCC780", Slot = "4")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x60007BA")]
	[Address(RVA = "0x4FCC800", Offset = "0x4FCC800", VA = "0x4FCC800", Slot = "23")]
	public int CompareTo(short value)
	{
		return default(int);
	}

	[Token(Token = "0x60007BB")]
	[Address(RVA = "0x4FCC810", Offset = "0x4FCC810", VA = "0x4FCC810", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60007BC")]
	[Address(RVA = "0x4FCC840", Offset = "0x4FCC840", VA = "0x4FCC840", Slot = "24")]
	[System.Runtime.Versioning.NonVersionable]
	public bool Equals(short obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60007BD")]
	[Address(RVA = "0x4FCC850", Offset = "0x4FCC850", VA = "0x4FCC850", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60007BE")]
	[Address(RVA = "0x4FCC860", Offset = "0x4FCC860", VA = "0x4FCC860", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60007BF")]
	[Address(RVA = "0x4FCCBB0", Offset = "0x4FCCBB0", VA = "0x4FCCBB0", Slot = "20")]
	public string ToString(IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x60007C0")]
	[Address(RVA = "0x4FCCC40", Offset = "0x4FCCC40", VA = "0x4FCCC40", Slot = "22")]
	public string ToString(string format, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x60007C1")]
	[Address(RVA = "0x4FCD020", Offset = "0x4FCD020", VA = "0x4FCD020", Slot = "25")]
	public bool TryFormat(Span<char> destination, out int charsWritten, [Optional] ReadOnlySpan<char> format, [Optional] IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x60007C2")]
	[Address(RVA = "0x4FCD750", Offset = "0x4FCD750", VA = "0x4FCD750")]
	public static short Parse(string s, IFormatProvider provider)
	{
		return default(short);
	}

	[Token(Token = "0x60007C3")]
	[Address(RVA = "0x4FCD960", Offset = "0x4FCD960", VA = "0x4FCD960")]
	public static short Parse(string s, NumberStyles style, IFormatProvider provider)
	{
		return default(short);
	}

	[Token(Token = "0x60007C4")]
	[Address(RVA = "0x4FCD7D0", Offset = "0x4FCD7D0", VA = "0x4FCD7D0")]
	private static short Parse(ReadOnlySpan<char> s, NumberStyles style, NumberFormatInfo info)
	{
		return default(short);
	}

	[Token(Token = "0x60007C5")]
	[Address(RVA = "0x4FCDC60", Offset = "0x4FCDC60", VA = "0x4FCDC60")]
	public static bool TryParse(string s, out short result)
	{
		return default(bool);
	}

	[Token(Token = "0x60007C6")]
	[Address(RVA = "0x4FCDE40", Offset = "0x4FCDE40", VA = "0x4FCDE40")]
	public static bool TryParse(string s, NumberStyles style, IFormatProvider provider, out short result)
	{
		return default(bool);
	}

	[Token(Token = "0x60007C7")]
	[Address(RVA = "0x4FCDD90", Offset = "0x4FCDD90", VA = "0x4FCDD90")]
	private static bool TryParse(ReadOnlySpan<char> s, NumberStyles style, NumberFormatInfo info, out short result)
	{
		return default(bool);
	}

	[Token(Token = "0x60007C8")]
	[Address(RVA = "0x4FCE150", Offset = "0x4FCE150", VA = "0x4FCE150", Slot = "5")]
	public TypeCode GetTypeCode()
	{
		return default(TypeCode);
	}

	[Token(Token = "0x60007C9")]
	[Address(RVA = "0x4FCE160", Offset = "0x4FCE160", VA = "0x4FCE160", Slot = "6")]
	private bool System_002EIConvertible_002EToBoolean(IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x60007CA")]
	[Address(RVA = "0x4FCE1C0", Offset = "0x4FCE1C0", VA = "0x4FCE1C0", Slot = "7")]
	private char System_002EIConvertible_002EToChar(IFormatProvider provider)
	{
		return default(char);
	}

	[Token(Token = "0x60007CB")]
	[Address(RVA = "0x4FCE220", Offset = "0x4FCE220", VA = "0x4FCE220", Slot = "8")]
	private sbyte System_002EIConvertible_002EToSByte(IFormatProvider provider)
	{
		return default(sbyte);
	}

	[Token(Token = "0x60007CC")]
	[Address(RVA = "0x4FCE280", Offset = "0x4FCE280", VA = "0x4FCE280", Slot = "9")]
	private byte System_002EIConvertible_002EToByte(IFormatProvider provider)
	{
		return default(byte);
	}

	[Token(Token = "0x60007CD")]
	[Address(RVA = "0x4FCE2E0", Offset = "0x4FCE2E0", VA = "0x4FCE2E0", Slot = "10")]
	private short System_002EIConvertible_002EToInt16(IFormatProvider provider)
	{
		return default(short);
	}

	[Token(Token = "0x60007CE")]
	[Address(RVA = "0x4FCE2F0", Offset = "0x4FCE2F0", VA = "0x4FCE2F0", Slot = "11")]
	private ushort System_002EIConvertible_002EToUInt16(IFormatProvider provider)
	{
		return default(ushort);
	}

	[Token(Token = "0x60007CF")]
	[Address(RVA = "0x4FCE350", Offset = "0x4FCE350", VA = "0x4FCE350", Slot = "12")]
	private int System_002EIConvertible_002EToInt32(IFormatProvider provider)
	{
		return default(int);
	}

	[Token(Token = "0x60007D0")]
	[Address(RVA = "0x4FCE3B0", Offset = "0x4FCE3B0", VA = "0x4FCE3B0", Slot = "13")]
	private uint System_002EIConvertible_002EToUInt32(IFormatProvider provider)
	{
		return default(uint);
	}

	[Token(Token = "0x60007D1")]
	[Address(RVA = "0x4FCE410", Offset = "0x4FCE410", VA = "0x4FCE410", Slot = "14")]
	private long System_002EIConvertible_002EToInt64(IFormatProvider provider)
	{
		return default(long);
	}

	[Token(Token = "0x60007D2")]
	[Address(RVA = "0x4FCE470", Offset = "0x4FCE470", VA = "0x4FCE470", Slot = "15")]
	private ulong System_002EIConvertible_002EToUInt64(IFormatProvider provider)
	{
		return default(ulong);
	}

	[Token(Token = "0x60007D3")]
	[Address(RVA = "0x4FCE4D0", Offset = "0x4FCE4D0", VA = "0x4FCE4D0", Slot = "16")]
	private float System_002EIConvertible_002EToSingle(IFormatProvider provider)
	{
		return default(float);
	}

	[Token(Token = "0x60007D4")]
	[Address(RVA = "0x4FCE530", Offset = "0x4FCE530", VA = "0x4FCE530", Slot = "17")]
	private double System_002EIConvertible_002EToDouble(IFormatProvider provider)
	{
		return default(double);
	}

	[Token(Token = "0x60007D5")]
	[Address(RVA = "0x4FCE590", Offset = "0x4FCE590", VA = "0x4FCE590", Slot = "18")]
	private decimal System_002EIConvertible_002EToDecimal(IFormatProvider provider)
	{
		return default(decimal);
	}

	[Token(Token = "0x60007D6")]
	[Address(RVA = "0x4FCE5F0", Offset = "0x4FCE5F0", VA = "0x4FCE5F0", Slot = "19")]
	private DateTime System_002EIConvertible_002EToDateTime(IFormatProvider provider)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60007D7")]
	[Address(RVA = "0x4FCE690", Offset = "0x4FCE690", VA = "0x4FCE690", Slot = "21")]
	private object System_002EIConvertible_002EToType(Type type, IFormatProvider provider)
	{
		return null;
	}
}
