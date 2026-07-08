using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Globalization;

[Serializable]
[Token(Token = "0x20005BA")]
[ComVisible(true)]
public abstract class Calendar : ICloneable
{
	[Token(Token = "0x40018C0")]
	internal const long TicksPerMillisecond = 10000L;

	[Token(Token = "0x40018C1")]
	internal const long TicksPerSecond = 10000000L;

	[Token(Token = "0x40018C2")]
	internal const long TicksPerMinute = 600000000L;

	[Token(Token = "0x40018C3")]
	internal const long TicksPerHour = 36000000000L;

	[Token(Token = "0x40018C4")]
	internal const long TicksPerDay = 864000000000L;

	[Token(Token = "0x40018C5")]
	internal const int MillisPerSecond = 1000;

	[Token(Token = "0x40018C6")]
	internal const int MillisPerMinute = 60000;

	[Token(Token = "0x40018C7")]
	internal const int MillisPerHour = 3600000;

	[Token(Token = "0x40018C8")]
	internal const int MillisPerDay = 86400000;

	[Token(Token = "0x40018C9")]
	internal const int DaysPerYear = 365;

	[Token(Token = "0x40018CA")]
	internal const int DaysPer4Years = 1461;

	[Token(Token = "0x40018CB")]
	internal const int DaysPer100Years = 36524;

	[Token(Token = "0x40018CC")]
	internal const int DaysPer400Years = 146097;

	[Token(Token = "0x40018CD")]
	internal const int DaysTo10000 = 3652059;

	[Token(Token = "0x40018CE")]
	internal const long MaxMillis = 315537897600000L;

	[Token(Token = "0x40018CF")]
	internal const int CAL_GREGORIAN = 1;

	[Token(Token = "0x40018D0")]
	internal const int CAL_GREGORIAN_US = 2;

	[Token(Token = "0x40018D1")]
	internal const int CAL_JAPAN = 3;

	[Token(Token = "0x40018D2")]
	internal const int CAL_TAIWAN = 4;

	[Token(Token = "0x40018D3")]
	internal const int CAL_KOREA = 5;

	[Token(Token = "0x40018D4")]
	internal const int CAL_HIJRI = 6;

	[Token(Token = "0x40018D5")]
	internal const int CAL_THAI = 7;

	[Token(Token = "0x40018D6")]
	internal const int CAL_HEBREW = 8;

	[Token(Token = "0x40018D7")]
	internal const int CAL_GREGORIAN_ME_FRENCH = 9;

	[Token(Token = "0x40018D8")]
	internal const int CAL_GREGORIAN_ARABIC = 10;

	[Token(Token = "0x40018D9")]
	internal const int CAL_GREGORIAN_XLIT_ENGLISH = 11;

	[Token(Token = "0x40018DA")]
	internal const int CAL_GREGORIAN_XLIT_FRENCH = 12;

	[Token(Token = "0x40018DB")]
	internal const int CAL_JULIAN = 13;

	[Token(Token = "0x40018DC")]
	internal const int CAL_JAPANESELUNISOLAR = 14;

	[Token(Token = "0x40018DD")]
	internal const int CAL_CHINESELUNISOLAR = 15;

	[Token(Token = "0x40018DE")]
	internal const int CAL_SAKA = 16;

	[Token(Token = "0x40018DF")]
	internal const int CAL_LUNAR_ETO_CHN = 17;

	[Token(Token = "0x40018E0")]
	internal const int CAL_LUNAR_ETO_KOR = 18;

	[Token(Token = "0x40018E1")]
	internal const int CAL_LUNAR_ETO_ROKUYOU = 19;

	[Token(Token = "0x40018E2")]
	internal const int CAL_KOREANLUNISOLAR = 20;

	[Token(Token = "0x40018E3")]
	internal const int CAL_TAIWANLUNISOLAR = 21;

	[Token(Token = "0x40018E4")]
	internal const int CAL_PERSIAN = 22;

	[Token(Token = "0x40018E5")]
	internal const int CAL_UMALQURA = 23;

