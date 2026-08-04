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
		[Address(RVA = "0x47F9C40", Offset = "0x47F9C40", VA = "0x47F9C40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000B25")]
	[Address(RVA = "0x47F4600", Offset = "0x47F4600", VA = "0x47F4600")]
	public static string EncodeName(string name)
	{
		return null;
	}

	[Token(Token = "0x6000B26")]
	[Address(RVA = "0x47F51A0", Offset = "0x47F51A0", VA = "0x47F51A0")]
	public static string EncodeLocalName(string name)
	{
		return null;
	}

	[Token(Token = "0x6000B27")]
	[Address(RVA = "0x47F51F0", Offset = "0x47F51F0", VA = "0x47F51F0")]
	public static string DecodeName(string name)
	{
		return null;
	}

	[Token(Token = "0x6000B28")]
	[Address(RVA = "0x47F4650", Offset = "0x47F4650", VA = "0x47F4650")]
	private static string EncodeName(string name, bool first, bool local)
	{
		return null;
	}

	[Token(Token = "0x6000B29")]
	[Address(RVA = "0x47F5C10", Offset = "0x47F5C10", VA = "0x47F5C10")]
	private static int FromHex(char digit)
	{
		return default(int);
	}

	[Token(Token = "0x6000B2A")]
	[Address(RVA = "0x47F5C30", Offset = "0x47F5C30", VA = "0x47F5C30")]
	internal static byte[] FromBinHexString(string s)
	{
		return null;
	}

	[Token(Token = "0x6000B2B")]
	[Address(RVA = "0x47F5CA0", Offset = "0x47F5CA0", VA = "0x47F5CA0")]
	internal static byte[] FromBinHexString(string s, bool allowOddCount)
	{
		return null;
	}

	[Token(Token = "0x6000B2C")]
	[Address(RVA = "0x47F5D10", Offset = "0x47F5D10", VA = "0x47F5D10")]
	internal static string ToBinHexString(byte[] inArray)
	{
		return null;
	}

	[Token(Token = "0x6000B2D")]
	[Address(RVA = "0x47F5D70", Offset = "0x47F5D70", VA = "0x47F5D70")]
	public static string VerifyName(string name)
	{
		return null;
	}

	[Token(Token = "0x6000B2E")]
	[Address(RVA = "0x47F5FA0", Offset = "0x47F5FA0", VA = "0x47F5FA0")]
	internal static Exception TryVerifyName(string name)
	{
		return null;
	}

	[Token(Token = "0x6000B2F")]
	[Address(RVA = "0x47F6160", Offset = "0x47F6160", VA = "0x47F6160")]
	internal static string VerifyQName(string name, ExceptionType exceptionType)
	{
		return null;
	}

	[Token(Token = "0x6000B30")]
	[Address(RVA = "0x47F6390", Offset = "0x47F6390", VA = "0x47F6390")]
	public static string VerifyNCName(string name)
	{
		return null;
	}

	[Token(Token = "0x6000B31")]
	[Address(RVA = "0x47F6400", Offset = "0x47F6400", VA = "0x47F6400")]
	internal static string VerifyNCName(string name, ExceptionType exceptionType)
	{
		return null;
	}

	[Token(Token = "0x6000B32")]
	[Address(RVA = "0x47F6530", Offset = "0x47F6530", VA = "0x47F6530")]
	internal static Exception TryVerifyNCName(string name)
	{
		return null;
	}

	[Token(Token = "0x6000B33")]
	[Address(RVA = "0x47F6630", Offset = "0x47F6630", VA = "0x47F6630")]
	public static string VerifyTOKEN(string token)
	{
		return null;
	}

	[Token(Token = "0x6000B34")]
	[Address(RVA = "0x47F6740", Offset = "0x47F6740", VA = "0x47F6740")]
	internal static Exception TryVerifyTOKEN(string token)
	{
		return null;
	}

	[Token(Token = "0x6000B35")]
	[Address(RVA = "0x47F6850", Offset = "0x47F6850", VA = "0x47F6850")]
	internal static Exception TryVerifyNMTOKEN(string name)
	{
		return null;
	}

	[Token(Token = "0x6000B36")]
	[Address(RVA = "0x47F6A00", Offset = "0x47F6A00", VA = "0x47F6A00")]
	internal static Exception TryVerifyNormalizedString(string str)
	{
		return null;
	}

	[Token(Token = "0x6000B37")]
	[Address(RVA = "0x47F6AE0", Offset = "0x47F6AE0", VA = "0x47F6AE0")]
	public static string ToString(bool value)
	{
		return null;
	}

	[Token(Token = "0x6000B38")]
	[Address(RVA = "0x47F6B30", Offset = "0x47F6B30", VA = "0x47F6B30")]
	public static string ToString(char value)
	{
		return null;
	}

	[Token(Token = "0x6000B39")]
	[Address(RVA = "0x47F6B70", Offset = "0x47F6B70", VA = "0x47F6B70")]
	public static string ToString(decimal value)
	{
		return null;
	}

	[Token(Token = "0x6000B3A")]
	[Address(RVA = "0x47F6BE0", Offset = "0x47F6BE0", VA = "0x47F6BE0")]
	[CLSCompliant(false)]
	public static string ToString(sbyte value)
	{
		return null;
	}

	[Token(Token = "0x6000B3B")]
	[Address(RVA = "0x47F6C00", Offset = "0x47F6C00", VA = "0x47F6C00")]
	public static string ToString(short value)
	{
		return null;
	}

	[Token(Token = "0x6000B3C")]
	[Address(RVA = "0x47F6C20", Offset = "0x47F6C20", VA = "0x47F6C20")]
	public static string ToString(int value)
	{
		return null;
	}

	[Token(Token = "0x6000B3D")]
	[Address(RVA = "0x47F6C40", Offset = "0x47F6C40", VA = "0x47F6C40")]
	public static string ToString(long value)
	{
		return null;
	}

	[Token(Token = "0x6000B3E")]
	[Address(RVA = "0x47F6C60", Offset = "0x47F6C60", VA = "0x47F6C60")]
	public static string ToString(byte value)
	{
		return null;
	}

	[Token(Token = "0x6000B3F")]
	[Address(RVA = "0x47F6C80", Offset = "0x47F6C80", VA = "0x47F6C80")]
	[CLSCompliant(false)]
	public static string ToString(ushort value)
	{
		return null;
	}

	[Token(Token = "0x6000B40")]
	[Address(RVA = "0x47F6CA0", Offset = "0x47F6CA0", VA = "0x47F6CA0")]
	[CLSCompliant(false)]
	public static string ToString(uint value)
	{
		return null;
	}

	[Token(Token = "0x6000B41")]
	[Address(RVA = "0x47F6CC0", Offset = "0x47F6CC0", VA = "0x47F6CC0")]
	[CLSCompliant(false)]
	public static string ToString(ulong value)
	{
		return null;
	}

	[Token(Token = "0x6000B42")]
	[Address(RVA = "0x47F6CE0", Offset = "0x47F6CE0", VA = "0x47F6CE0")]
	public static string ToString(float value)
	{
		return null;
	}

	[Token(Token = "0x6000B43")]
	[Address(RVA = "0x47F6EE0", Offset = "0x47F6EE0", VA = "0x47F6EE0")]
	public static string ToString(double value)
	{
		return null;
	}

	[Token(Token = "0x6000B44")]
	[Address(RVA = "0x47F7060", Offset = "0x47F7060", VA = "0x47F7060")]
	public static string ToString(TimeSpan value)
	{
		return null;
	}

	[Token(Token = "0x6000B45")]
	[Address(RVA = "0x47F70B0", Offset = "0x47F70B0", VA = "0x47F70B0")]
	public static string ToString(DateTime value, string format)
	{
		return null;
	}

	[Token(Token = "0x6000B46")]
	[Address(RVA = "0x47F7140", Offset = "0x47F7140", VA = "0x47F7140")]
	public static string ToString(DateTime value, XmlDateTimeSerializationMode dateTimeOption)
	{
		return null;
	}

	[Token(Token = "0x6000B47")]
	[Address(RVA = "0x47F7510", Offset = "0x47F7510", VA = "0x47F7510")]
	public static string ToString(DateTimeOffset value)
	{
		return null;
	}

	[Token(Token = "0x6000B48")]
	[Address(RVA = "0x47F7580", Offset = "0x47F7580", VA = "0x47F7580")]
	public static string ToString(Guid value)
	{
		return null;
	}

	[Token(Token = "0x6000B49")]
	[Address(RVA = "0x47F75A0", Offset = "0x47F75A0", VA = "0x47F75A0")]
	public static bool ToBoolean(string s)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B4A")]
	[Address(RVA = "0x47F7870", Offset = "0x47F7870", VA = "0x47F7870")]
	internal static Exception TryToBoolean(string s, out bool result)
	{
		return null;
	}

	[Token(Token = "0x6000B4B")]
	[Address(RVA = "0x47F7B20", Offset = "0x47F7B20", VA = "0x47F7B20")]
	public static char ToChar(string s)
	{
		return default(char);
	}

	[Token(Token = "0x6000B4C")]
	[Address(RVA = "0x47F7BC0", Offset = "0x47F7BC0", VA = "0x47F7BC0")]
	internal static Exception TryToChar(string s, out char result)
	{
		return null;
	}

	[Token(Token = "0x6000B4D")]
	[Address(RVA = "0x47F7D40", Offset = "0x47F7D40", VA = "0x47F7D40")]
	public static decimal ToDecimal(string s)
	{
		return default(decimal);
	}

	[Token(Token = "0x6000B4E")]
	[Address(RVA = "0x47F7DA0", Offset = "0x47F7DA0", VA = "0x47F7DA0")]
	internal static Exception TryToDecimal(string s, out decimal result)
	{
		return null;
	}

	[Token(Token = "0x6000B4F")]
	[Address(RVA = "0x47F7F40", Offset = "0x47F7F40", VA = "0x47F7F40")]
	internal static decimal ToInteger(string s)
	{
		return default(decimal);
	}

	[Token(Token = "0x6000B50")]
	[Address(RVA = "0x47F7FA0", Offset = "0x47F7FA0", VA = "0x47F7FA0")]
	internal static Exception TryToInteger(string s, out decimal result)
	{
		return null;
	}

	[Token(Token = "0x6000B51")]
	[Address(RVA = "0x47F8140", Offset = "0x47F8140", VA = "0x47F8140")]
	[CLSCompliant(false)]
	public static sbyte ToSByte(string s)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000B52")]
	[Address(RVA = "0x47F8160", Offset = "0x47F8160", VA = "0x47F8160")]
	internal static Exception TryToSByte(string s, out sbyte result)
	{
		return null;
	}

	[Token(Token = "0x6000B53")]
	[Address(RVA = "0x47F82D0", Offset = "0x47F82D0", VA = "0x47F82D0")]
	public static short ToInt16(string s)
	{
		return default(short);
	}

	[Token(Token = "0x6000B54")]
	[Address(RVA = "0x47F82F0", Offset = "0x47F82F0", VA = "0x47F82F0")]
	internal static Exception TryToInt16(string s, out short result)
	{
		return null;
	}

	[Token(Token = "0x6000B55")]
	[Address(RVA = "0x47F8460", Offset = "0x47F8460", VA = "0x47F8460")]
	public static int ToInt32(string s)
	{
		return default(int);
	}

	[Token(Token = "0x6000B56")]
	[Address(RVA = "0x47F8480", Offset = "0x47F8480", VA = "0x47F8480")]
	internal static Exception TryToInt32(string s, out int result)
	{
		return null;
	}

	[Token(Token = "0x6000B57")]
	[Address(RVA = "0x47F85F0", Offset = "0x47F85F0", VA = "0x47F85F0")]
	public static long ToInt64(string s)
	{
		return default(long);
	}

	[Token(Token = "0x6000B58")]
	[Address(RVA = "0x47F8610", Offset = "0x47F8610", VA = "0x47F8610")]
	internal static Exception TryToInt64(string s, out long result)
	{
		return null;
	}

	[Token(Token = "0x6000B59")]
	[Address(RVA = "0x47F8780", Offset = "0x47F8780", VA = "0x47F8780")]
	public static byte ToByte(string s)
	{
		return default(byte);
	}

	[Token(Token = "0x6000B5A")]
	[Address(RVA = "0x47F87A0", Offset = "0x47F87A0", VA = "0x47F87A0")]
	internal static Exception TryToByte(string s, out byte result)
	{
		return null;
	}

	[Token(Token = "0x6000B5B")]
	[Address(RVA = "0x47F8910", Offset = "0x47F8910", VA = "0x47F8910")]
	[CLSCompliant(false)]
	public static ushort ToUInt16(string s)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000B5C")]
	[Address(RVA = "0x47F8930", Offset = "0x47F8930", VA = "0x47F8930")]
	internal static Exception TryToUInt16(string s, out ushort result)
	{
		return null;
	}

	[Token(Token = "0x6000B5D")]
	[Address(RVA = "0x47F8AA0", Offset = "0x47F8AA0", VA = "0x47F8AA0")]
	[CLSCompliant(false)]
	public static uint ToUInt32(string s)
	{
		return default(uint);
	}

	[Token(Token = "0x6000B5E")]
	[Address(RVA = "0x47F8AC0", Offset = "0x47F8AC0", VA = "0x47F8AC0")]
	internal static Exception TryToUInt32(string s, out uint result)
	{
		return null;
	}

	[Token(Token = "0x6000B5F")]
	[Address(RVA = "0x47F8C30", Offset = "0x47F8C30", VA = "0x47F8C30")]
	[CLSCompliant(false)]
	public static ulong ToUInt64(string s)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000B60")]
	[Address(RVA = "0x47F8C50", Offset = "0x47F8C50", VA = "0x47F8C50")]
	internal static Exception TryToUInt64(string s, out ulong result)
	{
		return null;
	}

	[Token(Token = "0x6000B61")]
	[Address(RVA = "0x47F8DC0", Offset = "0x47F8DC0", VA = "0x47F8DC0")]
	public static float ToSingle(string s)
	{
		return default(float);
	}

	[Token(Token = "0x6000B62")]
	[Address(RVA = "0x47F8F50", Offset = "0x47F8F50", VA = "0x47F8F50")]
	internal static Exception TryToSingle(string s, out float result)
	{
		return null;
	}

	[Token(Token = "0x6000B63")]
	[Address(RVA = "0x47F9210", Offset = "0x47F9210", VA = "0x47F9210")]
	public static double ToDouble(string s)
	{
		return default(double);
	}

	[Token(Token = "0x6000B64")]
	[Address(RVA = "0x47F9390", Offset = "0x47F9390", VA = "0x47F9390")]
	internal static Exception TryToDouble(string s, out double result)
	{
		return null;
	}

	[Token(Token = "0x6000B65")]
	[Address(RVA = "0x47F9660", Offset = "0x47F9660", VA = "0x47F9660")]
	internal static double ToXPathDouble(object o)
	{
		return default(double);
	}

	[Token(Token = "0x6000B66")]
	[Address(RVA = "0x47F9900", Offset = "0x47F9900", VA = "0x47F9900")]
	internal static double XPathRound(double value)
	{
		return default(double);
	}

	[Token(Token = "0x6000B67")]
	[Address(RVA = "0x47F9A00", Offset = "0x47F9A00", VA = "0x47F9A00")]
	public static TimeSpan ToTimeSpan(string s)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000B68")]
	[Address(RVA = "0x47F9BA0", Offset = "0x47F9BA0", VA = "0x47F9BA0")]
	internal static Exception TryToTimeSpan(string s, out TimeSpan result)
	{
		return null;
	}

	[Token(Token = "0x6000B6A")]
	[Address(RVA = "0x47F9D00", Offset = "0x47F9D00", VA = "0x47F9D00")]
	private static void CreateAllDateTimeFormats()
	{
	}

	[Token(Token = "0x6000B6B")]
	[Address(RVA = "0x47FA250", Offset = "0x47FA250", VA = "0x47FA250")]
	[Obsolete("Use XmlConvert.ToDateTime() that takes in XmlDateTimeSerializationMode")]
	public static DateTime ToDateTime(string s)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000B6C")]
	[Address(RVA = "0x47FA370", Offset = "0x47FA370", VA = "0x47FA370")]
	public static DateTime ToDateTime(string s, string[] formats)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000B6D")]
	[Address(RVA = "0x47FA400", Offset = "0x47FA400", VA = "0x47FA400")]
	public static DateTime ToDateTime(string s, XmlDateTimeSerializationMode dateTimeOption)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000B6E")]
	[Address(RVA = "0x47FA630", Offset = "0x47FA630", VA = "0x47FA630")]
	public static DateTimeOffset ToDateTimeOffset(string s)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x6000B6F")]
	[Address(RVA = "0x47FA6F0", Offset = "0x47FA6F0", VA = "0x47FA6F0")]
	public static Guid ToGuid(string s)
	{
		return default(Guid);
	}

	[Token(Token = "0x6000B70")]
	[Address(RVA = "0x47FA720", Offset = "0x47FA720", VA = "0x47FA720")]
	internal static Exception TryToGuid(string s, out Guid result)
	{
		return null;
	}

	[Token(Token = "0x6000B71")]
	[Address(RVA = "0x47F7370", Offset = "0x47F7370", VA = "0x47F7370")]
	private static DateTime SwitchToLocalTime(DateTime value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000B72")]
	[Address(RVA = "0x47F7440", Offset = "0x47F7440", VA = "0x47F7440")]
	private static DateTime SwitchToUtcTime(DateTime value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000B73")]
	[Address(RVA = "0x47FA930", Offset = "0x47FA930", VA = "0x47FA930")]
	internal static Uri ToUri(string s)
	{
		return null;
	}

	[Token(Token = "0x6000B74")]
	[Address(RVA = "0x47FAB70", Offset = "0x47FAB70", VA = "0x47FAB70")]
	internal static Exception TryToUri(string s, out Uri result)
	{
		return null;
	}

	[Token(Token = "0x6000B75")]
	[Address(RVA = "0x47FAE20", Offset = "0x47FAE20", VA = "0x47FAE20")]
	internal static bool StrEqual(char[] chars, int strPos1, int strLen1, string str2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B76")]
	[Address(RVA = "0x47F77F0", Offset = "0x47F77F0", VA = "0x47F77F0")]
	internal static string TrimString(string value)
	{
		return null;
	}

	[Token(Token = "0x6000B77")]
	[Address(RVA = "0x47FAEE0", Offset = "0x47FAEE0", VA = "0x47FAEE0")]
	internal static string TrimStringStart(string value)
	{
		return null;
	}

	[Token(Token = "0x6000B78")]
	[Address(RVA = "0x47FAF60", Offset = "0x47FAF60", VA = "0x47FAF60")]
	internal static string TrimStringEnd(string value)
	{
		return null;
	}

	[Token(Token = "0x6000B79")]
	[Address(RVA = "0x47FAFE0", Offset = "0x47FAFE0", VA = "0x47FAFE0")]
	internal static string[] SplitString(string value)
	{
		return null;
	}

	[Token(Token = "0x6000B7A")]
	[Address(RVA = "0x47F6E70", Offset = "0x47F6E70", VA = "0x47F6E70")]
	internal static bool IsNegativeZero(double value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B7B")]
	[Address(RVA = "0x47FB070", Offset = "0x47FB070", VA = "0x47FB070")]
	private static long DoubleToInt64Bits(double value)
	{
		return default(long);
	}

	[Token(Token = "0x6000B7C")]
	[Address(RVA = "0x47FB080", Offset = "0x47FB080", VA = "0x47FB080")]
	internal static void VerifyCharData(string data, ExceptionType invCharExceptionType, ExceptionType invSurrogateExceptionType)
	{
	}

	[Token(Token = "0x6000B7D")]
	[Address(RVA = "0x47FB270", Offset = "0x47FB270", VA = "0x47FB270")]
	internal static Exception CreateException(string res, ExceptionType exceptionType, int lineNo, int linePos)
	{
		return null;
	}

	[Token(Token = "0x6000B7E")]
	[Address(RVA = "0x47FB660", Offset = "0x47FB660", VA = "0x47FB660")]
	internal static Exception CreateException(string res, string arg, ExceptionType exceptionType, int lineNo, int linePos)
	{
		return null;
	}

	[Token(Token = "0x6000B7F")]
	[Address(RVA = "0x47FB780", Offset = "0x47FB780", VA = "0x47FB780")]
	internal static Exception CreateException(string res, string[] args, ExceptionType exceptionType)
	{
		return null;
	}

	[Token(Token = "0x6000B80")]
	[Address(RVA = "0x47F6270", Offset = "0x47F6270", VA = "0x47F6270")]
	internal static Exception CreateException(string res, string[] args, ExceptionType exceptionType, int lineNo, int linePos)
	{
		return null;
	}

	[Token(Token = "0x6000B81")]
	[Address(RVA = "0x47FB880", Offset = "0x47FB880", VA = "0x47FB880")]
	internal static Exception CreateInvalidSurrogatePairException(char low, char hi)
	{
		return null;
	}

	[Token(Token = "0x6000B82")]
	[Address(RVA = "0x47FB930", Offset = "0x47FB930", VA = "0x47FB930")]
	internal static Exception CreateInvalidSurrogatePairException(char low, char hi, ExceptionType exceptionType)
	{
		return null;
	}

	[Token(Token = "0x6000B83")]
	[Address(RVA = "0x47FB320", Offset = "0x47FB320", VA = "0x47FB320")]
	internal static Exception CreateInvalidSurrogatePairException(char low, char hi, ExceptionType exceptionType, int lineNo, int linePos)
	{
		return null;
	}

	[Token(Token = "0x6000B84")]
	[Address(RVA = "0x47FB990", Offset = "0x47FB990", VA = "0x47FB990")]
	internal static Exception CreateInvalidHighSurrogateCharException(char hi)
	{
		return null;
	}

	[Token(Token = "0x6000B85")]
	[Address(RVA = "0x47FBA40", Offset = "0x47FBA40", VA = "0x47FBA40")]
	internal static Exception CreateInvalidHighSurrogateCharException(char hi, ExceptionType exceptionType)
	{
		return null;
	}

	[Token(Token = "0x6000B86")]
	[Address(RVA = "0x47FBA90", Offset = "0x47FBA90", VA = "0x47FBA90")]
	internal static Exception CreateInvalidHighSurrogateCharException(char hi, ExceptionType exceptionType, int lineNo, int linePos)
	{
		return null;
	}

	[Token(Token = "0x6000B87")]
	[Address(RVA = "0x47FB490", Offset = "0x47FB490", VA = "0x47FB490")]
	internal static Exception CreateInvalidCharException(string data, int invCharPos, ExceptionType exceptionType)
	{
		return null;
	}

	[Token(Token = "0x6000B88")]
	[Address(RVA = "0x47FBB60", Offset = "0x47FBB60", VA = "0x47FBB60")]
	internal static Exception CreateInvalidCharException(char invChar, char nextChar)
	{
		return null;
	}

	[Token(Token = "0x6000B89")]
	[Address(RVA = "0x47FBBB0", Offset = "0x47FBBB0", VA = "0x47FBBB0")]
	internal static Exception CreateInvalidCharException(char invChar, char nextChar, ExceptionType exceptionType)
	{
		return null;
	}

	[Token(Token = "0x6000B8A")]
	[Address(RVA = "0x47F5EB0", Offset = "0x47F5EB0", VA = "0x47F5EB0")]
	internal static Exception CreateInvalidNameCharException(string name, int index, ExceptionType exceptionType)
	{
		return null;
	}

	[Token(Token = "0x6000B8B")]
	[Address(RVA = "0x47FBC90", Offset = "0x47FBC90", VA = "0x47FBC90")]
	internal static ArgumentException CreateInvalidNameArgumentException(string name, string argumentName)
	{
		return null;
	}
}
