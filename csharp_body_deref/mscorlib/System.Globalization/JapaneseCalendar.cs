// ==================== AoTTG2 cross-reference ====================
// Type: System.Globalization.JapaneseCalendar
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Globalization;

[Serializable]
[Token(Token = "0x200056E")]
[ComVisible(true)]
public class JapaneseCalendar : Calendar
{
	[Token(Token = "0x40016A9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static readonly DateTime calendarMinValue;

	[Token(Token = "0x40016AA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	internal static System.Globalization.EraInfo[] japaneseEraInfo;

	[Token(Token = "0x40016AB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal static Calendar s_defaultInstance;

	[Token(Token = "0x40016AC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	internal System.Globalization.GregorianCalendarHelper helper;

	[Token(Token = "0x1700062C")]
	[ComVisible(false)]
	public override DateTime MinSupportedDateTime
	{
		[Token(Token = "0x60029D0")]
		[Address(RVA = "0x5431300", Offset = "0x5430300", VA = "0x5431300", Slot = "5")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x1700062D")]
	[ComVisible(false)]
	public override DateTime MaxSupportedDateTime
	{
		[Token(Token = "0x60029D1")]
		[Address(RVA = "0x5431370", Offset = "0x5430370", VA = "0x5431370", Slot = "6")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x1700062E")]
	internal override int ID
	{
		[Token(Token = "0x60029D6")]
		[Address(RVA = "0x5431B80", Offset = "0x5430B80", VA = "0x5431B80", Slot = "7")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700062F")]
	public override int[] Eras
	{
		[Token(Token = "0x60029E2")]
		[Address(RVA = "0x5432000", Offset = "0x5431000", VA = "0x5432000", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000630")]
	public override int TwoDigitYearMax
	{
		[Token(Token = "0x60029E6")]
		[Address(RVA = "0x5432040", Offset = "0x5431040", VA = "0x5432040", Slot = "28")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60029E7")]
		[Address(RVA = "0x54320B0", Offset = "0x54310B0", VA = "0x54320B0", Slot = "29")]
		set
		{
		}
	}

	[Token(Token = "0x60029D2")]
	[Address(RVA = "0x54313E0", Offset = "0x54303E0", VA = "0x54313E0")]
	internal static System.Globalization.EraInfo[] GetEraInfo()
	{
		return null;
	}

	[Token(Token = "0x60029D3")]
	[Address(RVA = "0x54318E0", Offset = "0x54308E0", VA = "0x54318E0")]
	private static System.Globalization.EraInfo[] GetErasFromRegistry()
	{
		return null;
	}

	[Token(Token = "0x60029D4")]
	[Address(RVA = "0x54318F0", Offset = "0x54308F0", VA = "0x54318F0")]
	internal static Calendar GetDefaultInstance()
	{
		return null;
	}

	[Token(Token = "0x60029D5")]
	[Address(RVA = "0x54319C0", Offset = "0x54309C0", VA = "0x54319C0")]
	public JapaneseCalendar()
	{
	}

	[Token(Token = "0x60029D7")]
	[Address(RVA = "0x5431B90", Offset = "0x5430B90", VA = "0x5431B90", Slot = "13")]
	public override int GetDaysInMonth(int year, int month, int era)
	{
		return default(int);
	}

	[Token(Token = "0x60029D8")]
	[Address(RVA = "0x5431BB0", Offset = "0x5430BB0", VA = "0x5431BB0", Slot = "14")]
	public override int GetDaysInYear(int year, int era)
	{
		return default(int);
	}

	[Token(Token = "0x60029D9")]
	[Address(RVA = "0x5431C10", Offset = "0x5430C10", VA = "0x5431C10", Slot = "11")]
	public override int GetDayOfMonth(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x60029DA")]
	[Address(RVA = "0x5431C90", Offset = "0x5430C90", VA = "0x5431C90", Slot = "12")]
	public override DayOfWeek GetDayOfWeek(DateTime time)
	{
		return default(DayOfWeek);
	}

	[Token(Token = "0x60029DB")]
	[Address(RVA = "0x5431D60", Offset = "0x5430D60", VA = "0x5431D60", Slot = "18")]
	public override int GetMonthsInYear(int year, int era)
	{
		return default(int);
	}

	[Token(Token = "0x60029DC")]
	[Address(RVA = "0x5431D80", Offset = "0x5430D80", VA = "0x5431D80", Slot = "15")]
	public override int GetEra(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x60029DD")]
	[Address(RVA = "0x5431DA0", Offset = "0x5430DA0", VA = "0x5431DA0", Slot = "17")]
	public override int GetMonth(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x60029DE")]
	[Address(RVA = "0x5431E20", Offset = "0x5430E20", VA = "0x5431E20", Slot = "19")]
	public override int GetYear(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x60029DF")]
	[Address(RVA = "0x5431E40", Offset = "0x5430E40", VA = "0x5431E40", Slot = "21")]
	public override bool IsLeapYear(int year, int era)
	{
		return default(bool);
	}

	[Token(Token = "0x60029E0")]
	[Address(RVA = "0x5431E90", Offset = "0x5430E90", VA = "0x5431E90", Slot = "23")]
	public override DateTime ToDateTime(int year, int month, int day, int hour, int minute, int second, int millisecond, int era)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60029E1")]
	[Address(RVA = "0x5431ED0", Offset = "0x5430ED0", VA = "0x5431ED0", Slot = "30")]
	public override int ToFourDigitYear(int year)
	{
		return default(int);
	}

	[Token(Token = "0x60029E3")]
	[Address(RVA = "0x542C640", Offset = "0x542B640", VA = "0x542C640")]
	internal static string[] EraNames()
	{
		return null;
	}

	[Token(Token = "0x60029E4")]
	[Address(RVA = "0x542C760", Offset = "0x542B760", VA = "0x542C760")]
	internal static string[] EnglishEraNames()
	{
		return null;
	}

	[Token(Token = "0x60029E5")]
	[Address(RVA = "0x5432020", Offset = "0x5431020", VA = "0x5432020", Slot = "25")]
	internal override bool IsValidYear(int year, int era)
	{
		return default(bool);
	}
}
