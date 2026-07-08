using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Globalization;

[Serializable]
[Token(Token = "0x20005BC")]
[ComVisible(true)]
public class GregorianCalendar : Calendar
{
	[Token(Token = "0x4001901")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	internal GregorianCalendarTypes m_type;

	[Token(Token = "0x4001902")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static readonly int[] DaysToMonth365;

	[Token(Token = "0x4001903")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	internal static readonly int[] DaysToMonth366;

	[Token(Token = "0x4001904")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static Calendar s_defaultInstance;

	[Token(Token = "0x17000691")]
	[ComVisible(false)]
	public override DateTime MinSupportedDateTime
	{
		[Token(Token = "0x6002C97")]
		[Address(RVA = "0x4F72370", Offset = "0x4F72370", VA = "0x4F72370", Slot = "5")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x17000692")]
	[ComVisible(false)]
	public override DateTime MaxSupportedDateTime
	{
		[Token(Token = "0x6002C98")]
		[Address(RVA = "0x4F723E0", Offset = "0x4F723E0", VA = "0x4F723E0", Slot = "6")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x17000693")]
	internal override int ID
	{
		[Token(Token = "0x6002C9C")]
		[Address(RVA = "0x4F725D0", Offset = "0x4F725D0", VA = "0x4F725D0", Slot = "7")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000694")]
	public override int[] Eras
	{
		[Token(Token = "0x6002CA4")]
		[Address(RVA = "0x4F72EC0", Offset = "0x4F72EC0", VA = "0x4F72EC0", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000695")]
	public override int TwoDigitYearMax
	{
		[Token(Token = "0x6002CAB")]
		[Address(RVA = "0x4F73410", Offset = "0x4F73410", VA = "0x4F73410", Slot = "28")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002CAC")]
		[Address(RVA = "0x4F73480", Offset = "0x4F73480", VA = "0x4F73480", Slot = "29")]
		set
		{
		}
	}

	[Token(Token = "0x6002C96")]
	[Address(RVA = "0x4F722A0", Offset = "0x4F722A0", VA = "0x4F722A0")]
	[OnDeserialized]
	private void OnDeserialized(StreamingContext ctx)
	{
	}

	[Token(Token = "0x6002C99")]
	[Address(RVA = "0x4F5B100", Offset = "0x4F5B100", VA = "0x4F5B100")]
	internal static Calendar GetDefaultInstance()
	{
		return null;
	}

	[Token(Token = "0x6002C9A")]
	[Address(RVA = "0x4F72450", Offset = "0x4F72450", VA = "0x4F72450")]
	public GregorianCalendar()
	{
	}

	[Token(Token = "0x6002C9B")]
	[Address(RVA = "0x4F72480", Offset = "0x4F72480", VA = "0x4F72480")]
	public GregorianCalendar(GregorianCalendarTypes type)
	{
	}

	[Token(Token = "0x6002C9D")]
	[Address(RVA = "0x4F725E0", Offset = "0x4F725E0", VA = "0x4F725E0", Slot = "31")]
	internal virtual int GetDatePart(long ticks, int part)
	{
		return default(int);
	}

	[Token(Token = "0x6002C9E")]
	[Address(RVA = "0x4F727C0", Offset = "0x4F727C0", VA = "0x4F727C0")]
	internal static long GetAbsoluteDate(int year, int month, int day)
	{
		return default(long);
	}

	[Token(Token = "0x6002C9F")]
	[Address(RVA = "0x4F729B0", Offset = "0x4F729B0", VA = "0x4F729B0", Slot = "11")]
	public override int GetDayOfMonth(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002CA0")]
	[Address(RVA = "0x4F72A20", Offset = "0x4F72A20", VA = "0x4F72A20", Slot = "12")]
	public override DayOfWeek GetDayOfWeek(DateTime time)
	{
		return default(DayOfWeek);
	}

	[Token(Token = "0x6002CA1")]
	[Address(RVA = "0x4F72AC0", Offset = "0x4F72AC0", VA = "0x4F72AC0", Slot = "13")]
	public override int GetDaysInMonth(int year, int month, int era)
	{
		return default(int);
	}

	[Token(Token = "0x6002CA2")]
	[Address(RVA = "0x4F72D40", Offset = "0x4F72D40", VA = "0x4F72D40", Slot = "14")]
	public override int GetDaysInYear(int year, int era)
	{
		return default(int);
	}

	[Token(Token = "0x6002CA3")]
	[Address(RVA = "0x4F72EB0", Offset = "0x4F72EB0", VA = "0x4F72EB0", Slot = "15")]
	public override int GetEra(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002CA5")]
	[Address(RVA = "0x4F72F10", Offset = "0x4F72F10", VA = "0x4F72F10", Slot = "17")]
	public override int GetMonth(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002CA6")]
	[Address(RVA = "0x4F72F80", Offset = "0x4F72F80", VA = "0x4F72F80", Slot = "18")]
	public override int GetMonthsInYear(int year, int era)
	{
		return default(int);
	}

	[Token(Token = "0x6002CA7")]
	[Address(RVA = "0x4F730C0", Offset = "0x4F730C0", VA = "0x4F730C0", Slot = "19")]
	public override int GetYear(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002CA8")]
	[Address(RVA = "0x4F73130", Offset = "0x4F73130", VA = "0x4F73130", Slot = "21")]
	public override bool IsLeapYear(int year, int era)
	{
		return default(bool);
	}

	[Token(Token = "0x6002CA9")]
	[Address(RVA = "0x4F73290", Offset = "0x4F73290", VA = "0x4F73290", Slot = "23")]
	public override DateTime ToDateTime(int year, int month, int day, int hour, int minute, int second, int millisecond, int era)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6002CAA")]
	[Address(RVA = "0x4F73330", Offset = "0x4F73330", VA = "0x4F73330", Slot = "24")]
	internal override bool TryToDateTime(int year, int month, int day, int hour, int minute, int second, int millisecond, int era, out DateTime result)
	{
		return default(bool);
	}

	[Token(Token = "0x6002CAD")]
	[Address(RVA = "0x4F735D0", Offset = "0x4F735D0", VA = "0x4F735D0", Slot = "30")]
	public override int ToFourDigitYear(int year)
	{
		return default(int);
	}
}
