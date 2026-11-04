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
[Token(Token = "0x2000596")]
[ComVisible(true)]
public class TaiwanCalendar : Calendar
{
	[Token(Token = "0x400176C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static System.Globalization.EraInfo[] taiwanEraInfo;

	[Token(Token = "0x400176D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	internal static Calendar s_defaultInstance;

	[Token(Token = "0x400176E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	internal System.Globalization.GregorianCalendarHelper helper;

	[Token(Token = "0x400176F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal static readonly DateTime calendarMinValue;

	[Token(Token = "0x1700064F")]
	[ComVisible(false)]
	public override DateTime MinSupportedDateTime
	{
		[Token(Token = "0x6002A41")]
		[Address(RVA = "0x1AAC390", Offset = "0x1AAA990", VA = "0x181AAC390", Slot = "5")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x17000650")]
	[ComVisible(false)]
	public override DateTime MaxSupportedDateTime
	{
		[Token(Token = "0x6002A42")]
		[Address(RVA = "0x1AAC340", Offset = "0x1AAA940", VA = "0x181AAC340", Slot = "6")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x17000651")]
	internal override int ID
	{
		[Token(Token = "0x6002A44")]
		[Address(RVA = "0x846F40", Offset = "0x845540", VA = "0x180846F40", Slot = "7")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000652")]
	public override int[] Eras
	{
		[Token(Token = "0x6002A4F")]
		[Address(RVA = "0x1AA9B20", Offset = "0x1AA8120", VA = "0x181AA9B20", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000653")]
	public override int TwoDigitYearMax
	{
		[Token(Token = "0x6002A50")]
		[Address(RVA = "0x1AA9BE0", Offset = "0x1AA81E0", VA = "0x181AA9BE0", Slot = "28")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002A51")]
		[Address(RVA = "0x1AAC3E0", Offset = "0x1AAA9E0", VA = "0x181AAC3E0", Slot = "29")]
		set
		{
		}
	}

	[Token(Token = "0x6002A40")]
	[Address(RVA = "0x1AABD80", Offset = "0x1AAA380", VA = "0x181AABD80")]
	internal static Calendar GetDefaultInstance()
	{
		return null;
	}

	[Token(Token = "0x6002A43")]
	[Address(RVA = "0x1AAC1C0", Offset = "0x1AAA7C0", VA = "0x181AAC1C0")]
	public TaiwanCalendar()
	{
	}

	[Token(Token = "0x6002A45")]
	[Address(RVA = "0x1AA8F20", Offset = "0x1AA7520", VA = "0x181AA8F20", Slot = "13")]
	public override int GetDaysInMonth(int year, int month, int era)
	{
		return default(int);
	}

	[Token(Token = "0x6002A46")]
	[Address(RVA = "0x1AA8F50", Offset = "0x1AA7550", VA = "0x181AA8F50", Slot = "14")]
	public override int GetDaysInYear(int year, int era)
	{
		return default(int);
	}

	[Token(Token = "0x6002A47")]
	[Address(RVA = "0x1AA8E80", Offset = "0x1AA7480", VA = "0x181AA8E80", Slot = "11")]
	public override int GetDayOfMonth(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002A48")]
	[Address(RVA = "0x1AA8F00", Offset = "0x1AA7500", VA = "0x181AA8F00", Slot = "12")]
	public override DayOfWeek GetDayOfWeek(DateTime time)
	{
		return default(DayOfWeek);
	}

	[Token(Token = "0x6002A49")]
	[Address(RVA = "0x1AA96E0", Offset = "0x1AA7CE0", VA = "0x181AA96E0", Slot = "18")]
	public override int GetMonthsInYear(int year, int era)
	{
		return default(int);
	}

	[Token(Token = "0x6002A4A")]
	[Address(RVA = "0x1AA9640", Offset = "0x1AA7C40", VA = "0x181AA9640", Slot = "15")]
	public override int GetEra(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002A4B")]
	[Address(RVA = "0x1AA9660", Offset = "0x1AA7C60", VA = "0x181AA9660", Slot = "17")]
	public override int GetMonth(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002A4C")]
	[Address(RVA = "0x1AA9710", Offset = "0x1AA7D10", VA = "0x181AA9710", Slot = "19")]
	public override int GetYear(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002A4D")]
	[Address(RVA = "0x1AA9730", Offset = "0x1AA7D30", VA = "0x181AA9730", Slot = "21")]
	public override bool IsLeapYear(int year, int era)
	{
		return default(bool);
	}

	[Token(Token = "0x6002A4E")]
	[Address(RVA = "0x1AA9780", Offset = "0x1AA7D80", VA = "0x181AA9780", Slot = "23")]
	public override DateTime ToDateTime(int year, int month, int day, int hour, int minute, int second, int millisecond, int era)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6002A52")]
	[Address(RVA = "0x1AABE70", Offset = "0x1AAA470", VA = "0x181AABE70", Slot = "30")]
	public override int ToFourDigitYear(int year)
	{
		return default(int);
	}
}
