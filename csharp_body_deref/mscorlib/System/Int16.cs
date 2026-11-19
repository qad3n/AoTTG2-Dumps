// ==================== AoTTG2 cross-reference ====================
// Type: System.Int16
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
[Token(Token = "0x20000DA")]
public readonly struct Int16 : IComparable, IConvertible, IFormattable, IComparable<short>, IEquatable<short>, System.ISpanFormattable
{
	[Token(Token = "0x4000350")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly short m_value;

	[Token(Token = "0x60007C6")]
	[Address(RVA = "0x54B5490", Offset = "0x54B4490", VA = "0x54B5490", Slot = "4")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x60007C7")]
	[Address(RVA = "0x54B5510", Offset = "0x54B4510", VA = "0x54B5510", Slot = "23")]
	public int CompareTo(short value)
	{
		return default(int);
	}

	[Token(Token = "0x60007C8")]
	[Address(RVA = "0x54B5520", Offset = "0x54B4520", VA = "0x54B5520", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60007C9")]
	[Address(RVA = "0x54B5550", Offset = "0x54B4550", VA = "0x54B5550", Slot = "24")]
	[System.Runtime.Versioning.NonVersionable]
	public bool Equals(short obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60007CA")]
	[Address(RVA = "0x54B5560", Offset = "0x54B4560", VA = "0x54B5560", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60007CB")]
	[Address(RVA = "0x54B5570", Offset = "0x54B4570", VA = "0x54B5570", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60007CC")]
	[Address(RVA = "0x54B58A0", Offset = "0x54B48A0", VA = "0x54B58A0", Slot = "20")]
	public string ToString(IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x60007CD")]
	[Address(RVA = "0x54B5930", Offset = "0x54B4930", VA = "0x54B5930", Slot = "22")]
	public string ToString(string format, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x60007CE")]
	[Address(RVA = "0x54B5CE0", Offset = "0x54B4CE0", VA = "0x54B5CE0", Slot = "25")]
	public bool TryFormat(Span<char> destination, out int charsWritten, [Optional] ReadOnlySpan<char> format, [Optional] IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x60007CF")]
	[Address(RVA = "0x54B6380", Offset = "0x54B5380", VA = "0x54B6380")]
	public static short Parse(string s, IFormatProvider provider)
	{
		return default(short);
	}

	[Token(Token = "0x60007D0")]
	[Address(RVA = "0x54B6590", Offset = "0x54B5590", VA = "0x54B6590")]
	public static short Parse(string s, NumberStyles style, IFormatProvider provider)
	{
		return default(short);
	}

	[Token(Token = "0x60007D1")]
	[Address(RVA = "0x54B6410", Offset = "0x54B5410", VA = "0x54B6410")]
	private static short Parse(ReadOnlySpan<char> s, NumberStyles style, NumberFormatInfo info)
	{
		return default(short);
	}

	[Token(Token = "0x60007D2")]
	[Address(RVA = "0x54B6890", Offset = "0x54B5890", VA = "0x54B6890")]
	public static bool TryParse(string s, out short result)
	{
		return default(bool);
	}

	[Token(Token = "0x60007D3")]
	[Address(RVA = "0x54B6A70", Offset = "0x54B5A70", VA = "0x54B6A70")]
	public static bool TryParse(string s, NumberStyles style, IFormatProvider provider, out short result)
	{
		return default(bool);
	}

	[Token(Token = "0x60007D4")]
	[Address(RVA = "0x54B69C0", Offset = "0x54B59C0", VA = "0x54B69C0")]
	private static bool TryParse(ReadOnlySpan<char> s, NumberStyles style, NumberFormatInfo info, out short result)
	{
		return default(bool);
	}

	[Token(Token = "0x60007D5")]
	[Address(RVA = "0x54B6D30", Offset = "0x54B5D30", VA = "0x54B6D30", Slot = "5")]
	public TypeCode GetTypeCode()
	{
		return default(TypeCode);
	}

	[Token(Token = "0x60007D6")]
	[Address(RVA = "0x54B6D40", Offset = "0x54B5D40", VA = "0x54B6D40", Slot = "6")]
	private bool System_002EIConvertible_002EToBoolean(IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x60007D7")]
	[Address(RVA = "0x54B6DA0", Offset = "0x54B5DA0", VA = "0x54B6DA0", Slot = "7")]
	private char System_002EIConvertible_002EToChar(IFormatProvider provider)
	{
		return default(char);
	}

	[Token(Token = "0x60007D8")]
	[Address(RVA = "0x54B6E00", Offset = "0x54B5E00", VA = "0x54B6E00", Slot = "8")]
	private sbyte System_002EIConvertible_002EToSByte(IFormatProvider provider)
	{
		return default(sbyte);
	}

	[Token(Token = "0x60007D9")]
	[Address(RVA = "0x54B6E60", Offset = "0x54B5E60", VA = "0x54B6E60", Slot = "9")]
	private byte System_002EIConvertible_002EToByte(IFormatProvider provider)
	{
		return default(byte);
	}

	[Token(Token = "0x60007DA")]
	[Address(RVA = "0x54B6EC0", Offset = "0x54B5EC0", VA = "0x54B6EC0", Slot = "10")]
	private short System_002EIConvertible_002EToInt16(IFormatProvider provider)
	{
		return default(short);
	}

	[Token(Token = "0x60007DB")]
	[Address(RVA = "0x54B6ED0", Offset = "0x54B5ED0", VA = "0x54B6ED0", Slot = "11")]
	private ushort System_002EIConvertible_002EToUInt16(IFormatProvider provider)
	{
		return default(ushort);
	}

	[Token(Token = "0x60007DC")]
	[Address(RVA = "0x54B6F30", Offset = "0x54B5F30", VA = "0x54B6F30", Slot = "12")]
	private int System_002EIConvertible_002EToInt32(IFormatProvider provider)
	{
		return default(int);
	}

	[Token(Token = "0x60007DD")]
	[Address(RVA = "0x54B6F90", Offset = "0x54B5F90", VA = "0x54B6F90", Slot = "13")]
	private uint System_002EIConvertible_002EToUInt32(IFormatProvider provider)
	{
		return default(uint);
	}

	[Token(Token = "0x60007DE")]
	[Address(RVA = "0x54B6FF0", Offset = "0x54B5FF0", VA = "0x54B6FF0", Slot = "14")]
	private long System_002EIConvertible_002EToInt64(IFormatProvider provider)
	{
		return default(long);
	}

	[Token(Token = "0x60007DF")]
	[Address(RVA = "0x54B7050", Offset = "0x54B6050", VA = "0x54B7050", Slot = "15")]
	private ulong System_002EIConvertible_002EToUInt64(IFormatProvider provider)
	{
		return default(ulong);
	}

	[Token(Token = "0x60007E0")]
	[Address(RVA = "0x54B70B0", Offset = "0x54B60B0", VA = "0x54B70B0", Slot = "16")]
	private float System_002EIConvertible_002EToSingle(IFormatProvider provider)
	{
		return default(float);
	}

	[Token(Token = "0x60007E1")]
	[Address(RVA = "0x54B7110", Offset = "0x54B6110", VA = "0x54B7110", Slot = "17")]
	private double System_002EIConvertible_002EToDouble(IFormatProvider provider)
	{
		return default(double);
	}

	[Token(Token = "0x60007E2")]
	[Address(RVA = "0x54B7170", Offset = "0x54B6170", VA = "0x54B7170", Slot = "18")]
	private decimal System_002EIConvertible_002EToDecimal(IFormatProvider provider)
	{
		return 0m;
	}

	[Token(Token = "0x60007E3")]
	[Address(RVA = "0x54B71D0", Offset = "0x54B61D0", VA = "0x54B71D0", Slot = "19")]
	private DateTime System_002EIConvertible_002EToDateTime(IFormatProvider provider)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60007E4")]
	[Address(RVA = "0x54B7270", Offset = "0x54B6270", VA = "0x54B7270", Slot = "21")]
	private object System_002EIConvertible_002EToType(Type type, IFormatProvider provider)
	{
		return null;
	}
}
