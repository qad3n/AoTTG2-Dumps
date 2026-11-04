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
[Token(Token = "0x2000599")]
public class UmAlQuraCalendar : Calendar
{
	[Token(Token = "0x200059A")]
	internal struct DateMapping
	{
		[Token(Token = "0x400177E")]
		[FieldOffset(Offset = "0x0")]
		internal int HijriMonthsLengthFlags;

		[Token(Token = "0x400177F")]
		[FieldOffset(Offset = "0x8")]
		internal DateTime GregorianDate;

		[Token(Token = "0x6002AA3")]
		[Address(RVA = "0x1A987F0", Offset = "0x1A96DF0", VA = "0x181A987F0")]
		internal DateMapping(int MonthsLengthFlags, int GYear, int GMonth, int GDay)
		{
		}
	}

	[Token(Token = "0x400177B")]
	[FieldOffset(Offset = "0x0")]
	private static readonly DateMapping[] HijriYearInfo;

	[Token(Token = "0x400177C")]
	[FieldOffset(Offset = "0x8")]
	internal static DateTime minDate;

	[Token(Token = "0x400177D")]
	[FieldOffset(Offset = "0x10")]
	internal static DateTime maxDate;

	[Token(Token = "0x1700065D")]
	public override DateTime MinSupportedDateTime
	{
		[Token(Token = "0x6002A86")]
		[Address(RVA = "0x1AB5F80", Offset = "0x1AB4580", VA = "0x181AB5F80", Slot = "5")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x1700065E")]
	public override DateTime MaxSupportedDateTime
	{
		[Token(Token = "0x6002A87")]
		[Address(RVA = "0x1AB5F30", Offset = "0x1AB4530", VA = "0x181AB5F30", Slot = "6")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x1700065F")]
	internal override int BaseCalendarID
	{
		[Token(Token = "0x6002A89")]
		[Address(RVA = "0x868060", Offset = "0x866660", VA = "0x180868060", Slot = "8")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000660")]
	internal override int ID
	{
		[Token(Token = "0x6002A8A")]
		[Address(RVA = "0x1AB5F20", Offset = "0x1AB4520", VA = "0x181AB5F20", Slot = "7")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000661")]
	public override int[] Eras
	{
		[Token(Token = "0x6002A99")]
		[Address(RVA = "0x1AB5EC0", Offset = "0x1AB44C0", VA = "0x181AB5EC0", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000662")]
	public override int TwoDigitYearMax
	{
		[Token(Token = "0x6002A9F")]
		[Address(RVA = "0x1AA8B40", Offset = "0x1AA7140", VA = "0x181AA8B40", Slot = "28")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002AA0")]
		[Address(RVA = "0x1AB5FD0", Offset = "0x1AB45D0", VA = "0x181AB5FD0", Slot = "29")]
		set
		{
		}
	}

	[Token(Token = "0x6002A85")]
	[Address(RVA = "0x1AB5570", Offset = "0x1AB3B70", VA = "0x181AB5570")]
	private static DateMapping[] InitDateMapping()
	{
		return null;
	}

	[Token(Token = "0x6002A88")]
	[Address(RVA = "0x1A968E0", Offset = "0x1A94EE0", VA = "0x181A968E0")]
	public UmAlQuraCalendar()
	{
	}

	[Token(Token = "0x6002A8B")]
	[Address(RVA = "0x1AB4DB0", Offset = "0x1AB33B0", VA = "0x181AB4DB0")]
	private static void ConvertHijriToGregorian(int HijriYear, int HijriMonth, int HijriDay, ref int yg, ref int mg, ref int dg)
	{
	}

	[Token(Token = "0x6002A8C")]
	[Address(RVA = "0x1AB4F20", Offset = "0x1AB3520", VA = "0x181AB4F20")]
	private static long GetAbsoluteDateUmAlQura(int year, int month, int day)
	{
		return default(long);
	}

	[Token(Token = "0x6002A8D")]
	[Address(RVA = "0x1AB4620", Offset = "0x1AB2C20", VA = "0x181AB4620")]
	internal static void CheckTicksRange(long ticks)
	{
	}

	[Token(Token = "0x6002A8E")]
	[Address(RVA = "0x1AB4590", Offset = "0x1AB2B90", VA = "0x181AB4590")]
	internal static void CheckEraRange(int era)
	{
	}

	[Token(Token = "0x6002A8F")]
	[Address(RVA = "0x1AB48F0", Offset = "0x1AB2EF0", VA = "0x181AB48F0")]
	internal static void CheckYearRange(int year, int era)
	{
	}

	[Token(Token = "0x6002A90")]
	[Address(RVA = "0x1AB4820", Offset = "0x1AB2E20", VA = "0x181AB4820")]
	internal static void CheckYearMonthRange(int year, int month, int era)
	{
	}

	[Token(Token = "0x6002A91")]
	[Address(RVA = "0x1AB4AA0", Offset = "0x1AB30A0", VA = "0x181AB4AA0")]
	private static void ConvertGregorianToHijri(DateTime time, ref int HijriYear, ref int HijriMonth, ref int HijriDay)
	{
	}

	[Token(Token = "0x6002A92")]
	[Address(RVA = "0x1AB50E0", Offset = "0x1AB36E0", VA = "0x181AB50E0", Slot = "31")]
	internal virtual int GetDatePart(DateTime time, int part)
	{
		return default(int);
	}

	[Token(Token = "0x6002A93")]
	[Address(RVA = "0x1AB5290", Offset = "0x1AB3890", VA = "0x181AB5290", Slot = "11")]
	public override int GetDayOfMonth(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002A94")]
	[Address(RVA = "0x1AB52B0", Offset = "0x1AB38B0", VA = "0x181AB52B0", Slot = "12")]
	public override DayOfWeek GetDayOfWeek(DateTime time)
	{
		return default(DayOfWeek);
	}

	[Token(Token = "0x6002A95")]
	[Address(RVA = "0x1AB5330", Offset = "0x1AB3930", VA = "0x181AB5330", Slot = "13")]
	public override int GetDaysInMonth(int year, int month, int era)
	{
		return default(int);
	}

	[Token(Token = "0x6002A96")]
	[Address(RVA = "0x1AB5760", Offset = "0x1AB3D60", VA = "0x181AB5760")]
	internal static int RealGetDaysInYear(int year)
	{
		return default(int);
	}

	[Token(Token = "0x6002A97")]
	[Address(RVA = "0x1AB53F0", Offset = "0x1AB39F0", VA = "0x181AB53F0", Slot = "14")]
	public override int GetDaysInYear(int year, int era)
	{
		return default(int);
	}

	[Token(Token = "0x6002A98")]
	[Address(RVA = "0x1AB5450", Offset = "0x1AB3A50", VA = "0x181AB5450", Slot = "15")]
	public override int GetEra(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002A9A")]
	[Address(RVA = "0x1AB54D0", Offset = "0x1AB3AD0", VA = "0x181AB54D0", Slot = "17")]
	public override int GetMonth(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002A9B")]
	[Address(RVA = "0x1AB54F0", Offset = "0x1AB3AF0", VA = "0x181AB54F0", Slot = "18")]
	public override int GetMonthsInYear(int year, int era)
	{
		return default(int);
	}

	[Token(Token = "0x6002A9C")]
	[Address(RVA = "0x1AB5550", Offset = "0x1AB3B50", VA = "0x181AB5550", Slot = "19")]
	public override int GetYear(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002A9D")]
	[Address(RVA = "0x1AB56F0", Offset = "0x1AB3CF0", VA = "0x181AB56F0", Slot = "21")]
	public override bool IsLeapYear(int year, int era)
	{
		return default(bool);
	}

	[Token(Token = "0x6002A9E")]
	[Address(RVA = "0x1AB5800", Offset = "0x1AB3E00", VA = "0x181AB5800", Slot = "23")]
	public override DateTime ToDateTime(int year, int month, int day, int hour, int minute, int second, int millisecond, int era)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6002AA1")]
	[Address(RVA = "0x1AB5A60", Offset = "0x1AB4060", VA = "0x181AB5A60", Slot = "30")]
	public override int ToFourDigitYear(int year)
	{
		return default(int);
	}
}
