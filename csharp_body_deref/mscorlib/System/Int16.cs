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
	[Token(Token = "0x400036A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly short m_value;

	[Token(Token = "0x400036B")]
	public const short MaxValue = 32767;

	[Token(Token = "0x400036C")]
	public const short MinValue = -32768;

	[Token(Token = "0x60007B9")]
	[Address(RVA = "0x3CB22A0", Offset = "0x3CB22A0", VA = "0x3CB22A0", Slot = "4")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x60007BA")]
	[Address(RVA = "0x3CB2320", Offset = "0x3CB2320", VA = "0x3CB2320", Slot = "23")]
	public int CompareTo(short value)
	{
		return default(int);
	}

	[Token(Token = "0x60007BB")]
	[Address(RVA = "0x3CB2330", Offset = "0x3CB2330", VA = "0x3CB2330", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60007BC")]
	[Address(RVA = "0x3CB2360", Offset = "0x3CB2360", VA = "0x3CB2360", Slot = "24")]
	[System.Runtime.Versioning.NonVersionable]
	public bool Equals(short obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60007BD")]
	[Address(RVA = "0x3CB2370", Offset = "0x3CB2370", VA = "0x3CB2370", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60007BE")]
	[Address(RVA = "0x3CB2380", Offset = "0x3CB2380", VA = "0x3CB2380", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60007BF")]
	[Address(RVA = "0x3CB26D0", Offset = "0x3CB26D0", VA = "0x3CB26D0", Slot = "20")]
	public string ToString(IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x60007C0")]
	[Address(RVA = "0x3CB2760", Offset = "0x3CB2760", VA = "0x3CB2760", Slot = "22")]
	public string ToString(string format, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x60007C1")]
	[Address(RVA = "0x3CB2B40", Offset = "0x3CB2B40", VA = "0x3CB2B40", Slot = "25")]
	public bool TryFormat(Span<char> destination, out int charsWritten, [Optional] ReadOnlySpan<char> format, [Optional] IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x60007C2")]
	[Address(RVA = "0x3CB3270", Offset = "0x3CB3270", VA = "0x3CB3270")]
	public static short Parse(string s, IFormatProvider provider)
	{
		return default(short);
	}

	[Token(Token = "0x60007C3")]
	[Address(RVA = "0x3CB3480", Offset = "0x3CB3480", VA = "0x3CB3480")]
	public static short Parse(string s, NumberStyles style, IFormatProvider provider)
	{
		return default(short);
	}

	[Token(Token = "0x60007C4")]
	[Address(RVA = "0x3CB32F0", Offset = "0x3CB32F0", VA = "0x3CB32F0")]
	private static short Parse(ReadOnlySpan<char> s, NumberStyles style, NumberFormatInfo info)
	{
		return default(short);
	}

	[Token(Token = "0x60007C5")]
	[Address(RVA = "0x3CB3780", Offset = "0x3CB3780", VA = "0x3CB3780")]
	public static bool TryParse(string s, out short result)
	{
		return default(bool);
	}

	[Token(Token = "0x60007C6")]
	[Address(RVA = "0x3CB3960", Offset = "0x3CB3960", VA = "0x3CB3960")]
	public static bool TryParse(string s, NumberStyles style, IFormatProvider provider, out short result)
	{
		return default(bool);
	}

	[Token(Token = "0x60007C7")]
	[Address(RVA = "0x3CB38B0", Offset = "0x3CB38B0", VA = "0x3CB38B0")]
	private static bool TryParse(ReadOnlySpan<char> s, NumberStyles style, NumberFormatInfo info, out short result)
	{
		return default(bool);
	}

	[Token(Token = "0x60007C8")]
	[Address(RVA = "0x3CB3C70", Offset = "0x3CB3C70", VA = "0x3CB3C70", Slot = "5")]
	public TypeCode GetTypeCode()
	{
		return default(TypeCode);
	}

	[Token(Token = "0x60007C9")]
	[Address(RVA = "0x3CB3C80", Offset = "0x3CB3C80", VA = "0x3CB3C80", Slot = "6")]
	private bool System_002EIConvertible_002EToBoolean(IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x60007CA")]
	[Address(RVA = "0x3CB3CE0", Offset = "0x3CB3CE0", VA = "0x3CB3CE0", Slot = "7")]
	private char System_002EIConvertible_002EToChar(IFormatProvider provider)
	{
		return default(char);
	}

	[Token(Token = "0x60007CB")]
	[Address(RVA = "0x3CB3D40", Offset = "0x3CB3D40", VA = "0x3CB3D40", Slot = "8")]
	private sbyte System_002EIConvertible_002EToSByte(IFormatProvider provider)
	{
		return default(sbyte);
	}

	[Token(Token = "0x60007CC")]
	[Address(RVA = "0x3CB3DA0", Offset = "0x3CB3DA0", VA = "0x3CB3DA0", Slot = "9")]
	private byte System_002EIConvertible_002EToByte(IFormatProvider provider)
	{
		return default(byte);
	}

	[Token(Token = "0x60007CD")]
	[Address(RVA = "0x3CB3E00", Offset = "0x3CB3E00", VA = "0x3CB3E00", Slot = "10")]
	private short System_002EIConvertible_002EToInt16(IFormatProvider provider)
	{
		return default(short);
	}

	[Token(Token = "0x60007CE")]
	[Address(RVA = "0x3CB3E10", Offset = "0x3CB3E10", VA = "0x3CB3E10", Slot = "11")]
	private ushort System_002EIConvertible_002EToUInt16(IFormatProvider provider)
	{
		return default(ushort);
	}

	[Token(Token = "0x60007CF")]
	[Address(RVA = "0x3CB3E70", Offset = "0x3CB3E70", VA = "0x3CB3E70", Slot = "12")]
	private int System_002EIConvertible_002EToInt32(IFormatProvider provider)
	{
		return default(int);
	}

	[Token(Token = "0x60007D0")]
	[Address(RVA = "0x3CB3ED0", Offset = "0x3CB3ED0", VA = "0x3CB3ED0", Slot = "13")]
	private uint System_002EIConvertible_002EToUInt32(IFormatProvider provider)
	{
		return default(uint);
	}

	[Token(Token = "0x60007D1")]
	[Address(RVA = "0x3CB3F30", Offset = "0x3CB3F30", VA = "0x3CB3F30", Slot = "14")]
	private long System_002EIConvertible_002EToInt64(IFormatProvider provider)
	{
		return default(long);
	}

	[Token(Token = "0x60007D2")]
	[Address(RVA = "0x3CB3F90", Offset = "0x3CB3F90", VA = "0x3CB3F90", Slot = "15")]
	private ulong System_002EIConvertible_002EToUInt64(IFormatProvider provider)
	{
		return default(ulong);
	}

	[Token(Token = "0x60007D3")]
	[Address(RVA = "0x3CB3FF0", Offset = "0x3CB3FF0", VA = "0x3CB3FF0", Slot = "16")]
	private float System_002EIConvertible_002EToSingle(IFormatProvider provider)
	{
		return default(float);
	}

	[Token(Token = "0x60007D4")]
	[Address(RVA = "0x3CB4050", Offset = "0x3CB4050", VA = "0x3CB4050", Slot = "17")]
	private double System_002EIConvertible_002EToDouble(IFormatProvider provider)
	{
		return default(double);
	}

	[Token(Token = "0x60007D5")]
	[Address(RVA = "0x3CB40B0", Offset = "0x3CB40B0", VA = "0x3CB40B0", Slot = "18")]
	private decimal System_002EIConvertible_002EToDecimal(IFormatProvider provider)
	{
		return default(decimal);
	}

	[Token(Token = "0x60007D6")]
	[Address(RVA = "0x3CB4110", Offset = "0x3CB4110", VA = "0x3CB4110", Slot = "19")]
	private DateTime System_002EIConvertible_002EToDateTime(IFormatProvider provider)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60007D7")]
	[Address(RVA = "0x3CB41B0", Offset = "0x3CB41B0", VA = "0x3CB41B0", Slot = "21")]
	private object System_002EIConvertible_002EToType(Type type, IFormatProvider provider)
	{
		return null;
	}
}
