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
		[Address(RVA = "0x4F76A70", Offset = "0x4F76A70", VA = "0x4F76A70", Slot = "5")]
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
		[Address(RVA = "0x4F76AE0", Offset = "0x4F76AE0", VA = "0x4F76AE0", Slot = "6")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x170006A0")]
	internal override int ID
	{
		[Token(Token = "0x6002CEA")]
		[Address(RVA = "0x4F772F0", Offset = "0x4F772F0", VA = "0x4F772F0", Slot = "7")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006A1")]
	public override int[] Eras
	{
		[Token(Token = "0x6002CF6")]
		[Address(RVA = "0x4F77580", Offset = "0x4F77580", VA = "0x4F77580", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006A2")]
	public override int TwoDigitYearMax
	{
		[Token(Token = "0x6002CFA")]
		[Address(RVA = "0x4F77820", Offset = "0x4F77820", VA = "0x4F77820", Slot = "28")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002CFB")]
		[Address(RVA = "0x4F77860", Offset = "0x4F77860", VA = "0x4F77860", Slot = "29")]
		set
		{
		}
	}

	[Token(Token = "0x6002CE6")]
	[Address(RVA = "0x4F76B50", Offset = "0x4F76B50", VA = "0x4F76B50")]
	internal static System.Globalization.EraInfo[] GetEraInfo()
	{
		return null;
	}

	[Token(Token = "0x6002CE7")]
	[Address(RVA = "0x4F77040", Offset = "0x4F77040", VA = "0x4F77040")]
	private static System.Globalization.EraInfo[] GetErasFromRegistry()
	{
		return null;
	}

	[Token(Token = "0x6002CE8")]
	[Address(RVA = "0x4F77050", Offset = "0x4F77050", VA = "0x4F77050")]
	internal static Calendar GetDefaultInstance()
	{
		return null;
	}

	[Token(Token = "0x6002CE9")]
	[Address(RVA = "0x4F77120", Offset = "0x4F77120", VA = "0x4F77120")]
	public JapaneseCalendar()
	{
	}

	[Token(Token = "0x6002CEB")]
	[Address(RVA = "0x4F77300", Offset = "0x4F77300", VA = "0x4F77300", Slot = "13")]
	public override int GetDaysInMonth(int year, int month, int era)
	{
		return default(int);
	}

	[Token(Token = "0x6002CEC")]
	[Address(RVA = "0x4F77320", Offset = "0x4F77320", VA = "0x4F77320", Slot = "14")]
	public override int GetDaysInYear(int year, int era)
	{
		return default(int);
	}

	[Token(Token = "0x6002CED")]
	[Address(RVA = "0x4F77340", Offset = "0x4F77340", VA = "0x4F77340", Slot = "11")]
	public override int GetDayOfMonth(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002CEE")]
	[Address(RVA = "0x4F77360", Offset = "0x4F77360", VA = "0x4F77360", Slot = "12")]
	public override DayOfWeek GetDayOfWeek(DateTime time)
	{
		return default(DayOfWeek);
	}

	[Token(Token = "0x6002CEF")]
	[Address(RVA = "0x4F77380", Offset = "0x4F77380", VA = "0x4F77380", Slot = "18")]
	public override int GetMonthsInYear(int year, int era)
	{
		return default(int);
	}

	[Token(Token = "0x6002CF0")]
	[Address(RVA = "0x4F773A0", Offset = "0x4F773A0", VA = "0x4F773A0", Slot = "15")]
	public override int GetEra(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002CF1")]
	[Address(RVA = "0x4F773C0", Offset = "0x4F773C0", VA = "0x4F773C0", Slot = "17")]
	public override int GetMonth(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002CF2")]
	[Address(RVA = "0x4F773E0", Offset = "0x4F773E0", VA = "0x4F773E0", Slot = "19")]
	public override int GetYear(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002CF3")]
	[Address(RVA = "0x4F77400", Offset = "0x4F77400", VA = "0x4F77400", Slot = "21")]
	public override bool IsLeapYear(int year, int era)
	{
		return default(bool);
	}

	[Token(Token = "0x6002CF4")]
	[Address(RVA = "0x4F77420", Offset = "0x4F77420", VA = "0x4F77420", Slot = "23")]
	public override DateTime ToDateTime(int year, int month, int day, int hour, int minute, int second, int millisecond, int era)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6002CF5")]
	[Address(RVA = "0x4F77450", Offset = "0x4F77450", VA = "0x4F77450", Slot = "30")]
	public override int ToFourDigitYear(int year)
	{
		return default(int);
	}

	[Token(Token = "0x6002CF7")]
	[Address(RVA = "0x4F775A0", Offset = "0x4F775A0", VA = "0x4F775A0")]
	internal static string[] EraNames()
	{
		return null;
	}

	[Token(Token = "0x6002CF8")]
	[Address(RVA = "0x4F776D0", Offset = "0x4F776D0", VA = "0x4F776D0")]
	internal static string[] EnglishEraNames()
	{
		return null;
	}

	[Token(Token = "0x6002CF9")]
	[Address(RVA = "0x4F77800", Offset = "0x4F77800", VA = "0x4F77800", Slot = "25")]
	internal override bool IsValidYear(int year, int era)
	{
		return default(bool);
	}
}
