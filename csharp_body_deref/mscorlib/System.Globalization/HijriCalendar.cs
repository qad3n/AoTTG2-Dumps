// ==================== AoTTG2 cross-reference ====================
// Type: System.Globalization.HijriCalendar
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3C5AB80", Offset = "0x3C5AB80", VA = "0x3C5AB80", Slot = "5")]
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
		[Address(RVA = "0x3C5ABF0", Offset = "0x3C5ABF0", VA = "0x3C5ABF0", Slot = "6")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x1700069A")]
	internal override int ID
	{
		[Token(Token = "0x6002CCB")]
		[Address(RVA = "0x3C5AC70", Offset = "0x3C5AC70", VA = "0x3C5AC70", Slot = "7")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700069B")]
	public int HijriAdjustment
	{
		[Token(Token = "0x6002CCE")]
		[Address(RVA = "0x3C5AEC0", Offset = "0x3C5AEC0", VA = "0x3C5AEC0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700069C")]
	public override int[] Eras
	{
		[Token(Token = "0x6002CDA")]
		[Address(RVA = "0x3C5BE20", Offset = "0x3C5BE20", VA = "0x3C5BE20", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700069D")]
	public override int TwoDigitYearMax
	{
		[Token(Token = "0x6002CE0")]
		[Address(RVA = "0x3C5C220", Offset = "0x3C5C220", VA = "0x3C5C220", Slot = "28")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002CE1")]
		[Address(RVA = "0x3C5C260", Offset = "0x3C5C260", VA = "0x3C5C260", Slot = "29")]
		set
		{
		}
	}

	[Token(Token = "0x6002CCA")]
	[Address(RVA = "0x3C5AC60", Offset = "0x3C5AC60", VA = "0x3C5AC60")]
	public HijriCalendar()
	{
	}

	[Token(Token = "0x6002CCC")]
	[Address(RVA = "0x3C5AC80", Offset = "0x3C5AC80", VA = "0x3C5AC80")]
	private long GetAbsoluteDateHijri(int y, int m, int d)
	{
		return default(long);
	}

	[Token(Token = "0x6002CCD")]
	[Address(RVA = "0x3C5AE00", Offset = "0x3C5AE00", VA = "0x3C5AE00")]
	private long DaysUpToHijriYear(int HijriYear)
	{
		return default(long);
	}

	[Token(Token = "0x6002CCF")]
	[Address(RVA = "0x3C5AF30", Offset = "0x3C5AF30", VA = "0x3C5AF30")]
	private static int GetAdvanceHijriDate()
	{
		return default(int);
	}

	[Token(Token = "0x6002CD0")]
	[Address(RVA = "0x3C5AF40", Offset = "0x3C5AF40", VA = "0x3C5AF40")]
	internal static void CheckTicksRange(long ticks)
	{
	}

	[Token(Token = "0x6002CD1")]
	[Address(RVA = "0x3C5B1D0", Offset = "0x3C5B1D0", VA = "0x3C5B1D0")]
	internal static void CheckEraRange(int era)
	{
	}

	[Token(Token = "0x6002CD2")]
	[Address(RVA = "0x3C5B290", Offset = "0x3C5B290", VA = "0x3C5B290")]
	internal static void CheckYearRange(int year, int era)
	{
	}

	[Token(Token = "0x6002CD3")]
	[Address(RVA = "0x3C5B3E0", Offset = "0x3C5B3E0", VA = "0x3C5B3E0")]
	internal static void CheckYearMonthRange(int year, int month, int era)
	{
	}

	[Token(Token = "0x6002CD4")]
	[Address(RVA = "0x3C5B540", Offset = "0x3C5B540", VA = "0x3C5B540", Slot = "31")]
	internal virtual int GetDatePart(long ticks, int part)
	{
		return default(int);
	}

	[Token(Token = "0x6002CD5")]
	[Address(RVA = "0x3C5BB70", Offset = "0x3C5BB70", VA = "0x3C5BB70", Slot = "11")]
	public override int GetDayOfMonth(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002CD6")]
	[Address(RVA = "0x3C5BBE0", Offset = "0x3C5BBE0", VA = "0x3C5BBE0", Slot = "12")]
	public override DayOfWeek GetDayOfWeek(DateTime time)
	{
		return default(DayOfWeek);
	}

	[Token(Token = "0x6002CD7")]
	[Address(RVA = "0x3C5BC80", Offset = "0x3C5BC80", VA = "0x3C5BC80", Slot = "13")]
	public override int GetDaysInMonth(int year, int month, int era)
	{
		return default(int);
	}

	[Token(Token = "0x6002CD8")]
	[Address(RVA = "0x3C5BD20", Offset = "0x3C5BD20", VA = "0x3C5BD20", Slot = "14")]
	public override int GetDaysInYear(int year, int era)
	{
		return default(int);
	}

	[Token(Token = "0x6002CD9")]
	[Address(RVA = "0x3C5BD90", Offset = "0x3C5BD90", VA = "0x3C5BD90", Slot = "15")]
	public override int GetEra(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002CDB")]
	[Address(RVA = "0x3C5BEB0", Offset = "0x3C5BEB0", VA = "0x3C5BEB0", Slot = "17")]
	public override int GetMonth(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002CDC")]
	[Address(RVA = "0x3C5BF20", Offset = "0x3C5BF20", VA = "0x3C5BF20", Slot = "18")]
	public override int GetMonthsInYear(int year, int era)
	{
		return default(int);
	}

	[Token(Token = "0x6002CDD")]
	[Address(RVA = "0x3C5BF70", Offset = "0x3C5BF70", VA = "0x3C5BF70", Slot = "19")]
	public override int GetYear(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002CDE")]
	[Address(RVA = "0x3C5BFE0", Offset = "0x3C5BFE0", VA = "0x3C5BFE0", Slot = "21")]
	public override bool IsLeapYear(int year, int era)
	{
		return default(bool);
	}

	[Token(Token = "0x6002CDF")]
	[Address(RVA = "0x3C5C070", Offset = "0x3C5C070", VA = "0x3C5C070", Slot = "23")]
	public override DateTime ToDateTime(int year, int month, int day, int hour, int minute, int second, int millisecond, int era)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6002CE2")]
	[Address(RVA = "0x3C5C360", Offset = "0x3C5C360", VA = "0x3C5C360", Slot = "30")]
	public override int ToFourDigitYear(int year)
	{
		return default(int);
	}
}
