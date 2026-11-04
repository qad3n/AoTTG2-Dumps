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

[Token(Token = "0x20000DC")]
internal static class DateTimeParse
{
	[Token(Token = "0x20000DD")]
	internal delegate bool MatchNumberDelegate(ref System.__DTString str, int digitLen, out int result);

	[Token(Token = "0x20000DE")]
	internal enum DTT
	{
		[Token(Token = "0x4000309")]
		End,
		[Token(Token = "0x400030A")]
		NumEnd,
		[Token(Token = "0x400030B")]
		NumAmpm,
		[Token(Token = "0x400030C")]
		NumSpace,
		[Token(Token = "0x400030D")]
		NumDatesep,
		[Token(Token = "0x400030E")]
		NumTimesep,
		[Token(Token = "0x400030F")]
		MonthEnd,
		[Token(Token = "0x4000310")]
		MonthSpace,
		[Token(Token = "0x4000311")]
		MonthDatesep,
		[Token(Token = "0x4000312")]
		NumDatesuff,
		[Token(Token = "0x4000313")]
		NumTimesuff,
		[Token(Token = "0x4000314")]
		DayOfWeek,
		[Token(Token = "0x4000315")]
		YearSpace,
		[Token(Token = "0x4000316")]
		YearDateSep,
		[Token(Token = "0x4000317")]
		YearEnd,
		[Token(Token = "0x4000318")]
		TimeZone,
		[Token(Token = "0x4000319")]
		Era,
		[Token(Token = "0x400031A")]
		NumUTCTimeMark,
		[Token(Token = "0x400031B")]
		Unk,
		[Token(Token = "0x400031C")]
		NumLocalTimeMark,
		[Token(Token = "0x400031D")]
		Max
	}

	[Token(Token = "0x20000DF")]
	internal enum TM
	{
		[Token(Token = "0x400031F")]
		NotSet = -1,
		[Token(Token = "0x4000320")]
		AM,
		[Token(Token = "0x4000321")]
		PM
	}

	[Token(Token = "0x20000E0")]
	internal enum DS
	{
		[Token(Token = "0x4000323")]
		BEGIN,
		[Token(Token = "0x4000324")]
		N,
		[Token(Token = "0x4000325")]
		NN,
		[Token(Token = "0x4000326")]
		D_Nd,
		[Token(Token = "0x4000327")]
		D_NN,
		[Token(Token = "0x4000328")]
		D_NNd,
		[Token(Token = "0x4000329")]
		D_M,
		[Token(Token = "0x400032A")]
		D_MN,
		[Token(Token = "0x400032B")]
		D_NM,
		[Token(Token = "0x400032C")]
		D_MNd,
		[Token(Token = "0x400032D")]
		D_NDS,
		[Token(Token = "0x400032E")]
		D_Y,
		[Token(Token = "0x400032F")]
		D_YN,
		[Token(Token = "0x4000330")]
		D_YNd,
		[Token(Token = "0x4000331")]
		D_YM,
		[Token(Token = "0x4000332")]
		D_YMd,
		[Token(Token = "0x4000333")]
		D_S,
		[Token(Token = "0x4000334")]
		T_S,
		[Token(Token = "0x4000335")]
		T_Nt,
		[Token(Token = "0x4000336")]
		T_NNt,
		[Token(Token = "0x4000337")]
		ERROR,
		[Token(Token = "0x4000338")]
		DX_NN,
		[Token(Token = "0x4000339")]
		DX_NNN,
		[Token(Token = "0x400033A")]
		DX_MN,
		[Token(Token = "0x400033B")]
		DX_NM,
		[Token(Token = "0x400033C")]
		DX_MNN,
		[Token(Token = "0x400033D")]
		DX_DS,
		[Token(Token = "0x400033E")]
		DX_DSN,
		[Token(Token = "0x400033F")]
		DX_NDS,
		[Token(Token = "0x4000340")]
		DX_NNDS,
		[Token(Token = "0x4000341")]
		DX_YNN,
		[Token(Token = "0x4000342")]
		DX_YMN,
		[Token(Token = "0x4000343")]
		DX_YN,
		[Token(Token = "0x4000344")]
		DX_YM,
		[Token(Token = "0x4000345")]
		TX_N,
		[Token(Token = "0x4000346")]
		TX_NN,
		[Token(Token = "0x4000347")]
		TX_NNN,
		[Token(Token = "0x4000348")]
		TX_TS,
		[Token(Token = "0x4000349")]
		DX_NNY
	}

