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
	[Token(Token = "0x4000205")]
	[FieldOffset(Offset = "0x0")]
	private readonly char m_value;

	[Token(Token = "0x4000206")]
	[FieldOffset(Offset = "0x0")]
	private static readonly byte[] s_categoryForLatin1;

	[Token(Token = "0x6000489")]
	[Address(RVA = "0x541E1F0", Offset = "0x541D1F0", VA = "0x541E1F0")]
	private static bool IsLatin1(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x600048A")]
	[Address(RVA = "0x541E200", Offset = "0x541D200", VA = "0x541E200")]
	private static bool IsAscii(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x600048B")]
	[Address(RVA = "0x541E210", Offset = "0x541D210", VA = "0x541E210")]
	private static UnicodeCategory GetLatin1UnicodeCategory(char ch)
	{
		return default(UnicodeCategory);
	}

	[Token(Token = "0x600048C")]
	[Address(RVA = "0x541E270", Offset = "0x541D270", VA = "0x541E270", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600048D")]
	[Address(RVA = "0x541E280", Offset = "0x541D280", VA = "0x541E280", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600048E")]
	[Address(RVA = "0x541E2B0", Offset = "0x541D2B0", VA = "0x541E2B0", Slot = "6")]
	[System.Runtime.Versioning.NonVersionable]
	public bool Equals(char obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600048F")]
	[Address(RVA = "0x541E2C0", Offset = "0x541D2C0", VA = "0x541E2C0", Slot = "4")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000490")]
	[Address(RVA = "0x541E340", Offset = "0x541D340", VA = "0x541E340", Slot = "5")]
	public int CompareTo(char value)
	{
		return default(int);
	}

	[Token(Token = "0x6000491")]
	[Address(RVA = "0x540C720", Offset = "0x540B720", VA = "0x540C720", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000492")]
	[Address(RVA = "0x541E360", Offset = "0x541D360", VA = "0x541E360", Slot = "22")]
	public string ToString(IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6000493")]
	[Address(RVA = "0x541E350", Offset = "0x541D350", VA = "0x541E350")]
	public static string ToString(char c)
	{
		return null;
	}

	[Token(Token = "0x6000494")]
	[Address(RVA = "0x541E3A0", Offset = "0x541D3A0", VA = "0x541E3A0")]
	public static char Parse(string s)
	{
		return default(char);
	}

	[Token(Token = "0x6000495")]
	[Address(RVA = "0x541E430", Offset = "0x541D430", VA = "0x541E430")]
	public static bool TryParse(string s, out char result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000496")]
	[Address(RVA = "0x5417BC0", Offset = "0x5416BC0", VA = "0x5417BC0")]
	public static bool IsDigit(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000497")]
	[Address(RVA = "0x541E460", Offset = "0x541D460", VA = "0x541E460")]
	internal static bool CheckLetter(UnicodeCategory uc)
	{
		return default(bool);
	}

	[Token(Token = "0x6000498")]
	[Address(RVA = "0x541E470", Offset = "0x541D470", VA = "0x541E470")]
	public static bool IsLetter(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6000499")]
	[Address(RVA = "0x541E560", Offset = "0x541D560", VA = "0x541E560")]
	private static bool IsWhiteSpaceLatin1(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x600049A")]
	[Address(RVA = "0x541BEF0", Offset = "0x541AEF0", VA = "0x541BEF0")]
	public static bool IsWhiteSpace(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x600049B")]
	[Address(RVA = "0x541E590", Offset = "0x541D590", VA = "0x541E590")]
	public static bool IsUpper(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x600049C")]
	[Address(RVA = "0x541E670", Offset = "0x541D670", VA = "0x541E670")]
	public static bool IsLower(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x600049D")]
	[Address(RVA = "0x541E750", Offset = "0x541D750", VA = "0x541E750")]
	internal static bool CheckPunctuation(UnicodeCategory uc)
	{
		return default(bool);
	}

	[Token(Token = "0x600049E")]
	[Address(RVA = "0x541E760", Offset = "0x541D760", VA = "0x541E760")]
	public static bool IsPunctuation(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x600049F")]
	[Address(RVA = "0x541E820", Offset = "0x541D820", VA = "0x541E820")]
	internal static bool CheckLetterOrDigit(UnicodeCategory uc)
	{
		return default(bool);
	}

	[Token(Token = "0x60004A0")]
	[Address(RVA = "0x541E840", Offset = "0x541D840", VA = "0x541E840")]
	public static bool IsLetterOrDigit(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60004A1")]
	[Address(RVA = "0x541E930", Offset = "0x541D930", VA = "0x541E930")]
	public static char ToUpper(char c, CultureInfo culture)
	{
		return default(char);
	}

	[Token(Token = "0x60004A2")]
	[Address(RVA = "0x541E9C0", Offset = "0x541D9C0", VA = "0x541E9C0")]
	public static char ToUpper(char c)
	{
		return default(char);
	}

	[Token(Token = "0x60004A3")]
	[Address(RVA = "0x541EA60", Offset = "0x541DA60", VA = "0x541EA60")]
	public static char ToUpperInvariant(char c)
	{
		return default(char);
	}

	[Token(Token = "0x60004A4")]
	[Address(RVA = "0x541EB00", Offset = "0x541DB00", VA = "0x541EB00")]
	public static char ToLower(char c, CultureInfo culture)
	{
		return default(char);
	}

	[Token(Token = "0x60004A5")]
	[Address(RVA = "0x541EB90", Offset = "0x541DB90", VA = "0x541EB90")]
	public static char ToLower(char c)
	{
		return default(char);
	}

	[Token(Token = "0x60004A6")]
	[Address(RVA = "0x541EC30", Offset = "0x541DC30", VA = "0x541EC30")]
	public static char ToLowerInvariant(char c)
	{
		return default(char);
	}

	[Token(Token = "0x60004A7")]
	[Address(RVA = "0x541ECD0", Offset = "0x541DCD0", VA = "0x541ECD0", Slot = "7")]
	public TypeCode GetTypeCode()
	{
		return default(TypeCode);
	}

	[Token(Token = "0x60004A8")]
	[Address(RVA = "0x541ECE0", Offset = "0x541DCE0", VA = "0x541ECE0", Slot = "8")]
	private bool System_002EIConvertible_002EToBoolean(IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x60004A9")]
	[Address(RVA = "0x541ED60", Offset = "0x541DD60", VA = "0x541ED60", Slot = "9")]
	private char System_002EIConvertible_002EToChar(IFormatProvider provider)
	{
		return default(char);
	}

	[Token(Token = "0x60004AA")]
	[Address(RVA = "0x541ED70", Offset = "0x541DD70", VA = "0x541ED70", Slot = "10")]
	private sbyte System_002EIConvertible_002EToSByte(IFormatProvider provider)
	{
		return default(sbyte);
	}

	[Token(Token = "0x60004AB")]
	[Address(RVA = "0x541EE60", Offset = "0x541DE60", VA = "0x541EE60", Slot = "11")]
	private byte System_002EIConvertible_002EToByte(IFormatProvider provider)
	{
		return default(byte);
	}

	[Token(Token = "0x60004AC")]
	[Address(RVA = "0x541EF50", Offset = "0x541DF50", VA = "0x541EF50", Slot = "12")]
	private short System_002EIConvertible_002EToInt16(IFormatProvider provider)
	{
		return default(short);
	}

	[Token(Token = "0x60004AD")]
	[Address(RVA = "0x541F030", Offset = "0x541E030", VA = "0x541F030", Slot = "13")]
	private ushort System_002EIConvertible_002EToUInt16(IFormatProvider provider)
	{
		return default(ushort);
	}

	[Token(Token = "0x60004AE")]
	[Address(RVA = "0x541F090", Offset = "0x541E090", VA = "0x541F090", Slot = "14")]
	private int System_002EIConvertible_002EToInt32(IFormatProvider provider)
	{
		return default(int);
	}

	[Token(Token = "0x60004AF")]
	[Address(RVA = "0x541F0F0", Offset = "0x541E0F0", VA = "0x541F0F0", Slot = "15")]
	private uint System_002EIConvertible_002EToUInt32(IFormatProvider provider)
	{
		return default(uint);
	}

	[Token(Token = "0x60004B0")]
	[Address(RVA = "0x541F150", Offset = "0x541E150", VA = "0x541F150", Slot = "16")]
	private long System_002EIConvertible_002EToInt64(IFormatProvider provider)
	{
		return default(long);
	}

	[Token(Token = "0x60004B1")]
	[Address(RVA = "0x541F1B0", Offset = "0x541E1B0", VA = "0x541F1B0", Slot = "17")]
	private ulong System_002EIConvertible_002EToUInt64(IFormatProvider provider)
	{
		return default(ulong);
	}

	[Token(Token = "0x60004B2")]
	[Address(RVA = "0x541F210", Offset = "0x541E210", VA = "0x541F210", Slot = "18")]
	private float System_002EIConvertible_002EToSingle(IFormatProvider provider)
	{
		return default(float);
	}

	[Token(Token = "0x60004B3")]
	[Address(RVA = "0x541F290", Offset = "0x541E290", VA = "0x541F290", Slot = "19")]
	private double System_002EIConvertible_002EToDouble(IFormatProvider provider)
	{
		return default(double);
	}

	[Token(Token = "0x60004B4")]
	[Address(RVA = "0x541F310", Offset = "0x541E310", VA = "0x541F310", Slot = "20")]
	private decimal System_002EIConvertible_002EToDecimal(IFormatProvider provider)
	{
		return 0m;
	}

	[Token(Token = "0x60004B5")]
	[Address(RVA = "0x541F390", Offset = "0x541E390", VA = "0x541F390", Slot = "21")]
	private DateTime System_002EIConvertible_002EToDateTime(IFormatProvider provider)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60004B6")]
	[Address(RVA = "0x541F410", Offset = "0x541E410", VA = "0x541F410", Slot = "23")]
	private object System_002EIConvertible_002EToType(Type type, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x60004B7")]
	[Address(RVA = "0x541F4A0", Offset = "0x541E4A0", VA = "0x541F4A0")]
	public static bool IsControl(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60004B8")]
	[Address(RVA = "0x541F550", Offset = "0x541E550", VA = "0x541F550")]
	public static bool IsLower(string s, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x60004B9")]
	[Address(RVA = "0x541F6E0", Offset = "0x541E6E0", VA = "0x541F6E0")]
	internal static bool CheckNumber(UnicodeCategory uc)
	{
		return default(bool);
	}

	[Token(Token = "0x60004BA")]
	[Address(RVA = "0x541F6F0", Offset = "0x541E6F0", VA = "0x541F6F0")]
	public static bool IsNumber(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60004BB")]
	[Address(RVA = "0x541F7E0", Offset = "0x541E7E0", VA = "0x541F7E0")]
	public static bool IsNumber(string s, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x60004BC")]
	[Address(RVA = "0x541F990", Offset = "0x541E990", VA = "0x541F990")]
	internal static bool CheckSeparator(UnicodeCategory uc)
	{
		return default(bool);
	}

	[Token(Token = "0x60004BD")]
	[Address(RVA = "0x541F9A0", Offset = "0x541E9A0", VA = "0x541F9A0")]
	private static bool IsSeparatorLatin1(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60004BE")]
	[Address(RVA = "0x541F9B0", Offset = "0x541E9B0", VA = "0x541F9B0")]
	public static bool IsSeparator(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60004BF")]
	[Address(RVA = "0x541FA50", Offset = "0x541EA50", VA = "0x541FA50")]
	public static bool IsSurrogate(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60004C0")]
	[Address(RVA = "0x541FA60", Offset = "0x541EA60", VA = "0x541FA60")]
	public static bool IsSurrogate(string s, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x60004C1")]
	[Address(RVA = "0x541FB20", Offset = "0x541EB20", VA = "0x541FB20")]
	internal static bool CheckSymbol(UnicodeCategory uc)
	{
		return default(bool);
	}

	[Token(Token = "0x60004C2")]
	[Address(RVA = "0x541FB30", Offset = "0x541EB30", VA = "0x541FB30")]
	public static bool IsSymbol(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60004C3")]
	[Address(RVA = "0x541FBF0", Offset = "0x541EBF0", VA = "0x541FBF0")]
	public static bool IsUpper(string s, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x60004C4")]
	[Address(RVA = "0x541FD80", Offset = "0x541ED80", VA = "0x541FD80")]
	public static bool IsWhiteSpace(string s, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x60004C5")]
	[Address(RVA = "0x541FEC0", Offset = "0x541EEC0", VA = "0x541FEC0")]
	public static UnicodeCategory GetUnicodeCategory(char c)
	{
		return default(UnicodeCategory);
	}

	[Token(Token = "0x60004C6")]
	[Address(RVA = "0x541FF70", Offset = "0x541EF70", VA = "0x541FF70")]
	public static UnicodeCategory GetUnicodeCategory(string s, int index)
	{
		return default(UnicodeCategory);
	}

	[Token(Token = "0x60004C7")]
	[Address(RVA = "0x54200C0", Offset = "0x541F0C0", VA = "0x54200C0")]
	public static bool IsHighSurrogate(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60004C8")]
	[Address(RVA = "0x54200D0", Offset = "0x541F0D0", VA = "0x54200D0")]
	public static bool IsHighSurrogate(string s, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x60004C9")]
	[Address(RVA = "0x5420190", Offset = "0x541F190", VA = "0x5420190")]
	public static bool IsLowSurrogate(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60004CA")]
	[Address(RVA = "0x54201A0", Offset = "0x541F1A0", VA = "0x54201A0")]
	public static bool IsSurrogatePair(char highSurrogate, char lowSurrogate)
	{
		return default(bool);
	}

	[Token(Token = "0x60004CB")]
	[Address(RVA = "0x54201C0", Offset = "0x541F1C0", VA = "0x54201C0")]
	public static string ConvertFromUtf32(int utf32)
	{
		return null;
	}

	[Token(Token = "0x60004CC")]
	[Address(RVA = "0x54202C0", Offset = "0x541F2C0", VA = "0x54202C0")]
	public static int ConvertToUtf32(char highSurrogate, char lowSurrogate)
	{
		return default(int);
	}
}
