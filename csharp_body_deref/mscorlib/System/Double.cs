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
	[Token(Token = "0x400026A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly double m_value;

	[Token(Token = "0x400026B")]
	public const double MinValue = -1.7976931348623157E+308;

	[Token(Token = "0x400026C")]
	public const double MaxValue = 1.7976931348623157E+308;

	[Token(Token = "0x400026D")]
	public const double Epsilon = 5E-324;

	[Token(Token = "0x400026E")]
	public const double NegativeInfinity = -1.0 / 0.0;

	[Token(Token = "0x400026F")]
	public const double PositiveInfinity = 1.0 / 0.0;

	[Token(Token = "0x4000270")]
	public const double NaN = 0.0 / 0.0;

	[Token(Token = "0x4000271")]
	internal const double NegativeZero = -0.0;

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000675")]
	[Address(RVA = "0x3C99AA0", Offset = "0x3C99AA0", VA = "0x3C99AA0")]
	[System.Runtime.Versioning.NonVersionable]
	public static bool IsFinite(double d)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000676")]
	[Address(RVA = "0x3C99AC0", Offset = "0x3C99AC0", VA = "0x3C99AC0")]
	[System.Runtime.Versioning.NonVersionable]
	public static bool IsInfinity(double d)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000677")]
	[Address(RVA = "0x3C99AF0", Offset = "0x3C99AF0", VA = "0x3C99AF0")]
	[System.Runtime.Versioning.NonVersionable]
	public static bool IsNaN(double d)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000678")]
	[Address(RVA = "0x3C99B20", Offset = "0x3C99B20", VA = "0x3C99B20")]
	[System.Runtime.Versioning.NonVersionable]
	public static bool IsNegative(double d)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000679")]
	[Address(RVA = "0x3C99B30", Offset = "0x3C99B30", VA = "0x3C99B30")]
	[System.Runtime.Versioning.NonVersionable]
	public static bool IsNegativeInfinity(double d)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600067A")]
	[Address(RVA = "0x3C99B40", Offset = "0x3C99B40", VA = "0x3C99B40")]
	[System.Runtime.Versioning.NonVersionable]
	public static bool IsPositiveInfinity(double d)
	{
		return default(bool);
	}

	[Token(Token = "0x600067B")]
	[Address(RVA = "0x3C99B50", Offset = "0x3C99B50", VA = "0x3C99B50", Slot = "4")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x600067C")]
	[Address(RVA = "0x3C99C20", Offset = "0x3C99C20", VA = "0x3C99C20", Slot = "23")]
	public int CompareTo(double value)
	{
		return default(int);
	}

	[Token(Token = "0x600067D")]
	[Address(RVA = "0x3C99C80", Offset = "0x3C99C80", VA = "0x3C99C80", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600067E")]
	[Address(RVA = "0x3C99D00", Offset = "0x3C99D00", VA = "0x3C99D00", Slot = "24")]
	public bool Equals(double obj)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600067F")]
	[Address(RVA = "0x3C99D50", Offset = "0x3C99D50", VA = "0x3C99D50", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000680")]
	[Address(RVA = "0x3C99D80", Offset = "0x3C99D80", VA = "0x3C99D80", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000681")]
	[Address(RVA = "0x3C99DF0", Offset = "0x3C99DF0", VA = "0x3C99DF0")]
	public string ToString(string format)
	{
		return null;
	}

	[Token(Token = "0x6000682")]
	[Address(RVA = "0x3C99E60", Offset = "0x3C99E60", VA = "0x3C99E60", Slot = "20")]
	public string ToString(IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6000683")]
	[Address(RVA = "0x3C99ED0", Offset = "0x3C99ED0", VA = "0x3C99ED0", Slot = "22")]
	public string ToString(string format, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6000684")]
	[Address(RVA = "0x3C99F50", Offset = "0x3C99F50", VA = "0x3C99F50", Slot = "25")]
	public bool TryFormat(Span<char> destination, out int charsWritten, [Optional] ReadOnlySpan<char> format, [Optional] IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x6000685")]
	[Address(RVA = "0x3C9A000", Offset = "0x3C9A000", VA = "0x3C9A000")]
	public static double Parse(string s)
	{
		return default(double);
	}

	[Token(Token = "0x6000686")]
	[Address(RVA = "0x3C9A0C0", Offset = "0x3C9A0C0", VA = "0x3C9A0C0")]
	public static double Parse(string s, IFormatProvider provider)
	{
		return default(double);
	}

	[Token(Token = "0x6000687")]
	[Address(RVA = "0x3C9A190", Offset = "0x3C9A190", VA = "0x3C9A190")]
	public static double Parse(string s, NumberStyles style, IFormatProvider provider)
	{
		return default(double);
	}

	[Token(Token = "0x6000688")]
	[Address(RVA = "0x3C9A260", Offset = "0x3C9A260", VA = "0x3C9A260")]
	public static bool TryParse(string s, out double result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000689")]
	[Address(RVA = "0x3C9A570", Offset = "0x3C9A570", VA = "0x3C9A570")]
	public static bool TryParse(string s, NumberStyles style, IFormatProvider provider, out double result)
	{
		return default(bool);
	}

	[Token(Token = "0x600068A")]
	[Address(RVA = "0x3C9A2D0", Offset = "0x3C9A2D0", VA = "0x3C9A2D0")]
	private static bool TryParse(ReadOnlySpan<char> s, NumberStyles style, NumberFormatInfo info, out double result)
	{
		return default(bool);
	}

	[Token(Token = "0x600068B")]
	[Address(RVA = "0x3C9A600", Offset = "0x3C9A600", VA = "0x3C9A600", Slot = "5")]
	public TypeCode GetTypeCode()
	{
		return default(TypeCode);
	}

	[Token(Token = "0x600068C")]
	[Address(RVA = "0x3C9A610", Offset = "0x3C9A610", VA = "0x3C9A610", Slot = "6")]
	private bool System_002EIConvertible_002EToBoolean(IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x600068D")]
	[Address(RVA = "0x3C9A680", Offset = "0x3C9A680", VA = "0x3C9A680", Slot = "7")]
	private char System_002EIConvertible_002EToChar(IFormatProvider provider)
	{
		return default(char);
	}

	[Token(Token = "0x600068E")]
	[Address(RVA = "0x3C9A700", Offset = "0x3C9A700", VA = "0x3C9A700", Slot = "8")]
	private sbyte System_002EIConvertible_002EToSByte(IFormatProvider provider)
	{
		return default(sbyte);
	}

	[Token(Token = "0x600068F")]
	[Address(RVA = "0x3C9A770", Offset = "0x3C9A770", VA = "0x3C9A770", Slot = "9")]
	private byte System_002EIConvertible_002EToByte(IFormatProvider provider)
	{
		return default(byte);
	}

	[Token(Token = "0x6000690")]
	[Address(RVA = "0x3C9A7E0", Offset = "0x3C9A7E0", VA = "0x3C9A7E0", Slot = "10")]
	private short System_002EIConvertible_002EToInt16(IFormatProvider provider)
	{
		return default(short);
	}

	[Token(Token = "0x6000691")]
	[Address(RVA = "0x3C9A850", Offset = "0x3C9A850", VA = "0x3C9A850", Slot = "11")]
	private ushort System_002EIConvertible_002EToUInt16(IFormatProvider provider)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000692")]
	[Address(RVA = "0x3C9A8C0", Offset = "0x3C9A8C0", VA = "0x3C9A8C0", Slot = "12")]
	private int System_002EIConvertible_002EToInt32(IFormatProvider provider)
	{
		return default(int);
	}

	[Token(Token = "0x6000693")]
	[Address(RVA = "0x3C9A930", Offset = "0x3C9A930", VA = "0x3C9A930", Slot = "13")]
	private uint System_002EIConvertible_002EToUInt32(IFormatProvider provider)
	{
		return default(uint);
	}

	[Token(Token = "0x6000694")]
	[Address(RVA = "0x3C9A9A0", Offset = "0x3C9A9A0", VA = "0x3C9A9A0", Slot = "14")]
	private long System_002EIConvertible_002EToInt64(IFormatProvider provider)
	{
		return default(long);
	}

	[Token(Token = "0x6000695")]
	[Address(RVA = "0x3C9AA10", Offset = "0x3C9AA10", VA = "0x3C9AA10", Slot = "15")]
	private ulong System_002EIConvertible_002EToUInt64(IFormatProvider provider)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000696")]
	[Address(RVA = "0x3C9AA80", Offset = "0x3C9AA80", VA = "0x3C9AA80", Slot = "16")]
	private float System_002EIConvertible_002EToSingle(IFormatProvider provider)
	{
		return default(float);
	}

	[Token(Token = "0x6000697")]
	[Address(RVA = "0x3C9AAF0", Offset = "0x3C9AAF0", VA = "0x3C9AAF0", Slot = "17")]
	private double System_002EIConvertible_002EToDouble(IFormatProvider provider)
	{
		return default(double);
	}

	[Token(Token = "0x6000698")]
	[Address(RVA = "0x3C9AB00", Offset = "0x3C9AB00", VA = "0x3C9AB00", Slot = "18")]
	private decimal System_002EIConvertible_002EToDecimal(IFormatProvider provider)
	{
		return default(decimal);
	}

	[Token(Token = "0x6000699")]
	[Address(RVA = "0x3C9AB70", Offset = "0x3C9AB70", VA = "0x3C9AB70", Slot = "19")]
	private DateTime System_002EIConvertible_002EToDateTime(IFormatProvider provider)
	{
		return default(DateTime);
	}

	[Token(Token = "0x600069A")]
	[Address(RVA = "0x3C9ABF0", Offset = "0x3C9ABF0", VA = "0x3C9ABF0", Slot = "21")]
	private object System_002EIConvertible_002EToType(Type type, IFormatProvider provider)
	{
		return null;
	}
}
