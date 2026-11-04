// ==================== AoTTG2 cross-reference ====================
// Type: System.Char
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Globalization;
using System.Runtime.Versioning;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x20000C5")]
public readonly struct Char : IComparable, IComparable<char>, IEquatable<char>, IConvertible
{
	[Token(Token = "0x40002AE")]
	[FieldOffset(Offset = "0x0")]
	private readonly char m_value;

	[Token(Token = "0x40002AF")]
	[FieldOffset(Offset = "0x0")]
	private static readonly byte[] s_categoryForLatin1;

	[Token(Token = "0x60004B4")]
	[Address(RVA = "0x1A7C7B0", Offset = "0x1A7ADB0", VA = "0x181A7C7B0")]
	private static bool IsLatin1(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x60004B5")]
	[Address(RVA = "0x1A7C570", Offset = "0x1A7AB70", VA = "0x181A7C570")]
	private static bool IsAscii(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x60004B6")]
	[Address(RVA = "0x1A7C330", Offset = "0x1A7A930", VA = "0x181A7C330")]
	private static UnicodeCategory GetLatin1UnicodeCategory(char ch)
	{
		return default(UnicodeCategory);
	}

	[Token(Token = "0x60004B7")]
	[Address(RVA = "0x1A7C320", Offset = "0x1A7A920", VA = "0x181A7C320", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60004B8")]
	[Address(RVA = "0x1A7C2B0", Offset = "0x1A7A8B0", VA = "0x181A7C2B0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60004B9")]
	[Address(RVA = "0x1A7C310", Offset = "0x1A7A910", VA = "0x181A7C310", Slot = "6")]
	[System.Runtime.Versioning.NonVersionable]
	public bool Equals(char obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60004BA")]
	[Address(RVA = "0x1A7BFB0", Offset = "0x1A7A5B0", VA = "0x181A7BFB0", Slot = "4")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x60004BB")]
	[Address(RVA = "0x1A7BFA0", Offset = "0x1A7A5A0", VA = "0x181A7BFA0", Slot = "5")]
	public int CompareTo(char value)
	{
		return default(int);
	}

	[Token(Token = "0x60004BC")]
	[Address(RVA = "0x1A7DF70", Offset = "0x1A7C570", VA = "0x181A7DF70", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60004BD")]
	[Address(RVA = "0x1A7DF70", Offset = "0x1A7C570", VA = "0x181A7DF70", Slot = "22")]
	public string ToString(IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x60004BE")]
	[Address(RVA = "0x1A7DFA0", Offset = "0x1A7C5A0", VA = "0x181A7DFA0")]
	public static string ToString(char c)
	{
		return null;
	}

	[Token(Token = "0x60004BF")]
	[Address(RVA = "0x1A7D680", Offset = "0x1A7BC80", VA = "0x181A7D680")]
	public static char Parse(string s)
	{
		return default(char);
	}

	[Token(Token = "0x60004C0")]
	[Address(RVA = "0x1A7E170", Offset = "0x1A7C770", VA = "0x181A7E170")]
	public static bool TryParse(string s, out char result)
	{
		return default(bool);
	}

	[Token(Token = "0x60004C1")]
	[Address(RVA = "0x1A7C630", Offset = "0x1A7AC30", VA = "0x181A7C630")]
	public static bool IsDigit(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60004C2")]
	[Address(RVA = "0x1A7BF50", Offset = "0x1A7A550", VA = "0x181A7BF50")]
	internal static bool CheckLetter(UnicodeCategory uc)
	{
		return default(bool);
	}

	[Token(Token = "0x60004C3")]
	[Address(RVA = "0x1A7C890", Offset = "0x1A7AE90", VA = "0x181A7C890")]
	public static bool IsLetter(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60004C4")]
	[Address(RVA = "0x1A7D470", Offset = "0x1A7BA70", VA = "0x181A7D470")]
	private static bool IsWhiteSpaceLatin1(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60004C5")]
	[Address(RVA = "0x1A7D4A0", Offset = "0x1A7BAA0", VA = "0x181A7D4A0")]
	public static bool IsWhiteSpace(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60004C6")]
	[Address(RVA = "0x1A7D390", Offset = "0x1A7B990", VA = "0x181A7D390")]
	public static bool IsUpper(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60004C7")]
	[Address(RVA = "0x1A7CB20", Offset = "0x1A7B120", VA = "0x181A7CB20")]
	public static bool IsLower(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60004C8")]
	[Address(RVA = "0x1A7BF70", Offset = "0x1A7A570", VA = "0x181A7BF70")]
	internal static bool CheckPunctuation(UnicodeCategory uc)
	{
		return default(bool);
	}

	[Token(Token = "0x60004C9")]
	[Address(RVA = "0x1A7CE90", Offset = "0x1A7B490", VA = "0x181A7CE90")]
	public static bool IsPunctuation(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60004CA")]
	[Address(RVA = "0x1A7BF40", Offset = "0x1A7A540", VA = "0x181A7BF40")]
	internal static bool CheckLetterOrDigit(UnicodeCategory uc)
	{
		return default(bool);
	}

	[Token(Token = "0x60004CB")]
	[Address(RVA = "0x1A7C7C0", Offset = "0x1A7ADC0", VA = "0x181A7C7C0")]
	public static bool IsLetterOrDigit(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60004CC")]
	[Address(RVA = "0x1A7E0D0", Offset = "0x1A7C6D0", VA = "0x181A7E0D0")]
	public static char ToUpper(char c, CultureInfo culture)
	{
		return default(char);
	}

	[Token(Token = "0x60004CD")]
	[Address(RVA = "0x1A7E040", Offset = "0x1A7C640", VA = "0x181A7E040")]
	public static char ToUpper(char c)
	{
		return default(char);
	}

	[Token(Token = "0x60004CE")]
	[Address(RVA = "0x1A7DFB0", Offset = "0x1A7C5B0", VA = "0x181A7DFB0")]
	public static char ToUpperInvariant(char c)
	{
		return default(char);
	}

	[Token(Token = "0x60004CF")]
	[Address(RVA = "0x1A7DE40", Offset = "0x1A7C440", VA = "0x181A7DE40")]
	public static char ToLower(char c, CultureInfo culture)
	{
		return default(char);
	}

	[Token(Token = "0x60004D0")]
	[Address(RVA = "0x1A7DEE0", Offset = "0x1A7C4E0", VA = "0x181A7DEE0")]
	public static char ToLower(char c)
	{
		return default(char);
	}

	[Token(Token = "0x60004D1")]
	[Address(RVA = "0x1A7DDB0", Offset = "0x1A7C3B0", VA = "0x181A7DDB0")]
	public static char ToLowerInvariant(char c)
	{
		return default(char);
	}

	[Token(Token = "0x60004D2")]
	[Address(RVA = "0x846F40", Offset = "0x845540", VA = "0x180846F40", Slot = "7")]
	public TypeCode GetTypeCode()
	{
		return default(TypeCode);
	}

	[Token(Token = "0x60004D3")]
	[Address(RVA = "0x1A7D740", Offset = "0x1A7BD40", VA = "0x181A7D740", Slot = "8")]
	private bool System_002EIConvertible_002EToBoolean(IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x60004D4")]
	[Address(RVA = "0x846ED0", Offset = "0x8454D0", VA = "0x180846ED0", Slot = "9")]
	private char System_002EIConvertible_002EToChar(IFormatProvider provider)
	{
		return default(char);
	}

	[Token(Token = "0x60004D5")]
	[Address(RVA = "0x1A7DB20", Offset = "0x1A7C120", VA = "0x181A7DB20", Slot = "10")]
	private sbyte System_002EIConvertible_002EToSByte(IFormatProvider provider)
	{
		return default(sbyte);
	}

	[Token(Token = "0x60004D6")]
	[Address(RVA = "0x1A7D7D0", Offset = "0x1A7BDD0", VA = "0x181A7D7D0", Slot = "11")]
	private byte System_002EIConvertible_002EToByte(IFormatProvider provider)
	{
		return default(byte);
	}

	[Token(Token = "0x60004D7")]
	[Address(RVA = "0x1A7DA00", Offset = "0x1A7C000", VA = "0x181A7DA00", Slot = "12")]
	private short System_002EIConvertible_002EToInt16(IFormatProvider provider)
	{
		return default(short);
	}

	[Token(Token = "0x60004D8")]
	[Address(RVA = "0x1A7DCC0", Offset = "0x1A7C2C0", VA = "0x181A7DCC0", Slot = "13")]
	private ushort System_002EIConvertible_002EToUInt16(IFormatProvider provider)
	{
		return default(ushort);
	}

	[Token(Token = "0x60004D9")]
	[Address(RVA = "0x1A7DA80", Offset = "0x1A7C080", VA = "0x181A7DA80", Slot = "14")]
	private int System_002EIConvertible_002EToInt32(IFormatProvider provider)
	{
		return default(int);
	}

	[Token(Token = "0x60004DA")]
	[Address(RVA = "0x1A7DD10", Offset = "0x1A7C310", VA = "0x181A7DD10", Slot = "15")]
	private uint System_002EIConvertible_002EToUInt32(IFormatProvider provider)
	{
		return default(uint);
	}

	[Token(Token = "0x60004DB")]
	[Address(RVA = "0x1A7DAD0", Offset = "0x1A7C0D0", VA = "0x181A7DAD0", Slot = "16")]
	private long System_002EIConvertible_002EToInt64(IFormatProvider provider)
	{
		return default(long);
	}

	[Token(Token = "0x60004DC")]
	[Address(RVA = "0x1A7DD60", Offset = "0x1A7C360", VA = "0x181A7DD60", Slot = "17")]
	private ulong System_002EIConvertible_002EToUInt64(IFormatProvider provider)
	{
		return default(ulong);
	}

	[Token(Token = "0x60004DD")]
	[Address(RVA = "0x1A7DBA0", Offset = "0x1A7C1A0", VA = "0x181A7DBA0", Slot = "18")]
	private float System_002EIConvertible_002EToSingle(IFormatProvider provider)
	{
		return default(float);
	}

	[Token(Token = "0x60004DE")]
	[Address(RVA = "0x1A7D970", Offset = "0x1A7BF70", VA = "0x181A7D970", Slot = "19")]
	private double System_002EIConvertible_002EToDouble(IFormatProvider provider)
	{
		return default(double);
	}

	[Token(Token = "0x60004DF")]
	[Address(RVA = "0x1A7D8E0", Offset = "0x1A7BEE0", VA = "0x181A7D8E0", Slot = "20")]
	private decimal System_002EIConvertible_002EToDecimal(IFormatProvider provider)
	{
		return 0m;
	}

	[Token(Token = "0x60004E0")]
	[Address(RVA = "0x1A7D850", Offset = "0x1A7BE50", VA = "0x181A7D850", Slot = "21")]
	private DateTime System_002EIConvertible_002EToDateTime(IFormatProvider provider)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60004E1")]
	[Address(RVA = "0x1A7DC30", Offset = "0x1A7C230", VA = "0x181A7DC30", Slot = "23")]
	private object System_002EIConvertible_002EToType(Type type, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x60004E2")]
	[Address(RVA = "0x1A7C580", Offset = "0x1A7AB80", VA = "0x181A7C580")]
	public static bool IsControl(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60004E3")]
	[Address(RVA = "0x1A7C9B0", Offset = "0x1A7AFB0", VA = "0x181A7C9B0")]
	public static bool IsLower(string s, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x60004E4")]
	[Address(RVA = "0x1A7BF60", Offset = "0x1A7A560", VA = "0x181A7BF60")]
	internal static bool CheckNumber(UnicodeCategory uc)
	{
		return default(bool);
	}

	[Token(Token = "0x60004E5")]
	[Address(RVA = "0x1A7CC00", Offset = "0x1A7B200", VA = "0x181A7CC00")]
	public static bool IsNumber(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60004E6")]
	[Address(RVA = "0x1A7CD00", Offset = "0x1A7B300", VA = "0x181A7CD00")]
	public static bool IsNumber(string s, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x60004E7")]
	[Address(RVA = "0x1A7BF80", Offset = "0x1A7A580", VA = "0x181A7BF80")]
	internal static bool CheckSeparator(UnicodeCategory uc)
	{
		return default(bool);
	}

	[Token(Token = "0x60004E8")]
	[Address(RVA = "0x1A7CF60", Offset = "0x1A7B560", VA = "0x181A7CF60")]
	private static bool IsSeparatorLatin1(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60004E9")]
	[Address(RVA = "0x1A7CF80", Offset = "0x1A7B580", VA = "0x181A7CF80")]
	public static bool IsSeparator(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60004EA")]
	[Address(RVA = "0x1A7D130", Offset = "0x1A7B730", VA = "0x181A7D130")]
	public static bool IsSurrogate(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60004EB")]
	[Address(RVA = "0x1A7D040", Offset = "0x1A7B640", VA = "0x181A7D040")]
	public static bool IsSurrogate(string s, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x60004EC")]
	[Address(RVA = "0x1A7BF90", Offset = "0x1A7A590", VA = "0x181A7BF90")]
	internal static bool CheckSymbol(UnicodeCategory uc)
	{
		return default(bool);
	}

	[Token(Token = "0x60004ED")]
	[Address(RVA = "0x1A7D150", Offset = "0x1A7B750", VA = "0x181A7D150")]
	public static bool IsSymbol(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60004EE")]
	[Address(RVA = "0x1A7D220", Offset = "0x1A7B820", VA = "0x181A7D220")]
	public static bool IsUpper(string s, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x60004EF")]
	[Address(RVA = "0x1A7D520", Offset = "0x1A7BB20", VA = "0x181A7D520")]
	public static bool IsWhiteSpace(string s, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x60004F0")]
	[Address(RVA = "0x1A7C390", Offset = "0x1A7A990", VA = "0x181A7C390")]
	public static UnicodeCategory GetUnicodeCategory(char c)
	{
		return default(UnicodeCategory);
	}

	[Token(Token = "0x60004F1")]
	[Address(RVA = "0x1A7C430", Offset = "0x1A7AA30", VA = "0x181A7C430")]
	public static UnicodeCategory GetUnicodeCategory(string s, int index)
	{
		return default(UnicodeCategory);
	}

	[Token(Token = "0x60004F2")]
	[Address(RVA = "0x1A7C790", Offset = "0x1A7AD90", VA = "0x181A7C790")]
	public static bool IsHighSurrogate(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60004F3")]
	[Address(RVA = "0x1A7C690", Offset = "0x1A7AC90", VA = "0x181A7C690")]
	public static bool IsHighSurrogate(string s, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x60004F4")]
	[Address(RVA = "0x1A7C990", Offset = "0x1A7AF90", VA = "0x181A7C990")]
	public static bool IsLowSurrogate(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60004F5")]
	[Address(RVA = "0x1A7D010", Offset = "0x1A7B610", VA = "0x181A7D010")]
	public static bool IsSurrogatePair(char highSurrogate, char lowSurrogate)
	{
		return default(bool);
	}

	[Token(Token = "0x60004F6")]
	[Address(RVA = "0x1A7C060", Offset = "0x1A7A660", VA = "0x181A7C060")]
	public static string ConvertFromUtf32(int utf32)
	{
		return null;
	}

	[Token(Token = "0x60004F7")]
	[Address(RVA = "0x1A7C170", Offset = "0x1A7A770", VA = "0x181A7C170")]
	public static int ConvertToUtf32(char highSurrogate, char lowSurrogate)
	{
		return default(int);
	}
}
