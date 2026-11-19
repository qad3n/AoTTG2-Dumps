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
[Token(Token = "0x2000573")]
[ComVisible(true)]
public class ThaiBuddhistCalendar : Calendar
{
	[Token(Token = "0x40016E0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static System.Globalization.EraInfo[] thaiBuddhistEraInfo;

	[Token(Token = "0x40016E1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	internal System.Globalization.GregorianCalendarHelper helper;

	[Token(Token = "0x17000659")]
	[ComVisible(false)]
	public override DateTime MinSupportedDateTime
	{
		[Token(Token = "0x6002A51")]
		[Address(RVA = "0x54364A0", Offset = "0x54354A0", VA = "0x54364A0", Slot = "5")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x1700065A")]
	[ComVisible(false)]
	public override DateTime MaxSupportedDateTime
	{
		[Token(Token = "0x6002A52")]
		[Address(RVA = "0x5436510", Offset = "0x5435510", VA = "0x5436510", Slot = "6")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x1700065B")]
	internal override int ID
	{
		[Token(Token = "0x6002A54")]
		[Address(RVA = "0x5436630", Offset = "0x5435630", VA = "0x5436630", Slot = "7")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700065C")]
	public override int[] Eras
	{
		[Token(Token = "0x6002A5F")]
		[Address(RVA = "0x5436980", Offset = "0x5435980", VA = "0x5436980", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700065D")]
	public override int TwoDigitYearMax
	{
		[Token(Token = "0x6002A60")]
		[Address(RVA = "0x54369A0", Offset = "0x54359A0", VA = "0x54369A0", Slot = "28")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002A61")]
		[Address(RVA = "0x5436A10", Offset = "0x5435A10", VA = "0x5436A10", Slot = "29")]
		set
		{
		}
	}

	[Token(Token = "0x6002A53")]
	[Address(RVA = "0x5436580", Offset = "0x5435580", VA = "0x5436580")]
	public ThaiBuddhistCalendar()
	{
	}

	[Token(Token = "0x6002A55")]
	[Address(RVA = "0x5436640", Offset = "0x5435640", VA = "0x5436640", Slot = "13")]
	public override int GetDaysInMonth(int year, int month, int era)
	{
		return default(int);
	}

	[Token(Token = "0x6002A56")]
	[Address(RVA = "0x5436660", Offset = "0x5435660", VA = "0x5436660", Slot = "14")]
	public override int GetDaysInYear(int year, int era)
	{
		return default(int);
	}

	[Token(Token = "0x6002A57")]
	[Address(RVA = "0x54366C0", Offset = "0x54356C0", VA = "0x54366C0", Slot = "11")]
	public override int GetDayOfMonth(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002A58")]
	[Address(RVA = "0x5436740", Offset = "0x5435740", VA = "0x5436740", Slot = "12")]
	public override DayOfWeek GetDayOfWeek(DateTime time)
	{
		return default(DayOfWeek);
	}

	[Token(Token = "0x6002A59")]
	[Address(RVA = "0x5436810", Offset = "0x5435810", VA = "0x5436810", Slot = "18")]
	public override int GetMonthsInYear(int year, int era)
	{
		return default(int);
	}

	[Token(Token = "0x6002A5A")]
	[Address(RVA = "0x5436830", Offset = "0x5435830", VA = "0x5436830", Slot = "15")]
	public override int GetEra(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002A5B")]
	[Address(RVA = "0x5436850", Offset = "0x5435850", VA = "0x5436850", Slot = "17")]
	public override int GetMonth(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002A5C")]
	[Address(RVA = "0x54368D0", Offset = "0x54358D0", VA = "0x54368D0", Slot = "19")]
	public override int GetYear(DateTime time)
	{
		return default(int);
	}

	[Token(Token = "0x6002A5D")]
	[Address(RVA = "0x54368F0", Offset = "0x54358F0", VA = "0x54368F0", Slot = "21")]
	public override bool IsLeapYear(int year, int era)
	{
		return default(bool);
	}

	[Token(Token = "0x6002A5E")]
	[Address(RVA = "0x5436940", Offset = "0x5435940", VA = "0x5436940", Slot = "23")]
	public override DateTime ToDateTime(int year, int month, int day, int hour, int minute, int second, int millisecond, int era)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6002A62")]
	[Address(RVA = "0x5436B80", Offset = "0x5435B80", VA = "0x5436B80", Slot = "30")]
	public override int ToFourDigitYear(int year)
	{
		return default(int);
	}
}
