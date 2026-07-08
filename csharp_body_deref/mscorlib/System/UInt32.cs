using System.Globalization;
using System.Runtime.InteropServices;
using System.Runtime.Versioning;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x2000125")]
[CLSCompliant(false)]
public readonly struct UInt32 : IComparable, IConvertible, IFormattable, IComparable<uint>, IEquatable<uint>, System.ISpanFormattable
{
	[Token(Token = "0x400041C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly uint m_value;

	[Token(Token = "0x400041D")]
	public const uint MaxValue = 4294967295u;

	[Token(Token = "0x400041E")]
	public const uint MinValue = 0u;

	[Token(Token = "0x6000B51")]
	[Address(RVA = "0x4FF2BF0", Offset = "0x4FF2BF0", VA = "0x4FF2BF0", Slot = "4")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000B52")]
	[Address(RVA = "0x4FF2C80", Offset = "0x4FF2C80", VA = "0x4FF2C80", Slot = "23")]
	public int CompareTo(uint value)
	{
		return default(int);
	}

	[Token(Token = "0x6000B53")]
	[Address(RVA = "0x4FF2CA0", Offset = "0x4FF2CA0", VA = "0x4FF2CA0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B54")]
	[Address(RVA = "0x4FF2CD0", Offset = "0x4FF2CD0", VA = "0x4FF2CD0", Slot = "24")]
	[System.Runtime.Versioning.NonVersionable]
	public bool Equals(uint obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B55")]
	[Address(RVA = "0x4FF2CE0", Offset = "0x4FF2CE0", VA = "0x4FF2CE0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000B56")]
	[Address(RVA = "0x4FF2CF0", Offset = "0x4FF2CF0", VA = "0x4FF2CF0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000B57")]
	[Address(RVA = "0x4FF2D70", Offset = "0x4FF2D70", VA = "0x4FF2D70", Slot = "20")]
	public string ToString(IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6000B58")]
	[Address(RVA = "0x4FF2E00", Offset = "0x4FF2E00", VA = "0x4FF2E00")]
	public string ToString(string format)
	{
		return null;
	}

	[Token(Token = "0x6000B59")]
	[Address(RVA = "0x4FF2EC0", Offset = "0x4FF2EC0", VA = "0x4FF2EC0", Slot = "22")]
	public string ToString(string format, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6000B5A")]
	[Address(RVA = "0x4FF2F90", Offset = "0x4FF2F90", VA = "0x4FF2F90", Slot = "25")]
	public bool TryFormat(Span<char> destination, out int charsWritten, [Optional] ReadOnlySpan<char> format, [Optional] IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B5B")]
	[Address(RVA = "0x4FF3020", Offset = "0x4FF3020", VA = "0x4FF3020")]
	[CLSCompliant(false)]
	public static uint Parse(string s)
	{
		return default(uint);
	}

	[Token(Token = "0x6000B5C")]
	[Address(RVA = "0x4FF30C0", Offset = "0x4FF30C0", VA = "0x4FF30C0")]
	[CLSCompliant(false)]
	public static uint Parse(string s, IFormatProvider provider)
	{
		return default(uint);
	}

	[Token(Token = "0x6000B5D")]
	[Address(RVA = "0x4FF3170", Offset = "0x4FF3170", VA = "0x4FF3170")]
	[CLSCompliant(false)]
	public static uint Parse(string s, NumberStyles style, IFormatProvider provider)
	{
		return default(uint);
	}

	[Token(Token = "0x6000B5E")]
	[Address(RVA = "0x4FF3230", Offset = "0x4FF3230", VA = "0x4FF3230")]
	[CLSCompliant(false)]
	public static bool TryParse(string s, out uint result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B5F")]
	[Address(RVA = "0x4FF32F0", Offset = "0x4FF32F0", VA = "0x4FF32F0")]
	[CLSCompliant(false)]
	public static bool TryParse(string s, NumberStyles style, IFormatProvider provider, out uint result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B60")]
	[Address(RVA = "0x4FF33C0", Offset = "0x4FF33C0", VA = "0x4FF33C0", Slot = "5")]
	public TypeCode GetTypeCode()
	{
		return default(TypeCode);
	}

	[Token(Token = "0x6000B61")]
	[Address(RVA = "0x4FF33D0", Offset = "0x4FF33D0", VA = "0x4FF33D0", Slot = "6")]
	private bool System_002EIConvertible_002EToBoolean(IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B62")]
	[Address(RVA = "0x4FF3420", Offset = "0x4FF3420", VA = "0x4FF3420", Slot = "7")]
	private char System_002EIConvertible_002EToChar(IFormatProvider provider)
	{
		return default(char);
	}

	[Token(Token = "0x6000B63")]
	[Address(RVA = "0x4FF3470", Offset = "0x4FF3470", VA = "0x4FF3470", Slot = "8")]
	private sbyte System_002EIConvertible_002EToSByte(IFormatProvider provider)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000B64")]
	[Address(RVA = "0x4FF34C0", Offset = "0x4FF34C0", VA = "0x4FF34C0", Slot = "9")]
	private byte System_002EIConvertible_002EToByte(IFormatProvider provider)
	{
		return default(byte);
	}

	[Token(Token = "0x6000B65")]
	[Address(RVA = "0x4FF3510", Offset = "0x4FF3510", VA = "0x4FF3510", Slot = "10")]
	private short System_002EIConvertible_002EToInt16(IFormatProvider provider)
	{
		return default(short);
	}

	[Token(Token = "0x6000B66")]
	[Address(RVA = "0x4FF3560", Offset = "0x4FF3560", VA = "0x4FF3560", Slot = "11")]
	private ushort System_002EIConvertible_002EToUInt16(IFormatProvider provider)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000B67")]
	[Address(RVA = "0x4FF35B0", Offset = "0x4FF35B0", VA = "0x4FF35B0", Slot = "12")]
	private int System_002EIConvertible_002EToInt32(IFormatProvider provider)
	{
		return default(int);
	}

	[Token(Token = "0x6000B68")]
	[Address(RVA = "0x4FF3600", Offset = "0x4FF3600", VA = "0x4FF3600", Slot = "13")]
	private uint System_002EIConvertible_002EToUInt32(IFormatProvider provider)
	{
		return default(uint);
	}

	[Token(Token = "0x6000B69")]
	[Address(RVA = "0x4FF3610", Offset = "0x4FF3610", VA = "0x4FF3610", Slot = "14")]
	private long System_002EIConvertible_002EToInt64(IFormatProvider provider)
	{
		return default(long);
	}

	[Token(Token = "0x6000B6A")]
	[Address(RVA = "0x4FF3660", Offset = "0x4FF3660", VA = "0x4FF3660", Slot = "15")]
	private ulong System_002EIConvertible_002EToUInt64(IFormatProvider provider)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000B6B")]
	[Address(RVA = "0x4FF36B0", Offset = "0x4FF36B0", VA = "0x4FF36B0", Slot = "16")]
	private float System_002EIConvertible_002EToSingle(IFormatProvider provider)
	{
		return default(float);
	}

	[Token(Token = "0x6000B6C")]
	[Address(RVA = "0x4FF3700", Offset = "0x4FF3700", VA = "0x4FF3700", Slot = "17")]
	private double System_002EIConvertible_002EToDouble(IFormatProvider provider)
	{
		return default(double);
	}

	[Token(Token = "0x6000B6D")]
	[Address(RVA = "0x4FF3750", Offset = "0x4FF3750", VA = "0x4FF3750", Slot = "18")]
	private decimal System_002EIConvertible_002EToDecimal(IFormatProvider provider)
	{
		return default(decimal);
	}

	[Token(Token = "0x6000B6E")]
	[Address(RVA = "0x4FF37A0", Offset = "0x4FF37A0", VA = "0x4FF37A0", Slot = "19")]
	private DateTime System_002EIConvertible_002EToDateTime(IFormatProvider provider)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000B6F")]
	[Address(RVA = "0x4FF3820", Offset = "0x4FF3820", VA = "0x4FF3820", Slot = "21")]
	private object System_002EIConvertible_002EToType(Type type, IFormatProvider provider)
	{
		return null;
	}
}
