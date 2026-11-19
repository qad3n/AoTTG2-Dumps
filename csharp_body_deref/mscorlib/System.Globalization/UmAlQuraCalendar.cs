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
[Token(Token = "0x2000574")]
public class UmAlQuraCalendar : Calendar
{
	[Token(Token = "0x2000575")]
	internal struct DateMapping
	{
		[Token(Token = "0x40016E5")]
		[FieldOffset(Offset = "0x0")]
		internal int HijriMonthsLengthFlags;

		[Token(Token = "0x40016E6")]
		[FieldOffset(Offset = "0x8")]
		internal DateTime GregorianDate;

		[Token(Token = "0x6002A82")]
		[Address(RVA = "0x5436F00", Offset = "0x5435F00", VA = "0x5436F00")]
		internal DateMapping(int MonthsLengthFlags, int GYear, int GMonth, int GDay)
		{
		}
	}

	[Token(Token = "0x40016E2")]
	[FieldOffset(Offset = "0x0")]
	private static readonly DateMapping[] HijriYearInfo;

	[Token(Token = "0x40016E3")]
	[FieldOffset(Offset = "0x8")]
	internal static DateTime minDate;

	[Token(Token = "0x40016E4")]
	[FieldOffset(Offset = "0x10")]
	internal static DateTime maxDate;

