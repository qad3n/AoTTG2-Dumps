// ==================== AoTTG2 cross-reference ====================
// Type: System.Globalization.GregorianCalendarHelper
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3C594A0", Offset = "0x3C594A0", VA = "0x3C594A0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000697")]
	public int[] Eras
	{
		[Token(Token = "0x6002CC0")]
		[Address(RVA = "0x3C5A410", Offset = "0x3C5A410", VA = "0x3C5A410")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002CB2")]
	[Address(RVA = "0x3C594B0", Offset = "0x3C594B0", VA = "0x3C594B0")]
	internal GregorianCalendarHelper(Calendar cal, System.Globalization.EraInfo[] eraInfo)
	{
	}

	[Token(Token = "0x6002CB3")]
	[Address(RVA = "0x3C59540", Offset = "0x3C59540", VA = "0x3C59540")]
	private int GetYearOffset(int year, int era, bool throwOnError)
	{
		return default(int);
	}

	[Token(Token = "0x6002CB4")]
	[Address(RVA = "0x3C59820", Offset = "0x3C59820", VA = "0x3C59820")]
	internal int GetGregorianYear(int year, int era)
	{
		return default(int);
	}

	[Token(Token = "0x6002CB5")]
	[Address(RVA = "0x3C59840", Offset = "0x3C59840", VA = "0x3C59840")]
	internal bool IsValidYear(int year, int era)
	{
		return default(bool);
	}

	[Token(Token = "0x6002CB6")]
	[Address(RVA = "0x3C59850", Offset = "0x3C59850", VA = "0x3C59850", Slot = "4")]
	internal virtual int GetDatePart(long ticks, int part)
	{
		return default(int);
	}

	[Token(Token = "0x6002CB7")]
	[Address(RVA = "0x3C59C30", Offset = "0x3C59C30", VA = "0x3C59C30")]
	internal static long GetAbsoluteDate(int year, int month, int day)
	{
		return default(long);
	}

	[Token(Token = "0x6002CB8")]
	[Address(RVA = "0x3C59E20", Offset = "0x3C59E20", VA = "0x3C59E20")]
	internal static long DateToTicks(int year, int month, int day)
	{
		return default(long);
	}

	[Token(Token = "0x6002CB9")]
	[Address(RVA = "0x3C59E80", Offset = "0x3C59E80", VA = "0x3C59E80")]
	internal static long TimeToTicks(int hour, int minute, int second, int millisecond)
	{
		return default(long);
	}

	[Token(Token = "0x6002CBA")]
	[Address(RVA = "0x3C59A40", Offset = "0x3C59A40", VA = "0x3C59A40")]
	internal void CheckTicksRange(long ticks)
	{
	}

	[Token(Token = "0x6002CBB")]
	[Address(RVA = "0x3C5A010", Offset = "0x3C5A010", VA = "0x3C5A010")]
	public int GetDayOfMonth(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002CBC")]
	[Address(RVA = "0x3C5A080", Offset = "0x3C5A080", VA = "0x3C5A080")]
	public DayOfWeek GetDayOfWeek(DateTime time)
	{
		return default(DayOfWeek);
	}

	[Token(Token = "0x6002CBD")]
	[Address(RVA = "0x3C5A140", Offset = "0x3C5A140", VA = "0x3C5A140")]
	public int GetDaysInMonth(int year, int month, int era)
	{
		return default(int);
	}

	[Token(Token = "0x6002CBE")]
	[Address(RVA = "0x3C5A2C0", Offset = "0x3C5A2C0", VA = "0x3C5A2C0")]
	public int GetDaysInYear(int year, int era)
	{
		return default(int);
	}

	[Token(Token = "0x6002CBF")]
	[Address(RVA = "0x3C5A320", Offset = "0x3C5A320", VA = "0x3C5A320")]
	public int GetEra(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002CC1")]
	[Address(RVA = "0x3C5A510", Offset = "0x3C5A510", VA = "0x3C5A510")]
	public int GetMonth(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002CC2")]
	[Address(RVA = "0x3C5A580", Offset = "0x3C5A580", VA = "0x3C5A580")]
	public int GetMonthsInYear(int year, int era)
	{
		return default(int);
	}

	[Token(Token = "0x6002CC3")]
	[Address(RVA = "0x3C5A5A0", Offset = "0x3C5A5A0", VA = "0x3C5A5A0")]
	public int GetYear(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002CC4")]
	[Address(RVA = "0x3C5A6B0", Offset = "0x3C5A6B0", VA = "0x3C5A6B0")]
	public bool IsLeapYear(int year, int era)
	{
		return default(bool);
	}

	[Token(Token = "0x6002CC5")]
	[Address(RVA = "0x3C5A710", Offset = "0x3C5A710", VA = "0x3C5A710")]
	public DateTime ToDateTime(int year, int month, int day, int hour, int minute, int second, int millisecond, int era)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6002CC6")]
	[Address(RVA = "0x3C5A850", Offset = "0x3C5A850", VA = "0x3C5A850")]
	public int ToFourDigitYear(int year, int twoDigitYearMax)
	{
		return default(int);
	}
}
