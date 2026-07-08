using System.Globalization;
using System.Runtime.InteropServices;
using System.Runtime.Versioning;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x20000DC")]
public readonly struct Int64 : IComparable, IConvertible, IFormattable, IComparable<long>, IEquatable<long>, System.ISpanFormattable
{
	[Token(Token = "0x4000370")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly long m_value;

	[Token(Token = "0x4000371")]
	public const long MaxValue = 9223372036854775807L;

	[Token(Token = "0x4000372")]
	public const long MinValue = -9223372036854775808L;

	[Token(Token = "0x60007FB")]
	[Address(RVA = "0x4FCF700", Offset = "0x4FCF700", VA = "0x4FCF700", Slot = "4")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x60007FC")]
	[Address(RVA = "0x4FCF790", Offset = "0x4FCF790", VA = "0x4FCF790", Slot = "23")]
	public int CompareTo(long value)
	{
		return default(int);
	}

	[Token(Token = "0x60007FD")]
	[Address(RVA = "0x4FCF7B0", Offset = "0x4FCF7B0", VA = "0x4FCF7B0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60007FE")]
	[Address(RVA = "0x4FCF7E0", Offset = "0x4FCF7E0", VA = "0x4FCF7E0", Slot = "24")]
	[System.Runtime.Versioning.NonVersionable]
	public bool Equals(long obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60007FF")]
	[Address(RVA = "0x4FCF7F0", Offset = "0x4FCF7F0", VA = "0x4FCF7F0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000800")]
	[Address(RVA = "0x4FCF800", Offset = "0x4FCF800", VA = "0x4FCF800", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000801")]
	[Address(RVA = "0x4FCFB40", Offset = "0x4FCFB40", VA = "0x4FCFB40", Slot = "20")]
	public string ToString(IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6000802")]
	[Address(RVA = "0x4FCFBC0", Offset = "0x4FCFBC0", VA = "0x4FCFBC0")]
	public string ToString(string format)
	{
		return null;
	}

	[Token(Token = "0x6000803")]
	[Address(RVA = "0x4FCFC80", Offset = "0x4FCFC80", VA = "0x4FCFC80", Slot = "22")]
	public string ToString(string format, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6000804")]
	[Address(RVA = "0x4FCFD40", Offset = "0x4FCFD40", VA = "0x4FCFD40", Slot = "25")]
	public bool TryFormat(Span<char> destination, out int charsWritten, [Optional] ReadOnlySpan<char> format, [Optional] IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x6000805")]
	[Address(RVA = "0x4FD0140", Offset = "0x4FD0140", VA = "0x4FD0140")]
	public static long Parse(string s, IFormatProvider provider)
	{
		return default(long);
	}

	[Token(Token = "0x6000806")]
	[Address(RVA = "0x4FD0490", Offset = "0x4FD0490", VA = "0x4FD0490")]
	public static long Parse(string s, NumberStyles style, IFormatProvider provider)
	{
		return default(long);
	}

	[Token(Token = "0x6000807")]
	[Address(RVA = "0x4FD0560", Offset = "0x4FD0560", VA = "0x4FD0560")]
	public static bool TryParse(string s, out long result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000808")]
	[Address(RVA = "0x4FD08B0", Offset = "0x4FD08B0", VA = "0x4FD08B0")]
	public static bool TryParse(string s, NumberStyles style, IFormatProvider provider, out long result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000809")]
	[Address(RVA = "0x4FD0980", Offset = "0x4FD0980", VA = "0x4FD0980", Slot = "5")]
	public TypeCode GetTypeCode()
	{
		return default(TypeCode);
	}

	[Token(Token = "0x600080A")]
	[Address(RVA = "0x4FD0990", Offset = "0x4FD0990", VA = "0x4FD0990", Slot = "6")]
	private bool System_002EIConvertible_002EToBoolean(IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x600080B")]
	[Address(RVA = "0x4FD09F0", Offset = "0x4FD09F0", VA = "0x4FD09F0", Slot = "7")]
	private char System_002EIConvertible_002EToChar(IFormatProvider provider)
	{
		return default(char);
	}

	[Token(Token = "0x600080C")]
	[Address(RVA = "0x4FD0A50", Offset = "0x4FD0A50", VA = "0x4FD0A50", Slot = "8")]
	private sbyte System_002EIConvertible_002EToSByte(IFormatProvider provider)
	{
		return default(sbyte);
	}

	[Token(Token = "0x600080D")]
	[Address(RVA = "0x4FD0AB0", Offset = "0x4FD0AB0", VA = "0x4FD0AB0", Slot = "9")]
	private byte System_002EIConvertible_002EToByte(IFormatProvider provider)
	{
		return default(byte);
	}

	[Token(Token = "0x600080E")]
	[Address(RVA = "0x4FD0B10", Offset = "0x4FD0B10", VA = "0x4FD0B10", Slot = "10")]
	private short System_002EIConvertible_002EToInt16(IFormatProvider provider)
	{
		return default(short);
	}

	[Token(Token = "0x600080F")]
	[Address(RVA = "0x4FD0B70", Offset = "0x4FD0B70", VA = "0x4FD0B70", Slot = "11")]
	private ushort System_002EIConvertible_002EToUInt16(IFormatProvider provider)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000810")]
	[Address(RVA = "0x4FD0BD0", Offset = "0x4FD0BD0", VA = "0x4FD0BD0", Slot = "12")]
	private int System_002EIConvertible_002EToInt32(IFormatProvider provider)
	{
		return default(int);
	}

	[Token(Token = "0x6000811")]
	[Address(RVA = "0x4FD0C30", Offset = "0x4FD0C30", VA = "0x4FD0C30", Slot = "13")]
	private uint System_002EIConvertible_002EToUInt32(IFormatProvider provider)
	{
		return default(uint);
	}

	[Token(Token = "0x6000812")]
	[Address(RVA = "0x4FD0C90", Offset = "0x4FD0C90", VA = "0x4FD0C90", Slot = "14")]
	private long System_002EIConvertible_002EToInt64(IFormatProvider provider)
	{
		return default(long);
	}

	[Token(Token = "0x6000813")]
	[Address(RVA = "0x4FD0CA0", Offset = "0x4FD0CA0", VA = "0x4FD0CA0", Slot = "15")]
	private ulong System_002EIConvertible_002EToUInt64(IFormatProvider provider)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000814")]
	[Address(RVA = "0x4FD0D00", Offset = "0x4FD0D00", VA = "0x4FD0D00", Slot = "16")]
	private float System_002EIConvertible_002EToSingle(IFormatProvider provider)
	{
		return default(float);
	}

	[Token(Token = "0x6000815")]
	[Address(RVA = "0x4FD0D60", Offset = "0x4FD0D60", VA = "0x4FD0D60", Slot = "17")]
	private double System_002EIConvertible_002EToDouble(IFormatProvider provider)
	{
		return default(double);
	}

	[Token(Token = "0x6000816")]
	[Address(RVA = "0x4FD0DC0", Offset = "0x4FD0DC0", VA = "0x4FD0DC0", Slot = "18")]
	private decimal System_002EIConvertible_002EToDecimal(IFormatProvider provider)
	{
		return default(decimal);
	}

	[Token(Token = "0x6000817")]
	[Address(RVA = "0x4FD0E20", Offset = "0x4FD0E20", VA = "0x4FD0E20", Slot = "19")]
	private DateTime System_002EIConvertible_002EToDateTime(IFormatProvider provider)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000818")]
	[Address(RVA = "0x4FD0EA0", Offset = "0x4FD0EA0", VA = "0x4FD0EA0", Slot = "21")]
	private object System_002EIConvertible_002EToType(Type type, IFormatProvider provider)
	{
		return null;
	}
}