	[Token(Token = "0x4000306")]
	[FieldOffset(Offset = "0x0")]
	internal static MatchNumberDelegate m_hebrewNumberParser;

	[Token(Token = "0x4000307")]
	[FieldOffset(Offset = "0x8")]
	private static DS[][] dateParsingStates;

	[Token(Token = "0x6000706")]
	[Address(RVA = "0x1B181D0", Offset = "0x1B167D0", VA = "0x181B181D0")]
	internal static DateTime ParseExact(ReadOnlySpan<char> s, ReadOnlySpan<char> format, DateTimeFormatInfo dtfi, DateTimeStyles style)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000707")]
	[Address(RVA = "0x1B17FB0", Offset = "0x1B165B0", VA = "0x181B17FB0")]
	internal static DateTime ParseExact(ReadOnlySpan<char> s, ReadOnlySpan<char> format, DateTimeFormatInfo dtfi, DateTimeStyles style, out TimeSpan offset)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000708")]
	[Address(RVA = "0x1B1AC10", Offset = "0x1B19210", VA = "0x181B1AC10")]
	internal static bool TryParseExact(ReadOnlySpan<char> s, ReadOnlySpan<char> format, DateTimeFormatInfo dtfi, DateTimeStyles style, out DateTime result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000709")]
	[Address(RVA = "0x1B1AE10", Offset = "0x1B19410", VA = "0x181B1AE10")]
	internal static bool TryParseExact(ReadOnlySpan<char> s, ReadOnlySpan<char> format, DateTimeFormatInfo dtfi, DateTimeStyles style, out DateTime result, out TimeSpan offset)
	{
		return default(bool);
	}

	[Token(Token = "0x600070A")]
	[Address(RVA = "0x1B1AB20", Offset = "0x1B19120", VA = "0x181B1AB20")]
	internal static bool TryParseExact(ReadOnlySpan<char> s, ReadOnlySpan<char> format, DateTimeFormatInfo dtfi, DateTimeStyles style, ref System.DateTimeResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x600070B")]
	[Address(RVA = "0x1B17E90", Offset = "0x1B16490", VA = "0x181B17E90")]
	internal static DateTime ParseExactMultiple(ReadOnlySpan<char> s, string[] formats, DateTimeFormatInfo dtfi, DateTimeStyles style)
	{
		return default(DateTime);
	}

	[Token(Token = "0x600070C")]
	[Address(RVA = "0x1B1A740", Offset = "0x1B18D40", VA = "0x181B1A740")]
	internal static bool TryParseExactMultiple(ReadOnlySpan<char> s, string[] formats, DateTimeFormatInfo dtfi, DateTimeStyles style, ref System.DateTimeResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x600070D")]
	[Address(RVA = "0x1B161D0", Offset = "0x1B147D0", VA = "0x181B161D0")]
	private static bool MatchWord(ref System.__DTString str, string target)
	{
		return default(bool);
	}

	[Token(Token = "0x600070E")]
	[Address(RVA = "0x1B13F10", Offset = "0x1B12510", VA = "0x181B13F10")]
	private static bool GetTimeZoneName(ref System.__DTString str)
	{
		return default(bool);
	}

	[Token(Token = "0x600070F")]
	[Address(RVA = "0x1B14530", Offset = "0x1B12B30", VA = "0x181B14530")]
	internal static bool IsDigit(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000710")]
	[Address(RVA = "0x1B18500", Offset = "0x1B16B00", VA = "0x181B18500")]
	private static bool ParseFraction(ref System.__DTString str, out double result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000711")]
	[Address(RVA = "0x1B191D0", Offset = "0x1B177D0", VA = "0x181B191D0")]
	private static bool ParseTimeZone(ref System.__DTString str, ref TimeSpan result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000712")]
	[Address(RVA = "0x1B143B0", Offset = "0x1B129B0", VA = "0x181B143B0")]
	private static bool HandleTimeZone(ref System.__DTString str, ref System.DateTimeResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000713")]
	[Address(RVA = "0x1B14540", Offset = "0x1B12B40", VA = "0x181B14540")]
	private static bool Lex(DS dps, ref System.__DTString str, ref System.DateTimeToken dtok, ref System.DateTimeRawInfo raw, ref System.DateTimeResult result, ref DateTimeFormatInfo dtfi, DateTimeStyles styles)
	{
		return default(bool);
	}

	[Token(Token = "0x6000714")]
	[Address(RVA = "0x1B13A40", Offset = "0x1B12040", VA = "0x181B13A40")]
	private static Calendar GetJapaneseCalendarDefaultInstance()
	{
		return null;
	}

	[Token(Token = "0x6000715")]
	[Address(RVA = "0x1B13CF0", Offset = "0x1B122F0", VA = "0x181B13CF0")]
	internal static Calendar GetTaiwanCalendarDefaultInstance()
	{
		return null;
	}

	[Token(Token = "0x6000716")]
	[Address(RVA = "0x1B1BD70", Offset = "0x1B1A370", VA = "0x181B1BD70")]
	private static bool VerifyValidPunctuation(ref System.__DTString str)
	{
		return default(bool);
	}

	[Token(Token = "0x6000717")]
	[Address(RVA = "0x1B13FC0", Offset = "0x1B125C0", VA = "0x181B13FC0")]
	private static bool GetYearMonthDayOrder(string datePattern, DateTimeFormatInfo dtfi, out int order)
	{
		return default(bool);
	}

	[Token(Token = "0x6000718")]
	[Address(RVA = "0x1B14210", Offset = "0x1B12810", VA = "0x181B14210")]
	private static bool GetYearMonthOrder(string pattern, DateTimeFormatInfo dtfi, out int order)
	{
		return default(bool);
	}

	[Token(Token = "0x6000719")]
	[Address(RVA = "0x1B13B30", Offset = "0x1B12130", VA = "0x181B13B30")]
	private static bool GetMonthDayOrder(string pattern, DateTimeFormatInfo dtfi, out int order)
	{
		return default(bool);
	}

	[Token(Token = "0x600071A")]
	[Address(RVA = "0x1B1A6E0", Offset = "0x1B18CE0", VA = "0x181B1A6E0")]
	private static bool TryAdjustYear(ref System.DateTimeResult result, int year, out int adjustedYear)
	{
		return default(bool);
	}

	[Token(Token = "0x600071B")]
	[Address(RVA = "0x1B1A660", Offset = "0x1B18C60", VA = "0x181B1A660")]
	private static bool SetDateYMD(ref System.DateTimeResult result, int year, int month, int day)
	{
		return default(bool);
	}

	[Token(Token = "0x600071C")]
	[Address(RVA = "0x1B1A500", Offset = "0x1B18B00", VA = "0x181B1A500")]
	private static bool SetDateMDY(ref System.DateTimeResult result, int month, int day, int year)
	{
		return default(bool);
	}

	[Token(Token = "0x600071D")]
	[Address(RVA = "0x1B1A450", Offset = "0x1B18A50", VA = "0x181B1A450")]
	private static bool SetDateDMY(ref System.DateTimeResult result, int day, int month, int year)
	{
		return default(bool);
	}

	[Token(Token = "0x600071E")]
	[Address(RVA = "0x1B1A5B0", Offset = "0x1B18BB0", VA = "0x181B1A5B0")]
	private static bool SetDateYDM(ref System.DateTimeResult result, int year, int day, int month)
	{
		return default(bool);
	}

	[Token(Token = "0x600071F")]
	[Address(RVA = "0x1B13850", Offset = "0x1B11E50", VA = "0x181B13850")]
	private static void GetDefaultYear(ref System.DateTimeResult result, ref DateTimeStyles styles)
	{
	}

	[Token(Token = "0x6000720")]
	[Address(RVA = "0x1B132B0", Offset = "0x1B118B0", VA = "0x181B132B0")]
	private static bool GetDayOfNN(ref System.DateTimeResult result, ref DateTimeStyles styles, ref System.DateTimeRawInfo raw, DateTimeFormatInfo dtfi)
	{
		return default(bool);
	}

	[Token(Token = "0x6000721")]
	[Address(RVA = "0x1B12D20", Offset = "0x1B11320", VA = "0x181B12D20")]
	private static bool GetDayOfNNN(ref System.DateTimeResult result, ref System.DateTimeRawInfo raw, DateTimeFormatInfo dtfi)
	{
		return default(bool);
	}

	[Token(Token = "0x6000722")]
	[Address(RVA = "0x1B128A0", Offset = "0x1B10EA0", VA = "0x181B128A0")]
	private static bool GetDayOfMN(ref System.DateTimeResult result, ref DateTimeStyles styles, ref System.DateTimeRawInfo raw, DateTimeFormatInfo dtfi)
	{
		return default(bool);
	}

	[Token(Token = "0x6000723")]
	[Address(RVA = "0x1B138F0", Offset = "0x1B11EF0", VA = "0x181B138F0")]
	private static bool GetHebrewDayOfNM(ref System.DateTimeResult result, ref System.DateTimeRawInfo raw, DateTimeFormatInfo dtfi)
	{
		return default(bool);
	}

	[Token(Token = "0x6000724")]
	[Address(RVA = "0x1B12AE0", Offset = "0x1B110E0", VA = "0x181B12AE0")]
	private static bool GetDayOfNM(ref System.DateTimeResult result, ref DateTimeStyles styles, ref System.DateTimeRawInfo raw, DateTimeFormatInfo dtfi)
	{
		return default(bool);
	}

	[Token(Token = "0x6000725")]
	[Address(RVA = "0x1B12530", Offset = "0x1B10B30", VA = "0x181B12530")]
	private static bool GetDayOfMNN(ref System.DateTimeResult result, ref System.DateTimeRawInfo raw, DateTimeFormatInfo dtfi)
	{
		return default(bool);
	}

	[Token(Token = "0x6000726")]
	[Address(RVA = "0x1B135F0", Offset = "0x1B11BF0", VA = "0x181B135F0")]
	private static bool GetDayOfYNN(ref System.DateTimeResult result, ref System.DateTimeRawInfo raw, DateTimeFormatInfo dtfi)
	{
		return default(bool);
	}

	[Token(Token = "0x6000727")]
	[Address(RVA = "0x1B13140", Offset = "0x1B11740", VA = "0x181B13140")]
	private static bool GetDayOfNNY(ref System.DateTimeResult result, ref System.DateTimeRawInfo raw, DateTimeFormatInfo dtfi)
	{
		return default(bool);
	}

	[Token(Token = "0x6000728")]
	[Address(RVA = "0x1B13430", Offset = "0x1B11A30", VA = "0x181B13430")]
	private static bool GetDayOfYMN(ref System.DateTimeResult result, ref System.DateTimeRawInfo raw)
	{
		return default(bool);
	}

	[Token(Token = "0x6000729")]
	[Address(RVA = "0x1B13740", Offset = "0x1B11D40", VA = "0x181B13740")]
	private static bool GetDayOfYN(ref System.DateTimeResult result, ref System.DateTimeRawInfo raw)
	{
		return default(bool);
	}

	[Token(Token = "0x600072A")]
	[Address(RVA = "0x1B134F0", Offset = "0x1B11AF0", VA = "0x181B134F0")]
	private static bool GetDayOfYM(ref System.DateTimeResult result, ref System.DateTimeRawInfo raw)
	{
		return default(bool);
	}

	[Token(Token = "0x600072B")]
	[Address(RVA = "0x1B10220", Offset = "0x1B0E820", VA = "0x181B10220")]
	private static void AdjustTimeMark(DateTimeFormatInfo dtfi, ref System.DateTimeRawInfo raw)
	{
	}

	[Token(Token = "0x600072C")]
	[Address(RVA = "0x1B101E0", Offset = "0x1B0E7E0", VA = "0x181B101E0")]
	private static bool AdjustHour(ref int hour, TM timeMark)
	{
		return default(bool);
	}

	[Token(Token = "0x600072D")]
	[Address(RVA = "0x1B13EC0", Offset = "0x1B124C0", VA = "0x181B13EC0")]
	private static bool GetTimeOfN(ref System.DateTimeResult result, ref System.DateTimeRawInfo raw)
	{
		return default(bool);
	}

	[Token(Token = "0x600072E")]
	[Address(RVA = "0x1B13E60", Offset = "0x1B12460", VA = "0x181B13E60")]
	private static bool GetTimeOfNN(ref System.DateTimeResult result, ref System.DateTimeRawInfo raw)
	{
		return default(bool);
	}

	[Token(Token = "0x600072F")]
	[Address(RVA = "0x1B13DE0", Offset = "0x1B123E0", VA = "0x181B13DE0")]
	private static bool GetTimeOfNNN(ref System.DateTimeResult result, ref System.DateTimeRawInfo raw)
	{
		return default(bool);
	}

	[Token(Token = "0x6000730")]
	[Address(RVA = "0x1B11E70", Offset = "0x1B10470", VA = "0x181B11E70")]
	private static bool GetDateOfDSN(ref System.DateTimeResult result, ref System.DateTimeRawInfo raw)
	{
		return default(bool);
	}

	[Token(Token = "0x6000731")]
	[Address(RVA = "0x1B11EB0", Offset = "0x1B104B0", VA = "0x181B11EB0")]
	private static bool GetDateOfNDS(ref System.DateTimeResult result, ref System.DateTimeRawInfo raw)
	{
		return default(bool);
	}

	[Token(Token = "0x6000732")]
	[Address(RVA = "0x1B11F50", Offset = "0x1B10550", VA = "0x181B11F50")]
	private static bool GetDateOfNNDS(ref System.DateTimeResult result, ref System.DateTimeRawInfo raw, DateTimeFormatInfo dtfi)
	{
		return default(bool);
	}

	[Token(Token = "0x6000733")]
	[Address(RVA = "0x1B19780", Offset = "0x1B17D80", VA = "0x181B19780")]
	private static bool ProcessDateTimeSuffix(ref System.DateTimeResult result, ref System.DateTimeRawInfo raw, ref System.DateTimeToken dtok)
	{
		return default(bool);
	}

	[Token(Token = "0x6000734")]
	[Address(RVA = "0x1B19840", Offset = "0x1B17E40", VA = "0x181B19840")]
	internal static bool ProcessHebrewTerminalState(DS dps, ref System.__DTString str, ref System.DateTimeResult result, ref DateTimeStyles styles, ref System.DateTimeRawInfo raw, DateTimeFormatInfo dtfi)
	{
		return default(bool);
	}

	[Token(Token = "0x6000735")]
	[Address(RVA = "0x1B19D80", Offset = "0x1B18380", VA = "0x181B19D80")]
	internal static bool ProcessTerminalState(DS dps, ref System.__DTString str, ref System.DateTimeResult result, ref DateTimeStyles styles, ref System.DateTimeRawInfo raw, DateTimeFormatInfo dtfi)
	{
		return default(bool);
	}

	[Token(Token = "0x6000736")]
	[Address(RVA = "0x1B19660", Offset = "0x1B17C60", VA = "0x181B19660")]
	internal static DateTime Parse(ReadOnlySpan<char> s, DateTimeFormatInfo dtfi, DateTimeStyles styles)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000737")]
	[Address(RVA = "0x1B19540", Offset = "0x1B17B40", VA = "0x181B19540")]
	internal static DateTime Parse(ReadOnlySpan<char> s, DateTimeFormatInfo dtfi, DateTimeStyles styles, out TimeSpan offset)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000738")]
	[Address(RVA = "0x1B1B310", Offset = "0x1B19910", VA = "0x181B1B310")]
	internal static bool TryParse(ReadOnlySpan<char> s, DateTimeFormatInfo dtfi, DateTimeStyles styles, out DateTime result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000739")]
	[Address(RVA = "0x1B1B180", Offset = "0x1B19780", VA = "0x181B1B180")]
	internal static bool TryParse(ReadOnlySpan<char> s, DateTimeFormatInfo dtfi, DateTimeStyles styles, out DateTime result, out TimeSpan offset)
	{
		return default(bool);
	}

	[Token(Token = "0x600073A")]
	[Address(RVA = "0x1B1B470", Offset = "0x1B19A70", VA = "0x181B1B470")]
	internal static bool TryParse(ReadOnlySpan<char> s, DateTimeFormatInfo dtfi, DateTimeStyles styles, ref System.DateTimeResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x600073B")]
	[Address(RVA = "0x1B10C40", Offset = "0x1B0F240", VA = "0x181B10C40")]
	private static bool DetermineTimeZoneAdjustments(ref System.__DTString str, ref System.DateTimeResult result, DateTimeStyles styles, bool bTimeOnly)
	{
		return default(bool);
	}

	[Token(Token = "0x600073C")]
	[Address(RVA = "0x1B109C0", Offset = "0x1B0EFC0", VA = "0x181B109C0")]
	private static bool DateTimeOffsetTimeZonePostProcessing(ref System.__DTString str, ref System.DateTimeResult result, DateTimeStyles styles)
	{
		return default(bool);
	}

	[Token(Token = "0x600073D")]
	[Address(RVA = "0x1B105E0", Offset = "0x1B0EBE0", VA = "0x181B105E0")]
	private static bool AdjustTimeZoneToUniversal(ref System.DateTimeResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x600073E")]
	[Address(RVA = "0x1B102E0", Offset = "0x1B0E8E0", VA = "0x181B102E0")]
	private static bool AdjustTimeZoneToLocal(ref System.DateTimeResult result, bool bTimeOnly)
	{
		return default(bool);
	}

	[Token(Token = "0x600073F")]
	[Address(RVA = "0x1B18600", Offset = "0x1B16C00", VA = "0x181B18600")]
	private static bool ParseISO8601(ref System.DateTimeRawInfo raw, ref System.__DTString str, DateTimeStyles styles, ref System.DateTimeResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000740")]
	[Address(RVA = "0x1B15D30", Offset = "0x1B14330", VA = "0x181B15D30")]
	internal static bool MatchHebrewDigits(ref System.__DTString str, int digitLen, out int number)
	{
		return default(bool);
	}

	[Token(Token = "0x6000741")]
	[Address(RVA = "0x1B17DF0", Offset = "0x1B163F0", VA = "0x181B17DF0")]
	internal static bool ParseDigits(ref System.__DTString str, int digitLen, out int result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000742")]
	[Address(RVA = "0x1B17D10", Offset = "0x1B16310", VA = "0x181B17D10")]
	internal static bool ParseDigits(ref System.__DTString str, int minDigitLen, int maxDigitLen, out int result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000743")]
	[Address(RVA = "0x1B18390", Offset = "0x1B16990", VA = "0x181B18390")]
	private static bool ParseFractionExact(ref System.__DTString str, int maxDigitLen, ref double result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000744")]
	[Address(RVA = "0x1B18D90", Offset = "0x1B17390", VA = "0x181B18D90")]
	private static bool ParseSign(ref System.__DTString str, ref bool result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000745")]
	[Address(RVA = "0x1B18E40", Offset = "0x1B17440", VA = "0x181B18E40")]
	private static bool ParseTimeZoneOffset(ref System.__DTString str, int len, ref TimeSpan result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000746")]
	[Address(RVA = "0x1B15730", Offset = "0x1B13D30", VA = "0x181B15730")]
	private static bool MatchAbbreviatedMonthName(ref System.__DTString str, DateTimeFormatInfo dtfi, ref int result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000747")]
	[Address(RVA = "0x1B15E30", Offset = "0x1B14430", VA = "0x181B15E30")]
	private static bool MatchMonthName(ref System.__DTString str, DateTimeFormatInfo dtfi, ref int result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000748")]
	[Address(RVA = "0x1B155E0", Offset = "0x1B13BE0", VA = "0x181B155E0")]
	private static bool MatchAbbreviatedDayName(ref System.__DTString str, DateTimeFormatInfo dtfi, ref int result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000749")]
	[Address(RVA = "0x1B15A50", Offset = "0x1B14050", VA = "0x181B15A50")]
	private static bool MatchDayName(ref System.__DTString str, DateTimeFormatInfo dtfi, ref int result)
	{
		return default(bool);
	}

	[Token(Token = "0x600074A")]
	[Address(RVA = "0x1B15BA0", Offset = "0x1B141A0", VA = "0x181B15BA0")]
	private static bool MatchEraName(ref System.__DTString str, DateTimeFormatInfo dtfi, ref int result)
	{
		return default(bool);
	}

	[Token(Token = "0x600074B")]
	[Address(RVA = "0x1B16050", Offset = "0x1B14650", VA = "0x181B16050")]
	private static bool MatchTimeMark(ref System.__DTString str, DateTimeFormatInfo dtfi, ref TM result)
	{
		return default(bool);
	}

	[Token(Token = "0x600074C")]
	[Address(RVA = "0x1B15900", Offset = "0x1B13F00", VA = "0x181B15900")]
	private static bool MatchAbbreviatedTimeMark(ref System.__DTString str, DateTimeFormatInfo dtfi, ref TM result)
	{
		return default(bool);
	}

	[Token(Token = "0x600074D")]
	[Address(RVA = "0x1B10930", Offset = "0x1B0EF30", VA = "0x181B10930")]
	private static bool CheckNewValue(ref int currentValue, int newValue, char patternChar, ref System.DateTimeResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x600074E")]
	[Address(RVA = "0x1B121B0", Offset = "0x1B107B0", VA = "0x181B121B0")]
	private static DateTime GetDateTimeNow(ref System.DateTimeResult result, ref DateTimeStyles styles)
	{
		return default(DateTime);
	}

	[Token(Token = "0x600074F")]
	[Address(RVA = "0x1B10700", Offset = "0x1B0ED00", VA = "0x181B10700")]
	private static bool CheckDefaultDateTime(ref System.DateTimeResult result, ref Calendar cal, DateTimeStyles styles)
	{
		return default(bool);
	}

	[Token(Token = "0x6000750")]
	[Address(RVA = "0x1B11750", Offset = "0x1B0FD50", VA = "0x181B11750")]
	private static string ExpandPredefinedFormat(ReadOnlySpan<char> format, ref DateTimeFormatInfo dtfi, ref System.ParsingInfo parseInfo, ref System.DateTimeResult result)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000751")]
	[Address(RVA = "0x1B18CB0", Offset = "0x1B172B0", VA = "0x181B18CB0")]
	private static bool ParseJapaneseEraStart(ref System.__DTString str, DateTimeFormatInfo dtfi)
	{
		return default(bool);
	}

	[Token(Token = "0x6000752")]
	[Address(RVA = "0x1B163A0", Offset = "0x1B149A0", VA = "0x181B163A0")]
	private static bool ParseByFormat(ref System.__DTString str, ref System.__DTString format, ref System.ParsingInfo parseInfo, DateTimeFormatInfo dtfi, ref System.DateTimeResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000753")]
	[Address(RVA = "0x1B1B060", Offset = "0x1B19660", VA = "0x181B1B060")]
	internal static bool TryParseQuoteString(ReadOnlySpan<char> format, int pos, StringBuilder result, out int returnValue)
	{
		return default(bool);
	}

	[Token(Token = "0x6000754")]
	[Address(RVA = "0x1B10EB0", Offset = "0x1B0F4B0", VA = "0x181B10EB0")]
	private static bool DoStrictParse(ReadOnlySpan<char> s, ReadOnlySpan<char> formatParam, DateTimeStyles styles, DateTimeFormatInfo dtfi, ref System.DateTimeResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000755")]
	[Address(RVA = "0x1B12340", Offset = "0x1B10940", VA = "0x181B12340")]
	private static Exception GetDateTimeParseException(ref System.DateTimeResult result)
	{
		return null;
	}
}
