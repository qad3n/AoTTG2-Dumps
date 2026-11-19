// ==================== AoTTG2 cross-reference ====================
// Type: System.Int64
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
[Token(Token = "0x20000DC")]
public readonly struct Int64 : IComparable, IConvertible, IFormattable, IComparable<long>, IEquatable<long>, System.ISpanFormattable
{
	[Token(Token = "0x4000352")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly long m_value;

	[Token(Token = "0x6000808")]
	[Address(RVA = "0x54B82B0", Offset = "0x54B72B0", VA = "0x54B82B0", Slot = "4")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000809")]
	[Address(RVA = "0x54B8340", Offset = "0x54B7340", VA = "0x54B8340", Slot = "23")]
	public int CompareTo(long value)
	{
		return default(int);
	}

	[Token(Token = "0x600080A")]
	[Address(RVA = "0x54B8360", Offset = "0x54B7360", VA = "0x54B8360", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600080B")]
	[Address(RVA = "0x54B8390", Offset = "0x54B7390", VA = "0x54B8390", Slot = "24")]
	[System.Runtime.Versioning.NonVersionable]
	public bool Equals(long obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600080C")]
	[Address(RVA = "0x54B83A0", Offset = "0x54B73A0", VA = "0x54B83A0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600080D")]
	[Address(RVA = "0x54B83B0", Offset = "0x54B73B0", VA = "0x54B83B0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600080E")]
	[Address(RVA = "0x54B86E0", Offset = "0x54B76E0", VA = "0x54B86E0", Slot = "20")]
	public string ToString(IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x600080F")]
	[Address(RVA = "0x54B8760", Offset = "0x54B7760", VA = "0x54B8760")]
	public string ToString(string format)
	{
		return null;
	}

	[Token(Token = "0x6000810")]
	[Address(RVA = "0x54B8820", Offset = "0x54B7820", VA = "0x54B8820", Slot = "22")]
	public string ToString(string format, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6000811")]
	[Address(RVA = "0x54B88E0", Offset = "0x54B78E0", VA = "0x54B88E0", Slot = "25")]
	public bool TryFormat(Span<char> destination, out int charsWritten, [Optional] ReadOnlySpan<char> format, [Optional] IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x6000812")]
	[Address(RVA = "0x54B8C70", Offset = "0x54B7C70", VA = "0x54B8C70")]
	public static long Parse(string s, IFormatProvider provider)
	{
		return default(long);
	}

	[Token(Token = "0x6000813")]
	[Address(RVA = "0x54B8FB0", Offset = "0x54B7FB0", VA = "0x54B8FB0")]
	public static long Parse(string s, NumberStyles style, IFormatProvider provider)
	{
		return default(long);
	}

	[Token(Token = "0x6000814")]
	[Address(RVA = "0x54B9080", Offset = "0x54B8080", VA = "0x54B9080")]
	public static bool TryParse(string s, out long result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000815")]
	[Address(RVA = "0x54B9360", Offset = "0x54B8360", VA = "0x54B9360")]
	public static bool TryParse(string s, NumberStyles style, IFormatProvider provider, out long result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000816")]
	[Address(RVA = "0x54B9430", Offset = "0x54B8430", VA = "0x54B9430", Slot = "5")]
	public TypeCode GetTypeCode()
	{
		return default(TypeCode);
	}

	[Token(Token = "0x6000817")]
	[Address(RVA = "0x54B9440", Offset = "0x54B8440", VA = "0x54B9440", Slot = "6")]
	private bool System_002EIConvertible_002EToBoolean(IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x6000818")]
	[Address(RVA = "0x54B94A0", Offset = "0x54B84A0", VA = "0x54B94A0", Slot = "7")]
	private char System_002EIConvertible_002EToChar(IFormatProvider provider)
	{
		return default(char);
	}

	[Token(Token = "0x6000819")]
	[Address(RVA = "0x54B9500", Offset = "0x54B8500", VA = "0x54B9500", Slot = "8")]
	private sbyte System_002EIConvertible_002EToSByte(IFormatProvider provider)
	{
		return default(sbyte);
	}

	[Token(Token = "0x600081A")]
	[Address(RVA = "0x54B9560", Offset = "0x54B8560", VA = "0x54B9560", Slot = "9")]
	private byte System_002EIConvertible_002EToByte(IFormatProvider provider)
	{
		return default(byte);
	}

	[Token(Token = "0x600081B")]
	[Address(RVA = "0x54B95C0", Offset = "0x54B85C0", VA = "0x54B95C0", Slot = "10")]
	private short System_002EIConvertible_002EToInt16(IFormatProvider provider)
	{
		return default(short);
	}

	[Token(Token = "0x600081C")]
	[Address(RVA = "0x54B9620", Offset = "0x54B8620", VA = "0x54B9620", Slot = "11")]
	private ushort System_002EIConvertible_002EToUInt16(IFormatProvider provider)
	{
		return default(ushort);
	}

	[Token(Token = "0x600081D")]
	[Address(RVA = "0x54B9680", Offset = "0x54B8680", VA = "0x54B9680", Slot = "12")]
	private int System_002EIConvertible_002EToInt32(IFormatProvider provider)
	{
		return default(int);
	}

	[Token(Token = "0x600081E")]
	[Address(RVA = "0x54B96E0", Offset = "0x54B86E0", VA = "0x54B96E0", Slot = "13")]
	private uint System_002EIConvertible_002EToUInt32(IFormatProvider provider)
	{
		return default(uint);
	}

	[Token(Token = "0x600081F")]
	[Address(RVA = "0x54B9740", Offset = "0x54B8740", VA = "0x54B9740", Slot = "14")]
	private long System_002EIConvertible_002EToInt64(IFormatProvider provider)
	{
		return default(long);
	}

	[Token(Token = "0x6000820")]
	[Address(RVA = "0x54B9750", Offset = "0x54B8750", VA = "0x54B9750", Slot = "15")]
	private ulong System_002EIConvertible_002EToUInt64(IFormatProvider provider)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000821")]
	[Address(RVA = "0x54B97B0", Offset = "0x54B87B0", VA = "0x54B97B0", Slot = "16")]
	private float System_002EIConvertible_002EToSingle(IFormatProvider provider)
	{
		return default(float);
	}

	[Token(Token = "0x6000822")]
	[Address(RVA = "0x54B9810", Offset = "0x54B8810", VA = "0x54B9810", Slot = "17")]
	private double System_002EIConvertible_002EToDouble(IFormatProvider provider)
	{
		return default(double);
	}

	[Token(Token = "0x6000823")]
	[Address(RVA = "0x54B9870", Offset = "0x54B8870", VA = "0x54B9870", Slot = "18")]
	private decimal System_002EIConvertible_002EToDecimal(IFormatProvider provider)
	{
		return 0m;
	}

	[Token(Token = "0x6000824")]
	[Address(RVA = "0x54B98D0", Offset = "0x54B88D0", VA = "0x54B98D0", Slot = "19")]
	private DateTime System_002EIConvertible_002EToDateTime(IFormatProvider provider)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000825")]
	[Address(RVA = "0x54B9950", Offset = "0x54B8950", VA = "0x54B9950", Slot = "21")]
	private object System_002EIConvertible_002EToType(Type type, IFormatProvider provider)
	{
		return null;
	}
}
