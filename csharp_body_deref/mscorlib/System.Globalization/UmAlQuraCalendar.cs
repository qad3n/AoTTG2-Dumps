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
		[Address(RVA = "0x4F7C520", Offset = "0x4F7C520", VA = "0x4F7C520")]
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
		[Address(RVA = "0x4F7C560", Offset = "0x4F7C560", VA = "0x4F7C560", Slot = "5")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x170006D1")]
	public override DateTime MaxSupportedDateTime
	{
		[Token(Token = "0x6002D7A")]
		[Address(RVA = "0x4F7C5D0", Offset = "0x4F7C5D0", VA = "0x4F7C5D0", Slot = "6")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x170006D2")]
	internal override int BaseCalendarID
	{
		[Token(Token = "0x6002D7C")]
		[Address(RVA = "0x4F7C650", Offset = "0x4F7C650", VA = "0x4F7C650", Slot = "8")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006D3")]
	internal override int ID
	{
		[Token(Token = "0x6002D7D")]
		[Address(RVA = "0x4F7C660", Offset = "0x4F7C660", VA = "0x4F7C660", Slot = "7")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006D4")]
	public override int[] Eras
	{
		[Token(Token = "0x6002D8C")]
		[Address(RVA = "0x4F7D5D0", Offset = "0x4F7D5D0", VA = "0x4F7D5D0", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006D5")]
	public override int TwoDigitYearMax
	{
		[Token(Token = "0x6002D92")]
		[Address(RVA = "0x4F7D960", Offset = "0x4F7D960", VA = "0x4F7D960", Slot = "28")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002D93")]
		[Address(RVA = "0x4F7D9A0", Offset = "0x4F7D9A0", VA = "0x4F7D9A0", Slot = "29")]
		set
		{
		}
	}

	[Token(Token = "0x6002D78")]
	[Address(RVA = "0x4F7C3B0", Offset = "0x4F7C3B0", VA = "0x4F7C3B0")]
	private static DateMapping[] InitDateMapping()
	{
		return null;
	}

	[Token(Token = "0x6002D7B")]
	[Address(RVA = "0x4F7C640", Offset = "0x4F7C640", VA = "0x4F7C640")]
	public UmAlQuraCalendar()
	{
	}

	[Token(Token = "0x6002D7E")]
	[Address(RVA = "0x4F7C670", Offset = "0x4F7C670", VA = "0x4F7C670")]
	private static void ConvertHijriToGregorian(int HijriYear, int HijriMonth, int HijriDay, ref int yg, ref int mg, ref int dg)
	{
	}

	[Token(Token = "0x6002D7F")]
	[Address(RVA = "0x4F7C850", Offset = "0x4F7C850", VA = "0x4F7C850")]
	private static long GetAbsoluteDateUmAlQura(int year, int month, int day)
	{
		return default(long);
	}

	[Token(Token = "0x6002D80")]
	[Address(RVA = "0x4F7C910", Offset = "0x4F7C910", VA = "0x4F7C910")]
	internal static void CheckTicksRange(long ticks)
	{
	}

	[Token(Token = "0x6002D81")]
	[Address(RVA = "0x4F7CB50", Offset = "0x4F7CB50", VA = "0x4F7CB50")]
	internal static void CheckEraRange(int era)
	{
	}

	[Token(Token = "0x6002D82")]
	[Address(RVA = "0x4F7CBD0", Offset = "0x4F7CBD0", VA = "0x4F7CBD0")]
	internal static void CheckYearRange(int year, int era)
	{
	}

	[Token(Token = "0x6002D83")]
	[Address(RVA = "0x4F7CD00", Offset = "0x4F7CD00", VA = "0x4F7CD00")]
	internal static void CheckYearMonthRange(int year, int month, int era)
	{
	}

	[Token(Token = "0x6002D84")]
	[Address(RVA = "0x4F7CDC0", Offset = "0x4F7CDC0", VA = "0x4F7CDC0")]
	private static void ConvertGregorianToHijri(DateTime time, ref int HijriYear, ref int HijriMonth, ref int HijriDay)
	{
	}

	[Token(Token = "0x6002D85")]
	[Address(RVA = "0x4F7D0D0", Offset = "0x4F7D0D0", VA = "0x4F7D0D0", Slot = "31")]
	internal virtual int GetDatePart(DateTime time, int part)
	{
		return default(int);
	}

	[Token(Token = "0x6002D86")]
	[Address(RVA = "0x4F7D250", Offset = "0x4F7D250", VA = "0x4F7D250", Slot = "11")]
	public override int GetDayOfMonth(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002D87")]
	[Address(RVA = "0x4F7D270", Offset = "0x4F7D270", VA = "0x4F7D270", Slot = "12")]
	public override DayOfWeek GetDayOfWeek(DateTime time)
	{
		return default(DayOfWeek);
	}

	[Token(Token = "0x6002D88")]
	[Address(RVA = "0x4F7D310", Offset = "0x4F7D310", VA = "0x4F7D310", Slot = "13")]
	public override int GetDaysInMonth(int year, int month, int era)
	{
		return default(int);
	}

	[Token(Token = "0x6002D89")]
	[Address(RVA = "0x4F7D3B0", Offset = "0x4F7D3B0", VA = "0x4F7D3B0")]
	internal static int RealGetDaysInYear(int year)
	{
		return default(int);
	}

	[Token(Token = "0x6002D8A")]
	[Address(RVA = "0x4F7D4E0", Offset = "0x4F7D4E0", VA = "0x4F7D4E0", Slot = "14")]
	public override int GetDaysInYear(int year, int era)
	{
		return default(int);
	}

	[Token(Token = "0x6002D8B")]
	[Address(RVA = "0x4F7D540", Offset = "0x4F7D540", VA = "0x4F7D540", Slot = "15")]
	public override int GetEra(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002D8D")]
	[Address(RVA = "0x4F7D620", Offset = "0x4F7D620", VA = "0x4F7D620", Slot = "17")]
	public override int GetMonth(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002D8E")]
	[Address(RVA = "0x4F7D640", Offset = "0x4F7D640", VA = "0x4F7D640", Slot = "18")]
	public override int GetMonthsInYear(int year, int era)
	{
		return default(int);
	}

	[Token(Token = "0x6002D8F")]
	[Address(RVA = "0x4F7D690", Offset = "0x4F7D690", VA = "0x4F7D690", Slot = "19")]
	public override int GetYear(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002D90")]
	[Address(RVA = "0x4F7D6B0", Offset = "0x4F7D6B0", VA = "0x4F7D6B0", Slot = "21")]
	public override bool IsLeapYear(int year, int era)
	{
		return default(bool);
	}

	[Token(Token = "0x6002D91")]
	[Address(RVA = "0x4F7D710", Offset = "0x4F7D710", VA = "0x4F7D710", Slot = "23")]
	public override DateTime ToDateTime(int year, int month, int day, int hour, int minute, int second, int millisecond, int era)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6002D94")]
	[Address(RVA = "0x4F7DAB0", Offset = "0x4F7DAB0", VA = "0x4F7DAB0", Slot = "30")]
	public override int ToFourDigitYear(int year)
	{
		return default(int);
	}
}
