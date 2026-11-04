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
		[Address(RVA = "0x2754630", Offset = "0x2752C30", VA = "0x182754630")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000B25")]
	[Address(RVA = "0x274E8D0", Offset = "0x274CED0", VA = "0x18274E8D0")]
	public static string EncodeName(string name)
	{
		return null;
	}

	[Token(Token = "0x6000B26")]
	[Address(RVA = "0x274E870", Offset = "0x274CE70", VA = "0x18274E870")]
	public static string EncodeLocalName(string name)
	{
		return null;
	}

	[Token(Token = "0x6000B27")]
	[Address(RVA = "0x274DFC0", Offset = "0x274C5C0", VA = "0x18274DFC0")]
	public static string DecodeName(string name)
	{
		return null;
	}

	[Token(Token = "0x6000B28")]
	[Address(RVA = "0x274E920", Offset = "0x274CF20", VA = "0x18274E920")]
	private static string EncodeName(string name, bool first, bool local)
	{
		return null;
	}

	[Token(Token = "0x6000B29")]
	[Address(RVA = "0x274F2B0", Offset = "0x274D8B0", VA = "0x18274F2B0")]
	private static int FromHex(char digit)
	{
		return default(int);
	}

	[Token(Token = "0x6000B2A")]
	[Address(RVA = "0x274F180", Offset = "0x274D780", VA = "0x18274F180")]
	internal static byte[] FromBinHexString(string s)
	{
		return null;
	}

	[Token(Token = "0x6000B2B")]
	[Address(RVA = "0x274F230", Offset = "0x274D830", VA = "0x18274F230")]
	internal static byte[] FromBinHexString(string s, bool allowOddCount)
	{
		return null;
	}

	[Token(Token = "0x6000B2C")]
	[Address(RVA = "0x274F5F0", Offset = "0x274DBF0", VA = "0x18274F5F0")]
	internal static string ToBinHexString(byte[] inArray)
	{
		return null;
	}

	[Token(Token = "0x6000B2D")]
	[Address(RVA = "0x2753FA0", Offset = "0x27525A0", VA = "0x182753FA0")]
	public static string VerifyName(string name)
	{
		return null;
	}

	[Token(Token = "0x6000B2E")]
	[Address(RVA = "0x27536A0", Offset = "0x2751CA0", VA = "0x1827536A0")]
	internal static Exception TryVerifyName(string name)
	{
		return null;
	}

	[Token(Token = "0x6000B2F")]
	[Address(RVA = "0x2754100", Offset = "0x2752700", VA = "0x182754100")]
	internal static string VerifyQName(string name, ExceptionType exceptionType)
	{
		return null;
	}

	[Token(Token = "0x6000B30")]
	[Address(RVA = "0x2753C90", Offset = "0x2752290", VA = "0x182753C90")]
	public static string VerifyNCName(string name)
	{
		return null;
	}

	[Token(Token = "0x6000B31")]
	[Address(RVA = "0x2753E30", Offset = "0x2752430", VA = "0x182753E30")]
	internal static string VerifyNCName(string name, ExceptionType exceptionType)
	{
		return null;
	}

	[Token(Token = "0x6000B32")]
	[Address(RVA = "0x27533D0", Offset = "0x27519D0", VA = "0x1827533D0")]
	internal static Exception TryVerifyNCName(string name)
	{
		return null;
	}

	[Token(Token = "0x6000B33")]
	[Address(RVA = "0x27542D0", Offset = "0x27528D0", VA = "0x1827542D0")]
	public static string VerifyTOKEN(string token)
	{
		return null;
	}

	[Token(Token = "0x6000B34")]
	[Address(RVA = "0x2753910", Offset = "0x2751F10", VA = "0x182753910")]
	internal static Exception TryVerifyTOKEN(string token)
	{
		return null;
	}

	[Token(Token = "0x6000B35")]
	[Address(RVA = "0x27534A0", Offset = "0x2751AA0", VA = "0x1827534A0")]
	internal static Exception TryVerifyNMTOKEN(string name)
	{
		return null;
	}

	[Token(Token = "0x6000B36")]
	[Address(RVA = "0x2753840", Offset = "0x2751E40", VA = "0x182753840")]
	internal static Exception TryVerifyNormalizedString(string str)
	{
		return null;
	}

	[Token(Token = "0x6000B37")]
	[Address(RVA = "0x2750A40", Offset = "0x274F040", VA = "0x182750A40")]
	public static string ToString(bool value)
	{
		return null;
	}

	[Token(Token = "0x6000B38")]
	[Address(RVA = "0x27506F0", Offset = "0x274ECF0", VA = "0x1827506F0")]
	public static string ToString(char value)
	{
		return null;
	}

	[Token(Token = "0x6000B39")]
	[Address(RVA = "0x2750680", Offset = "0x274EC80", VA = "0x182750680")]
	public static string ToString(decimal value)
	{
		return null;
	}

	[Token(Token = "0x6000B3A")]
	[Address(RVA = "0x2750B80", Offset = "0x274F180", VA = "0x182750B80")]
	[CLSCompliant(false)]
	public static string ToString(sbyte value)
	{
		return null;
	}

	[Token(Token = "0x6000B3B")]
	[Address(RVA = "0x27505E0", Offset = "0x274EBE0", VA = "0x1827505E0")]
	public static string ToString(short value)
	{
		return null;
	}

	[Token(Token = "0x6000B3C")]
	[Address(RVA = "0x2750610", Offset = "0x274EC10", VA = "0x182750610")]
	public static string ToString(int value)
	{
		return null;
	}

	[Token(Token = "0x6000B3D")]
	[Address(RVA = "0x2750BB0", Offset = "0x274F1B0", VA = "0x182750BB0")]
	public static string ToString(long value)
	{
		return null;
	}

	[Token(Token = "0x6000B3E")]
	[Address(RVA = "0x2750650", Offset = "0x274EC50", VA = "0x182750650")]
	public static string ToString(byte value)
	{
		return null;
	}

	[Token(Token = "0x6000B3F")]
	[Address(RVA = "0x27505B0", Offset = "0x274EBB0", VA = "0x1827505B0")]
	[CLSCompliant(false)]
	public static string ToString(ushort value)
	{
		return null;
	}

	[Token(Token = "0x6000B40")]
	[Address(RVA = "0x2750730", Offset = "0x274ED30", VA = "0x182750730")]
	[CLSCompliant(false)]
	public static string ToString(uint value)
	{
		return null;
	}

	[Token(Token = "0x6000B41")]
	[Address(RVA = "0x27507D0", Offset = "0x274EDD0", VA = "0x1827507D0")]
	[CLSCompliant(false)]
	public static string ToString(ulong value)
	{
		return null;
	}

	[Token(Token = "0x6000B42")]
	[Address(RVA = "0x27504B0", Offset = "0x274EAB0", VA = "0x1827504B0")]
	public static string ToString(float value)
	{
		return null;
	}

	[Token(Token = "0x6000B43")]
	[Address(RVA = "0x27503B0", Offset = "0x274E9B0", VA = "0x1827503B0")]
	public static string ToString(double value)
	{
		return null;
	}

	[Token(Token = "0x6000B44")]
	[Address(RVA = "0x2750A90", Offset = "0x274F090", VA = "0x182750A90")]
	public static string ToString(TimeSpan value)
	{
		return null;
	}

	[Token(Token = "0x6000B45")]
	[Address(RVA = "0x2750AF0", Offset = "0x274F0F0", VA = "0x182750AF0")]
	public static string ToString(DateTime value, string format)
	{
		return null;
	}

	[Token(Token = "0x6000B46")]
	[Address(RVA = "0x2750800", Offset = "0x274EE00", VA = "0x182750800")]
	public static string ToString(DateTime value, XmlDateTimeSerializationMode dateTimeOption)
	{
		return null;
	}

	[Token(Token = "0x6000B47")]
	[Address(RVA = "0x2750760", Offset = "0x274ED60", VA = "0x182750760")]
	public static string ToString(DateTimeOffset value)
	{
		return null;
	}

	[Token(Token = "0x6000B48")]
	[Address(RVA = "0x2750640", Offset = "0x274EC40", VA = "0x182750640")]
	public static string ToString(Guid value)
	{
		return null;
	}

	[Token(Token = "0x6000B49")]
	[Address(RVA = "0x274F660", Offset = "0x274DC60", VA = "0x18274F660")]
	public static bool ToBoolean(string s)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B4A")]
	[Address(RVA = "0x2751430", Offset = "0x274FA30", VA = "0x182751430")]
	internal static Exception TryToBoolean(string s, out bool result)
	{
		return null;
	}

	[Token(Token = "0x6000B4B")]
	[Address(RVA = "0x274F8B0", Offset = "0x274DEB0", VA = "0x18274F8B0")]
	public static char ToChar(string s)
	{
		return default(char);
	}

	[Token(Token = "0x6000B4C")]
	[Address(RVA = "0x2751850", Offset = "0x274FE50", VA = "0x182751850")]
	internal static Exception TryToChar(string s, out char result)
	{
		return null;
	}

	[Token(Token = "0x6000B4D")]
	[Address(RVA = "0x274FED0", Offset = "0x274E4D0", VA = "0x18274FED0")]
	public static decimal ToDecimal(string s)
	{
		return 0m;
	}

	[Token(Token = "0x6000B4E")]
	[Address(RVA = "0x27519E0", Offset = "0x274FFE0", VA = "0x1827519E0")]
	internal static Exception TryToDecimal(string s, out decimal result)
	{
		return null;
	}

	[Token(Token = "0x6000B4F")]
	[Address(RVA = "0x2750180", Offset = "0x274E780", VA = "0x182750180")]
	internal static decimal ToInteger(string s)
	{
		return 0m;
	}

	[Token(Token = "0x6000B50")]
	[Address(RVA = "0x2752570", Offset = "0x2750B70", VA = "0x182752570")]
	internal static Exception TryToInteger(string s, out decimal result)
	{
		return null;
	}

	[Token(Token = "0x6000B51")]
	[Address(RVA = "0x2750210", Offset = "0x274E810", VA = "0x182750210")]
	[CLSCompliant(false)]
	public static sbyte ToSByte(string s)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000B52")]
	[Address(RVA = "0x2752730", Offset = "0x2750D30", VA = "0x182752730")]
	internal static Exception TryToSByte(string s, out sbyte result)
	{
		return null;
	}

	[Token(Token = "0x6000B53")]
	[Address(RVA = "0x27500F0", Offset = "0x274E6F0", VA = "0x1827500F0")]
	public static short ToInt16(string s)
	{
		return default(short);
	}

	[Token(Token = "0x6000B54")]
	[Address(RVA = "0x27520C0", Offset = "0x27506C0", VA = "0x1827520C0")]
	internal static Exception TryToInt16(string s, out short result)
	{
		return null;
	}

	[Token(Token = "0x6000B55")]
	[Address(RVA = "0x2750120", Offset = "0x274E720", VA = "0x182750120")]
	public static int ToInt32(string s)
	{
		return default(int);
	}

	[Token(Token = "0x6000B56")]
	[Address(RVA = "0x2752250", Offset = "0x2750850", VA = "0x182752250")]
	internal static Exception TryToInt32(string s, out int result)
	{
		return null;
	}

	[Token(Token = "0x6000B57")]
	[Address(RVA = "0x2750150", Offset = "0x274E750", VA = "0x182750150")]
	public static long ToInt64(string s)
	{
		return default(long);
	}

	[Token(Token = "0x6000B58")]
	[Address(RVA = "0x27523E0", Offset = "0x27509E0", VA = "0x1827523E0")]
	internal static Exception TryToInt64(string s, out long result)
	{
		return null;
	}

	[Token(Token = "0x6000B59")]
	[Address(RVA = "0x274F880", Offset = "0x274DE80", VA = "0x18274F880")]
	public static byte ToByte(string s)
	{
		return default(byte);
	}

	[Token(Token = "0x6000B5A")]
	[Address(RVA = "0x27516C0", Offset = "0x274FCC0", VA = "0x1827516C0")]
	internal static Exception TryToByte(string s, out byte result)
	{
		return null;
	}

	[Token(Token = "0x6000B5B")]
	[Address(RVA = "0x2750D30", Offset = "0x274F330", VA = "0x182750D30")]
	[CLSCompliant(false)]
	public static ushort ToUInt16(string s)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000B5C")]
	[Address(RVA = "0x2752C20", Offset = "0x2751220", VA = "0x182752C20")]
	internal static Exception TryToUInt16(string s, out ushort result)
	{
		return null;
	}

	[Token(Token = "0x6000B5D")]
	[Address(RVA = "0x2750D60", Offset = "0x274F360", VA = "0x182750D60")]
	[CLSCompliant(false)]
	public static uint ToUInt32(string s)
	{
		return default(uint);
	}

	[Token(Token = "0x6000B5E")]
	[Address(RVA = "0x2752DB0", Offset = "0x27513B0", VA = "0x182752DB0")]
	internal static Exception TryToUInt32(string s, out uint result)
	{
		return null;
	}

	[Token(Token = "0x6000B5F")]
	[Address(RVA = "0x2750D90", Offset = "0x274F390", VA = "0x182750D90")]
	[CLSCompliant(false)]
	public static ulong ToUInt64(string s)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000B60")]
	[Address(RVA = "0x2752F40", Offset = "0x2751540", VA = "0x182752F40")]
	internal static Exception TryToUInt64(string s, out ulong result)
	{
		return null;
	}

	[Token(Token = "0x6000B61")]
	[Address(RVA = "0x2750240", Offset = "0x274E840", VA = "0x182750240")]
	public static float ToSingle(string s)
	{
		return default(float);
	}

	[Token(Token = "0x6000B62")]
	[Address(RVA = "0x27528C0", Offset = "0x2750EC0", VA = "0x1827528C0")]
	internal static Exception TryToSingle(string s, out float result)
	{
		return null;
	}

	[Token(Token = "0x6000B63")]
	[Address(RVA = "0x274FF60", Offset = "0x274E560", VA = "0x18274FF60")]
	public static double ToDouble(string s)
	{
		return default(double);
	}

	[Token(Token = "0x6000B64")]
	[Address(RVA = "0x2751BA0", Offset = "0x27501A0", VA = "0x182751BA0")]
	internal static Exception TryToDouble(string s, out double result)
	{
		return null;
	}

	[Token(Token = "0x6000B65")]
	[Address(RVA = "0x27510A0", Offset = "0x274F6A0", VA = "0x1827510A0")]
	internal static double ToXPathDouble(object o)
	{
		return default(double);
	}

	[Token(Token = "0x6000B66")]
	[Address(RVA = "0x2754400", Offset = "0x2752A00", VA = "0x182754400")]
	internal static double XPathRound(double value)
	{
		return default(double);
	}

	[Token(Token = "0x6000B67")]
	[Address(RVA = "0x2750BE0", Offset = "0x274F1E0", VA = "0x182750BE0")]
	public static TimeSpan ToTimeSpan(string s)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000B68")]
	[Address(RVA = "0x2752B70", Offset = "0x2751170", VA = "0x182752B70")]
	internal static Exception TryToTimeSpan(string s, out TimeSpan result)
	{
		return null;
	}

	[Token(Token = "0x6000B6A")]
	[Address(RVA = "0x274CBF0", Offset = "0x274B1F0", VA = "0x18274CBF0")]
	private static void CreateAllDateTimeFormats()
	{
	}

	[Token(Token = "0x6000B6B")]
	[Address(RVA = "0x274FCC0", Offset = "0x274E2C0", VA = "0x18274FCC0")]
	[Obsolete("Use XmlConvert.ToDateTime() that takes in XmlDateTimeSerializationMode")]
	public static DateTime ToDateTime(string s)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000B6C")]
	[Address(RVA = "0x274FE30", Offset = "0x274E430", VA = "0x18274FE30")]
	public static DateTime ToDateTime(string s, string[] formats)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000B6D")]
	[Address(RVA = "0x274FA60", Offset = "0x274E060", VA = "0x18274FA60")]
	public static DateTime ToDateTime(string s, XmlDateTimeSerializationMode dateTimeOption)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000B6E")]
	[Address(RVA = "0x274F980", Offset = "0x274DF80", VA = "0x18274F980")]
	public static DateTimeOffset ToDateTimeOffset(string s)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x6000B6F")]
	[Address(RVA = "0x27500D0", Offset = "0x274E6D0", VA = "0x1827500D0")]
	public static Guid ToGuid(string s)
	{
		return default(Guid);
	}

	[Token(Token = "0x6000B70")]
	[Address(RVA = "0x2751E60", Offset = "0x2750460", VA = "0x182751E60")]
	internal static Exception TryToGuid(string s, out Guid result)
	{
		return null;
	}

	[Token(Token = "0x6000B71")]
	[Address(RVA = "0x274F450", Offset = "0x274DA50", VA = "0x18274F450")]
	private static DateTime SwitchToLocalTime(DateTime value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000B72")]
	[Address(RVA = "0x274F520", Offset = "0x274DB20", VA = "0x18274F520")]
	private static DateTime SwitchToUtcTime(DateTime value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000B73")]
	[Address(RVA = "0x2750DC0", Offset = "0x274F3C0", VA = "0x182750DC0")]
	internal static Uri ToUri(string s)
	{
		return null;
	}

	[Token(Token = "0x6000B74")]
	[Address(RVA = "0x27530D0", Offset = "0x27516D0", VA = "0x1827530D0")]
	internal static Exception TryToUri(string s, out Uri result)
	{
		return null;
	}

	[Token(Token = "0x6000B75")]
	[Address(RVA = "0x274F3C0", Offset = "0x274D9C0", VA = "0x18274F3C0")]
	internal static bool StrEqual(char[] chars, int strPos1, int strLen1, string str2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B76")]
	[Address(RVA = "0x27513C0", Offset = "0x274F9C0", VA = "0x1827513C0")]
	internal static string TrimString(string value)
	{
		return null;
	}

	[Token(Token = "0x6000B77")]
	[Address(RVA = "0x2751350", Offset = "0x274F950", VA = "0x182751350")]
	internal static string TrimStringStart(string value)
	{
		return null;
	}

	[Token(Token = "0x6000B78")]
	[Address(RVA = "0x27512E0", Offset = "0x274F8E0", VA = "0x1827512E0")]
	internal static string TrimStringEnd(string value)
	{
		return null;
	}

	[Token(Token = "0x6000B79")]
	[Address(RVA = "0x274F350", Offset = "0x274D950", VA = "0x18274F350")]
	internal static string[] SplitString(string value)
	{
		return null;
	}

	[Token(Token = "0x6000B7A")]
	[Address(RVA = "0x274F2E0", Offset = "0x274D8E0", VA = "0x18274F2E0")]
	internal static bool IsNegativeZero(double value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B7B")]
	[Address(RVA = "0x1A78CD0", Offset = "0x1A772D0", VA = "0x181A78CD0")]
	private static long DoubleToInt64Bits(double value)
	{
		return default(long);
	}

	[Token(Token = "0x6000B7C")]
	[Address(RVA = "0x2753A30", Offset = "0x2752030", VA = "0x182753A30")]
	internal static void VerifyCharData(string data, ExceptionType invCharExceptionType, ExceptionType invSurrogateExceptionType)
	{
	}

	[Token(Token = "0x6000B7D")]
	[Address(RVA = "0x274D320", Offset = "0x274B920", VA = "0x18274D320")]
	internal static Exception CreateException(string res, ExceptionType exceptionType, int lineNo, int linePos)
	{
		return null;
	}

	[Token(Token = "0x6000B7E")]
	[Address(RVA = "0x274D110", Offset = "0x274B710", VA = "0x18274D110")]
	internal static Exception CreateException(string res, string arg, ExceptionType exceptionType, int lineNo, int linePos)
	{
		return null;
	}

	[Token(Token = "0x6000B7F")]
	[Address(RVA = "0x274D3E0", Offset = "0x274B9E0", VA = "0x18274D3E0")]
	internal static Exception CreateException(string res, string[] args, ExceptionType exceptionType)
	{
		return null;
	}

	[Token(Token = "0x6000B80")]
	[Address(RVA = "0x274D250", Offset = "0x274B850", VA = "0x18274D250")]
	internal static Exception CreateException(string res, string[] args, ExceptionType exceptionType, int lineNo, int linePos)
	{
		return null;
	}

	[Token(Token = "0x6000B81")]
	[Address(RVA = "0x274DD20", Offset = "0x274C320", VA = "0x18274DD20")]
	internal static Exception CreateInvalidSurrogatePairException(char low, char hi)
	{
		return null;
	}

	[Token(Token = "0x6000B82")]
	[Address(RVA = "0x274DDC0", Offset = "0x274C3C0", VA = "0x18274DDC0")]
	internal static Exception CreateInvalidSurrogatePairException(char low, char hi, ExceptionType exceptionType)
	{
		return null;
	}

	[Token(Token = "0x6000B83")]
	[Address(RVA = "0x274DE40", Offset = "0x274C440", VA = "0x18274DE40")]
	internal static Exception CreateInvalidSurrogatePairException(char low, char hi, ExceptionType exceptionType, int lineNo, int linePos)
	{
		return null;
	}

	[Token(Token = "0x6000B84")]
	[Address(RVA = "0x274DB20", Offset = "0x274C120", VA = "0x18274DB20")]
	internal static Exception CreateInvalidHighSurrogateCharException(char hi)
	{
		return null;
	}

	[Token(Token = "0x6000B85")]
	[Address(RVA = "0x274D740", Offset = "0x274BD40", VA = "0x18274D740")]
	internal static Exception CreateInvalidHighSurrogateCharException(char hi, ExceptionType exceptionType)
	{
		return null;
	}

	[Token(Token = "0x6000B86")]
	[Address(RVA = "0x274D940", Offset = "0x274BF40", VA = "0x18274D940")]
	internal static Exception CreateInvalidHighSurrogateCharException(char hi, ExceptionType exceptionType, int lineNo, int linePos)
	{
		return null;
	}

	[Token(Token = "0x6000B87")]
	[Address(RVA = "0x274D530", Offset = "0x274BB30", VA = "0x18274D530")]
	internal static Exception CreateInvalidCharException(string data, int invCharPos, ExceptionType exceptionType)
	{
		return null;
	}

	[Token(Token = "0x6000B88")]
	[Address(RVA = "0x274D610", Offset = "0x274BC10", VA = "0x18274D610")]
	internal static Exception CreateInvalidCharException(char invChar, char nextChar)
	{
		return null;
	}

	[Token(Token = "0x6000B89")]
	[Address(RVA = "0x274D460", Offset = "0x274BA60", VA = "0x18274D460")]
	internal static Exception CreateInvalidCharException(char invChar, char nextChar, ExceptionType exceptionType)
	{
		return null;
	}

	[Token(Token = "0x6000B8A")]
	[Address(RVA = "0x274DC30", Offset = "0x274C230", VA = "0x18274DC30")]
	internal static Exception CreateInvalidNameCharException(string name, int index, ExceptionType exceptionType)
	{
		return null;
	}

	[Token(Token = "0x6000B8B")]
	[Address(RVA = "0x274DB70", Offset = "0x274C170", VA = "0x18274DB70")]
	internal static ArgumentException CreateInvalidNameArgumentException(string name, string argumentName)
	{
		return null;
	}
}
