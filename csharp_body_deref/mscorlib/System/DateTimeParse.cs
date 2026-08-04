// ==================== AoTTG2 cross-reference ====================
// Type: System.DateTimeParse
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Globalization;
using System.Runtime.CompilerServices;
using System.Text;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20000B4")]
internal static class DateTimeParse
{
	[Token(Token = "0x20000B5")]
	internal delegate bool MatchNumberDelegate(ref System.__DTString str, int digitLen, out int result);

	[Token(Token = "0x20000B6")]
	internal enum DTT
	{
		[Token(Token = "0x400027E")]
		End,
		[Token(Token = "0x400027F")]
		NumEnd,
		[Token(Token = "0x4000280")]
		NumAmpm,
		[Token(Token = "0x4000281")]
		NumSpace,
		[Token(Token = "0x4000282")]
		NumDatesep,
		[Token(Token = "0x4000283")]
		NumTimesep,
		[Token(Token = "0x4000284")]
		MonthEnd,
		[Token(Token = "0x4000285")]
		MonthSpace,
		[Token(Token = "0x4000286")]
		MonthDatesep,
		[Token(Token = "0x4000287")]
		NumDatesuff,
		[Token(Token = "0x4000288")]
		NumTimesuff,
		[Token(Token = "0x4000289")]
		DayOfWeek,
		[Token(Token = "0x400028A")]
		YearSpace,
		[Token(Token = "0x400028B")]
		YearDateSep,
		[Token(Token = "0x400028C")]
		YearEnd,
		[Token(Token = "0x400028D")]
		TimeZone,
		[Token(Token = "0x400028E")]
		Era,
		[Token(Token = "0x400028F")]
		NumUTCTimeMark,
		[Token(Token = "0x4000290")]
		Unk,
		[Token(Token = "0x4000291")]
		NumLocalTimeMark,
		[Token(Token = "0x4000292")]
		Max
	}

	[Token(Token = "0x20000B7")]
	internal enum TM
	{
		[Token(Token = "0x4000294")]
		NotSet = -1,
		[Token(Token = "0x4000295")]
		AM,
		[Token(Token = "0x4000296")]
		PM
	}

	[Token(Token = "0x20000B8")]
	internal enum DS
	{
		[Token(Token = "0x4000298")]
		BEGIN,
		[Token(Token = "0x4000299")]
		N,
		[Token(Token = "0x400029A")]
		NN,
		[Token(Token = "0x400029B")]
		D_Nd,
		[Token(Token = "0x400029C")]
		D_NN,
		[Token(Token = "0x400029D")]
		D_NNd,
		[Token(Token = "0x400029E")]
		D_M,
		[Token(Token = "0x400029F")]
		D_MN,
		[Token(Token = "0x40002A0")]
		D_NM,
		[Token(Token = "0x40002A1")]
		D_MNd,
		[Token(Token = "0x40002A2")]
		D_NDS,
		[Token(Token = "0x40002A3")]
		D_Y,
		[Token(Token = "0x40002A4")]
		D_YN,
		[Token(Token = "0x40002A5")]
		D_YNd,
		[Token(Token = "0x40002A6")]
		D_YM,
		[Token(Token = "0x40002A7")]
		D_YMd,
		[Token(Token = "0x40002A8")]
		D_S,
		[Token(Token = "0x40002A9")]
		T_S,
		[Token(Token = "0x40002AA")]
		T_Nt,
		[Token(Token = "0x40002AB")]
		T_NNt,
		[Token(Token = "0x40002AC")]
		ERROR,
		[Token(Token = "0x40002AD")]
		DX_NN,
		[Token(Token = "0x40002AE")]
		DX_NNN,
		[Token(Token = "0x40002AF")]
		DX_MN,
		[Token(Token = "0x40002B0")]
		DX_NM,
		[Token(Token = "0x40002B1")]
		DX_MNN,
		[Token(Token = "0x40002B2")]
		DX_DS,
		[Token(Token = "0x40002B3")]
		DX_DSN,
		[Token(Token = "0x40002B4")]
		DX_NDS,
		[Token(Token = "0x40002B5")]
		DX_NNDS,
		[Token(Token = "0x40002B6")]
		DX_YNN,
		[Token(Token = "0x40002B7")]
		DX_YMN,
		[Token(Token = "0x40002B8")]
		DX_YN,
		[Token(Token = "0x40002B9")]
		DX_YM,
		[Token(Token = "0x40002BA")]
		TX_N,
		[Token(Token = "0x40002BB")]
		TX_NN,
		[Token(Token = "0x40002BC")]
		TX_NNN,
		[Token(Token = "0x40002BD")]
		TX_TS,
		[Token(Token = "0x40002BE")]
		DX_NNY
	}

