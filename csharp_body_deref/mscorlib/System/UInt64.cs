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
	[Token(Token = "0x40003DC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly ulong m_value;

	[Token(Token = "0x6000B93")]
	[Address(RVA = "0x54DD490", Offset = "0x54DC490", VA = "0x54DD490", Slot = "4")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000B94")]
	[Address(RVA = "0x54DD520", Offset = "0x54DC520", VA = "0x54DD520", Slot = "23")]
	public int CompareTo(ulong value)
	{
		return default(int);
	}

	[Token(Token = "0x6000B95")]
	[Address(RVA = "0x54DD540", Offset = "0x54DC540", VA = "0x54DD540", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B96")]
	[Address(RVA = "0x54DD570", Offset = "0x54DC570", VA = "0x54DD570", Slot = "24")]
	[System.Runtime.Versioning.NonVersionable]
	public bool Equals(ulong obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B97")]
	[Address(RVA = "0x54DD580", Offset = "0x54DC580", VA = "0x54DD580", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000B98")]
	[Address(RVA = "0x54DD590", Offset = "0x54DC590", VA = "0x54DD590", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000B99")]
	[Address(RVA = "0x54DD610", Offset = "0x54DC610", VA = "0x54DD610", Slot = "20")]
	public string ToString(IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6000B9A")]
	[Address(RVA = "0x54DD6A0", Offset = "0x54DC6A0", VA = "0x54DD6A0")]
	public string ToString(string format)
	{
		return null;
	}

	[Token(Token = "0x6000B9B")]
	[Address(RVA = "0x54DD760", Offset = "0x54DC760", VA = "0x54DD760", Slot = "22")]
	public string ToString(string format, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6000B9C")]
	[Address(RVA = "0x54DD830", Offset = "0x54DC830", VA = "0x54DD830", Slot = "25")]
	public bool TryFormat(Span<char> destination, out int charsWritten, [Optional] ReadOnlySpan<char> format, [Optional] IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B9D")]
	[Address(RVA = "0x54DD8C0", Offset = "0x54DC8C0", VA = "0x54DD8C0")]
	[CLSCompliant(false)]
	public static ulong Parse(string s)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000B9E")]
	[Address(RVA = "0x54DD980", Offset = "0x54DC980", VA = "0x54DD980")]
	[CLSCompliant(false)]
	public static ulong Parse(string s, IFormatProvider provider)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000B9F")]
	[Address(RVA = "0x54DDA50", Offset = "0x54DCA50", VA = "0x54DDA50")]
	[CLSCompliant(false)]
	public static ulong Parse(string s, NumberStyles style, IFormatProvider provider)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000BA0")]
	[Address(RVA = "0x54DDB20", Offset = "0x54DCB20", VA = "0x54DDB20")]
	[CLSCompliant(false)]
	public static bool TryParse(string s, out ulong result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BA1")]
	[Address(RVA = "0x54DDBE0", Offset = "0x54DCBE0", VA = "0x54DDBE0")]
	[CLSCompliant(false)]
	public static bool TryParse(string s, NumberStyles style, IFormatProvider provider, out ulong result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BA2")]
	[Address(RVA = "0x54DDCB0", Offset = "0x54DCCB0", VA = "0x54DDCB0", Slot = "5")]
	public TypeCode GetTypeCode()
	{
		return default(TypeCode);
	}

	[Token(Token = "0x6000BA3")]
	[Address(RVA = "0x54DDCC0", Offset = "0x54DCCC0", VA = "0x54DDCC0", Slot = "6")]
	private bool System_002EIConvertible_002EToBoolean(IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BA4")]
	[Address(RVA = "0x54DDD20", Offset = "0x54DCD20", VA = "0x54DDD20", Slot = "7")]
	private char System_002EIConvertible_002EToChar(IFormatProvider provider)
	{
		return default(char);
	}

	[Token(Token = "0x6000BA5")]
	[Address(RVA = "0x54DDD80", Offset = "0x54DCD80", VA = "0x54DDD80", Slot = "8")]
	private sbyte System_002EIConvertible_002EToSByte(IFormatProvider provider)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000BA6")]
	[Address(RVA = "0x54DDDE0", Offset = "0x54DCDE0", VA = "0x54DDDE0", Slot = "9")]
	private byte System_002EIConvertible_002EToByte(IFormatProvider provider)
	{
		return default(byte);
	}

	[Token(Token = "0x6000BA7")]
	[Address(RVA = "0x54DDE40", Offset = "0x54DCE40", VA = "0x54DDE40", Slot = "10")]
	private short System_002EIConvertible_002EToInt16(IFormatProvider provider)
	{
		return default(short);
	}

	[Token(Token = "0x6000BA8")]
	[Address(RVA = "0x54DDEA0", Offset = "0x54DCEA0", VA = "0x54DDEA0", Slot = "11")]
	private ushort System_002EIConvertible_002EToUInt16(IFormatProvider provider)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000BA9")]
	[Address(RVA = "0x54DDF00", Offset = "0x54DCF00", VA = "0x54DDF00", Slot = "12")]
	private int System_002EIConvertible_002EToInt32(IFormatProvider provider)
	{
		return default(int);
	}

	[Token(Token = "0x6000BAA")]
	[Address(RVA = "0x54DDF60", Offset = "0x54DCF60", VA = "0x54DDF60", Slot = "13")]
	private uint System_002EIConvertible_002EToUInt32(IFormatProvider provider)
	{
		return default(uint);
	}

	[Token(Token = "0x6000BAB")]
	[Address(RVA = "0x54DDFC0", Offset = "0x54DCFC0", VA = "0x54DDFC0", Slot = "14")]
	private long System_002EIConvertible_002EToInt64(IFormatProvider provider)
	{
		return default(long);
	}

	[Token(Token = "0x6000BAC")]
	[Address(RVA = "0x54DE020", Offset = "0x54DD020", VA = "0x54DE020", Slot = "15")]
	private ulong System_002EIConvertible_002EToUInt64(IFormatProvider provider)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000BAD")]
	[Address(RVA = "0x54DE030", Offset = "0x54DD030", VA = "0x54DE030", Slot = "16")]
	private float System_002EIConvertible_002EToSingle(IFormatProvider provider)
	{
		return default(float);
	}

	[Token(Token = "0x6000BAE")]
	[Address(RVA = "0x54DE090", Offset = "0x54DD090", VA = "0x54DE090", Slot = "17")]
	private double System_002EIConvertible_002EToDouble(IFormatProvider provider)
	{
		return default(double);
	}

	[Token(Token = "0x6000BAF")]
	[Address(RVA = "0x54DE0F0", Offset = "0x54DD0F0", VA = "0x54DE0F0", Slot = "18")]
	private decimal System_002EIConvertible_002EToDecimal(IFormatProvider provider)
	{
		return 0m;
	}

	[Token(Token = "0x6000BB0")]
	[Address(RVA = "0x54DE150", Offset = "0x54DD150", VA = "0x54DE150", Slot = "19")]
	private DateTime System_002EIConvertible_002EToDateTime(IFormatProvider provider)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000BB1")]
	[Address(RVA = "0x54DE1D0", Offset = "0x54DD1D0", VA = "0x54DE1D0", Slot = "21")]
	private object System_002EIConvertible_002EToType(Type type, IFormatProvider provider)
	{
		return null;
	}
}
