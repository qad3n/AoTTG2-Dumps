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
		[Address(RVA = "0x3C54EE0", Offset = "0x3C54EE0", VA = "0x3C54EE0", Slot = "5")]
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
		[Address(RVA = "0x3C54F50", Offset = "0x3C54F50", VA = "0x3C54F50", Slot = "6")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x1700068B")]
	internal virtual int ID
	{
		[Token(Token = "0x6002C6C")]
		[Address(RVA = "0x3C54FE0", Offset = "0x3C54FE0", VA = "0x3C54FE0", Slot = "7")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700068C")]
	internal virtual int BaseCalendarID
	{
		[Token(Token = "0x6002C6D")]
		[Address(RVA = "0x3C54FF0", Offset = "0x3C54FF0", VA = "0x3C54FF0", Slot = "8")]
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
		[Address(RVA = "0x3C55010", Offset = "0x3C55010", VA = "0x3C55010")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700068E")]
	internal virtual int CurrentEraValue
	{
		[Token(Token = "0x6002C73")]
		[Address(RVA = "0x3C55110", Offset = "0x3C55110", VA = "0x3C55110", Slot = "10")]
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
		[Address(RVA = "0x3C55500", Offset = "0x3C55500", VA = "0x3C55500", Slot = "28")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002C86")]
		[Address(RVA = "0x3C55510", Offset = "0x3C55510", VA = "0x3C55510", Slot = "29")]
		set
		{
		}
	}

	[Token(Token = "0x6002C6B")]
	[Address(RVA = "0x3C54FC0", Offset = "0x3C54FC0", VA = "0x3C54FC0")]
	protected Calendar()
	{
	}

	[Token(Token = "0x6002C6F")]
	[Address(RVA = "0x3C55020", Offset = "0x3C55020", VA = "0x3C55020", Slot = "9")]
	[ComVisible(false)]
	public virtual object Clone()
	{
		return null;
	}

	[Token(Token = "0x6002C70")]
	[Address(RVA = "0x3C44010", Offset = "0x3C44010", VA = "0x3C44010")]
	[ComVisible(false)]
	public static Calendar ReadOnly(Calendar calendar)
	{
		return null;
	}

	[Token(Token = "0x6002C71")]
	[Address(RVA = "0x3C55090", Offset = "0x3C55090", VA = "0x3C55090")]
	internal void VerifyWritable()
	{
	}

	[Token(Token = "0x6002C72")]
	[Address(RVA = "0x3C55100", Offset = "0x3C55100", VA = "0x3C55100")]
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
	[Address(RVA = "0x3C55230", Offset = "0x3C55230", VA = "0x3C55230", Slot = "20")]
	public virtual bool IsLeapYear(int year)
	{
		return default(bool);
	}

	[Token(Token = "0x6002C7E")]
	public abstract bool IsLeapYear(int year, int era);

	[Token(Token = "0x6002C7F")]
	[Address(RVA = "0x3C55250", Offset = "0x3C55250", VA = "0x3C55250", Slot = "22")]
	public virtual DateTime ToDateTime(int year, int month, int day, int hour, int minute, int second, int millisecond)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6002C80")]
	public abstract DateTime ToDateTime(int year, int month, int day, int hour, int minute, int second, int millisecond, int era);

	[Token(Token = "0x6002C81")]
	[Address(RVA = "0x3C55280", Offset = "0x3C55280", VA = "0x3C55280", Slot = "24")]
	internal virtual bool TryToDateTime(int year, int month, int day, int hour, int minute, int second, int millisecond, int era, out DateTime result)
	{
		return default(bool);
	}

	[Token(Token = "0x6002C82")]
	[Address(RVA = "0x3C553D0", Offset = "0x3C553D0", VA = "0x3C553D0", Slot = "25")]
	internal virtual bool IsValidYear(int year, int era)
	{
		return default(bool);
	}

	[Token(Token = "0x6002C83")]
	[Address(RVA = "0x3C55440", Offset = "0x3C55440", VA = "0x3C55440", Slot = "26")]
	internal virtual bool IsValidMonth(int year, int month, int era)
	{
		return default(bool);
	}

	[Token(Token = "0x6002C84")]
	[Address(RVA = "0x3C554A0", Offset = "0x3C554A0", VA = "0x3C554A0", Slot = "27")]
	internal virtual bool IsValidDay(int year, int month, int day, int era)
	{
		return default(bool);
	}

	[Token(Token = "0x6002C87")]
	[Address(RVA = "0x3C55580", Offset = "0x3C55580", VA = "0x3C55580", Slot = "30")]
	public virtual int ToFourDigitYear(int year)
	{
		return default(int);
	}

	[Token(Token = "0x6002C88")]
	[Address(RVA = "0x3C55670", Offset = "0x3C55670", VA = "0x3C55670")]
	internal static long TimeToTicks(int hour, int minute, int second, int millisecond)
	{
		return default(long);
	}

	[Token(Token = "0x6002C89")]
	[Address(RVA = "0x3C55800", Offset = "0x3C55800", VA = "0x3C55800")]
	internal static int GetSystemTwoDigitYearSetting(int CalID, int defaultYearValue)
	{
		return default(int);
	}
}
