// ==================== AoTTG2 cross-reference ====================
// Type: System.Double
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Globalization;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Versioning;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x20000A8")]
public readonly struct Double : IComparable, IConvertible, IFormattable, IComparable<double>, IEquatable<double>, System.ISpanFormattable
{
	[Token(Token = "0x4000257")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly double m_value;

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600067F")]
	[Address(RVA = "0x549D780", Offset = "0x549C780", VA = "0x549D780")]
	[System.Runtime.Versioning.NonVersionable]
	public static bool IsFinite(double d)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000680")]
	[Address(RVA = "0x549D7A0", Offset = "0x549C7A0", VA = "0x549D7A0")]
	[System.Runtime.Versioning.NonVersionable]
	public static bool IsInfinity(double d)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000681")]
	[Address(RVA = "0x549D7D0", Offset = "0x549C7D0", VA = "0x549D7D0")]
	[System.Runtime.Versioning.NonVersionable]
	public static bool IsNaN(double d)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000682")]
	[Address(RVA = "0x549D800", Offset = "0x549C800", VA = "0x549D800")]
	[System.Runtime.Versioning.NonVersionable]
	public static bool IsNegative(double d)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000683")]
	[Address(RVA = "0x549D810", Offset = "0x549C810", VA = "0x549D810")]
	[System.Runtime.Versioning.NonVersionable]
	public static bool IsNegativeInfinity(double d)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000684")]
	[Address(RVA = "0x549D820", Offset = "0x549C820", VA = "0x549D820")]
	[System.Runtime.Versioning.NonVersionable]
	public static bool IsPositiveInfinity(double d)
	{
		return default(bool);
	}

	[Token(Token = "0x6000685")]
	[Address(RVA = "0x549D830", Offset = "0x549C830", VA = "0x549D830", Slot = "4")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000686")]
	[Address(RVA = "0x549D910", Offset = "0x549C910", VA = "0x549D910", Slot = "23")]
	public int CompareTo(double value)
	{
		return default(int);
	}

	[Token(Token = "0x6000687")]
	[Address(RVA = "0x549D970", Offset = "0x549C970", VA = "0x549D970", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000688")]
	[Address(RVA = "0x549D9E0", Offset = "0x549C9E0", VA = "0x549D9E0", Slot = "24")]
	public bool Equals(double obj)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000689")]
	[Address(RVA = "0x549DA30", Offset = "0x549CA30", VA = "0x549DA30", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600068A")]
	[Address(RVA = "0x549DA60", Offset = "0x549CA60", VA = "0x549DA60", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600068B")]
	[Address(RVA = "0x549DAD0", Offset = "0x549CAD0", VA = "0x549DAD0")]
	public string ToString(string format)
	{
		return null;
	}

	[Token(Token = "0x600068C")]
	[Address(RVA = "0x549DB40", Offset = "0x549CB40", VA = "0x549DB40", Slot = "20")]
	public string ToString(IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x600068D")]
	[Address(RVA = "0x549DBB0", Offset = "0x549CBB0", VA = "0x549DBB0", Slot = "22")]
	public string ToString(string format, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x600068E")]
	[Address(RVA = "0x549DC30", Offset = "0x549CC30", VA = "0x549DC30", Slot = "25")]
	public bool TryFormat(Span<char> destination, out int charsWritten, [Optional] ReadOnlySpan<char> format, [Optional] IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x600068F")]
	[Address(RVA = "0x549DCE0", Offset = "0x549CCE0", VA = "0x549DCE0")]
	public static double Parse(string s)
	{
		return default(double);
	}

	[Token(Token = "0x6000690")]
	[Address(RVA = "0x549DDA0", Offset = "0x549CDA0", VA = "0x549DDA0")]
	public static double Parse(string s, IFormatProvider provider)
	{
		return default(double);
	}

	[Token(Token = "0x6000691")]
	[Address(RVA = "0x549DE70", Offset = "0x549CE70", VA = "0x549DE70")]
	public static double Parse(string s, NumberStyles style, IFormatProvider provider)
	{
		return default(double);
	}

	[Token(Token = "0x6000692")]
	[Address(RVA = "0x549DF40", Offset = "0x549CF40", VA = "0x549DF40")]
	public static bool TryParse(string s, out double result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000693")]
	[Address(RVA = "0x549E280", Offset = "0x549D280", VA = "0x549E280")]
	public static bool TryParse(string s, NumberStyles style, IFormatProvider provider, out double result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000694")]
	[Address(RVA = "0x549DFB0", Offset = "0x549CFB0", VA = "0x549DFB0")]
	private static bool TryParse(ReadOnlySpan<char> s, NumberStyles style, NumberFormatInfo info, out double result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000695")]
	[Address(RVA = "0x549E310", Offset = "0x549D310", VA = "0x549E310", Slot = "5")]
	public TypeCode GetTypeCode()
	{
		return default(TypeCode);
	}

	[Token(Token = "0x6000696")]
	[Address(RVA = "0x549E320", Offset = "0x549D320", VA = "0x549E320", Slot = "6")]
	private bool System_002EIConvertible_002EToBoolean(IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x6000697")]
	[Address(RVA = "0x549E390", Offset = "0x549D390", VA = "0x549E390", Slot = "7")]
	private char System_002EIConvertible_002EToChar(IFormatProvider provider)
	{
		return default(char);
	}

	[Token(Token = "0x6000698")]
	[Address(RVA = "0x549E410", Offset = "0x549D410", VA = "0x549E410", Slot = "8")]
	private sbyte System_002EIConvertible_002EToSByte(IFormatProvider provider)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000699")]
	[Address(RVA = "0x549E480", Offset = "0x549D480", VA = "0x549E480", Slot = "9")]
	private byte System_002EIConvertible_002EToByte(IFormatProvider provider)
	{
		return default(byte);
	}

	[Token(Token = "0x600069A")]
	[Address(RVA = "0x549E4F0", Offset = "0x549D4F0", VA = "0x549E4F0", Slot = "10")]
	private short System_002EIConvertible_002EToInt16(IFormatProvider provider)
	{
		return default(short);
	}

	[Token(Token = "0x600069B")]
	[Address(RVA = "0x549E560", Offset = "0x549D560", VA = "0x549E560", Slot = "11")]
	private ushort System_002EIConvertible_002EToUInt16(IFormatProvider provider)
	{
		return default(ushort);
	}

	[Token(Token = "0x600069C")]
	[Address(RVA = "0x549E5D0", Offset = "0x549D5D0", VA = "0x549E5D0", Slot = "12")]
	private int System_002EIConvertible_002EToInt32(IFormatProvider provider)
	{
		return default(int);
	}

	[Token(Token = "0x600069D")]
	[Address(RVA = "0x549E640", Offset = "0x549D640", VA = "0x549E640", Slot = "13")]
	private uint System_002EIConvertible_002EToUInt32(IFormatProvider provider)
	{
		return default(uint);
	}

	[Token(Token = "0x600069E")]
	[Address(RVA = "0x549E6B0", Offset = "0x549D6B0", VA = "0x549E6B0", Slot = "14")]
	private long System_002EIConvertible_002EToInt64(IFormatProvider provider)
	{
		return default(long);
	}

	[Token(Token = "0x600069F")]
	[Address(RVA = "0x549E720", Offset = "0x549D720", VA = "0x549E720", Slot = "15")]
	private ulong System_002EIConvertible_002EToUInt64(IFormatProvider provider)
	{
		return default(ulong);
	}

	[Token(Token = "0x60006A0")]
	[Address(RVA = "0x549E790", Offset = "0x549D790", VA = "0x549E790", Slot = "16")]
	private float System_002EIConvertible_002EToSingle(IFormatProvider provider)
	{
		return default(float);
	}

	[Token(Token = "0x60006A1")]
	[Address(RVA = "0x549E800", Offset = "0x549D800", VA = "0x549E800", Slot = "17")]
	private double System_002EIConvertible_002EToDouble(IFormatProvider provider)
	{
		return default(double);
	}

	[Token(Token = "0x60006A2")]
	[Address(RVA = "0x549E810", Offset = "0x549D810", VA = "0x549E810", Slot = "18")]
	private decimal System_002EIConvertible_002EToDecimal(IFormatProvider provider)
	{
		return 0m;
	}

	[Token(Token = "0x60006A3")]
	[Address(RVA = "0x549E880", Offset = "0x549D880", VA = "0x549E880", Slot = "19")]
	private DateTime System_002EIConvertible_002EToDateTime(IFormatProvider provider)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60006A4")]
	[Address(RVA = "0x549E900", Offset = "0x549D900", VA = "0x549E900", Slot = "21")]
	private object System_002EIConvertible_002EToType(Type type, IFormatProvider provider)
	{
		return null;
	}
}
