using System.Globalization;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Versioning;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x2000108")]
public readonly struct Single : IComparable, IConvertible, IFormattable, IComparable<float>, IEquatable<float>, System.ISpanFormattable
{
	[Token(Token = "0x40003BD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly float m_value;

	[Token(Token = "0x40003BE")]
	public const float MinValue = -3.4028235E+38f;

	[Token(Token = "0x40003BF")]
	public const float Epsilon = 1E-45f;

	[Token(Token = "0x40003C0")]
	public const float MaxValue = 3.4028235E+38f;

	[Token(Token = "0x40003C1")]
	public const float PositiveInfinity = 1f / 0f;

	[Token(Token = "0x40003C2")]
	public const float NegativeInfinity = -1f / 0f;

	[Token(Token = "0x40003C3")]
	public const float NaN = 0f / 0f;

	[Token(Token = "0x40003C4")]
	internal const float NegativeZero = -0f;

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60009B3")]
	[Address(RVA = "0x4FE7190", Offset = "0x4FE7190", VA = "0x4FE7190")]
	[System.Runtime.Versioning.NonVersionable]
	public static bool IsFinite(float f)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60009B4")]
	[Address(RVA = "0x4FE71B0", Offset = "0x4FE71B0", VA = "0x4FE71B0")]
	[System.Runtime.Versioning.NonVersionable]
	public static bool IsInfinity(float f)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60009B5")]
	[Address(RVA = "0x4FE71D0", Offset = "0x4FE71D0", VA = "0x4FE71D0")]
	[System.Runtime.Versioning.NonVersionable]
	public static bool IsNaN(float f)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60009B6")]
	[Address(RVA = "0x4FE71F0", Offset = "0x4FE71F0", VA = "0x4FE71F0")]
	[System.Runtime.Versioning.NonVersionable]
	public static bool IsNegativeInfinity(float f)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60009B7")]
	[Address(RVA = "0x4FE7200", Offset = "0x4FE7200", VA = "0x4FE7200")]
	[System.Runtime.Versioning.NonVersionable]
	public static bool IsPositiveInfinity(float f)
	{
		return default(bool);
	}

	[Token(Token = "0x60009B8")]
	[Address(RVA = "0x4FE7210", Offset = "0x4FE7210", VA = "0x4FE7210", Slot = "4")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x60009B9")]
	[Address(RVA = "0x4FE72D0", Offset = "0x4FE72D0", VA = "0x4FE72D0", Slot = "23")]
	public int CompareTo(float value)
	{
		return default(int);
	}

	[Token(Token = "0x60009BA")]
	[Address(RVA = "0x4FE7320", Offset = "0x4FE7320", VA = "0x4FE7320", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60009BB")]
	[Address(RVA = "0x4FE7380", Offset = "0x4FE7380", VA = "0x4FE7380", Slot = "24")]
	public bool Equals(float obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60009BC")]
	[Address(RVA = "0x4FE73C0", Offset = "0x4FE73C0", VA = "0x4FE73C0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60009BD")]
	[Address(RVA = "0x4FE73E0", Offset = "0x4FE73E0", VA = "0x4FE73E0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60009BE")]
	[Address(RVA = "0x4FE7450", Offset = "0x4FE7450", VA = "0x4FE7450", Slot = "20")]
	public string ToString(IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x60009BF")]
	[Address(RVA = "0x4FE74C0", Offset = "0x4FE74C0", VA = "0x4FE74C0")]
	public string ToString(string format)
	{
		return null;
	}

	[Token(Token = "0x60009C0")]
	[Address(RVA = "0x4FE7530", Offset = "0x4FE7530", VA = "0x4FE7530", Slot = "22")]
	public string ToString(string format, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x60009C1")]
	[Address(RVA = "0x4FE75B0", Offset = "0x4FE75B0", VA = "0x4FE75B0", Slot = "25")]
	public bool TryFormat(Span<char> destination, out int charsWritten, [Optional] ReadOnlySpan<char> format, [Optional] IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x60009C2")]
	[Address(RVA = "0x4FE7660", Offset = "0x4FE7660", VA = "0x4FE7660")]
	public static float Parse(string s)
	{
		return default(float);
	}

	[Token(Token = "0x60009C3")]
	[Address(RVA = "0x4FE7700", Offset = "0x4FE7700", VA = "0x4FE7700")]
	public static float Parse(string s, IFormatProvider provider)
	{
		return default(float);
	}

	[Token(Token = "0x60009C4")]
	[Address(RVA = "0x4FE77B0", Offset = "0x4FE77B0", VA = "0x4FE77B0")]
	public static float Parse(string s, NumberStyles style, IFormatProvider provider)
	{
		return default(float);
	}

	[Token(Token = "0x60009C5")]
	[Address(RVA = "0x4FE7870", Offset = "0x4FE7870", VA = "0x4FE7870")]
	public static bool TryParse(string s, out float result)
	{
		return default(bool);
	}

	[Token(Token = "0x60009C6")]
	[Address(RVA = "0x4FE7B80", Offset = "0x4FE7B80", VA = "0x4FE7B80")]
	public static bool TryParse(string s, NumberStyles style, IFormatProvider provider, out float result)
	{
		return default(bool);
	}

	[Token(Token = "0x60009C7")]
	[Address(RVA = "0x4FE78E0", Offset = "0x4FE78E0", VA = "0x4FE78E0")]
	private static bool TryParse(ReadOnlySpan<char> s, NumberStyles style, NumberFormatInfo info, out float result)
	{
		return default(bool);
	}

	[Token(Token = "0x60009C8")]
	[Address(RVA = "0x4FE7C10", Offset = "0x4FE7C10", VA = "0x4FE7C10", Slot = "5")]
	public TypeCode GetTypeCode()
	{
		return default(TypeCode);
	}

	[Token(Token = "0x60009C9")]
	[Address(RVA = "0x4FE7C20", Offset = "0x4FE7C20", VA = "0x4FE7C20", Slot = "6")]
	private bool System_002EIConvertible_002EToBoolean(IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x60009CA")]
	[Address(RVA = "0x4FE7C90", Offset = "0x4FE7C90", VA = "0x4FE7C90", Slot = "7")]
	private char System_002EIConvertible_002EToChar(IFormatProvider provider)
	{
		return default(char);
	}

	[Token(Token = "0x60009CB")]
	[Address(RVA = "0x4FE7D10", Offset = "0x4FE7D10", VA = "0x4FE7D10", Slot = "8")]
	private sbyte System_002EIConvertible_002EToSByte(IFormatProvider provider)
	{
		return default(sbyte);
	}

	[Token(Token = "0x60009CC")]
	[Address(RVA = "0x4FE7D80", Offset = "0x4FE7D80", VA = "0x4FE7D80", Slot = "9")]
	private byte System_002EIConvertible_002EToByte(IFormatProvider provider)
	{
		return default(byte);
	}

	[Token(Token = "0x60009CD")]
	[Address(RVA = "0x4FE7DF0", Offset = "0x4FE7DF0", VA = "0x4FE7DF0", Slot = "10")]
	private short System_002EIConvertible_002EToInt16(IFormatProvider provider)
	{
		return default(short);
	}

	[Token(Token = "0x60009CE")]
	[Address(RVA = "0x4FE7E60", Offset = "0x4FE7E60", VA = "0x4FE7E60", Slot = "11")]
	private ushort System_002EIConvertible_002EToUInt16(IFormatProvider provider)
	{
		return default(ushort);
	}

	[Token(Token = "0x60009CF")]
	[Address(RVA = "0x4FE7ED0", Offset = "0x4FE7ED0", VA = "0x4FE7ED0", Slot = "12")]
	private int System_002EIConvertible_002EToInt32(IFormatProvider provider)
	{
		return default(int);
	}

	[Token(Token = "0x60009D0")]
	[Address(RVA = "0x4FE7F40", Offset = "0x4FE7F40", VA = "0x4FE7F40", Slot = "13")]
	private uint System_002EIConvertible_002EToUInt32(IFormatProvider provider)
	{
		return default(uint);
	}

	[Token(Token = "0x60009D1")]
	[Address(RVA = "0x4FE7FB0", Offset = "0x4FE7FB0", VA = "0x4FE7FB0", Slot = "14")]
	private long System_002EIConvertible_002EToInt64(IFormatProvider provider)
	{
		return default(long);
	}

	[Token(Token = "0x60009D2")]
	[Address(RVA = "0x4FE8020", Offset = "0x4FE8020", VA = "0x4FE8020", Slot = "15")]
	private ulong System_002EIConvertible_002EToUInt64(IFormatProvider provider)
	{
		return default(ulong);
	}

	[Token(Token = "0x60009D3")]
	[Address(RVA = "0x4FE8090", Offset = "0x4FE8090", VA = "0x4FE8090", Slot = "16")]
	private float System_002EIConvertible_002EToSingle(IFormatProvider provider)
	{
		return default(float);
	}

	[Token(Token = "0x60009D4")]
	[Address(RVA = "0x4FE80A0", Offset = "0x4FE80A0", VA = "0x4FE80A0", Slot = "17")]
	private double System_002EIConvertible_002EToDouble(IFormatProvider provider)
	{
		return default(double);
	}

	[Token(Token = "0x60009D5")]
	[Address(RVA = "0x4FE8110", Offset = "0x4FE8110", VA = "0x4FE8110", Slot = "18")]
	private decimal System_002EIConvertible_002EToDecimal(IFormatProvider provider)
	{
		return default(decimal);
	}

	[Token(Token = "0x60009D6")]
	[Address(RVA = "0x4FE8180", Offset = "0x4FE8180", VA = "0x4FE8180", Slot = "19")]
	private DateTime System_002EIConvertible_002EToDateTime(IFormatProvider provider)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60009D7")]
	[Address(RVA = "0x4FE8200", Offset = "0x4FE8200", VA = "0x4FE8200", Slot = "21")]
	private object System_002EIConvertible_002EToType(Type type, IFormatProvider provider)
	{
		return null;
	}
}
