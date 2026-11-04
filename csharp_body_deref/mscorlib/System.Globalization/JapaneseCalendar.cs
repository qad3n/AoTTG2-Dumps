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
[Token(Token = "0x2000593")]
[ComVisible(true)]
public class JapaneseCalendar : Calendar
{
	[Token(Token = "0x4001742")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static readonly DateTime calendarMinValue;

	[Token(Token = "0x4001743")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	internal static System.Globalization.EraInfo[] japaneseEraInfo;

	[Token(Token = "0x4001744")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal static Calendar s_defaultInstance;

	[Token(Token = "0x4001745")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	internal System.Globalization.GregorianCalendarHelper helper;

	[Token(Token = "0x1700062B")]
	[ComVisible(false)]
	public override DateTime MinSupportedDateTime
	{
		[Token(Token = "0x60029F1")]
		[Address(RVA = "0x1AA9B90", Offset = "0x1AA8190", VA = "0x181AA9B90", Slot = "5")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x1700062C")]
	[ComVisible(false)]
	public override DateTime MaxSupportedDateTime
	{
		[Token(Token = "0x60029F2")]
		[Address(RVA = "0x1AA9B40", Offset = "0x1AA8140", VA = "0x181AA9B40", Slot = "6")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x1700062D")]
	internal override int ID
	{
		[Token(Token = "0x60029F7")]
		[Address(RVA = "0x565FB0", Offset = "0x5645B0", VA = "0x180565FB0", Slot = "7")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700062E")]
	public override int[] Eras
	{
		[Token(Token = "0x6002A03")]
		[Address(RVA = "0x1AA9B20", Offset = "0x1AA8120", VA = "0x181AA9B20", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700062F")]
	public override int TwoDigitYearMax
	{
		[Token(Token = "0x6002A07")]
		[Address(RVA = "0x1AA9BE0", Offset = "0x1AA81E0", VA = "0x181AA9BE0", Slot = "28")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002A08")]
		[Address(RVA = "0x1AA9C50", Offset = "0x1AA8250", VA = "0x181AA9C50", Slot = "29")]
		set
		{
		}
	}

	[Token(Token = "0x60029F3")]
	[Address(RVA = "0x1AA9060", Offset = "0x1AA7660", VA = "0x181AA9060")]
	internal static System.Globalization.EraInfo[] GetEraInfo()
	{
		return null;
	}

	[Token(Token = "0x60029F4")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0")]
	private static System.Globalization.EraInfo[] GetErasFromRegistry()
	{
		return null;
	}

	[Token(Token = "0x60029F5")]
	[Address(RVA = "0x1AA8F70", Offset = "0x1AA7570", VA = "0x181AA8F70")]
	internal static Calendar GetDefaultInstance()
	{
		return null;
	}

	[Token(Token = "0x60029F6")]
	[Address(RVA = "0x1AA99B0", Offset = "0x1AA7FB0", VA = "0x181AA99B0")]
	public JapaneseCalendar()
	{
	}

	[Token(Token = "0x60029F8")]
	[Address(RVA = "0x1AA8F20", Offset = "0x1AA7520", VA = "0x181AA8F20", Slot = "13")]
	public override int GetDaysInMonth(int year, int month, int era)
	{
		return default(int);
	}

	[Token(Token = "0x60029F9")]
	[Address(RVA = "0x1AA8F50", Offset = "0x1AA7550", VA = "0x181AA8F50", Slot = "14")]
	public override int GetDaysInYear(int year, int era)
	{
		return default(int);
	}

	[Token(Token = "0x60029FA")]
	[Address(RVA = "0x1AA8E80", Offset = "0x1AA7480", VA = "0x181AA8E80", Slot = "11")]
	public override int GetDayOfMonth(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x60029FB")]
	[Address(RVA = "0x1AA8F00", Offset = "0x1AA7500", VA = "0x181AA8F00", Slot = "12")]
	public override DayOfWeek GetDayOfWeek(DateTime time)
	{
		return default(DayOfWeek);
	}

	[Token(Token = "0x60029FC")]
	[Address(RVA = "0x1AA96E0", Offset = "0x1AA7CE0", VA = "0x181AA96E0", Slot = "18")]
	public override int GetMonthsInYear(int year, int era)
	{
		return default(int);
	}

	[Token(Token = "0x60029FD")]
	[Address(RVA = "0x1AA9640", Offset = "0x1AA7C40", VA = "0x181AA9640", Slot = "15")]
	public override int GetEra(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x60029FE")]
	[Address(RVA = "0x1AA9660", Offset = "0x1AA7C60", VA = "0x181AA9660", Slot = "17")]
	public override int GetMonth(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x60029FF")]
	[Address(RVA = "0x1AA9710", Offset = "0x1AA7D10", VA = "0x181AA9710", Slot = "19")]
	public override int GetYear(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002A00")]
	[Address(RVA = "0x1AA9730", Offset = "0x1AA7D30", VA = "0x181AA9730", Slot = "21")]
	public override bool IsLeapYear(int year, int era)
	{
		return default(bool);
	}

	[Token(Token = "0x6002A01")]
	[Address(RVA = "0x1AA9780", Offset = "0x1AA7D80", VA = "0x181AA9780", Slot = "23")]
	public override DateTime ToDateTime(int year, int month, int day, int hour, int minute, int second, int millisecond, int era)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6002A02")]
	[Address(RVA = "0x1AA97B0", Offset = "0x1AA7DB0", VA = "0x181AA97B0", Slot = "30")]
	public override int ToFourDigitYear(int year)
	{
		return default(int);
	}

	[Token(Token = "0x6002A04")]
	[Address(RVA = "0x1AA8DA0", Offset = "0x1AA73A0", VA = "0x181AA8DA0")]
	internal static string[] EraNames()
	{
		return null;
	}

	[Token(Token = "0x6002A05")]
	[Address(RVA = "0x1AA8CC0", Offset = "0x1AA72C0", VA = "0x181AA8CC0")]
	internal static string[] EnglishEraNames()
	{
		return null;
	}

	[Token(Token = "0x6002A06")]
	[Address(RVA = "0x1AA9750", Offset = "0x1AA7D50", VA = "0x181AA9750", Slot = "25")]
	internal override bool IsValidYear(int year, int era)
	{
		return default(bool);
	}
}
