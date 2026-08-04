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
	[Token(Token = "0x4000370")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly long m_value;

	[Token(Token = "0x4000371")]
	public const long MaxValue = 9223372036854775807L;

	[Token(Token = "0x4000372")]
	public const long MinValue = -9223372036854775808L;

	[Token(Token = "0x60007FB")]
	[Address(RVA = "0x3CB5220", Offset = "0x3CB5220", VA = "0x3CB5220", Slot = "4")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x60007FC")]
	[Address(RVA = "0x3CB52B0", Offset = "0x3CB52B0", VA = "0x3CB52B0", Slot = "23")]
	public int CompareTo(long value)
	{
		return default(int);
	}

	[Token(Token = "0x60007FD")]
	[Address(RVA = "0x3CB52D0", Offset = "0x3CB52D0", VA = "0x3CB52D0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60007FE")]
	[Address(RVA = "0x3CB5300", Offset = "0x3CB5300", VA = "0x3CB5300", Slot = "24")]
	[System.Runtime.Versioning.NonVersionable]
	public bool Equals(long obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60007FF")]
	[Address(RVA = "0x3CB5310", Offset = "0x3CB5310", VA = "0x3CB5310", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000800")]
	[Address(RVA = "0x3CB5320", Offset = "0x3CB5320", VA = "0x3CB5320", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000801")]
	[Address(RVA = "0x3CB5660", Offset = "0x3CB5660", VA = "0x3CB5660", Slot = "20")]
	public string ToString(IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6000802")]
	[Address(RVA = "0x3CB56E0", Offset = "0x3CB56E0", VA = "0x3CB56E0")]
	public string ToString(string format)
	{
		return null;
	}

	[Token(Token = "0x6000803")]
	[Address(RVA = "0x3CB57A0", Offset = "0x3CB57A0", VA = "0x3CB57A0", Slot = "22")]
	public string ToString(string format, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6000804")]
	[Address(RVA = "0x3CB5860", Offset = "0x3CB5860", VA = "0x3CB5860", Slot = "25")]
	public bool TryFormat(Span<char> destination, out int charsWritten, [Optional] ReadOnlySpan<char> format, [Optional] IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x6000805")]
	[Address(RVA = "0x3CB5C60", Offset = "0x3CB5C60", VA = "0x3CB5C60")]
	public static long Parse(string s, IFormatProvider provider)
	{
		return default(long);
	}

	[Token(Token = "0x6000806")]
	[Address(RVA = "0x3CB5FB0", Offset = "0x3CB5FB0", VA = "0x3CB5FB0")]
	public static long Parse(string s, NumberStyles style, IFormatProvider provider)
	{
		return default(long);
	}

	[Token(Token = "0x6000807")]
	[Address(RVA = "0x3CB6080", Offset = "0x3CB6080", VA = "0x3CB6080")]
	public static bool TryParse(string s, out long result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000808")]
	[Address(RVA = "0x3CB63D0", Offset = "0x3CB63D0", VA = "0x3CB63D0")]
	public static bool TryParse(string s, NumberStyles style, IFormatProvider provider, out long result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000809")]
	[Address(RVA = "0x3CB64A0", Offset = "0x3CB64A0", VA = "0x3CB64A0", Slot = "5")]
	public TypeCode GetTypeCode()
	{
		return default(TypeCode);
	}

	[Token(Token = "0x600080A")]
	[Address(RVA = "0x3CB64B0", Offset = "0x3CB64B0", VA = "0x3CB64B0", Slot = "6")]
	private bool System_002EIConvertible_002EToBoolean(IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x600080B")]
	[Address(RVA = "0x3CB6510", Offset = "0x3CB6510", VA = "0x3CB6510", Slot = "7")]
	private char System_002EIConvertible_002EToChar(IFormatProvider provider)
	{
		return default(char);
	}

	[Token(Token = "0x600080C")]
	[Address(RVA = "0x3CB6570", Offset = "0x3CB6570", VA = "0x3CB6570", Slot = "8")]
	private sbyte System_002EIConvertible_002EToSByte(IFormatProvider provider)
	{
		return default(sbyte);
	}

	[Token(Token = "0x600080D")]
	[Address(RVA = "0x3CB65D0", Offset = "0x3CB65D0", VA = "0x3CB65D0", Slot = "9")]
	private byte System_002EIConvertible_002EToByte(IFormatProvider provider)
	{
		return default(byte);
	}

	[Token(Token = "0x600080E")]
	[Address(RVA = "0x3CB6630", Offset = "0x3CB6630", VA = "0x3CB6630", Slot = "10")]
	private short System_002EIConvertible_002EToInt16(IFormatProvider provider)
	{
		return default(short);
	}

	[Token(Token = "0x600080F")]
	[Address(RVA = "0x3CB6690", Offset = "0x3CB6690", VA = "0x3CB6690", Slot = "11")]
	private ushort System_002EIConvertible_002EToUInt16(IFormatProvider provider)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000810")]
	[Address(RVA = "0x3CB66F0", Offset = "0x3CB66F0", VA = "0x3CB66F0", Slot = "12")]
	private int System_002EIConvertible_002EToInt32(IFormatProvider provider)
	{
		return default(int);
	}

	[Token(Token = "0x6000811")]
	[Address(RVA = "0x3CB6750", Offset = "0x3CB6750", VA = "0x3CB6750", Slot = "13")]
	private uint System_002EIConvertible_002EToUInt32(IFormatProvider provider)
	{
		return default(uint);
	}

	[Token(Token = "0x6000812")]
	[Address(RVA = "0x3CB67B0", Offset = "0x3CB67B0", VA = "0x3CB67B0", Slot = "14")]
	private long System_002EIConvertible_002EToInt64(IFormatProvider provider)
	{
		return default(long);
	}

	[Token(Token = "0x6000813")]
	[Address(RVA = "0x3CB67C0", Offset = "0x3CB67C0", VA = "0x3CB67C0", Slot = "15")]
	private ulong System_002EIConvertible_002EToUInt64(IFormatProvider provider)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000814")]
	[Address(RVA = "0x3CB6820", Offset = "0x3CB6820", VA = "0x3CB6820", Slot = "16")]
	private float System_002EIConvertible_002EToSingle(IFormatProvider provider)
	{
		return default(float);
	}

	[Token(Token = "0x6000815")]
	[Address(RVA = "0x3CB6880", Offset = "0x3CB6880", VA = "0x3CB6880", Slot = "17")]
	private double System_002EIConvertible_002EToDouble(IFormatProvider provider)
	{
		return default(double);
	}

	[Token(Token = "0x6000816")]
	[Address(RVA = "0x3CB68E0", Offset = "0x3CB68E0", VA = "0x3CB68E0", Slot = "18")]
	private decimal System_002EIConvertible_002EToDecimal(IFormatProvider provider)
	{
		return default(decimal);
	}

	[Token(Token = "0x6000817")]
	[Address(RVA = "0x3CB6940", Offset = "0x3CB6940", VA = "0x3CB6940", Slot = "19")]
	private DateTime System_002EIConvertible_002EToDateTime(IFormatProvider provider)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000818")]
	[Address(RVA = "0x3CB69C0", Offset = "0x3CB69C0", VA = "0x3CB69C0", Slot = "21")]
	private object System_002EIConvertible_002EToType(Type type, IFormatProvider provider)
	{
		return null;
	}
}
