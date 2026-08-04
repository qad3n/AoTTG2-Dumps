// ==================== AoTTG2 cross-reference ====================
// Type: System.UInt16
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
[Token(Token = "0x2000124")]
[CLSCompliant(false)]
public readonly struct UInt16 : IComparable, IConvertible, IFormattable, IComparable<ushort>, IEquatable<ushort>, System.ISpanFormattable
{
	[Token(Token = "0x4000419")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly ushort m_value;

	[Token(Token = "0x400041A")]
	public const ushort MaxValue = 65535;

	[Token(Token = "0x400041B")]
	public const ushort MinValue = 0;

	[Token(Token = "0x6000B31")]
	[Address(RVA = "0x3CD7860", Offset = "0x3CD7860", VA = "0x3CD7860", Slot = "4")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000B32")]
	[Address(RVA = "0x3CD78E0", Offset = "0x3CD78E0", VA = "0x3CD78E0", Slot = "23")]
	public int CompareTo(ushort value)
	{
		return default(int);
	}

	[Token(Token = "0x6000B33")]
	[Address(RVA = "0x3CD78F0", Offset = "0x3CD78F0", VA = "0x3CD78F0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B34")]
	[Address(RVA = "0x3CD7920", Offset = "0x3CD7920", VA = "0x3CD7920", Slot = "24")]
	[System.Runtime.Versioning.NonVersionable]
	public bool Equals(ushort obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B35")]
	[Address(RVA = "0x3CD7930", Offset = "0x3CD7930", VA = "0x3CD7930", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000B36")]
	[Address(RVA = "0x3CD7940", Offset = "0x3CD7940", VA = "0x3CD7940", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000B37")]
	[Address(RVA = "0x3CD79C0", Offset = "0x3CD79C0", VA = "0x3CD79C0", Slot = "20")]
	public string ToString(IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6000B38")]
	[Address(RVA = "0x3CD7A50", Offset = "0x3CD7A50", VA = "0x3CD7A50")]
	public string ToString(string format)
	{
		return null;
	}

	[Token(Token = "0x6000B39")]
	[Address(RVA = "0x3CD7B10", Offset = "0x3CD7B10", VA = "0x3CD7B10", Slot = "22")]
	public string ToString(string format, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6000B3A")]
	[Address(RVA = "0x3CD7BE0", Offset = "0x3CD7BE0", VA = "0x3CD7BE0", Slot = "25")]
	public bool TryFormat(Span<char> destination, out int charsWritten, [Optional] ReadOnlySpan<char> format, [Optional] IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B3B")]
	[Address(RVA = "0x3CD7C70", Offset = "0x3CD7C70", VA = "0x3CD7C70")]
	[CLSCompliant(false)]
	public static ushort Parse(string s, IFormatProvider provider)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000B3C")]
	[Address(RVA = "0x3CD7E60", Offset = "0x3CD7E60", VA = "0x3CD7E60")]
	[CLSCompliant(false)]
	public static ushort Parse(string s, NumberStyles style, IFormatProvider provider)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000B3D")]
	[Address(RVA = "0x3CD7CE0", Offset = "0x3CD7CE0", VA = "0x3CD7CE0")]
	private static ushort Parse(ReadOnlySpan<char> s, NumberStyles style, NumberFormatInfo info)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000B3E")]
	[Address(RVA = "0x3CD7EE0", Offset = "0x3CD7EE0", VA = "0x3CD7EE0")]
	[CLSCompliant(false)]
	public static bool TryParse(string s, out ushort result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B3F")]
	[Address(RVA = "0x3CD8080", Offset = "0x3CD8080", VA = "0x3CD8080")]
	[CLSCompliant(false)]
	public static bool TryParse(string s, NumberStyles style, IFormatProvider provider, out ushort result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B40")]
	[Address(RVA = "0x3CD7FD0", Offset = "0x3CD7FD0", VA = "0x3CD7FD0")]
	private static bool TryParse(ReadOnlySpan<char> s, NumberStyles style, NumberFormatInfo info, out ushort result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B41")]
	[Address(RVA = "0x3CD8170", Offset = "0x3CD8170", VA = "0x3CD8170", Slot = "5")]
	public TypeCode GetTypeCode()
	{
		return default(TypeCode);
	}

	[Token(Token = "0x6000B42")]
	[Address(RVA = "0x3CD8180", Offset = "0x3CD8180", VA = "0x3CD8180", Slot = "6")]
	private bool System_002EIConvertible_002EToBoolean(IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B43")]
	[Address(RVA = "0x3CD81E0", Offset = "0x3CD81E0", VA = "0x3CD81E0", Slot = "7")]
	private char System_002EIConvertible_002EToChar(IFormatProvider provider)
	{
		return default(char);
	}

	[Token(Token = "0x6000B44")]
	[Address(RVA = "0x3CD8240", Offset = "0x3CD8240", VA = "0x3CD8240", Slot = "8")]
	private sbyte System_002EIConvertible_002EToSByte(IFormatProvider provider)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000B45")]
	[Address(RVA = "0x3CD82A0", Offset = "0x3CD82A0", VA = "0x3CD82A0", Slot = "9")]
	private byte System_002EIConvertible_002EToByte(IFormatProvider provider)
	{
		return default(byte);
	}

	[Token(Token = "0x6000B46")]
	[Address(RVA = "0x3CD8300", Offset = "0x3CD8300", VA = "0x3CD8300", Slot = "10")]
	private short System_002EIConvertible_002EToInt16(IFormatProvider provider)
	{
		return default(short);
	}

	[Token(Token = "0x6000B47")]
	[Address(RVA = "0x3CD8360", Offset = "0x3CD8360", VA = "0x3CD8360", Slot = "11")]
	private ushort System_002EIConvertible_002EToUInt16(IFormatProvider provider)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000B48")]
	[Address(RVA = "0x3CD8370", Offset = "0x3CD8370", VA = "0x3CD8370", Slot = "12")]
	private int System_002EIConvertible_002EToInt32(IFormatProvider provider)
	{
		return default(int);
	}

	[Token(Token = "0x6000B49")]
	[Address(RVA = "0x3CD83D0", Offset = "0x3CD83D0", VA = "0x3CD83D0", Slot = "13")]
	private uint System_002EIConvertible_002EToUInt32(IFormatProvider provider)
	{
		return default(uint);
	}

	[Token(Token = "0x6000B4A")]
	[Address(RVA = "0x3CD8430", Offset = "0x3CD8430", VA = "0x3CD8430", Slot = "14")]
	private long System_002EIConvertible_002EToInt64(IFormatProvider provider)
	{
		return default(long);
	}

	[Token(Token = "0x6000B4B")]
	[Address(RVA = "0x3CD8490", Offset = "0x3CD8490", VA = "0x3CD8490", Slot = "15")]
	private ulong System_002EIConvertible_002EToUInt64(IFormatProvider provider)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000B4C")]
	[Address(RVA = "0x3CD84F0", Offset = "0x3CD84F0", VA = "0x3CD84F0", Slot = "16")]
	private float System_002EIConvertible_002EToSingle(IFormatProvider provider)
	{
		return default(float);
	}

	[Token(Token = "0x6000B4D")]
	[Address(RVA = "0x3CD8550", Offset = "0x3CD8550", VA = "0x3CD8550", Slot = "17")]
	private double System_002EIConvertible_002EToDouble(IFormatProvider provider)
	{
		return default(double);
	}

	[Token(Token = "0x6000B4E")]
	[Address(RVA = "0x3CD85B0", Offset = "0x3CD85B0", VA = "0x3CD85B0", Slot = "18")]
	private decimal System_002EIConvertible_002EToDecimal(IFormatProvider provider)
	{
		return default(decimal);
	}

	[Token(Token = "0x6000B4F")]
	[Address(RVA = "0x3CD8610", Offset = "0x3CD8610", VA = "0x3CD8610", Slot = "19")]
	private DateTime System_002EIConvertible_002EToDateTime(IFormatProvider provider)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000B50")]
	[Address(RVA = "0x3CD8690", Offset = "0x3CD8690", VA = "0x3CD8690", Slot = "21")]
	private object System_002EIConvertible_002EToType(Type type, IFormatProvider provider)
	{
		return null;
	}
}
