// ==================== AoTTG2 cross-reference ====================
// Type: System.UInt32
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
[Token(Token = "0x2000125")]
[CLSCompliant(false)]
public readonly struct UInt32 : IComparable, IConvertible, IFormattable, IComparable<uint>, IEquatable<uint>, System.ISpanFormattable
{
	[Token(Token = "0x40003DB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly uint m_value;

	[Token(Token = "0x6000B74")]
	[Address(RVA = "0x54DC7A0", Offset = "0x54DB7A0", VA = "0x54DC7A0", Slot = "4")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000B75")]
	[Address(RVA = "0x54DC830", Offset = "0x54DB830", VA = "0x54DC830", Slot = "23")]
	public int CompareTo(uint value)
	{
		return default(int);
	}

	[Token(Token = "0x6000B76")]
	[Address(RVA = "0x54DC840", Offset = "0x54DB840", VA = "0x54DC840", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B77")]
	[Address(RVA = "0x54DC870", Offset = "0x54DB870", VA = "0x54DC870", Slot = "24")]
	[System.Runtime.Versioning.NonVersionable]
	public bool Equals(uint obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B78")]
	[Address(RVA = "0x54DC880", Offset = "0x54DB880", VA = "0x54DC880", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000B79")]
	[Address(RVA = "0x54DC890", Offset = "0x54DB890", VA = "0x54DC890", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000B7A")]
	[Address(RVA = "0x54DC910", Offset = "0x54DB910", VA = "0x54DC910", Slot = "20")]
	public string ToString(IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6000B7B")]
	[Address(RVA = "0x54DC9A0", Offset = "0x54DB9A0", VA = "0x54DC9A0")]
	public string ToString(string format)
	{
		return null;
	}

	[Token(Token = "0x6000B7C")]
	[Address(RVA = "0x54DCA60", Offset = "0x54DBA60", VA = "0x54DCA60", Slot = "22")]
	public string ToString(string format, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6000B7D")]
	[Address(RVA = "0x54DCB30", Offset = "0x54DBB30", VA = "0x54DCB30", Slot = "25")]
	public bool TryFormat(Span<char> destination, out int charsWritten, [Optional] ReadOnlySpan<char> format, [Optional] IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B7E")]
	[Address(RVA = "0x54DCBC0", Offset = "0x54DBBC0", VA = "0x54DCBC0")]
	[CLSCompliant(false)]
	public static uint Parse(string s)
	{
		return default(uint);
	}

	[Token(Token = "0x6000B7F")]
	[Address(RVA = "0x54DCC80", Offset = "0x54DBC80", VA = "0x54DCC80")]
	[CLSCompliant(false)]
	public static uint Parse(string s, IFormatProvider provider)
	{
		return default(uint);
	}

	[Token(Token = "0x6000B80")]
	[Address(RVA = "0x54DCD50", Offset = "0x54DBD50", VA = "0x54DCD50")]
	[CLSCompliant(false)]
	public static uint Parse(string s, NumberStyles style, IFormatProvider provider)
	{
		return default(uint);
	}

	[Token(Token = "0x6000B81")]
	[Address(RVA = "0x54DCE20", Offset = "0x54DBE20", VA = "0x54DCE20")]
	[CLSCompliant(false)]
	public static bool TryParse(string s, out uint result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B82")]
	[Address(RVA = "0x54DCEE0", Offset = "0x54DBEE0", VA = "0x54DCEE0")]
	[CLSCompliant(false)]
	public static bool TryParse(string s, NumberStyles style, IFormatProvider provider, out uint result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B83")]
	[Address(RVA = "0x54DCFB0", Offset = "0x54DBFB0", VA = "0x54DCFB0", Slot = "5")]
	public TypeCode GetTypeCode()
	{
		return default(TypeCode);
	}

	[Token(Token = "0x6000B84")]
	[Address(RVA = "0x54DCFC0", Offset = "0x54DBFC0", VA = "0x54DCFC0", Slot = "6")]
	private bool System_002EIConvertible_002EToBoolean(IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B85")]
	[Address(RVA = "0x54DD010", Offset = "0x54DC010", VA = "0x54DD010", Slot = "7")]
	private char System_002EIConvertible_002EToChar(IFormatProvider provider)
	{
		return default(char);
	}

	[Token(Token = "0x6000B86")]
	[Address(RVA = "0x54DD060", Offset = "0x54DC060", VA = "0x54DD060", Slot = "8")]
	private sbyte System_002EIConvertible_002EToSByte(IFormatProvider provider)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000B87")]
	[Address(RVA = "0x54DD0B0", Offset = "0x54DC0B0", VA = "0x54DD0B0", Slot = "9")]
	private byte System_002EIConvertible_002EToByte(IFormatProvider provider)
	{
		return default(byte);
	}

	[Token(Token = "0x6000B88")]
	[Address(RVA = "0x54DD100", Offset = "0x54DC100", VA = "0x54DD100", Slot = "10")]
	private short System_002EIConvertible_002EToInt16(IFormatProvider provider)
	{
		return default(short);
	}

	[Token(Token = "0x6000B89")]
	[Address(RVA = "0x54DD150", Offset = "0x54DC150", VA = "0x54DD150", Slot = "11")]
	private ushort System_002EIConvertible_002EToUInt16(IFormatProvider provider)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000B8A")]
	[Address(RVA = "0x54DD1A0", Offset = "0x54DC1A0", VA = "0x54DD1A0", Slot = "12")]
	private int System_002EIConvertible_002EToInt32(IFormatProvider provider)
	{
		return default(int);
	}

	[Token(Token = "0x6000B8B")]
	[Address(RVA = "0x54DD1F0", Offset = "0x54DC1F0", VA = "0x54DD1F0", Slot = "13")]
	private uint System_002EIConvertible_002EToUInt32(IFormatProvider provider)
	{
		return default(uint);
	}

	[Token(Token = "0x6000B8C")]
	[Address(RVA = "0x54DD200", Offset = "0x54DC200", VA = "0x54DD200", Slot = "14")]
	private long System_002EIConvertible_002EToInt64(IFormatProvider provider)
	{
		return default(long);
	}

	[Token(Token = "0x6000B8D")]
	[Address(RVA = "0x54DD250", Offset = "0x54DC250", VA = "0x54DD250", Slot = "15")]
	private ulong System_002EIConvertible_002EToUInt64(IFormatProvider provider)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000B8E")]
	[Address(RVA = "0x54DD2A0", Offset = "0x54DC2A0", VA = "0x54DD2A0", Slot = "16")]
	private float System_002EIConvertible_002EToSingle(IFormatProvider provider)
	{
		return default(float);
	}

	[Token(Token = "0x6000B8F")]
	[Address(RVA = "0x54DD2F0", Offset = "0x54DC2F0", VA = "0x54DD2F0", Slot = "17")]
	private double System_002EIConvertible_002EToDouble(IFormatProvider provider)
	{
		return default(double);
	}

	[Token(Token = "0x6000B90")]
	[Address(RVA = "0x54DD340", Offset = "0x54DC340", VA = "0x54DD340", Slot = "18")]
	private decimal System_002EIConvertible_002EToDecimal(IFormatProvider provider)
	{
		return 0m;
	}

	[Token(Token = "0x6000B91")]
	[Address(RVA = "0x54DD390", Offset = "0x54DC390", VA = "0x54DD390", Slot = "19")]
	private DateTime System_002EIConvertible_002EToDateTime(IFormatProvider provider)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000B92")]
	[Address(RVA = "0x54DD410", Offset = "0x54DC410", VA = "0x54DD410", Slot = "21")]
	private object System_002EIConvertible_002EToType(Type type, IFormatProvider provider)
	{
		return null;
	}
}
