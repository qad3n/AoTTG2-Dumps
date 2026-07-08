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
		[Address(RVA = "0x44BC4E0", Offset = "0x44BC4E0", VA = "0x44BC4E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000B25")]
	[Address(RVA = "0x44B6EA0", Offset = "0x44B6EA0", VA = "0x44B6EA0")]
	public static string EncodeName(string name)
	{
		return null;
	}

	[Token(Token = "0x6000B26")]
	[Address(RVA = "0x44B7A40", Offset = "0x44B7A40", VA = "0x44B7A40")]
	public static string EncodeLocalName(string name)
	{
		return null;
	}

	[Token(Token = "0x6000B27")]
	[Address(RVA = "0x44B7A90", Offset = "0x44B7A90", VA = "0x44B7A90")]
	public static string DecodeName(string name)
	{
		return null;
	}

	[Token(Token = "0x6000B28")]
	[Address(RVA = "0x44B6EF0", Offset = "0x44B6EF0", VA = "0x44B6EF0")]
	private static string EncodeName(string name, bool first, bool local)
	{
		return null;
	}

	[Token(Token = "0x6000B29")]
	[Address(RVA = "0x44B84B0", Offset = "0x44B84B0", VA = "0x44B84B0")]
	private static int FromHex(char digit)
	{
		return default(int);
	}

	[Token(Token = "0x6000B2A")]
	[Address(RVA = "0x44B84D0", Offset = "0x44B84D0", VA = "0x44B84D0")]
	internal static byte[] FromBinHexString(string s)
	{
		return null;
	}

	[Token(Token = "0x6000B2B")]
	[Address(RVA = "0x44B8540", Offset = "0x44B8540", VA = "0x44B8540")]
	internal static byte[] FromBinHexString(string s, bool allowOddCount)
	{
		return null;
	}

	[Token(Token = "0x6000B2C")]
	[Address(RVA = "0x44B85B0", Offset = "0x44B85B0", VA = "0x44B85B0")]
	internal static string ToBinHexString(byte[] inArray)
	{
		return null;
	}

	[Token(Token = "0x6000B2D")]
	[Address(RVA = "0x44B8610", Offset = "0x44B8610", VA = "0x44B8610")]
	public static string VerifyName(string name)
	{
		return null;
	}

	[Token(Token = "0x6000B2E")]
	[Address(RVA = "0x44B8840", Offset = "0x44B8840", VA = "0x44B8840")]
	internal static Exception TryVerifyName(string name)
	{
		return null;
	}

	[Token(Token = "0x6000B2F")]
	[Address(RVA = "0x44B8A00", Offset = "0x44B8A00", VA = "0x44B8A00")]
	internal static string VerifyQName(string name, ExceptionType exceptionType)
	{
		return null;
	}

	[Token(Token = "0x6000B30")]
	[Address(RVA = "0x44B8C30", Offset = "0x44B8C30", VA = "0x44B8C30")]
	public static string VerifyNCName(string name)
	{
		return null;
	}

	[Token(Token = "0x6000B31")]
	[Address(RVA = "0x44B8CA0", Offset = "0x44B8CA0", VA = "0x44B8CA0")]
	internal static string VerifyNCName(string name, ExceptionType exceptionType)
	{
		return null;
	}

	[Token(Token = "0x6000B32")]
	[Address(RVA = "0x44B8DD0", Offset = "0x44B8DD0", VA = "0x44B8DD0")]
	internal static Exception TryVerifyNCName(string name)
	{
		return null;
	}

	[Token(Token = "0x6000B33")]
	[Address(RVA = "0x44B8ED0", Offset = "0x44B8ED0", VA = "0x44B8ED0")]
	public static string VerifyTOKEN(string token)
	{
		return null;
	}

	[Token(Token = "0x6000B34")]
	[Address(RVA = "0x44B8FE0", Offset = "0x44B8FE0", VA = "0x44B8FE0")]
	internal static Exception TryVerifyTOKEN(string token)
	{
		return null;
	}

	[Token(Token = "0x6000B35")]
	[Address(RVA = "0x44B90F0", Offset = "0x44B90F0", VA = "0x44B90F0")]
	internal static Exception TryVerifyNMTOKEN(string name)
	{
		return null;
	}

	[Token(Token = "0x6000B36")]
	[Address(RVA = "0x44B92A0", Offset = "0x44B92A0", VA = "0x44B92A0")]
	internal static Exception TryVerifyNormalizedString(string str)
	{
		return null;
	}

	[Token(Token = "0x6000B37")]
	[Address(RVA = "0x44B9380", Offset = "0x44B9380", VA = "0x44B9380")]
	public static string ToString(bool value)
	{
		return null;
	}

	[Token(Token = "0x6000B38")]
	[Address(RVA = "0x44B93D0", Offset = "0x44B93D0", VA = "0x44B93D0")]
	public static string ToString(char value)
	{
		return null;
	}

	[Token(Token = "0x6000B39")]
	[Address(RVA = "0x44B9410", Offset = "0x44B9410", VA = "0x44B9410")]
	public static string ToString(decimal value)
	{
		return null;
	}

	[Token(Token = "0x6000B3A")]
	[Address(RVA = "0x44B9480", Offset = "0x44B9480", VA = "0x44B9480")]
	[CLSCompliant(false)]
	public static string ToString(sbyte value)
	{
		return null;
	}

	[Token(Token = "0x6000B3B")]
	[Address(RVA = "0x44B94A0", Offset = "0x44B94A0", VA = "0x44B94A0")]
	public static string ToString(short value)
	{
		return null;
	}

	[Token(Token = "0x6000B3C")]
	[Address(RVA = "0x44B94C0", Offset = "0x44B94C0", VA = "0x44B94C0")]
	public static string ToString(int value)
	{
		return null;
	}

	[Token(Token = "0x6000B3D")]
	[Address(RVA = "0x44B94E0", Offset = "0x44B94E0", VA = "0x44B94E0")]
	public static string ToString(long value)
	{
		return null;
	}

	[Token(Token = "0x6000B3E")]
	[Address(RVA = "0x44B9500", Offset = "0x44B9500", VA = "0x44B9500")]
	public static string ToString(byte value)
	{
		return null;
	}

	[Token(Token = "0x6000B3F")]
	[Address(RVA = "0x44B9520", Offset = "0x44B9520", VA = "0x44B9520")]
	[CLSCompliant(false)]
	public static string ToString(ushort value)
	{
		return null;
	}

	[Token(Token = "0x6000B40")]
	[Address(RVA = "0x44B9540", Offset = "0x44B9540", VA = "0x44B9540")]
	[CLSCompliant(false)]
	public static string ToString(uint value)
	{
		return null;
	}

	[Token(Token = "0x6000B41")]
	[Address(RVA = "0x44B9560", Offset = "0x44B9560", VA = "0x44B9560")]
	[CLSCompliant(false)]
	public static string ToString(ulong value)
	{
		return null;
	}

	[Token(Token = "0x6000B42")]
	[Address(RVA = "0x44B9580", Offset = "0x44B9580", VA = "0x44B9580")]
	public static string ToString(float value)
	{
		return null;
	}

	[Token(Token = "0x6000B43")]
	[Address(RVA = "0x44B9780", Offset = "0x44B9780", VA = "0x44B9780")]
	public static string ToString(double value)
	{
		return null;
	}

	[Token(Token = "0x6000B44")]
	[Address(RVA = "0x44B9900", Offset = "0x44B9900", VA = "0x44B9900")]
	public static string ToString(TimeSpan value)
	{
		return null;
	}

	[Token(Token = "0x6000B45")]
	[Address(RVA = "0x44B9950", Offset = "0x44B9950", VA = "0x44B9950")]
	public static string ToString(DateTime value, string format)
	{
		return null;
	}

	[Token(Token = "0x6000B46")]
	[Address(RVA = "0x44B99E0", Offset = "0x44B99E0", VA = "0x44B99E0")]
	public static string ToString(DateTime value, XmlDateTimeSerializationMode dateTimeOption)
	{
		return null;
	}

	[Token(Token = "0x6000B47")]
	[Address(RVA = "0x44B9DB0", Offset = "0x44B9DB0", VA = "0x44B9DB0")]
	public static string ToString(DateTimeOffset value)
	{
		return null;
	}

	[Token(Token = "0x6000B48")]
	[Address(RVA = "0x44B9E20", Offset = "0x44B9E20", VA = "0x44B9E20")]
	public static string ToString(Guid value)
	{
		return null;
	}

	[Token(Token = "0x6000B49")]
	[Address(RVA = "0x44B9E40", Offset = "0x44B9E40", VA = "0x44B9E40")]
	public static bool ToBoolean(string s)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B4A")]
	[Address(RVA = "0x44BA110", Offset = "0x44BA110", VA = "0x44BA110")]
	internal static Exception TryToBoolean(string s, out bool result)
	{
		return null;
	}

	[Token(Token = "0x6000B4B")]
	[Address(RVA = "0x44BA3C0", Offset = "0x44BA3C0", VA = "0x44BA3C0")]
	public static char ToChar(string s)
	{
		return default(char);
	}

	[Token(Token = "0x6000B4C")]
	[Address(RVA = "0x44BA460", Offset = "0x44BA460", VA = "0x44BA460")]
	internal static Exception TryToChar(string s, out char result)
	{
		return null;
	}

	[Token(Token = "0x6000B4D")]
	[Address(RVA = "0x44BA5E0", Offset = "0x44BA5E0", VA = "0x44BA5E0")]
	public static decimal ToDecimal(string s)
	{
		return default(decimal);
	}

	[Token(Token = "0x6000B4E")]
	[Address(RVA = "0x44BA640", Offset = "0x44BA640", VA = "0x44BA640")]
	internal static Exception TryToDecimal(string s, out decimal result)
	{
		return null;
	}

	[Token(Token = "0x6000B4F")]
	[Address(RVA = "0x44BA7E0", Offset = "0x44BA7E0", VA = "0x44BA7E0")]
	internal static decimal ToInteger(string s)
	{
		return default(decimal);
	}

	[Token(Token = "0x6000B50")]
	[Address(RVA = "0x44BA840", Offset = "0x44BA840", VA = "0x44BA840")]
	internal static Exception TryToInteger(string s, out decimal result)
	{
		return null;
	}

	[Token(Token = "0x6000B51")]
	[Address(RVA = "0x44BA9E0", Offset = "0x44BA9E0", VA = "0x44BA9E0")]
	[CLSCompliant(false)]
	public static sbyte ToSByte(string s)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000B52")]
	[Address(RVA = "0x44BAA00", Offset = "0x44BAA00", VA = "0x44BAA00")]
	internal static Exception TryToSByte(string s, out sbyte result)
	{
		return null;
	}

	[Token(Token = "0x6000B53")]
	[Address(RVA = "0x44BAB70", Offset = "0x44BAB70", VA = "0x44BAB70")]
	public static short ToInt16(string s)
	{
		return default(short);
	}

	[Token(Token = "0x6000B54")]
	[Address(RVA = "0x44BAB90", Offset = "0x44BAB90", VA = "0x44BAB90")]
	internal static Exception TryToInt16(string s, out short result)
	{
		return null;
	}

	[Token(Token = "0x6000B55")]
	[Address(RVA = "0x44BAD00", Offset = "0x44BAD00", VA = "0x44BAD00")]
	public static int ToInt32(string s)
	{
		return default(int);
	}

	[Token(Token = "0x6000B56")]
	[Address(RVA = "0x44BAD20", Offset = "0x44BAD20", VA = "0x44BAD20")]
	internal static Exception TryToInt32(string s, out int result)
	{
		return null;
	}

	[Token(Token = "0x6000B57")]
	[Address(RVA = "0x44BAE90", Offset = "0x44BAE90", VA = "0x44BAE90")]
	public static long ToInt64(string s)
	{
		return default(long);
	}

	[Token(Token = "0x6000B58")]
	[Address(RVA = "0x44BAEB0", Offset = "0x44BAEB0", VA = "0x44BAEB0")]
	internal static Exception TryToInt64(string s, out long result)
	{
		return null;
	}

	[Token(Token = "0x6000B59")]
	[Address(RVA = "0x44BB020", Offset = "0x44BB020", VA = "0x44BB020")]
	public static byte ToByte(string s)
	{
		return default(byte);
	}

	[Token(Token = "0x6000B5A")]
	[Address(RVA = "0x44BB040", Offset = "0x44BB040", VA = "0x44BB040")]
	internal static Exception TryToByte(string s, out byte result)
	{
		return null;
	}

	[Token(Token = "0x6000B5B")]
	[Address(RVA = "0x44BB1B0", Offset = "0x44BB1B0", VA = "0x44BB1B0")]
	[CLSCompliant(false)]
	public static ushort ToUInt16(string s)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000B5C")]
	[Address(RVA = "0x44BB1D0", Offset = "0x44BB1D0", VA = "0x44BB1D0")]
	internal static Exception TryToUInt16(string s, out ushort result)
	{
		return null;
	}

	[Token(Token = "0x6000B5D")]
	[Address(RVA = "0x44BB340", Offset = "0x44BB340", VA = "0x44BB340")]
	[CLSCompliant(false)]
	public static uint ToUInt32(string s)
	{
		return default(uint);
	}

	[Token(Token = "0x6000B5E")]
	[Address(RVA = "0x44BB360", Offset = "0x44BB360", VA = "0x44BB360")]
	internal static Exception TryToUInt32(string s, out uint result)
	{
		return null;
	}

	[Token(Token = "0x6000B5F")]
	[Address(RVA = "0x44BB4D0", Offset = "0x44BB4D0", VA = "0x44BB4D0")]
	[CLSCompliant(false)]
	public static ulong ToUInt64(string s)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000B60")]
	[Address(RVA = "0x44BB4F0", Offset = "0x44BB4F0", VA = "0x44BB4F0")]
	internal static Exception TryToUInt64(string s, out ulong result)
	{
		return null;
	}

	[Token(Token = "0x6000B61")]
	[Address(RVA = "0x44BB660", Offset = "0x44BB660", VA = "0x44BB660")]
	public static float ToSingle(string s)
	{
		return default(float);
	}

	[Token(Token = "0x6000B62")]
	[Address(RVA = "0x44BB7F0", Offset = "0x44BB7F0", VA = "0x44BB7F0")]
	internal static Exception TryToSingle(string s, out float result)
	{
		return null;
	}

	[Token(Token = "0x6000B63")]
	[Address(RVA = "0x44BBAB0", Offset = "0x44BBAB0", VA = "0x44BBAB0")]
	public static double ToDouble(string s)
	{
		return default(double);
	}

	[Token(Token = "0x6000B64")]
	[Address(RVA = "0x44BBC30", Offset = "0x44BBC30", VA = "0x44BBC30")]
	internal static Exception TryToDouble(string s, out double result)
	{
		return null;
	}

	[Token(Token = "0x6000B65")]
	[Address(RVA = "0x44BBF00", Offset = "0x44BBF00", VA = "0x44BBF00")]
	internal static double ToXPathDouble(object o)
	{
		return default(double);
	}

	[Token(Token = "0x6000B66")]
	[Address(RVA = "0x44BC1A0", Offset = "0x44BC1A0", VA = "0x44BC1A0")]
	internal static double XPathRound(double value)
	{
		return default(double);
	}

	[Token(Token = "0x6000B67")]
	[Address(RVA = "0x44BC2A0", Offset = "0x44BC2A0", VA = "0x44BC2A0")]
	public static TimeSpan ToTimeSpan(string s)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000B68")]
	[Address(RVA = "0x44BC440", Offset = "0x44BC440", VA = "0x44BC440")]
	internal static Exception TryToTimeSpan(string s, out TimeSpan result)
	{
		return null;
	}

	[Token(Token = "0x6000B6A")]
	[Address(RVA = "0x44BC5A0", Offset = "0x44BC5A0", VA = "0x44BC5A0")]
	private static void CreateAllDateTimeFormats()
	{
	}

	[Token(Token = "0x6000B6B")]
	[Address(RVA = "0x44BCAF0", Offset = "0x44BCAF0", VA = "0x44BCAF0")]
	[Obsolete("Use XmlConvert.ToDateTime() that takes in XmlDateTimeSerializationMode")]
	public static DateTime ToDateTime(string s)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000B6C")]
	[Address(RVA = "0x44BCC10", Offset = "0x44BCC10", VA = "0x44BCC10")]
	public static DateTime ToDateTime(string s, string[] formats)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000B6D")]
	[Address(RVA = "0x44BCCA0", Offset = "0x44BCCA0", VA = "0x44BCCA0")]
	public static DateTime ToDateTime(string s, XmlDateTimeSerializationMode dateTimeOption)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000B6E")]
	[Address(RVA = "0x44BCED0", Offset = "0x44BCED0", VA = "0x44BCED0")]
	public static DateTimeOffset ToDateTimeOffset(string s)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x6000B6F")]
	[Address(RVA = "0x44BCF90", Offset = "0x44BCF90", VA = "0x44BCF90")]
	public static Guid ToGuid(string s)
	{
		return default(Guid);
	}

	[Token(Token = "0x6000B70")]
	[Address(RVA = "0x44BCFC0", Offset = "0x44BCFC0", VA = "0x44BCFC0")]
	internal static Exception TryToGuid(string s, out Guid result)
	{
		return null;
	}

	[Token(Token = "0x6000B71")]
	[Address(RVA = "0x44B9C10", Offset = "0x44B9C10", VA = "0x44B9C10")]
	private static DateTime SwitchToLocalTime(DateTime value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000B72")]
	[Address(RVA = "0x44B9CE0", Offset = "0x44B9CE0", VA = "0x44B9CE0")]
	private static DateTime SwitchToUtcTime(DateTime value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000B73")]
	[Address(RVA = "0x44BD1D0", Offset = "0x44BD1D0", VA = "0x44BD1D0")]
	internal static Uri ToUri(string s)
	{
		return null;
	}

	[Token(Token = "0x6000B74")]
	[Address(RVA = "0x44BD410", Offset = "0x44BD410", VA = "0x44BD410")]
	internal static Exception TryToUri(string s, out Uri result)
	{
		return null;
	}

	[Token(Token = "0x6000B75")]
	[Address(RVA = "0x44BD6C0", Offset = "0x44BD6C0", VA = "0x44BD6C0")]
	internal static bool StrEqual(char[] chars, int strPos1, int strLen1, string str2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B76")]
	[Address(RVA = "0x44BA090", Offset = "0x44BA090", VA = "0x44BA090")]
	internal static string TrimString(string value)
	{
		return null;
	}

	[Token(Token = "0x6000B77")]
	[Address(RVA = "0x44BD780", Offset = "0x44BD780", VA = "0x44BD780")]
	internal static string TrimStringStart(string value)
	{
		return null;
	}

	[Token(Token = "0x6000B78")]
	[Address(RVA = "0x44BD800", Offset = "0x44BD800", VA = "0x44BD800")]
	internal static string TrimStringEnd(string value)
	{
		return null;
	}

	[Token(Token = "0x6000B79")]
	[Address(RVA = "0x44BD880", Offset = "0x44BD880", VA = "0x44BD880")]
	internal static string[] SplitString(string value)
	{
		return null;
	}

	[Token(Token = "0x6000B7A")]
	[Address(RVA = "0x44B9710", Offset = "0x44B9710", VA = "0x44B9710")]
	internal static bool IsNegativeZero(double value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B7B")]
	[Address(RVA = "0x44BD910", Offset = "0x44BD910", VA = "0x44BD910")]
	private static long DoubleToInt64Bits(double value)
	{
		return default(long);
	}

	[Token(Token = "0x6000B7C")]
	[Address(RVA = "0x44BD920", Offset = "0x44BD920", VA = "0x44BD920")]
	internal static void VerifyCharData(string data, ExceptionType invCharExceptionType, ExceptionType invSurrogateExceptionType)
	{
	}

	[Token(Token = "0x6000B7D")]
	[Address(RVA = "0x44BDB10", Offset = "0x44BDB10", VA = "0x44BDB10")]
	internal static Exception CreateException(string res, ExceptionType exceptionType, int lineNo, int linePos)
	{
		return null;
	}

	[Token(Token = "0x6000B7E")]
	[Address(RVA = "0x44BDF00", Offset = "0x44BDF00", VA = "0x44BDF00")]
	internal static Exception CreateException(string res, string arg, ExceptionType exceptionType, int lineNo, int linePos)
	{
		return null;
	}

	[Token(Token = "0x6000B7F")]
	[Address(RVA = "0x44BE020", Offset = "0x44BE020", VA = "0x44BE020")]
	internal static Exception CreateException(string res, string[] args, ExceptionType exceptionType)
	{
		return null;
	}

	[Token(Token = "0x6000B80")]
	[Address(RVA = "0x44B8B10", Offset = "0x44B8B10", VA = "0x44B8B10")]
	internal static Exception CreateException(string res, string[] args, ExceptionType exceptionType, int lineNo, int linePos)
	{
		return null;
	}

	[Token(Token = "0x6000B81")]
	[Address(RVA = "0x44BE120", Offset = "0x44BE120", VA = "0x44BE120")]
	internal static Exception CreateInvalidSurrogatePairException(char low, char hi)
	{
		return null;
	}

	[Token(Token = "0x6000B82")]
	[Address(RVA = "0x44BE1D0", Offset = "0x44BE1D0", VA = "0x44BE1D0")]
	internal static Exception CreateInvalidSurrogatePairException(char low, char hi, ExceptionType exceptionType)
	{
		return null;
	}

	[Token(Token = "0x6000B83")]
	[Address(RVA = "0x44BDBC0", Offset = "0x44BDBC0", VA = "0x44BDBC0")]
	internal static Exception CreateInvalidSurrogatePairException(char low, char hi, ExceptionType exceptionType, int lineNo, int linePos)
	{
		return null;
	}

	[Token(Token = "0x6000B84")]
	[Address(RVA = "0x44BE230", Offset = "0x44BE230", VA = "0x44BE230")]
	internal static Exception CreateInvalidHighSurrogateCharException(char hi)
	{
		return null;
	}

	[Token(Token = "0x6000B85")]
	[Address(RVA = "0x44BE2E0", Offset = "0x44BE2E0", VA = "0x44BE2E0")]
	internal static Exception CreateInvalidHighSurrogateCharException(char hi, ExceptionType exceptionType)
	{
		return null;
	}

	[Token(Token = "0x6000B86")]
	[Address(RVA = "0x44BE330", Offset = "0x44BE330", VA = "0x44BE330")]
	internal static Exception CreateInvalidHighSurrogateCharException(char hi, ExceptionType exceptionType, int lineNo, int linePos)
	{
		return null;
	}

	[Token(Token = "0x6000B87")]
	[Address(RVA = "0x44BDD30", Offset = "0x44BDD30", VA = "0x44BDD30")]
	internal static Exception CreateInvalidCharException(string data, int invCharPos, ExceptionType exceptionType)
	{
		return null;
	}

	[Token(Token = "0x6000B88")]
	[Address(RVA = "0x44BE400", Offset = "0x44BE400", VA = "0x44BE400")]
	internal static Exception CreateInvalidCharException(char invChar, char nextChar)
	{
		return null;
	}

	[Token(Token = "0x6000B89")]
	[Address(RVA = "0x44BE450", Offset = "0x44BE450", VA = "0x44BE450")]
	internal static Exception CreateInvalidCharException(char invChar, char nextChar, ExceptionType exceptionType)
	{
		return null;
	}

	[Token(Token = "0x6000B8A")]
	[Address(RVA = "0x44B8750", Offset = "0x44B8750", VA = "0x44B8750")]
	internal static Exception CreateInvalidNameCharException(string name, int index, ExceptionType exceptionType)
	{
		return null;
	}

	[Token(Token = "0x6000B8B")]
	[Address(RVA = "0x44BE530", Offset = "0x44BE530", VA = "0x44BE530")]
	internal static ArgumentException CreateInvalidNameArgumentException(string name, string argumentName)
	{
		return null;
	}
}
