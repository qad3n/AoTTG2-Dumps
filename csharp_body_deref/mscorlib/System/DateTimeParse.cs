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
	[Address(RVA = "0x4FAD6D0", Offset = "0x4FAD6D0", VA = "0x4FAD6D0")]
	internal static DateTime ParseExact(ReadOnlySpan<char> s, ReadOnlySpan<char> format, DateTimeFormatInfo dtfi, DateTimeStyles style)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60006D8")]
	[Address(RVA = "0x4FB2410", Offset = "0x4FB2410", VA = "0x4FB2410")]
	internal static DateTime ParseExact(ReadOnlySpan<char> s, ReadOnlySpan<char> format, DateTimeFormatInfo dtfi, DateTimeStyles style, out TimeSpan offset)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60006D9")]
	[Address(RVA = "0x4FAE6F0", Offset = "0x4FAE6F0", VA = "0x4FAE6F0")]
	internal static bool TryParseExact(ReadOnlySpan<char> s, ReadOnlySpan<char> format, DateTimeFormatInfo dtfi, DateTimeStyles style, out DateTime result)
	{
		return default(bool);
	}

	[Token(Token = "0x60006DA")]
	[Address(RVA = "0x4FB36A0", Offset = "0x4FB36A0", VA = "0x4FB36A0")]
	internal static bool TryParseExact(ReadOnlySpan<char> s, ReadOnlySpan<char> format, DateTimeFormatInfo dtfi, DateTimeStyles style, out DateTime result, out TimeSpan offset)
	{
		return default(bool);
	}

	[Token(Token = "0x60006DB")]
	[Address(RVA = "0x4FBA2A0", Offset = "0x4FBA2A0", VA = "0x4FBA2A0")]
	internal static bool TryParseExact(ReadOnlySpan<char> s, ReadOnlySpan<char> format, DateTimeFormatInfo dtfi, DateTimeStyles style, ref System.DateTimeResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x60006DC")]
	[Address(RVA = "0x4FAD930", Offset = "0x4FAD930", VA = "0x4FAD930")]
	internal static DateTime ParseExactMultiple(ReadOnlySpan<char> s, string[] formats, DateTimeFormatInfo dtfi, DateTimeStyles style)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60006DD")]
	[Address(RVA = "0x4FBAEF0", Offset = "0x4FBAEF0", VA = "0x4FBAEF0")]
	internal static bool TryParseExactMultiple(ReadOnlySpan<char> s, string[] formats, DateTimeFormatInfo dtfi, DateTimeStyles style, ref System.DateTimeResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x60006DE")]
	[Address(RVA = "0x4FBB1D0", Offset = "0x4FBB1D0", VA = "0x4FBB1D0")]
	private static bool MatchWord(ref System.__DTString str, string target)
	{
		return default(bool);
	}

	[Token(Token = "0x60006DF")]
	[Address(RVA = "0x4FBB380", Offset = "0x4FBB380", VA = "0x4FBB380")]
	private static bool GetTimeZoneName(ref System.__DTString str)
	{
		return default(bool);
	}

	[Token(Token = "0x60006E0")]
	[Address(RVA = "0x4FBB420", Offset = "0x4FBB420", VA = "0x4FBB420")]
	internal static bool IsDigit(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x60006E1")]
	[Address(RVA = "0x4FBB430", Offset = "0x4FBB430", VA = "0x4FBB430")]
	private static bool ParseFraction(ref System.__DTString str, out double result)
	{
		return default(bool);
	}

	[Token(Token = "0x60006E2")]
	[Address(RVA = "0x4FBB520", Offset = "0x4FBB520", VA = "0x4FBB520")]
	private static bool ParseTimeZone(ref System.__DTString str, ref TimeSpan result)
	{
		return default(bool);
	}

	[Token(Token = "0x60006E3")]
	[Address(RVA = "0x4FBB8A0", Offset = "0x4FBB8A0", VA = "0x4FBB8A0")]
	private static bool HandleTimeZone(ref System.__DTString str, ref System.DateTimeResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x60006E4")]
	[Address(RVA = "0x4FBBA20", Offset = "0x4FBBA20", VA = "0x4FBBA20")]
	private static bool Lex(DS dps, ref System.__DTString str, ref System.DateTimeToken dtok, ref System.DateTimeRawInfo raw, ref System.DateTimeResult result, ref DateTimeFormatInfo dtfi, DateTimeStyles styles)
	{
		return default(bool);
	}

	[Token(Token = "0x60006E5")]
	[Address(RVA = "0x4FBCE20", Offset = "0x4FBCE20", VA = "0x4FBCE20")]
	private static Calendar GetJapaneseCalendarDefaultInstance()
	{
		return null;
	}

	[Token(Token = "0x60006E6")]
	[Address(RVA = "0x4FBCF50", Offset = "0x4FBCF50", VA = "0x4FBCF50")]
	internal static Calendar GetTaiwanCalendarDefaultInstance()
	{
		return null;
	}

	[Token(Token = "0x60006E7")]
	[Address(RVA = "0x4FBD080", Offset = "0x4FBD080", VA = "0x4FBD080")]
	private static bool VerifyValidPunctuation(ref System.__DTString str)
	{
		return default(bool);
	}

	[Token(Token = "0x60006E8")]
	[Address(RVA = "0x4FBD270", Offset = "0x4FBD270", VA = "0x4FBD270")]
	private static bool GetYearMonthDayOrder(string datePattern, DateTimeFormatInfo dtfi, out int order)
	{
		return default(bool);
	}

	[Token(Token = "0x60006E9")]
	[Address(RVA = "0x4FBD500", Offset = "0x4FBD500", VA = "0x4FBD500")]
	private static bool GetYearMonthOrder(string pattern, DateTimeFormatInfo dtfi, out int order)
	{
		return default(bool);
	}

	[Token(Token = "0x60006EA")]
	[Address(RVA = "0x4FBD6E0", Offset = "0x4FBD6E0", VA = "0x4FBD6E0")]
	private static bool GetMonthDayOrder(string pattern, DateTimeFormatInfo dtfi, out int order)
	{
		return default(bool);
	}

	[Token(Token = "0x60006EB")]
	[Address(RVA = "0x4FBD8F0", Offset = "0x4FBD8F0", VA = "0x4FBD8F0")]
	private static bool TryAdjustYear(ref System.DateTimeResult result, int year, out int adjustedYear)
	{
		return default(bool);
	}

	[Token(Token = "0x60006EC")]
	[Address(RVA = "0x4FBD9B0", Offset = "0x4FBD9B0", VA = "0x4FBD9B0")]
	private static bool SetDateYMD(ref System.DateTimeResult result, int year, int month, int day)
	{
		return default(bool);
	}

	[Token(Token = "0x60006ED")]
	[Address(RVA = "0x4FBDA10", Offset = "0x4FBDA10", VA = "0x4FBDA10")]
	private static bool SetDateMDY(ref System.DateTimeResult result, int month, int day, int year)
	{
		return default(bool);
	}

	[Token(Token = "0x60006EE")]
	[Address(RVA = "0x4FBDAD0", Offset = "0x4FBDAD0", VA = "0x4FBDAD0")]
	private static bool SetDateDMY(ref System.DateTimeResult result, int day, int month, int year)
	{
		return default(bool);
	}

	[Token(Token = "0x60006EF")]
	[Address(RVA = "0x4FBDB90", Offset = "0x4FBDB90", VA = "0x4FBDB90")]
	private static bool SetDateYDM(ref System.DateTimeResult result, int year, int day, int month)
	{
		return default(bool);
	}

	[Token(Token = "0x60006F0")]
	[Address(RVA = "0x4FBDC50", Offset = "0x4FBDC50", VA = "0x4FBDC50")]
	private static void GetDefaultYear(ref System.DateTimeResult result, ref DateTimeStyles styles)
	{
	}

	[Token(Token = "0x60006F1")]
	[Address(RVA = "0x4FBDF40", Offset = "0x4FBDF40", VA = "0x4FBDF40")]
	private static bool GetDayOfNN(ref System.DateTimeResult result, ref DateTimeStyles styles, ref System.DateTimeRawInfo raw, DateTimeFormatInfo dtfi)
	{
		return default(bool);
	}

	[Token(Token = "0x60006F2")]
	[Address(RVA = "0x4FBE190", Offset = "0x4FBE190", VA = "0x4FBE190")]
	private static bool GetDayOfNNN(ref System.DateTimeResult result, ref System.DateTimeRawInfo raw, DateTimeFormatInfo dtfi)
	{
		return default(bool);
	}

	[Token(Token = "0x60006F3")]
	[Address(RVA = "0x4FBE610", Offset = "0x4FBE610", VA = "0x4FBE610")]
	private static bool GetDayOfMN(ref System.DateTimeResult result, ref DateTimeStyles styles, ref System.DateTimeRawInfo raw, DateTimeFormatInfo dtfi)
	{
		return default(bool);
	}

	[Token(Token = "0x60006F4")]
	[Address(RVA = "0x4FBE910", Offset = "0x4FBE910", VA = "0x4FBE910")]
	private static bool GetHebrewDayOfNM(ref System.DateTimeResult result, ref System.DateTimeRawInfo raw, DateTimeFormatInfo dtfi)
	{
		return default(bool);
	}

	[Token(Token = "0x60006F5")]
	[Address(RVA = "0x4FBEA50", Offset = "0x4FBEA50", VA = "0x4FBEA50")]
	private static bool GetDayOfNM(ref System.DateTimeResult result, ref DateTimeStyles styles, ref System.DateTimeRawInfo raw, DateTimeFormatInfo dtfi)
	{
		return default(bool);
	}

	[Token(Token = "0x60006F6")]
	[Address(RVA = "0x4FBED50", Offset = "0x4FBED50", VA = "0x4FBED50")]
	private static bool GetDayOfMNN(ref System.DateTimeResult result, ref System.DateTimeRawInfo raw, DateTimeFormatInfo dtfi)
	{
		return default(bool);
	}

	[Token(Token = "0x60006F7")]
	[Address(RVA = "0x4FBF030", Offset = "0x4FBF030", VA = "0x4FBF030")]
	private static bool GetDayOfYNN(ref System.DateTimeResult result, ref System.DateTimeRawInfo raw, DateTimeFormatInfo dtfi)
	{
		return default(bool);
	}

	[Token(Token = "0x60006F8")]
	[Address(RVA = "0x4FBF1A0", Offset = "0x4FBF1A0", VA = "0x4FBF1A0")]
	private static bool GetDayOfNNY(ref System.DateTimeResult result, ref System.DateTimeRawInfo raw, DateTimeFormatInfo dtfi)
	{
		return default(bool);
	}

	[Token(Token = "0x60006F9")]
	[Address(RVA = "0x4FBF350", Offset = "0x4FBF350", VA = "0x4FBF350")]
	private static bool GetDayOfYMN(ref System.DateTimeResult result, ref System.DateTimeRawInfo raw)
	{
		return default(bool);
	}

	[Token(Token = "0x60006FA")]
	[Address(RVA = "0x4FBF410", Offset = "0x4FBF410", VA = "0x4FBF410")]
	private static bool GetDayOfYN(ref System.DateTimeResult result, ref System.DateTimeRawInfo raw)
	{
		return default(bool);
	}

	[Token(Token = "0x60006FB")]
	[Address(RVA = "0x4FBF4D0", Offset = "0x4FBF4D0", VA = "0x4FBF4D0")]
	private static bool GetDayOfYM(ref System.DateTimeResult result, ref System.DateTimeRawInfo raw)
	{
		return default(bool);
	}

	[Token(Token = "0x60006FC")]
	[Address(RVA = "0x4FBF580", Offset = "0x4FBF580", VA = "0x4FBF580")]
	private static void AdjustTimeMark(DateTimeFormatInfo dtfi, ref System.DateTimeRawInfo raw)
	{
	}

	[Token(Token = "0x60006FD")]
	[Address(RVA = "0x4FBF640", Offset = "0x4FBF640", VA = "0x4FBF640")]
	private static bool AdjustHour(ref int hour, TM timeMark)
	{
		return default(bool);
	}

	[Token(Token = "0x60006FE")]
	[Address(RVA = "0x4FBF670", Offset = "0x4FBF670", VA = "0x4FBF670")]
	private static bool GetTimeOfN(ref System.DateTimeResult result, ref System.DateTimeRawInfo raw)
	{
		return default(bool);
	}

	[Token(Token = "0x60006FF")]
	[Address(RVA = "0x4FBF6C0", Offset = "0x4FBF6C0", VA = "0x4FBF6C0")]
	private static bool GetTimeOfNN(ref System.DateTimeResult result, ref System.DateTimeRawInfo raw)
	{
		return default(bool);
	}

	[Token(Token = "0x6000700")]
	[Address(RVA = "0x4FBF720", Offset = "0x4FBF720", VA = "0x4FBF720")]
	private static bool GetTimeOfNNN(ref System.DateTimeResult result, ref System.DateTimeRawInfo raw)
	{
		return default(bool);
	}

	[Token(Token = "0x6000701")]
	[Address(RVA = "0x4FBF790", Offset = "0x4FBF790", VA = "0x4FBF790")]
	private static bool GetDateOfDSN(ref System.DateTimeResult result, ref System.DateTimeRawInfo raw)
	{
		return default(bool);
	}

	[Token(Token = "0x6000702")]
	[Address(RVA = "0x4FBF7D0", Offset = "0x4FBF7D0", VA = "0x4FBF7D0")]
	private static bool GetDateOfNDS(ref System.DateTimeResult result, ref System.DateTimeRawInfo raw)
	{
		return default(bool);
	}

	[Token(Token = "0x6000703")]
	[Address(RVA = "0x4FBF860", Offset = "0x4FBF860", VA = "0x4FBF860")]
	private static bool GetDateOfNNDS(ref System.DateTimeResult result, ref System.DateTimeRawInfo raw, DateTimeFormatInfo dtfi)
	{
		return default(bool);
	}

	[Token(Token = "0x6000704")]
	[Address(RVA = "0x4FBFB00", Offset = "0x4FBFB00", VA = "0x4FBFB00")]
	private static bool ProcessDateTimeSuffix(ref System.DateTimeResult result, ref System.DateTimeRawInfo raw, ref System.DateTimeToken dtok)
	{
		return default(bool);
	}

	[Token(Token = "0x6000705")]
	[Address(RVA = "0x4FBFBD0", Offset = "0x4FBFBD0", VA = "0x4FBFBD0")]
	internal static bool ProcessHebrewTerminalState(DS dps, ref System.__DTString str, ref System.DateTimeResult result, ref DateTimeStyles styles, ref System.DateTimeRawInfo raw, DateTimeFormatInfo dtfi)
	{
		return default(bool);
	}

	[Token(Token = "0x6000706")]
	[Address(RVA = "0x4FBCA00", Offset = "0x4FBCA00", VA = "0x4FBCA00")]
	internal static bool ProcessTerminalState(DS dps, ref System.__DTString str, ref System.DateTimeResult result, ref DateTimeStyles styles, ref System.DateTimeRawInfo raw, DateTimeFormatInfo dtfi)
	{
		return default(bool);
	}

	[Token(Token = "0x6000707")]
	[Address(RVA = "0x4FAD300", Offset = "0x4FAD300", VA = "0x4FAD300")]
	internal static DateTime Parse(ReadOnlySpan<char> s, DateTimeFormatInfo dtfi, DateTimeStyles styles)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000708")]
	[Address(RVA = "0x4FB2050", Offset = "0x4FB2050", VA = "0x4FB2050")]
	internal static DateTime Parse(ReadOnlySpan<char> s, DateTimeFormatInfo dtfi, DateTimeStyles styles, out TimeSpan offset)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000709")]
	[Address(RVA = "0x4FAE450", Offset = "0x4FAE450", VA = "0x4FAE450")]
	internal static bool TryParse(ReadOnlySpan<char> s, DateTimeFormatInfo dtfi, DateTimeStyles styles, out DateTime result)
	{
		return default(bool);
	}

	[Token(Token = "0x600070A")]
	[Address(RVA = "0x4FB32E0", Offset = "0x4FB32E0", VA = "0x4FB32E0")]
	internal static bool TryParse(ReadOnlySpan<char> s, DateTimeFormatInfo dtfi, DateTimeStyles styles, out DateTime result, out TimeSpan offset)
	{
		return default(bool);
	}

	[Token(Token = "0x600070B")]
	[Address(RVA = "0x4FC00D0", Offset = "0x4FC00D0", VA = "0x4FC00D0")]
	internal static bool TryParse(ReadOnlySpan<char> s, DateTimeFormatInfo dtfi, DateTimeStyles styles, ref System.DateTimeResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x600070C")]
	[Address(RVA = "0x4FC16A0", Offset = "0x4FC16A0", VA = "0x4FC16A0")]
	private static bool DetermineTimeZoneAdjustments(ref System.__DTString str, ref System.DateTimeResult result, DateTimeStyles styles, bool bTimeOnly)
	{
		return default(bool);
	}

	[Token(Token = "0x600070D")]
	[Address(RVA = "0x4FC1AD0", Offset = "0x4FC1AD0", VA = "0x4FC1AD0")]
	private static bool DateTimeOffsetTimeZonePostProcessing(ref System.__DTString str, ref System.DateTimeResult result, DateTimeStyles styles)
	{
		return default(bool);
	}

	[Token(Token = "0x600070E")]
	[Address(RVA = "0x4FC1D70", Offset = "0x4FC1D70", VA = "0x4FC1D70")]
	private static bool AdjustTimeZoneToUniversal(ref System.DateTimeResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x600070F")]
	[Address(RVA = "0x4FC1ED0", Offset = "0x4FC1ED0", VA = "0x4FC1ED0")]
	private static bool AdjustTimeZoneToLocal(ref System.DateTimeResult result, bool bTimeOnly)
	{
		return default(bool);
	}

	[Token(Token = "0x6000710")]
	[Address(RVA = "0x4FC0B20", Offset = "0x4FC0B20", VA = "0x4FC0B20")]
	private static bool ParseISO8601(ref System.DateTimeRawInfo raw, ref System.__DTString str, DateTimeStyles styles, ref System.DateTimeResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000711")]
	[Address(RVA = "0x4FC2290", Offset = "0x4FC2290", VA = "0x4FC2290")]
	internal static bool MatchHebrewDigits(ref System.__DTString str, int digitLen, out int number)
	{
		return default(bool);
	}

	[Token(Token = "0x6000712")]
	[Address(RVA = "0x4FC2210", Offset = "0x4FC2210", VA = "0x4FC2210")]
	internal static bool ParseDigits(ref System.__DTString str, int digitLen, out int result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000713")]
	[Address(RVA = "0x4FC2390", Offset = "0x4FC2390", VA = "0x4FC2390")]
	internal static bool ParseDigits(ref System.__DTString str, int minDigitLen, int maxDigitLen, out int result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000714")]
	[Address(RVA = "0x4FC2560", Offset = "0x4FC2560", VA = "0x4FC2560")]
	private static bool ParseFractionExact(ref System.__DTString str, int maxDigitLen, ref double result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000715")]
	[Address(RVA = "0x4FC2850", Offset = "0x4FC2850", VA = "0x4FC2850")]
	private static bool ParseSign(ref System.__DTString str, ref bool result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000716")]
	[Address(RVA = "0x4FC28F0", Offset = "0x4FC28F0", VA = "0x4FC28F0")]
	private static bool ParseTimeZoneOffset(ref System.__DTString str, int len, ref TimeSpan result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000717")]
	[Address(RVA = "0x4FC2CF0", Offset = "0x4FC2CF0", VA = "0x4FC2CF0")]
	private static bool MatchAbbreviatedMonthName(ref System.__DTString str, DateTimeFormatInfo dtfi, ref int result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000718")]
	[Address(RVA = "0x4FC2ED0", Offset = "0x4FC2ED0", VA = "0x4FC2ED0")]
	private static bool MatchMonthName(ref System.__DTString str, DateTimeFormatInfo dtfi, ref int result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000719")]
	[Address(RVA = "0x4FC3110", Offset = "0x4FC3110", VA = "0x4FC3110")]
	private static bool MatchAbbreviatedDayName(ref System.__DTString str, DateTimeFormatInfo dtfi, ref int result)
	{
		return default(bool);
	}

	[Token(Token = "0x600071A")]
	[Address(RVA = "0x4FC3620", Offset = "0x4FC3620", VA = "0x4FC3620")]
	private static bool MatchDayName(ref System.__DTString str, DateTimeFormatInfo dtfi, ref int result)
	{
		return default(bool);
	}

	[Token(Token = "0x600071B")]
	[Address(RVA = "0x4FC3B30", Offset = "0x4FC3B30", VA = "0x4FC3B30")]
	private static bool MatchEraName(ref System.__DTString str, DateTimeFormatInfo dtfi, ref int result)
	{
		return default(bool);
	}

	[Token(Token = "0x600071C")]
	[Address(RVA = "0x4FC3CC0", Offset = "0x4FC3CC0", VA = "0x4FC3CC0")]
	private static bool MatchTimeMark(ref System.__DTString str, DateTimeFormatInfo dtfi, ref TM result)
	{
		return default(bool);
	}

	[Token(Token = "0x600071D")]
	[Address(RVA = "0x4FC3E50", Offset = "0x4FC3E50", VA = "0x4FC3E50")]
	private static bool MatchAbbreviatedTimeMark(ref System.__DTString str, DateTimeFormatInfo dtfi, ref TM result)
	{
		return default(bool);
	}

	[Token(Token = "0x600071E")]
	[Address(RVA = "0x4FC3F80", Offset = "0x4FC3F80", VA = "0x4FC3F80")]
	private static bool CheckNewValue(ref int currentValue, int newValue, char patternChar, ref System.DateTimeResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x600071F")]
	[Address(RVA = "0x4FBDCD0", Offset = "0x4FBDCD0", VA = "0x4FBDCD0")]
	private static DateTime GetDateTimeNow(ref System.DateTimeResult result, ref DateTimeStyles styles)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000720")]
	[Address(RVA = "0x4FC13E0", Offset = "0x4FC13E0", VA = "0x4FC13E0")]
	private static bool CheckDefaultDateTime(ref System.DateTimeResult result, ref Calendar cal, DateTimeStyles styles)
	{
		return default(bool);
	}

	[Token(Token = "0x6000721")]
	[Address(RVA = "0x4FC4010", Offset = "0x4FC4010", VA = "0x4FC4010")]
	private static string ExpandPredefinedFormat(ReadOnlySpan<char> format, ref DateTimeFormatInfo dtfi, ref System.ParsingInfo parseInfo, ref System.DateTimeResult result)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000722")]
	[Address(RVA = "0x4FC43D0", Offset = "0x4FC43D0", VA = "0x4FC43D0")]
	private static bool ParseJapaneseEraStart(ref System.__DTString str, DateTimeFormatInfo dtfi)
	{
		return default(bool);
	}

	[Token(Token = "0x6000723")]
	[Address(RVA = "0x4FC44B0", Offset = "0x4FC44B0", VA = "0x4FC44B0")]
	private static bool ParseByFormat(ref System.__DTString str, ref System.__DTString format, ref System.ParsingInfo parseInfo, DateTimeFormatInfo dtfi, ref System.DateTimeResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000724")]
	[Address(RVA = "0x4FC5E90", Offset = "0x4FC5E90", VA = "0x4FC5E90")]
	internal static bool TryParseQuoteString(ReadOnlySpan<char> format, int pos, StringBuilder result, out int returnValue)
	{
		return default(bool);
	}

	[Token(Token = "0x6000725")]
	[Address(RVA = "0x4FBA4F0", Offset = "0x4FBA4F0", VA = "0x4FBA4F0")]
	private static bool DoStrictParse(ReadOnlySpan<char> s, ReadOnlySpan<char> formatParam, DateTimeStyles styles, DateTimeFormatInfo dtfi, ref System.DateTimeResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000726")]
	[Address(RVA = "0x4FBA370", Offset = "0x4FBA370", VA = "0x4FBA370")]
	private static Exception GetDateTimeParseException(ref System.DateTimeResult result)
	{
		return null;
	}
}
