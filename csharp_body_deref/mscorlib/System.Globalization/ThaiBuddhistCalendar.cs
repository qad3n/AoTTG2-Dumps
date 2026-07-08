using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Globalization;

[Serializable]
[Token(Token = "0x20005C6")]
[ComVisible(true)]
public class ThaiBuddhistCalendar : Calendar
{
	[Token(Token = "0x400195B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static System.Globalization.EraInfo[] thaiBuddhistEraInfo;

	[Token(Token = "0x400195C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	internal System.Globalization.GregorianCalendarHelper helper;

	[Token(Token = "0x170006CB")]
	[ComVisible(false)]
	public override DateTime MinSupportedDateTime
	{
		[Token(Token = "0x6002D65")]
		[Address(RVA = "0x4F7BD90", Offset = "0x4F7BD90", VA = "0x4F7BD90", Slot = "5")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x170006CC")]
	[ComVisible(false)]
	public override DateTime MaxSupportedDateTime
	{
		[Token(Token = "0x6002D66")]
		[Address(RVA = "0x4F7BE00", Offset = "0x4F7BE00", VA = "0x4F7BE00", Slot = "6")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x170006CD")]
	internal override int ID
	{
		[Token(Token = "0x6002D68")]
		[Address(RVA = "0x4F7BF10", Offset = "0x4F7BF10", VA = "0x4F7BF10", Slot = "7")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006CE")]
	public override int[] Eras
	{
		[Token(Token = "0x6002D73")]
		[Address(RVA = "0x4F7C070", Offset = "0x4F7C070", VA = "0x4F7C070", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006CF")]
	public override int TwoDigitYearMax
	{
		[Token(Token = "0x6002D74")]
		[Address(RVA = "0x4F7C090", Offset = "0x4F7C090", VA = "0x4F7C090", Slot = "28")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002D75")]
		[Address(RVA = "0x4F7C0D0", Offset = "0x4F7C0D0", VA = "0x4F7C0D0", Slot = "29")]
		set
		{
		}
	}

	[Token(Token = "0x6002D67")]
	[Address(RVA = "0x4F7BE70", Offset = "0x4F7BE70", VA = "0x4F7BE70")]
	public ThaiBuddhistCalendar()
	{
	}

	[Token(Token = "0x6002D69")]
	[Address(RVA = "0x4F7BF20", Offset = "0x4F7BF20", VA = "0x4F7BF20", Slot = "13")]
	public override int GetDaysInMonth(int year, int month, int era)
	{
		return default(int);
	}

	[Token(Token = "0x6002D6A")]
	[Address(RVA = "0x4F7BF40", Offset = "0x4F7BF40", VA = "0x4F7BF40", Slot = "14")]
	public override int GetDaysInYear(int year, int era)
	{
		return default(int);
	}

	[Token(Token = "0x6002D6B")]
	[Address(RVA = "0x4F7BF60", Offset = "0x4F7BF60", VA = "0x4F7BF60", Slot = "11")]
	public override int GetDayOfMonth(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002D6C")]
	[Address(RVA = "0x4F7BF80", Offset = "0x4F7BF80", VA = "0x4F7BF80", Slot = "12")]
	public override DayOfWeek GetDayOfWeek(DateTime time)
	{
		return default(DayOfWeek);
	}

	[Token(Token = "0x6002D6D")]
	[Address(RVA = "0x4F7BFA0", Offset = "0x4F7BFA0", VA = "0x4F7BFA0", Slot = "18")]
	public override int GetMonthsInYear(int year, int era)
	{
		return default(int);
	}

	[Token(Token = "0x6002D6E")]
	[Address(RVA = "0x4F7BFC0", Offset = "0x4F7BFC0", VA = "0x4F7BFC0", Slot = "15")]
	public override int GetEra(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002D6F")]
	[Address(RVA = "0x4F7BFE0", Offset = "0x4F7BFE0", VA = "0x4F7BFE0", Slot = "17")]
	public override int GetMonth(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002D70")]
	[Address(RVA = "0x4F7C000", Offset = "0x4F7C000", VA = "0x4F7C000", Slot = "19")]
	public override int GetYear(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002D71")]
	[Address(RVA = "0x4F7C020", Offset = "0x4F7C020", VA = "0x4F7C020", Slot = "21")]
	public override bool IsLeapYear(int year, int era)
	{
		return default(bool);
	}

	[Token(Token = "0x6002D72")]
	[Address(RVA = "0x4F7C040", Offset = "0x4F7C040", VA = "0x4F7C040", Slot = "23")]
	public override DateTime ToDateTime(int year, int month, int day, int hour, int minute, int second, int millisecond, int era)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6002D76")]
	[Address(RVA = "0x4F7C1F0", Offset = "0x4F7C1F0", VA = "0x4F7C1F0", Slot = "30")]
	public override int ToFourDigitYear(int year)
	{
		return default(int);
	}
}
