// ==================== AoTTG2 cross-reference ====================
// Type: System.UInt64
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
[Token(Token = "0x2000126")]
[CLSCompliant(false)]
public readonly struct UInt64 : IComparable, IConvertible, IFormattable, IComparable<ulong>, IEquatable<ulong>, System.ISpanFormattable
{
	[Token(Token = "0x400041F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly ulong m_value;

	[Token(Token = "0x4000420")]
	public const ulong MaxValue = 18446744073709551615uL;

	[Token(Token = "0x4000421")]
	public const ulong MinValue = 0uL;

	[Token(Token = "0x6000B70")]
	[Address(RVA = "0x3CD93C0", Offset = "0x3CD93C0", VA = "0x3CD93C0", Slot = "4")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000B71")]
	[Address(RVA = "0x3CD9450", Offset = "0x3CD9450", VA = "0x3CD9450", Slot = "23")]
	public int CompareTo(ulong value)
	{
		return default(int);
	}

	[Token(Token = "0x6000B72")]
	[Address(RVA = "0x3CD9470", Offset = "0x3CD9470", VA = "0x3CD9470", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B73")]
	[Address(RVA = "0x3CD94A0", Offset = "0x3CD94A0", VA = "0x3CD94A0", Slot = "24")]
	[System.Runtime.Versioning.NonVersionable]
	public bool Equals(ulong obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B74")]
	[Address(RVA = "0x3CD94B0", Offset = "0x3CD94B0", VA = "0x3CD94B0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000B75")]
	[Address(RVA = "0x3CD94C0", Offset = "0x3CD94C0", VA = "0x3CD94C0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000B76")]
	[Address(RVA = "0x3CD9540", Offset = "0x3CD9540", VA = "0x3CD9540", Slot = "20")]
	public string ToString(IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6000B77")]
	[Address(RVA = "0x3CD95D0", Offset = "0x3CD95D0", VA = "0x3CD95D0")]
	public string ToString(string format)
	{
		return null;
	}

	[Token(Token = "0x6000B78")]
	[Address(RVA = "0x3CD9690", Offset = "0x3CD9690", VA = "0x3CD9690", Slot = "22")]
	public string ToString(string format, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6000B79")]
	[Address(RVA = "0x3CD9760", Offset = "0x3CD9760", VA = "0x3CD9760", Slot = "25")]
	public bool TryFormat(Span<char> destination, out int charsWritten, [Optional] ReadOnlySpan<char> format, [Optional] IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B7A")]
	[Address(RVA = "0x3CD97F0", Offset = "0x3CD97F0", VA = "0x3CD97F0")]
	[CLSCompliant(false)]
	public static ulong Parse(string s, IFormatProvider provider)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000B7B")]
	[Address(RVA = "0x3CD98A0", Offset = "0x3CD98A0", VA = "0x3CD98A0")]
	[CLSCompliant(false)]
	public static ulong Parse(string s, NumberStyles style, IFormatProvider provider)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000B7C")]
	[Address(RVA = "0x3CD9960", Offset = "0x3CD9960", VA = "0x3CD9960")]
	[CLSCompliant(false)]
	public static bool TryParse(string s, out ulong result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B7D")]
	[Address(RVA = "0x3CD9A20", Offset = "0x3CD9A20", VA = "0x3CD9A20")]
	[CLSCompliant(false)]
	public static bool TryParse(string s, NumberStyles style, IFormatProvider provider, out ulong result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B7E")]
	[Address(RVA = "0x3CD9AF0", Offset = "0x3CD9AF0", VA = "0x3CD9AF0", Slot = "5")]
	public TypeCode GetTypeCode()
	{
		return default(TypeCode);
	}

	[Token(Token = "0x6000B7F")]
	[Address(RVA = "0x3CD9B00", Offset = "0x3CD9B00", VA = "0x3CD9B00", Slot = "6")]
	private bool System_002EIConvertible_002EToBoolean(IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B80")]
	[Address(RVA = "0x3CD9B60", Offset = "0x3CD9B60", VA = "0x3CD9B60", Slot = "7")]
	private char System_002EIConvertible_002EToChar(IFormatProvider provider)
	{
		return default(char);
	}

	[Token(Token = "0x6000B81")]
	[Address(RVA = "0x3CD9BC0", Offset = "0x3CD9BC0", VA = "0x3CD9BC0", Slot = "8")]
	private sbyte System_002EIConvertible_002EToSByte(IFormatProvider provider)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000B82")]
	[Address(RVA = "0x3CD9C20", Offset = "0x3CD9C20", VA = "0x3CD9C20", Slot = "9")]
	private byte System_002EIConvertible_002EToByte(IFormatProvider provider)
	{
		return default(byte);
	}

	[Token(Token = "0x6000B83")]
	[Address(RVA = "0x3CD9C80", Offset = "0x3CD9C80", VA = "0x3CD9C80", Slot = "10")]
	private short System_002EIConvertible_002EToInt16(IFormatProvider provider)
	{
		return default(short);
	}

	[Token(Token = "0x6000B84")]
	[Address(RVA = "0x3CD9CE0", Offset = "0x3CD9CE0", VA = "0x3CD9CE0", Slot = "11")]
	private ushort System_002EIConvertible_002EToUInt16(IFormatProvider provider)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000B85")]
	[Address(RVA = "0x3CD9D40", Offset = "0x3CD9D40", VA = "0x3CD9D40", Slot = "12")]
	private int System_002EIConvertible_002EToInt32(IFormatProvider provider)
	{
		return default(int);
	}

	[Token(Token = "0x6000B86")]
	[Address(RVA = "0x3CD9DA0", Offset = "0x3CD9DA0", VA = "0x3CD9DA0", Slot = "13")]
	private uint System_002EIConvertible_002EToUInt32(IFormatProvider provider)
	{
		return default(uint);
	}

	[Token(Token = "0x6000B87")]
	[Address(RVA = "0x3CD9E00", Offset = "0x3CD9E00", VA = "0x3CD9E00", Slot = "14")]
	private long System_002EIConvertible_002EToInt64(IFormatProvider provider)
	{
		return default(long);
	}

	[Token(Token = "0x6000B88")]
	[Address(RVA = "0x3CD9E60", Offset = "0x3CD9E60", VA = "0x3CD9E60", Slot = "15")]
	private ulong System_002EIConvertible_002EToUInt64(IFormatProvider provider)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000B89")]
	[Address(RVA = "0x3CD9E70", Offset = "0x3CD9E70", VA = "0x3CD9E70", Slot = "16")]
	private float System_002EIConvertible_002EToSingle(IFormatProvider provider)
	{
		return default(float);
	}

	[Token(Token = "0x6000B8A")]
	[Address(RVA = "0x3CD9ED0", Offset = "0x3CD9ED0", VA = "0x3CD9ED0", Slot = "17")]
	private double System_002EIConvertible_002EToDouble(IFormatProvider provider)
	{
		return default(double);
	}

	[Token(Token = "0x6000B8B")]
	[Address(RVA = "0x3CD9F30", Offset = "0x3CD9F30", VA = "0x3CD9F30", Slot = "18")]
	private decimal System_002EIConvertible_002EToDecimal(IFormatProvider provider)
	{
		return default(decimal);
	}

	[Token(Token = "0x6000B8C")]
	[Address(RVA = "0x3CD9F90", Offset = "0x3CD9F90", VA = "0x3CD9F90", Slot = "19")]
	private DateTime System_002EIConvertible_002EToDateTime(IFormatProvider provider)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000B8D")]
	[Address(RVA = "0x3CDA010", Offset = "0x3CDA010", VA = "0x3CDA010", Slot = "21")]
	private object System_002EIConvertible_002EToType(Type type, IFormatProvider provider)
	{
		return null;
	}
}
