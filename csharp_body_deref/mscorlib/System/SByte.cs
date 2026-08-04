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
	[Token(Token = "0x40003BC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly sbyte m_value;

	[Token(Token = "0x6000993")]
	[Address(RVA = "0x3CCBEA0", Offset = "0x3CCBEA0", VA = "0x3CCBEA0", Slot = "4")]
	public int CompareTo(object obj)
	{
		return default(int);
	}

	[Token(Token = "0x6000994")]
	[Address(RVA = "0x3CCBF20", Offset = "0x3CCBF20", VA = "0x3CCBF20", Slot = "23")]
	public int CompareTo(sbyte value)
	{
		return default(int);
	}

	[Token(Token = "0x6000995")]
	[Address(RVA = "0x3CCBF30", Offset = "0x3CCBF30", VA = "0x3CCBF30", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000996")]
	[Address(RVA = "0x3CCBF60", Offset = "0x3CCBF60", VA = "0x3CCBF60", Slot = "24")]
	[System.Runtime.Versioning.NonVersionable]
	public bool Equals(sbyte obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000997")]
	[Address(RVA = "0x3CCBF70", Offset = "0x3CCBF70", VA = "0x3CCBF70", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000998")]
	[Address(RVA = "0x3CCBF80", Offset = "0x3CCBF80", VA = "0x3CCBF80", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000999")]
	[Address(RVA = "0x3CCC000", Offset = "0x3CCC000", VA = "0x3CCC000", Slot = "20")]
	public string ToString(IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x600099A")]
	[Address(RVA = "0x3CCC090", Offset = "0x3CCC090", VA = "0x3CCC090", Slot = "22")]
	public string ToString(string format, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x600099B")]
	[Address(RVA = "0x3CCC1E0", Offset = "0x3CCC1E0", VA = "0x3CCC1E0", Slot = "25")]
	public bool TryFormat(Span<char> destination, out int charsWritten, [Optional] ReadOnlySpan<char> format, [Optional] IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x600099C")]
	[Address(RVA = "0x3CCC2D0", Offset = "0x3CCC2D0", VA = "0x3CCC2D0")]
	[CLSCompliant(false)]
	public static sbyte Parse(string s, IFormatProvider provider)
	{
		return default(sbyte);
	}

	[Token(Token = "0x600099D")]
	[Address(RVA = "0x3CCC4F0", Offset = "0x3CCC4F0", VA = "0x3CCC4F0")]
	[CLSCompliant(false)]
	public static sbyte Parse(string s, NumberStyles style, IFormatProvider provider)
	{
		return default(sbyte);
	}

	[Token(Token = "0x600099E")]
	[Address(RVA = "0x3CCC360", Offset = "0x3CCC360", VA = "0x3CCC360")]
	private static sbyte Parse(ReadOnlySpan<char> s, NumberStyles style, NumberFormatInfo info)
	{
		return default(sbyte);
	}

	[Token(Token = "0x600099F")]
	[Address(RVA = "0x3CCC570", Offset = "0x3CCC570", VA = "0x3CCC570")]
	[CLSCompliant(false)]
	public static bool TryParse(string s, out sbyte result)
	{
		return default(bool);
	}

	[Token(Token = "0x60009A0")]
	[Address(RVA = "0x3CCC700", Offset = "0x3CCC700", VA = "0x3CCC700")]
	[CLSCompliant(false)]
	public static bool TryParse(string s, NumberStyles style, IFormatProvider provider, out sbyte result)
	{
		return default(bool);
	}

	[Token(Token = "0x60009A1")]
	[Address(RVA = "0x3CCC650", Offset = "0x3CCC650", VA = "0x3CCC650")]
	private static bool TryParse(ReadOnlySpan<char> s, NumberStyles style, NumberFormatInfo info, out sbyte result)
	{
		return default(bool);
	}

	[Token(Token = "0x60009A2")]
	[Address(RVA = "0x3CCC800", Offset = "0x3CCC800", VA = "0x3CCC800", Slot = "5")]
	public TypeCode GetTypeCode()
	{
		return default(TypeCode);
	}

	[Token(Token = "0x60009A3")]
	[Address(RVA = "0x3CCC810", Offset = "0x3CCC810", VA = "0x3CCC810", Slot = "6")]
	private bool System_002EIConvertible_002EToBoolean(IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x60009A4")]
	[Address(RVA = "0x3CCC860", Offset = "0x3CCC860", VA = "0x3CCC860", Slot = "7")]
	private char System_002EIConvertible_002EToChar(IFormatProvider provider)
	{
		return default(char);
	}

	[Token(Token = "0x60009A5")]
	[Address(RVA = "0x3CCC8B0", Offset = "0x3CCC8B0", VA = "0x3CCC8B0", Slot = "8")]
	private sbyte System_002EIConvertible_002EToSByte(IFormatProvider provider)
	{
		return default(sbyte);
	}

	[Token(Token = "0x60009A6")]
	[Address(RVA = "0x3CCC8C0", Offset = "0x3CCC8C0", VA = "0x3CCC8C0", Slot = "9")]
	private byte System_002EIConvertible_002EToByte(IFormatProvider provider)
	{
		return default(byte);
	}

	[Token(Token = "0x60009A7")]
	[Address(RVA = "0x3CCC910", Offset = "0x3CCC910", VA = "0x3CCC910", Slot = "10")]
	private short System_002EIConvertible_002EToInt16(IFormatProvider provider)
	{
		return default(short);
	}

	[Token(Token = "0x60009A8")]
	[Address(RVA = "0x3CCC960", Offset = "0x3CCC960", VA = "0x3CCC960", Slot = "11")]
	private ushort System_002EIConvertible_002EToUInt16(IFormatProvider provider)
	{
		return default(ushort);
	}

	[Token(Token = "0x60009A9")]
	[Address(RVA = "0x3CCC9B0", Offset = "0x3CCC9B0", VA = "0x3CCC9B0", Slot = "12")]
	private int System_002EIConvertible_002EToInt32(IFormatProvider provider)
	{
		return default(int);
	}

	[Token(Token = "0x60009AA")]
	[Address(RVA = "0x3CCC9C0", Offset = "0x3CCC9C0", VA = "0x3CCC9C0", Slot = "13")]
	private uint System_002EIConvertible_002EToUInt32(IFormatProvider provider)
	{
		return default(uint);
	}

	[Token(Token = "0x60009AB")]
	[Address(RVA = "0x3CCCA10", Offset = "0x3CCCA10", VA = "0x3CCCA10", Slot = "14")]
	private long System_002EIConvertible_002EToInt64(IFormatProvider provider)
	{
		return default(long);
	}

	[Token(Token = "0x60009AC")]
	[Address(RVA = "0x3CCCA60", Offset = "0x3CCCA60", VA = "0x3CCCA60", Slot = "15")]
	private ulong System_002EIConvertible_002EToUInt64(IFormatProvider provider)
	{
		return default(ulong);
	}

	[Token(Token = "0x60009AD")]
	[Address(RVA = "0x3CCCAB0", Offset = "0x3CCCAB0", VA = "0x3CCCAB0", Slot = "16")]
	private float System_002EIConvertible_002EToSingle(IFormatProvider provider)
	{
		return default(float);
	}

	[Token(Token = "0x60009AE")]
	[Address(RVA = "0x3CCCB00", Offset = "0x3CCCB00", VA = "0x3CCCB00", Slot = "17")]
	private double System_002EIConvertible_002EToDouble(IFormatProvider provider)
	{
		return default(double);
	}

	[Token(Token = "0x60009AF")]
	[Address(RVA = "0x3CCCB50", Offset = "0x3CCCB50", VA = "0x3CCCB50", Slot = "18")]
	private decimal System_002EIConvertible_002EToDecimal(IFormatProvider provider)
	{
		return default(decimal);
	}

	[Token(Token = "0x60009B0")]
	[Address(RVA = "0x3CCCBA0", Offset = "0x3CCCBA0", VA = "0x3CCCBA0", Slot = "19")]
	private DateTime System_002EIConvertible_002EToDateTime(IFormatProvider provider)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60009B1")]
	[Address(RVA = "0x3CCCC20", Offset = "0x3CCCC20", VA = "0x3CCCC20", Slot = "21")]
	private object System_002EIConvertible_002EToType(Type type, IFormatProvider provider)
	{
		return null;
	}
}
