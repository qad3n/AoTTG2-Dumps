// ==================== AoTTG2 cross-reference ====================
// Type: System.UInt64
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
[Token(Token = "0x200014D")]
[CLSCompliant(false)]
public readonly struct UInt64 : IComparable, IConvertible, IFormattable, IComparable<ulong>, IEquatable<ulong>, System.ISpanFormattable
{
	[Token(Token = "0x400047E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly ulong m_value;

	[Token(Token = "0x6000BB6")]
	[Address(RVA = "0x1B56D80", Offset = "0x1B55380", VA = "0x181B56D80", Slot = "4")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000BB7")]
	[Address(RVA = "0x1B56D60", Offset = "0x1B55360", VA = "0x181B56D60", Slot = "23")]
	public int CompareTo(ulong value)
	{
		return default(int);
	}

	[Token(Token = "0x6000BB8")]
	[Address(RVA = "0x1B56E40", Offset = "0x1B55440", VA = "0x181B56E40", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BB9")]
	[Address(RVA = "0x187DED0", Offset = "0x187C4D0", VA = "0x18187DED0", Slot = "24")]
	[System.Runtime.Versioning.NonVersionable]
	public bool Equals(ulong obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BBA")]
	[Address(RVA = "0x1B56EA0", Offset = "0x1B554A0", VA = "0x181B56EA0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000BBB")]
	[Address(RVA = "0x1B57880", Offset = "0x1B55E80", VA = "0x181B57880", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000BBC")]
	[Address(RVA = "0x1B577E0", Offset = "0x1B55DE0", VA = "0x181B577E0", Slot = "20")]
	public string ToString(IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6000BBD")]
	[Address(RVA = "0x1B57650", Offset = "0x1B55C50", VA = "0x181B57650")]
	public string ToString(string format)
	{
		return null;
	}

	[Token(Token = "0x6000BBE")]
	[Address(RVA = "0x1B57710", Offset = "0x1B55D10", VA = "0x181B57710", Slot = "22")]
	public string ToString(string format, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6000BBF")]
	[Address(RVA = "0x1B57910", Offset = "0x1B55F10", VA = "0x181B57910", Slot = "25")]
	public bool TryFormat(Span<char> destination, out int charsWritten, [Optional] ReadOnlySpan<char> format, [Optional] IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BC0")]
	[Address(RVA = "0x1B56F90", Offset = "0x1B55590", VA = "0x181B56F90")]
	[CLSCompliant(false)]
	public static ulong Parse(string s)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000BC1")]
	[Address(RVA = "0x1B56EB0", Offset = "0x1B554B0", VA = "0x181B56EB0")]
	[CLSCompliant(false)]
	public static ulong Parse(string s, IFormatProvider provider)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000BC2")]
	[Address(RVA = "0x1B57060", Offset = "0x1B55660", VA = "0x181B57060")]
	[CLSCompliant(false)]
	public static ulong Parse(string s, NumberStyles style, IFormatProvider provider)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000BC3")]
	[Address(RVA = "0x1B57A90", Offset = "0x1B56090", VA = "0x181B57A90")]
	[CLSCompliant(false)]
	public static bool TryParse(string s, out ulong result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BC4")]
	[Address(RVA = "0x1B579A0", Offset = "0x1B55FA0", VA = "0x181B579A0")]
	[CLSCompliant(false)]
	public static bool TryParse(string s, NumberStyles style, IFormatProvider provider, out ulong result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BC5")]
	[Address(RVA = "0x847030", Offset = "0x845630", VA = "0x180847030", Slot = "5")]
	public TypeCode GetTypeCode()
	{
		return default(TypeCode);
	}

	[Token(Token = "0x6000BC6")]
	[Address(RVA = "0x1B57150", Offset = "0x1B55750", VA = "0x181B57150", Slot = "6")]
	private bool System_002EIConvertible_002EToBoolean(IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BC7")]
	[Address(RVA = "0x1B571F0", Offset = "0x1B557F0", VA = "0x181B571F0", Slot = "7")]
	private char System_002EIConvertible_002EToChar(IFormatProvider provider)
	{
		return default(char);
	}

	[Token(Token = "0x6000BC8")]
	[Address(RVA = "0x1B57480", Offset = "0x1B55A80", VA = "0x181B57480", Slot = "8")]
	private sbyte System_002EIConvertible_002EToSByte(IFormatProvider provider)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000BC9")]
	[Address(RVA = "0x1B571A0", Offset = "0x1B557A0", VA = "0x181B571A0", Slot = "9")]
	private byte System_002EIConvertible_002EToByte(IFormatProvider provider)
	{
		return default(byte);
	}

	[Token(Token = "0x6000BCA")]
	[Address(RVA = "0x1B57390", Offset = "0x1B55990", VA = "0x181B57390", Slot = "10")]
	private short System_002EIConvertible_002EToInt16(IFormatProvider provider)
	{
		return default(short);
	}

	[Token(Token = "0x6000BCB")]
	[Address(RVA = "0x1B575B0", Offset = "0x1B55BB0", VA = "0x181B575B0", Slot = "11")]
	private ushort System_002EIConvertible_002EToUInt16(IFormatProvider provider)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000BCC")]
	[Address(RVA = "0x1B573E0", Offset = "0x1B559E0", VA = "0x181B573E0", Slot = "12")]
	private int System_002EIConvertible_002EToInt32(IFormatProvider provider)
	{
		return default(int);
	}

	[Token(Token = "0x6000BCD")]
	[Address(RVA = "0x1B57600", Offset = "0x1B55C00", VA = "0x181B57600", Slot = "13")]
	private uint System_002EIConvertible_002EToUInt32(IFormatProvider provider)
	{
		return default(uint);
	}

	[Token(Token = "0x6000BCE")]
	[Address(RVA = "0x1B57430", Offset = "0x1B55A30", VA = "0x181B57430", Slot = "14")]
	private long System_002EIConvertible_002EToInt64(IFormatProvider provider)
	{
		return default(long);
	}

	[Token(Token = "0x6000BCF")]
	[Address(RVA = "0x72FFC0", Offset = "0x72E5C0", VA = "0x18072FFC0", Slot = "15")]
	private ulong System_002EIConvertible_002EToUInt64(IFormatProvider provider)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000BD0")]
	[Address(RVA = "0x1B574D0", Offset = "0x1B55AD0", VA = "0x181B574D0", Slot = "16")]
	private float System_002EIConvertible_002EToSingle(IFormatProvider provider)
	{
		return default(float);
	}

	[Token(Token = "0x6000BD1")]
	[Address(RVA = "0x1B57340", Offset = "0x1B55940", VA = "0x181B57340", Slot = "17")]
	private double System_002EIConvertible_002EToDouble(IFormatProvider provider)
	{
		return default(double);
	}

	[Token(Token = "0x6000BD2")]
	[Address(RVA = "0x1B572D0", Offset = "0x1B558D0", VA = "0x181B572D0", Slot = "18")]
	private decimal System_002EIConvertible_002EToDecimal(IFormatProvider provider)
	{
		return 0m;
	}

	[Token(Token = "0x6000BD3")]
	[Address(RVA = "0x1B57240", Offset = "0x1B55840", VA = "0x181B57240", Slot = "19")]
	private DateTime System_002EIConvertible_002EToDateTime(IFormatProvider provider)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000BD4")]
	[Address(RVA = "0x1B57520", Offset = "0x1B55B20", VA = "0x181B57520", Slot = "21")]
	private object System_002EIConvertible_002EToType(Type type, IFormatProvider provider)
	{
		return null;
	}
}
