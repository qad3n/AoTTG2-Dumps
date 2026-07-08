using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Globalization;

[Serializable]
[Token(Token = "0x20005BE")]
internal class GregorianCalendarHelper
{
	[Token(Token = "0x400190D")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly int[] DaysToMonth365;

	[Token(Token = "0x400190E")]
	[FieldOffset(Offset = "0x8")]
	internal static readonly int[] DaysToMonth366;

	[Token(Token = "0x400190F")]
	[FieldOffset(Offset = "0x10")]
	[OptionalField(VersionAdded = 1)]
	internal int m_maxYear;

	[Token(Token = "0x4001910")]
	[FieldOffset(Offset = "0x14")]
	[OptionalField(VersionAdded = 1)]
	internal int m_minYear;

	[Token(Token = "0x4001911")]
	[FieldOffset(Offset = "0x18")]
	internal Calendar m_Cal;

	[Token(Token = "0x4001912")]
	[FieldOffset(Offset = "0x20")]
	[OptionalField(VersionAdded = 1)]
	internal System.Globalization.EraInfo[] m_EraInfo;

	[Token(Token = "0x4001913")]
	[FieldOffset(Offset = "0x28")]
	[OptionalField(VersionAdded = 1)]
	internal int[] m_eras;

	[Token(Token = "0x4001914")]
	[FieldOffset(Offset = "0x30")]
	[OptionalField(VersionAdded = 1)]
	internal DateTime m_minDate;

	[Token(Token = "0x17000696")]
	internal int MaxYear
	{
		[Token(Token = "0x6002CB1")]
		[Address(RVA = "0x4F73980", Offset = "0x4F73980", VA = "0x4F73980")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000697")]
	public int[] Eras
	{
		[Token(Token = "0x6002CC0")]
		[Address(RVA = "0x4F748F0", Offset = "0x4F748F0", VA = "0x4F748F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002CB2")]
	[Address(RVA = "0x4F73990", Offset = "0x4F73990", VA = "0x4F73990")]
	internal GregorianCalendarHelper(Calendar cal, System.Globalization.EraInfo[] eraInfo)
	{
	}

	[Token(Token = "0x6002CB3")]
	[Address(RVA = "0x4F73A20", Offset = "0x4F73A20", VA = "0x4F73A20")]
	private int GetYearOffset(int year, int era, bool throwOnError)
	{
		return default(int);
	}

	[Token(Token = "0x6002CB4")]
	[Address(RVA = "0x4F73D00", Offset = "0x4F73D00", VA = "0x4F73D00")]
	internal int GetGregorianYear(int year, int era)
	{
		return default(int);
	}

	[Token(Token = "0x6002CB5")]
	[Address(RVA = "0x4F73D20", Offset = "0x4F73D20", VA = "0x4F73D20")]
	internal bool IsValidYear(int year, int era)
	{
		return default(bool);
	}

	[Token(Token = "0x6002CB6")]
	[Address(RVA = "0x4F73D30", Offset = "0x4F73D30", VA = "0x4F73D30", Slot = "4")]
	internal virtual int GetDatePart(long ticks, int part)
	{
		return default(int);
	}

	[Token(Token = "0x6002CB7")]
	[Address(RVA = "0x4F74110", Offset = "0x4F74110", VA = "0x4F74110")]
	internal static long GetAbsoluteDate(int year, int month, int day)
	{
		return default(long);
	}

	[Token(Token = "0x6002CB8")]
	[Address(RVA = "0x4F74300", Offset = "0x4F74300", VA = "0x4F74300")]
	internal static long DateToTicks(int year, int month, int day)
	{
		return default(long);
	}

	[Token(Token = "0x6002CB9")]
	[Address(RVA = "0x4F74360", Offset = "0x4F74360", VA = "0x4F74360")]
	internal static long TimeToTicks(int hour, int minute, int second, int millisecond)
	{
		return default(long);
	}

	[Token(Token = "0x6002CBA")]
	[Address(RVA = "0x4F73F20", Offset = "0x4F73F20", VA = "0x4F73F20")]
	internal void CheckTicksRange(long ticks)
	{
	}

	[Token(Token = "0x6002CBB")]
	[Address(RVA = "0x4F744F0", Offset = "0x4F744F0", VA = "0x4F744F0")]
	public int GetDayOfMonth(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002CBC")]
	[Address(RVA = "0x4F74560", Offset = "0x4F74560", VA = "0x4F74560")]
	public DayOfWeek GetDayOfWeek(DateTime time)
	{
		return default(DayOfWeek);
	}

	[Token(Token = "0x6002CBD")]
	[Address(RVA = "0x4F74620", Offset = "0x4F74620", VA = "0x4F74620")]
	public int GetDaysInMonth(int year, int month, int era)
	{
		return default(int);
	}

	[Token(Token = "0x6002CBE")]
	[Address(RVA = "0x4F747A0", Offset = "0x4F747A0", VA = "0x4F747A0")]
	public int GetDaysInYear(int year, int era)
	{
		return default(int);
	}

	[Token(Token = "0x6002CBF")]
	[Address(RVA = "0x4F74800", Offset = "0x4F74800", VA = "0x4F74800")]
	public int GetEra(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002CC1")]
	[Address(RVA = "0x4F749F0", Offset = "0x4F749F0", VA = "0x4F749F0")]
	public int GetMonth(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002CC2")]
	[Address(RVA = "0x4F74A60", Offset = "0x4F74A60", VA = "0x4F74A60")]
	public int GetMonthsInYear(int year, int era)
	{
		return default(int);
	}

	[Token(Token = "0x6002CC3")]
	[Address(RVA = "0x4F74A80", Offset = "0x4F74A80", VA = "0x4F74A80")]
	public int GetYear(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002CC4")]
	[Address(RVA = "0x4F74B90", Offset = "0x4F74B90", VA = "0x4F74B90")]
	public bool IsLeapYear(int year, int era)
	{
		return default(bool);
	}

	[Token(Token = "0x6002CC5")]
	[Address(RVA = "0x4F74BF0", Offset = "0x4F74BF0", VA = "0x4F74BF0")]
	public DateTime ToDateTime(int year, int month, int day, int hour, int minute, int second, int millisecond, int era)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6002CC6")]
	[Address(RVA = "0x4F74D30", Offset = "0x4F74D30", VA = "0x4F74D30")]
	public int ToFourDigitYear(int year, int twoDigitYearMax)
	{
		return default(int);
	}
}
