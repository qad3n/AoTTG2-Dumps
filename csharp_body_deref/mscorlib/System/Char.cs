// ==================== AoTTG2 cross-reference ====================
// Type: System.Char
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x3C18260", Offset = "0x3C18260", VA = "0x3C18260")]
	private static bool IsLatin1(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000482")]
	[Address(RVA = "0x3C18270", Offset = "0x3C18270", VA = "0x3C18270")]
	private static bool IsAscii(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000483")]
	[Address(RVA = "0x3C18280", Offset = "0x3C18280", VA = "0x3C18280")]
	private static UnicodeCategory GetLatin1UnicodeCategory(char ch)
	{
		return default(UnicodeCategory);
	}

	[Token(Token = "0x6000484")]
	[Address(RVA = "0x3C182E0", Offset = "0x3C182E0", VA = "0x3C182E0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000485")]
	[Address(RVA = "0x3C182F0", Offset = "0x3C182F0", VA = "0x3C182F0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000486")]
	[Address(RVA = "0x3C18320", Offset = "0x3C18320", VA = "0x3C18320", Slot = "6")]
	[System.Runtime.Versioning.NonVersionable]
	public bool Equals(char obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000487")]
	[Address(RVA = "0x3C18330", Offset = "0x3C18330", VA = "0x3C18330", Slot = "4")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000488")]
	[Address(RVA = "0x3C183B0", Offset = "0x3C183B0", VA = "0x3C183B0", Slot = "5")]
	public int CompareTo(char value)
	{
		return default(int);
	}

	[Token(Token = "0x6000489")]
	[Address(RVA = "0x3C06270", Offset = "0x3C06270", VA = "0x3C06270", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600048A")]
	[Address(RVA = "0x3C183D0", Offset = "0x3C183D0", VA = "0x3C183D0", Slot = "22")]
	public string ToString(IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x600048B")]
	[Address(RVA = "0x3C183C0", Offset = "0x3C183C0", VA = "0x3C183C0")]
	public static string ToString(char c)
	{
		return null;
	}

	[Token(Token = "0x600048C")]
	[Address(RVA = "0x3C18410", Offset = "0x3C18410", VA = "0x3C18410")]
	public static char Parse(string s)
	{
		return default(char);
	}

	[Token(Token = "0x600048D")]
	[Address(RVA = "0x3C184A0", Offset = "0x3C184A0", VA = "0x3C184A0")]
	public static bool TryParse(string s, out char result)
	{
		return default(bool);
	}

	[Token(Token = "0x600048E")]
	[Address(RVA = "0x3C11980", Offset = "0x3C11980", VA = "0x3C11980")]
	public static bool IsDigit(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x600048F")]
	[Address(RVA = "0x3C184D0", Offset = "0x3C184D0", VA = "0x3C184D0")]
	internal static bool CheckLetter(UnicodeCategory uc)
	{
		return default(bool);
	}

	[Token(Token = "0x6000490")]
	[Address(RVA = "0x3C184E0", Offset = "0x3C184E0", VA = "0x3C184E0")]
	public static bool IsLetter(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000491")]
	[Address(RVA = "0x3C185D0", Offset = "0x3C185D0", VA = "0x3C185D0")]
	private static bool IsWhiteSpaceLatin1(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000492")]
	[Address(RVA = "0x3C15C90", Offset = "0x3C15C90", VA = "0x3C15C90")]
	public static bool IsWhiteSpace(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000493")]
	[Address(RVA = "0x3C18600", Offset = "0x3C18600", VA = "0x3C18600")]
	public static bool IsUpper(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000494")]
	[Address(RVA = "0x3C186E0", Offset = "0x3C186E0", VA = "0x3C186E0")]
	public static bool IsLower(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000495")]
	[Address(RVA = "0x3C187C0", Offset = "0x3C187C0", VA = "0x3C187C0")]
	internal static bool CheckPunctuation(UnicodeCategory uc)
	{
		return default(bool);
	}

	[Token(Token = "0x6000496")]
	[Address(RVA = "0x3C187D0", Offset = "0x3C187D0", VA = "0x3C187D0")]
	public static bool IsPunctuation(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000497")]
	[Address(RVA = "0x3C18890", Offset = "0x3C18890", VA = "0x3C18890")]
	internal static bool CheckLetterOrDigit(UnicodeCategory uc)
	{
		return default(bool);
	}

	[Token(Token = "0x6000498")]
	[Address(RVA = "0x3C188A0", Offset = "0x3C188A0", VA = "0x3C188A0")]
	public static bool IsLetterOrDigit(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000499")]
	[Address(RVA = "0x3C18970", Offset = "0x3C18970", VA = "0x3C18970")]
	public static char ToUpper(char c, CultureInfo culture)
	{
		return default(char);
	}

	[Token(Token = "0x600049A")]
	[Address(RVA = "0x3C18A00", Offset = "0x3C18A00", VA = "0x3C18A00")]
	public static char ToUpper(char c)
	{
		return default(char);
	}

	[Token(Token = "0x600049B")]
	[Address(RVA = "0x3C18AA0", Offset = "0x3C18AA0", VA = "0x3C18AA0")]
	public static char ToUpperInvariant(char c)
	{
		return default(char);
	}

	[Token(Token = "0x600049C")]
	[Address(RVA = "0x3C18B40", Offset = "0x3C18B40", VA = "0x3C18B40")]
	public static char ToLower(char c, CultureInfo culture)
	{
		return default(char);
	}

	[Token(Token = "0x600049D")]
	[Address(RVA = "0x3C18BD0", Offset = "0x3C18BD0", VA = "0x3C18BD0")]
	public static char ToLower(char c)
	{
		return default(char);
	}

	[Token(Token = "0x600049E")]
	[Address(RVA = "0x3C18C70", Offset = "0x3C18C70", VA = "0x3C18C70")]
	public static char ToLowerInvariant(char c)
	{
		return default(char);
	}

	[Token(Token = "0x600049F")]
	[Address(RVA = "0x3C18D10", Offset = "0x3C18D10", VA = "0x3C18D10", Slot = "7")]
	public TypeCode GetTypeCode()
	{
		return default(TypeCode);
	}

	[Token(Token = "0x60004A0")]
	[Address(RVA = "0x3C18D20", Offset = "0x3C18D20", VA = "0x3C18D20", Slot = "8")]
	private bool System_002EIConvertible_002EToBoolean(IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x60004A1")]
	[Address(RVA = "0x3C18DA0", Offset = "0x3C18DA0", VA = "0x3C18DA0", Slot = "9")]
	private char System_002EIConvertible_002EToChar(IFormatProvider provider)
	{
		return default(char);
	}

	[Token(Token = "0x60004A2")]
	[Address(RVA = "0x3C18DB0", Offset = "0x3C18DB0", VA = "0x3C18DB0", Slot = "10")]
	private sbyte System_002EIConvertible_002EToSByte(IFormatProvider provider)
	{
		return default(sbyte);
	}

	[Token(Token = "0x60004A3")]
	[Address(RVA = "0x3C18E90", Offset = "0x3C18E90", VA = "0x3C18E90", Slot = "11")]
	private byte System_002EIConvertible_002EToByte(IFormatProvider provider)
	{
		return default(byte);
	}

	[Token(Token = "0x60004A4")]
	[Address(RVA = "0x3C18F70", Offset = "0x3C18F70", VA = "0x3C18F70", Slot = "12")]
	private short System_002EIConvertible_002EToInt16(IFormatProvider provider)
	{
		return default(short);
	}

	[Token(Token = "0x60004A5")]
	[Address(RVA = "0x3C19040", Offset = "0x3C19040", VA = "0x3C19040", Slot = "13")]
	private ushort System_002EIConvertible_002EToUInt16(IFormatProvider provider)
	{
		return default(ushort);
	}

	[Token(Token = "0x60004A6")]
	[Address(RVA = "0x3C190A0", Offset = "0x3C190A0", VA = "0x3C190A0", Slot = "14")]
	private int System_002EIConvertible_002EToInt32(IFormatProvider provider)
	{
		return default(int);
	}

	[Token(Token = "0x60004A7")]
	[Address(RVA = "0x3C19100", Offset = "0x3C19100", VA = "0x3C19100", Slot = "15")]
	private uint System_002EIConvertible_002EToUInt32(IFormatProvider provider)
	{
		return default(uint);
	}

	[Token(Token = "0x60004A8")]
	[Address(RVA = "0x3C19160", Offset = "0x3C19160", VA = "0x3C19160", Slot = "16")]
	private long System_002EIConvertible_002EToInt64(IFormatProvider provider)
	{
		return default(long);
	}

	[Token(Token = "0x60004A9")]
	[Address(RVA = "0x3C191C0", Offset = "0x3C191C0", VA = "0x3C191C0", Slot = "17")]
	private ulong System_002EIConvertible_002EToUInt64(IFormatProvider provider)
	{
		return default(ulong);
	}

	[Token(Token = "0x60004AA")]
	[Address(RVA = "0x3C19220", Offset = "0x3C19220", VA = "0x3C19220", Slot = "18")]
	private float System_002EIConvertible_002EToSingle(IFormatProvider provider)
	{
		return default(float);
	}

	[Token(Token = "0x60004AB")]
	[Address(RVA = "0x3C192A0", Offset = "0x3C192A0", VA = "0x3C192A0", Slot = "19")]
	private double System_002EIConvertible_002EToDouble(IFormatProvider provider)
	{
		return default(double);
	}

	[Token(Token = "0x60004AC")]
	[Address(RVA = "0x3C19320", Offset = "0x3C19320", VA = "0x3C19320", Slot = "20")]
	private decimal System_002EIConvertible_002EToDecimal(IFormatProvider provider)
	{
		return default(decimal);
	}

	[Token(Token = "0x60004AD")]
	[Address(RVA = "0x3C193A0", Offset = "0x3C193A0", VA = "0x3C193A0", Slot = "21")]
	private DateTime System_002EIConvertible_002EToDateTime(IFormatProvider provider)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60004AE")]
	[Address(RVA = "0x3C19420", Offset = "0x3C19420", VA = "0x3C19420", Slot = "23")]
	private object System_002EIConvertible_002EToType(Type type, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x60004AF")]
	[Address(RVA = "0x3C194B0", Offset = "0x3C194B0", VA = "0x3C194B0")]
	public static bool IsControl(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60004B0")]
	[Address(RVA = "0x3C19560", Offset = "0x3C19560", VA = "0x3C19560")]
	public static bool IsLower(string s, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x60004B1")]
	[Address(RVA = "0x3C196F0", Offset = "0x3C196F0", VA = "0x3C196F0")]
	internal static bool CheckNumber(UnicodeCategory uc)
	{
		return default(bool);
	}

	[Token(Token = "0x60004B2")]
	[Address(RVA = "0x3C19700", Offset = "0x3C19700", VA = "0x3C19700")]
	public static bool IsNumber(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60004B3")]
	[Address(RVA = "0x3C197F0", Offset = "0x3C197F0", VA = "0x3C197F0")]
	public static bool IsNumber(string s, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x60004B4")]
	[Address(RVA = "0x3C19990", Offset = "0x3C19990", VA = "0x3C19990")]
	internal static bool CheckSeparator(UnicodeCategory uc)
	{
		return default(bool);
	}

	[Token(Token = "0x60004B5")]
	[Address(RVA = "0x3C199A0", Offset = "0x3C199A0", VA = "0x3C199A0")]
	private static bool IsSeparatorLatin1(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60004B6")]
	[Address(RVA = "0x3C199B0", Offset = "0x3C199B0", VA = "0x3C199B0")]
	public static bool IsSeparator(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60004B7")]
	[Address(RVA = "0x3C19A50", Offset = "0x3C19A50", VA = "0x3C19A50")]
	public static bool IsSurrogate(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60004B8")]
	[Address(RVA = "0x3C19A60", Offset = "0x3C19A60", VA = "0x3C19A60")]
	public static bool IsSurrogate(string s, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x60004B9")]
	[Address(RVA = "0x3C19B20", Offset = "0x3C19B20", VA = "0x3C19B20")]
	internal static bool CheckSymbol(UnicodeCategory uc)
	{
		return default(bool);
	}

	[Token(Token = "0x60004BA")]
	[Address(RVA = "0x3C19B30", Offset = "0x3C19B30", VA = "0x3C19B30")]
	public static bool IsSymbol(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60004BB")]
	[Address(RVA = "0x3C19BF0", Offset = "0x3C19BF0", VA = "0x3C19BF0")]
	public static bool IsUpper(string s, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x60004BC")]
	[Address(RVA = "0x3C19D80", Offset = "0x3C19D80", VA = "0x3C19D80")]
	public static bool IsWhiteSpace(string s, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x60004BD")]
	[Address(RVA = "0x3C19EC0", Offset = "0x3C19EC0", VA = "0x3C19EC0")]
	public static UnicodeCategory GetUnicodeCategory(char c)
	{
		return default(UnicodeCategory);
	}

	[Token(Token = "0x60004BE")]
	[Address(RVA = "0x3C19F70", Offset = "0x3C19F70", VA = "0x3C19F70")]
	public static UnicodeCategory GetUnicodeCategory(string s, int index)
	{
		return default(UnicodeCategory);
	}

	[Token(Token = "0x60004BF")]
	[Address(RVA = "0x3C1A0C0", Offset = "0x3C1A0C0", VA = "0x3C1A0C0")]
	public static bool IsHighSurrogate(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60004C0")]
	[Address(RVA = "0x3C1A0D0", Offset = "0x3C1A0D0", VA = "0x3C1A0D0")]
	public static bool IsHighSurrogate(string s, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x60004C1")]
	[Address(RVA = "0x3C1A190", Offset = "0x3C1A190", VA = "0x3C1A190")]
	public static bool IsLowSurrogate(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60004C2")]
	[Address(RVA = "0x3C1A1A0", Offset = "0x3C1A1A0", VA = "0x3C1A1A0")]
	public static bool IsSurrogatePair(char highSurrogate, char lowSurrogate)
	{
		return default(bool);
	}

	[Token(Token = "0x60004C3")]
	[Address(RVA = "0x3C1A1D0", Offset = "0x3C1A1D0", VA = "0x3C1A1D0")]
	public static int ConvertToUtf32(char highSurrogate, char lowSurrogate)
	{
		return default(int);
	}
}
