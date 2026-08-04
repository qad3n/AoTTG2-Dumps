// ==================== AoTTG2 cross-reference ====================
// Type: System.Globalization.UmAlQuraCalendar
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Globalization;

[Serializable]
[Token(Token = "0x20005C7")]
public class UmAlQuraCalendar : Calendar
{
	[Token(Token = "0x20005C8")]
	internal struct DateMapping
	{
		[Token(Token = "0x4001960")]
		[FieldOffset(Offset = "0x0")]
		internal int HijriMonthsLengthFlags;

		[Token(Token = "0x4001961")]
		[FieldOffset(Offset = "0x8")]
		internal DateTime GregorianDate;

		[Token(Token = "0x6002D96")]
		[Address(RVA = "0x3C62040", Offset = "0x3C62040", VA = "0x3C62040")]
		internal DateMapping(int MonthsLengthFlags, int GYear, int GMonth, int GDay)
		{
		}
	}

	[Token(Token = "0x400195D")]
	[FieldOffset(Offset = "0x0")]
	private static readonly DateMapping[] HijriYearInfo;

	[Token(Token = "0x400195E")]
	[FieldOffset(Offset = "0x8")]
	internal static DateTime minDate;

	[Token(Token = "0x400195F")]
	[FieldOffset(Offset = "0x10")]
	internal static DateTime maxDate;

