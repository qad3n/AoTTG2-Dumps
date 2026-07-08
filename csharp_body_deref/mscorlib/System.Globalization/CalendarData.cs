using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Globalization;

[StructLayout((LayoutKind)0)]
[Token(Token = "0x20005BB")]
internal class CalendarData
{
	[Token(Token = "0x40018EA")]
	internal const int MAX_CALENDARS = 23;

	[Token(Token = "0x40018EB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal string sNativeName;

	[Token(Token = "0x40018EC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	internal string[] saShortDates;

	[Token(Token = "0x40018ED")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	internal string[] saYearMonths;

	[Token(Token = "0x40018EE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	internal string[] saLongDates;

	[Token(Token = "0x40018EF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	internal string sMonthDay;

	[Token(Token = "0x40018F0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	internal string[] saEraNames;

	[Token(Token = "0x40018F1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	internal string[] saAbbrevEraNames;

	[Token(Token = "0x40018F2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	internal string[] saAbbrevEnglishEraNames;

	[Token(Token = "0x40018F3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	internal string[] saDayNames;

	[Token(Token = "0x40018F4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	internal string[] saAbbrevDayNames;

	[Token(Token = "0x40018F5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	internal string[] saSuperShortDayNames;

	[Token(Token = "0x40018F6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	internal string[] saMonthNames;

	[Token(Token = "0x40018F7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	internal string[] saAbbrevMonthNames;

	[Token(Token = "0x40018F8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	internal string[] saMonthGenitiveNames;

	[Token(Token = "0x40018F9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	internal string[] saAbbrevMonthGenitiveNames;

	[Token(Token = "0x40018FA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	internal string[] saLeapYearMonthNames;

	[Token(Token = "0x40018FB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	internal int iTwoDigitYearMax;

	[Token(Token = "0x40018FC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x94")]
	internal int iCurrentEra;

	[Token(Token = "0x40018FD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	internal bool bUseUserOverrides;

	[Token(Token = "0x40018FE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static System.Globalization.CalendarData Invariant;

	[Token(Token = "0x40018FF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static string[] HEBREW_MONTH_NAMES;

	[Token(Token = "0x4001900")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static string[] HEBREW_LEAP_MONTH_NAMES;

	[Token(Token = "0x6002C8A")]
	[Address(RVA = "0x4F6FD50", Offset = "0x4F6FD50", VA = "0x4F6FD50")]
	private CalendarData()
	{
	}

	[Token(Token = "0x6002C8B")]
	[Address(RVA = "0x4F6FD70", Offset = "0x4F6FD70", VA = "0x4F6FD70")]
	static CalendarData()
	{
	}

	[Token(Token = "0x6002C8C")]
	[Address(RVA = "0x4F70E80", Offset = "0x4F70E80", VA = "0x4F70E80")]
	internal CalendarData(string localeName, int calendarId, bool bUseUserOverrides)
	{
	}

	[Token(Token = "0x6002C8D")]
	[Address(RVA = "0x4F716E0", Offset = "0x4F716E0", VA = "0x4F716E0")]
	private void InitializeEraNames(string localeName, int calendarId)
	{
	}

	[Token(Token = "0x6002C8E")]
	[Address(RVA = "0x4F720A0", Offset = "0x4F720A0", VA = "0x4F720A0")]
	private static string[] GetJapaneseEraNames()
	{
		return null;
	}

	[Token(Token = "0x6002C8F")]
	[Address(RVA = "0x4F71F70", Offset = "0x4F71F70", VA = "0x4F71F70")]
	private static string[] GetJapaneseEnglishEraNames()
	{
		return null;
	}

	[Token(Token = "0x6002C90")]
	[Address(RVA = "0x4F71BA0", Offset = "0x4F71BA0", VA = "0x4F71BA0")]
	private void InitializeAbbreviatedEraNames(string localeName, int calendarId)
	{
	}

	[Token(Token = "0x6002C91")]
	[Address(RVA = "0x4F6F670", Offset = "0x4F6F670", VA = "0x4F6F670")]
	internal static System.Globalization.CalendarData GetCalendarData(int calendarId)
	{
		return null;
	}

	[Token(Token = "0x6002C92")]
	[Address(RVA = "0x4F721D0", Offset = "0x4F721D0", VA = "0x4F721D0")]
	private static string CalendarIdToCultureName(int calendarId)
	{
		return null;
	}

	[Token(Token = "0x6002C93")]
	[Address(RVA = "0x4F6FD40", Offset = "0x4F6FD40", VA = "0x4F6FD40")]
	public static int nativeGetTwoDigitYearMax(int calID)
	{
		return default(int);
	}

	[Token(Token = "0x6002C94")]
	[Address(RVA = "0x4F71600", Offset = "0x4F71600", VA = "0x4F71600")]
	private static bool nativeGetCalendarData(System.Globalization.CalendarData data, string localeName, int calendarId)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002C95")]
	[Address(RVA = "0x4F72290", Offset = "0x4F72290", VA = "0x4F72290")]
	private extern bool fill_calendar_data(string localeName, int datetimeIndex);
}
