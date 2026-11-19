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
[Token(Token = "0x200056B")]
internal class GregorianCalendarHelper
{
	[Token(Token = "0x4001695")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly int[] DaysToMonth365;

	[Token(Token = "0x4001696")]
	[FieldOffset(Offset = "0x8")]
	internal static readonly int[] DaysToMonth366;

	[Token(Token = "0x4001697")]
	[FieldOffset(Offset = "0x10")]
	[OptionalField(VersionAdded = 1)]
	internal int m_maxYear;

	[Token(Token = "0x4001698")]
	[FieldOffset(Offset = "0x14")]
	[OptionalField(VersionAdded = 1)]
	internal int m_minYear;

	[Token(Token = "0x4001699")]
	[FieldOffset(Offset = "0x18")]
	internal Calendar m_Cal;

	[Token(Token = "0x400169A")]
	[FieldOffset(Offset = "0x20")]
	[OptionalField(VersionAdded = 1)]
	internal System.Globalization.EraInfo[] m_EraInfo;

	[Token(Token = "0x400169B")]
	[FieldOffset(Offset = "0x28")]
	[OptionalField(VersionAdded = 1)]
	internal int[] m_eras;

	[Token(Token = "0x400169C")]
	[FieldOffset(Offset = "0x30")]
	[OptionalField(VersionAdded = 1)]
	internal DateTime m_minDate;

	[Token(Token = "0x17000624")]
	internal int MaxYear
	{
		[Token(Token = "0x600299D")]
		[Address(RVA = "0x542E220", Offset = "0x542D220", VA = "0x542E220")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000625")]
	public int[] Eras
	{
		[Token(Token = "0x60029AC")]
		[Address(RVA = "0x542F130", Offset = "0x542E130", VA = "0x542F130")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600299E")]
	[Address(RVA = "0x542E230", Offset = "0x542D230", VA = "0x542E230")]
	internal GregorianCalendarHelper(Calendar cal, System.Globalization.EraInfo[] eraInfo)
	{
	}

	[Token(Token = "0x600299F")]
	[Address(RVA = "0x542E2C0", Offset = "0x542D2C0", VA = "0x542E2C0")]
	private int GetYearOffset(int year, int era, bool throwOnError)
	{
		return default(int);
	}

	[Token(Token = "0x60029A0")]
	[Address(RVA = "0x542E590", Offset = "0x542D590", VA = "0x542E590")]
	internal int GetGregorianYear(int year, int era)
	{
		return default(int);
	}

	[Token(Token = "0x60029A1")]
	[Address(RVA = "0x542E5B0", Offset = "0x542D5B0", VA = "0x542E5B0")]
	internal bool IsValidYear(int year, int era)
	{
		return default(bool);
	}

	[Token(Token = "0x60029A2")]
	[Address(RVA = "0x542E5C0", Offset = "0x542D5C0", VA = "0x542E5C0", Slot = "4")]
	internal virtual int GetDatePart(long ticks, int part)
	{
		return default(int);
	}

	[Token(Token = "0x60029A3")]
	[Address(RVA = "0x542E9A0", Offset = "0x542D9A0", VA = "0x542E9A0")]
	internal static long GetAbsoluteDate(int year, int month, int day)
	{
		return default(long);
	}

	[Token(Token = "0x60029A4")]
	[Address(RVA = "0x542EB60", Offset = "0x542DB60", VA = "0x542EB60")]
	internal static long DateToTicks(int year, int month, int day)
	{
		return default(long);
	}

	[Token(Token = "0x60029A5")]
	[Address(RVA = "0x542EBC0", Offset = "0x542DBC0", VA = "0x542EBC0")]
	internal static long TimeToTicks(int hour, int minute, int second, int millisecond)
	{
		return default(long);
	}

	[Token(Token = "0x60029A6")]
	[Address(RVA = "0x542E7C0", Offset = "0x542D7C0", VA = "0x542E7C0")]
	internal void CheckTicksRange(long ticks)
	{
	}

	[Token(Token = "0x60029A7")]
	[Address(RVA = "0x542ED50", Offset = "0x542DD50", VA = "0x542ED50")]
	public int GetDayOfMonth(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x60029A8")]
	[Address(RVA = "0x542EDC0", Offset = "0x542DDC0", VA = "0x542EDC0")]
	public DayOfWeek GetDayOfWeek(DateTime time)
	{
		return default(DayOfWeek);
	}

	[Token(Token = "0x60029A9")]
	[Address(RVA = "0x542EE80", Offset = "0x542DE80", VA = "0x542EE80")]
	public int GetDaysInMonth(int year, int month, int era)
	{
		return default(int);
	}

	[Token(Token = "0x60029AA")]
	[Address(RVA = "0x542F000", Offset = "0x542E000", VA = "0x542F000")]
	public int GetDaysInYear(int year, int era)
	{
		return default(int);
	}

	[Token(Token = "0x60029AB")]
	[Address(RVA = "0x542F050", Offset = "0x542E050", VA = "0x542F050")]
	public int GetEra(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x60029AD")]
	[Address(RVA = "0x542F230", Offset = "0x542E230", VA = "0x542F230")]
	public int GetMonth(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x60029AE")]
	[Address(RVA = "0x542F2A0", Offset = "0x542E2A0", VA = "0x542F2A0")]
	public int GetMonthsInYear(int year, int era)
	{
		return default(int);
	}

	[Token(Token = "0x60029AF")]
	[Address(RVA = "0x542F2C0", Offset = "0x542E2C0", VA = "0x542F2C0")]
	public int GetYear(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x60029B0")]
	[Address(RVA = "0x542F3C0", Offset = "0x542E3C0", VA = "0x542F3C0")]
	public bool IsLeapYear(int year, int era)
	{
		return default(bool);
	}

	[Token(Token = "0x60029B1")]
	[Address(RVA = "0x542F410", Offset = "0x542E410", VA = "0x542F410")]
	public DateTime ToDateTime(int year, int month, int day, int hour, int minute, int second, int millisecond, int era)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60029B2")]
	[Address(RVA = "0x542F550", Offset = "0x542E550", VA = "0x542F550")]
	public int ToFourDigitYear(int year, int twoDigitYearMax)
	{
		return default(int);
	}
}