	[Token(Token = "0x170006D0")]
	public override DateTime MinSupportedDateTime
	{
		[Token(Token = "0x6002D79")]
		[Address(RVA = "0x3C62080", Offset = "0x3C62080", VA = "0x3C62080", Slot = "5")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x170006D1")]
	public override DateTime MaxSupportedDateTime
	{
		[Token(Token = "0x6002D7A")]
		[Address(RVA = "0x3C620F0", Offset = "0x3C620F0", VA = "0x3C620F0", Slot = "6")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x170006D2")]
	internal override int BaseCalendarID
	{
		[Token(Token = "0x6002D7C")]
		[Address(RVA = "0x3C62170", Offset = "0x3C62170", VA = "0x3C62170", Slot = "8")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006D3")]
	internal override int ID
	{
		[Token(Token = "0x6002D7D")]
		[Address(RVA = "0x3C62180", Offset = "0x3C62180", VA = "0x3C62180", Slot = "7")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006D4")]
	public override int[] Eras
	{
		[Token(Token = "0x6002D8C")]
		[Address(RVA = "0x3C630F0", Offset = "0x3C630F0", VA = "0x3C630F0", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006D5")]
	public override int TwoDigitYearMax
	{
		[Token(Token = "0x6002D92")]
		[Address(RVA = "0x3C63480", Offset = "0x3C63480", VA = "0x3C63480", Slot = "28")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002D93")]
		[Address(RVA = "0x3C634C0", Offset = "0x3C634C0", VA = "0x3C634C0", Slot = "29")]
		set
		{
		}
	}

	[Token(Token = "0x6002D78")]
	[Address(RVA = "0x3C61ED0", Offset = "0x3C61ED0", VA = "0x3C61ED0")]
	private static DateMapping[] InitDateMapping()
	{
		return null;
	}

	[Token(Token = "0x6002D7B")]
	[Address(RVA = "0x3C62160", Offset = "0x3C62160", VA = "0x3C62160")]
	public UmAlQuraCalendar()
	{
	}

	[Token(Token = "0x6002D7E")]
	[Address(RVA = "0x3C62190", Offset = "0x3C62190", VA = "0x3C62190")]
	private static void ConvertHijriToGregorian(int HijriYear, int HijriMonth, int HijriDay, ref int yg, ref int mg, ref int dg)
	{
	}

	[Token(Token = "0x6002D7F")]
	[Address(RVA = "0x3C62370", Offset = "0x3C62370", VA = "0x3C62370")]
	private static long GetAbsoluteDateUmAlQura(int year, int month, int day)
	{
		return default(long);
	}

	[Token(Token = "0x6002D80")]
	[Address(RVA = "0x3C62430", Offset = "0x3C62430", VA = "0x3C62430")]
	internal static void CheckTicksRange(long ticks)
	{
	}

	[Token(Token = "0x6002D81")]
	[Address(RVA = "0x3C62670", Offset = "0x3C62670", VA = "0x3C62670")]
	internal static void CheckEraRange(int era)
	{
	}

	[Token(Token = "0x6002D82")]
	[Address(RVA = "0x3C626F0", Offset = "0x3C626F0", VA = "0x3C626F0")]
	internal static void CheckYearRange(int year, int era)
	{
	}

	[Token(Token = "0x6002D83")]
	[Address(RVA = "0x3C62820", Offset = "0x3C62820", VA = "0x3C62820")]
	internal static void CheckYearMonthRange(int year, int month, int era)
	{
	}

	[Token(Token = "0x6002D84")]
	[Address(RVA = "0x3C628E0", Offset = "0x3C628E0", VA = "0x3C628E0")]
	private static void ConvertGregorianToHijri(DateTime time, ref int HijriYear, ref int HijriMonth, ref int HijriDay)
	{
	}

	[Token(Token = "0x6002D85")]
	[Address(RVA = "0x3C62BF0", Offset = "0x3C62BF0", VA = "0x3C62BF0", Slot = "31")]
	internal virtual int GetDatePart(DateTime time, int part)
	{
		return default(int);
	}

	[Token(Token = "0x6002D86")]
	[Address(RVA = "0x3C62D70", Offset = "0x3C62D70", VA = "0x3C62D70", Slot = "11")]
	public override int GetDayOfMonth(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002D87")]
	[Address(RVA = "0x3C62D90", Offset = "0x3C62D90", VA = "0x3C62D90", Slot = "12")]
	public override DayOfWeek GetDayOfWeek(DateTime time)
	{
		return default(DayOfWeek);
	}

	[Token(Token = "0x6002D88")]
	[Address(RVA = "0x3C62E30", Offset = "0x3C62E30", VA = "0x3C62E30", Slot = "13")]
	public override int GetDaysInMonth(int year, int month, int era)
	{
		return default(int);
	}

	[Token(Token = "0x6002D89")]
	[Address(RVA = "0x3C62ED0", Offset = "0x3C62ED0", VA = "0x3C62ED0")]
	internal static int RealGetDaysInYear(int year)
	{
		return default(int);
	}

	[Token(Token = "0x6002D8A")]
	[Address(RVA = "0x3C63000", Offset = "0x3C63000", VA = "0x3C63000", Slot = "14")]
	public override int GetDaysInYear(int year, int era)
	{
		return default(int);
	}

	[Token(Token = "0x6002D8B")]
	[Address(RVA = "0x3C63060", Offset = "0x3C63060", VA = "0x3C63060", Slot = "15")]
	public override int GetEra(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002D8D")]
	[Address(RVA = "0x3C63140", Offset = "0x3C63140", VA = "0x3C63140", Slot = "17")]
	public override int GetMonth(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002D8E")]
	[Address(RVA = "0x3C63160", Offset = "0x3C63160", VA = "0x3C63160", Slot = "18")]
	public override int GetMonthsInYear(int year, int era)
	{
		return default(int);
	}

	[Token(Token = "0x6002D8F")]
	[Address(RVA = "0x3C631B0", Offset = "0x3C631B0", VA = "0x3C631B0", Slot = "19")]
	public override int GetYear(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002D90")]
	[Address(RVA = "0x3C631D0", Offset = "0x3C631D0", VA = "0x3C631D0", Slot = "21")]
	public override bool IsLeapYear(int year, int era)
	{
		return default(bool);
	}

	[Token(Token = "0x6002D91")]
	[Address(RVA = "0x3C63230", Offset = "0x3C63230", VA = "0x3C63230", Slot = "23")]
	public override DateTime ToDateTime(int year, int month, int day, int hour, int minute, int second, int millisecond, int era)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6002D94")]
	[Address(RVA = "0x3C635D0", Offset = "0x3C635D0", VA = "0x3C635D0", Slot = "30")]
	public override int ToFourDigitYear(int year)
	{
		return default(int);
	}
}
