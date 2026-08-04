// ==================== AoTTG2 cross-reference ====================
// Type: System.Globalization.GregorianCalendar
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3C57E90", Offset = "0x3C57E90", VA = "0x3C57E90", Slot = "5")]
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
		[Address(RVA = "0x3C57F00", Offset = "0x3C57F00", VA = "0x3C57F00", Slot = "6")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x17000693")]
	internal override int ID
	{
		[Token(Token = "0x6002C9C")]
		[Address(RVA = "0x3C580F0", Offset = "0x3C580F0", VA = "0x3C580F0", Slot = "7")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000694")]
	public override int[] Eras
	{
		[Token(Token = "0x6002CA4")]
		[Address(RVA = "0x3C589E0", Offset = "0x3C589E0", VA = "0x3C589E0", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000695")]
	public override int TwoDigitYearMax
	{
		[Token(Token = "0x6002CAB")]
		[Address(RVA = "0x3C58F30", Offset = "0x3C58F30", VA = "0x3C58F30", Slot = "28")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002CAC")]
		[Address(RVA = "0x3C58FA0", Offset = "0x3C58FA0", VA = "0x3C58FA0", Slot = "29")]
		set
		{
		}
	}

	[Token(Token = "0x6002C96")]
	[Address(RVA = "0x3C57DC0", Offset = "0x3C57DC0", VA = "0x3C57DC0")]
	[OnDeserialized]
	private void OnDeserialized(StreamingContext ctx)
	{
	}

	[Token(Token = "0x6002C99")]
	[Address(RVA = "0x3C40C20", Offset = "0x3C40C20", VA = "0x3C40C20")]
	internal static Calendar GetDefaultInstance()
	{
		return null;
	}

	[Token(Token = "0x6002C9A")]
	[Address(RVA = "0x3C57F70", Offset = "0x3C57F70", VA = "0x3C57F70")]
	public GregorianCalendar()
	{
	}

	[Token(Token = "0x6002C9B")]
	[Address(RVA = "0x3C57FA0", Offset = "0x3C57FA0", VA = "0x3C57FA0")]
	public GregorianCalendar(GregorianCalendarTypes type)
	{
	}

	[Token(Token = "0x6002C9D")]
	[Address(RVA = "0x3C58100", Offset = "0x3C58100", VA = "0x3C58100", Slot = "31")]
	internal virtual int GetDatePart(long ticks, int part)
	{
		return default(int);
	}

	[Token(Token = "0x6002C9E")]
	[Address(RVA = "0x3C582E0", Offset = "0x3C582E0", VA = "0x3C582E0")]
	internal static long GetAbsoluteDate(int year, int month, int day)
	{
		return default(long);
	}

	[Token(Token = "0x6002C9F")]
	[Address(RVA = "0x3C584D0", Offset = "0x3C584D0", VA = "0x3C584D0", Slot = "11")]
	public override int GetDayOfMonth(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002CA0")]
	[Address(RVA = "0x3C58540", Offset = "0x3C58540", VA = "0x3C58540", Slot = "12")]
	public override DayOfWeek GetDayOfWeek(DateTime time)
	{
		return default(DayOfWeek);
	}

	[Token(Token = "0x6002CA1")]
	[Address(RVA = "0x3C585E0", Offset = "0x3C585E0", VA = "0x3C585E0", Slot = "13")]
	public override int GetDaysInMonth(int year, int month, int era)
	{
		return default(int);
	}

	[Token(Token = "0x6002CA2")]
	[Address(RVA = "0x3C58860", Offset = "0x3C58860", VA = "0x3C58860", Slot = "14")]
	public override int GetDaysInYear(int year, int era)
	{
		return default(int);
	}

	[Token(Token = "0x6002CA3")]
	[Address(RVA = "0x3C589D0", Offset = "0x3C589D0", VA = "0x3C589D0", Slot = "15")]
	public override int GetEra(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002CA5")]
	[Address(RVA = "0x3C58A30", Offset = "0x3C58A30", VA = "0x3C58A30", Slot = "17")]
	public override int GetMonth(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002CA6")]
	[Address(RVA = "0x3C58AA0", Offset = "0x3C58AA0", VA = "0x3C58AA0", Slot = "18")]
	public override int GetMonthsInYear(int year, int era)
	{
		return default(int);
	}

	[Token(Token = "0x6002CA7")]
	[Address(RVA = "0x3C58BE0", Offset = "0x3C58BE0", VA = "0x3C58BE0", Slot = "19")]
	public override int GetYear(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002CA8")]
	[Address(RVA = "0x3C58C50", Offset = "0x3C58C50", VA = "0x3C58C50", Slot = "21")]
	public override bool IsLeapYear(int year, int era)
	{
		return default(bool);
	}

	[Token(Token = "0x6002CA9")]
	[Address(RVA = "0x3C58DB0", Offset = "0x3C58DB0", VA = "0x3C58DB0", Slot = "23")]
	public override DateTime ToDateTime(int year, int month, int day, int hour, int minute, int second, int millisecond, int era)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6002CAA")]
	[Address(RVA = "0x3C58E50", Offset = "0x3C58E50", VA = "0x3C58E50", Slot = "24")]
	internal override bool TryToDateTime(int year, int month, int day, int hour, int minute, int second, int millisecond, int era, out DateTime result)
	{
		return default(bool);
	}

	[Token(Token = "0x6002CAD")]
	[Address(RVA = "0x3C590F0", Offset = "0x3C590F0", VA = "0x3C590F0", Slot = "30")]
	public override int ToFourDigitYear(int year)
	{
		return default(int);
	}
}
