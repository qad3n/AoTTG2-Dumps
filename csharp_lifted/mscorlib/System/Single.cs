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
	[Token(Token = "0x400039A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly float m_value;

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60009CC")]
	[Address(RVA = "0x54D0730", Offset = "0x54CF730", VA = "0x54D0730")]
	[System.Runtime.Versioning.NonVersionable]
	public static bool IsFinite(float f)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60009CD")]
	[Address(RVA = "0x54D0740", Offset = "0x54CF740", VA = "0x54D0740")]
	[System.Runtime.Versioning.NonVersionable]
	public static bool IsInfinity(float f)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60009CE")]
	[Address(RVA = "0x54D0760", Offset = "0x54CF760", VA = "0x54D0760")]
	[System.Runtime.Versioning.NonVersionable]
	public static bool IsNaN(float f)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60009CF")]
	[Address(RVA = "0x54D0780", Offset = "0x54CF780", VA = "0x54D0780")]
	[System.Runtime.Versioning.NonVersionable]
	public static bool IsNegative(float f)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60009D0")]
	[Address(RVA = "0x54D0790", Offset = "0x54CF790", VA = "0x54D0790")]
	[System.Runtime.Versioning.NonVersionable]
	public static bool IsNegativeInfinity(float f)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60009D1")]
	[Address(RVA = "0x54D07A0", Offset = "0x54CF7A0", VA = "0x54D07A0")]
	[System.Runtime.Versioning.NonVersionable]
	public static bool IsPositiveInfinity(float f)
	{
		return default(bool);
	}

	[Token(Token = "0x60009D2")]
	[Address(RVA = "0x54D07B0", Offset = "0x54CF7B0", VA = "0x54D07B0", Slot = "4")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x60009D3")]
	[Address(RVA = "0x54D0870", Offset = "0x54CF870", VA = "0x54D0870", Slot = "23")]
	public int CompareTo(float value)
	{
		return default(int);
	}

	[Token(Token = "0x60009D4")]
	[Address(RVA = "0x54D08C0", Offset = "0x54CF8C0", VA = "0x54D08C0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60009D5")]
	[Address(RVA = "0x54D0920", Offset = "0x54CF920", VA = "0x54D0920", Slot = "24")]
	public bool Equals(float obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60009D6")]
	[Address(RVA = "0x54D0960", Offset = "0x54CF960", VA = "0x54D0960", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60009D7")]
	[Address(RVA = "0x54D0980", Offset = "0x54CF980", VA = "0x54D0980", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60009D8")]
	[Address(RVA = "0x54D09F0", Offset = "0x54CF9F0", VA = "0x54D09F0", Slot = "20")]
	public string ToString(IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x60009D9")]
	[Address(RVA = "0x54D0A60", Offset = "0x54CFA60", VA = "0x54D0A60")]
	public string ToString(string format)
	{
		return null;
	}

	[Token(Token = "0x60009DA")]
	[Address(RVA = "0x54D0AD0", Offset = "0x54CFAD0", VA = "0x54D0AD0", Slot = "22")]
	public string ToString(string format, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x60009DB")]
	[Address(RVA = "0x54D0B50", Offset = "0x54CFB50", VA = "0x54D0B50", Slot = "25")]
	public bool TryFormat(Span<char> destination, out int charsWritten, [Optional] ReadOnlySpan<char> format, [Optional] IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x60009DC")]
	[Address(RVA = "0x54D0C00", Offset = "0x54CFC00", VA = "0x54D0C00")]
	public static float Parse(string s)
	{
		return default(float);
	}

	[Token(Token = "0x60009DD")]
	[Address(RVA = "0x54D0CC0", Offset = "0x54CFCC0", VA = "0x54D0CC0")]
	public static float Parse(string s, IFormatProvider provider)
	{
		return default(float);
	}

	[Token(Token = "0x60009DE")]
	[Address(RVA = "0x54D0D90", Offset = "0x54CFD90", VA = "0x54D0D90")]
	public static float Parse(string s, NumberStyles style, IFormatProvider provider)
	{
		return default(float);
	}

	[Token(Token = "0x60009DF")]
	[Address(RVA = "0x54D0E60", Offset = "0x54CFE60", VA = "0x54D0E60")]
	public static bool TryParse(string s, out float result)
	{
		return default(bool);
	}

	[Token(Token = "0x60009E0")]
	[Address(RVA = "0x54D11A0", Offset = "0x54D01A0", VA = "0x54D11A0")]
	public static bool TryParse(string s, NumberStyles style, IFormatProvider provider, out float result)
	{
		return default(bool);
	}

	[Token(Token = "0x60009E1")]
	[Address(RVA = "0x54D1230", Offset = "0x54D0230", VA = "0x54D1230")]
	public static bool TryParse(ReadOnlySpan<char> s, NumberStyles style, IFormatProvider provider, out float result)
	{
		return default(bool);
	}

	[Token(Token = "0x60009E2")]
	[Address(RVA = "0x54D0ED0", Offset = "0x54CFED0", VA = "0x54D0ED0")]
	private static bool TryParse(ReadOnlySpan<char> s, NumberStyles style, NumberFormatInfo info, out float result)
	{
		return default(bool);
	}

	[Token(Token = "0x60009E3")]
	[Address(RVA = "0x54D1280", Offset = "0x54D0280", VA = "0x54D1280", Slot = "5")]
	public TypeCode GetTypeCode()
	{
		return default(TypeCode);
	}

	[Token(Token = "0x60009E4")]
	[Address(RVA = "0x54D1290", Offset = "0x54D0290", VA = "0x54D1290", Slot = "6")]
	private bool System_002EIConvertible_002EToBoolean(IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x60009E5")]
	[Address(RVA = "0x54D1300", Offset = "0x54D0300", VA = "0x54D1300", Slot = "7")]
	private char System_002EIConvertible_002EToChar(IFormatProvider provider)
	{
		return default(char);
	}

	[Token(Token = "0x60009E6")]
	[Address(RVA = "0x54D1380", Offset = "0x54D0380", VA = "0x54D1380", Slot = "8")]
	private sbyte System_002EIConvertible_002EToSByte(IFormatProvider provider)
	{
		return default(sbyte);
	}

	[Token(Token = "0x60009E7")]
	[Address(RVA = "0x54D13F0", Offset = "0x54D03F0", VA = "0x54D13F0", Slot = "9")]
	private byte System_002EIConvertible_002EToByte(IFormatProvider provider)
	{
		return default(byte);
	}

	[Token(Token = "0x60009E8")]
	[Address(RVA = "0x54D1460", Offset = "0x54D0460", VA = "0x54D1460", Slot = "10")]
	private short System_002EIConvertible_002EToInt16(IFormatProvider provider)
	{
		return default(short);
	}

	[Token(Token = "0x60009E9")]
	[Address(RVA = "0x54D14D0", Offset = "0x54D04D0", VA = "0x54D14D0", Slot = "11")]
	private ushort System_002EIConvertible_002EToUInt16(IFormatProvider provider)
	{
		return default(ushort);
	}

	[Token(Token = "0x60009EA")]
	[Address(RVA = "0x54D1540", Offset = "0x54D0540", VA = "0x54D1540", Slot = "12")]
	private int System_002EIConvertible_002EToInt32(IFormatProvider provider)
	{
		return default(int);
	}

	[Token(Token = "0x60009EB")]
	[Address(RVA = "0x54D15B0", Offset = "0x54D05B0", VA = "0x54D15B0", Slot = "13")]
	private uint System_002EIConvertible_002EToUInt32(IFormatProvider provider)
	{
		return default(uint);
	}

	[Token(Token = "0x60009EC")]
	[Address(RVA = "0x54D1620", Offset = "0x54D0620", VA = "0x54D1620", Slot = "14")]
	private long System_002EIConvertible_002EToInt64(IFormatProvider provider)
	{
		return default(long);
	}

	[Token(Token = "0x60009ED")]
	[Address(RVA = "0x54D1690", Offset = "0x54D0690", VA = "0x54D1690", Slot = "15")]
	private ulong System_002EIConvertible_002EToUInt64(IFormatProvider provider)
	{
		return default(ulong);
	}

	[Token(Token = "0x60009EE")]
	[Address(RVA = "0x54D1700", Offset = "0x54D0700", VA = "0x54D1700", Slot = "16")]
	private float System_002EIConvertible_002EToSingle(IFormatProvider provider)
	{
		return default(float);
	}

	[Token(Token = "0x60009EF")]
	[Address(RVA = "0x54D1710", Offset = "0x54D0710", VA = "0x54D1710", Slot = "17")]
	private double System_002EIConvertible_002EToDouble(IFormatProvider provider)
	{
		return default(double);
	}

	[Token(Token = "0x60009F0")]
	[Address(RVA = "0x54D1780", Offset = "0x54D0780", VA = "0x54D1780", Slot = "18")]
	private decimal System_002EIConvertible_002EToDecimal(IFormatProvider provider)
	{
		return 0m;
	}

	[Token(Token = "0x60009F1")]
	[Address(RVA = "0x54D17F0", Offset = "0x54D07F0", VA = "0x54D17F0", Slot = "19")]
	private DateTime System_002EIConvertible_002EToDateTime(IFormatProvider provider)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60009F2")]
	[Address(RVA = "0x54D1870", Offset = "0x54D0870", VA = "0x54D1870", Slot = "21")]
	private object System_002EIConvertible_002EToType(Type type, IFormatProvider provider)
	{
		return null;
	}
}
