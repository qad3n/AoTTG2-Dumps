// ==================== AoTTG2 cross-reference ====================
// Type: System.Globalization.ThaiBuddhistCalendar
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3C618B0", Offset = "0x3C618B0", VA = "0x3C618B0", Slot = "5")]
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
		[Address(RVA = "0x3C61920", Offset = "0x3C61920", VA = "0x3C61920", Slot = "6")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x170006CD")]
	internal override int ID
	{
		[Token(Token = "0x6002D68")]
		[Address(RVA = "0x3C61A30", Offset = "0x3C61A30", VA = "0x3C61A30", Slot = "7")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006CE")]
	public override int[] Eras
	{
		[Token(Token = "0x6002D73")]
		[Address(RVA = "0x3C61B90", Offset = "0x3C61B90", VA = "0x3C61B90", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006CF")]
	public override int TwoDigitYearMax
	{
		[Token(Token = "0x6002D74")]
		[Address(RVA = "0x3C61BB0", Offset = "0x3C61BB0", VA = "0x3C61BB0", Slot = "28")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002D75")]
		[Address(RVA = "0x3C61BF0", Offset = "0x3C61BF0", VA = "0x3C61BF0", Slot = "29")]
		set
		{
		}
	}

	[Token(Token = "0x6002D67")]
	[Address(RVA = "0x3C61990", Offset = "0x3C61990", VA = "0x3C61990")]
	public ThaiBuddhistCalendar()
	{
	}

	[Token(Token = "0x6002D69")]
	[Address(RVA = "0x3C61A40", Offset = "0x3C61A40", VA = "0x3C61A40", Slot = "13")]
	public override int GetDaysInMonth(int year, int month, int era)
	{
		return default(int);
	}

	[Token(Token = "0x6002D6A")]
	[Address(RVA = "0x3C61A60", Offset = "0x3C61A60", VA = "0x3C61A60", Slot = "14")]
	public override int GetDaysInYear(int year, int era)
	{
		return default(int);
	}

	[Token(Token = "0x6002D6B")]
	[Address(RVA = "0x3C61A80", Offset = "0x3C61A80", VA = "0x3C61A80", Slot = "11")]
	public override int GetDayOfMonth(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002D6C")]
	[Address(RVA = "0x3C61AA0", Offset = "0x3C61AA0", VA = "0x3C61AA0", Slot = "12")]
	public override DayOfWeek GetDayOfWeek(DateTime time)
	{
		return default(DayOfWeek);
	}

	[Token(Token = "0x6002D6D")]
	[Address(RVA = "0x3C61AC0", Offset = "0x3C61AC0", VA = "0x3C61AC0", Slot = "18")]
	public override int GetMonthsInYear(int year, int era)
	{
		return default(int);
	}

	[Token(Token = "0x6002D6E")]
	[Address(RVA = "0x3C61AE0", Offset = "0x3C61AE0", VA = "0x3C61AE0", Slot = "15")]
	public override int GetEra(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002D6F")]
	[Address(RVA = "0x3C61B00", Offset = "0x3C61B00", VA = "0x3C61B00", Slot = "17")]
	public override int GetMonth(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002D70")]
	[Address(RVA = "0x3C61B20", Offset = "0x3C61B20", VA = "0x3C61B20", Slot = "19")]
	public override int GetYear(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002D71")]
	[Address(RVA = "0x3C61B40", Offset = "0x3C61B40", VA = "0x3C61B40", Slot = "21")]
	public override bool IsLeapYear(int year, int era)
	{
		return default(bool);
	}

	[Token(Token = "0x6002D72")]
	[Address(RVA = "0x3C61B60", Offset = "0x3C61B60", VA = "0x3C61B60", Slot = "23")]
	public override DateTime ToDateTime(int year, int month, int day, int hour, int minute, int second, int millisecond, int era)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6002D76")]
	[Address(RVA = "0x3C61D10", Offset = "0x3C61D10", VA = "0x3C61D10", Slot = "30")]
	public override int ToFourDigitYear(int year)
	{
		return default(int);
	}
}
