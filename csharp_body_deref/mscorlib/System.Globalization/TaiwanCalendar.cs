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
[Token(Token = "0x2000571")]
[ComVisible(true)]
public class TaiwanCalendar : Calendar
{
	[Token(Token = "0x40016D3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static System.Globalization.EraInfo[] taiwanEraInfo;

	[Token(Token = "0x40016D4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	internal static Calendar s_defaultInstance;

	[Token(Token = "0x40016D5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	internal System.Globalization.GregorianCalendarHelper helper;

	[Token(Token = "0x40016D6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal static readonly DateTime calendarMinValue;

	[Token(Token = "0x17000650")]
	[ComVisible(false)]
	public override DateTime MinSupportedDateTime
	{
		[Token(Token = "0x6002A20")]
		[Address(RVA = "0x5434190", Offset = "0x5433190", VA = "0x5434190", Slot = "5")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x17000651")]
	[ComVisible(false)]
	public override DateTime MaxSupportedDateTime
	{
		[Token(Token = "0x6002A21")]
		[Address(RVA = "0x5434200", Offset = "0x5433200", VA = "0x5434200", Slot = "6")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x17000652")]
	internal override int ID
	{
		[Token(Token = "0x6002A23")]
		[Address(RVA = "0x5434270", Offset = "0x5433270", VA = "0x5434270", Slot = "7")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000653")]
	public override int[] Eras
	{
		[Token(Token = "0x6002A2E")]
		[Address(RVA = "0x54345C0", Offset = "0x54335C0", VA = "0x54345C0", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000654")]
	public override int TwoDigitYearMax
	{
		[Token(Token = "0x6002A2F")]
		[Address(RVA = "0x54345E0", Offset = "0x54335E0", VA = "0x54345E0", Slot = "28")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002A30")]
		[Address(RVA = "0x5434650", Offset = "0x5433650", VA = "0x5434650", Slot = "29")]
		set
		{
		}
	}

	[Token(Token = "0x6002A1F")]
	[Address(RVA = "0x5433EF0", Offset = "0x5432EF0", VA = "0x5433EF0")]
	internal static Calendar GetDefaultInstance()
	{
		return null;
	}

	[Token(Token = "0x6002A22")]
	[Address(RVA = "0x5433FC0", Offset = "0x5432FC0", VA = "0x5433FC0")]
	public TaiwanCalendar()
	{
	}

	[Token(Token = "0x6002A24")]
	[Address(RVA = "0x5434280", Offset = "0x5433280", VA = "0x5434280", Slot = "13")]
	public override int GetDaysInMonth(int year, int month, int era)
	{
		return default(int);
	}

	[Token(Token = "0x6002A25")]
	[Address(RVA = "0x54342A0", Offset = "0x54332A0", VA = "0x54342A0", Slot = "14")]
	public override int GetDaysInYear(int year, int era)
	{
		return default(int);
	}

	[Token(Token = "0x6002A26")]
	[Address(RVA = "0x5434300", Offset = "0x5433300", VA = "0x5434300", Slot = "11")]
	public override int GetDayOfMonth(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002A27")]
	[Address(RVA = "0x5434380", Offset = "0x5433380", VA = "0x5434380", Slot = "12")]
	public override DayOfWeek GetDayOfWeek(DateTime time)
	{
		return default(DayOfWeek);
	}

	[Token(Token = "0x6002A28")]
	[Address(RVA = "0x5434450", Offset = "0x5433450", VA = "0x5434450", Slot = "18")]
	public override int GetMonthsInYear(int year, int era)
	{
		return default(int);
	}

	[Token(Token = "0x6002A29")]
	[Address(RVA = "0x5434470", Offset = "0x5433470", VA = "0x5434470", Slot = "15")]
	public override int GetEra(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002A2A")]
	[Address(RVA = "0x5434490", Offset = "0x5433490", VA = "0x5434490", Slot = "17")]
	public override int GetMonth(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002A2B")]
	[Address(RVA = "0x5434510", Offset = "0x5433510", VA = "0x5434510", Slot = "19")]
	public override int GetYear(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002A2C")]
	[Address(RVA = "0x5434530", Offset = "0x5433530", VA = "0x5434530", Slot = "21")]
	public override bool IsLeapYear(int year, int era)
	{
		return default(bool);
	}

	[Token(Token = "0x6002A2D")]
	[Address(RVA = "0x5434580", Offset = "0x5433580", VA = "0x5434580", Slot = "23")]
	public override DateTime ToDateTime(int year, int month, int day, int hour, int minute, int second, int millisecond, int era)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6002A31")]
	[Address(RVA = "0x54347C0", Offset = "0x54337C0", VA = "0x54347C0", Slot = "30")]
	public override int ToFourDigitYear(int year)
	{
		return default(int);
	}
}
