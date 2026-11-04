// ==================== AoTTG2 cross-reference ====================
// Type: System.Double
// Update status: CHANGED in this game update
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
[Token(Token = "0x20000D0")]
public readonly struct Double : IComparable, IConvertible, IFormattable, IComparable<double>, IEquatable<double>, System.ISpanFormattable
{
	[Token(Token = "0x40002FC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly double m_value;

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006A4")]
	[Address(RVA = "0x1B21D40", Offset = "0x1B20340", VA = "0x181B21D40")]
	[System.Runtime.Versioning.NonVersionable]
	public static bool IsFinite(double d)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006A5")]
	[Address(RVA = "0x1B21D70", Offset = "0x1B20370", VA = "0x181B21D70")]
	[System.Runtime.Versioning.NonVersionable]
	public static bool IsInfinity(double d)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006A6")]
	[Address(RVA = "0x1B21DA0", Offset = "0x1B203A0", VA = "0x181B21DA0")]
	[System.Runtime.Versioning.NonVersionable]
	public static bool IsNaN(double d)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006A7")]
	[Address(RVA = "0x1B21DF0", Offset = "0x1B203F0", VA = "0x181B21DF0")]
	[System.Runtime.Versioning.NonVersionable]
	public static bool IsNegative(double d)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006A8")]
	[Address(RVA = "0x1B21DD0", Offset = "0x1B203D0", VA = "0x181B21DD0")]
	[System.Runtime.Versioning.NonVersionable]
	public static bool IsNegativeInfinity(double d)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006A9")]
	[Address(RVA = "0x1B21E00", Offset = "0x1B20400", VA = "0x181B21E00")]
	[System.Runtime.Versioning.NonVersionable]
	public static bool IsPositiveInfinity(double d)
	{
		return default(bool);
	}

	[Token(Token = "0x60006AA")]
	[Address(RVA = "0x1B21AE0", Offset = "0x1B200E0", VA = "0x181B21AE0", Slot = "4")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x60006AB")]
	[Address(RVA = "0x1B21BE0", Offset = "0x1B201E0", VA = "0x181B21BE0", Slot = "23")]
	public int CompareTo(double value)
	{
		return default(int);
	}

	[Token(Token = "0x60006AC")]
	[Address(RVA = "0x1B21C40", Offset = "0x1B20240", VA = "0x181B21C40", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60006AD")]
	[Address(RVA = "0x1B21CD0", Offset = "0x1B202D0", VA = "0x181B21CD0", Slot = "24")]
	public bool Equals(double obj)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006AE")]
	[Address(RVA = "0x1B21D10", Offset = "0x1B20310", VA = "0x181B21D10", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60006AF")]
	[Address(RVA = "0x1B227C0", Offset = "0x1B20DC0", VA = "0x181B227C0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60006B0")]
	[Address(RVA = "0x1B22740", Offset = "0x1B20D40", VA = "0x181B22740")]
	public string ToString(string format)
	{
		return null;
	}

	[Token(Token = "0x60006B1")]
	[Address(RVA = "0x1B226C0", Offset = "0x1B20CC0", VA = "0x181B226C0", Slot = "20")]
	public string ToString(IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x60006B2")]
	[Address(RVA = "0x1B22830", Offset = "0x1B20E30", VA = "0x181B22830", Slot = "22")]
	public string ToString(string format, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x60006B3")]
	[Address(RVA = "0x1B228C0", Offset = "0x1B20EC0", VA = "0x181B228C0", Slot = "25")]
	public bool TryFormat(Span<char> destination, out int charsWritten, [Optional] ReadOnlySpan<char> format, [Optional] IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x60006B4")]
	[Address(RVA = "0x1B21FF0", Offset = "0x1B205F0", VA = "0x181B21FF0")]
	public static double Parse(string s)
	{
		return default(double);
	}

	[Token(Token = "0x60006B5")]
	[Address(RVA = "0x1B21E20", Offset = "0x1B20420", VA = "0x181B21E20")]
	public static double Parse(string s, IFormatProvider provider)
	{
		return default(double);
	}

	[Token(Token = "0x60006B6")]
	[Address(RVA = "0x1B21F00", Offset = "0x1B20500", VA = "0x181B21F00")]
	public static double Parse(string s, NumberStyles style, IFormatProvider provider)
	{
		return default(double);
	}

	[Token(Token = "0x60006B7")]
	[Address(RVA = "0x1B22A20", Offset = "0x1B21020", VA = "0x181B22A20")]
	public static bool TryParse(string s, out double result)
	{
		return default(bool);
	}

	[Token(Token = "0x60006B8")]
	[Address(RVA = "0x1B22970", Offset = "0x1B20F70", VA = "0x181B22970")]
	public static bool TryParse(string s, NumberStyles style, IFormatProvider provider, out double result)
	{
		return default(bool);
	}

	[Token(Token = "0x60006B9")]
	[Address(RVA = "0x1B22AC0", Offset = "0x1B210C0", VA = "0x181B22AC0")]
	private static bool TryParse(ReadOnlySpan<char> s, NumberStyles style, NumberFormatInfo info, out double result)
	{
		return default(bool);
	}

	[Token(Token = "0x60006BA")]
	[Address(RVA = "0x847160", Offset = "0x845760", VA = "0x180847160", Slot = "5")]
	public TypeCode GetTypeCode()
	{
		return default(TypeCode);
	}

	[Token(Token = "0x60006BB")]
	[Address(RVA = "0x1B220C0", Offset = "0x1B206C0", VA = "0x181B220C0", Slot = "6")]
	private bool System_002EIConvertible_002EToBoolean(IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x60006BC")]
	[Address(RVA = "0x1B22180", Offset = "0x1B20780", VA = "0x181B22180", Slot = "7")]
	private char System_002EIConvertible_002EToChar(IFormatProvider provider)
	{
		return default(char);
	}

	[Token(Token = "0x60006BD")]
	[Address(RVA = "0x1B22450", Offset = "0x1B20A50", VA = "0x181B22450", Slot = "8")]
	private sbyte System_002EIConvertible_002EToSByte(IFormatProvider provider)
	{
		return default(sbyte);
	}

	[Token(Token = "0x60006BE")]
	[Address(RVA = "0x1B22120", Offset = "0x1B20720", VA = "0x181B22120", Slot = "9")]
	private byte System_002EIConvertible_002EToByte(IFormatProvider provider)
	{
		return default(byte);
	}

	[Token(Token = "0x60006BF")]
	[Address(RVA = "0x1B22330", Offset = "0x1B20930", VA = "0x181B22330", Slot = "10")]
	private short System_002EIConvertible_002EToInt16(IFormatProvider provider)
	{
		return default(short);
	}

	[Token(Token = "0x60006C0")]
	[Address(RVA = "0x1B225A0", Offset = "0x1B20BA0", VA = "0x181B225A0", Slot = "11")]
	private ushort System_002EIConvertible_002EToUInt16(IFormatProvider provider)
	{
		return default(ushort);
	}

	[Token(Token = "0x60006C1")]
	[Address(RVA = "0x1B22390", Offset = "0x1B20990", VA = "0x181B22390", Slot = "12")]
	private int System_002EIConvertible_002EToInt32(IFormatProvider provider)
	{
		return default(int);
	}

	[Token(Token = "0x60006C2")]
	[Address(RVA = "0x1B22600", Offset = "0x1B20C00", VA = "0x181B22600", Slot = "13")]
	private uint System_002EIConvertible_002EToUInt32(IFormatProvider provider)
	{
		return default(uint);
	}

	[Token(Token = "0x60006C3")]
	[Address(RVA = "0x1B223F0", Offset = "0x1B209F0", VA = "0x181B223F0", Slot = "14")]
	private long System_002EIConvertible_002EToInt64(IFormatProvider provider)
	{
		return default(long);
	}

	[Token(Token = "0x60006C4")]
	[Address(RVA = "0x1B22660", Offset = "0x1B20C60", VA = "0x181B22660", Slot = "15")]
	private ulong System_002EIConvertible_002EToUInt64(IFormatProvider provider)
	{
		return default(ulong);
	}

	[Token(Token = "0x60006C5")]
	[Address(RVA = "0x1B224B0", Offset = "0x1B20AB0", VA = "0x181B224B0", Slot = "16")]
	private float System_002EIConvertible_002EToSingle(IFormatProvider provider)
	{
		return default(float);
	}

	[Token(Token = "0x60006C6")]
	[Address(RVA = "0x1B22320", Offset = "0x1B20920", VA = "0x181B22320", Slot = "17")]
	private double System_002EIConvertible_002EToDouble(IFormatProvider provider)
	{
		return default(double);
	}

	[Token(Token = "0x60006C7")]
	[Address(RVA = "0x1B222A0", Offset = "0x1B208A0", VA = "0x181B222A0", Slot = "18")]
	private decimal System_002EIConvertible_002EToDecimal(IFormatProvider provider)
	{
		return 0m;
	}

	[Token(Token = "0x60006C8")]
	[Address(RVA = "0x1B22210", Offset = "0x1B20810", VA = "0x181B22210", Slot = "19")]
	private DateTime System_002EIConvertible_002EToDateTime(IFormatProvider provider)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60006C9")]
	[Address(RVA = "0x1B22510", Offset = "0x1B20B10", VA = "0x181B22510", Slot = "21")]
	private object System_002EIConvertible_002EToType(Type type, IFormatProvider provider)
	{
		return null;
	}
}