	[Token(Token = "0x1700065E")]
	public override DateTime MinSupportedDateTime
	{
		[Token(Token = "0x6002A65")]
		[Address(RVA = "0x5436F40", Offset = "0x5435F40", VA = "0x5436F40", Slot = "5")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x1700065F")]
	public override DateTime MaxSupportedDateTime
	{
		[Token(Token = "0x6002A66")]
		[Address(RVA = "0x5436FB0", Offset = "0x5435FB0", VA = "0x5436FB0", Slot = "6")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x17000660")]
	internal override int BaseCalendarID
	{
		[Token(Token = "0x6002A68")]
		[Address(RVA = "0x5437040", Offset = "0x5436040", VA = "0x5437040", Slot = "8")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000661")]
	internal override int ID
	{
		[Token(Token = "0x6002A69")]
		[Address(RVA = "0x5437050", Offset = "0x5436050", VA = "0x5437050", Slot = "7")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000662")]
	public override int[] Eras
	{
		[Token(Token = "0x6002A78")]
		[Address(RVA = "0x5437F70", Offset = "0x5436F70", VA = "0x5437F70", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000663")]
	public override int TwoDigitYearMax
	{
		[Token(Token = "0x6002A7E")]
		[Address(RVA = "0x5438300", Offset = "0x5437300", VA = "0x5438300", Slot = "28")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002A7F")]
		[Address(RVA = "0x5438370", Offset = "0x5437370", VA = "0x5438370", Slot = "29")]
		set
		{
		}
	}

	[Token(Token = "0x6002A64")]
	[Address(RVA = "0x5436DA0", Offset = "0x5435DA0", VA = "0x5436DA0")]
	private static DateMapping[] InitDateMapping()
	{
		return null;
	}

	[Token(Token = "0x6002A67")]
	[Address(RVA = "0x5437020", Offset = "0x5436020", VA = "0x5437020")]
	public UmAlQuraCalendar()
	{
	}

	[Token(Token = "0x6002A6A")]
	[Address(RVA = "0x5437060", Offset = "0x5436060", VA = "0x5437060")]
	private static void ConvertHijriToGregorian(int HijriYear, int HijriMonth, int HijriDay, ref int yg, ref int mg, ref int dg)
	{
	}

	[Token(Token = "0x6002A6B")]
	[Address(RVA = "0x5437230", Offset = "0x5436230", VA = "0x5437230")]
	private static long GetAbsoluteDateUmAlQura(int year, int month, int day)
	{
		return default(long);
	}

	[Token(Token = "0x6002A6C")]
	[Address(RVA = "0x54372F0", Offset = "0x54362F0", VA = "0x54372F0")]
	internal static void CheckTicksRange(long ticks)
	{
	}

	[Token(Token = "0x6002A6D")]
	[Address(RVA = "0x5437530", Offset = "0x5436530", VA = "0x5437530")]
	internal static void CheckEraRange(int era)
	{
	}

	[Token(Token = "0x6002A6E")]
	[Address(RVA = "0x54375A0", Offset = "0x54365A0", VA = "0x54375A0")]
	internal static void CheckYearRange(int year, int era)
	{
	}

	[Token(Token = "0x6002A6F")]
	[Address(RVA = "0x54376D0", Offset = "0x54366D0", VA = "0x54376D0")]
	internal static void CheckYearMonthRange(int year, int month, int era)
	{
	}

	[Token(Token = "0x6002A70")]
	[Address(RVA = "0x5437790", Offset = "0x5436790", VA = "0x5437790")]
	private static void ConvertGregorianToHijri(DateTime time, ref int HijriYear, ref int HijriMonth, ref int HijriDay)
	{
	}

	[Token(Token = "0x6002A71")]
	[Address(RVA = "0x5437A90", Offset = "0x5436A90", VA = "0x5437A90", Slot = "31")]
	internal virtual int GetDatePart(DateTime time, int part)
	{
		return default(int);
	}

	[Token(Token = "0x6002A72")]
	[Address(RVA = "0x5437C10", Offset = "0x5436C10", VA = "0x5437C10", Slot = "11")]
	public override int GetDayOfMonth(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002A73")]
	[Address(RVA = "0x5437C30", Offset = "0x5436C30", VA = "0x5437C30", Slot = "12")]
	public override DayOfWeek GetDayOfWeek(DateTime time)
	{
		return default(DayOfWeek);
	}

	[Token(Token = "0x6002A74")]
	[Address(RVA = "0x5437CD0", Offset = "0x5436CD0", VA = "0x5437CD0", Slot = "13")]
	public override int GetDaysInMonth(int year, int month, int era)
	{
		return default(int);
	}

	[Token(Token = "0x6002A75")]
	[Address(RVA = "0x5437D70", Offset = "0x5436D70", VA = "0x5437D70")]
	internal static int RealGetDaysInYear(int year)
	{
		return default(int);
	}

	[Token(Token = "0x6002A76")]
	[Address(RVA = "0x5437E80", Offset = "0x5436E80", VA = "0x5437E80", Slot = "14")]
	public override int GetDaysInYear(int year, int era)
	{
		return default(int);
	}

	[Token(Token = "0x6002A77")]
	[Address(RVA = "0x5437EE0", Offset = "0x5436EE0", VA = "0x5437EE0", Slot = "15")]
	public override int GetEra(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002A79")]
	[Address(RVA = "0x5437FC0", Offset = "0x5436FC0", VA = "0x5437FC0", Slot = "17")]
	public override int GetMonth(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002A7A")]
	[Address(RVA = "0x5437FE0", Offset = "0x5436FE0", VA = "0x5437FE0", Slot = "18")]
	public override int GetMonthsInYear(int year, int era)
	{
		return default(int);
	}

	[Token(Token = "0x6002A7B")]
	[Address(RVA = "0x5438030", Offset = "0x5437030", VA = "0x5438030", Slot = "19")]
	public override int GetYear(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002A7C")]
	[Address(RVA = "0x5438050", Offset = "0x5437050", VA = "0x5438050", Slot = "21")]
	public override bool IsLeapYear(int year, int era)
	{
		return default(bool);
	}

	[Token(Token = "0x6002A7D")]
	[Address(RVA = "0x54380B0", Offset = "0x54370B0", VA = "0x54380B0", Slot = "23")]
	public override DateTime ToDateTime(int year, int month, int day, int hour, int minute, int second, int millisecond, int era)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6002A80")]
	[Address(RVA = "0x54384C0", Offset = "0x54374C0", VA = "0x54384C0", Slot = "30")]
	public override int ToFourDigitYear(int year)
	{
		return default(int);
	}
}
