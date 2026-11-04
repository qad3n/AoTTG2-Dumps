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
[Token(Token = "0x2000598")]
[ComVisible(true)]
public class ThaiBuddhistCalendar : Calendar
{
	[Token(Token = "0x4001779")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static System.Globalization.EraInfo[] thaiBuddhistEraInfo;

	[Token(Token = "0x400177A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	internal System.Globalization.GregorianCalendarHelper helper;

	[Token(Token = "0x17000658")]
	[ComVisible(false)]
	public override DateTime MinSupportedDateTime
	{
		[Token(Token = "0x6002A72")]
		[Address(RVA = "0x1AAE230", Offset = "0x1AAC830", VA = "0x181AAE230", Slot = "5")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x17000659")]
	[ComVisible(false)]
	public override DateTime MaxSupportedDateTime
	{
		[Token(Token = "0x6002A73")]
		[Address(RVA = "0x1AAE1E0", Offset = "0x1AAC7E0", VA = "0x181AAE1E0", Slot = "6")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x1700065A")]
	internal override int ID
	{
		[Token(Token = "0x6002A75")]
		[Address(RVA = "0x106DD80", Offset = "0x106C380", VA = "0x18106DD80", Slot = "7")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700065B")]
	public override int[] Eras
	{
		[Token(Token = "0x6002A80")]
		[Address(RVA = "0x1AA9B20", Offset = "0x1AA8120", VA = "0x181AA9B20", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700065C")]
	public override int TwoDigitYearMax
	{
		[Token(Token = "0x6002A81")]
		[Address(RVA = "0x1AAE280", Offset = "0x1AAC880", VA = "0x181AAE280", Slot = "28")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002A82")]
		[Address(RVA = "0x1AAE2F0", Offset = "0x1AAC8F0", VA = "0x181AAE2F0", Slot = "29")]
		set
		{
		}
	}

	[Token(Token = "0x6002A74")]
	[Address(RVA = "0x1AAE120", Offset = "0x1AAC720", VA = "0x181AAE120")]
	public ThaiBuddhistCalendar()
	{
	}

	[Token(Token = "0x6002A76")]
	[Address(RVA = "0x1AA8F20", Offset = "0x1AA7520", VA = "0x181AA8F20", Slot = "13")]
	public override int GetDaysInMonth(int year, int month, int era)
	{
		return default(int);
	}

	[Token(Token = "0x6002A77")]
	[Address(RVA = "0x1AA8F50", Offset = "0x1AA7550", VA = "0x181AA8F50", Slot = "14")]
	public override int GetDaysInYear(int year, int era)
	{
		return default(int);
	}

	[Token(Token = "0x6002A78")]
	[Address(RVA = "0x1AA8E80", Offset = "0x1AA7480", VA = "0x181AA8E80", Slot = "11")]
	public override int GetDayOfMonth(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002A79")]
	[Address(RVA = "0x1AA8F00", Offset = "0x1AA7500", VA = "0x181AA8F00", Slot = "12")]
	public override DayOfWeek GetDayOfWeek(DateTime time)
	{
		return default(DayOfWeek);
	}

	[Token(Token = "0x6002A7A")]
	[Address(RVA = "0x1AA96E0", Offset = "0x1AA7CE0", VA = "0x181AA96E0", Slot = "18")]
	public override int GetMonthsInYear(int year, int era)
	{
		return default(int);
	}

	[Token(Token = "0x6002A7B")]
	[Address(RVA = "0x1AA9640", Offset = "0x1AA7C40", VA = "0x181AA9640", Slot = "15")]
	public override int GetEra(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002A7C")]
	[Address(RVA = "0x1AA9660", Offset = "0x1AA7C60", VA = "0x181AA9660", Slot = "17")]
	public override int GetMonth(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002A7D")]
	[Address(RVA = "0x1AA9710", Offset = "0x1AA7D10", VA = "0x181AA9710", Slot = "19")]
	public override int GetYear(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002A7E")]
	[Address(RVA = "0x1AA9730", Offset = "0x1AA7D30", VA = "0x181AA9730", Slot = "21")]
	public override bool IsLeapYear(int year, int era)
	{
		return default(bool);
	}

	[Token(Token = "0x6002A7F")]
	[Address(RVA = "0x1AA9780", Offset = "0x1AA7D80", VA = "0x181AA9780", Slot = "23")]
	public override DateTime ToDateTime(int year, int month, int day, int hour, int minute, int second, int millisecond, int era)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6002A83")]
	[Address(RVA = "0x1AADEF0", Offset = "0x1AAC4F0", VA = "0x181AADEF0", Slot = "30")]
	public override int ToFourDigitYear(int year)
	{
		return default(int);
	}
}
