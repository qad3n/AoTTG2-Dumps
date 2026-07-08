using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Globalization;

[Serializable]
[Token(Token = "0x20005C0")]
[ComVisible(true)]
public class HijriCalendar : Calendar
{
	[Token(Token = "0x400191C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly int HijriEra;

	[Token(Token = "0x400191D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	internal static readonly int[] HijriMonthDays;

	[Token(Token = "0x400191E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	private int m_HijriAdvance;

	[Token(Token = "0x400191F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal static readonly DateTime calendarMinValue;

	[Token(Token = "0x4001920")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	internal static readonly DateTime calendarMaxValue;

	[Token(Token = "0x17000698")]
	[ComVisible(false)]
	public override DateTime MinSupportedDateTime
	{
		[Token(Token = "0x6002CC8")]
		[Address(RVA = "0x4F75060", Offset = "0x4F75060", VA = "0x4F75060", Slot = "5")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x17000699")]
	[ComVisible(false)]
	public override DateTime MaxSupportedDateTime
	{
		[Token(Token = "0x6002CC9")]
		[Address(RVA = "0x4F750D0", Offset = "0x4F750D0", VA = "0x4F750D0", Slot = "6")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x1700069A")]
	internal override int ID
	{
		[Token(Token = "0x6002CCB")]
		[Address(RVA = "0x4F75150", Offset = "0x4F75150", VA = "0x4F75150", Slot = "7")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700069B")]
	public int HijriAdjustment
	{
		[Token(Token = "0x6002CCE")]
		[Address(RVA = "0x4F753A0", Offset = "0x4F753A0", VA = "0x4F753A0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700069C")]
	public override int[] Eras
	{
		[Token(Token = "0x6002CDA")]
		[Address(RVA = "0x4F76300", Offset = "0x4F76300", VA = "0x4F76300", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700069D")]
	public override int TwoDigitYearMax
	{
		[Token(Token = "0x6002CE0")]
		[Address(RVA = "0x4F76700", Offset = "0x4F76700", VA = "0x4F76700", Slot = "28")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002CE1")]
		[Address(RVA = "0x4F76740", Offset = "0x4F76740", VA = "0x4F76740", Slot = "29")]
		set
		{
		}
	}

	[Token(Token = "0x6002CCA")]
	[Address(RVA = "0x4F75140", Offset = "0x4F75140", VA = "0x4F75140")]
	public HijriCalendar()
	{
	}

	[Token(Token = "0x6002CCC")]
	[Address(RVA = "0x4F75160", Offset = "0x4F75160", VA = "0x4F75160")]
	private long GetAbsoluteDateHijri(int y, int m, int d)
	{
		return default(long);
	}

	[Token(Token = "0x6002CCD")]
	[Address(RVA = "0x4F752E0", Offset = "0x4F752E0", VA = "0x4F752E0")]
	private long DaysUpToHijriYear(int HijriYear)
	{
		return default(long);
	}

	[Token(Token = "0x6002CCF")]
	[Address(RVA = "0x4F75410", Offset = "0x4F75410", VA = "0x4F75410")]
	private static int GetAdvanceHijriDate()
	{
		return default(int);
	}

	[Token(Token = "0x6002CD0")]
	[Address(RVA = "0x4F75420", Offset = "0x4F75420", VA = "0x4F75420")]
	internal static void CheckTicksRange(long ticks)
	{
	}

	[Token(Token = "0x6002CD1")]
	[Address(RVA = "0x4F756B0", Offset = "0x4F756B0", VA = "0x4F756B0")]
	internal static void CheckEraRange(int era)
	{
	}

	[Token(Token = "0x6002CD2")]
	[Address(RVA = "0x4F75770", Offset = "0x4F75770", VA = "0x4F75770")]
	internal static void CheckYearRange(int year, int era)
	{
	}

	[Token(Token = "0x6002CD3")]
	[Address(RVA = "0x4F758C0", Offset = "0x4F758C0", VA = "0x4F758C0")]
	internal static void CheckYearMonthRange(int year, int month, int era)
	{
	}

	[Token(Token = "0x6002CD4")]
	[Address(RVA = "0x4F75A20", Offset = "0x4F75A20", VA = "0x4F75A20", Slot = "31")]
	internal virtual int GetDatePart(long ticks, int part)
	{
		return default(int);
	}

	[Token(Token = "0x6002CD5")]
	[Address(RVA = "0x4F76050", Offset = "0x4F76050", VA = "0x4F76050", Slot = "11")]
	public override int GetDayOfMonth(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002CD6")]
	[Address(RVA = "0x4F760C0", Offset = "0x4F760C0", VA = "0x4F760C0", Slot = "12")]
	public override DayOfWeek GetDayOfWeek(DateTime time)
	{
		return default(DayOfWeek);
	}

	[Token(Token = "0x6002CD7")]
	[Address(RVA = "0x4F76160", Offset = "0x4F76160", VA = "0x4F76160", Slot = "13")]
	public override int GetDaysInMonth(int year, int month, int era)
	{
		return default(int);
	}

	[Token(Token = "0x6002CD8")]
	[Address(RVA = "0x4F76200", Offset = "0x4F76200", VA = "0x4F76200", Slot = "14")]
	public override int GetDaysInYear(int year, int era)
	{
		return default(int);
	}

	[Token(Token = "0x6002CD9")]
	[Address(RVA = "0x4F76270", Offset = "0x4F76270", VA = "0x4F76270", Slot = "15")]
	public override int GetEra(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002CDB")]
	[Address(RVA = "0x4F76390", Offset = "0x4F76390", VA = "0x4F76390", Slot = "17")]
	public override int GetMonth(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002CDC")]
	[Address(RVA = "0x4F76400", Offset = "0x4F76400", VA = "0x4F76400", Slot = "18")]
	public override int GetMonthsInYear(int year, int era)
	{
		return default(int);
	}

	[Token(Token = "0x6002CDD")]
	[Address(RVA = "0x4F76450", Offset = "0x4F76450", VA = "0x4F76450", Slot = "19")]
	public override int GetYear(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002CDE")]
	[Address(RVA = "0x4F764C0", Offset = "0x4F764C0", VA = "0x4F764C0", Slot = "21")]
	public override bool IsLeapYear(int year, int era)
	{
		return default(bool);
	}

	[Token(Token = "0x6002CDF")]
	[Address(RVA = "0x4F76550", Offset = "0x4F76550", VA = "0x4F76550", Slot = "23")]
	public override DateTime ToDateTime(int year, int month, int day, int hour, int minute, int second, int millisecond, int era)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6002CE2")]
	[Address(RVA = "0x4F76840", Offset = "0x4F76840", VA = "0x4F76840", Slot = "30")]
	public override int ToFourDigitYear(int year)
	{
		return default(int);
	}
}
