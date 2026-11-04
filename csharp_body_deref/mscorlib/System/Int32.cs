// ==================== AoTTG2 cross-reference ====================
// Type: System.Int32
// Update status: CHANGED in this game update
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
[Token(Token = "0x2000103")]
public readonly struct Int32 : IComparable, IConvertible, IFormattable, IComparable<int>, IEquatable<int>, System.ISpanFormattable
{
	[Token(Token = "0x40003F6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly int m_value;

	[Token(Token = "0x600080A")]
	[Address(RVA = "0x1B28E10", Offset = "0x1B27410", VA = "0x181B28E10", Slot = "4")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x600080B")]
	[Address(RVA = "0x1B28EC0", Offset = "0x1B274C0", VA = "0x181B28EC0", Slot = "23")]
	public int CompareTo(int value)
	{
		return default(int);
	}

	[Token(Token = "0x600080C")]
	[Address(RVA = "0x1B28EE0", Offset = "0x1B274E0", VA = "0x181B28EE0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600080D")]
	[Address(RVA = "0x1B28F40", Offset = "0x1B27540", VA = "0x181B28F40", Slot = "24")]
	[System.Runtime.Versioning.NonVersionable]
	public bool Equals(int obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600080E")]
	[Address(RVA = "0x57AED0", Offset = "0x5794D0", VA = "0x18057AED0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600080F")]
	[Address(RVA = "0x1B29870", Offset = "0x1B27E70", VA = "0x181B29870", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000810")]
	[Address(RVA = "0x1B299A0", Offset = "0x1B27FA0", VA = "0x181B299A0")]
	public string ToString(string format)
	{
		return null;
	}

	[Token(Token = "0x6000811")]
	[Address(RVA = "0x1B29900", Offset = "0x1B27F00", VA = "0x181B29900", Slot = "20")]
	public string ToString(IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6000812")]
	[Address(RVA = "0x1B29A60", Offset = "0x1B28060", VA = "0x181B29A60", Slot = "22")]
	public string ToString(string format, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6000813")]
	[Address(RVA = "0x1B29B30", Offset = "0x1B28130", VA = "0x181B29B30", Slot = "25")]
	public bool TryFormat(Span<char> destination, out int charsWritten, [Optional] ReadOnlySpan<char> format, [Optional] IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x6000814")]
	[Address(RVA = "0x1B28F60", Offset = "0x1B27560", VA = "0x181B28F60")]
	public static int Parse(string s)
	{
		return default(int);
	}

	[Token(Token = "0x6000815")]
	[Address(RVA = "0x1B29290", Offset = "0x1B27890", VA = "0x181B29290")]
	public static int Parse(string s, NumberStyles style)
	{
		return default(int);
	}

	[Token(Token = "0x6000816")]
	[Address(RVA = "0x1B291B0", Offset = "0x1B277B0", VA = "0x181B291B0")]
	public static int Parse(string s, IFormatProvider provider)
	{
		return default(int);
	}

	[Token(Token = "0x6000817")]
	[Address(RVA = "0x1B29030", Offset = "0x1B27630", VA = "0x181B29030")]
	public static int Parse(string s, NumberStyles style, IFormatProvider provider)
	{
		return default(int);
	}

	[Token(Token = "0x6000818")]
	[Address(RVA = "0x1B29120", Offset = "0x1B27720", VA = "0x181B29120")]
	public static int Parse(ReadOnlySpan<char> s, [Optional][DefaultParameterValue(7)] NumberStyles style, [Optional] IFormatProvider provider)
	{
		return default(int);
	}

	[Token(Token = "0x6000819")]
	[Address(RVA = "0x1B29E50", Offset = "0x1B28450", VA = "0x181B29E50")]
	public static bool TryParse(string s, out int result)
	{
		return default(bool);
	}

	[Token(Token = "0x600081A")]
	[Address(RVA = "0x1B29C50", Offset = "0x1B28250", VA = "0x181B29C50")]
	public static bool TryParse(ReadOnlySpan<char> s, out int result)
	{
		return default(bool);
	}

	[Token(Token = "0x600081B")]
	[Address(RVA = "0x1B29D60", Offset = "0x1B28360", VA = "0x181B29D60")]
	public static bool TryParse(string s, NumberStyles style, IFormatProvider provider, out int result)
	{
		return default(bool);
	}

	[Token(Token = "0x600081C")]
	[Address(RVA = "0x1B29BC0", Offset = "0x1B281C0", VA = "0x181B29BC0")]
	public static bool TryParse(ReadOnlySpan<char> s, NumberStyles style, IFormatProvider provider, out int result)
	{
		return default(bool);
	}

	[Token(Token = "0x600081D")]
	[Address(RVA = "0x1B28F50", Offset = "0x1B27550", VA = "0x181B28F50", Slot = "5")]
	public TypeCode GetTypeCode()
	{
		return default(TypeCode);
	}

	[Token(Token = "0x600081E")]
	[Address(RVA = "0x1B29370", Offset = "0x1B27970", VA = "0x181B29370", Slot = "6")]
	private bool System_002EIConvertible_002EToBoolean(IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x600081F")]
	[Address(RVA = "0x1B29410", Offset = "0x1B27A10", VA = "0x181B29410", Slot = "7")]
	private char System_002EIConvertible_002EToChar(IFormatProvider provider)
	{
		return default(char);
	}

	[Token(Token = "0x6000820")]
	[Address(RVA = "0x1B29650", Offset = "0x1B27C50", VA = "0x181B29650", Slot = "8")]
	private sbyte System_002EIConvertible_002EToSByte(IFormatProvider provider)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000821")]
	[Address(RVA = "0x1B293C0", Offset = "0x1B279C0", VA = "0x181B293C0", Slot = "9")]
	private byte System_002EIConvertible_002EToByte(IFormatProvider provider)
	{
		return default(byte);
	}

	[Token(Token = "0x6000822")]
	[Address(RVA = "0x1B295B0", Offset = "0x1B27BB0", VA = "0x181B295B0", Slot = "10")]
	private short System_002EIConvertible_002EToInt16(IFormatProvider provider)
	{
		return default(short);
	}

	[Token(Token = "0x6000823")]
	[Address(RVA = "0x1B29780", Offset = "0x1B27D80", VA = "0x181B29780", Slot = "11")]
	private ushort System_002EIConvertible_002EToUInt16(IFormatProvider provider)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000824")]
	[Address(RVA = "0x57AED0", Offset = "0x5794D0", VA = "0x18057AED0", Slot = "12")]
	private int System_002EIConvertible_002EToInt32(IFormatProvider provider)
	{
		return default(int);
	}

	[Token(Token = "0x6000825")]
	[Address(RVA = "0x1B297D0", Offset = "0x1B27DD0", VA = "0x181B297D0", Slot = "13")]
	private uint System_002EIConvertible_002EToUInt32(IFormatProvider provider)
	{
		return default(uint);
	}

	[Token(Token = "0x6000826")]
	[Address(RVA = "0x1B29600", Offset = "0x1B27C00", VA = "0x181B29600", Slot = "14")]
	private long System_002EIConvertible_002EToInt64(IFormatProvider provider)
	{
		return default(long);
	}

	[Token(Token = "0x6000827")]
	[Address(RVA = "0x1B29820", Offset = "0x1B27E20", VA = "0x181B29820", Slot = "15")]
	private ulong System_002EIConvertible_002EToUInt64(IFormatProvider provider)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000828")]
	[Address(RVA = "0x1B296A0", Offset = "0x1B27CA0", VA = "0x181B296A0", Slot = "16")]
	private float System_002EIConvertible_002EToSingle(IFormatProvider provider)
	{
		return default(float);
	}

	[Token(Token = "0x6000829")]
	[Address(RVA = "0x1B29560", Offset = "0x1B27B60", VA = "0x181B29560", Slot = "17")]
	private double System_002EIConvertible_002EToDouble(IFormatProvider provider)
	{
		return default(double);
	}

	[Token(Token = "0x600082A")]
	[Address(RVA = "0x1B294F0", Offset = "0x1B27AF0", VA = "0x181B294F0", Slot = "18")]
	private decimal System_002EIConvertible_002EToDecimal(IFormatProvider provider)
	{
		return 0m;
	}

	[Token(Token = "0x600082B")]
	[Address(RVA = "0x1B29460", Offset = "0x1B27A60", VA = "0x181B29460", Slot = "19")]
	private DateTime System_002EIConvertible_002EToDateTime(IFormatProvider provider)
	{
		return default(DateTime);
	}

	[Token(Token = "0x600082C")]
	[Address(RVA = "0x1B296F0", Offset = "0x1B27CF0", VA = "0x181B296F0", Slot = "21")]
	private object System_002EIConvertible_002EToType(Type type, IFormatProvider provider)
	{
		return null;
	}
}
