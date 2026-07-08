using System.Globalization;
using System.Runtime.Versioning;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x200009C")]
public readonly struct Char : IComparable, IComparable<char>, IEquatable<char>, IConvertible
{
	[Token(Token = "0x400020B")]
	[FieldOffset(Offset = "0x0")]
	private readonly char m_value;

	[Token(Token = "0x400020C")]
	public const char MaxValue = '\uffff';

	[Token(Token = "0x400020D")]
	public const char MinValue = '\0';

	[Token(Token = "0x400020E")]
	[FieldOffset(Offset = "0x0")]
	private static readonly byte[] s_categoryForLatin1;

	[Token(Token = "0x400020F")]
	internal const int UNICODE_PLANE00_END = 65535;

	[Token(Token = "0x4000210")]
	internal const int UNICODE_PLANE01_START = 65536;

	[Token(Token = "0x4000211")]
	internal const int UNICODE_PLANE16_END = 1114111;

	[Token(Token = "0x4000212")]
	internal const int HIGH_SURROGATE_START = 55296;

	[Token(Token = "0x4000213")]
	internal const int LOW_SURROGATE_END = 57343;

	[Token(Token = "0x6000481")]
	[Address(RVA = "0x4F32740", Offset = "0x4F32740", VA = "0x4F32740")]
	private static bool IsLatin1(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000482")]
	[Address(RVA = "0x4F32750", Offset = "0x4F32750", VA = "0x4F32750")]
	private static bool IsAscii(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000483")]
	[Address(RVA = "0x4F32760", Offset = "0x4F32760", VA = "0x4F32760")]
	private static UnicodeCategory GetLatin1UnicodeCategory(char ch)
	{
		return default(UnicodeCategory);
	}

	[Token(Token = "0x6000484")]
	[Address(RVA = "0x4F327C0", Offset = "0x4F327C0", VA = "0x4F327C0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000485")]
	[Address(RVA = "0x4F327D0", Offset = "0x4F327D0", VA = "0x4F327D0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000486")]
	[Address(RVA = "0x4F32800", Offset = "0x4F32800", VA = "0x4F32800", Slot = "6")]
	[System.Runtime.Versioning.NonVersionable]
	public bool Equals(char obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000487")]
	[Address(RVA = "0x4F32810", Offset = "0x4F32810", VA = "0x4F32810", Slot = "4")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000488")]
	[Address(RVA = "0x4F32890", Offset = "0x4F32890", VA = "0x4F32890", Slot = "5")]
	public int CompareTo(char value)
	{
		return default(int);
	}

	[Token(Token = "0x6000489")]
	[Address(RVA = "0x4F20750", Offset = "0x4F20750", VA = "0x4F20750", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600048A")]
	[Address(RVA = "0x4F328B0", Offset = "0x4F328B0", VA = "0x4F328B0", Slot = "22")]
	public string ToString(IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x600048B")]
	[Address(RVA = "0x4F328A0", Offset = "0x4F328A0", VA = "0x4F328A0")]
	public static string ToString(char c)
	{
		return null;
	}

	[Token(Token = "0x600048C")]
	[Address(RVA = "0x4F328F0", Offset = "0x4F328F0", VA = "0x4F328F0")]
	public static char Parse(string s)
	{
		return default(char);
	}

	[Token(Token = "0x600048D")]
	[Address(RVA = "0x4F32980", Offset = "0x4F32980", VA = "0x4F32980")]
	public static bool TryParse(string s, out char result)
	{
		return default(bool);
	}

	[Token(Token = "0x600048E")]
	[Address(RVA = "0x4F2BE60", Offset = "0x4F2BE60", VA = "0x4F2BE60")]
	public static bool IsDigit(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x600048F")]
	[Address(RVA = "0x4F329B0", Offset = "0x4F329B0", VA = "0x4F329B0")]
	internal static bool CheckLetter(UnicodeCategory uc)
	{
		return default(bool);
	}

	[Token(Token = "0x6000490")]
	[Address(RVA = "0x4F329C0", Offset = "0x4F329C0", VA = "0x4F329C0")]
	public static bool IsLetter(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000491")]
	[Address(RVA = "0x4F32AB0", Offset = "0x4F32AB0", VA = "0x4F32AB0")]
	private static bool IsWhiteSpaceLatin1(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000492")]
	[Address(RVA = "0x4F30170", Offset = "0x4F30170", VA = "0x4F30170")]
	public static bool IsWhiteSpace(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000493")]
	[Address(RVA = "0x4F32AE0", Offset = "0x4F32AE0", VA = "0x4F32AE0")]
	public static bool IsUpper(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000494")]
	[Address(RVA = "0x4F32BC0", Offset = "0x4F32BC0", VA = "0x4F32BC0")]
	public static bool IsLower(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000495")]
	[Address(RVA = "0x4F32CA0", Offset = "0x4F32CA0", VA = "0x4F32CA0")]
	internal static bool CheckPunctuation(UnicodeCategory uc)
	{
		return default(bool);
	}

	[Token(Token = "0x6000496")]
	[Address(RVA = "0x4F32CB0", Offset = "0x4F32CB0", VA = "0x4F32CB0")]
	public static bool IsPunctuation(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000497")]
	[Address(RVA = "0x4F32D70", Offset = "0x4F32D70", VA = "0x4F32D70")]
	internal static bool CheckLetterOrDigit(UnicodeCategory uc)
	{
		return default(bool);
	}

	[Token(Token = "0x6000498")]
	[Address(RVA = "0x4F32D80", Offset = "0x4F32D80", VA = "0x4F32D80")]
	public static bool IsLetterOrDigit(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000499")]
	[Address(RVA = "0x4F32E50", Offset = "0x4F32E50", VA = "0x4F32E50")]
	public static char ToUpper(char c, CultureInfo culture)
	{
		return default(char);
	}

	[Token(Token = "0x600049A")]
	[Address(RVA = "0x4F32EE0", Offset = "0x4F32EE0", VA = "0x4F32EE0")]
	public static char ToUpper(char c)
	{
		return default(char);
	}

	[Token(Token = "0x600049B")]
	[Address(RVA = "0x4F32F80", Offset = "0x4F32F80", VA = "0x4F32F80")]
	public static char ToUpperInvariant(char c)
	{
		return default(char);
	}

	[Token(Token = "0x600049C")]
	[Address(RVA = "0x4F33020", Offset = "0x4F33020", VA = "0x4F33020")]
	public static char ToLower(char c, CultureInfo culture)
	{
		return default(char);
	}

	[Token(Token = "0x600049D")]
	[Address(RVA = "0x4F330B0", Offset = "0x4F330B0", VA = "0x4F330B0")]
	public static char ToLower(char c)
	{
		return default(char);
	}

	[Token(Token = "0x600049E")]
	[Address(RVA = "0x4F33150", Offset = "0x4F33150", VA = "0x4F33150")]
	public static char ToLowerInvariant(char c)
	{
		return default(char);
	}

	[Token(Token = "0x600049F")]
	[Address(RVA = "0x4F331F0", Offset = "0x4F331F0", VA = "0x4F331F0", Slot = "7")]
	public TypeCode GetTypeCode()
	{
		return default(TypeCode);
	}

	[Token(Token = "0x60004A0")]
	[Address(RVA = "0x4F33200", Offset = "0x4F33200", VA = "0x4F33200", Slot = "8")]
	private bool System_002EIConvertible_002EToBoolean(IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x60004A1")]
	[Address(RVA = "0x4F33280", Offset = "0x4F33280", VA = "0x4F33280", Slot = "9")]
	private char System_002EIConvertible_002EToChar(IFormatProvider provider)
	{
		return default(char);
	}

	[Token(Token = "0x60004A2")]
	[Address(RVA = "0x4F33290", Offset = "0x4F33290", VA = "0x4F33290", Slot = "10")]
	private sbyte System_002EIConvertible_002EToSByte(IFormatProvider provider)
	{
		return default(sbyte);
	}

	[Token(Token = "0x60004A3")]
	[Address(RVA = "0x4F33370", Offset = "0x4F33370", VA = "0x4F33370", Slot = "11")]
	private byte System_002EIConvertible_002EToByte(IFormatProvider provider)
	{
		return default(byte);
	}

	[Token(Token = "0x60004A4")]
	[Address(RVA = "0x4F33450", Offset = "0x4F33450", VA = "0x4F33450", Slot = "12")]
	private short System_002EIConvertible_002EToInt16(IFormatProvider provider)
	{
		return default(short);
	}

	[Token(Token = "0x60004A5")]
	[Address(RVA = "0x4F33520", Offset = "0x4F33520", VA = "0x4F33520", Slot = "13")]
	private ushort System_002EIConvertible_002EToUInt16(IFormatProvider provider)
	{
		return default(ushort);
	}

	[Token(Token = "0x60004A6")]
	[Address(RVA = "0x4F33580", Offset = "0x4F33580", VA = "0x4F33580", Slot = "14")]
	private int System_002EIConvertible_002EToInt32(IFormatProvider provider)
	{
		return default(int);
	}

	[Token(Token = "0x60004A7")]
	[Address(RVA = "0x4F335E0", Offset = "0x4F335E0", VA = "0x4F335E0", Slot = "15")]
	private uint System_002EIConvertible_002EToUInt32(IFormatProvider provider)
	{
		return default(uint);
	}

	[Token(Token = "0x60004A8")]
	[Address(RVA = "0x4F33640", Offset = "0x4F33640", VA = "0x4F33640", Slot = "16")]
	private long System_002EIConvertible_002EToInt64(IFormatProvider provider)
	{
		return default(long);
	}

	[Token(Token = "0x60004A9")]
	[Address(RVA = "0x4F336A0", Offset = "0x4F336A0", VA = "0x4F336A0", Slot = "17")]
	private ulong System_002EIConvertible_002EToUInt64(IFormatProvider provider)
	{
		return default(ulong);
	}

	[Token(Token = "0x60004AA")]
	[Address(RVA = "0x4F33700", Offset = "0x4F33700", VA = "0x4F33700", Slot = "18")]
	private float System_002EIConvertible_002EToSingle(IFormatProvider provider)
	{
		return default(float);
	}

	[Token(Token = "0x60004AB")]
	[Address(RVA = "0x4F33780", Offset = "0x4F33780", VA = "0x4F33780", Slot = "19")]
	private double System_002EIConvertible_002EToDouble(IFormatProvider provider)
	{
		return default(double);
	}

	[Token(Token = "0x60004AC")]
	[Address(RVA = "0x4F33800", Offset = "0x4F33800", VA = "0x4F33800", Slot = "20")]
	private decimal System_002EIConvertible_002EToDecimal(IFormatProvider provider)
	{
		return default(decimal);
	}

	[Token(Token = "0x60004AD")]
	[Address(RVA = "0x4F33880", Offset = "0x4F33880", VA = "0x4F33880", Slot = "21")]
	private DateTime System_002EIConvertible_002EToDateTime(IFormatProvider provider)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60004AE")]
	[Address(RVA = "0x4F33900", Offset = "0x4F33900", VA = "0x4F33900", Slot = "23")]
	private object System_002EIConvertible_002EToType(Type type, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x60004AF")]
	[Address(RVA = "0x4F33990", Offset = "0x4F33990", VA = "0x4F33990")]
	public static bool IsControl(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60004B0")]
	[Address(RVA = "0x4F33A40", Offset = "0x4F33A40", VA = "0x4F33A40")]
	public static bool IsLower(string s, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x60004B1")]
	[Address(RVA = "0x4F33BD0", Offset = "0x4F33BD0", VA = "0x4F33BD0")]
	internal static bool CheckNumber(UnicodeCategory uc)
	{
		return default(bool);
	}

	[Token(Token = "0x60004B2")]
	[Address(RVA = "0x4F33BE0", Offset = "0x4F33BE0", VA = "0x4F33BE0")]
	public static bool IsNumber(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60004B3")]
	[Address(RVA = "0x4F33CD0", Offset = "0x4F33CD0", VA = "0x4F33CD0")]
	public static bool IsNumber(string s, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x60004B4")]
	[Address(RVA = "0x4F33E70", Offset = "0x4F33E70", VA = "0x4F33E70")]
	internal static bool CheckSeparator(UnicodeCategory uc)
	{
		return default(bool);
	}

	[Token(Token = "0x60004B5")]
	[Address(RVA = "0x4F33E80", Offset = "0x4F33E80", VA = "0x4F33E80")]
	private static bool IsSeparatorLatin1(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60004B6")]
	[Address(RVA = "0x4F33E90", Offset = "0x4F33E90", VA = "0x4F33E90")]
	public static bool IsSeparator(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60004B7")]
	[Address(RVA = "0x4F33F30", Offset = "0x4F33F30", VA = "0x4F33F30")]
	public static bool IsSurrogate(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60004B8")]
	[Address(RVA = "0x4F33F40", Offset = "0x4F33F40", VA = "0x4F33F40")]
	public static bool IsSurrogate(string s, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x60004B9")]
	[Address(RVA = "0x4F34000", Offset = "0x4F34000", VA = "0x4F34000")]
	internal static bool CheckSymbol(UnicodeCategory uc)
	{
		return default(bool);
	}

	[Token(Token = "0x60004BA")]
	[Address(RVA = "0x4F34010", Offset = "0x4F34010", VA = "0x4F34010")]
	public static bool IsSymbol(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60004BB")]
	[Address(RVA = "0x4F340D0", Offset = "0x4F340D0", VA = "0x4F340D0")]
	public static bool IsUpper(string s, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x60004BC")]
	[Address(RVA = "0x4F34260", Offset = "0x4F34260", VA = "0x4F34260")]
	public static bool IsWhiteSpace(string s, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x60004BD")]
	[Address(RVA = "0x4F343A0", Offset = "0x4F343A0", VA = "0x4F343A0")]
	public static UnicodeCategory GetUnicodeCategory(char c)
	{
		return default(UnicodeCategory);
	}

	[Token(Token = "0x60004BE")]
	[Address(RVA = "0x4F34450", Offset = "0x4F34450", VA = "0x4F34450")]
	public static UnicodeCategory GetUnicodeCategory(string s, int index)
	{
		return default(UnicodeCategory);
	}

	[Token(Token = "0x60004BF")]
	[Address(RVA = "0x4F345A0", Offset = "0x4F345A0", VA = "0x4F345A0")]
	public static bool IsHighSurrogate(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60004C0")]
	[Address(RVA = "0x4F345B0", Offset = "0x4F345B0", VA = "0x4F345B0")]
	public static bool IsHighSurrogate(string s, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x60004C1")]
	[Address(RVA = "0x4F34670", Offset = "0x4F34670", VA = "0x4F34670")]
	public static bool IsLowSurrogate(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60004C2")]
	[Address(RVA = "0x4F34680", Offset = "0x4F34680", VA = "0x4F34680")]
	public static bool IsSurrogatePair(char highSurrogate, char lowSurrogate)
	{
		return default(bool);
	}

	[Token(Token = "0x60004C3")]
	[Address(RVA = "0x4F346B0", Offset = "0x4F346B0", VA = "0x4F346B0")]
	public static int ConvertToUtf32(char highSurrogate, char lowSurrogate)
	{
		return default(int);
	}
}
