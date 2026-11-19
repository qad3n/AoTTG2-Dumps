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
[Token(Token = "0x200056D")]
[ComVisible(true)]
public class HijriCalendar : Calendar
{
	[Token(Token = "0x40016A4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly int HijriEra;

	[Token(Token = "0x40016A5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	internal static readonly int[] HijriMonthDays;

	[Token(Token = "0x40016A6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	private int m_HijriAdvance;

	[Token(Token = "0x40016A7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal static readonly DateTime calendarMinValue;

	[Token(Token = "0x40016A8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	internal static readonly DateTime calendarMaxValue;

	[Token(Token = "0x17000626")]
	[ComVisible(false)]
	public override DateTime MinSupportedDateTime
	{
		[Token(Token = "0x60029B4")]
		[Address(RVA = "0x542F7A0", Offset = "0x542E7A0", VA = "0x542F7A0", Slot = "5")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x17000627")]
	[ComVisible(false)]
	public override DateTime MaxSupportedDateTime
	{
		[Token(Token = "0x60029B5")]
		[Address(RVA = "0x542F810", Offset = "0x542E810", VA = "0x542F810", Slot = "6")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x17000628")]
	internal override int ID
	{
		[Token(Token = "0x60029B7")]
		[Address(RVA = "0x542F8A0", Offset = "0x542E8A0", VA = "0x542F8A0", Slot = "7")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000629")]
	public int HijriAdjustment
	{
		[Token(Token = "0x60029BA")]
		[Address(RVA = "0x542FAF0", Offset = "0x542EAF0", VA = "0x542FAF0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700062A")]
	public override int[] Eras
	{
		[Token(Token = "0x60029C6")]
		[Address(RVA = "0x5430B20", Offset = "0x542FB20", VA = "0x5430B20", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700062B")]
	public override int TwoDigitYearMax
	{
		[Token(Token = "0x60029CC")]
		[Address(RVA = "0x5430F20", Offset = "0x542FF20", VA = "0x5430F20", Slot = "28")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60029CD")]
		[Address(RVA = "0x5430F90", Offset = "0x542FF90", VA = "0x5430F90", Slot = "29")]
		set
		{
		}
	}

	[Token(Token = "0x60029B6")]
	[Address(RVA = "0x542F880", Offset = "0x542E880", VA = "0x542F880")]
	public HijriCalendar()
	{
	}

	[Token(Token = "0x60029B8")]
	[Address(RVA = "0x542F8B0", Offset = "0x542E8B0", VA = "0x542F8B0")]
	private long GetAbsoluteDateHijri(int y, int m, int d)
	{
		return default(long);
	}

	[Token(Token = "0x60029B9")]
	[Address(RVA = "0x542FA30", Offset = "0x542EA30", VA = "0x542FA30")]
	private long DaysUpToHijriYear(int HijriYear)
	{
		return default(long);
	}

	[Token(Token = "0x60029BB")]
	[Address(RVA = "0x542FB60", Offset = "0x542EB60", VA = "0x542FB60")]
	private static int GetAdvanceHijriDate()
	{
		return default(int);
	}

	[Token(Token = "0x60029BC")]
	[Address(RVA = "0x542FB70", Offset = "0x542EB70", VA = "0x542FB70")]
	internal static void CheckTicksRange(long ticks)
	{
	}

	[Token(Token = "0x60029BD")]
	[Address(RVA = "0x542FDB0", Offset = "0x542EDB0", VA = "0x542FDB0")]
	internal static void CheckEraRange(int era)
	{
	}

	[Token(Token = "0x60029BE")]
	[Address(RVA = "0x542FE70", Offset = "0x542EE70", VA = "0x542FE70")]
	internal static void CheckYearRange(int year, int era)
	{
	}

	[Token(Token = "0x60029BF")]
	[Address(RVA = "0x542FFA0", Offset = "0x542EFA0", VA = "0x542FFA0")]
	internal static void CheckYearMonthRange(int year, int month, int era)
	{
	}

	[Token(Token = "0x60029C0")]
	[Address(RVA = "0x5430100", Offset = "0x542F100", VA = "0x5430100", Slot = "31")]
	internal virtual int GetDatePart(long ticks, int part)
	{
		return default(int);
	}

	[Token(Token = "0x60029C1")]
	[Address(RVA = "0x5430880", Offset = "0x542F880", VA = "0x5430880", Slot = "11")]
	public override int GetDayOfMonth(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x60029C2")]
	[Address(RVA = "0x54308F0", Offset = "0x542F8F0", VA = "0x54308F0", Slot = "12")]
	public override DayOfWeek GetDayOfWeek(DateTime time)
	{
		return default(DayOfWeek);
	}

	[Token(Token = "0x60029C3")]
	[Address(RVA = "0x5430990", Offset = "0x542F990", VA = "0x5430990", Slot = "13")]
	public override int GetDaysInMonth(int year, int month, int era)
	{
		return default(int);
	}

	[Token(Token = "0x60029C4")]
	[Address(RVA = "0x5430A20", Offset = "0x542FA20", VA = "0x5430A20", Slot = "14")]
	public override int GetDaysInYear(int year, int era)
	{
		return default(int);
	}

	[Token(Token = "0x60029C5")]
	[Address(RVA = "0x5430A90", Offset = "0x542FA90", VA = "0x5430A90", Slot = "15")]
	public override int GetEra(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x60029C7")]
	[Address(RVA = "0x5430BB0", Offset = "0x542FBB0", VA = "0x5430BB0", Slot = "17")]
	public override int GetMonth(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x60029C8")]
	[Address(RVA = "0x5430C20", Offset = "0x542FC20", VA = "0x5430C20", Slot = "18")]
	public override int GetMonthsInYear(int year, int era)
	{
		return default(int);
	}

	[Token(Token = "0x60029C9")]
	[Address(RVA = "0x5430C70", Offset = "0x542FC70", VA = "0x5430C70", Slot = "19")]
	public override int GetYear(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x60029CA")]
	[Address(RVA = "0x5430CE0", Offset = "0x542FCE0", VA = "0x5430CE0", Slot = "21")]
	public override bool IsLeapYear(int year, int era)
	{
		return default(bool);
	}

	[Token(Token = "0x60029CB")]
	[Address(RVA = "0x5430D70", Offset = "0x542FD70", VA = "0x5430D70", Slot = "23")]
	public override DateTime ToDateTime(int year, int month, int day, int hour, int minute, int second, int millisecond, int era)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60029CE")]
	[Address(RVA = "0x54310D0", Offset = "0x54300D0", VA = "0x54310D0", Slot = "30")]
	public override int ToFourDigitYear(int year)
	{
		return default(int);
	}
}
