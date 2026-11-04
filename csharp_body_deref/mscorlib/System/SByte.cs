// ==================== AoTTG2 cross-reference ====================
// Type: System.SByte
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
[Token(Token = "0x200012E")]
[CLSCompliant(false)]
public readonly struct SByte : IComparable, IConvertible, IFormattable, IComparable<sbyte>, IEquatable<sbyte>, System.ISpanFormattable
{
	[Token(Token = "0x400043E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly sbyte m_value;

	[Token(Token = "0x60009D0")]
	[Address(RVA = "0x1B484F0", Offset = "0x1B46AF0", VA = "0x181B484F0", Slot = "4")]
	public int CompareTo(object obj)
	{
		return default(int);
	}

	[Token(Token = "0x60009D1")]
	[Address(RVA = "0x1B484E0", Offset = "0x1B46AE0", VA = "0x181B484E0", Slot = "23")]
	public int CompareTo(sbyte value)
	{
		return default(int);
	}

	[Token(Token = "0x60009D2")]
	[Address(RVA = "0x1B485A0", Offset = "0x1B46BA0", VA = "0x181B485A0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60009D3")]
	[Address(RVA = "0x1A79870", Offset = "0x1A77E70", VA = "0x181A79870", Slot = "24")]
	[System.Runtime.Versioning.NonVersionable]
	public bool Equals(sbyte obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60009D4")]
	[Address(RVA = "0x1B48600", Offset = "0x1B46C00", VA = "0x181B48600", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60009D5")]
	[Address(RVA = "0x1B48FD0", Offset = "0x1B475D0", VA = "0x181B48FD0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60009D6")]
	[Address(RVA = "0x1B48F30", Offset = "0x1B47530", VA = "0x181B48F30", Slot = "20")]
	public string ToString(IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x60009D7")]
	[Address(RVA = "0x1B48DB0", Offset = "0x1B473B0", VA = "0x181B48DB0", Slot = "22")]
	public string ToString(string format, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x60009D8")]
	[Address(RVA = "0x1B49060", Offset = "0x1B47660", VA = "0x181B49060", Slot = "25")]
	public bool TryFormat(Span<char> destination, out int charsWritten, [Optional] ReadOnlySpan<char> format, [Optional] IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x60009D9")]
	[Address(RVA = "0x1B48610", Offset = "0x1B46C10", VA = "0x181B48610")]
	[CLSCompliant(false)]
	public static sbyte Parse(string s, IFormatProvider provider)
	{
		return default(sbyte);
	}

	[Token(Token = "0x60009DA")]
	[Address(RVA = "0x1B48840", Offset = "0x1B46E40", VA = "0x181B48840")]
	[CLSCompliant(false)]
	public static sbyte Parse(string s, NumberStyles style, IFormatProvider provider)
	{
		return default(sbyte);
	}

	[Token(Token = "0x60009DB")]
	[Address(RVA = "0x1B486B0", Offset = "0x1B46CB0", VA = "0x181B486B0")]
	private static sbyte Parse(ReadOnlySpan<char> s, NumberStyles style, NumberFormatInfo info)
	{
		return default(sbyte);
	}

	[Token(Token = "0x60009DC")]
	[Address(RVA = "0x1B49180", Offset = "0x1B47780", VA = "0x181B49180")]
	[CLSCompliant(false)]
	public static bool TryParse(string s, out sbyte result)
	{
		return default(bool);
	}

	[Token(Token = "0x60009DD")]
	[Address(RVA = "0x1B49360", Offset = "0x1B47960", VA = "0x181B49360")]
	[CLSCompliant(false)]
	public static bool TryParse(string s, NumberStyles style, IFormatProvider provider, out sbyte result)
	{
		return default(bool);
	}

	[Token(Token = "0x60009DE")]
	[Address(RVA = "0x1B49290", Offset = "0x1B47890", VA = "0x181B49290")]
	private static bool TryParse(ReadOnlySpan<char> s, NumberStyles style, NumberFormatInfo info, out sbyte result)
	{
		return default(bool);
	}

	[Token(Token = "0x60009DF")]
	[Address(RVA = "0x8680A0", Offset = "0x8666A0", VA = "0x1808680A0", Slot = "5")]
	public TypeCode GetTypeCode()
	{
		return default(TypeCode);
	}

	[Token(Token = "0x60009E0")]
	[Address(RVA = "0x1B488F0", Offset = "0x1B46EF0", VA = "0x181B488F0", Slot = "6")]
	private bool System_002EIConvertible_002EToBoolean(IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x60009E1")]
	[Address(RVA = "0x1B48990", Offset = "0x1B46F90", VA = "0x181B48990", Slot = "7")]
	private char System_002EIConvertible_002EToChar(IFormatProvider provider)
	{
		return default(char);
	}

	[Token(Token = "0x60009E2")]
	[Address(RVA = "0xAE2930", Offset = "0xAE0F30", VA = "0x180AE2930", Slot = "8")]
	private sbyte System_002EIConvertible_002EToSByte(IFormatProvider provider)
	{
		return default(sbyte);
	}

	[Token(Token = "0x60009E3")]
	[Address(RVA = "0x1B48940", Offset = "0x1B46F40", VA = "0x181B48940", Slot = "9")]
	private byte System_002EIConvertible_002EToByte(IFormatProvider provider)
	{
		return default(byte);
	}

	[Token(Token = "0x60009E4")]
	[Address(RVA = "0x1B48B30", Offset = "0x1B47130", VA = "0x181B48B30", Slot = "10")]
	private short System_002EIConvertible_002EToInt16(IFormatProvider provider)
	{
		return default(short);
	}

	[Token(Token = "0x60009E5")]
	[Address(RVA = "0x1B48CC0", Offset = "0x1B472C0", VA = "0x181B48CC0", Slot = "11")]
	private ushort System_002EIConvertible_002EToUInt16(IFormatProvider provider)
	{
		return default(ushort);
	}

	[Token(Token = "0x60009E6")]
	[Address(RVA = "0x1B48B80", Offset = "0x1B47180", VA = "0x181B48B80", Slot = "12")]
	private int System_002EIConvertible_002EToInt32(IFormatProvider provider)
	{
		return default(int);
	}

	[Token(Token = "0x60009E7")]
	[Address(RVA = "0x1B48D10", Offset = "0x1B47310", VA = "0x181B48D10", Slot = "13")]
	private uint System_002EIConvertible_002EToUInt32(IFormatProvider provider)
	{
		return default(uint);
	}

	[Token(Token = "0x60009E8")]
	[Address(RVA = "0x1B48B90", Offset = "0x1B47190", VA = "0x181B48B90", Slot = "14")]
	private long System_002EIConvertible_002EToInt64(IFormatProvider provider)
	{
		return default(long);
	}

	[Token(Token = "0x60009E9")]
	[Address(RVA = "0x1B48D60", Offset = "0x1B47360", VA = "0x181B48D60", Slot = "15")]
	private ulong System_002EIConvertible_002EToUInt64(IFormatProvider provider)
	{
		return default(ulong);
	}

	[Token(Token = "0x60009EA")]
	[Address(RVA = "0x1B48BE0", Offset = "0x1B471E0", VA = "0x181B48BE0", Slot = "16")]
	private float System_002EIConvertible_002EToSingle(IFormatProvider provider)
	{
		return default(float);
	}

	[Token(Token = "0x60009EB")]
	[Address(RVA = "0x1B48AE0", Offset = "0x1B470E0", VA = "0x181B48AE0", Slot = "17")]
	private double System_002EIConvertible_002EToDouble(IFormatProvider provider)
	{
		return default(double);
	}

	[Token(Token = "0x60009EC")]
	[Address(RVA = "0x1B48A70", Offset = "0x1B47070", VA = "0x181B48A70", Slot = "18")]
	private decimal System_002EIConvertible_002EToDecimal(IFormatProvider provider)
	{
		return 0m;
	}

	[Token(Token = "0x60009ED")]
	[Address(RVA = "0x1B489E0", Offset = "0x1B46FE0", VA = "0x181B489E0", Slot = "19")]
	private DateTime System_002EIConvertible_002EToDateTime(IFormatProvider provider)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60009EE")]
	[Address(RVA = "0x1B48C30", Offset = "0x1B47230", VA = "0x181B48C30", Slot = "21")]
	private object System_002EIConvertible_002EToType(Type type, IFormatProvider provider)
	{
		return null;
	}
}
