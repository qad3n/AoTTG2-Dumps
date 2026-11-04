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
[Token(Token = "0x2000592")]
[ComVisible(true)]
public class HijriCalendar : Calendar
{
	[Token(Token = "0x400173D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly int HijriEra;

	[Token(Token = "0x400173E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	internal static readonly int[] HijriMonthDays;

	[Token(Token = "0x400173F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private int m_HijriAdvance;

	[Token(Token = "0x4001740")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal static readonly DateTime calendarMinValue;

	[Token(Token = "0x4001741")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	internal static readonly DateTime calendarMaxValue;

	[Token(Token = "0x17000625")]
	[ComVisible(false)]
	public override DateTime MinSupportedDateTime
	{
		[Token(Token = "0x60029D5")]
		[Address(RVA = "0x1AA8AF0", Offset = "0x1AA70F0", VA = "0x181AA8AF0", Slot = "5")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x17000626")]
	[ComVisible(false)]
	public override DateTime MaxSupportedDateTime
	{
		[Token(Token = "0x60029D6")]
		[Address(RVA = "0x1AA8AA0", Offset = "0x1AA70A0", VA = "0x181AA8AA0", Slot = "6")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x17000627")]
	internal override int ID
	{
		[Token(Token = "0x60029D8")]
		[Address(RVA = "0x868060", Offset = "0x866660", VA = "0x180868060", Slot = "7")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000628")]
	public int HijriAdjustment
	{
		[Token(Token = "0x60029DB")]
		[Address(RVA = "0x1AA8A40", Offset = "0x1AA7040", VA = "0x181AA8A40")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000629")]
	public override int[] Eras
	{
		[Token(Token = "0x60029E7")]
		[Address(RVA = "0x1AA89B0", Offset = "0x1AA6FB0", VA = "0x181AA89B0", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700062A")]
	public override int TwoDigitYearMax
	{
		[Token(Token = "0x60029ED")]
		[Address(RVA = "0x1AA8B40", Offset = "0x1AA7140", VA = "0x181AA8B40", Slot = "28")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60029EE")]
		[Address(RVA = "0x1AA8BB0", Offset = "0x1AA71B0", VA = "0x181AA8BB0", Slot = "29")]
		set
		{
		}
	}

	[Token(Token = "0x60029D7")]
	[Address(RVA = "0x1AA8990", Offset = "0x1AA6F90", VA = "0x181AA8990")]
	public HijriCalendar()
	{
	}

	[Token(Token = "0x60029D9")]
	[Address(RVA = "0x1AA7A50", Offset = "0x1AA6050", VA = "0x181AA7A50")]
	private long GetAbsoluteDateHijri(int y, int m, int d)
	{
		return default(long);
	}

	[Token(Token = "0x60029DA")]
	[Address(RVA = "0x1AA7990", Offset = "0x1AA5F90", VA = "0x181AA7990")]
	private long DaysUpToHijriYear(int HijriYear)
	{
		return default(long);
	}

	[Token(Token = "0x60029DC")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0")]
	private static int GetAdvanceHijriDate()
	{
		return default(int);
	}

	[Token(Token = "0x60029DD")]
	[Address(RVA = "0x1AA73F0", Offset = "0x1AA59F0", VA = "0x181AA73F0")]
	internal static void CheckTicksRange(long ticks)
	{
	}

	[Token(Token = "0x60029DE")]
	[Address(RVA = "0x1AA7320", Offset = "0x1AA5920", VA = "0x181AA7320")]
	internal static void CheckEraRange(int era)
	{
	}

	[Token(Token = "0x60029DF")]
	[Address(RVA = "0x1AA77B0", Offset = "0x1AA5DB0", VA = "0x181AA77B0")]
	internal static void CheckYearRange(int year, int era)
	{
	}

	[Token(Token = "0x60029E0")]
	[Address(RVA = "0x1AA75F0", Offset = "0x1AA5BF0", VA = "0x181AA75F0")]
	internal static void CheckYearMonthRange(int year, int month, int era)
	{
	}

	[Token(Token = "0x60029E1")]
	[Address(RVA = "0x1AA7B40", Offset = "0x1AA6140", VA = "0x181AA7B40", Slot = "31")]
	internal virtual int GetDatePart(long ticks, int part)
	{
		return default(int);
	}

	[Token(Token = "0x60029E2")]
	[Address(RVA = "0x1AA7DE0", Offset = "0x1AA63E0", VA = "0x181AA7DE0", Slot = "11")]
	public override int GetDayOfMonth(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x60029E3")]
	[Address(RVA = "0x1AA7E50", Offset = "0x1AA6450", VA = "0x181AA7E50", Slot = "12")]
	public override DayOfWeek GetDayOfWeek(DateTime time)
	{
		return default(DayOfWeek);
	}

	[Token(Token = "0x60029E4")]
	[Address(RVA = "0x1AA7ED0", Offset = "0x1AA64D0", VA = "0x181AA7ED0", Slot = "13")]
	public override int GetDaysInMonth(int year, int month, int era)
	{
		return default(int);
	}

	[Token(Token = "0x60029E5")]
	[Address(RVA = "0x1AA8120", Offset = "0x1AA6720", VA = "0x181AA8120", Slot = "14")]
	public override int GetDaysInYear(int year, int era)
	{
		return default(int);
	}

	[Token(Token = "0x60029E6")]
	[Address(RVA = "0x1AA81B0", Offset = "0x1AA67B0", VA = "0x181AA81B0", Slot = "15")]
	public override int GetEra(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x60029E8")]
	[Address(RVA = "0x1AA8240", Offset = "0x1AA6840", VA = "0x181AA8240", Slot = "17")]
	public override int GetMonth(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x60029E9")]
	[Address(RVA = "0x1AA82B0", Offset = "0x1AA68B0", VA = "0x181AA82B0", Slot = "18")]
	public override int GetMonthsInYear(int year, int era)
	{
		return default(int);
	}

	[Token(Token = "0x60029EA")]
	[Address(RVA = "0x1AA8310", Offset = "0x1AA6910", VA = "0x181AA8310", Slot = "19")]
	public override int GetYear(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x60029EB")]
	[Address(RVA = "0x1AA8380", Offset = "0x1AA6980", VA = "0x181AA8380", Slot = "21")]
	public override bool IsLeapYear(int year, int era)
	{
		return default(bool);
	}

	[Token(Token = "0x60029EC")]
	[Address(RVA = "0x1AA8400", Offset = "0x1AA6A00", VA = "0x181AA8400", Slot = "23")]
	public override DateTime ToDateTime(int year, int month, int day, int hour, int minute, int second, int millisecond, int era)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60029EF")]
	[Address(RVA = "0x1AA86D0", Offset = "0x1AA6CD0", VA = "0x181AA86D0", Slot = "30")]
	public override int ToFourDigitYear(int year)
	{
		return default(int);
	}
}
