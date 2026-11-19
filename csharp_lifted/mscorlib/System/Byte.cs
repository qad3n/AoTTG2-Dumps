// ==================== AoTTG2 cross-reference ====================
// Type: System.Byte
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
[Token(Token = "0x200009A")]
public readonly struct Byte : IComparable, IConvertible, IFormattable, IComparable<byte>, IEquatable<byte>, System.ISpanFormattable
{
	[Token(Token = "0x4000203")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly byte m_value;

	[Token(Token = "0x6000467")]
	[Address(RVA = "0x541D1C0", Offset = "0x541C1C0", VA = "0x541D1C0", Slot = "4")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000468")]
	[Address(RVA = "0x541D240", Offset = "0x541C240", VA = "0x541D240", Slot = "23")]
	public int CompareTo(byte value)
	{
		return default(int);
	}

	[Token(Token = "0x6000469")]
	[Address(RVA = "0x541D250", Offset = "0x541C250", VA = "0x541D250", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600046A")]
	[Address(RVA = "0x541D280", Offset = "0x541C280", VA = "0x541D280", Slot = "24")]
	[System.Runtime.Versioning.NonVersionable]
	public bool Equals(byte obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600046B")]
	[Address(RVA = "0x541D290", Offset = "0x541C290", VA = "0x541D290", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600046C")]
	[Address(RVA = "0x541D2A0", Offset = "0x541C2A0", VA = "0x541D2A0")]
	public static byte Parse(string s, IFormatProvider provider)
	{
		return default(byte);
	}

	[Token(Token = "0x600046D")]
	[Address(RVA = "0x541D4B0", Offset = "0x541C4B0", VA = "0x541D4B0")]
	public static byte Parse(string s, NumberStyles style, IFormatProvider provider)
	{
		return default(byte);
	}

	[Token(Token = "0x600046E")]
	[Address(RVA = "0x541D330", Offset = "0x541C330", VA = "0x541D330")]
	private static byte Parse(ReadOnlySpan<char> s, NumberStyles style, NumberFormatInfo info)
	{
		return default(byte);
	}

	[Token(Token = "0x600046F")]
	[Address(RVA = "0x541D550", Offset = "0x541C550", VA = "0x541D550")]
	public static bool TryParse(string s, out byte result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000470")]
	[Address(RVA = "0x541D6D0", Offset = "0x541C6D0", VA = "0x541D6D0")]
	public static bool TryParse(string s, NumberStyles style, IFormatProvider provider, out byte result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000471")]
	[Address(RVA = "0x541D630", Offset = "0x541C630", VA = "0x541D630")]
	private static bool TryParse(ReadOnlySpan<char> s, NumberStyles style, NumberFormatInfo info, out byte result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000472")]
	[Address(RVA = "0x541D7C0", Offset = "0x541C7C0", VA = "0x541D7C0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000473")]
	[Address(RVA = "0x541D840", Offset = "0x541C840", VA = "0x541D840")]
	public string ToString(string format)
	{
		return null;
	}

	[Token(Token = "0x6000474")]
	[Address(RVA = "0x541D900", Offset = "0x541C900", VA = "0x541D900", Slot = "20")]
	public string ToString(IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6000475")]
	[Address(RVA = "0x541D990", Offset = "0x541C990", VA = "0x541D990", Slot = "22")]
	public string ToString(string format, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6000476")]
	[Address(RVA = "0x541DA60", Offset = "0x541CA60", VA = "0x541DA60", Slot = "25")]
	public bool TryFormat(Span<char> destination, out int charsWritten, [Optional] ReadOnlySpan<char> format, [Optional] IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x6000477")]
	[Address(RVA = "0x541DAF0", Offset = "0x541CAF0", VA = "0x541DAF0", Slot = "5")]
	public TypeCode GetTypeCode()
	{
		return default(TypeCode);
	}

	[Token(Token = "0x6000478")]
	[Address(RVA = "0x541DB00", Offset = "0x541CB00", VA = "0x541DB00", Slot = "6")]
	private bool System_002EIConvertible_002EToBoolean(IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x6000479")]
	[Address(RVA = "0x541DB60", Offset = "0x541CB60", VA = "0x541DB60", Slot = "7")]
	private char System_002EIConvertible_002EToChar(IFormatProvider provider)
	{
		return default(char);
	}

	[Token(Token = "0x600047A")]
	[Address(RVA = "0x541DBC0", Offset = "0x541CBC0", VA = "0x541DBC0", Slot = "8")]
	private sbyte System_002EIConvertible_002EToSByte(IFormatProvider provider)
	{
		return default(sbyte);
	}

	[Token(Token = "0x600047B")]
	[Address(RVA = "0x541DCA0", Offset = "0x541CCA0", VA = "0x541DCA0", Slot = "9")]
	private byte System_002EIConvertible_002EToByte(IFormatProvider provider)
	{
		return default(byte);
	}

	[Token(Token = "0x600047C")]
	[Address(RVA = "0x541DCB0", Offset = "0x541CCB0", VA = "0x541DCB0", Slot = "10")]
	private short System_002EIConvertible_002EToInt16(IFormatProvider provider)
	{
		return default(short);
	}

	[Token(Token = "0x600047D")]
	[Address(RVA = "0x541DD10", Offset = "0x541CD10", VA = "0x541DD10", Slot = "11")]
	private ushort System_002EIConvertible_002EToUInt16(IFormatProvider provider)
	{
		return default(ushort);
	}

	[Token(Token = "0x600047E")]
	[Address(RVA = "0x541DD70", Offset = "0x541CD70", VA = "0x541DD70", Slot = "12")]
	private int System_002EIConvertible_002EToInt32(IFormatProvider provider)
	{
		return default(int);
	}

	[Token(Token = "0x600047F")]
	[Address(RVA = "0x541DDD0", Offset = "0x541CDD0", VA = "0x541DDD0", Slot = "13")]
	private uint System_002EIConvertible_002EToUInt32(IFormatProvider provider)
	{
		return default(uint);
	}

	[Token(Token = "0x6000480")]
	[Address(RVA = "0x541DE30", Offset = "0x541CE30", VA = "0x541DE30", Slot = "14")]
	private long System_002EIConvertible_002EToInt64(IFormatProvider provider)
	{
		return default(long);
	}

	[Token(Token = "0x6000481")]
	[Address(RVA = "0x541DE90", Offset = "0x541CE90", VA = "0x541DE90", Slot = "15")]
	private ulong System_002EIConvertible_002EToUInt64(IFormatProvider provider)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000482")]
	[Address(RVA = "0x541DEF0", Offset = "0x541CEF0", VA = "0x541DEF0", Slot = "16")]
	private float System_002EIConvertible_002EToSingle(IFormatProvider provider)
	{
		return default(float);
	}

	[Token(Token = "0x6000483")]
	[Address(RVA = "0x541DF50", Offset = "0x541CF50", VA = "0x541DF50", Slot = "17")]
	private double System_002EIConvertible_002EToDouble(IFormatProvider provider)
	{
		return default(double);
	}

	[Token(Token = "0x6000484")]
	[Address(RVA = "0x541DFB0", Offset = "0x541CFB0", VA = "0x541DFB0", Slot = "18")]
	private decimal System_002EIConvertible_002EToDecimal(IFormatProvider provider)
	{
		return 0m;
	}

	[Token(Token = "0x6000485")]
	[Address(RVA = "0x541E0C0", Offset = "0x541D0C0", VA = "0x541E0C0", Slot = "19")]
	private DateTime System_002EIConvertible_002EToDateTime(IFormatProvider provider)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000486")]
	[Address(RVA = "0x541E140", Offset = "0x541D140", VA = "0x541E140", Slot = "21")]
	private object System_002EIConvertible_002EToType(Type type, IFormatProvider provider)
	{
		return null;
	}
}
