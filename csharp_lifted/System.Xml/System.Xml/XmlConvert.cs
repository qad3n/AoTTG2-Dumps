// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.XmlConvert
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Text.RegularExpressions;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x20000D3")]
public class XmlConvert
{
	[Token(Token = "0x400056B")]
	[FieldOffset(Offset = "0x0")]
	private static XmlCharType xmlCharType;

	[Token(Token = "0x400056C")]
	[FieldOffset(Offset = "0x8")]
	internal static char[] crt;

	[Token(Token = "0x400056D")]
	[FieldOffset(Offset = "0x10")]
	private static readonly int c_EncodedCharLength;

	[Token(Token = "0x400056E")]
	[FieldOffset(Offset = "0x18")]
	private static Regex c_EncodeCharPattern;

	[Token(Token = "0x400056F")]
	[FieldOffset(Offset = "0x20")]
	private static Regex c_DecodeCharPattern;

	[Token(Token = "0x4000570")]
	[FieldOffset(Offset = "0x28")]
	private static string[] s_allDateTimeFormats;

	[Token(Token = "0x4000571")]
	[FieldOffset(Offset = "0x30")]
	internal static readonly char[] WhitespaceChars;

	[Token(Token = "0x170002F3")]
	private static string[] AllDateTimeFormats
	{
		[Token(Token = "0x6000B69")]
		[Address(RVA = "0x60FC610", Offset = "0x60FB610", VA = "0x60FC610")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000B25")]
	[Address(RVA = "0x60F7130", Offset = "0x60F6130", VA = "0x60F7130")]
	public static string EncodeName(string name)
	{
		return null;
	}

	[Token(Token = "0x6000B26")]
	[Address(RVA = "0x60F7C60", Offset = "0x60F6C60", VA = "0x60F7C60")]
	public static string EncodeLocalName(string name)
	{
		return null;
	}

	[Token(Token = "0x6000B27")]
	[Address(RVA = "0x60F7CB0", Offset = "0x60F6CB0", VA = "0x60F7CB0")]
	public static string DecodeName(string name)
	{
		return null;
	}

	[Token(Token = "0x6000B28")]
	[Address(RVA = "0x60F7180", Offset = "0x60F6180", VA = "0x60F7180")]
	private static string EncodeName(string name, bool first, bool local)
	{
		return null;
	}

	[Token(Token = "0x6000B29")]
	[Address(RVA = "0x60F86B0", Offset = "0x60F76B0", VA = "0x60F86B0")]
	private static int FromHex(char digit)
	{
		return default(int);
	}

	[Token(Token = "0x6000B2A")]
	[Address(RVA = "0x60F86D0", Offset = "0x60F76D0", VA = "0x60F86D0")]
	internal static byte[] FromBinHexString(string s)
	{
		return null;
	}

	[Token(Token = "0x6000B2B")]
	[Address(RVA = "0x60F8740", Offset = "0x60F7740", VA = "0x60F8740")]
	internal static byte[] FromBinHexString(string s, bool allowOddCount)
	{
		return null;
	}

	[Token(Token = "0x6000B2C")]
	[Address(RVA = "0x60F87B0", Offset = "0x60F77B0", VA = "0x60F87B0")]
	internal static string ToBinHexString(byte[] inArray)
	{
		return null;
	}

	[Token(Token = "0x6000B2D")]
	[Address(RVA = "0x60F8810", Offset = "0x60F7810", VA = "0x60F8810")]
	public static string VerifyName(string name)
	{
		return null;
	}

	[Token(Token = "0x6000B2E")]
	[Address(RVA = "0x60F8A50", Offset = "0x60F7A50", VA = "0x60F8A50")]
	internal static Exception TryVerifyName(string name)
	{
		return null;
	}

	[Token(Token = "0x6000B2F")]
	[Address(RVA = "0x60F8C10", Offset = "0x60F7C10", VA = "0x60F8C10")]
	internal static string VerifyQName(string name, ExceptionType exceptionType)
	{
		return null;
	}

	[Token(Token = "0x6000B30")]
	[Address(RVA = "0x60F8E30", Offset = "0x60F7E30", VA = "0x60F8E30")]
	public static string VerifyNCName(string name)
	{
		return null;
	}

	[Token(Token = "0x6000B31")]
	[Address(RVA = "0x60F8EA0", Offset = "0x60F7EA0", VA = "0x60F8EA0")]
	internal static string VerifyNCName(string name, ExceptionType exceptionType)
	{
		return null;
	}

	[Token(Token = "0x6000B32")]
	[Address(RVA = "0x60F8FD0", Offset = "0x60F7FD0", VA = "0x60F8FD0")]
	internal static Exception TryVerifyNCName(string name)
	{
		return null;
	}

	[Token(Token = "0x6000B33")]
	[Address(RVA = "0x60F90D0", Offset = "0x60F80D0", VA = "0x60F90D0")]
	public static string VerifyTOKEN(string token)
	{
		return null;
	}

	[Token(Token = "0x6000B34")]
	[Address(RVA = "0x60F91E0", Offset = "0x60F81E0", VA = "0x60F91E0")]
	internal static Exception TryVerifyTOKEN(string token)
	{
		return null;
	}

	[Token(Token = "0x6000B35")]
	[Address(RVA = "0x60F92F0", Offset = "0x60F82F0", VA = "0x60F92F0")]
	internal static Exception TryVerifyNMTOKEN(string name)
	{
		return null;
	}

	[Token(Token = "0x6000B36")]
	[Address(RVA = "0x60F94A0", Offset = "0x60F84A0", VA = "0x60F94A0")]
	internal static Exception TryVerifyNormalizedString(string str)
	{
		return null;
	}

	[Token(Token = "0x6000B37")]
	[Address(RVA = "0x60F9580", Offset = "0x60F8580", VA = "0x60F9580")]
	public static string ToString(bool value)
	{
		return null;
	}

	[Token(Token = "0x6000B38")]
	[Address(RVA = "0x60F95D0", Offset = "0x60F85D0", VA = "0x60F95D0")]
	public static string ToString(char value)
	{
		return null;
	}

	[Token(Token = "0x6000B39")]
	[Address(RVA = "0x60F9610", Offset = "0x60F8610", VA = "0x60F9610")]
	public static string ToString(decimal value)
	{
		return null;
	}

	[Token(Token = "0x6000B3A")]
	[Address(RVA = "0x60F9680", Offset = "0x60F8680", VA = "0x60F9680")]
	[CLSCompliant(false)]
	public static string ToString(sbyte value)
	{
		return null;
	}

	[Token(Token = "0x6000B3B")]
	[Address(RVA = "0x60F96A0", Offset = "0x60F86A0", VA = "0x60F96A0")]
	public static string ToString(short value)
	{
		return null;
	}

	[Token(Token = "0x6000B3C")]
	[Address(RVA = "0x60F96C0", Offset = "0x60F86C0", VA = "0x60F96C0")]
	public static string ToString(int value)
	{
		return null;
	}

	[Token(Token = "0x6000B3D")]
	[Address(RVA = "0x60F96E0", Offset = "0x60F86E0", VA = "0x60F96E0")]
	public static string ToString(long value)
	{
		return null;
	}

	[Token(Token = "0x6000B3E")]
	[Address(RVA = "0x60F9700", Offset = "0x60F8700", VA = "0x60F9700")]
	public static string ToString(byte value)
	{
		return null;
	}

	[Token(Token = "0x6000B3F")]
	[Address(RVA = "0x60F9720", Offset = "0x60F8720", VA = "0x60F9720")]
	[CLSCompliant(false)]
	public static string ToString(ushort value)
	{
		return null;
	}

	[Token(Token = "0x6000B40")]
	[Address(RVA = "0x60F9740", Offset = "0x60F8740", VA = "0x60F9740")]
	[CLSCompliant(false)]
	public static string ToString(uint value)
	{
		return null;
	}

	[Token(Token = "0x6000B41")]
	[Address(RVA = "0x60F9760", Offset = "0x60F8760", VA = "0x60F9760")]
	[CLSCompliant(false)]
	public static string ToString(ulong value)
	{
		return null;
	}

	[Token(Token = "0x6000B42")]
	[Address(RVA = "0x60F9780", Offset = "0x60F8780", VA = "0x60F9780")]
	public static string ToString(float value)
	{
		return null;
	}

	[Token(Token = "0x6000B43")]
	[Address(RVA = "0x60F9980", Offset = "0x60F8980", VA = "0x60F9980")]
	public static string ToString(double value)
	{
		return null;
	}

	[Token(Token = "0x6000B44")]
	[Address(RVA = "0x60F9B00", Offset = "0x60F8B00", VA = "0x60F9B00")]
	public static string ToString(TimeSpan value)
	{
		return null;
	}

	[Token(Token = "0x6000B45")]
	[Address(RVA = "0x60F9B50", Offset = "0x60F8B50", VA = "0x60F9B50")]
	public static string ToString(DateTime value, string format)
	{
		return null;
	}

	[Token(Token = "0x6000B46")]
	[Address(RVA = "0x60F9BE0", Offset = "0x60F8BE0", VA = "0x60F9BE0")]
	public static string ToString(DateTime value, XmlDateTimeSerializationMode dateTimeOption)
	{
		return null;
	}

	[Token(Token = "0x6000B47")]
	[Address(RVA = "0x60F9FA0", Offset = "0x60F8FA0", VA = "0x60F9FA0")]
	public static string ToString(DateTimeOffset value)
	{
		return null;
	}

	[Token(Token = "0x6000B48")]
	[Address(RVA = "0x60FA010", Offset = "0x60F9010", VA = "0x60FA010")]
	public static string ToString(Guid value)
	{
		return null;
	}

	[Token(Token = "0x6000B49")]
	[Address(RVA = "0x60FA030", Offset = "0x60F9030", VA = "0x60FA030")]
	public static bool ToBoolean(string s)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B4A")]
	[Address(RVA = "0x60FA300", Offset = "0x60F9300", VA = "0x60FA300")]
	internal static Exception TryToBoolean(string s, out bool result)
	{
		return null;
	}

	[Token(Token = "0x6000B4B")]
	[Address(RVA = "0x60FA5B0", Offset = "0x60F95B0", VA = "0x60FA5B0")]
	public static char ToChar(string s)
	{
		return default(char);
	}

	[Token(Token = "0x6000B4C")]
	[Address(RVA = "0x60FA650", Offset = "0x60F9650", VA = "0x60FA650")]
	internal static Exception TryToChar(string s, out char result)
	{
		return null;
	}

	[Token(Token = "0x6000B4D")]
	[Address(RVA = "0x60FA7C0", Offset = "0x60F97C0", VA = "0x60FA7C0")]
	public static decimal ToDecimal(string s)
	{
		return 0m;
	}

	[Token(Token = "0x6000B4E")]
	[Address(RVA = "0x60FA820", Offset = "0x60F9820", VA = "0x60FA820")]
	internal static Exception TryToDecimal(string s, out decimal result)
	{
		return null;
	}

	[Token(Token = "0x6000B4F")]
	[Address(RVA = "0x60FA9B0", Offset = "0x60F99B0", VA = "0x60FA9B0")]
	internal static decimal ToInteger(string s)
	{
		return 0m;
	}

	[Token(Token = "0x6000B50")]
	[Address(RVA = "0x60FAA10", Offset = "0x60F9A10", VA = "0x60FAA10")]
	internal static Exception TryToInteger(string s, out decimal result)
	{
		return null;
	}

	[Token(Token = "0x6000B51")]
	[Address(RVA = "0x60FABA0", Offset = "0x60F9BA0", VA = "0x60FABA0")]
	[CLSCompliant(false)]
	public static sbyte ToSByte(string s)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000B52")]
	[Address(RVA = "0x60FABC0", Offset = "0x60F9BC0", VA = "0x60FABC0")]
	internal static Exception TryToSByte(string s, out sbyte result)
	{
		return null;
	}

	[Token(Token = "0x6000B53")]
	[Address(RVA = "0x60FAD20", Offset = "0x60F9D20", VA = "0x60FAD20")]
	public static short ToInt16(string s)
	{
		return default(short);
	}

	[Token(Token = "0x6000B54")]
	[Address(RVA = "0x60FAD40", Offset = "0x60F9D40", VA = "0x60FAD40")]
	internal static Exception TryToInt16(string s, out short result)
	{
		return null;
	}

	[Token(Token = "0x6000B55")]
	[Address(RVA = "0x60FAEA0", Offset = "0x60F9EA0", VA = "0x60FAEA0")]
	public static int ToInt32(string s)
	{
		return default(int);
	}

	[Token(Token = "0x6000B56")]
	[Address(RVA = "0x60FAEC0", Offset = "0x60F9EC0", VA = "0x60FAEC0")]
	internal static Exception TryToInt32(string s, out int result)
	{
		return null;
	}

	[Token(Token = "0x6000B57")]
	[Address(RVA = "0x60FB020", Offset = "0x60FA020", VA = "0x60FB020")]
	public static long ToInt64(string s)
	{
		return default(long);
	}

	[Token(Token = "0x6000B58")]
	[Address(RVA = "0x60FB040", Offset = "0x60FA040", VA = "0x60FB040")]
	internal static Exception TryToInt64(string s, out long result)
	{
		return null;
	}

	[Token(Token = "0x6000B59")]
	[Address(RVA = "0x60FB1A0", Offset = "0x60FA1A0", VA = "0x60FB1A0")]
	public static byte ToByte(string s)
	{
		return default(byte);
	}

	[Token(Token = "0x6000B5A")]
	[Address(RVA = "0x60FB1C0", Offset = "0x60FA1C0", VA = "0x60FB1C0")]
	internal static Exception TryToByte(string s, out byte result)
	{
		return null;
	}

	[Token(Token = "0x6000B5B")]
	[Address(RVA = "0x60FB320", Offset = "0x60FA320", VA = "0x60FB320")]
	[CLSCompliant(false)]
	public static ushort ToUInt16(string s)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000B5C")]
	[Address(RVA = "0x60FB340", Offset = "0x60FA340", VA = "0x60FB340")]
	internal static Exception TryToUInt16(string s, out ushort result)
	{
		return null;
	}

	[Token(Token = "0x6000B5D")]
	[Address(RVA = "0x60FB4A0", Offset = "0x60FA4A0", VA = "0x60FB4A0")]
	[CLSCompliant(false)]
	public static uint ToUInt32(string s)
	{
		return default(uint);
	}

	[Token(Token = "0x6000B5E")]
	[Address(RVA = "0x60FB4C0", Offset = "0x60FA4C0", VA = "0x60FB4C0")]
	internal static Exception TryToUInt32(string s, out uint result)
	{
		return null;
	}

	[Token(Token = "0x6000B5F")]
	[Address(RVA = "0x60FB620", Offset = "0x60FA620", VA = "0x60FB620")]
	[CLSCompliant(false)]
	public static ulong ToUInt64(string s)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000B60")]
	[Address(RVA = "0x60FB640", Offset = "0x60FA640", VA = "0x60FB640")]
	internal static Exception TryToUInt64(string s, out ulong result)
	{
		return null;
	}

	[Token(Token = "0x6000B61")]
	[Address(RVA = "0x60FB7A0", Offset = "0x60FA7A0", VA = "0x60FB7A0")]
	public static float ToSingle(string s)
	{
		return default(float);
	}

	[Token(Token = "0x6000B62")]
	[Address(RVA = "0x60FB930", Offset = "0x60FA930", VA = "0x60FB930")]
	internal static Exception TryToSingle(string s, out float result)
	{
		return null;
	}

	[Token(Token = "0x6000B63")]
	[Address(RVA = "0x60FBBE0", Offset = "0x60FABE0", VA = "0x60FBBE0")]
	public static double ToDouble(string s)
	{
		return default(double);
	}

	[Token(Token = "0x6000B64")]
	[Address(RVA = "0x60FBD70", Offset = "0x60FAD70", VA = "0x60FBD70")]
	internal static Exception TryToDouble(string s, out double result)
	{
		return null;
	}

	[Token(Token = "0x6000B65")]
	[Address(RVA = "0x60FC030", Offset = "0x60FB030", VA = "0x60FC030")]
	internal static double ToXPathDouble(object o)
	{
		return default(double);
	}

	[Token(Token = "0x6000B66")]
	[Address(RVA = "0x60FC2D0", Offset = "0x60FB2D0", VA = "0x60FC2D0")]
	internal static double XPathRound(double value)
	{
		return default(double);
	}

	[Token(Token = "0x6000B67")]
	[Address(RVA = "0x60FC3E0", Offset = "0x60FB3E0", VA = "0x60FC3E0")]
	public static TimeSpan ToTimeSpan(string s)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000B68")]
	[Address(RVA = "0x60FC570", Offset = "0x60FB570", VA = "0x60FC570")]
	internal static Exception TryToTimeSpan(string s, out TimeSpan result)
	{
		return null;
	}

	[Token(Token = "0x6000B6A")]
	[Address(RVA = "0x60FC6C0", Offset = "0x60FB6C0", VA = "0x60FC6C0")]
	private static void CreateAllDateTimeFormats()
	{
	}

	[Token(Token = "0x6000B6B")]
	[Address(RVA = "0x60FCC10", Offset = "0x60FBC10", VA = "0x60FCC10")]
	[Obsolete("Use XmlConvert.ToDateTime() that takes in XmlDateTimeSerializationMode")]
	public static DateTime ToDateTime(string s)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000B6C")]
	[Address(RVA = "0x60FCD30", Offset = "0x60FBD30", VA = "0x60FCD30")]
	public static DateTime ToDateTime(string s, string[] formats)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000B6D")]
	[Address(RVA = "0x60FCDC0", Offset = "0x60FBDC0", VA = "0x60FCDC0")]
	public static DateTime ToDateTime(string s, XmlDateTimeSerializationMode dateTimeOption)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000B6E")]
	[Address(RVA = "0x60FCFE0", Offset = "0x60FBFE0", VA = "0x60FCFE0")]
	public static DateTimeOffset ToDateTimeOffset(string s)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x6000B6F")]
	[Address(RVA = "0x60FD0A0", Offset = "0x60FC0A0", VA = "0x60FD0A0")]
	public static Guid ToGuid(string s)
	{
		return default(Guid);
	}

	[Token(Token = "0x6000B70")]
	[Address(RVA = "0x60FD0D0", Offset = "0x60FC0D0", VA = "0x60FD0D0")]
	internal static Exception TryToGuid(string s, out Guid result)
	{
		return null;
	}

	[Token(Token = "0x6000B71")]
	[Address(RVA = "0x60F9E00", Offset = "0x60F8E00", VA = "0x60F9E00")]
	private static DateTime SwitchToLocalTime(DateTime value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000B72")]
	[Address(RVA = "0x60F9ED0", Offset = "0x60F8ED0", VA = "0x60F9ED0")]
	private static DateTime SwitchToUtcTime(DateTime value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000B73")]
	[Address(RVA = "0x60FD290", Offset = "0x60FC290", VA = "0x60FD290")]
	internal static Uri ToUri(string s)
	{
		return null;
	}

	[Token(Token = "0x6000B74")]
	[Address(RVA = "0x60FD4C0", Offset = "0x60FC4C0", VA = "0x60FD4C0")]
	internal static Exception TryToUri(string s, out Uri result)
	{
		return null;
	}

	[Token(Token = "0x6000B75")]
	[Address(RVA = "0x60FD770", Offset = "0x60FC770", VA = "0x60FD770")]
	internal static bool StrEqual(char[] chars, int strPos1, int strLen1, string str2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B76")]
	[Address(RVA = "0x60FA280", Offset = "0x60F9280", VA = "0x60FA280")]
	internal static string TrimString(string value)
	{
		return null;
	}

	[Token(Token = "0x6000B77")]
	[Address(RVA = "0x60FD830", Offset = "0x60FC830", VA = "0x60FD830")]
	internal static string TrimStringStart(string value)
	{
		return null;
	}

	[Token(Token = "0x6000B78")]
	[Address(RVA = "0x60FD8B0", Offset = "0x60FC8B0", VA = "0x60FD8B0")]
	internal static string TrimStringEnd(string value)
	{
		return null;
	}

	[Token(Token = "0x6000B79")]
	[Address(RVA = "0x60FD930", Offset = "0x60FC930", VA = "0x60FD930")]
	internal static string[] SplitString(string value)
	{
		return null;
	}

	[Token(Token = "0x6000B7A")]
	[Address(RVA = "0x60F9910", Offset = "0x60F8910", VA = "0x60F9910")]
	internal static bool IsNegativeZero(double value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B7B")]
	[Address(RVA = "0x60FD9C0", Offset = "0x60FC9C0", VA = "0x60FD9C0")]
	private static long DoubleToInt64Bits(double value)
	{
		return default(long);
	}

	[Token(Token = "0x6000B7C")]
	[Address(RVA = "0x60FD9D0", Offset = "0x60FC9D0", VA = "0x60FD9D0")]
	internal static void VerifyCharData(string data, ExceptionType invCharExceptionType, ExceptionType invSurrogateExceptionType)
	{
	}

	[Token(Token = "0x6000B7D")]
	[Address(RVA = "0x60FDBC0", Offset = "0x60FCBC0", VA = "0x60FDBC0")]
	internal static Exception CreateException(string res, ExceptionType exceptionType, int lineNo, int linePos)
	{
		return null;
	}

	[Token(Token = "0x6000B7E")]
	[Address(RVA = "0x60FDFB0", Offset = "0x60FCFB0", VA = "0x60FDFB0")]
	internal static Exception CreateException(string res, string arg, ExceptionType exceptionType, int lineNo, int linePos)
	{
		return null;
	}

	[Token(Token = "0x6000B7F")]
	[Address(RVA = "0x60FE0D0", Offset = "0x60FD0D0", VA = "0x60FE0D0")]
	internal static Exception CreateException(string res, string[] args, ExceptionType exceptionType)
	{
		return null;
	}

	[Token(Token = "0x6000B80")]
	[Address(RVA = "0x60F8D10", Offset = "0x60F7D10", VA = "0x60F8D10")]
	internal static Exception CreateException(string res, string[] args, ExceptionType exceptionType, int lineNo, int linePos)
	{
		return null;
	}

	[Token(Token = "0x6000B81")]
	[Address(RVA = "0x60FE1D0", Offset = "0x60FD1D0", VA = "0x60FE1D0")]
	internal static Exception CreateInvalidSurrogatePairException(char low, char hi)
	{
		return null;
	}

	[Token(Token = "0x6000B82")]
	[Address(RVA = "0x60FE280", Offset = "0x60FD280", VA = "0x60FE280")]
	internal static Exception CreateInvalidSurrogatePairException(char low, char hi, ExceptionType exceptionType)
	{
		return null;
	}

	[Token(Token = "0x6000B83")]
	[Address(RVA = "0x60FDC70", Offset = "0x60FCC70", VA = "0x60FDC70")]
	internal static Exception CreateInvalidSurrogatePairException(char low, char hi, ExceptionType exceptionType, int lineNo, int linePos)
	{
		return null;
	}

	[Token(Token = "0x6000B84")]
	[Address(RVA = "0x60FE2E0", Offset = "0x60FD2E0", VA = "0x60FE2E0")]
	internal static Exception CreateInvalidHighSurrogateCharException(char hi)
	{
		return null;
	}

	[Token(Token = "0x6000B85")]
	[Address(RVA = "0x60FE390", Offset = "0x60FD390", VA = "0x60FE390")]
	internal static Exception CreateInvalidHighSurrogateCharException(char hi, ExceptionType exceptionType)
	{
		return null;
	}

	[Token(Token = "0x6000B86")]
	[Address(RVA = "0x60FE3E0", Offset = "0x60FD3E0", VA = "0x60FE3E0")]
	internal static Exception CreateInvalidHighSurrogateCharException(char hi, ExceptionType exceptionType, int lineNo, int linePos)
	{
		return null;
	}

	[Token(Token = "0x6000B87")]
	[Address(RVA = "0x60FDDE0", Offset = "0x60FCDE0", VA = "0x60FDDE0")]
	internal static Exception CreateInvalidCharException(string data, int invCharPos, ExceptionType exceptionType)
	{
		return null;
	}

	[Token(Token = "0x6000B88")]
	[Address(RVA = "0x60FE4B0", Offset = "0x60FD4B0", VA = "0x60FE4B0")]
	internal static Exception CreateInvalidCharException(char invChar, char nextChar)
	{
		return null;
	}

	[Token(Token = "0x6000B89")]
	[Address(RVA = "0x60FE500", Offset = "0x60FD500", VA = "0x60FE500")]
	internal static Exception CreateInvalidCharException(char invChar, char nextChar, ExceptionType exceptionType)
	{
		return null;
	}

	[Token(Token = "0x6000B8A")]
	[Address(RVA = "0x60F8950", Offset = "0x60F7950", VA = "0x60F8950")]
	internal static Exception CreateInvalidNameCharException(string name, int index, ExceptionType exceptionType)
	{
		return null;
	}

	[Token(Token = "0x6000B8B")]
	[Address(RVA = "0x60FE5E0", Offset = "0x60FD5E0", VA = "0x60FE5E0")]
	internal static ArgumentException CreateInvalidNameArgumentException(string name, string argumentName)
	{
		return null;
	}
}
