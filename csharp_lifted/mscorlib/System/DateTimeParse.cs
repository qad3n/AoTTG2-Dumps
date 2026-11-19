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
		[Token(Token = "0x4000264")]
		End,
		[Token(Token = "0x4000265")]
		NumEnd,
		[Token(Token = "0x4000266")]
		NumAmpm,
		[Token(Token = "0x4000267")]
		NumSpace,
		[Token(Token = "0x4000268")]
		NumDatesep,
		[Token(Token = "0x4000269")]
		NumTimesep,
		[Token(Token = "0x400026A")]
		MonthEnd,
		[Token(Token = "0x400026B")]
		MonthSpace,
		[Token(Token = "0x400026C")]
		MonthDatesep,
		[Token(Token = "0x400026D")]
		NumDatesuff,
		[Token(Token = "0x400026E")]
		NumTimesuff,
		[Token(Token = "0x400026F")]
		DayOfWeek,
		[Token(Token = "0x4000270")]
		YearSpace,
		[Token(Token = "0x4000271")]
		YearDateSep,
		[Token(Token = "0x4000272")]
		YearEnd,
		[Token(Token = "0x4000273")]
		TimeZone,
		[Token(Token = "0x4000274")]
		Era,
		[Token(Token = "0x4000275")]
		NumUTCTimeMark,
		[Token(Token = "0x4000276")]
		Unk,
		[Token(Token = "0x4000277")]
		NumLocalTimeMark,
		[Token(Token = "0x4000278")]
		Max
	}

	[Token(Token = "0x20000B7")]
	internal enum TM
	{
		[Token(Token = "0x400027A")]
		NotSet = -1,
		[Token(Token = "0x400027B")]
		AM,
		[Token(Token = "0x400027C")]
		PM
	}

	[Token(Token = "0x20000B8")]
	internal enum DS
	{
		[Token(Token = "0x400027E")]
		BEGIN,
		[Token(Token = "0x400027F")]
		N,
		[Token(Token = "0x4000280")]
		NN,
		[Token(Token = "0x4000281")]
		D_Nd,
		[Token(Token = "0x4000282")]
		D_NN,
		[Token(Token = "0x4000283")]
		D_NNd,
		[Token(Token = "0x4000284")]
		D_M,
		[Token(Token = "0x4000285")]
		D_MN,
		[Token(Token = "0x4000286")]
		D_NM,
		[Token(Token = "0x4000287")]
		D_MNd,
		[Token(Token = "0x4000288")]
		D_NDS,
		[Token(Token = "0x4000289")]
		D_Y,
		[Token(Token = "0x400028A")]
		D_YN,
		[Token(Token = "0x400028B")]
		D_YNd,
		[Token(Token = "0x400028C")]
		D_YM,
		[Token(Token = "0x400028D")]
		D_YMd,
		[Token(Token = "0x400028E")]
		D_S,
		[Token(Token = "0x400028F")]
		T_S,
		[Token(Token = "0x4000290")]
		T_Nt,
		[Token(Token = "0x4000291")]
		T_NNt,
		[Token(Token = "0x4000292")]
		ERROR,
		[Token(Token = "0x4000293")]
		DX_NN,
		[Token(Token = "0x4000294")]
		DX_NNN,
		[Token(Token = "0x4000295")]
		DX_MN,
		[Token(Token = "0x4000296")]
		DX_NM,
		[Token(Token = "0x4000297")]
		DX_MNN,
		[Token(Token = "0x4000298")]
		DX_DS,
		[Token(Token = "0x4000299")]
		DX_DSN,
		[Token(Token = "0x400029A")]
		DX_NDS,
		[Token(Token = "0x400029B")]
		DX_NNDS,
		[Token(Token = "0x400029C")]
		DX_YNN,
		[Token(Token = "0x400029D")]
		DX_YMN,
		[Token(Token = "0x400029E")]
		DX_YN,
		[Token(Token = "0x400029F")]
		DX_YM,
		[Token(Token = "0x40002A0")]
		TX_N,
		[Token(Token = "0x40002A1")]
		TX_NN,
		[Token(Token = "0x40002A2")]
		TX_NNN,
		[Token(Token = "0x40002A3")]
		TX_TS,
		[Token(Token = "0x40002A4")]
		DX_NNY
	}

	[Token(Token = "0x4000261")]
	[FieldOffset(Offset = "0x0")]
	internal static MatchNumberDelegate m_hebrewNumberParser;

	[Token(Token = "0x4000262")]
	[FieldOffset(Offset = "0x8")]
	private static DS[][] dateParsingStates;

	[Token(Token = "0x60006E1")]
	[Address(RVA = "0x5496F60", Offset = "0x5495F60", VA = "0x5496F60")]
	internal static DateTime ParseExact(ReadOnlySpan<char> s, ReadOnlySpan<char> format, DateTimeFormatInfo dtfi, DateTimeStyles style)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60006E2")]
	[Address(RVA = "0x549BC50", Offset = "0x549AC50", VA = "0x549BC50")]
	internal static DateTime ParseExact(ReadOnlySpan<char> s, ReadOnlySpan<char> format, DateTimeFormatInfo dtfi, DateTimeStyles style, out TimeSpan offset)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60006E3")]
	[Address(RVA = "0x5497F10", Offset = "0x5496F10", VA = "0x5497F10")]
	internal static bool TryParseExact(ReadOnlySpan<char> s, ReadOnlySpan<char> format, DateTimeFormatInfo dtfi, DateTimeStyles style, out DateTime result)
	{
		return default(bool);
	}

	[Token(Token = "0x60006E4")]
	[Address(RVA = "0x549CEC0", Offset = "0x549BEC0", VA = "0x549CEC0")]
	internal static bool TryParseExact(ReadOnlySpan<char> s, ReadOnlySpan<char> format, DateTimeFormatInfo dtfi, DateTimeStyles style, out DateTime result, out TimeSpan offset)
	{
		return default(bool);
	}

	[Token(Token = "0x60006E5")]
	[Address(RVA = "0x54A3AB0", Offset = "0x54A2AB0", VA = "0x54A3AB0")]
	internal static bool TryParseExact(ReadOnlySpan<char> s, ReadOnlySpan<char> format, DateTimeFormatInfo dtfi, DateTimeStyles style, ref System.DateTimeResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x60006E6")]
	[Address(RVA = "0x54971C0", Offset = "0x54961C0", VA = "0x54971C0")]
	internal static DateTime ParseExactMultiple(ReadOnlySpan<char> s, string[] formats, DateTimeFormatInfo dtfi, DateTimeStyles style)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60006E7")]
	[Address(RVA = "0x54A4640", Offset = "0x54A3640", VA = "0x54A4640")]
	internal static bool TryParseExactMultiple(ReadOnlySpan<char> s, string[] formats, DateTimeFormatInfo dtfi, DateTimeStyles style, ref System.DateTimeResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x60006E8")]
	[Address(RVA = "0x54A4920", Offset = "0x54A3920", VA = "0x54A4920")]
	private static bool MatchWord(ref System.__DTString str, string target)
	{
		return default(bool);
	}

	[Token(Token = "0x60006E9")]
	[Address(RVA = "0x54A4AE0", Offset = "0x54A3AE0", VA = "0x54A4AE0")]
	private static bool GetTimeZoneName(ref System.__DTString str)
	{
		return default(bool);
	}

	[Token(Token = "0x60006EA")]
	[Address(RVA = "0x54A4B80", Offset = "0x54A3B80", VA = "0x54A4B80")]
	internal static bool IsDigit(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x60006EB")]
	[Address(RVA = "0x54A4B90", Offset = "0x54A3B90", VA = "0x54A4B90")]
	private static bool ParseFraction(ref System.__DTString str, out double result)
	{
		return default(bool);
	}

	[Token(Token = "0x60006EC")]
	[Address(RVA = "0x54A4C80", Offset = "0x54A3C80", VA = "0x54A4C80")]
	private static bool ParseTimeZone(ref System.__DTString str, ref TimeSpan result)
	{
		return default(bool);
	}

	[Token(Token = "0x60006ED")]
	[Address(RVA = "0x54A5000", Offset = "0x54A4000", VA = "0x54A5000")]
	private static bool HandleTimeZone(ref System.__DTString str, ref System.DateTimeResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x60006EE")]
	[Address(RVA = "0x54A5170", Offset = "0x54A4170", VA = "0x54A5170")]
	private static bool Lex(DS dps, ref System.__DTString str, ref System.DateTimeToken dtok, ref System.DateTimeRawInfo raw, ref System.DateTimeResult result, ref DateTimeFormatInfo dtfi, DateTimeStyles styles)
	{
		return default(bool);
	}

	[Token(Token = "0x60006EF")]
	[Address(RVA = "0x54A6500", Offset = "0x54A5500", VA = "0x54A6500")]
	private static Calendar GetJapaneseCalendarDefaultInstance()
	{
		return null;
	}

	[Token(Token = "0x60006F0")]
	[Address(RVA = "0x54A6630", Offset = "0x54A5630", VA = "0x54A6630")]
	internal static Calendar GetTaiwanCalendarDefaultInstance()
	{
		return null;
	}

	[Token(Token = "0x60006F1")]
	[Address(RVA = "0x54A6760", Offset = "0x54A5760", VA = "0x54A6760")]
	private static bool VerifyValidPunctuation(ref System.__DTString str)
	{
		return default(bool);
	}

	[Token(Token = "0x60006F2")]
	[Address(RVA = "0x54A6930", Offset = "0x54A5930", VA = "0x54A6930")]
	private static bool GetYearMonthDayOrder(string datePattern, DateTimeFormatInfo dtfi, out int order)
	{
		return default(bool);
	}

	[Token(Token = "0x60006F3")]
	[Address(RVA = "0x54A6B80", Offset = "0x54A5B80", VA = "0x54A6B80")]
	private static bool GetYearMonthOrder(string pattern, DateTimeFormatInfo dtfi, out int order)
	{
		return default(bool);
	}

	[Token(Token = "0x60006F4")]
	[Address(RVA = "0x54A6D40", Offset = "0x54A5D40", VA = "0x54A6D40")]
	private static bool GetMonthDayOrder(string pattern, DateTimeFormatInfo dtfi, out int order)
	{
		return default(bool);
	}

	[Token(Token = "0x60006F5")]
	[Address(RVA = "0x54A6F30", Offset = "0x54A5F30", VA = "0x54A6F30")]
	private static bool TryAdjustYear(ref System.DateTimeResult result, int year, out int adjustedYear)
	{
		return default(bool);
	}

	[Token(Token = "0x60006F6")]
	[Address(RVA = "0x54A6FF0", Offset = "0x54A5FF0", VA = "0x54A6FF0")]
	private static bool SetDateYMD(ref System.DateTimeResult result, int year, int month, int day)
	{
		return default(bool);
	}

	[Token(Token = "0x60006F7")]
	[Address(RVA = "0x54A7050", Offset = "0x54A6050", VA = "0x54A7050")]
	private static bool SetDateMDY(ref System.DateTimeResult result, int month, int day, int year)
	{
		return default(bool);
	}

	[Token(Token = "0x60006F8")]
	[Address(RVA = "0x54A7110", Offset = "0x54A6110", VA = "0x54A7110")]
	private static bool SetDateDMY(ref System.DateTimeResult result, int day, int month, int year)
	{
		return default(bool);
	}

	[Token(Token = "0x60006F9")]
	[Address(RVA = "0x54A71D0", Offset = "0x54A61D0", VA = "0x54A71D0")]
	private static bool SetDateYDM(ref System.DateTimeResult result, int year, int day, int month)
	{
		return default(bool);
	}

	[Token(Token = "0x60006FA")]
	[Address(RVA = "0x54A7290", Offset = "0x54A6290", VA = "0x54A7290")]
	private static void GetDefaultYear(ref System.DateTimeResult result, ref DateTimeStyles styles)
	{
	}

	[Token(Token = "0x60006FB")]
	[Address(RVA = "0x54A7580", Offset = "0x54A6580", VA = "0x54A7580")]
	private static bool GetDayOfNN(ref System.DateTimeResult result, ref DateTimeStyles styles, ref System.DateTimeRawInfo raw, DateTimeFormatInfo dtfi)
	{
		return default(bool);
	}

	[Token(Token = "0x60006FC")]
	[Address(RVA = "0x54A77D0", Offset = "0x54A67D0", VA = "0x54A77D0")]
	private static bool GetDayOfNNN(ref System.DateTimeResult result, ref System.DateTimeRawInfo raw, DateTimeFormatInfo dtfi)
	{
		return default(bool);
	}

	[Token(Token = "0x60006FD")]
	[Address(RVA = "0x54A7B30", Offset = "0x54A6B30", VA = "0x54A7B30")]
	private static bool GetDayOfMN(ref System.DateTimeResult result, ref DateTimeStyles styles, ref System.DateTimeRawInfo raw, DateTimeFormatInfo dtfi)
	{
		return default(bool);
	}

	[Token(Token = "0x60006FE")]
	[Address(RVA = "0x54A7E00", Offset = "0x54A6E00", VA = "0x54A7E00")]
	private static bool GetHebrewDayOfNM(ref System.DateTimeResult result, ref System.DateTimeRawInfo raw, DateTimeFormatInfo dtfi)
	{
		return default(bool);
	}

	[Token(Token = "0x60006FF")]
	[Address(RVA = "0x54A7F40", Offset = "0x54A6F40", VA = "0x54A7F40")]
	private static bool GetDayOfNM(ref System.DateTimeResult result, ref DateTimeStyles styles, ref System.DateTimeRawInfo raw, DateTimeFormatInfo dtfi)
	{
		return default(bool);
	}

	[Token(Token = "0x6000700")]
	[Address(RVA = "0x54A8210", Offset = "0x54A7210", VA = "0x54A8210")]
	private static bool GetDayOfMNN(ref System.DateTimeResult result, ref System.DateTimeRawInfo raw, DateTimeFormatInfo dtfi)
	{
		return default(bool);
	}

	[Token(Token = "0x6000701")]
	[Address(RVA = "0x54A84F0", Offset = "0x54A74F0", VA = "0x54A84F0")]
	private static bool GetDayOfYNN(ref System.DateTimeResult result, ref System.DateTimeRawInfo raw, DateTimeFormatInfo dtfi)
	{
		return default(bool);
	}

	[Token(Token = "0x6000702")]
	[Address(RVA = "0x54A8670", Offset = "0x54A7670", VA = "0x54A8670")]
	private static bool GetDayOfNNY(ref System.DateTimeResult result, ref System.DateTimeRawInfo raw, DateTimeFormatInfo dtfi)
	{
		return default(bool);
	}

	[Token(Token = "0x6000703")]
	[Address(RVA = "0x54A8820", Offset = "0x54A7820", VA = "0x54A8820")]
	private static bool GetDayOfYMN(ref System.DateTimeResult result, ref System.DateTimeRawInfo raw)
	{
		return default(bool);
	}

	[Token(Token = "0x6000704")]
	[Address(RVA = "0x54A88E0", Offset = "0x54A78E0", VA = "0x54A88E0")]
	private static bool GetDayOfYN(ref System.DateTimeResult result, ref System.DateTimeRawInfo raw)
	{
		return default(bool);
	}

	[Token(Token = "0x6000705")]
	[Address(RVA = "0x54A89A0", Offset = "0x54A79A0", VA = "0x54A89A0")]
	private static bool GetDayOfYM(ref System.DateTimeResult result, ref System.DateTimeRawInfo raw)
	{
		return default(bool);
	}

	[Token(Token = "0x6000706")]
	[Address(RVA = "0x54A8A50", Offset = "0x54A7A50", VA = "0x54A8A50")]
	private static void AdjustTimeMark(DateTimeFormatInfo dtfi, ref System.DateTimeRawInfo raw)
	{
	}

	[Token(Token = "0x6000707")]
	[Address(RVA = "0x54A8B10", Offset = "0x54A7B10", VA = "0x54A8B10")]
	private static bool AdjustHour(ref int hour, TM timeMark)
	{
		return default(bool);
	}

	[Token(Token = "0x6000708")]
	[Address(RVA = "0x54A8B40", Offset = "0x54A7B40", VA = "0x54A8B40")]
	private static bool GetTimeOfN(ref System.DateTimeResult result, ref System.DateTimeRawInfo raw)
	{
		return default(bool);
	}

	[Token(Token = "0x6000709")]
	[Address(RVA = "0x54A8B90", Offset = "0x54A7B90", VA = "0x54A8B90")]
	private static bool GetTimeOfNN(ref System.DateTimeResult result, ref System.DateTimeRawInfo raw)
	{
		return default(bool);
	}

	[Token(Token = "0x600070A")]
	[Address(RVA = "0x54A8BE0", Offset = "0x54A7BE0", VA = "0x54A8BE0")]
	private static bool GetTimeOfNNN(ref System.DateTimeResult result, ref System.DateTimeRawInfo raw)
	{
		return default(bool);
	}

	[Token(Token = "0x600070B")]
	[Address(RVA = "0x54A8C50", Offset = "0x54A7C50", VA = "0x54A8C50")]
	private static bool GetDateOfDSN(ref System.DateTimeResult result, ref System.DateTimeRawInfo raw)
	{
		return default(bool);
	}

	[Token(Token = "0x600070C")]
	[Address(RVA = "0x54A8C90", Offset = "0x54A7C90", VA = "0x54A8C90")]
	private static bool GetDateOfNDS(ref System.DateTimeResult result, ref System.DateTimeRawInfo raw)
	{
		return default(bool);
	}

	[Token(Token = "0x600070D")]
	[Address(RVA = "0x54A8D20", Offset = "0x54A7D20", VA = "0x54A8D20")]
	private static bool GetDateOfNNDS(ref System.DateTimeResult result, ref System.DateTimeRawInfo raw, DateTimeFormatInfo dtfi)
	{
		return default(bool);
	}

	[Token(Token = "0x600070E")]
	[Address(RVA = "0x54A8FA0", Offset = "0x54A7FA0", VA = "0x54A8FA0")]
	private static bool ProcessDateTimeSuffix(ref System.DateTimeResult result, ref System.DateTimeRawInfo raw, ref System.DateTimeToken dtok)
	{
		return default(bool);
	}

	[Token(Token = "0x600070F")]
	[Address(RVA = "0x54A9070", Offset = "0x54A8070", VA = "0x54A9070")]
	internal static bool ProcessHebrewTerminalState(DS dps, ref System.__DTString str, ref System.DateTimeResult result, ref DateTimeStyles styles, ref System.DateTimeRawInfo raw, DateTimeFormatInfo dtfi)
	{
		return default(bool);
	}

	[Token(Token = "0x6000710")]
	[Address(RVA = "0x54A60E0", Offset = "0x54A50E0", VA = "0x54A60E0")]
	internal static bool ProcessTerminalState(DS dps, ref System.__DTString str, ref System.DateTimeResult result, ref DateTimeStyles styles, ref System.DateTimeRawInfo raw, DateTimeFormatInfo dtfi)
	{
		return default(bool);
	}

	[Token(Token = "0x6000711")]
	[Address(RVA = "0x5496BA0", Offset = "0x5495BA0", VA = "0x5496BA0")]
	internal static DateTime Parse(ReadOnlySpan<char> s, DateTimeFormatInfo dtfi, DateTimeStyles styles)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000712")]
	[Address(RVA = "0x549B8A0", Offset = "0x549A8A0", VA = "0x549B8A0")]
	internal static DateTime Parse(ReadOnlySpan<char> s, DateTimeFormatInfo dtfi, DateTimeStyles styles, out TimeSpan offset)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000713")]
	[Address(RVA = "0x5497CA0", Offset = "0x5496CA0", VA = "0x5497CA0")]
	internal static bool TryParse(ReadOnlySpan<char> s, DateTimeFormatInfo dtfi, DateTimeStyles styles, out DateTime result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000714")]
	[Address(RVA = "0x549CB30", Offset = "0x549BB30", VA = "0x549CB30")]
	internal static bool TryParse(ReadOnlySpan<char> s, DateTimeFormatInfo dtfi, DateTimeStyles styles, out DateTime result, out TimeSpan offset)
	{
		return default(bool);
	}

	[Token(Token = "0x6000715")]
	[Address(RVA = "0x54A9580", Offset = "0x54A8580", VA = "0x54A9580")]
	internal static bool TryParse(ReadOnlySpan<char> s, DateTimeFormatInfo dtfi, DateTimeStyles styles, ref System.DateTimeResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000716")]
	[Address(RVA = "0x54AA890", Offset = "0x54A9890", VA = "0x54AA890")]
	private static bool DetermineTimeZoneAdjustments(ref System.__DTString str, ref System.DateTimeResult result, DateTimeStyles styles, bool bTimeOnly)
	{
		return default(bool);
	}

	[Token(Token = "0x6000717")]
	[Address(RVA = "0x54AAC40", Offset = "0x54A9C40", VA = "0x54AAC40")]
	private static bool DateTimeOffsetTimeZonePostProcessing(ref System.__DTString str, ref System.DateTimeResult result, DateTimeStyles styles)
	{
		return default(bool);
	}

	[Token(Token = "0x6000718")]
	[Address(RVA = "0x54AAEE0", Offset = "0x54A9EE0", VA = "0x54AAEE0")]
	private static bool AdjustTimeZoneToUniversal(ref System.DateTimeResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000719")]
	[Address(RVA = "0x54AB040", Offset = "0x54AA040", VA = "0x54AB040")]
	private static bool AdjustTimeZoneToLocal(ref System.DateTimeResult result, bool bTimeOnly)
	{
		return default(bool);
	}

	[Token(Token = "0x600071A")]
	[Address(RVA = "0x54A9EA0", Offset = "0x54A8EA0", VA = "0x54A9EA0")]
	private static bool ParseISO8601(ref System.DateTimeRawInfo raw, ref System.__DTString str, DateTimeStyles styles, ref System.DateTimeResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x600071B")]
	[Address(RVA = "0x54AB410", Offset = "0x54AA410", VA = "0x54AB410")]
	internal static bool MatchHebrewDigits(ref System.__DTString str, int digitLen, out int number)
	{
		return default(bool);
	}

	[Token(Token = "0x600071C")]
	[Address(RVA = "0x54AB390", Offset = "0x54AA390", VA = "0x54AB390")]
	internal static bool ParseDigits(ref System.__DTString str, int digitLen, out int result)
	{
		return default(bool);
	}

	[Token(Token = "0x600071D")]
	[Address(RVA = "0x54AB510", Offset = "0x54AA510", VA = "0x54AB510")]
	internal static bool ParseDigits(ref System.__DTString str, int minDigitLen, int maxDigitLen, out int result)
	{
		return default(bool);
	}

	[Token(Token = "0x600071E")]
	[Address(RVA = "0x54AB6B0", Offset = "0x54AA6B0", VA = "0x54AB6B0")]
	private static bool ParseFractionExact(ref System.__DTString str, int maxDigitLen, ref double result)
	{
		return default(bool);
	}

	[Token(Token = "0x600071F")]
	[Address(RVA = "0x54AB990", Offset = "0x54AA990", VA = "0x54AB990")]
	private static bool ParseSign(ref System.__DTString str, ref bool result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000720")]
	[Address(RVA = "0x54ABA30", Offset = "0x54AAA30", VA = "0x54ABA30")]
	private static bool ParseTimeZoneOffset(ref System.__DTString str, int len, ref TimeSpan result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000721")]
	[Address(RVA = "0x54ABED0", Offset = "0x54AAED0", VA = "0x54ABED0")]
	private static bool MatchAbbreviatedMonthName(ref System.__DTString str, DateTimeFormatInfo dtfi, ref int result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000722")]
	[Address(RVA = "0x54AC0D0", Offset = "0x54AB0D0", VA = "0x54AC0D0")]
	private static bool MatchMonthName(ref System.__DTString str, DateTimeFormatInfo dtfi, ref int result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000723")]
	[Address(RVA = "0x54AC320", Offset = "0x54AB320", VA = "0x54AC320")]
	private static bool MatchAbbreviatedDayName(ref System.__DTString str, DateTimeFormatInfo dtfi, ref int result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000724")]
	[Address(RVA = "0x54AC790", Offset = "0x54AB790", VA = "0x54AC790")]
	private static bool MatchDayName(ref System.__DTString str, DateTimeFormatInfo dtfi, ref int result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000725")]
	[Address(RVA = "0x54ACC00", Offset = "0x54ABC00", VA = "0x54ACC00")]
	private static bool MatchEraName(ref System.__DTString str, DateTimeFormatInfo dtfi, ref int result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000726")]
	[Address(RVA = "0x54ACD90", Offset = "0x54ABD90", VA = "0x54ACD90")]
	private static bool MatchTimeMark(ref System.__DTString str, DateTimeFormatInfo dtfi, ref TM result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000727")]
	[Address(RVA = "0x54ACF30", Offset = "0x54ABF30", VA = "0x54ACF30")]
	private static bool MatchAbbreviatedTimeMark(ref System.__DTString str, DateTimeFormatInfo dtfi, ref TM result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000728")]
	[Address(RVA = "0x54AD070", Offset = "0x54AC070", VA = "0x54AD070")]
	private static bool CheckNewValue(ref int currentValue, int newValue, char patternChar, ref System.DateTimeResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000729")]
	[Address(RVA = "0x54A7310", Offset = "0x54A6310", VA = "0x54A7310")]
	private static DateTime GetDateTimeNow(ref System.DateTimeResult result, ref DateTimeStyles styles)
	{
		return default(DateTime);
	}

	[Token(Token = "0x600072A")]
	[Address(RVA = "0x54AA620", Offset = "0x54A9620", VA = "0x54AA620")]
	private static bool CheckDefaultDateTime(ref System.DateTimeResult result, ref Calendar cal, DateTimeStyles styles)
	{
		return default(bool);
	}

	[Token(Token = "0x600072B")]
	[Address(RVA = "0x54AD100", Offset = "0x54AC100", VA = "0x54AD100")]
	private static string ExpandPredefinedFormat(ReadOnlySpan<char> format, ref DateTimeFormatInfo dtfi, ref System.ParsingInfo parseInfo, ref System.DateTimeResult result)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600072C")]
	[Address(RVA = "0x54AD4C0", Offset = "0x54AC4C0", VA = "0x54AD4C0")]
	private static bool ParseJapaneseEraStart(ref System.__DTString str, DateTimeFormatInfo dtfi)
	{
		return default(bool);
	}

	[Token(Token = "0x600072D")]
	[Address(RVA = "0x54AD5A0", Offset = "0x54AC5A0", VA = "0x54AD5A0")]
	private static bool ParseByFormat(ref System.__DTString str, ref System.__DTString format, ref System.ParsingInfo parseInfo, DateTimeFormatInfo dtfi, ref System.DateTimeResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x600072E")]
	[Address(RVA = "0x54AEB60", Offset = "0x54ADB60", VA = "0x54AEB60")]
	internal static bool TryParseQuoteString(ReadOnlySpan<char> format, int pos, StringBuilder result, out int returnValue)
	{
		return default(bool);
	}

	[Token(Token = "0x600072F")]
	[Address(RVA = "0x54A3D00", Offset = "0x54A2D00", VA = "0x54A3D00")]
	private static bool DoStrictParse(ReadOnlySpan<char> s, ReadOnlySpan<char> formatParam, DateTimeStyles styles, DateTimeFormatInfo dtfi, ref System.DateTimeResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000730")]
	[Address(RVA = "0x54A3B80", Offset = "0x54A2B80", VA = "0x54A3B80")]
	private static Exception GetDateTimeParseException(ref System.DateTimeResult result)
	{
		return null;
	}
}
