// ==================== AoTTG2 cross-reference ====================
// Type: System.Globalization.TaiwanCalendar
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Globalization;

[Serializable]
[Token(Token = "0x20005C4")]
[ComVisible(true)]
public class TaiwanCalendar : Calendar
{
	[Token(Token = "0x400194B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static System.Globalization.EraInfo[] taiwanEraInfo;

	[Token(Token = "0x400194C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	internal static Calendar s_defaultInstance;

	[Token(Token = "0x400194D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	internal System.Globalization.GregorianCalendarHelper helper;

	[Token(Token = "0x400194E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal static readonly DateTime calendarMinValue;

	[Token(Token = "0x170006C2")]
	[ComVisible(false)]
	public override DateTime MinSupportedDateTime
	{
		[Token(Token = "0x6002D34")]
		[Address(RVA = "0x3C5F420", Offset = "0x3C5F420", VA = "0x3C5F420", Slot = "5")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x170006C3")]
	[ComVisible(false)]
	public override DateTime MaxSupportedDateTime
	{
		[Token(Token = "0x6002D35")]
		[Address(RVA = "0x3C5F490", Offset = "0x3C5F490", VA = "0x3C5F490", Slot = "6")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x170006C4")]
	internal override int ID
	{
		[Token(Token = "0x6002D37")]
		[Address(RVA = "0x3C5F500", Offset = "0x3C5F500", VA = "0x3C5F500", Slot = "7")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006C5")]
	public override int[] Eras
	{
		[Token(Token = "0x6002D42")]
		[Address(RVA = "0x3C5F660", Offset = "0x3C5F660", VA = "0x3C5F660", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006C6")]
	public override int TwoDigitYearMax
	{
		[Token(Token = "0x6002D43")]
		[Address(RVA = "0x3C5F680", Offset = "0x3C5F680", VA = "0x3C5F680", Slot = "28")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002D44")]
		[Address(RVA = "0x3C5F6C0", Offset = "0x3C5F6C0", VA = "0x3C5F6C0", Slot = "29")]
		set
		{
		}
	}

	[Token(Token = "0x6002D33")]
	[Address(RVA = "0x3C5F190", Offset = "0x3C5F190", VA = "0x3C5F190")]
	internal static Calendar GetDefaultInstance()
	{
		return null;
	}

	[Token(Token = "0x6002D36")]
	[Address(RVA = "0x3C5F260", Offset = "0x3C5F260", VA = "0x3C5F260")]
	public TaiwanCalendar()
	{
	}

	[Token(Token = "0x6002D38")]
	[Address(RVA = "0x3C5F510", Offset = "0x3C5F510", VA = "0x3C5F510", Slot = "13")]
	public override int GetDaysInMonth(int year, int month, int era)
	{
		return default(int);
	}

	[Token(Token = "0x6002D39")]
	[Address(RVA = "0x3C5F530", Offset = "0x3C5F530", VA = "0x3C5F530", Slot = "14")]
	public override int GetDaysInYear(int year, int era)
	{
		return default(int);
	}

	[Token(Token = "0x6002D3A")]
	[Address(RVA = "0x3C5F550", Offset = "0x3C5F550", VA = "0x3C5F550", Slot = "11")]
	public override int GetDayOfMonth(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002D3B")]
	[Address(RVA = "0x3C5F570", Offset = "0x3C5F570", VA = "0x3C5F570", Slot = "12")]
	public override DayOfWeek GetDayOfWeek(DateTime time)
	{
		return default(DayOfWeek);
	}

	[Token(Token = "0x6002D3C")]
	[Address(RVA = "0x3C5F590", Offset = "0x3C5F590", VA = "0x3C5F590", Slot = "18")]
	public override int GetMonthsInYear(int year, int era)
	{
		return default(int);
	}

	[Token(Token = "0x6002D3D")]
	[Address(RVA = "0x3C5F5B0", Offset = "0x3C5F5B0", VA = "0x3C5F5B0", Slot = "15")]
	public override int GetEra(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002D3E")]
	[Address(RVA = "0x3C5F5D0", Offset = "0x3C5F5D0", VA = "0x3C5F5D0", Slot = "17")]
	public override int GetMonth(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002D3F")]
	[Address(RVA = "0x3C5F5F0", Offset = "0x3C5F5F0", VA = "0x3C5F5F0", Slot = "19")]
	public override int GetYear(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002D40")]
	[Address(RVA = "0x3C5F610", Offset = "0x3C5F610", VA = "0x3C5F610", Slot = "21")]
	public override bool IsLeapYear(int year, int era)
	{
		return default(bool);
	}

	[Token(Token = "0x6002D41")]
	[Address(RVA = "0x3C5F630", Offset = "0x3C5F630", VA = "0x3C5F630", Slot = "23")]
	public override DateTime ToDateTime(int year, int month, int day, int hour, int minute, int second, int millisecond, int era)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6002D45")]
	[Address(RVA = "0x3C5F7E0", Offset = "0x3C5F7E0", VA = "0x3C5F7E0", Slot = "30")]
	public override int ToFourDigitYear(int year)
	{
		return default(int);
	}
}
