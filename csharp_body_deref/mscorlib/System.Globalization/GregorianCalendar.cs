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
[Token(Token = "0x200058E")]
[ComVisible(true)]
public class GregorianCalendar : Calendar
{
	[Token(Token = "0x4001722")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	internal GregorianCalendarTypes m_type;

	[Token(Token = "0x4001723")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static readonly int[] DaysToMonth365;

	[Token(Token = "0x4001724")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	internal static readonly int[] DaysToMonth366;

	[Token(Token = "0x4001725")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static Calendar s_defaultInstance;

	[Token(Token = "0x1700061E")]
	[ComVisible(false)]
	public override DateTime MinSupportedDateTime
	{
		[Token(Token = "0x60029A4")]
		[Address(RVA = "0x1AA7150", Offset = "0x1AA5750", VA = "0x181AA7150", Slot = "5")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x1700061F")]
	[ComVisible(false)]
	public override DateTime MaxSupportedDateTime
	{
		[Token(Token = "0x60029A5")]
		[Address(RVA = "0x1AA7100", Offset = "0x1AA5700", VA = "0x181AA7100", Slot = "6")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x17000620")]
	internal override int ID
	{
		[Token(Token = "0x60029A9")]
		[Address(RVA = "0xA4C170", Offset = "0xA4A770", VA = "0x180A4C170", Slot = "7")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000621")]
	public override int[] Eras
	{
		[Token(Token = "0x60029B1")]
		[Address(RVA = "0x1AA70A0", Offset = "0x1AA56A0", VA = "0x181AA70A0", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000622")]
	public override int TwoDigitYearMax
	{
		[Token(Token = "0x60029B8")]
		[Address(RVA = "0x1AA71A0", Offset = "0x1AA57A0", VA = "0x181AA71A0", Slot = "28")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60029B9")]
		[Address(RVA = "0x1AA7210", Offset = "0x1AA5810", VA = "0x181AA7210", Slot = "29")]
		set
		{
		}
	}

	[Token(Token = "0x60029A3")]
	[Address(RVA = "0x1AA69F0", Offset = "0x1AA4FF0", VA = "0x181AA69F0")]
	[OnDeserialized]
	private void OnDeserialized(StreamingContext ctx)
	{
	}

	[Token(Token = "0x60029A6")]
	[Address(RVA = "0x1AA64C0", Offset = "0x1AA4AC0", VA = "0x181AA64C0")]
	internal static Calendar GetDefaultInstance()
	{
		return null;
	}

	[Token(Token = "0x60029A7")]
	[Address(RVA = "0x1AA6F20", Offset = "0x1AA5520", VA = "0x181AA6F20")]
	public GregorianCalendar()
	{
	}

	[Token(Token = "0x60029A8")]
	[Address(RVA = "0x1AA6F50", Offset = "0x1AA5550", VA = "0x181AA6F50")]
	public GregorianCalendar(GregorianCalendarTypes type)
	{
	}

	[Token(Token = "0x60029AA")]
	[Address(RVA = "0x1AA5D40", Offset = "0x1AA4340", VA = "0x181AA5D40", Slot = "31")]
	internal virtual int GetDatePart(long ticks, int part)
	{
		return default(int);
	}

	[Token(Token = "0x60029AB")]
	[Address(RVA = "0x1AA5B40", Offset = "0x1AA4140", VA = "0x181AA5B40")]
	internal static long GetAbsoluteDate(int year, int month, int day)
	{
		return default(long);
	}

	[Token(Token = "0x60029AC")]
	[Address(RVA = "0x1AA5F00", Offset = "0x1AA4500", VA = "0x181AA5F00", Slot = "11")]
	public override int GetDayOfMonth(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x60029AD")]
	[Address(RVA = "0x1AA5F70", Offset = "0x1AA4570", VA = "0x181AA5F70", Slot = "12")]
	public override DayOfWeek GetDayOfWeek(DateTime time)
	{
		return default(DayOfWeek);
	}

	[Token(Token = "0x60029AE")]
	[Address(RVA = "0x1AA5FF0", Offset = "0x1AA45F0", VA = "0x181AA5FF0", Slot = "13")]
	public override int GetDaysInMonth(int year, int month, int era)
	{
		return default(int);
	}

	[Token(Token = "0x60029AF")]
	[Address(RVA = "0x1AA62F0", Offset = "0x1AA48F0", VA = "0x181AA62F0", Slot = "14")]
	public override int GetDaysInYear(int year, int era)
	{
		return default(int);
	}

	[Token(Token = "0x60029B0")]
	[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "15")]
	public override int GetEra(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x60029B2")]
	[Address(RVA = "0x1AA65D0", Offset = "0x1AA4BD0", VA = "0x181AA65D0", Slot = "17")]
	public override int GetMonth(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x60029B3")]
	[Address(RVA = "0x1AA6640", Offset = "0x1AA4C40", VA = "0x181AA6640", Slot = "18")]
	public override int GetMonthsInYear(int year, int era)
	{
		return default(int);
	}

	[Token(Token = "0x60029B4")]
	[Address(RVA = "0x1AA67C0", Offset = "0x1AA4DC0", VA = "0x181AA67C0", Slot = "19")]
	public override int GetYear(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x60029B5")]
	[Address(RVA = "0x1AA6830", Offset = "0x1AA4E30", VA = "0x181AA6830", Slot = "21")]
	public override bool IsLeapYear(int year, int era)
	{
		return default(bool);
	}

	[Token(Token = "0x60029B6")]
	[Address(RVA = "0x1AA6AE0", Offset = "0x1AA50E0", VA = "0x181AA6AE0", Slot = "23")]
	public override DateTime ToDateTime(int year, int month, int day, int hour, int minute, int second, int millisecond, int era)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60029B7")]
	[Address(RVA = "0x1AA6D30", Offset = "0x1AA5330", VA = "0x181AA6D30", Slot = "24")]
	internal override bool TryToDateTime(int year, int month, int day, int hour, int minute, int second, int millisecond, int era, out DateTime result)
	{
		return default(bool);
	}

	[Token(Token = "0x60029BA")]
	[Address(RVA = "0x1AA6BC0", Offset = "0x1AA51C0", VA = "0x181AA6BC0", Slot = "30")]
	public override int ToFourDigitYear(int year)
	{
		return default(int);
	}
}
