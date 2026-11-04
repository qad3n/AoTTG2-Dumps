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
[Token(Token = "0x2000590")]
internal class GregorianCalendarHelper
{
	[Token(Token = "0x400172E")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly int[] DaysToMonth365;

	[Token(Token = "0x400172F")]
	[FieldOffset(Offset = "0x8")]
	internal static readonly int[] DaysToMonth366;

	[Token(Token = "0x4001730")]
	[FieldOffset(Offset = "0x10")]
	[OptionalField(VersionAdded = 1)]
	internal int m_maxYear;

	[Token(Token = "0x4001731")]
	[FieldOffset(Offset = "0x14")]
	[OptionalField(VersionAdded = 1)]
	internal int m_minYear;

	[Token(Token = "0x4001732")]
	[FieldOffset(Offset = "0x18")]
	internal Calendar m_Cal;

	[Token(Token = "0x4001733")]
	[FieldOffset(Offset = "0x20")]
	[OptionalField(VersionAdded = 1)]
	internal System.Globalization.EraInfo[] m_EraInfo;

	[Token(Token = "0x4001734")]
	[FieldOffset(Offset = "0x28")]
	[OptionalField(VersionAdded = 1)]
	internal int[] m_eras;

	[Token(Token = "0x4001735")]
	[FieldOffset(Offset = "0x30")]
	[OptionalField(VersionAdded = 1)]
	internal DateTime m_minDate;

	[Token(Token = "0x17000623")]
	internal int MaxYear
	{
		[Token(Token = "0x60029BE")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000624")]
	public int[] Eras
	{
		[Token(Token = "0x60029CD")]
		[Address(RVA = "0x1AA5A20", Offset = "0x1AA4020", VA = "0x181AA5A20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60029BF")]
	[Address(RVA = "0x1AA5960", Offset = "0x1AA3F60", VA = "0x181AA5960")]
	internal GregorianCalendarHelper(Calendar cal, System.Globalization.EraInfo[] eraInfo)
	{
	}

	[Token(Token = "0x60029C0")]
	[Address(RVA = "0x1AA4CD0", Offset = "0x1AA32D0", VA = "0x181AA4CD0")]
	private int GetYearOffset(int year, int era, bool throwOnError)
	{
		return default(int);
	}

	[Token(Token = "0x60029C1")]
	[Address(RVA = "0x1AA4C10", Offset = "0x1AA3210", VA = "0x181AA4C10")]
	internal int GetGregorianYear(int year, int era)
	{
		return default(int);
	}

	[Token(Token = "0x60029C2")]
	[Address(RVA = "0x1AA51F0", Offset = "0x1AA37F0", VA = "0x181AA51F0")]
	internal bool IsValidYear(int year, int era)
	{
		return default(bool);
	}

	[Token(Token = "0x60029C3")]
	[Address(RVA = "0x1AA45F0", Offset = "0x1AA2BF0", VA = "0x181AA45F0", Slot = "4")]
	internal virtual int GetDatePart(long ticks, int part)
	{
		return default(int);
	}

	[Token(Token = "0x60029C4")]
	[Address(RVA = "0x1AA43F0", Offset = "0x1AA29F0", VA = "0x181AA43F0")]
	internal static long GetAbsoluteDate(int year, int month, int day)
	{
		return default(long);
	}

	[Token(Token = "0x60029C5")]
	[Address(RVA = "0x1AA4370", Offset = "0x1AA2970", VA = "0x181AA4370")]
	internal static long DateToTicks(int year, int month, int day)
	{
		return default(long);
	}

	[Token(Token = "0x60029C6")]
	[Address(RVA = "0x1AA5210", Offset = "0x1AA3810", VA = "0x181AA5210")]
	internal static long TimeToTicks(int hour, int minute, int second, int millisecond)
	{
		return default(long);
	}

	[Token(Token = "0x60029C7")]
	[Address(RVA = "0x1AA4170", Offset = "0x1AA2770", VA = "0x181AA4170")]
	internal void CheckTicksRange(long ticks)
	{
	}

	[Token(Token = "0x60029C8")]
	[Address(RVA = "0x1AA47D0", Offset = "0x1AA2DD0", VA = "0x181AA47D0")]
	public int GetDayOfMonth(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x60029C9")]
	[Address(RVA = "0x1AA4840", Offset = "0x1AA2E40", VA = "0x181AA4840")]
	public DayOfWeek GetDayOfWeek(DateTime time)
	{
		return default(DayOfWeek);
	}

	[Token(Token = "0x60029CA")]
	[Address(RVA = "0x1AA48E0", Offset = "0x1AA2EE0", VA = "0x181AA48E0")]
	public int GetDaysInMonth(int year, int month, int era)
	{
		return default(int);
	}

	[Token(Token = "0x60029CB")]
	[Address(RVA = "0x1AA4A70", Offset = "0x1AA3070", VA = "0x181AA4A70")]
	public int GetDaysInYear(int year, int era)
	{
		return default(int);
	}

	[Token(Token = "0x60029CC")]
	[Address(RVA = "0x1AA4B00", Offset = "0x1AA3100", VA = "0x181AA4B00")]
	public int GetEra(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x60029CE")]
	[Address(RVA = "0x1AA4C40", Offset = "0x1AA3240", VA = "0x181AA4C40")]
	public int GetMonth(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x60029CF")]
	[Address(RVA = "0x1AA4CB0", Offset = "0x1AA32B0", VA = "0x181AA4CB0")]
	public int GetMonthsInYear(int year, int era)
	{
		return default(int);
	}

	[Token(Token = "0x60029D0")]
	[Address(RVA = "0x1AA5040", Offset = "0x1AA3640", VA = "0x181AA5040")]
	public int GetYear(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x60029D1")]
	[Address(RVA = "0x1AA5170", Offset = "0x1AA3770", VA = "0x181AA5170")]
	public bool IsLeapYear(int year, int era)
	{
		return default(bool);
	}

	[Token(Token = "0x60029D2")]
	[Address(RVA = "0x1AA53C0", Offset = "0x1AA39C0", VA = "0x181AA53C0")]
	public DateTime ToDateTime(int year, int month, int day, int hour, int minute, int second, int millisecond, int era)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60029D3")]
	[Address(RVA = "0x1AA5680", Offset = "0x1AA3C80", VA = "0x181AA5680")]
	public int ToFourDigitYear(int year, int twoDigitYearMax)
	{
		return default(int);
	}
}
