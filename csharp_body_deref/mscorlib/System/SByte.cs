// ==================== AoTTG2 cross-reference ====================
// Type: System.SByte
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
[Token(Token = "0x2000106")]
[CLSCompliant(false)]
public readonly struct SByte : IComparable, IConvertible, IFormattable, IComparable<sbyte>, IEquatable<sbyte>, System.ISpanFormattable
{
	[Token(Token = "0x4000399")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly sbyte m_value;

	[Token(Token = "0x60009AC")]
	[Address(RVA = "0x54CF840", Offset = "0x54CE840", VA = "0x54CF840", Slot = "4")]
	public int CompareTo(object obj)
	{
		return default(int);
	}

	[Token(Token = "0x60009AD")]
	[Address(RVA = "0x54CF8C0", Offset = "0x54CE8C0", VA = "0x54CF8C0", Slot = "23")]
	public int CompareTo(sbyte value)
	{
		return default(int);
	}

	[Token(Token = "0x60009AE")]
	[Address(RVA = "0x54CF8D0", Offset = "0x54CE8D0", VA = "0x54CF8D0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60009AF")]
	[Address(RVA = "0x54CF900", Offset = "0x54CE900", VA = "0x54CF900", Slot = "24")]
	[System.Runtime.Versioning.NonVersionable]
	public bool Equals(sbyte obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60009B0")]
	[Address(RVA = "0x54CF910", Offset = "0x54CE910", VA = "0x54CF910", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60009B1")]
	[Address(RVA = "0x54CF920", Offset = "0x54CE920", VA = "0x54CF920", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60009B2")]
	[Address(RVA = "0x54CF9A0", Offset = "0x54CE9A0", VA = "0x54CF9A0", Slot = "20")]
	public string ToString(IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x60009B3")]
	[Address(RVA = "0x54CFA30", Offset = "0x54CEA30", VA = "0x54CFA30", Slot = "22")]
	public string ToString(string format, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x60009B4")]
	[Address(RVA = "0x54CFB80", Offset = "0x54CEB80", VA = "0x54CFB80", Slot = "25")]
	public bool TryFormat(Span<char> destination, out int charsWritten, [Optional] ReadOnlySpan<char> format, [Optional] IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x60009B5")]
	[Address(RVA = "0x54CFC70", Offset = "0x54CEC70", VA = "0x54CFC70")]
	[CLSCompliant(false)]
	public static sbyte Parse(string s, IFormatProvider provider)
	{
		return default(sbyte);
	}

	[Token(Token = "0x60009B6")]
	[Address(RVA = "0x54CFEA0", Offset = "0x54CEEA0", VA = "0x54CFEA0")]
	[CLSCompliant(false)]
	public static sbyte Parse(string s, NumberStyles style, IFormatProvider provider)
	{
		return default(sbyte);
	}

	[Token(Token = "0x60009B7")]
	[Address(RVA = "0x54CFD20", Offset = "0x54CED20", VA = "0x54CFD20")]
	private static sbyte Parse(ReadOnlySpan<char> s, NumberStyles style, NumberFormatInfo info)
	{
		return default(sbyte);
	}

	[Token(Token = "0x60009B8")]
	[Address(RVA = "0x54CFF40", Offset = "0x54CEF40", VA = "0x54CFF40")]
	[CLSCompliant(false)]
	public static bool TryParse(string s, out sbyte result)
	{
		return default(bool);
	}

	[Token(Token = "0x60009B9")]
	[Address(RVA = "0x54D00D0", Offset = "0x54CF0D0", VA = "0x54D00D0")]
	[CLSCompliant(false)]
	public static bool TryParse(string s, NumberStyles style, IFormatProvider provider, out sbyte result)
	{
		return default(bool);
	}

	[Token(Token = "0x60009BA")]
	[Address(RVA = "0x54D0020", Offset = "0x54CF020", VA = "0x54D0020")]
	private static bool TryParse(ReadOnlySpan<char> s, NumberStyles style, NumberFormatInfo info, out sbyte result)
	{
		return default(bool);
	}

	[Token(Token = "0x60009BB")]
	[Address(RVA = "0x54D01D0", Offset = "0x54CF1D0", VA = "0x54D01D0", Slot = "5")]
	public TypeCode GetTypeCode()
	{
		return default(TypeCode);
	}

	[Token(Token = "0x60009BC")]
	[Address(RVA = "0x54D01E0", Offset = "0x54CF1E0", VA = "0x54D01E0", Slot = "6")]
	private bool System_002EIConvertible_002EToBoolean(IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x60009BD")]
	[Address(RVA = "0x54D0240", Offset = "0x54CF240", VA = "0x54D0240", Slot = "7")]
	private char System_002EIConvertible_002EToChar(IFormatProvider provider)
	{
		return default(char);
	}

	[Token(Token = "0x60009BE")]
	[Address(RVA = "0x54D02A0", Offset = "0x54CF2A0", VA = "0x54D02A0", Slot = "8")]
	private sbyte System_002EIConvertible_002EToSByte(IFormatProvider provider)
	{
		return default(sbyte);
	}

	[Token(Token = "0x60009BF")]
	[Address(RVA = "0x54D02B0", Offset = "0x54CF2B0", VA = "0x54D02B0", Slot = "9")]
	private byte System_002EIConvertible_002EToByte(IFormatProvider provider)
	{
		return default(byte);
	}

	[Token(Token = "0x60009C0")]
	[Address(RVA = "0x54D0310", Offset = "0x54CF310", VA = "0x54D0310", Slot = "10")]
	private short System_002EIConvertible_002EToInt16(IFormatProvider provider)
	{
		return default(short);
	}

	[Token(Token = "0x60009C1")]
	[Address(RVA = "0x54D0370", Offset = "0x54CF370", VA = "0x54D0370", Slot = "11")]
	private ushort System_002EIConvertible_002EToUInt16(IFormatProvider provider)
	{
		return default(ushort);
	}

	[Token(Token = "0x60009C2")]
	[Address(RVA = "0x54D03D0", Offset = "0x54CF3D0", VA = "0x54D03D0", Slot = "12")]
	private int System_002EIConvertible_002EToInt32(IFormatProvider provider)
	{
		return default(int);
	}

	[Token(Token = "0x60009C3")]
	[Address(RVA = "0x54D03E0", Offset = "0x54CF3E0", VA = "0x54D03E0", Slot = "13")]
	private uint System_002EIConvertible_002EToUInt32(IFormatProvider provider)
	{
		return default(uint);
	}

	[Token(Token = "0x60009C4")]
	[Address(RVA = "0x54D0440", Offset = "0x54CF440", VA = "0x54D0440", Slot = "14")]
	private long System_002EIConvertible_002EToInt64(IFormatProvider provider)
	{
		return default(long);
	}

	[Token(Token = "0x60009C5")]
	[Address(RVA = "0x54D04A0", Offset = "0x54CF4A0", VA = "0x54D04A0", Slot = "15")]
	private ulong System_002EIConvertible_002EToUInt64(IFormatProvider provider)
	{
		return default(ulong);
	}

	[Token(Token = "0x60009C6")]
	[Address(RVA = "0x54D0500", Offset = "0x54CF500", VA = "0x54D0500", Slot = "16")]
	private float System_002EIConvertible_002EToSingle(IFormatProvider provider)
	{
		return default(float);
	}

	[Token(Token = "0x60009C7")]
	[Address(RVA = "0x54D0560", Offset = "0x54CF560", VA = "0x54D0560", Slot = "17")]
	private double System_002EIConvertible_002EToDouble(IFormatProvider provider)
	{
		return default(double);
	}

	[Token(Token = "0x60009C8")]
	[Address(RVA = "0x54D05C0", Offset = "0x54CF5C0", VA = "0x54D05C0", Slot = "18")]
	private decimal System_002EIConvertible_002EToDecimal(IFormatProvider provider)
	{
		return 0m;
	}

	[Token(Token = "0x60009C9")]
	[Address(RVA = "0x54D0620", Offset = "0x54CF620", VA = "0x54D0620", Slot = "19")]
	private DateTime System_002EIConvertible_002EToDateTime(IFormatProvider provider)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60009CA")]
	[Address(RVA = "0x54D06A0", Offset = "0x54CF6A0", VA = "0x54D06A0", Slot = "21")]
	private object System_002EIConvertible_002EToType(Type type, IFormatProvider provider)
	{
		return null;
	}
}