	[Token(Token = "0x400027B")]
	[FieldOffset(Offset = "0x0")]
	internal static MatchNumberDelegate m_hebrewNumberParser;

	[Token(Token = "0x400027C")]
	[FieldOffset(Offset = "0x8")]
	private static DS[][] dateParsingStates;

	[Token(Token = "0x60006D7")]
	[Address(RVA = "0x3C931F0", Offset = "0x3C931F0", VA = "0x3C931F0")]
	internal static DateTime ParseExact(ReadOnlySpan<char> s, ReadOnlySpan<char> format, DateTimeFormatInfo dtfi, DateTimeStyles style)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60006D8")]
	[Address(RVA = "0x3C97F30", Offset = "0x3C97F30", VA = "0x3C97F30")]
	internal static DateTime ParseExact(ReadOnlySpan<char> s, ReadOnlySpan<char> format, DateTimeFormatInfo dtfi, DateTimeStyles style, out TimeSpan offset)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60006D9")]
	[Address(RVA = "0x3C94210", Offset = "0x3C94210", VA = "0x3C94210")]
	internal static bool TryParseExact(ReadOnlySpan<char> s, ReadOnlySpan<char> format, DateTimeFormatInfo dtfi, DateTimeStyles style, out DateTime result)
	{
		return default(bool);
	}

	[Token(Token = "0x60006DA")]
	[Address(RVA = "0x3C991C0", Offset = "0x3C991C0", VA = "0x3C991C0")]
	internal static bool TryParseExact(ReadOnlySpan<char> s, ReadOnlySpan<char> format, DateTimeFormatInfo dtfi, DateTimeStyles style, out DateTime result, out TimeSpan offset)
	{
		return default(bool);
	}

