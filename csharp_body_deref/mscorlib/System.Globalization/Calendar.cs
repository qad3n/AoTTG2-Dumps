// ==================== AoTTG2 cross-reference ====================
// Type: System.Globalization.Calendar
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
[Token(Token = "0x2000567")]
[ComVisible(true)]
public abstract class Calendar : ICloneable
{
	[Token(Token = "0x400166F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal int m_currentEraValue;

	[Token(Token = "0x4001670")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
	[OptionalField(VersionAdded = 2)]
	private bool m_isReadOnly;

	[Token(Token = "0x4001671")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	internal int twoDigitYearMax;

	[Token(Token = "0x17000617")]
	[ComVisible(false)]
	public virtual DateTime MinSupportedDateTime
	{
		[Token(Token = "0x6002955")]
		[Address(RVA = "0x54297A0", Offset = "0x54287A0", VA = "0x54297A0", Slot = "5")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x17000618")]
	[ComVisible(false)]
	public virtual DateTime MaxSupportedDateTime
	{
		[Token(Token = "0x6002956")]
		[Address(RVA = "0x5429810", Offset = "0x5428810", VA = "0x5429810", Slot = "6")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x17000619")]
	internal virtual int ID
	{
		[Token(Token = "0x6002958")]
		[Address(RVA = "0x54298A0", Offset = "0x54288A0", VA = "0x54298A0", Slot = "7")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700061A")]
	internal virtual int BaseCalendarID
	{
		[Token(Token = "0x6002959")]
		[Address(RVA = "0x54298B0", Offset = "0x54288B0", VA = "0x54298B0", Slot = "8")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700061B")]
	[ComVisible(false)]
	public bool IsReadOnly
	{
		[Token(Token = "0x600295A")]
		[Address(RVA = "0x54298D0", Offset = "0x54288D0", VA = "0x54298D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700061C")]
	internal virtual int CurrentEraValue
	{
		[Token(Token = "0x600295F")]
		[Address(RVA = "0x5429AA0", Offset = "0x5428AA0", VA = "0x5429AA0", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700061D")]
	public abstract int[] Eras
	{
		[Token(Token = "0x6002965")]
		get;
	}

	[Token(Token = "0x1700061E")]
	public virtual int TwoDigitYearMax
	{
		[Token(Token = "0x6002971")]
		[Address(RVA = "0x5429E80", Offset = "0x5428E80", VA = "0x5429E80", Slot = "28")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002972")]
		[Address(RVA = "0x5429E90", Offset = "0x5428E90", VA = "0x5429E90", Slot = "29")]
		set
		{
		}
	}

	[Token(Token = "0x6002957")]
	[Address(RVA = "0x5429880", Offset = "0x5428880", VA = "0x5429880")]
	protected Calendar()
	{
	}

	[Token(Token = "0x600295B")]
	[Address(RVA = "0x54298E0", Offset = "0x54288E0", VA = "0x54298E0", Slot = "9")]
	[ComVisible(false)]
	public virtual object Clone()
	{
		return null;
	}

	[Token(Token = "0x600295C")]
	[Address(RVA = "0x5429950", Offset = "0x5428950", VA = "0x5429950")]
	[ComVisible(false)]
	public static Calendar ReadOnly(Calendar calendar)
	{
		return null;
	}

	[Token(Token = "0x600295D")]
	[Address(RVA = "0x5429A20", Offset = "0x5428A20", VA = "0x5429A20")]
	internal void VerifyWritable()
	{
	}

	[Token(Token = "0x600295E")]
	[Address(RVA = "0x5429A90", Offset = "0x5428A90", VA = "0x5429A90")]
	internal void SetReadOnlyState(bool readOnly)
	{
	}

	[Token(Token = "0x6002960")]
	public abstract int GetDayOfMonth(DateTime time);

	[Token(Token = "0x6002961")]
	public abstract DayOfWeek GetDayOfWeek(DateTime time);

	[Token(Token = "0x6002962")]
	public abstract int GetDaysInMonth(int year, int month, int era);

	[Token(Token = "0x6002963")]
	public abstract int GetDaysInYear(int year, int era);

	[Token(Token = "0x6002964")]
	public abstract int GetEra(DateTime time);

	[Token(Token = "0x6002966")]
	public abstract int GetMonth(DateTime time);

	[Token(Token = "0x6002967")]
	public abstract int GetMonthsInYear(int year, int era);

	[Token(Token = "0x6002968")]
	public abstract int GetYear(DateTime time);

	[Token(Token = "0x6002969")]
	[Address(RVA = "0x5429BC0", Offset = "0x5428BC0", VA = "0x5429BC0", Slot = "20")]
	public virtual bool IsLeapYear(int year)
	{
		return default(bool);
	}

	[Token(Token = "0x600296A")]
	public abstract bool IsLeapYear(int year, int era);

	[Token(Token = "0x600296B")]
	[Address(RVA = "0x5429BE0", Offset = "0x5428BE0", VA = "0x5429BE0", Slot = "22")]
	public virtual DateTime ToDateTime(int year, int month, int day, int hour, int minute, int second, int millisecond)
	{
		return default(DateTime);
	}

	[Token(Token = "0x600296C")]
	public abstract DateTime ToDateTime(int year, int month, int day, int hour, int minute, int second, int millisecond, int era);

	[Token(Token = "0x600296D")]
	[Address(RVA = "0x5429C10", Offset = "0x5428C10", VA = "0x5429C10", Slot = "24")]
	internal virtual bool TryToDateTime(int year, int month, int day, int hour, int minute, int second, int millisecond, int era, out DateTime result)
	{
		return default(bool);
	}

	[Token(Token = "0x600296E")]
	[Address(RVA = "0x5429D50", Offset = "0x5428D50", VA = "0x5429D50", Slot = "25")]
	internal virtual bool IsValidYear(int year, int era)
	{
		return default(bool);
	}

	[Token(Token = "0x600296F")]
	[Address(RVA = "0x5429DC0", Offset = "0x5428DC0", VA = "0x5429DC0", Slot = "26")]
	internal virtual bool IsValidMonth(int year, int month, int era)
	{
		return default(bool);
	}

	[Token(Token = "0x6002970")]
	[Address(RVA = "0x5429E20", Offset = "0x5428E20", VA = "0x5429E20", Slot = "27")]
	internal virtual bool IsValidDay(int year, int month, int day, int era)
	{
		return default(bool);
	}

	[Token(Token = "0x6002973")]
	[Address(RVA = "0x5429F00", Offset = "0x5428F00", VA = "0x5429F00", Slot = "30")]
	public virtual int ToFourDigitYear(int year)
	{
		return default(int);
	}

	[Token(Token = "0x6002974")]
	[Address(RVA = "0x5429FF0", Offset = "0x5428FF0", VA = "0x5429FF0")]
	internal static long TimeToTicks(int hour, int minute, int second, int millisecond)
	{
		return default(long);
	}

	[Token(Token = "0x6002975")]
	[Address(RVA = "0x542A180", Offset = "0x5429180", VA = "0x542A180")]
	internal static int GetSystemTwoDigitYearSetting(int CalID, int defaultYearValue)
	{
		return default(int);
	}
}
