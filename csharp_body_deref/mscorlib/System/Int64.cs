// ==================== AoTTG2 cross-reference ====================
// Type: System.Int64
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
[Token(Token = "0x2000104")]
public readonly struct Int64 : IComparable, IConvertible, IFormattable, IComparable<long>, IEquatable<long>, System.ISpanFormattable
{
	[Token(Token = "0x40003F7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly long m_value;

	[Token(Token = "0x600082D")]
	[Address(RVA = "0x1B29FD0", Offset = "0x1B285D0", VA = "0x181B29FD0", Slot = "4")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x600082E")]
	[Address(RVA = "0x1B2A090", Offset = "0x1B28690", VA = "0x181B2A090", Slot = "23")]
	public int CompareTo(long value)
	{
		return default(int);
	}

	[Token(Token = "0x600082F")]
	[Address(RVA = "0x1B2A0B0", Offset = "0x1B286B0", VA = "0x181B2A0B0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000830")]
	[Address(RVA = "0x187DED0", Offset = "0x187C4D0", VA = "0x18187DED0", Slot = "24")]
	[System.Runtime.Versioning.NonVersionable]
	public bool Equals(long obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000831")]
	[Address(RVA = "0x1B2A110", Offset = "0x1B28710", VA = "0x181B2A110", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000832")]
	[Address(RVA = "0x1B2A800", Offset = "0x1B28E00", VA = "0x181B2A800", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000833")]
	[Address(RVA = "0x1B2A890", Offset = "0x1B28E90", VA = "0x181B2A890", Slot = "20")]
	public string ToString(IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6000834")]
	[Address(RVA = "0x1B2AA00", Offset = "0x1B29000", VA = "0x181B2AA00")]
	public string ToString(string format)
	{
		return null;
	}

	[Token(Token = "0x6000835")]
	[Address(RVA = "0x1B2A930", Offset = "0x1B28F30", VA = "0x181B2A930", Slot = "22")]
	public string ToString(string format, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6000836")]
	[Address(RVA = "0x1B2AAC0", Offset = "0x1B290C0", VA = "0x181B2AAC0", Slot = "25")]
	public bool TryFormat(Span<char> destination, out int charsWritten, [Optional] ReadOnlySpan<char> format, [Optional] IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x6000837")]
	[Address(RVA = "0x1B2A220", Offset = "0x1B28820", VA = "0x181B2A220")]
	public static long Parse(string s, IFormatProvider provider)
	{
		return default(long);
	}

	[Token(Token = "0x6000838")]
	[Address(RVA = "0x1B2A130", Offset = "0x1B28730", VA = "0x181B2A130")]
	public static long Parse(string s, NumberStyles style, IFormatProvider provider)
	{
		return default(long);
	}

	[Token(Token = "0x6000839")]
	[Address(RVA = "0x1B2AB50", Offset = "0x1B29150", VA = "0x181B2AB50")]
	public static bool TryParse(string s, out long result)
	{
		return default(bool);
	}

	[Token(Token = "0x600083A")]
	[Address(RVA = "0x1B2ACD0", Offset = "0x1B292D0", VA = "0x181B2ACD0")]
	public static bool TryParse(string s, NumberStyles style, IFormatProvider provider, out long result)
	{
		return default(bool);
	}

	[Token(Token = "0x600083B")]
	[Address(RVA = "0x1B2A120", Offset = "0x1B28720", VA = "0x181B2A120", Slot = "5")]
	public TypeCode GetTypeCode()
	{
		return default(TypeCode);
	}

	[Token(Token = "0x600083C")]
	[Address(RVA = "0x1B2A300", Offset = "0x1B28900", VA = "0x181B2A300", Slot = "6")]
	private bool System_002EIConvertible_002EToBoolean(IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x600083D")]
	[Address(RVA = "0x1B2A3A0", Offset = "0x1B289A0", VA = "0x181B2A3A0", Slot = "7")]
	private char System_002EIConvertible_002EToChar(IFormatProvider provider)
	{
		return default(char);
	}

	[Token(Token = "0x600083E")]
	[Address(RVA = "0x1B2A5E0", Offset = "0x1B28BE0", VA = "0x181B2A5E0", Slot = "8")]
	private sbyte System_002EIConvertible_002EToSByte(IFormatProvider provider)
	{
		return default(sbyte);
	}

	[Token(Token = "0x600083F")]
	[Address(RVA = "0x1B2A350", Offset = "0x1B28950", VA = "0x181B2A350", Slot = "9")]
	private byte System_002EIConvertible_002EToByte(IFormatProvider provider)
	{
		return default(byte);
	}

	[Token(Token = "0x6000840")]
	[Address(RVA = "0x1B2A540", Offset = "0x1B28B40", VA = "0x181B2A540", Slot = "10")]
	private short System_002EIConvertible_002EToInt16(IFormatProvider provider)
	{
		return default(short);
	}

	[Token(Token = "0x6000841")]
	[Address(RVA = "0x1B2A710", Offset = "0x1B28D10", VA = "0x181B2A710", Slot = "11")]
	private ushort System_002EIConvertible_002EToUInt16(IFormatProvider provider)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000842")]
	[Address(RVA = "0x1B2A590", Offset = "0x1B28B90", VA = "0x181B2A590", Slot = "12")]
	private int System_002EIConvertible_002EToInt32(IFormatProvider provider)
	{
		return default(int);
	}

	[Token(Token = "0x6000843")]
	[Address(RVA = "0x1B2A760", Offset = "0x1B28D60", VA = "0x181B2A760", Slot = "13")]
	private uint System_002EIConvertible_002EToUInt32(IFormatProvider provider)
	{
		return default(uint);
	}

	[Token(Token = "0x6000844")]
	[Address(RVA = "0x72FFC0", Offset = "0x72E5C0", VA = "0x18072FFC0", Slot = "14")]
	private long System_002EIConvertible_002EToInt64(IFormatProvider provider)
	{
		return default(long);
	}

	[Token(Token = "0x6000845")]
	[Address(RVA = "0x1B2A7B0", Offset = "0x1B28DB0", VA = "0x181B2A7B0", Slot = "15")]
	private ulong System_002EIConvertible_002EToUInt64(IFormatProvider provider)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000846")]
	[Address(RVA = "0x1B2A630", Offset = "0x1B28C30", VA = "0x181B2A630", Slot = "16")]
	private float System_002EIConvertible_002EToSingle(IFormatProvider provider)
	{
		return default(float);
	}

	[Token(Token = "0x6000847")]
	[Address(RVA = "0x1B2A4F0", Offset = "0x1B28AF0", VA = "0x181B2A4F0", Slot = "17")]
	private double System_002EIConvertible_002EToDouble(IFormatProvider provider)
	{
		return default(double);
	}

	[Token(Token = "0x6000848")]
	[Address(RVA = "0x1B2A480", Offset = "0x1B28A80", VA = "0x181B2A480", Slot = "18")]
	private decimal System_002EIConvertible_002EToDecimal(IFormatProvider provider)
	{
		return 0m;
	}

	[Token(Token = "0x6000849")]
	[Address(RVA = "0x1B2A3F0", Offset = "0x1B289F0", VA = "0x181B2A3F0", Slot = "19")]
	private DateTime System_002EIConvertible_002EToDateTime(IFormatProvider provider)
	{
		return default(DateTime);
	}

	[Token(Token = "0x600084A")]
	[Address(RVA = "0x1B2A680", Offset = "0x1B28C80", VA = "0x181B2A680", Slot = "21")]
	private object System_002EIConvertible_002EToType(Type type, IFormatProvider provider)
	{
		return null;
	}
}
