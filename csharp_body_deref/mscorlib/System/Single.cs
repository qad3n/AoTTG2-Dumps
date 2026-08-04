// ==================== AoTTG2 cross-reference ====================
// Type: System.Single
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x3CCCCB0", Offset = "0x3CCCCB0", VA = "0x3CCCCB0")]
	[System.Runtime.Versioning.NonVersionable]
	public static bool IsFinite(float f)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60009B4")]
	[Address(RVA = "0x3CCCCD0", Offset = "0x3CCCCD0", VA = "0x3CCCCD0")]
	[System.Runtime.Versioning.NonVersionable]
	public static bool IsInfinity(float f)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60009B5")]
	[Address(RVA = "0x3CCCCF0", Offset = "0x3CCCCF0", VA = "0x3CCCCF0")]
	[System.Runtime.Versioning.NonVersionable]
	public static bool IsNaN(float f)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60009B6")]
	[Address(RVA = "0x3CCCD10", Offset = "0x3CCCD10", VA = "0x3CCCD10")]
	[System.Runtime.Versioning.NonVersionable]
	public static bool IsNegativeInfinity(float f)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60009B7")]
	[Address(RVA = "0x3CCCD20", Offset = "0x3CCCD20", VA = "0x3CCCD20")]
	[System.Runtime.Versioning.NonVersionable]
	public static bool IsPositiveInfinity(float f)
	{
		return default(bool);
	}

	[Token(Token = "0x60009B8")]
	[Address(RVA = "0x3CCCD30", Offset = "0x3CCCD30", VA = "0x3CCCD30", Slot = "4")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x60009B9")]
	[Address(RVA = "0x3CCCDF0", Offset = "0x3CCCDF0", VA = "0x3CCCDF0", Slot = "23")]
	public int CompareTo(float value)
	{
		return default(int);
	}

	[Token(Token = "0x60009BA")]
	[Address(RVA = "0x3CCCE40", Offset = "0x3CCCE40", VA = "0x3CCCE40", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60009BB")]
	[Address(RVA = "0x3CCCEA0", Offset = "0x3CCCEA0", VA = "0x3CCCEA0", Slot = "24")]
	public bool Equals(float obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60009BC")]
	[Address(RVA = "0x3CCCEE0", Offset = "0x3CCCEE0", VA = "0x3CCCEE0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60009BD")]
	[Address(RVA = "0x3CCCF00", Offset = "0x3CCCF00", VA = "0x3CCCF00", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60009BE")]
	[Address(RVA = "0x3CCCF70", Offset = "0x3CCCF70", VA = "0x3CCCF70", Slot = "20")]
	public string ToString(IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x60009BF")]
	[Address(RVA = "0x3CCCFE0", Offset = "0x3CCCFE0", VA = "0x3CCCFE0")]
	public string ToString(string format)
	{
		return null;
	}

	[Token(Token = "0x60009C0")]
	[Address(RVA = "0x3CCD050", Offset = "0x3CCD050", VA = "0x3CCD050", Slot = "22")]
	public string ToString(string format, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x60009C1")]
	[Address(RVA = "0x3CCD0D0", Offset = "0x3CCD0D0", VA = "0x3CCD0D0", Slot = "25")]
	public bool TryFormat(Span<char> destination, out int charsWritten, [Optional] ReadOnlySpan<char> format, [Optional] IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x60009C2")]
	[Address(RVA = "0x3CCD180", Offset = "0x3CCD180", VA = "0x3CCD180")]
	public static float Parse(string s)
	{
		return default(float);
	}

	[Token(Token = "0x60009C3")]
	[Address(RVA = "0x3CCD220", Offset = "0x3CCD220", VA = "0x3CCD220")]
	public static float Parse(string s, IFormatProvider provider)
	{
		return default(float);
	}

	[Token(Token = "0x60009C4")]
	[Address(RVA = "0x3CCD2D0", Offset = "0x3CCD2D0", VA = "0x3CCD2D0")]
	public static float Parse(string s, NumberStyles style, IFormatProvider provider)
	{
		return default(float);
	}

	[Token(Token = "0x60009C5")]
	[Address(RVA = "0x3CCD390", Offset = "0x3CCD390", VA = "0x3CCD390")]
	public static bool TryParse(string s, out float result)
	{
		return default(bool);
	}

	[Token(Token = "0x60009C6")]
	[Address(RVA = "0x3CCD6A0", Offset = "0x3CCD6A0", VA = "0x3CCD6A0")]
	public static bool TryParse(string s, NumberStyles style, IFormatProvider provider, out float result)
	{
		return default(bool);
	}

	[Token(Token = "0x60009C7")]
	[Address(RVA = "0x3CCD400", Offset = "0x3CCD400", VA = "0x3CCD400")]
	private static bool TryParse(ReadOnlySpan<char> s, NumberStyles style, NumberFormatInfo info, out float result)
	{
		return default(bool);
	}

	[Token(Token = "0x60009C8")]
	[Address(RVA = "0x3CCD730", Offset = "0x3CCD730", VA = "0x3CCD730", Slot = "5")]
	public TypeCode GetTypeCode()
	{
		return default(TypeCode);
	}

	[Token(Token = "0x60009C9")]
	[Address(RVA = "0x3CCD740", Offset = "0x3CCD740", VA = "0x3CCD740", Slot = "6")]
	private bool System_002EIConvertible_002EToBoolean(IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x60009CA")]
	[Address(RVA = "0x3CCD7B0", Offset = "0x3CCD7B0", VA = "0x3CCD7B0", Slot = "7")]
	private char System_002EIConvertible_002EToChar(IFormatProvider provider)
	{
		return default(char);
	}

	[Token(Token = "0x60009CB")]
	[Address(RVA = "0x3CCD830", Offset = "0x3CCD830", VA = "0x3CCD830", Slot = "8")]
	private sbyte System_002EIConvertible_002EToSByte(IFormatProvider provider)
	{
		return default(sbyte);
	}

	[Token(Token = "0x60009CC")]
	[Address(RVA = "0x3CCD8A0", Offset = "0x3CCD8A0", VA = "0x3CCD8A0", Slot = "9")]
	private byte System_002EIConvertible_002EToByte(IFormatProvider provider)
	{
		return default(byte);
	}

	[Token(Token = "0x60009CD")]
	[Address(RVA = "0x3CCD910", Offset = "0x3CCD910", VA = "0x3CCD910", Slot = "10")]
	private short System_002EIConvertible_002EToInt16(IFormatProvider provider)
	{
		return default(short);
	}

	[Token(Token = "0x60009CE")]
	[Address(RVA = "0x3CCD980", Offset = "0x3CCD980", VA = "0x3CCD980", Slot = "11")]
	private ushort System_002EIConvertible_002EToUInt16(IFormatProvider provider)
	{
		return default(ushort);
	}

	[Token(Token = "0x60009CF")]
	[Address(RVA = "0x3CCD9F0", Offset = "0x3CCD9F0", VA = "0x3CCD9F0", Slot = "12")]
	private int System_002EIConvertible_002EToInt32(IFormatProvider provider)
	{
		return default(int);
	}

	[Token(Token = "0x60009D0")]
	[Address(RVA = "0x3CCDA60", Offset = "0x3CCDA60", VA = "0x3CCDA60", Slot = "13")]
	private uint System_002EIConvertible_002EToUInt32(IFormatProvider provider)
	{
		return default(uint);
	}

	[Token(Token = "0x60009D1")]
	[Address(RVA = "0x3CCDAD0", Offset = "0x3CCDAD0", VA = "0x3CCDAD0", Slot = "14")]
	private long System_002EIConvertible_002EToInt64(IFormatProvider provider)
	{
		return default(long);
	}

	[Token(Token = "0x60009D2")]
	[Address(RVA = "0x3CCDB40", Offset = "0x3CCDB40", VA = "0x3CCDB40", Slot = "15")]
	private ulong System_002EIConvertible_002EToUInt64(IFormatProvider provider)
	{
		return default(ulong);
	}

	[Token(Token = "0x60009D3")]
	[Address(RVA = "0x3CCDBB0", Offset = "0x3CCDBB0", VA = "0x3CCDBB0", Slot = "16")]
	private float System_002EIConvertible_002EToSingle(IFormatProvider provider)
	{
		return default(float);
	}

	[Token(Token = "0x60009D4")]
	[Address(RVA = "0x3CCDBC0", Offset = "0x3CCDBC0", VA = "0x3CCDBC0", Slot = "17")]
	private double System_002EIConvertible_002EToDouble(IFormatProvider provider)
	{
		return default(double);
	}

	[Token(Token = "0x60009D5")]
	[Address(RVA = "0x3CCDC30", Offset = "0x3CCDC30", VA = "0x3CCDC30", Slot = "18")]
	private decimal System_002EIConvertible_002EToDecimal(IFormatProvider provider)
	{
		return default(decimal);
	}

	[Token(Token = "0x60009D6")]
	[Address(RVA = "0x3CCDCA0", Offset = "0x3CCDCA0", VA = "0x3CCDCA0", Slot = "19")]
	private DateTime System_002EIConvertible_002EToDateTime(IFormatProvider provider)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60009D7")]
	[Address(RVA = "0x3CCDD20", Offset = "0x3CCDD20", VA = "0x3CCDD20", Slot = "21")]
	private object System_002EIConvertible_002EToType(Type type, IFormatProvider provider)
	{
		return null;
	}
}