	[Token(Token = "0x40018E6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal int m_currentEraValue;

	[Token(Token = "0x40018E7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
	[OptionalField(VersionAdded = 2)]
	private bool m_isReadOnly;

	[Token(Token = "0x40018E8")]
	public const int CurrentEra = 0;

	[Token(Token = "0x40018E9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	internal int twoDigitYearMax;

	[Token(Token = "0x17000689")]
	[ComVisible(false)]
	public virtual DateTime MinSupportedDateTime
	{
		[Token(Token = "0x6002C69")]
		[Address(RVA = "0x4F6F3C0", Offset = "0x4F6F3C0", VA = "0x4F6F3C0", Slot = "5")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x1700068A")]
	[ComVisible(false)]
	public virtual DateTime MaxSupportedDateTime
	{
		[Token(Token = "0x6002C6A")]
		[Address(RVA = "0x4F6F430", Offset = "0x4F6F430", VA = "0x4F6F430", Slot = "6")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x1700068B")]
	internal virtual int ID
	{
		[Token(Token = "0x6002C6C")]
		[Address(RVA = "0x4F6F4C0", Offset = "0x4F6F4C0", VA = "0x4F6F4C0", Slot = "7")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700068C")]
	internal virtual int BaseCalendarID
	{
		[Token(Token = "0x6002C6D")]
		[Address(RVA = "0x4F6F4D0", Offset = "0x4F6F4D0", VA = "0x4F6F4D0", Slot = "8")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700068D")]
	[ComVisible(false)]
	public bool IsReadOnly
	{
		[Token(Token = "0x6002C6E")]
		[Address(RVA = "0x4F6F4F0", Offset = "0x4F6F4F0", VA = "0x4F6F4F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700068E")]
	internal virtual int CurrentEraValue
	{
		[Token(Token = "0x6002C73")]
		[Address(RVA = "0x4F6F5F0", Offset = "0x4F6F5F0", VA = "0x4F6F5F0", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700068F")]
	public abstract int[] Eras
	{
		[Token(Token = "0x6002C79")]
		get;
	}

	[Token(Token = "0x17000690")]
	public virtual int TwoDigitYearMax
	{
		[Token(Token = "0x6002C85")]
		[Address(RVA = "0x4F6F9E0", Offset = "0x4F6F9E0", VA = "0x4F6F9E0", Slot = "28")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002C86")]
		[Address(RVA = "0x4F6F9F0", Offset = "0x4F6F9F0", VA = "0x4F6F9F0", Slot = "29")]
		set
		{
		}
	}

	[Token(Token = "0x6002C6B")]
	[Address(RVA = "0x4F6F4A0", Offset = "0x4F6F4A0", VA = "0x4F6F4A0")]
	protected Calendar()
	{
	}

	[Token(Token = "0x6002C6F")]
	[Address(RVA = "0x4F6F500", Offset = "0x4F6F500", VA = "0x4F6F500", Slot = "9")]
	[ComVisible(false)]
	public virtual object Clone()
	{
		return null;
	}

	[Token(Token = "0x6002C70")]
	[Address(RVA = "0x4F5E4F0", Offset = "0x4F5E4F0", VA = "0x4F5E4F0")]
	[ComVisible(false)]
	public static Calendar ReadOnly(Calendar calendar)
	{
		return null;
	}

	[Token(Token = "0x6002C71")]
	[Address(RVA = "0x4F6F570", Offset = "0x4F6F570", VA = "0x4F6F570")]
	internal void VerifyWritable()
	{
	}

	[Token(Token = "0x6002C72")]
	[Address(RVA = "0x4F6F5E0", Offset = "0x4F6F5E0", VA = "0x4F6F5E0")]
	internal void SetReadOnlyState(bool readOnly)
	{
	}

	[Token(Token = "0x6002C74")]
	public abstract int GetDayOfMonth(DateTime time);

	[Token(Token = "0x6002C75")]
	public abstract DayOfWeek GetDayOfWeek(DateTime time);

	[Token(Token = "0x6002C76")]
	public abstract int GetDaysInMonth(int year, int month, int era);

	[Token(Token = "0x6002C77")]
	public abstract int GetDaysInYear(int year, int era);

	[Token(Token = "0x6002C78")]
	public abstract int GetEra(DateTime time);

	[Token(Token = "0x6002C7A")]
	public abstract int GetMonth(DateTime time);

	[Token(Token = "0x6002C7B")]
	public abstract int GetMonthsInYear(int year, int era);

	[Token(Token = "0x6002C7C")]
	public abstract int GetYear(DateTime time);

	[Token(Token = "0x6002C7D")]
	[Address(RVA = "0x4F6F710", Offset = "0x4F6F710", VA = "0x4F6F710", Slot = "20")]
	public virtual bool IsLeapYear(int year)
	{
		return default(bool);
	}

	[Token(Token = "0x6002C7E")]
	public abstract bool IsLeapYear(int year, int era);

	[Token(Token = "0x6002C7F")]
	[Address(RVA = "0x4F6F730", Offset = "0x4F6F730", VA = "0x4F6F730", Slot = "22")]
	public virtual DateTime ToDateTime(int year, int month, int day, int hour, int minute, int second, int millisecond)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6002C80")]
	public abstract DateTime ToDateTime(int year, int month, int day, int hour, int minute, int second, int millisecond, int era);

	[Token(Token = "0x6002C81")]
	[Address(RVA = "0x4F6F760", Offset = "0x4F6F760", VA = "0x4F6F760", Slot = "24")]
	internal virtual bool TryToDateTime(int year, int month, int day, int hour, int minute, int second, int millisecond, int era, out DateTime result)
	{
		return default(bool);
	}

	[Token(Token = "0x6002C82")]
	[Address(RVA = "0x4F6F8B0", Offset = "0x4F6F8B0", VA = "0x4F6F8B0", Slot = "25")]
	internal virtual bool IsValidYear(int year, int era)
	{
		return default(bool);
	}

	[Token(Token = "0x6002C83")]
	[Address(RVA = "0x4F6F920", Offset = "0x4F6F920", VA = "0x4F6F920", Slot = "26")]
	internal virtual bool IsValidMonth(int year, int month, int era)
	{
		return default(bool);
	}

	[Token(Token = "0x6002C84")]
	[Address(RVA = "0x4F6F980", Offset = "0x4F6F980", VA = "0x4F6F980", Slot = "27")]
	internal virtual bool IsValidDay(int year, int month, int day, int era)
	{
		return default(bool);
	}

	[Token(Token = "0x6002C87")]
	[Address(RVA = "0x4F6FA60", Offset = "0x4F6FA60", VA = "0x4F6FA60", Slot = "30")]
	public virtual int ToFourDigitYear(int year)
	{
		return default(int);
	}

	[Token(Token = "0x6002C88")]
	[Address(RVA = "0x4F6FB50", Offset = "0x4F6FB50", VA = "0x4F6FB50")]
	internal static long TimeToTicks(int hour, int minute, int second, int millisecond)
	{
		return default(long);
	}

	[Token(Token = "0x6002C89")]
	[Address(RVA = "0x4F6FCE0", Offset = "0x4F6FCE0", VA = "0x4F6FCE0")]
	internal static int GetSystemTwoDigitYearSetting(int CalID, int defaultYearValue)
	{
		return default(int);
	}
}
