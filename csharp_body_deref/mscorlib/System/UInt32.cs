// ==================== AoTTG2 cross-reference ====================
// Type: System.UInt32
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
[Token(Token = "0x200014C")]
[CLSCompliant(false)]
public readonly struct UInt32 : IComparable, IConvertible, IFormattable, IComparable<uint>, IEquatable<uint>, System.ISpanFormattable
{
	[Token(Token = "0x400047D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly uint m_value;

	[Token(Token = "0x6000B97")]
	[Address(RVA = "0x1B55F60", Offset = "0x1B54560", VA = "0x181B55F60", Slot = "4")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000B98")]
	[Address(RVA = "0x1B56010", Offset = "0x1B54610", VA = "0x181B56010", Slot = "23")]
	public int CompareTo(uint value)
	{
		return default(int);
	}

	[Token(Token = "0x6000B99")]
	[Address(RVA = "0x1B56030", Offset = "0x1B54630", VA = "0x181B56030", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B9A")]
	[Address(RVA = "0x1B28F40", Offset = "0x1B27540", VA = "0x181B28F40", Slot = "24")]
	[System.Runtime.Versioning.NonVersionable]
	public bool Equals(uint obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B9B")]
	[Address(RVA = "0x57AED0", Offset = "0x5794D0", VA = "0x18057AED0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000B9C")]
	[Address(RVA = "0x1B56A70", Offset = "0x1B55070", VA = "0x181B56A70", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000B9D")]
	[Address(RVA = "0x1B56910", Offset = "0x1B54F10", VA = "0x181B56910", Slot = "20")]
	public string ToString(IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6000B9E")]
	[Address(RVA = "0x1B569B0", Offset = "0x1B54FB0", VA = "0x181B569B0")]
	public string ToString(string format)
	{
		return null;
	}

	[Token(Token = "0x6000B9F")]
	[Address(RVA = "0x1B56840", Offset = "0x1B54E40", VA = "0x181B56840", Slot = "22")]
	public string ToString(string format, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6000BA0")]
	[Address(RVA = "0x1B56B00", Offset = "0x1B55100", VA = "0x181B56B00", Slot = "25")]
	public bool TryFormat(Span<char> destination, out int charsWritten, [Optional] ReadOnlySpan<char> format, [Optional] IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BA1")]
	[Address(RVA = "0x1B560A0", Offset = "0x1B546A0", VA = "0x181B560A0")]
	[CLSCompliant(false)]
	public static uint Parse(string s)
	{
		return default(uint);
	}

	[Token(Token = "0x6000BA2")]
	[Address(RVA = "0x1B56170", Offset = "0x1B54770", VA = "0x181B56170")]
	[CLSCompliant(false)]
	public static uint Parse(string s, IFormatProvider provider)
	{
		return default(uint);
	}

	[Token(Token = "0x6000BA3")]
	[Address(RVA = "0x1B56250", Offset = "0x1B54850", VA = "0x181B56250")]
	[CLSCompliant(false)]
	public static uint Parse(string s, NumberStyles style, IFormatProvider provider)
	{
		return default(uint);
	}

	[Token(Token = "0x6000BA4")]
	[Address(RVA = "0x1B56C80", Offset = "0x1B55280", VA = "0x181B56C80")]
	[CLSCompliant(false)]
	public static bool TryParse(string s, out uint result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BA5")]
	[Address(RVA = "0x1B56B90", Offset = "0x1B55190", VA = "0x181B56B90")]
	[CLSCompliant(false)]
	public static bool TryParse(string s, NumberStyles style, IFormatProvider provider, out uint result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BA6")]
	[Address(RVA = "0x1B56090", Offset = "0x1B54690", VA = "0x181B56090", Slot = "5")]
	public TypeCode GetTypeCode()
	{
		return default(TypeCode);
	}

	[Token(Token = "0x6000BA7")]
	[Address(RVA = "0x1B56340", Offset = "0x1B54940", VA = "0x181B56340", Slot = "6")]
	private bool System_002EIConvertible_002EToBoolean(IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BA8")]
	[Address(RVA = "0x1B563E0", Offset = "0x1B549E0", VA = "0x181B563E0", Slot = "7")]
	private char System_002EIConvertible_002EToChar(IFormatProvider provider)
	{
		return default(char);
	}

	[Token(Token = "0x6000BA9")]
	[Address(RVA = "0x1B56670", Offset = "0x1B54C70", VA = "0x181B56670", Slot = "8")]
	private sbyte System_002EIConvertible_002EToSByte(IFormatProvider provider)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000BAA")]
	[Address(RVA = "0x1B56390", Offset = "0x1B54990", VA = "0x181B56390", Slot = "9")]
	private byte System_002EIConvertible_002EToByte(IFormatProvider provider)
	{
		return default(byte);
	}

	[Token(Token = "0x6000BAB")]
	[Address(RVA = "0x1B56580", Offset = "0x1B54B80", VA = "0x181B56580", Slot = "10")]
	private short System_002EIConvertible_002EToInt16(IFormatProvider provider)
	{
		return default(short);
	}

	[Token(Token = "0x6000BAC")]
	[Address(RVA = "0x1B567A0", Offset = "0x1B54DA0", VA = "0x181B567A0", Slot = "11")]
	private ushort System_002EIConvertible_002EToUInt16(IFormatProvider provider)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000BAD")]
	[Address(RVA = "0x1B565D0", Offset = "0x1B54BD0", VA = "0x181B565D0", Slot = "12")]
	private int System_002EIConvertible_002EToInt32(IFormatProvider provider)
	{
		return default(int);
	}

	[Token(Token = "0x6000BAE")]
	[Address(RVA = "0x57AED0", Offset = "0x5794D0", VA = "0x18057AED0", Slot = "13")]
	private uint System_002EIConvertible_002EToUInt32(IFormatProvider provider)
	{
		return default(uint);
	}

	[Token(Token = "0x6000BAF")]
	[Address(RVA = "0x1B56620", Offset = "0x1B54C20", VA = "0x181B56620", Slot = "14")]
	private long System_002EIConvertible_002EToInt64(IFormatProvider provider)
	{
		return default(long);
	}

	[Token(Token = "0x6000BB0")]
	[Address(RVA = "0x1B567F0", Offset = "0x1B54DF0", VA = "0x181B567F0", Slot = "15")]
	private ulong System_002EIConvertible_002EToUInt64(IFormatProvider provider)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000BB1")]
	[Address(RVA = "0x1B566C0", Offset = "0x1B54CC0", VA = "0x181B566C0", Slot = "16")]
	private float System_002EIConvertible_002EToSingle(IFormatProvider provider)
	{
		return default(float);
	}

	[Token(Token = "0x6000BB2")]
	[Address(RVA = "0x1B56530", Offset = "0x1B54B30", VA = "0x181B56530", Slot = "17")]
	private double System_002EIConvertible_002EToDouble(IFormatProvider provider)
	{
		return default(double);
	}

	[Token(Token = "0x6000BB3")]
	[Address(RVA = "0x1B564C0", Offset = "0x1B54AC0", VA = "0x181B564C0", Slot = "18")]
	private decimal System_002EIConvertible_002EToDecimal(IFormatProvider provider)
	{
		return 0m;
	}

	[Token(Token = "0x6000BB4")]
	[Address(RVA = "0x1B56430", Offset = "0x1B54A30", VA = "0x181B56430", Slot = "19")]
	private DateTime System_002EIConvertible_002EToDateTime(IFormatProvider provider)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000BB5")]
	[Address(RVA = "0x1B56710", Offset = "0x1B54D10", VA = "0x181B56710", Slot = "21")]
	private object System_002EIConvertible_002EToType(Type type, IFormatProvider provider)
	{
		return null;
	}
}