	[Token(Token = "0x60006DB")]
	[Address(RVA = "0x3C9FDC0", Offset = "0x3C9FDC0", VA = "0x3C9FDC0")]
	internal static bool TryParseExact(ReadOnlySpan<char> s, ReadOnlySpan<char> format, DateTimeFormatInfo dtfi, DateTimeStyles style, ref System.DateTimeResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x60006DC")]
	[Address(RVA = "0x3C93450", Offset = "0x3C93450", VA = "0x3C93450")]
	internal static DateTime ParseExactMultiple(ReadOnlySpan<char> s, string[] formats, DateTimeFormatInfo dtfi, DateTimeStyles style)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60006DD")]
	[Address(RVA = "0x3CA0A10", Offset = "0x3CA0A10", VA = "0x3CA0A10")]
	internal static bool TryParseExactMultiple(ReadOnlySpan<char> s, string[] formats, DateTimeFormatInfo dtfi, DateTimeStyles style, ref System.DateTimeResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x60006DE")]
	[Address(RVA = "0x3CA0CF0", Offset = "0x3CA0CF0", VA = "0x3CA0CF0")]
	private static bool MatchWord(ref System.__DTString str, string target)
	{
		return default(bool);
	}

	[Token(Token = "0x60006DF")]
	[Address(RVA = "0x3CA0EA0", Offset = "0x3CA0EA0", VA = "0x3CA0EA0")]
	private static bool GetTimeZoneName(ref System.__DTString str)
	{
		return default(bool);
	}

	[Token(Token = "0x60006E0")]
	[Address(RVA = "0x3CA0F40", Offset = "0x3CA0F40", VA = "0x3CA0F40")]
	internal static bool IsDigit(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x60006E1")]
	[Address(RVA = "0x3CA0F50", Offset = "0x3CA0F50", VA = "0x3CA0F50")]
	private static bool ParseFraction(ref System.__DTString str, out double result)
	{
		return default(bool);
	}

	[Token(Token = "0x60006E2")]
	[Address(RVA = "0x3CA1040", Offset = "0x3CA1040", VA = "0x3CA1040")]
	private static bool ParseTimeZone(ref System.__DTString str, ref TimeSpan result)
	{
		return default(bool);
	}

	[Token(Token = "0x60006E3")]
	[Address(RVA = "0x3CA13C0", Offset = "0x3CA13C0", VA = "0x3CA13C0")]
	private static bool HandleTimeZone(ref System.__DTString str, ref System.DateTimeResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x60006E4")]
	[Address(RVA = "0x3CA1540", Offset = "0x3CA1540", VA = "0x3CA1540")]
	private static bool Lex(DS dps, ref System.__DTString str, ref System.DateTimeToken dtok, ref System.DateTimeRawInfo raw, ref System.DateTimeResult result, ref DateTimeFormatInfo dtfi, DateTimeStyles styles)
	{
		return default(bool);
	}

	[Token(Token = "0x60006E5")]
	[Address(RVA = "0x3CA2940", Offset = "0x3CA2940", VA = "0x3CA2940")]
	private static Calendar GetJapaneseCalendarDefaultInstance()
	{
		return null;
	}

	[Token(Token = "0x60006E6")]
	[Address(RVA = "0x3CA2A70", Offset = "0x3CA2A70", VA = "0x3CA2A70")]
	internal static Calendar GetTaiwanCalendarDefaultInstance()
	{
		return null;
	}

	[Token(Token = "0x60006E7")]
	[Address(RVA = "0x3CA2BA0", Offset = "0x3CA2BA0", VA = "0x3CA2BA0")]
	private static bool VerifyValidPunctuation(ref System.__DTString str)
	{
		return default(bool);
	}

	[Token(Token = "0x60006E8")]
	[Address(RVA = "0x3CA2D90", Offset = "0x3CA2D90", VA = "0x3CA2D90")]
	private static bool GetYearMonthDayOrder(string datePattern, DateTimeFormatInfo dtfi, out int order)
	{
		return default(bool);
	}

	[Token(Token = "0x60006E9")]
	[Address(RVA = "0x3CA3020", Offset = "0x3CA3020", VA = "0x3CA3020")]
	private static bool GetYearMonthOrder(string pattern, DateTimeFormatInfo dtfi, out int order)
	{
		return default(bool);
	}

	[Token(Token = "0x60006EA")]
	[Address(RVA = "0x3CA3200", Offset = "0x3CA3200", VA = "0x3CA3200")]
	private static bool GetMonthDayOrder(string pattern, DateTimeFormatInfo dtfi, out int order)
	{
		return default(bool);
	}

	[Token(Token = "0x60006EB")]
	[Address(RVA = "0x3CA3410", Offset = "0x3CA3410", VA = "0x3CA3410")]
	private static bool TryAdjustYear(ref System.DateTimeResult result, int year, out int adjustedYear)
	{
		return default(bool);
	}

	[Token(Token = "0x60006EC")]
	[Address(RVA = "0x3CA34D0", Offset = "0x3CA34D0", VA = "0x3CA34D0")]
	private static bool SetDateYMD(ref System.DateTimeResult result, int year, int month, int day)
	{
		return default(bool);
	}

	[Token(Token = "0x60006ED")]
	[Address(RVA = "0x3CA3530", Offset = "0x3CA3530", VA = "0x3CA3530")]
	private static bool SetDateMDY(ref System.DateTimeResult result, int month, int day, int year)
	{
		return default(bool);
	}

	[Token(Token = "0x60006EE")]
	[Address(RVA = "0x3CA35F0", Offset = "0x3CA35F0", VA = "0x3CA35F0")]
	private static bool SetDateDMY(ref System.DateTimeResult result, int day, int month, int year)
	{
		return default(bool);
	}

	[Token(Token = "0x60006EF")]
	[Address(RVA = "0x3CA36B0", Offset = "0x3CA36B0", VA = "0x3CA36B0")]
	private static bool SetDateYDM(ref System.DateTimeResult result, int year, int day, int month)
	{
		return default(bool);
	}

	[Token(Token = "0x60006F0")]
	[Address(RVA = "0x3CA3770", Offset = "0x3CA3770", VA = "0x3CA3770")]
	private static void GetDefaultYear(ref System.DateTimeResult result, ref DateTimeStyles styles)
	{
	}

	[Token(Token = "0x60006F1")]
	[Address(RVA = "0x3CA3A60", Offset = "0x3CA3A60", VA = "0x3CA3A60")]
	private static bool GetDayOfNN(ref System.DateTimeResult result, ref DateTimeStyles styles, ref System.DateTimeRawInfo raw, DateTimeFormatInfo dtfi)
	{
		return default(bool);
	}

	[Token(Token = "0x60006F2")]
	[Address(RVA = "0x3CA3CB0", Offset = "0x3CA3CB0", VA = "0x3CA3CB0")]
	private static bool GetDayOfNNN(ref System.DateTimeResult result, ref System.DateTimeRawInfo raw, DateTimeFormatInfo dtfi)
	{
		return default(bool);
	}

	[Token(Token = "0x60006F3")]
	[Address(RVA = "0x3CA4130", Offset = "0x3CA4130", VA = "0x3CA4130")]
	private static bool GetDayOfMN(ref System.DateTimeResult result, ref DateTimeStyles styles, ref System.DateTimeRawInfo raw, DateTimeFormatInfo dtfi)
	{
		return default(bool);
	}

	[Token(Token = "0x60006F4")]
	[Address(RVA = "0x3CA4430", Offset = "0x3CA4430", VA = "0x3CA4430")]
	private static bool GetHebrewDayOfNM(ref System.DateTimeResult result, ref System.DateTimeRawInfo raw, DateTimeFormatInfo dtfi)
	{
		return default(bool);
	}

	[Token(Token = "0x60006F5")]
	[Address(RVA = "0x3CA4570", Offset = "0x3CA4570", VA = "0x3CA4570")]
	private static bool GetDayOfNM(ref System.DateTimeResult result, ref DateTimeStyles styles, ref System.DateTimeRawInfo raw, DateTimeFormatInfo dtfi)
	{
		return default(bool);
	}

	[Token(Token = "0x60006F6")]
	[Address(RVA = "0x3CA4870", Offset = "0x3CA4870", VA = "0x3CA4870")]
	private static bool GetDayOfMNN(ref System.DateTimeResult result, ref System.DateTimeRawInfo raw, DateTimeFormatInfo dtfi)
	{
		return default(bool);
	}

	[Token(Token = "0x60006F7")]
	[Address(RVA = "0x3CA4B50", Offset = "0x3CA4B50", VA = "0x3CA4B50")]
	private static bool GetDayOfYNN(ref System.DateTimeResult result, ref System.DateTimeRawInfo raw, DateTimeFormatInfo dtfi)
	{
		return default(bool);
	}

	[Token(Token = "0x60006F8")]
	[Address(RVA = "0x3CA4CC0", Offset = "0x3CA4CC0", VA = "0x3CA4CC0")]
	private static bool GetDayOfNNY(ref System.DateTimeResult result, ref System.DateTimeRawInfo raw, DateTimeFormatInfo dtfi)
	{
		return default(bool);
	}

	[Token(Token = "0x60006F9")]
	[Address(RVA = "0x3CA4E70", Offset = "0x3CA4E70", VA = "0x3CA4E70")]
	private static bool GetDayOfYMN(ref System.DateTimeResult result, ref System.DateTimeRawInfo raw)
	{
		return default(bool);
	}

	[Token(Token = "0x60006FA")]
	[Address(RVA = "0x3CA4F30", Offset = "0x3CA4F30", VA = "0x3CA4F30")]
	private static bool GetDayOfYN(ref System.DateTimeResult result, ref System.DateTimeRawInfo raw)
	{
		return default(bool);
	}

	[Token(Token = "0x60006FB")]
	[Address(RVA = "0x3CA4FF0", Offset = "0x3CA4FF0", VA = "0x3CA4FF0")]
	private static bool GetDayOfYM(ref System.DateTimeResult result, ref System.DateTimeRawInfo raw)
	{
		return default(bool);
	}

	[Token(Token = "0x60006FC")]
	[Address(RVA = "0x3CA50A0", Offset = "0x3CA50A0", VA = "0x3CA50A0")]
	private static void AdjustTimeMark(DateTimeFormatInfo dtfi, ref System.DateTimeRawInfo raw)
	{
	}

	[Token(Token = "0x60006FD")]
	[Address(RVA = "0x3CA5160", Offset = "0x3CA5160", VA = "0x3CA5160")]
	private static bool AdjustHour(ref int hour, TM timeMark)
	{
		return default(bool);
	}

	[Token(Token = "0x60006FE")]
	[Address(RVA = "0x3CA5190", Offset = "0x3CA5190", VA = "0x3CA5190")]
	private static bool GetTimeOfN(ref System.DateTimeResult result, ref System.DateTimeRawInfo raw)
	{
		return default(bool);
	}

	[Token(Token = "0x60006FF")]
	[Address(RVA = "0x3CA51E0", Offset = "0x3CA51E0", VA = "0x3CA51E0")]
	private static bool GetTimeOfNN(ref System.DateTimeResult result, ref System.DateTimeRawInfo raw)
	{
		return default(bool);
	}

	[Token(Token = "0x6000700")]
	[Address(RVA = "0x3CA5240", Offset = "0x3CA5240", VA = "0x3CA5240")]
	private static bool GetTimeOfNNN(ref System.DateTimeResult result, ref System.DateTimeRawInfo raw)
	{
		return default(bool);
	}

	[Token(Token = "0x6000701")]
	[Address(RVA = "0x3CA52B0", Offset = "0x3CA52B0", VA = "0x3CA52B0")]
	private static bool GetDateOfDSN(ref System.DateTimeResult result, ref System.DateTimeRawInfo raw)
	{
		return default(bool);
	}

	[Token(Token = "0x6000702")]
	[Address(RVA = "0x3CA52F0", Offset = "0x3CA52F0", VA = "0x3CA52F0")]
	private static bool GetDateOfNDS(ref System.DateTimeResult result, ref System.DateTimeRawInfo raw)
	{
		return default(bool);
	}

	[Token(Token = "0x6000703")]
	[Address(RVA = "0x3CA5380", Offset = "0x3CA5380", VA = "0x3CA5380")]
	private static bool GetDateOfNNDS(ref System.DateTimeResult result, ref System.DateTimeRawInfo raw, DateTimeFormatInfo dtfi)
	{
		return default(bool);
	}

	[Token(Token = "0x6000704")]
	[Address(RVA = "0x3CA5620", Offset = "0x3CA5620", VA = "0x3CA5620")]
	private static bool ProcessDateTimeSuffix(ref System.DateTimeResult result, ref System.DateTimeRawInfo raw, ref System.DateTimeToken dtok)
	{
		return default(bool);
	}

	[Token(Token = "0x6000705")]
	[Address(RVA = "0x3CA56F0", Offset = "0x3CA56F0", VA = "0x3CA56F0")]
	internal static bool ProcessHebrewTerminalState(DS dps, ref System.__DTString str, ref System.DateTimeResult result, ref DateTimeStyles styles, ref System.DateTimeRawInfo raw, DateTimeFormatInfo dtfi)
	{
		return default(bool);
	}

	[Token(Token = "0x6000706")]
	[Address(RVA = "0x3CA2520", Offset = "0x3CA2520", VA = "0x3CA2520")]
	internal static bool ProcessTerminalState(DS dps, ref System.__DTString str, ref System.DateTimeResult result, ref DateTimeStyles styles, ref System.DateTimeRawInfo raw, DateTimeFormatInfo dtfi)
	{
		return default(bool);
	}

	[Token(Token = "0x6000707")]
	[Address(RVA = "0x3C92E20", Offset = "0x3C92E20", VA = "0x3C92E20")]
	internal static DateTime Parse(ReadOnlySpan<char> s, DateTimeFormatInfo dtfi, DateTimeStyles styles)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000708")]
	[Address(RVA = "0x3C97B70", Offset = "0x3C97B70", VA = "0x3C97B70")]
	internal static DateTime Parse(ReadOnlySpan<char> s, DateTimeFormatInfo dtfi, DateTimeStyles styles, out TimeSpan offset)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000709")]
	[Address(RVA = "0x3C93F70", Offset = "0x3C93F70", VA = "0x3C93F70")]
	internal static bool TryParse(ReadOnlySpan<char> s, DateTimeFormatInfo dtfi, DateTimeStyles styles, out DateTime result)
	{
		return default(bool);
	}

	[Token(Token = "0x600070A")]
	[Address(RVA = "0x3C98E00", Offset = "0x3C98E00", VA = "0x3C98E00")]
	internal static bool TryParse(ReadOnlySpan<char> s, DateTimeFormatInfo dtfi, DateTimeStyles styles, out DateTime result, out TimeSpan offset)
	{
		return default(bool);
	}

	[Token(Token = "0x600070B")]
	[Address(RVA = "0x3CA5BF0", Offset = "0x3CA5BF0", VA = "0x3CA5BF0")]
	internal static bool TryParse(ReadOnlySpan<char> s, DateTimeFormatInfo dtfi, DateTimeStyles styles, ref System.DateTimeResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x600070C")]
	[Address(RVA = "0x3CA71C0", Offset = "0x3CA71C0", VA = "0x3CA71C0")]
	private static bool DetermineTimeZoneAdjustments(ref System.__DTString str, ref System.DateTimeResult result, DateTimeStyles styles, bool bTimeOnly)
	{
		return default(bool);
	}

	[Token(Token = "0x600070D")]
	[Address(RVA = "0x3CA75F0", Offset = "0x3CA75F0", VA = "0x3CA75F0")]
	private static bool DateTimeOffsetTimeZonePostProcessing(ref System.__DTString str, ref System.DateTimeResult result, DateTimeStyles styles)
	{
		return default(bool);
	}

	[Token(Token = "0x600070E")]
	[Address(RVA = "0x3CA7890", Offset = "0x3CA7890", VA = "0x3CA7890")]
	private static bool AdjustTimeZoneToUniversal(ref System.DateTimeResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x600070F")]
	[Address(RVA = "0x3CA79F0", Offset = "0x3CA79F0", VA = "0x3CA79F0")]
	private static bool AdjustTimeZoneToLocal(ref System.DateTimeResult result, bool bTimeOnly)
	{
		return default(bool);
	}

	[Token(Token = "0x6000710")]
	[Address(RVA = "0x3CA6640", Offset = "0x3CA6640", VA = "0x3CA6640")]
	private static bool ParseISO8601(ref System.DateTimeRawInfo raw, ref System.__DTString str, DateTimeStyles styles, ref System.DateTimeResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000711")]
	[Address(RVA = "0x3CA7DB0", Offset = "0x3CA7DB0", VA = "0x3CA7DB0")]
	internal static bool MatchHebrewDigits(ref System.__DTString str, int digitLen, out int number)
	{
		return default(bool);
	}

	[Token(Token = "0x6000712")]
	[Address(RVA = "0x3CA7D30", Offset = "0x3CA7D30", VA = "0x3CA7D30")]
	internal static bool ParseDigits(ref System.__DTString str, int digitLen, out int result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000713")]
	[Address(RVA = "0x3CA7EB0", Offset = "0x3CA7EB0", VA = "0x3CA7EB0")]
	internal static bool ParseDigits(ref System.__DTString str, int minDigitLen, int maxDigitLen, out int result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000714")]
	[Address(RVA = "0x3CA8080", Offset = "0x3CA8080", VA = "0x3CA8080")]
	private static bool ParseFractionExact(ref System.__DTString str, int maxDigitLen, ref double result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000715")]
	[Address(RVA = "0x3CA8370", Offset = "0x3CA8370", VA = "0x3CA8370")]
	private static bool ParseSign(ref System.__DTString str, ref bool result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000716")]
	[Address(RVA = "0x3CA8410", Offset = "0x3CA8410", VA = "0x3CA8410")]
	private static bool ParseTimeZoneOffset(ref System.__DTString str, int len, ref TimeSpan result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000717")]
	[Address(RVA = "0x3CA8810", Offset = "0x3CA8810", VA = "0x3CA8810")]
	private static bool MatchAbbreviatedMonthName(ref System.__DTString str, DateTimeFormatInfo dtfi, ref int result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000718")]
	[Address(RVA = "0x3CA89F0", Offset = "0x3CA89F0", VA = "0x3CA89F0")]
	private static bool MatchMonthName(ref System.__DTString str, DateTimeFormatInfo dtfi, ref int result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000719")]
	[Address(RVA = "0x3CA8C30", Offset = "0x3CA8C30", VA = "0x3CA8C30")]
	private static bool MatchAbbreviatedDayName(ref System.__DTString str, DateTimeFormatInfo dtfi, ref int result)
	{
		return default(bool);
	}

	[Token(Token = "0x600071A")]
	[Address(RVA = "0x3CA9140", Offset = "0x3CA9140", VA = "0x3CA9140")]
	private static bool MatchDayName(ref System.__DTString str, DateTimeFormatInfo dtfi, ref int result)
	{
		return default(bool);
	}

	[Token(Token = "0x600071B")]
	[Address(RVA = "0x3CA9650", Offset = "0x3CA9650", VA = "0x3CA9650")]
	private static bool MatchEraName(ref System.__DTString str, DateTimeFormatInfo dtfi, ref int result)
	{
		return default(bool);
	}

	[Token(Token = "0x600071C")]
	[Address(RVA = "0x3CA97E0", Offset = "0x3CA97E0", VA = "0x3CA97E0")]
	private static bool MatchTimeMark(ref System.__DTString str, DateTimeFormatInfo dtfi, ref TM result)
	{
		return default(bool);
	}

	[Token(Token = "0x600071D")]
	[Address(RVA = "0x3CA9970", Offset = "0x3CA9970", VA = "0x3CA9970")]
	private static bool MatchAbbreviatedTimeMark(ref System.__DTString str, DateTimeFormatInfo dtfi, ref TM result)
	{
		return default(bool);
	}

	[Token(Token = "0x600071E")]
	[Address(RVA = "0x3CA9AA0", Offset = "0x3CA9AA0", VA = "0x3CA9AA0")]
	private static bool CheckNewValue(ref int currentValue, int newValue, char patternChar, ref System.DateTimeResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x600071F")]
	[Address(RVA = "0x3CA37F0", Offset = "0x3CA37F0", VA = "0x3CA37F0")]
	private static DateTime GetDateTimeNow(ref System.DateTimeResult result, ref DateTimeStyles styles)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000720")]
	[Address(RVA = "0x3CA6F00", Offset = "0x3CA6F00", VA = "0x3CA6F00")]
	private static bool CheckDefaultDateTime(ref System.DateTimeResult result, ref Calendar cal, DateTimeStyles styles)
	{
		return default(bool);
	}

	[Token(Token = "0x6000721")]
	[Address(RVA = "0x3CA9B30", Offset = "0x3CA9B30", VA = "0x3CA9B30")]
	private static string ExpandPredefinedFormat(ReadOnlySpan<char> format, ref DateTimeFormatInfo dtfi, ref System.ParsingInfo parseInfo, ref System.DateTimeResult result)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000722")]
	[Address(RVA = "0x3CA9EF0", Offset = "0x3CA9EF0", VA = "0x3CA9EF0")]
	private static bool ParseJapaneseEraStart(ref System.__DTString str, DateTimeFormatInfo dtfi)
	{
		return default(bool);
	}

	[Token(Token = "0x6000723")]
	[Address(RVA = "0x3CA9FD0", Offset = "0x3CA9FD0", VA = "0x3CA9FD0")]
	private static bool ParseByFormat(ref System.__DTString str, ref System.__DTString format, ref System.ParsingInfo parseInfo, DateTimeFormatInfo dtfi, ref System.DateTimeResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000724")]
	[Address(RVA = "0x3CAB9B0", Offset = "0x3CAB9B0", VA = "0x3CAB9B0")]
	internal static bool TryParseQuoteString(ReadOnlySpan<char> format, int pos, StringBuilder result, out int returnValue)
	{
		return default(bool);
	}

	[Token(Token = "0x6000725")]
	[Address(RVA = "0x3CA0010", Offset = "0x3CA0010", VA = "0x3CA0010")]
	private static bool DoStrictParse(ReadOnlySpan<char> s, ReadOnlySpan<char> formatParam, DateTimeStyles styles, DateTimeFormatInfo dtfi, ref System.DateTimeResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000726")]
	[Address(RVA = "0x3C9FE90", Offset = "0x3C9FE90", VA = "0x3C9FE90")]
	private static Exception GetDateTimeParseException(ref System.DateTimeResult result)
	{
		return null;
	}
}
