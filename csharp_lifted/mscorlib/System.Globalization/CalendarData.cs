// ==================== AoTTG2 cross-reference ====================
// Type: System.Globalization.CalendarData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Globalization;

[StructLayout((LayoutKind)0)]
[Token(Token = "0x2000568")]
internal class CalendarData
{
	[Token(Token = "0x4001672")]
	internal const int MAX_CALENDARS = 23;

	[Token(Token = "0x4001673")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal string sNativeName;

	[Token(Token = "0x4001674")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	internal string[] saShortDates;

	[Token(Token = "0x4001675")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	internal string[] saYearMonths;

	[Token(Token = "0x4001676")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	internal string[] saLongDates;

	[Token(Token = "0x4001677")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	internal string sMonthDay;

	[Token(Token = "0x4001678")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	internal string[] saEraNames;

	[Token(Token = "0x4001679")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	internal string[] saAbbrevEraNames;

	[Token(Token = "0x400167A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	internal string[] saAbbrevEnglishEraNames;

	[Token(Token = "0x400167B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	internal string[] saDayNames;

	[Token(Token = "0x400167C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	internal string[] saAbbrevDayNames;

	[Token(Token = "0x400167D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	internal string[] saSuperShortDayNames;

	[Token(Token = "0x400167E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	internal string[] saMonthNames;

	[Token(Token = "0x400167F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	internal string[] saAbbrevMonthNames;

	[Token(Token = "0x4001680")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	internal string[] saMonthGenitiveNames;

	[Token(Token = "0x4001681")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	internal string[] saAbbrevMonthGenitiveNames;

	[Token(Token = "0x4001682")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	internal string[] saLeapYearMonthNames;

	[Token(Token = "0x4001683")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	internal int iTwoDigitYearMax;

	[Token(Token = "0x4001684")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x94")]
	internal int iCurrentEra;

	[Token(Token = "0x4001685")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	internal bool bUseUserOverrides;

	[Token(Token = "0x4001686")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static System.Globalization.CalendarData Invariant;

	[Token(Token = "0x4001687")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static string[] HEBREW_MONTH_NAMES;

	[Token(Token = "0x4001688")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static string[] HEBREW_LEAP_MONTH_NAMES;

	[Token(Token = "0x6002976")]
	[Address(RVA = "0x542A1F0", Offset = "0x54291F0", VA = "0x542A1F0")]
	private CalendarData()
	{
	}

	[Token(Token = "0x6002977")]
	[Address(RVA = "0x542A210", Offset = "0x5429210", VA = "0x542A210")]
	static CalendarData()
	{
	}

	[Token(Token = "0x6002978")]
	[Address(RVA = "0x542B350", Offset = "0x542A350", VA = "0x542B350")]
	internal CalendarData(string localeName, int calendarId, bool bUseUserOverrides)
	{
	}

	[Token(Token = "0x6002979")]
	[Address(RVA = "0x542BB60", Offset = "0x542AB60", VA = "0x542BB60")]
	private void InitializeEraNames(string localeName, int calendarId)
	{
	}

	[Token(Token = "0x600297A")]
	[Address(RVA = "0x542C510", Offset = "0x542B510", VA = "0x542C510")]
	private static string[] GetJapaneseEraNames()
	{
		return null;
	}

	[Token(Token = "0x600297B")]
	[Address(RVA = "0x542C3E0", Offset = "0x542B3E0", VA = "0x542C3E0")]
	private static string[] GetJapaneseEnglishEraNames()
	{
		return null;
	}

	[Token(Token = "0x600297C")]
	[Address(RVA = "0x542C010", Offset = "0x542B010", VA = "0x542C010")]
	private void InitializeAbbreviatedEraNames(string localeName, int calendarId)
	{
	}

	[Token(Token = "0x600297D")]
	[Address(RVA = "0x5429B20", Offset = "0x5428B20", VA = "0x5429B20")]
	internal static System.Globalization.CalendarData GetCalendarData(int calendarId)
	{
		return null;
	}

	[Token(Token = "0x600297E")]
	[Address(RVA = "0x542C880", Offset = "0x542B880", VA = "0x542C880")]
	private static string CalendarIdToCultureName(int calendarId)
	{
		return null;
	}

	[Token(Token = "0x600297F")]
	[Address(RVA = "0x542A1E0", Offset = "0x54291E0", VA = "0x542A1E0")]
	public static int nativeGetTwoDigitYearMax(int calID)
	{
		return default(int);
	}

	[Token(Token = "0x6002980")]
	[Address(RVA = "0x542BA60", Offset = "0x542AA60", VA = "0x542BA60")]
	private static bool nativeGetCalendarData(System.Globalization.CalendarData data, string localeName, int calendarId)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002981")]
	[Address(RVA = "0x542CA70", Offset = "0x542BA70", VA = "0x542CA70")]
	private extern bool fill_calendar_data(string localeName, int datetimeIndex);
}
