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
[Token(Token = "0x20005C1")]
[ComVisible(true)]
public class JapaneseCalendar : Calendar
{
	[Token(Token = "0x4001921")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static readonly DateTime calendarMinValue;

	[Token(Token = "0x4001922")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	internal static System.Globalization.EraInfo[] japaneseEraInfo;

	[Token(Token = "0x4001923")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal static Calendar s_defaultInstance;

	[Token(Token = "0x4001924")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	internal System.Globalization.GregorianCalendarHelper helper;

	[Token(Token = "0x1700069E")]
	[ComVisible(false)]
	public override DateTime MinSupportedDateTime
	{
		[Token(Token = "0x6002CE4")]
		[Address(RVA = "0x3C5C590", Offset = "0x3C5C590", VA = "0x3C5C590", Slot = "5")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x1700069F")]
	[ComVisible(false)]
	public override DateTime MaxSupportedDateTime
	{
		[Token(Token = "0x6002CE5")]
		[Address(RVA = "0x3C5C600", Offset = "0x3C5C600", VA = "0x3C5C600", Slot = "6")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x170006A0")]
	internal override int ID
	{
		[Token(Token = "0x6002CEA")]
		[Address(RVA = "0x3C5CE10", Offset = "0x3C5CE10", VA = "0x3C5CE10", Slot = "7")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006A1")]
	public override int[] Eras
	{
		[Token(Token = "0x6002CF6")]
		[Address(RVA = "0x3C5D0A0", Offset = "0x3C5D0A0", VA = "0x3C5D0A0", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006A2")]
	public override int TwoDigitYearMax
	{
		[Token(Token = "0x6002CFA")]
		[Address(RVA = "0x3C5D340", Offset = "0x3C5D340", VA = "0x3C5D340", Slot = "28")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002CFB")]
		[Address(RVA = "0x3C5D380", Offset = "0x3C5D380", VA = "0x3C5D380", Slot = "29")]
		set
		{
		}
	}

	[Token(Token = "0x6002CE6")]
	[Address(RVA = "0x3C5C670", Offset = "0x3C5C670", VA = "0x3C5C670")]
	internal static System.Globalization.EraInfo[] GetEraInfo()
	{
		return null;
	}

	[Token(Token = "0x6002CE7")]
	[Address(RVA = "0x3C5CB60", Offset = "0x3C5CB60", VA = "0x3C5CB60")]
	private static System.Globalization.EraInfo[] GetErasFromRegistry()
	{
		return null;
	}

	[Token(Token = "0x6002CE8")]
	[Address(RVA = "0x3C5CB70", Offset = "0x3C5CB70", VA = "0x3C5CB70")]
	internal static Calendar GetDefaultInstance()
	{
		return null;
	}

	[Token(Token = "0x6002CE9")]
	[Address(RVA = "0x3C5CC40", Offset = "0x3C5CC40", VA = "0x3C5CC40")]
	public JapaneseCalendar()
	{
	}

	[Token(Token = "0x6002CEB")]
	[Address(RVA = "0x3C5CE20", Offset = "0x3C5CE20", VA = "0x3C5CE20", Slot = "13")]
	public override int GetDaysInMonth(int year, int month, int era)
	{
		return default(int);
	}

	[Token(Token = "0x6002CEC")]
	[Address(RVA = "0x3C5CE40", Offset = "0x3C5CE40", VA = "0x3C5CE40", Slot = "14")]
	public override int GetDaysInYear(int year, int era)
	{
		return default(int);
	}

	[Token(Token = "0x6002CED")]
	[Address(RVA = "0x3C5CE60", Offset = "0x3C5CE60", VA = "0x3C5CE60", Slot = "11")]
	public override int GetDayOfMonth(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002CEE")]
	[Address(RVA = "0x3C5CE80", Offset = "0x3C5CE80", VA = "0x3C5CE80", Slot = "12")]
	public override DayOfWeek GetDayOfWeek(DateTime time)
	{
		return default(DayOfWeek);
	}

	[Token(Token = "0x6002CEF")]
	[Address(RVA = "0x3C5CEA0", Offset = "0x3C5CEA0", VA = "0x3C5CEA0", Slot = "18")]
	public override int GetMonthsInYear(int year, int era)
	{
		return default(int);
	}

	[Token(Token = "0x6002CF0")]
	[Address(RVA = "0x3C5CEC0", Offset = "0x3C5CEC0", VA = "0x3C5CEC0", Slot = "15")]
	public override int GetEra(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002CF1")]
	[Address(RVA = "0x3C5CEE0", Offset = "0x3C5CEE0", VA = "0x3C5CEE0", Slot = "17")]
	public override int GetMonth(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002CF2")]
	[Address(RVA = "0x3C5CF00", Offset = "0x3C5CF00", VA = "0x3C5CF00", Slot = "19")]
	public override int GetYear(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002CF3")]
	[Address(RVA = "0x3C5CF20", Offset = "0x3C5CF20", VA = "0x3C5CF20", Slot = "21")]
	public override bool IsLeapYear(int year, int era)
	{
		return default(bool);
	}

	[Token(Token = "0x6002CF4")]
	[Address(RVA = "0x3C5CF40", Offset = "0x3C5CF40", VA = "0x3C5CF40", Slot = "23")]
	public override DateTime ToDateTime(int year, int month, int day, int hour, int minute, int second, int millisecond, int era)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6002CF5")]
	[Address(RVA = "0x3C5CF70", Offset = "0x3C5CF70", VA = "0x3C5CF70", Slot = "30")]
	public override int ToFourDigitYear(int year)
	{
		return default(int);
	}

	[Token(Token = "0x6002CF7")]
	[Address(RVA = "0x3C5D0C0", Offset = "0x3C5D0C0", VA = "0x3C5D0C0")]
	internal static string[] EraNames()
	{
		return null;
	}

	[Token(Token = "0x6002CF8")]
	[Address(RVA = "0x3C5D1F0", Offset = "0x3C5D1F0", VA = "0x3C5D1F0")]
	internal static string[] EnglishEraNames()
	{
		return null;
	}

	[Token(Token = "0x6002CF9")]
	[Address(RVA = "0x3C5D320", Offset = "0x3C5D320", VA = "0x3C5D320", Slot = "25")]
	internal override bool IsValidYear(int year, int era)
	{
		return default(bool);
	}
}
