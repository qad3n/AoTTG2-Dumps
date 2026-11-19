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
[Token(Token = "0x2000569")]
[ComVisible(true)]
public class GregorianCalendar : Calendar
{
	[Token(Token = "0x4001689")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	internal GregorianCalendarTypes m_type;

	[Token(Token = "0x400168A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static readonly int[] DaysToMonth365;

	[Token(Token = "0x400168B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	internal static readonly int[] DaysToMonth366;

	[Token(Token = "0x400168C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static Calendar s_defaultInstance;

	[Token(Token = "0x1700061F")]
	[ComVisible(false)]
	public override DateTime MinSupportedDateTime
	{
		[Token(Token = "0x6002983")]
		[Address(RVA = "0x542CB50", Offset = "0x542BB50", VA = "0x542CB50", Slot = "5")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x17000620")]
	[ComVisible(false)]
	public override DateTime MaxSupportedDateTime
	{
		[Token(Token = "0x6002984")]
		[Address(RVA = "0x542CBC0", Offset = "0x542BBC0", VA = "0x542CBC0", Slot = "6")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x17000621")]
	internal override int ID
	{
		[Token(Token = "0x6002988")]
		[Address(RVA = "0x542CE90", Offset = "0x542BE90", VA = "0x542CE90", Slot = "7")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000622")]
	public override int[] Eras
	{
		[Token(Token = "0x6002990")]
		[Address(RVA = "0x542D760", Offset = "0x542C760", VA = "0x542D760", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000623")]
	public override int TwoDigitYearMax
	{
		[Token(Token = "0x6002997")]
		[Address(RVA = "0x542DCC0", Offset = "0x542CCC0", VA = "0x542DCC0", Slot = "28")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002998")]
		[Address(RVA = "0x542DD30", Offset = "0x542CD30", VA = "0x542DD30", Slot = "29")]
		set
		{
		}
	}

	[Token(Token = "0x6002982")]
	[Address(RVA = "0x542CA80", Offset = "0x542BA80", VA = "0x542CA80")]
	[OnDeserialized]
	private void OnDeserialized(StreamingContext ctx)
	{
	}

	[Token(Token = "0x6002985")]
	[Address(RVA = "0x542CC30", Offset = "0x542BC30", VA = "0x542CC30")]
	internal static Calendar GetDefaultInstance()
	{
		return null;
	}

	[Token(Token = "0x6002986")]
	[Address(RVA = "0x542CD20", Offset = "0x542BD20", VA = "0x542CD20")]
	public GregorianCalendar()
	{
	}

	[Token(Token = "0x6002987")]
	[Address(RVA = "0x542CD50", Offset = "0x542BD50", VA = "0x542CD50")]
	public GregorianCalendar(GregorianCalendarTypes type)
	{
	}

	[Token(Token = "0x6002989")]
	[Address(RVA = "0x542CEA0", Offset = "0x542BEA0", VA = "0x542CEA0", Slot = "31")]
	internal virtual int GetDatePart(long ticks, int part)
	{
		return default(int);
	}

	[Token(Token = "0x600298A")]
	[Address(RVA = "0x542D090", Offset = "0x542C090", VA = "0x542D090")]
	internal static long GetAbsoluteDate(int year, int month, int day)
	{
		return default(long);
	}

	[Token(Token = "0x600298B")]
	[Address(RVA = "0x542D250", Offset = "0x542C250", VA = "0x542D250", Slot = "11")]
	public override int GetDayOfMonth(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x600298C")]
	[Address(RVA = "0x542D2C0", Offset = "0x542C2C0", VA = "0x542D2C0", Slot = "12")]
	public override DayOfWeek GetDayOfWeek(DateTime time)
	{
		return default(DayOfWeek);
	}

	[Token(Token = "0x600298D")]
	[Address(RVA = "0x542D360", Offset = "0x542C360", VA = "0x542D360", Slot = "13")]
	public override int GetDaysInMonth(int year, int month, int era)
	{
		return default(int);
	}

	[Token(Token = "0x600298E")]
	[Address(RVA = "0x542D5E0", Offset = "0x542C5E0", VA = "0x542D5E0", Slot = "14")]
	public override int GetDaysInYear(int year, int era)
	{
		return default(int);
	}

	[Token(Token = "0x600298F")]
	[Address(RVA = "0x542D750", Offset = "0x542C750", VA = "0x542D750", Slot = "15")]
	public override int GetEra(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002991")]
	[Address(RVA = "0x542D7B0", Offset = "0x542C7B0", VA = "0x542D7B0", Slot = "17")]
	public override int GetMonth(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002992")]
	[Address(RVA = "0x542D820", Offset = "0x542C820", VA = "0x542D820", Slot = "18")]
	public override int GetMonthsInYear(int year, int era)
	{
		return default(int);
	}

	[Token(Token = "0x6002993")]
	[Address(RVA = "0x542D960", Offset = "0x542C960", VA = "0x542D960", Slot = "19")]
	public override int GetYear(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002994")]
	[Address(RVA = "0x542D9D0", Offset = "0x542C9D0", VA = "0x542D9D0", Slot = "21")]
	public override bool IsLeapYear(int year, int era)
	{
		return default(bool);
	}

	[Token(Token = "0x6002995")]
	[Address(RVA = "0x542DB40", Offset = "0x542CB40", VA = "0x542DB40", Slot = "23")]
	public override DateTime ToDateTime(int year, int month, int day, int hour, int minute, int second, int millisecond, int era)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6002996")]
	[Address(RVA = "0x542DBE0", Offset = "0x542CBE0", VA = "0x542DBE0", Slot = "24")]
	internal override bool TryToDateTime(int year, int month, int day, int hour, int minute, int second, int millisecond, int era, out DateTime result)
	{
		return default(bool);
	}

	[Token(Token = "0x6002999")]
	[Address(RVA = "0x542DE70", Offset = "0x542CE70", VA = "0x542DE70", Slot = "30")]
	public override int ToFourDigitYear(int year)
	{
		return default(int);
	}
}
