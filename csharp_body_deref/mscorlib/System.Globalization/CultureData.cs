using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Globalization;

[StructLayout((LayoutKind)0)]
[Token(Token = "0x20005CB")]
internal class CultureData
{
	[Token(Token = "0x20005CC")]
	internal struct NumberFormatEntryManaged
	{
		[Token(Token = "0x400197B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal int currency_decimal_digits;

		[Token(Token = "0x400197C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
		internal int currency_decimal_separator;

		[Token(Token = "0x400197D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		internal int currency_group_separator;

		[Token(Token = "0x400197E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
		internal int currency_group_sizes0;

		[Token(Token = "0x400197F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		internal int currency_group_sizes1;

		[Token(Token = "0x4001980")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
		internal int currency_negative_pattern;

		[Token(Token = "0x4001981")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		internal int currency_positive_pattern;

		[Token(Token = "0x4001982")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
		internal int currency_symbol;

		[Token(Token = "0x4001983")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		internal int nan_symbol;

		[Token(Token = "0x4001984")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
		internal int negative_infinity_symbol;

		[Token(Token = "0x4001985")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		internal int negative_sign;

		[Token(Token = "0x4001986")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
		internal int number_decimal_digits;

		[Token(Token = "0x4001987")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		internal int number_decimal_separator;

		[Token(Token = "0x4001988")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
		internal int number_group_separator;

		[Token(Token = "0x4001989")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		internal int number_group_sizes0;

		[Token(Token = "0x400198A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
		internal int number_group_sizes1;

		[Token(Token = "0x400198B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		internal int number_negative_pattern;

		[Token(Token = "0x400198C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x44")]
		internal int per_mille_symbol;

		[Token(Token = "0x400198D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		internal int percent_negative_pattern;

		[Token(Token = "0x400198E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x4C")]
		internal int percent_positive_pattern;

		[Token(Token = "0x400198F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		internal int percent_symbol;

		[Token(Token = "0x4001990")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x54")]
		internal int positive_infinity_symbol;

		[Token(Token = "0x4001991")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		internal int positive_sign;
	}

	[Token(Token = "0x4001966")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private string sAM1159;

	[Token(Token = "0x4001967")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private string sPM2359;

	[Token(Token = "0x4001968")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private string sTimeSeparator;

	[Token(Token = "0x4001969")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private string[] saLongTimes;

	[Token(Token = "0x400196A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private string[] saShortTimes;

	[Token(Token = "0x400196B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private int iFirstDayOfWeek;

	[Token(Token = "0x400196C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
	private int iFirstWeekOfYear;

	[Token(Token = "0x400196D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private int[] waCalendars;

	[Token(Token = "0x400196E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private System.Globalization.CalendarData[] calendars;

	[Token(Token = "0x400196F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private string sISO639Language;

	[Token(Token = "0x4001970")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private readonly string sRealName;

	[Token(Token = "0x4001971")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private bool bUseOverrides;

	[Token(Token = "0x4001972")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x64")]
	private int calendarId;

	[Token(Token = "0x4001973")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private int numberIndex;

	[Token(Token = "0x4001974")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x6C")]
	private int iDefaultAnsiCodePage;

	[Token(Token = "0x4001975")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private int iDefaultOemCodePage;

	[Token(Token = "0x4001976")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x74")]
	private int iDefaultMacCodePage;

	[Token(Token = "0x4001977")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private int iDefaultEbcdicCodePage;

	[Token(Token = "0x4001978")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x7C")]
	private bool isRightToLeft;

	[Token(Token = "0x4001979")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private string sListSeparator;

	[Token(Token = "0x400197A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static System.Globalization.CultureData s_Invariant;

	[Token(Token = "0x170006D8")]
	public static System.Globalization.CultureData Invariant
	{
		[Token(Token = "0x6002DA8")]
		[Address(RVA = "0x4F7A030", Offset = "0x4F7A030", VA = "0x4F7A030")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006D9")]
	internal string[] LongTimes
	{
		[Token(Token = "0x6002DAD")]
		[Address(RVA = "0x4F7E8C0", Offset = "0x4F7E8C0", VA = "0x4F7E8C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006DA")]
	internal string[] ShortTimes
	{
		[Token(Token = "0x6002DAE")]
		[Address(RVA = "0x4F7E8D0", Offset = "0x4F7E8D0", VA = "0x4F7E8D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006DB")]
	internal string SISO639LANGNAME
	{
		[Token(Token = "0x6002DAF")]
		[Address(RVA = "0x4F7E8E0", Offset = "0x4F7E8E0", VA = "0x4F7E8E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006DC")]
	internal int IFIRSTDAYOFWEEK
	{
		[Token(Token = "0x6002DB0")]
		[Address(RVA = "0x4F7E8F0", Offset = "0x4F7E8F0", VA = "0x4F7E8F0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006DD")]
	internal int IFIRSTWEEKOFYEAR
	{
		[Token(Token = "0x6002DB1")]
		[Address(RVA = "0x4F7E900", Offset = "0x4F7E900", VA = "0x4F7E900")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006DE")]
	internal string SAM1159
	{
		[Token(Token = "0x6002DB2")]
		[Address(RVA = "0x4F7E910", Offset = "0x4F7E910", VA = "0x4F7E910")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006DF")]
	internal string SPM2359
	{
		[Token(Token = "0x6002DB3")]
		[Address(RVA = "0x4F7E920", Offset = "0x4F7E920", VA = "0x4F7E920")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006E0")]
	internal string TimeSeparator
	{
		[Token(Token = "0x6002DB4")]
		[Address(RVA = "0x4F7E930", Offset = "0x4F7E930", VA = "0x4F7E930")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006E1")]
	internal int[] CalendarIds
	{
		[Token(Token = "0x6002DB5")]
		[Address(RVA = "0x4F7E940", Offset = "0x4F7E940", VA = "0x4F7E940")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006E2")]
	internal bool IsInvariantCulture
	{
		[Token(Token = "0x6002DB7")]
		[Address(RVA = "0x4F78560", Offset = "0x4F78560", VA = "0x4F78560")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170006E3")]
	internal string CultureName
	{
		[Token(Token = "0x6002DB8")]
		[Address(RVA = "0x4F7EBD0", Offset = "0x4F7EBD0", VA = "0x4F7EBD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006E4")]
	internal string SCOMPAREINFO
	{
		[Token(Token = "0x6002DB9")]
		[Address(RVA = "0x4F7EBE0", Offset = "0x4F7EBE0", VA = "0x4F7EBE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006E5")]
	internal string STEXTINFO
	{
		[Token(Token = "0x6002DBA")]
		[Address(RVA = "0x4F7EC10", Offset = "0x4F7EC10", VA = "0x4F7EC10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006E6")]
	internal bool UseUserOverride
	{
		[Token(Token = "0x6002DBB")]
		[Address(RVA = "0x4F7EC20", Offset = "0x4F7EC20", VA = "0x4F7EC20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6002DA7")]
	[Address(RVA = "0x4F7E510", Offset = "0x4F7E510", VA = "0x4F7E510")]
	private CultureData(string name)
	{
	}

	[Token(Token = "0x6002DA9")]
	[Address(RVA = "0x4F7E540", Offset = "0x4F7E540", VA = "0x4F7E540")]
	public static System.Globalization.CultureData GetCultureData(string cultureName, bool useUserOverride)
	{
		return null;
	}

	[Token(Token = "0x6002DAA")]
	[Address(RVA = "0x4F7E620", Offset = "0x4F7E620", VA = "0x4F7E620")]
	public static System.Globalization.CultureData GetCultureData(string cultureName, bool useUserOverride, int datetimeIndex, int calendarId, int numberIndex, string iso2lang, int ansiCodePage, int oemCodePage, int macCodePage, int ebcdicCodePage, bool rightToLeft, string listSeparator)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002DAB")]
	[Address(RVA = "0x4F7E780", Offset = "0x4F7E780", VA = "0x4F7E780")]
	private extern void fill_culture_data(int datetimeIndex);

	[Token(Token = "0x6002DAC")]
	[Address(RVA = "0x4F7E790", Offset = "0x4F7E790", VA = "0x4F7E790")]
	public System.Globalization.CalendarData GetCalendar(int calendarId)
	{
		return null;
	}

	[Token(Token = "0x6002DB6")]
	[Address(RVA = "0x4F7EB00", Offset = "0x4F7EB00", VA = "0x4F7EB00")]
	internal System.Globalization.CalendarId[] GetCalendarIds()
	{
		return null;
	}

	[Token(Token = "0x6002DBC")]
	[Address(RVA = "0x4F7EC30", Offset = "0x4F7EC30", VA = "0x4F7EC30")]
	internal string[] EraNames(int calendarId)
	{
		return null;
	}

	[Token(Token = "0x6002DBD")]
	[Address(RVA = "0x4F7EC50", Offset = "0x4F7EC50", VA = "0x4F7EC50")]
	internal string[] AbbrevEraNames(int calendarId)
	{
		return null;
	}

	[Token(Token = "0x6002DBE")]
	[Address(RVA = "0x4F7EC70", Offset = "0x4F7EC70", VA = "0x4F7EC70")]
	internal string[] AbbreviatedEnglishEraNames(int calendarId)
	{
		return null;
	}

	[Token(Token = "0x6002DBF")]
	[Address(RVA = "0x4F7EC90", Offset = "0x4F7EC90", VA = "0x4F7EC90")]
	internal string[] ShortDates(int calendarId)
	{
		return null;
	}

	[Token(Token = "0x6002DC0")]
	[Address(RVA = "0x4F7ECB0", Offset = "0x4F7ECB0", VA = "0x4F7ECB0")]
	internal string[] LongDates(int calendarId)
	{
		return null;
	}

	[Token(Token = "0x6002DC1")]
	[Address(RVA = "0x4F7ECD0", Offset = "0x4F7ECD0", VA = "0x4F7ECD0")]
	internal string[] YearMonths(int calendarId)
	{
		return null;
	}

	[Token(Token = "0x6002DC2")]
	[Address(RVA = "0x4F7ECF0", Offset = "0x4F7ECF0", VA = "0x4F7ECF0")]
	internal string[] DayNames(int calendarId)
	{
		return null;
	}

	[Token(Token = "0x6002DC3")]
	[Address(RVA = "0x4F7ED10", Offset = "0x4F7ED10", VA = "0x4F7ED10")]
	internal string[] AbbreviatedDayNames(int calendarId)
	{
		return null;
	}

	[Token(Token = "0x6002DC4")]
	[Address(RVA = "0x4F7ED30", Offset = "0x4F7ED30", VA = "0x4F7ED30")]
	internal string[] MonthNames(int calendarId)
	{
		return null;
	}

	[Token(Token = "0x6002DC5")]
	[Address(RVA = "0x4F7ED50", Offset = "0x4F7ED50", VA = "0x4F7ED50")]
	internal string[] GenitiveMonthNames(int calendarId)
	{
		return null;
	}

	[Token(Token = "0x6002DC6")]
	[Address(RVA = "0x4F7ED70", Offset = "0x4F7ED70", VA = "0x4F7ED70")]
	internal string[] AbbreviatedMonthNames(int calendarId)
	{
		return null;
	}

	[Token(Token = "0x6002DC7")]
	[Address(RVA = "0x4F7ED90", Offset = "0x4F7ED90", VA = "0x4F7ED90")]
	internal string[] AbbreviatedGenitiveMonthNames(int calendarId)
	{
		return null;
	}

	[Token(Token = "0x6002DC8")]
	[Address(RVA = "0x4F7EDB0", Offset = "0x4F7EDB0", VA = "0x4F7EDB0")]
	internal string[] LeapYearMonthNames(int calendarId)
	{
		return null;
	}

	[Token(Token = "0x6002DC9")]
	[Address(RVA = "0x4F7EDD0", Offset = "0x4F7EDD0", VA = "0x4F7EDD0")]
	internal string MonthDay(int calendarId)
	{
		return null;
	}

	[Token(Token = "0x6002DCA")]
	[Address(RVA = "0x4F7EDF0", Offset = "0x4F7EDF0", VA = "0x4F7EDF0")]
	internal string DateSeparator(int calendarId)
	{
		return null;
	}

	[Token(Token = "0x6002DCB")]
	[Address(RVA = "0x4F7EEB0", Offset = "0x4F7EEB0", VA = "0x4F7EEB0")]
	private static string GetDateSeparator(string format)
	{
		return null;
	}

	[Token(Token = "0x6002DCC")]
	[Address(RVA = "0x4F7EEE0", Offset = "0x4F7EEE0", VA = "0x4F7EEE0")]
	private static string GetSeparator(string format, string timeParts)
	{
		return null;
	}

	[Token(Token = "0x6002DCD")]
	[Address(RVA = "0x4F7EFA0", Offset = "0x4F7EFA0", VA = "0x4F7EFA0")]
	private static int IndexOfTimePart(string format, int startIndex, string timeParts)
	{
		return default(int);
	}

	[Token(Token = "0x6002DCE")]
	[Address(RVA = "0x4F7F0C0", Offset = "0x4F7F0C0", VA = "0x4F7F0C0")]
	private static string UnescapeNlsString(string str, int start, int end)
	{
		return null;
	}

	[Token(Token = "0x6002DCF")]
	[Address(RVA = "0x4F7F280", Offset = "0x4F7F280", VA = "0x4F7F280")]
	internal static string[] ReescapeWin32Strings(string[] array)
	{
		return null;
	}

	[Token(Token = "0x6002DD0")]
	[Address(RVA = "0x4F7F290", Offset = "0x4F7F290", VA = "0x4F7F290")]
	internal static string ReescapeWin32String(string str)
	{
		return null;
	}

	[Token(Token = "0x6002DD1")]
	[Address(RVA = "0x4F7F2A0", Offset = "0x4F7F2A0", VA = "0x4F7F2A0")]
	private unsafe static int strlen(byte* s)
	{
		return default(int);
	}

	[Token(Token = "0x6002DD2")]
	[Address(RVA = "0x4F7F2C0", Offset = "0x4F7F2C0", VA = "0x4F7F2C0")]
	private unsafe static string idx2string(byte* data, int idx)
	{
		return null;
	}

	[Token(Token = "0x6002DD3")]
	[Address(RVA = "0x4F7F310", Offset = "0x4F7F310", VA = "0x4F7F310")]
	private int[] create_group_sizes_array(int gs0, int gs1)
	{
		return null;
	}

	[Token(Token = "0x6002DD4")]
	[Address(RVA = "0x4F78030", Offset = "0x4F78030", VA = "0x4F78030")]
	internal void GetNFIValues(NumberFormatInfo nfi)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002DD5")]
	[Address(RVA = "0x4F7F3B0", Offset = "0x4F7F3B0", VA = "0x4F7F3B0")]
	private unsafe static extern byte* fill_number_data(int index, ref NumberFormatEntryManaged nfe);
}
