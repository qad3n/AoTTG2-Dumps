// ==================== AoTTG2 cross-reference ====================
// Type: System.UInt16
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
[Token(Token = "0x200014B")]
[CLSCompliant(false)]
public readonly struct UInt16 : IComparable, IConvertible, IFormattable, IComparable<ushort>, IEquatable<ushort>, System.ISpanFormattable
{
	[Token(Token = "0x400047C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly ushort m_value;

	[Token(Token = "0x6000B77")]
	[Address(RVA = "0x1B550C0", Offset = "0x1B536C0", VA = "0x181B550C0", Slot = "4")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000B78")]
	[Address(RVA = "0x1A7BFA0", Offset = "0x1A7A5A0", VA = "0x181A7BFA0", Slot = "23")]
	public int CompareTo(ushort value)
	{
		return default(int);
	}

	[Token(Token = "0x6000B79")]
	[Address(RVA = "0x1B55170", Offset = "0x1B53770", VA = "0x181B55170", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B7A")]
	[Address(RVA = "0x1A7C310", Offset = "0x1A7A910", VA = "0x181A7C310", Slot = "24")]
	[System.Runtime.Versioning.NonVersionable]
	public bool Equals(ushort obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B7B")]
	[Address(RVA = "0x846ED0", Offset = "0x8454D0", VA = "0x180846ED0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000B7C")]
	[Address(RVA = "0x1B55950", Offset = "0x1B53F50", VA = "0x181B55950", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000B7D")]
	[Address(RVA = "0x1B55B70", Offset = "0x1B54170", VA = "0x181B55B70", Slot = "20")]
	public string ToString(IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6000B7E")]
	[Address(RVA = "0x1B559E0", Offset = "0x1B53FE0", VA = "0x181B559E0")]
	public string ToString(string format)
	{
		return null;
	}

	[Token(Token = "0x6000B7F")]
	[Address(RVA = "0x1B55AA0", Offset = "0x1B540A0", VA = "0x181B55AA0", Slot = "22")]
	public string ToString(string format, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6000B80")]
	[Address(RVA = "0x1B55C10", Offset = "0x1B54210", VA = "0x181B55C10", Slot = "25")]
	public bool TryFormat(Span<char> destination, out int charsWritten, [Optional] ReadOnlySpan<char> format, [Optional] IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B81")]
	[Address(RVA = "0x1B551D0", Offset = "0x1B537D0", VA = "0x181B551D0")]
	[CLSCompliant(false)]
	public static ushort Parse(string s, IFormatProvider provider)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000B82")]
	[Address(RVA = "0x1B55270", Offset = "0x1B53870", VA = "0x181B55270")]
	[CLSCompliant(false)]
	public static ushort Parse(string s, NumberStyles style, IFormatProvider provider)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000B83")]
	[Address(RVA = "0x1B55320", Offset = "0x1B53920", VA = "0x181B55320")]
	private static ushort Parse(ReadOnlySpan<char> s, NumberStyles style, NumberFormatInfo info)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000B84")]
	[Address(RVA = "0x1B55CA0", Offset = "0x1B542A0", VA = "0x181B55CA0")]
	[CLSCompliant(false)]
	public static bool TryParse(string s, out ushort result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B85")]
	[Address(RVA = "0x1B55DB0", Offset = "0x1B543B0", VA = "0x181B55DB0")]
	[CLSCompliant(false)]
	public static bool TryParse(string s, NumberStyles style, IFormatProvider provider, out ushort result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B86")]
	[Address(RVA = "0x1B55EC0", Offset = "0x1B544C0", VA = "0x181B55EC0")]
	private static bool TryParse(ReadOnlySpan<char> s, NumberStyles style, NumberFormatInfo info, out ushort result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B87")]
	[Address(RVA = "0x846F50", Offset = "0x845550", VA = "0x180846F50", Slot = "5")]
	public TypeCode GetTypeCode()
	{
		return default(TypeCode);
	}

	[Token(Token = "0x6000B88")]
	[Address(RVA = "0x1B55450", Offset = "0x1B53A50", VA = "0x181B55450", Slot = "6")]
	private bool System_002EIConvertible_002EToBoolean(IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B89")]
	[Address(RVA = "0x1B554F0", Offset = "0x1B53AF0", VA = "0x181B554F0", Slot = "7")]
	private char System_002EIConvertible_002EToChar(IFormatProvider provider)
	{
		return default(char);
	}

	[Token(Token = "0x6000B8A")]
	[Address(RVA = "0x1B55780", Offset = "0x1B53D80", VA = "0x181B55780", Slot = "8")]
	private sbyte System_002EIConvertible_002EToSByte(IFormatProvider provider)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000B8B")]
	[Address(RVA = "0x1B554A0", Offset = "0x1B53AA0", VA = "0x181B554A0", Slot = "9")]
	private byte System_002EIConvertible_002EToByte(IFormatProvider provider)
	{
		return default(byte);
	}

	[Token(Token = "0x6000B8C")]
	[Address(RVA = "0x1B55690", Offset = "0x1B53C90", VA = "0x181B55690", Slot = "10")]
	private short System_002EIConvertible_002EToInt16(IFormatProvider provider)
	{
		return default(short);
	}

	[Token(Token = "0x6000B8D")]
	[Address(RVA = "0x846ED0", Offset = "0x8454D0", VA = "0x180846ED0", Slot = "11")]
	private ushort System_002EIConvertible_002EToUInt16(IFormatProvider provider)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000B8E")]
	[Address(RVA = "0x1B556E0", Offset = "0x1B53CE0", VA = "0x181B556E0", Slot = "12")]
	private int System_002EIConvertible_002EToInt32(IFormatProvider provider)
	{
		return default(int);
	}

	[Token(Token = "0x6000B8F")]
	[Address(RVA = "0x1B558B0", Offset = "0x1B53EB0", VA = "0x181B558B0", Slot = "13")]
	private uint System_002EIConvertible_002EToUInt32(IFormatProvider provider)
	{
		return default(uint);
	}

	[Token(Token = "0x6000B90")]
	[Address(RVA = "0x1B55730", Offset = "0x1B53D30", VA = "0x181B55730", Slot = "14")]
	private long System_002EIConvertible_002EToInt64(IFormatProvider provider)
	{
		return default(long);
	}

	[Token(Token = "0x6000B91")]
	[Address(RVA = "0x1B55900", Offset = "0x1B53F00", VA = "0x181B55900", Slot = "15")]
	private ulong System_002EIConvertible_002EToUInt64(IFormatProvider provider)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000B92")]
	[Address(RVA = "0x1B557D0", Offset = "0x1B53DD0", VA = "0x181B557D0", Slot = "16")]
	private float System_002EIConvertible_002EToSingle(IFormatProvider provider)
	{
		return default(float);
	}

	[Token(Token = "0x6000B93")]
	[Address(RVA = "0x1B55640", Offset = "0x1B53C40", VA = "0x181B55640", Slot = "17")]
	private double System_002EIConvertible_002EToDouble(IFormatProvider provider)
	{
		return default(double);
	}

	[Token(Token = "0x6000B94")]
	[Address(RVA = "0x1B555D0", Offset = "0x1B53BD0", VA = "0x181B555D0", Slot = "18")]
	private decimal System_002EIConvertible_002EToDecimal(IFormatProvider provider)
	{
		return 0m;
	}

	[Token(Token = "0x6000B95")]
	[Address(RVA = "0x1B55540", Offset = "0x1B53B40", VA = "0x181B55540", Slot = "19")]
	private DateTime System_002EIConvertible_002EToDateTime(IFormatProvider provider)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000B96")]
	[Address(RVA = "0x1B55820", Offset = "0x1B53E20", VA = "0x181B55820", Slot = "21")]
	private object System_002EIConvertible_002EToType(Type type, IFormatProvider provider)
	{
		return null;
	}
}
