// ==================== AoTTG2 cross-reference ====================
// Type: System.Int32
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
	[Address(RVA = "0x3CB4230", Offset = "0x3CB4230", VA = "0x3CB4230", Slot = "4")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x60007D9")]
	[Address(RVA = "0x3CB42C0", Offset = "0x3CB42C0", VA = "0x3CB42C0", Slot = "23")]
	public int CompareTo(int value)
	{
		return default(int);
	}

	[Token(Token = "0x60007DA")]
	[Address(RVA = "0x3CB42E0", Offset = "0x3CB42E0", VA = "0x3CB42E0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60007DB")]
	[Address(RVA = "0x3CB4310", Offset = "0x3CB4310", VA = "0x3CB4310", Slot = "24")]
	[System.Runtime.Versioning.NonVersionable]
	public bool Equals(int obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60007DC")]
	[Address(RVA = "0x3CB4320", Offset = "0x3CB4320", VA = "0x3CB4320", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60007DD")]
	[Address(RVA = "0x3CB4330", Offset = "0x3CB4330", VA = "0x3CB4330", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60007DE")]
	[Address(RVA = "0x3CB43B0", Offset = "0x3CB43B0", VA = "0x3CB43B0")]
	public string ToString(string format)
	{
		return null;
	}

	[Token(Token = "0x60007DF")]
	[Address(RVA = "0x3CB4470", Offset = "0x3CB4470", VA = "0x3CB4470", Slot = "20")]
	public string ToString(IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x60007E0")]
	[Address(RVA = "0x3CB4500", Offset = "0x3CB4500", VA = "0x3CB4500", Slot = "22")]
	public string ToString(string format, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x60007E1")]
	[Address(RVA = "0x3CB45C0", Offset = "0x3CB45C0", VA = "0x3CB45C0", Slot = "25")]
	public bool TryFormat(Span<char> destination, out int charsWritten, [Optional] ReadOnlySpan<char> format, [Optional] IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x60007E2")]
	[Address(RVA = "0x3CB4660", Offset = "0x3CB4660", VA = "0x3CB4660")]
	public static int Parse(string s)
	{
		return default(int);
	}

	[Token(Token = "0x60007E3")]
	[Address(RVA = "0x3CB4720", Offset = "0x3CB4720", VA = "0x3CB4720")]
	public static int Parse(string s, NumberStyles style)
	{
		return default(int);
	}

	[Token(Token = "0x60007E4")]
	[Address(RVA = "0x3CB47F0", Offset = "0x3CB47F0", VA = "0x3CB47F0")]
	public static int Parse(string s, IFormatProvider provider)
	{
		return default(int);
	}

	[Token(Token = "0x60007E5")]
	[Address(RVA = "0x3CB48C0", Offset = "0x3CB48C0", VA = "0x3CB48C0")]
	public static int Parse(string s, NumberStyles style, IFormatProvider provider)
	{
		return default(int);
	}

	[Token(Token = "0x60007E6")]
	[Address(RVA = "0x3CB4990", Offset = "0x3CB4990", VA = "0x3CB4990")]
	public static int Parse(ReadOnlySpan<char> s, [Optional][DefaultParameterValue(7)] NumberStyles style, [Optional] IFormatProvider provider)
	{
		return default(int);
	}

	[Token(Token = "0x60007E7")]
	[Address(RVA = "0x3CB4A10", Offset = "0x3CB4A10", VA = "0x3CB4A10")]
	public static bool TryParse(string s, out int result)
	{
		return default(bool);
	}

	[Token(Token = "0x60007E8")]
	[Address(RVA = "0x3CB4B20", Offset = "0x3CB4B20", VA = "0x3CB4B20")]
	public static bool TryParse(ReadOnlySpan<char> s, out int result)
	{
		return default(bool);
	}

	[Token(Token = "0x60007E9")]
	[Address(RVA = "0x3CB4BF0", Offset = "0x3CB4BF0", VA = "0x3CB4BF0")]
	public static bool TryParse(string s, NumberStyles style, IFormatProvider provider, out int result)
	{
		return default(bool);
	}

	[Token(Token = "0x60007EA")]
	[Address(RVA = "0x3CB4CC0", Offset = "0x3CB4CC0", VA = "0x3CB4CC0")]
	public static bool TryParse(ReadOnlySpan<char> s, NumberStyles style, IFormatProvider provider, out int result)
	{
		return default(bool);
	}

	[Token(Token = "0x60007EB")]
	[Address(RVA = "0x3CB4D40", Offset = "0x3CB4D40", VA = "0x3CB4D40", Slot = "5")]
	public TypeCode GetTypeCode()
	{
		return default(TypeCode);
	}

	[Token(Token = "0x60007EC")]
	[Address(RVA = "0x3CB4D50", Offset = "0x3CB4D50", VA = "0x3CB4D50", Slot = "6")]
	private bool System_002EIConvertible_002EToBoolean(IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x60007ED")]
	[Address(RVA = "0x3CB4DA0", Offset = "0x3CB4DA0", VA = "0x3CB4DA0", Slot = "7")]
	private char System_002EIConvertible_002EToChar(IFormatProvider provider)
	{
		return default(char);
	}

	[Token(Token = "0x60007EE")]
	[Address(RVA = "0x3CB4DF0", Offset = "0x3CB4DF0", VA = "0x3CB4DF0", Slot = "8")]
	private sbyte System_002EIConvertible_002EToSByte(IFormatProvider provider)
	{
		return default(sbyte);
	}

	[Token(Token = "0x60007EF")]
	[Address(RVA = "0x3CB4E40", Offset = "0x3CB4E40", VA = "0x3CB4E40", Slot = "9")]
	private byte System_002EIConvertible_002EToByte(IFormatProvider provider)
	{
		return default(byte);
	}

	[Token(Token = "0x60007F0")]
	[Address(RVA = "0x3CB4E90", Offset = "0x3CB4E90", VA = "0x3CB4E90", Slot = "10")]
	private short System_002EIConvertible_002EToInt16(IFormatProvider provider)
	{
		return default(short);
	}

	[Token(Token = "0x60007F1")]
	[Address(RVA = "0x3CB4EE0", Offset = "0x3CB4EE0", VA = "0x3CB4EE0", Slot = "11")]
	private ushort System_002EIConvertible_002EToUInt16(IFormatProvider provider)
	{
		return default(ushort);
	}

	[Token(Token = "0x60007F2")]
	[Address(RVA = "0x3CB4F30", Offset = "0x3CB4F30", VA = "0x3CB4F30", Slot = "12")]
	private int System_002EIConvertible_002EToInt32(IFormatProvider provider)
	{
		return default(int);
	}

	[Token(Token = "0x60007F3")]
	[Address(RVA = "0x3CB4F40", Offset = "0x3CB4F40", VA = "0x3CB4F40", Slot = "13")]
	private uint System_002EIConvertible_002EToUInt32(IFormatProvider provider)
	{
		return default(uint);
	}

	[Token(Token = "0x60007F4")]
	[Address(RVA = "0x3CB4F90", Offset = "0x3CB4F90", VA = "0x3CB4F90", Slot = "14")]
	private long System_002EIConvertible_002EToInt64(IFormatProvider provider)
	{
		return default(long);
	}

	[Token(Token = "0x60007F5")]
	[Address(RVA = "0x3CB4FE0", Offset = "0x3CB4FE0", VA = "0x3CB4FE0", Slot = "15")]
	private ulong System_002EIConvertible_002EToUInt64(IFormatProvider provider)
	{
		return default(ulong);
	}

	[Token(Token = "0x60007F6")]
	[Address(RVA = "0x3CB5030", Offset = "0x3CB5030", VA = "0x3CB5030", Slot = "16")]
	private float System_002EIConvertible_002EToSingle(IFormatProvider provider)
	{
		return default(float);
	}

	[Token(Token = "0x60007F7")]
	[Address(RVA = "0x3CB5080", Offset = "0x3CB5080", VA = "0x3CB5080", Slot = "17")]
	private double System_002EIConvertible_002EToDouble(IFormatProvider provider)
	{
		return default(double);
	}

	[Token(Token = "0x60007F8")]
	[Address(RVA = "0x3CB50D0", Offset = "0x3CB50D0", VA = "0x3CB50D0", Slot = "18")]
	private decimal System_002EIConvertible_002EToDecimal(IFormatProvider provider)
	{
		return default(decimal);
	}

	[Token(Token = "0x60007F9")]
	[Address(RVA = "0x3CB5120", Offset = "0x3CB5120", VA = "0x3CB5120", Slot = "19")]
	private DateTime System_002EIConvertible_002EToDateTime(IFormatProvider provider)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60007FA")]
	[Address(RVA = "0x3CB51A0", Offset = "0x3CB51A0", VA = "0x3CB51A0", Slot = "21")]
	private object System_002EIConvertible_002EToType(Type type, IFormatProvider provider)
	{
		return null;
	}
}
