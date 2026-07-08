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
		[Address(RVA = "0x4F79900", Offset = "0x4F79900", VA = "0x4F79900", Slot = "5")]
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
		[Address(RVA = "0x4F79970", Offset = "0x4F79970", VA = "0x4F79970", Slot = "6")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x170006C4")]
	internal override int ID
	{
		[Token(Token = "0x6002D37")]
		[Address(RVA = "0x4F799E0", Offset = "0x4F799E0", VA = "0x4F799E0", Slot = "7")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006C5")]
	public override int[] Eras
	{
		[Token(Token = "0x6002D42")]
		[Address(RVA = "0x4F79B40", Offset = "0x4F79B40", VA = "0x4F79B40", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006C6")]
	public override int TwoDigitYearMax
	{
		[Token(Token = "0x6002D43")]
		[Address(RVA = "0x4F79B60", Offset = "0x4F79B60", VA = "0x4F79B60", Slot = "28")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002D44")]
		[Address(RVA = "0x4F79BA0", Offset = "0x4F79BA0", VA = "0x4F79BA0", Slot = "29")]
		set
		{
		}
	}

	[Token(Token = "0x6002D33")]
	[Address(RVA = "0x4F79670", Offset = "0x4F79670", VA = "0x4F79670")]
	internal static Calendar GetDefaultInstance()
	{
		return null;
	}

	[Token(Token = "0x6002D36")]
	[Address(RVA = "0x4F79740", Offset = "0x4F79740", VA = "0x4F79740")]
	public TaiwanCalendar()
	{
	}

	[Token(Token = "0x6002D38")]
	[Address(RVA = "0x4F799F0", Offset = "0x4F799F0", VA = "0x4F799F0", Slot = "13")]
	public override int GetDaysInMonth(int year, int month, int era)
	{
		return default(int);
	}

	[Token(Token = "0x6002D39")]
	[Address(RVA = "0x4F79A10", Offset = "0x4F79A10", VA = "0x4F79A10", Slot = "14")]
	public override int GetDaysInYear(int year, int era)
	{
		return default(int);
	}

	[Token(Token = "0x6002D3A")]
	[Address(RVA = "0x4F79A30", Offset = "0x4F79A30", VA = "0x4F79A30", Slot = "11")]
	public override int GetDayOfMonth(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002D3B")]
	[Address(RVA = "0x4F79A50", Offset = "0x4F79A50", VA = "0x4F79A50", Slot = "12")]
	public override DayOfWeek GetDayOfWeek(DateTime time)
	{
		return default(DayOfWeek);
	}

	[Token(Token = "0x6002D3C")]
	[Address(RVA = "0x4F79A70", Offset = "0x4F79A70", VA = "0x4F79A70", Slot = "18")]
	public override int GetMonthsInYear(int year, int era)
	{
		return default(int);
	}

	[Token(Token = "0x6002D3D")]
	[Address(RVA = "0x4F79A90", Offset = "0x4F79A90", VA = "0x4F79A90", Slot = "15")]
	public override int GetEra(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002D3E")]
	[Address(RVA = "0x4F79AB0", Offset = "0x4F79AB0", VA = "0x4F79AB0", Slot = "17")]
	public override int GetMonth(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002D3F")]
	[Address(RVA = "0x4F79AD0", Offset = "0x4F79AD0", VA = "0x4F79AD0", Slot = "19")]
	public override int GetYear(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002D40")]
	[Address(RVA = "0x4F79AF0", Offset = "0x4F79AF0", VA = "0x4F79AF0", Slot = "21")]
	public override bool IsLeapYear(int year, int era)
	{
		return default(bool);
	}

	[Token(Token = "0x6002D41")]
	[Address(RVA = "0x4F79B10", Offset = "0x4F79B10", VA = "0x4F79B10", Slot = "23")]
	public override DateTime ToDateTime(int year, int month, int day, int hour, int minute, int second, int millisecond, int era)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6002D45")]
	[Address(RVA = "0x4F79CC0", Offset = "0x4F79CC0", VA = "0x4F79CC0", Slot = "30")]
	public override int ToFourDigitYear(int year)
	{
		return default(int);
	}
}
