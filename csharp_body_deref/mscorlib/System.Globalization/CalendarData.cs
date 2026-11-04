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
[Token(Token = "0x200058D")]
internal class CalendarData
{
	[Token(Token = "0x400170B")]
	internal const int MAX_CALENDARS = 23;

	[Token(Token = "0x400170C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal string sNativeName;

	[Token(Token = "0x400170D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	internal string[] saShortDates;

	[Token(Token = "0x400170E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	internal string[] saYearMonths;

	[Token(Token = "0x400170F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	internal string[] saLongDates;

	[Token(Token = "0x4001710")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	internal string sMonthDay;

	[Token(Token = "0x4001711")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	internal string[] saEraNames;

	[Token(Token = "0x4001712")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	internal string[] saAbbrevEraNames;

	[Token(Token = "0x4001713")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	internal string[] saAbbrevEnglishEraNames;

	[Token(Token = "0x4001714")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	internal string[] saDayNames;

	[Token(Token = "0x4001715")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	internal string[] saAbbrevDayNames;

	[Token(Token = "0x4001716")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	internal string[] saSuperShortDayNames;

	[Token(Token = "0x4001717")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	internal string[] saMonthNames;

	[Token(Token = "0x4001718")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	internal string[] saAbbrevMonthNames;

	[Token(Token = "0x4001719")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	internal string[] saMonthGenitiveNames;

	[Token(Token = "0x400171A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	internal string[] saAbbrevMonthGenitiveNames;

	[Token(Token = "0x400171B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	internal string[] saLeapYearMonthNames;

	[Token(Token = "0x400171C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	internal int iTwoDigitYearMax;

	[Token(Token = "0x400171D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x94")]
	internal int iCurrentEra;

	[Token(Token = "0x400171E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	internal bool bUseUserOverrides;

	[Token(Token = "0x400171F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static System.Globalization.CalendarData Invariant;

	[Token(Token = "0x4001720")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static string[] HEBREW_MONTH_NAMES;

	[Token(Token = "0x4001721")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static string[] HEBREW_LEAP_MONTH_NAMES;

	[Token(Token = "0x6002997")]
	[Address(RVA = "0x1A95FF0", Offset = "0x1A945F0", VA = "0x181A95FF0")]
	private CalendarData()
	{
	}

	[Token(Token = "0x6002998")]
	[Address(RVA = "0x1A94860", Offset = "0x1A92E60", VA = "0x181A94860")]
	static CalendarData()
	{
	}

	[Token(Token = "0x6002999")]
	[Address(RVA = "0x1A958B0", Offset = "0x1A93EB0", VA = "0x181A958B0")]
	internal CalendarData(string localeName, int calendarId, bool bUseUserOverrides)
	{
	}

	[Token(Token = "0x600299A")]
	[Address(RVA = "0x1A943B0", Offset = "0x1A929B0", VA = "0x181A943B0")]
	private void InitializeEraNames(string localeName, int calendarId)
	{
	}

	[Token(Token = "0x600299B")]
	[Address(RVA = "0x1A93E20", Offset = "0x1A92420", VA = "0x181A93E20")]
	private static string[] GetJapaneseEraNames()
	{
		return null;
	}

	[Token(Token = "0x600299C")]
	[Address(RVA = "0x1A93C50", Offset = "0x1A92250", VA = "0x181A93C50")]
	private static string[] GetJapaneseEnglishEraNames()
	{
		return null;
	}

	[Token(Token = "0x600299D")]
	[Address(RVA = "0x1A93FF0", Offset = "0x1A925F0", VA = "0x181A93FF0")]
	private void InitializeAbbreviatedEraNames(string localeName, int calendarId)
	{
	}

	[Token(Token = "0x600299E")]
	[Address(RVA = "0x1A93A60", Offset = "0x1A92060", VA = "0x181A93A60")]
	internal static System.Globalization.CalendarData GetCalendarData(int calendarId)
	{
		return null;
	}

	[Token(Token = "0x600299F")]
	[Address(RVA = "0x1A938D0", Offset = "0x1A91ED0", VA = "0x181A938D0")]
	private static string CalendarIdToCultureName(int calendarId)
	{
		return null;
	}

	[Token(Token = "0x60029A0")]
	[Address(RVA = "0x1A5F1E0", Offset = "0x1A5D7E0", VA = "0x181A5F1E0")]
	public static int nativeGetTwoDigitYearMax(int calID)
	{
		return default(int);
	}

	[Token(Token = "0x60029A1")]
	[Address(RVA = "0x1A96020", Offset = "0x1A94620", VA = "0x181A96020")]
	private static bool nativeGetCalendarData(System.Globalization.CalendarData data, string localeName, int calendarId)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60029A2")]
	[Address(RVA = "0x1A96010", Offset = "0x1A94610", VA = "0x181A96010")]
	private extern bool fill_calendar_data(string localeName, int datetimeIndex);
}
