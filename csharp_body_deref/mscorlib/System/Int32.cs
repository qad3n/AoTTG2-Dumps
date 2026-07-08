using System.Globalization;
using System.Runtime.InteropServices;
using System.Runtime.Versioning;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x20000DB")]
public readonly struct Int32 : IComparable, IConvertible, IFormattable, IComparable<int>, IEquatable<int>, System.ISpanFormattable
{
	[Token(Token = "0x400036D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly int m_value;

	[Token(Token = "0x400036E")]
	public const int MaxValue = 2147483647;

	[Token(Token = "0x400036F")]
	public const int MinValue = -2147483648;

	[Token(Token = "0x60007D8")]
	[Address(RVA = "0x4FCE710", Offset = "0x4FCE710", VA = "0x4FCE710", Slot = "4")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x60007D9")]
	[Address(RVA = "0x4FCE7A0", Offset = "0x4FCE7A0", VA = "0x4FCE7A0", Slot = "23")]
	public int CompareTo(int value)
	{
		return default(int);
	}

	[Token(Token = "0x60007DA")]
	[Address(RVA = "0x4FCE7C0", Offset = "0x4FCE7C0", VA = "0x4FCE7C0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60007DB")]
	[Address(RVA = "0x4FCE7F0", Offset = "0x4FCE7F0", VA = "0x4FCE7F0", Slot = "24")]
	[System.Runtime.Versioning.NonVersionable]
	public bool Equals(int obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60007DC")]
	[Address(RVA = "0x4FCE800", Offset = "0x4FCE800", VA = "0x4FCE800", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60007DD")]
	[Address(RVA = "0x4FCE810", Offset = "0x4FCE810", VA = "0x4FCE810", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60007DE")]
	[Address(RVA = "0x4FCE890", Offset = "0x4FCE890", VA = "0x4FCE890")]
	public string ToString(string format)
	{
		return null;
	}

	[Token(Token = "0x60007DF")]
	[Address(RVA = "0x4FCE950", Offset = "0x4FCE950", VA = "0x4FCE950", Slot = "20")]
	public string ToString(IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x60007E0")]
	[Address(RVA = "0x4FCE9E0", Offset = "0x4FCE9E0", VA = "0x4FCE9E0", Slot = "22")]
	public string ToString(string format, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x60007E1")]
	[Address(RVA = "0x4FCEAA0", Offset = "0x4FCEAA0", VA = "0x4FCEAA0", Slot = "25")]
	public bool TryFormat(Span<char> destination, out int charsWritten, [Optional] ReadOnlySpan<char> format, [Optional] IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x60007E2")]
	[Address(RVA = "0x4FCEB40", Offset = "0x4FCEB40", VA = "0x4FCEB40")]
	public static int Parse(string s)
	{
		return default(int);
	}

	[Token(Token = "0x60007E3")]
	[Address(RVA = "0x4FCEC00", Offset = "0x4FCEC00", VA = "0x4FCEC00")]
	public static int Parse(string s, NumberStyles style)
	{
		return default(int);
	}

	[Token(Token = "0x60007E4")]
	[Address(RVA = "0x4FCECD0", Offset = "0x4FCECD0", VA = "0x4FCECD0")]
	public static int Parse(string s, IFormatProvider provider)
	{
		return default(int);
	}

	[Token(Token = "0x60007E5")]
	[Address(RVA = "0x4FCEDA0", Offset = "0x4FCEDA0", VA = "0x4FCEDA0")]
	public static int Parse(string s, NumberStyles style, IFormatProvider provider)
	{
		return default(int);
	}

	[Token(Token = "0x60007E6")]
	[Address(RVA = "0x4FCEE70", Offset = "0x4FCEE70", VA = "0x4FCEE70")]
	public static int Parse(ReadOnlySpan<char> s, [Optional][DefaultParameterValue(7)] NumberStyles style, [Optional] IFormatProvider provider)
	{
		return default(int);
	}

	[Token(Token = "0x60007E7")]
	[Address(RVA = "0x4FCEEF0", Offset = "0x4FCEEF0", VA = "0x4FCEEF0")]
	public static bool TryParse(string s, out int result)
	{
		return default(bool);
	}

	[Token(Token = "0x60007E8")]
	[Address(RVA = "0x4FCF000", Offset = "0x4FCF000", VA = "0x4FCF000")]
	public static bool TryParse(ReadOnlySpan<char> s, out int result)
	{
		return default(bool);
	}

	[Token(Token = "0x60007E9")]
	[Address(RVA = "0x4FCF0D0", Offset = "0x4FCF0D0", VA = "0x4FCF0D0")]
	public static bool TryParse(string s, NumberStyles style, IFormatProvider provider, out int result)
	{
		return default(bool);
	}

	[Token(Token = "0x60007EA")]
	[Address(RVA = "0x4FCF1A0", Offset = "0x4FCF1A0", VA = "0x4FCF1A0")]
	public static bool TryParse(ReadOnlySpan<char> s, NumberStyles style, IFormatProvider provider, out int result)
	{
		return default(bool);
	}

	[Token(Token = "0x60007EB")]
	[Address(RVA = "0x4FCF220", Offset = "0x4FCF220", VA = "0x4FCF220", Slot = "5")]
	public TypeCode GetTypeCode()
	{
		return default(TypeCode);
	}

	[Token(Token = "0x60007EC")]
	[Address(RVA = "0x4FCF230", Offset = "0x4FCF230", VA = "0x4FCF230", Slot = "6")]
	private bool System_002EIConvertible_002EToBoolean(IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x60007ED")]
	[Address(RVA = "0x4FCF280", Offset = "0x4FCF280", VA = "0x4FCF280", Slot = "7")]
	private char System_002EIConvertible_002EToChar(IFormatProvider provider)
	{
		return default(char);
	}

	[Token(Token = "0x60007EE")]
	[Address(RVA = "0x4FCF2D0", Offset = "0x4FCF2D0", VA = "0x4FCF2D0", Slot = "8")]
	private sbyte System_002EIConvertible_002EToSByte(IFormatProvider provider)
	{
		return default(sbyte);
	}

	[Token(Token = "0x60007EF")]
	[Address(RVA = "0x4FCF320", Offset = "0x4FCF320", VA = "0x4FCF320", Slot = "9")]
	private byte System_002EIConvertible_002EToByte(IFormatProvider provider)
	{
		return default(byte);
	}

	[Token(Token = "0x60007F0")]
	[Address(RVA = "0x4FCF370", Offset = "0x4FCF370", VA = "0x4FCF370", Slot = "10")]
	private short System_002EIConvertible_002EToInt16(IFormatProvider provider)
	{
		return default(short);
	}

	[Token(Token = "0x60007F1")]
	[Address(RVA = "0x4FCF3C0", Offset = "0x4FCF3C0", VA = "0x4FCF3C0", Slot = "11")]
	private ushort System_002EIConvertible_002EToUInt16(IFormatProvider provider)
	{
		return default(ushort);
	}

	[Token(Token = "0x60007F2")]
	[Address(RVA = "0x4FCF410", Offset = "0x4FCF410", VA = "0x4FCF410", Slot = "12")]
	private int System_002EIConvertible_002EToInt32(IFormatProvider provider)
	{
		return default(int);
	}

	[Token(Token = "0x60007F3")]
	[Address(RVA = "0x4FCF420", Offset = "0x4FCF420", VA = "0x4FCF420", Slot = "13")]
	private uint System_002EIConvertible_002EToUInt32(IFormatProvider provider)
	{
		return default(uint);
	}

	[Token(Token = "0x60007F4")]
	[Address(RVA = "0x4FCF470", Offset = "0x4FCF470", VA = "0x4FCF470", Slot = "14")]
	private long System_002EIConvertible_002EToInt64(IFormatProvider provider)
	{
		return default(long);
	}

	[Token(Token = "0x60007F5")]
	[Address(RVA = "0x4FCF4C0", Offset = "0x4FCF4C0", VA = "0x4FCF4C0", Slot = "15")]
	private ulong System_002EIConvertible_002EToUInt64(IFormatProvider provider)
	{
		return default(ulong);
	}

	[Token(Token = "0x60007F6")]
	[Address(RVA = "0x4FCF510", Offset = "0x4FCF510", VA = "0x4FCF510", Slot = "16")]
	private float System_002EIConvertible_002EToSingle(IFormatProvider provider)
	{
		return default(float);
	}

	[Token(Token = "0x60007F7")]
	[Address(RVA = "0x4FCF560", Offset = "0x4FCF560", VA = "0x4FCF560", Slot = "17")]
	private double System_002EIConvertible_002EToDouble(IFormatProvider provider)
	{
		return default(double);
	}

	[Token(Token = "0x60007F8")]
	[Address(RVA = "0x4FCF5B0", Offset = "0x4FCF5B0", VA = "0x4FCF5B0", Slot = "18")]
	private decimal System_002EIConvertible_002EToDecimal(IFormatProvider provider)
	{
		return default(decimal);
	}

	[Token(Token = "0x60007F9")]
	[Address(RVA = "0x4FCF600", Offset = "0x4FCF600", VA = "0x4FCF600", Slot = "19")]
	private DateTime System_002EIConvertible_002EToDateTime(IFormatProvider provider)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60007FA")]
	[Address(RVA = "0x4FCF680", Offset = "0x4FCF680", VA = "0x4FCF680", Slot = "21")]
	private object System_002EIConvertible_002EToType(Type type, IFormatProvider provider)
	{
		return null;
	}
}
