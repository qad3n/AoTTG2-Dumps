using System.Globalization;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[StructLayout((LayoutKind)3)]
[Token(Token = "0x20000A2")]
public readonly struct DateTime : IComparable, IFormattable, IConvertible, IComparable<DateTime>, IEquatable<DateTime>, ISerializable, System.ISpanFormattable
{
	[Token(Token = "0x4000224")]
	private const long TicksPerMillisecond = 10000L;

	[Token(Token = "0x4000225")]
	private const long TicksPerSecond = 10000000L;

	[Token(Token = "0x4000226")]
	private const long TicksPerMinute = 600000000L;

	[Token(Token = "0x4000227")]
	private const long TicksPerHour = 36000000000L;

	[Token(Token = "0x4000228")]
	private const long TicksPerDay = 864000000000L;

	[Token(Token = "0x4000229")]
	private const int MillisPerSecond = 1000;

	[Token(Token = "0x400022A")]
	private const int MillisPerMinute = 60000;

	[Token(Token = "0x400022B")]
	private const int MillisPerHour = 3600000;

	[Token(Token = "0x400022C")]
	private const int MillisPerDay = 86400000;

	[Token(Token = "0x400022D")]
	private const int DaysPerYear = 365;

	[Token(Token = "0x400022E")]
	private const int DaysPer4Years = 1461;

	[Token(Token = "0x400022F")]
	private const int DaysPer100Years = 36524;

	[Token(Token = "0x4000230")]
	private const int DaysPer400Years = 146097;

	[Token(Token = "0x4000231")]
	private const int DaysTo1601 = 584388;

	[Token(Token = "0x4000232")]
	private const int DaysTo1899 = 693593;

	[Token(Token = "0x4000233")]
	internal const int DaysTo1970 = 719162;

	[Token(Token = "0x4000234")]
	private const int DaysTo10000 = 3652059;

	[Token(Token = "0x4000235")]
	internal const long MinTicks = 0L;

	[Token(Token = "0x4000236")]
	internal const long MaxTicks = 3155378975999999999L;

	[Token(Token = "0x4000237")]
	private const long MaxMillis = 315537897600000L;

	[Token(Token = "0x4000238")]
	internal const long UnixEpochTicks = 621355968000000000L;

	[Token(Token = "0x4000239")]
	private const long FileTimeOffset = 504911232000000000L;

	[Token(Token = "0x400023A")]
	private const long DoubleDateOffset = 599264352000000000L;

	[Token(Token = "0x400023B")]
	private const long OADateMinAsTicks = 31241376000000000L;

	[Token(Token = "0x400023C")]
	private const double OADateMinAsDouble = -657435.0;

	[Token(Token = "0x400023D")]
	private const double OADateMaxAsDouble = 2958466.0;

	[Token(Token = "0x400023E")]
	private const int DatePartYear = 0;

	[Token(Token = "0x400023F")]
	private const int DatePartDayOfYear = 1;

	[Token(Token = "0x4000240")]
	private const int DatePartMonth = 2;

	[Token(Token = "0x4000241")]
	private const int DatePartDay = 3;

	[Token(Token = "0x4000242")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly int[] s_daysToMonth365;

	[Token(Token = "0x4000243")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly int[] s_daysToMonth366;

	[Token(Token = "0x4000244")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public static readonly DateTime MinValue;

	[Token(Token = "0x4000245")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public static readonly DateTime MaxValue;

	[Token(Token = "0x4000246")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public static readonly DateTime UnixEpoch;

	[Token(Token = "0x4000247")]
	private const ulong TicksMask = 4611686018427387903uL;

	[Token(Token = "0x4000248")]
	private const ulong FlagsMask = 13835058055282163712uL;

	[Token(Token = "0x4000249")]
	private const ulong LocalMask = 9223372036854775808uL;

	[Token(Token = "0x400024A")]
	private const long TicksCeiling = 4611686018427387904L;

	[Token(Token = "0x400024B")]
	private const ulong KindUnspecified = 0uL;

	[Token(Token = "0x400024C")]
	private const ulong KindUtc = 4611686018427387904uL;

	[Token(Token = "0x400024D")]
	private const ulong KindLocal = 9223372036854775808uL;

	[Token(Token = "0x400024E")]
	private const ulong KindLocalAmbiguousDst = 13835058055282163712uL;

	[Token(Token = "0x400024F")]
	private const int KindShift = 62;

	[Token(Token = "0x4000250")]
	private const string TicksField = "ticks";

	[Token(Token = "0x4000251")]
	private const string DateDataField = "dateData";

	[Token(Token = "0x4000252")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly ulong _dateData;

	[Token(Token = "0x17000067")]
	internal long InternalTicks
	{
		[Token(Token = "0x60005DA")]
		[Address(RVA = "0x4FAB0B0", Offset = "0x4FAB0B0", VA = "0x4FAB0B0")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x17000068")]
	private ulong InternalKind
	{
		[Token(Token = "0x60005DB")]
		[Address(RVA = "0x4FAB0C0", Offset = "0x4FAB0C0", VA = "0x4FAB0C0")]
		get
		{
			return default(ulong);
		}
	}

	[Token(Token = "0x17000069")]
	public DateTime Date
	{
		[Token(Token = "0x60005F3")]
		[Address(RVA = "0x4FAC5D0", Offset = "0x4FAC5D0", VA = "0x4FAC5D0")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x1700006A")]
	public int Day
	{
		[Token(Token = "0x60005F6")]
		[Address(RVA = "0x4FAC820", Offset = "0x4FAC820", VA = "0x4FAC820")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700006B")]
	public DayOfWeek DayOfWeek
	{
		[Token(Token = "0x60005F7")]
		[Address(RVA = "0x4FAC890", Offset = "0x4FAC890", VA = "0x4FAC890")]
		get
		{
			return default(DayOfWeek);
		}
	}

	[Token(Token = "0x1700006C")]
	public int Hour
	{
		[Token(Token = "0x60005F9")]
		[Address(RVA = "0x4FAC960", Offset = "0x4FAC960", VA = "0x4FAC960")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700006D")]
	public DateTimeKind Kind
	{
		[Token(Token = "0x60005FB")]
		[Address(RVA = "0x4FACA20", Offset = "0x4FACA20", VA = "0x4FACA20")]
		get
		{
			return default(DateTimeKind);
		}
	}

	[Token(Token = "0x1700006E")]
	public int Millisecond
	{
		[Token(Token = "0x60005FC")]
		[Address(RVA = "0x4FACAB0", Offset = "0x4FACAB0", VA = "0x4FACAB0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700006F")]
	public int Minute
	{
		[Token(Token = "0x60005FD")]
		[Address(RVA = "0x4FACB30", Offset = "0x4FACB30", VA = "0x4FACB30")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000070")]
	public int Month
	{
		[Token(Token = "0x60005FE")]
		[Address(RVA = "0x4FACBB0", Offset = "0x4FACBB0", VA = "0x4FACBB0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000071")]
	public static DateTime Now
	{
		[Token(Token = "0x60005FF")]
		[Address(RVA = "0x4FACC20", Offset = "0x4FACC20", VA = "0x4FACC20")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x17000072")]
	public int Second
	{
		[Token(Token = "0x6000600")]
		[Address(RVA = "0x4FACE50", Offset = "0x4FACE50", VA = "0x4FACE50")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000073")]
	public long Ticks
	{
		[Token(Token = "0x6000601")]
		[Address(RVA = "0x4FAAD80", Offset = "0x4FAAD80", VA = "0x4FAAD80")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x17000074")]
	public TimeSpan TimeOfDay
	{
		[Token(Token = "0x6000602")]
		[Address(RVA = "0x4FACED0", Offset = "0x4FACED0", VA = "0x4FACED0")]
		get
		{
			return default(TimeSpan);
		}
	}

	[Token(Token = "0x17000075")]
	public static DateTime Today
	{
		[Token(Token = "0x6000603")]
		[Address(RVA = "0x4FACF40", Offset = "0x4FACF40", VA = "0x4FACF40")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x17000076")]
	public int Year
	{
		[Token(Token = "0x6000604")]
		[Address(RVA = "0x4FAD050", Offset = "0x4FAD050", VA = "0x4FAD050")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000077")]
	public static DateTime UtcNow
	{
		[Token(Token = "0x6000630")]
		[Address(RVA = "0x4FACDF0", Offset = "0x4FACDF0", VA = "0x4FACDF0")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x60005D0")]
	[Address(RVA = "0x4FAA360", Offset = "0x4FAA360", VA = "0x4FAA360")]
	public DateTime(long ticks)
	{
	}

	[Token(Token = "0x60005D1")]
	[Address(RVA = "0x4FAA3E0", Offset = "0x4FAA3E0", VA = "0x4FAA3E0")]
	private DateTime(ulong dateData)
	{
	}

	[Token(Token = "0x60005D2")]
	[Address(RVA = "0x4FAA3F0", Offset = "0x4FAA3F0", VA = "0x4FAA3F0")]
	public DateTime(long ticks, DateTimeKind kind)
	{
	}

	[Token(Token = "0x60005D3")]
	[Address(RVA = "0x4FAA4C0", Offset = "0x4FAA4C0", VA = "0x4FAA4C0")]
	internal DateTime(long ticks, DateTimeKind kind, bool isAmbiguousDst)
	{
	}

	[Token(Token = "0x60005D4")]
	[Address(RVA = "0x4FAA550", Offset = "0x4FAA550", VA = "0x4FAA550")]
	public DateTime(int year, int month, int day)
	{
	}

	[Token(Token = "0x60005D5")]
	[Address(RVA = "0x4FAA740", Offset = "0x4FAA740", VA = "0x4FAA740")]
	public DateTime(int year, int month, int day, int hour, int minute, int second)
	{
	}

	[Token(Token = "0x60005D6")]
	[Address(RVA = "0x4FAA880", Offset = "0x4FAA880", VA = "0x4FAA880")]
	public DateTime(int year, int month, int day, int hour, int minute, int second, DateTimeKind kind)
	{
	}

	[Token(Token = "0x60005D7")]
	[Address(RVA = "0x4FAA980", Offset = "0x4FAA980", VA = "0x4FAA980")]
	public DateTime(int year, int month, int day, int hour, int minute, int second, int millisecond)
	{
	}

	[Token(Token = "0x60005D8")]
	[Address(RVA = "0x4FAAB30", Offset = "0x4FAAB30", VA = "0x4FAAB30")]
	public DateTime(int year, int month, int day, int hour, int minute, int second, int millisecond, Calendar calendar)
	{
	}

	[Token(Token = "0x60005D9")]
	[Address(RVA = "0x4FAADF0", Offset = "0x4FAADF0", VA = "0x4FAADF0")]
	private DateTime(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60005DC")]
	[Address(RVA = "0x4FAB0D0", Offset = "0x4FAB0D0", VA = "0x4FAB0D0")]
	public DateTime Add(TimeSpan value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60005DD")]
	[Address(RVA = "0x4FAB220", Offset = "0x4FAB220", VA = "0x4FAB220")]
	private DateTime Add(double value, int scale)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60005DE")]
	[Address(RVA = "0x4FAB320", Offset = "0x4FAB320", VA = "0x4FAB320")]
	public DateTime AddDays(double value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60005DF")]
	[Address(RVA = "0x4FAB390", Offset = "0x4FAB390", VA = "0x4FAB390")]
	public DateTime AddMilliseconds(double value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60005E0")]
	[Address(RVA = "0x4FAB400", Offset = "0x4FAB400", VA = "0x4FAB400")]
	public DateTime AddMinutes(double value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60005E1")]
	[Address(RVA = "0x4FAB470", Offset = "0x4FAB470", VA = "0x4FAB470")]
	public DateTime AddMonths(int months)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60005E2")]
	[Address(RVA = "0x4FAB9C0", Offset = "0x4FAB9C0", VA = "0x4FAB9C0")]
	public DateTime AddSeconds(double value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60005E3")]
	[Address(RVA = "0x4FAB120", Offset = "0x4FAB120", VA = "0x4FAB120")]
	public DateTime AddTicks(long value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60005E4")]
	[Address(RVA = "0x4FABA30", Offset = "0x4FABA30", VA = "0x4FABA30")]
	public DateTime AddYears(int value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60005E5")]
	[Address(RVA = "0x4FABAF0", Offset = "0x4FABAF0", VA = "0x4FABAF0")]
	public static int Compare(DateTime t1, DateTime t2)
	{
		return default(int);
	}

	[Token(Token = "0x60005E6")]
	[Address(RVA = "0x4FABB60", Offset = "0x4FABB60", VA = "0x4FABB60", Slot = "4")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x60005E7")]
	[Address(RVA = "0x4FABC90", Offset = "0x4FABC90", VA = "0x4FABC90", Slot = "23")]
	public int CompareTo(DateTime value)
	{
		return default(int);
	}

	[Token(Token = "0x60005E8")]
	[Address(RVA = "0x4FAA5B0", Offset = "0x4FAA5B0", VA = "0x4FAA5B0")]
	private static long DateToTicks(int year, int month, int day)
	{
		return default(long);
	}

	[Token(Token = "0x60005E9")]
	[Address(RVA = "0x4FAA7D0", Offset = "0x4FAA7D0", VA = "0x4FAA7D0")]
	private static long TimeToTicks(int hour, int minute, int second)
	{
		return default(long);
	}

	[Token(Token = "0x60005EA")]
	[Address(RVA = "0x4FAB8B0", Offset = "0x4FAB8B0", VA = "0x4FAB8B0")]
	public static int DaysInMonth(int year, int month)
	{
		return default(int);
	}

	[Token(Token = "0x60005EB")]
	[Address(RVA = "0x4FABDF0", Offset = "0x4FABDF0", VA = "0x4FABDF0", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60005EC")]
	[Address(RVA = "0x4FABE90", Offset = "0x4FABE90", VA = "0x4FABE90", Slot = "24")]
	public bool Equals(DateTime value)
	{
		return default(bool);
	}

	[Token(Token = "0x60005ED")]
	[Address(RVA = "0x4FABEF0", Offset = "0x4FABEF0", VA = "0x4FABEF0")]
	public static DateTime FromBinary(long dateData)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60005EE")]
	[Address(RVA = "0x4FAC1D0", Offset = "0x4FAC1D0", VA = "0x4FAC1D0")]
	internal static DateTime FromBinaryRaw(long dateData)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60005EF")]
	[Address(RVA = "0x4FAC260", Offset = "0x4FAC260", VA = "0x4FAC260")]
	public static DateTime FromFileTime(long fileTime)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60005F0")]
	[Address(RVA = "0x4FAC370", Offset = "0x4FAC370", VA = "0x4FAC370")]
	public static DateTime FromFileTimeUtc(long fileTime)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60005F1")]
	[Address(RVA = "0x4FAC470", Offset = "0x4FAC470", VA = "0x4FAC470", Slot = "25")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60005F2")]
	[Address(RVA = "0x4FAC560", Offset = "0x4FAC560", VA = "0x4FAC560")]
	public static DateTime SpecifyKind(DateTime value, DateTimeKind kind)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60005F4")]
	[Address(RVA = "0x4FAC650", Offset = "0x4FAC650", VA = "0x4FAC650")]
	private int GetDatePart(int part)
	{
		return default(int);
	}

	[Token(Token = "0x60005F5")]
	[Address(RVA = "0x4FAB6C0", Offset = "0x4FAB6C0", VA = "0x4FAB6C0")]
	internal void GetDatePart(out int year, out int month, out int day)
	{
	}

	[Token(Token = "0x60005F8")]
	[Address(RVA = "0x4FAC910", Offset = "0x4FAC910", VA = "0x4FAC910", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60005FA")]
	[Address(RVA = "0x4FAC9D0", Offset = "0x4FAC9D0", VA = "0x4FAC9D0")]
	internal bool IsAmbiguousDaylightSavingTime()
	{
		return default(bool);
	}

	[Token(Token = "0x6000605")]
	[Address(RVA = "0x4FABD40", Offset = "0x4FABD40", VA = "0x4FABD40")]
	public static bool IsLeapYear(int year)
	{
		return default(bool);
	}

	[Token(Token = "0x6000606")]
	[Address(RVA = "0x4FAD1E0", Offset = "0x4FAD1E0", VA = "0x4FAD1E0")]
	public static DateTime Parse(string s, IFormatProvider provider)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000607")]
	[Address(RVA = "0x4FAD3F0", Offset = "0x4FAD3F0", VA = "0x4FAD3F0")]
	public static DateTime Parse(string s, IFormatProvider provider, DateTimeStyles styles)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000608")]
	[Address(RVA = "0x4FAD520", Offset = "0x4FAD520", VA = "0x4FAD520")]
	public static DateTime ParseExact(string s, string format, IFormatProvider provider, DateTimeStyles style)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000609")]
	[Address(RVA = "0x4FAD7E0", Offset = "0x4FAD7E0", VA = "0x4FAD7E0")]
	public static DateTime ParseExact(string s, string[] formats, IFormatProvider provider, DateTimeStyles style)
	{
		return default(DateTime);
	}

	[Token(Token = "0x600060A")]
	[Address(RVA = "0x4FADA30", Offset = "0x4FADA30", VA = "0x4FADA30")]
	public TimeSpan Subtract(DateTime value)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x600060B")]
	[Address(RVA = "0x4FAC400", Offset = "0x4FAC400", VA = "0x4FAC400")]
	public DateTime ToLocalTime()
	{
		return default(DateTime);
	}

	[Token(Token = "0x600060C")]
	[Address(RVA = "0x4FADA90", Offset = "0x4FADA90", VA = "0x4FADA90")]
	internal DateTime ToLocalTime(bool throwOnOverflow)
	{
		return default(DateTime);
	}

	[Token(Token = "0x600060D")]
	[Address(RVA = "0x4FADD20", Offset = "0x4FADD20", VA = "0x4FADD20")]
	public string ToShortDateString()
	{
		return null;
	}

	[Token(Token = "0x600060E")]
	[Address(RVA = "0x4FADE60", Offset = "0x4FADE60", VA = "0x4FADE60", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600060F")]
	[Address(RVA = "0x4FADF10", Offset = "0x4FADF10", VA = "0x4FADF10")]
	public string ToString(string format)
	{
		return null;
	}

	[Token(Token = "0x6000610")]
	[Address(RVA = "0x4FADFC0", Offset = "0x4FADFC0", VA = "0x4FADFC0", Slot = "21")]
	public string ToString(IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6000611")]
	[Address(RVA = "0x4FAE070", Offset = "0x4FAE070", VA = "0x4FAE070", Slot = "5")]
	public string ToString(string format, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6000612")]
	[Address(RVA = "0x4FAE130", Offset = "0x4FAE130", VA = "0x4FAE130", Slot = "26")]
	public bool TryFormat(Span<char> destination, out int charsWritten, [Optional] ReadOnlySpan<char> format, [Optional] IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x6000613")]
	[Address(RVA = "0x4FAE2D0", Offset = "0x4FAE2D0", VA = "0x4FAE2D0")]
	public DateTime ToUniversalTime()
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000614")]
	[Address(RVA = "0x4FAE320", Offset = "0x4FAE320", VA = "0x4FAE320")]
	public static bool TryParse(string s, IFormatProvider provider, DateTimeStyles styles, out DateTime result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000615")]
	[Address(RVA = "0x4FAE580", Offset = "0x4FAE580", VA = "0x4FAE580")]
	public static bool TryParseExact(string s, string format, IFormatProvider provider, DateTimeStyles style, out DateTime result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000616")]
	[Address(RVA = "0x4FAE850", Offset = "0x4FAE850", VA = "0x4FAE850")]
	public static DateTime operator +(DateTime d, TimeSpan t)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000617")]
	[Address(RVA = "0x4FAE950", Offset = "0x4FAE950", VA = "0x4FAE950")]
	public static DateTime operator -(DateTime d, TimeSpan t)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000618")]
	[Address(RVA = "0x4FAEA50", Offset = "0x4FAEA50", VA = "0x4FAEA50")]
	public static TimeSpan operator -(DateTime d1, DateTime d2)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000619")]
	[Address(RVA = "0x4FAEAB0", Offset = "0x4FAEAB0", VA = "0x4FAEAB0")]
	public static bool operator ==(DateTime d1, DateTime d2)
	{
		return default(bool);
	}

	[Token(Token = "0x600061A")]
	[Address(RVA = "0x4FAEB10", Offset = "0x4FAEB10", VA = "0x4FAEB10")]
	public static bool operator !=(DateTime d1, DateTime d2)
	{
		return default(bool);
	}

	[Token(Token = "0x600061B")]
	[Address(RVA = "0x4FAEB70", Offset = "0x4FAEB70", VA = "0x4FAEB70")]
	public static bool operator <(DateTime t1, DateTime t2)
	{
		return default(bool);
	}

	[Token(Token = "0x600061C")]
	[Address(RVA = "0x4FAEBD0", Offset = "0x4FAEBD0", VA = "0x4FAEBD0")]
	public static bool operator <=(DateTime t1, DateTime t2)
	{
		return default(bool);
	}

	[Token(Token = "0x600061D")]
	[Address(RVA = "0x4FAEC30", Offset = "0x4FAEC30", VA = "0x4FAEC30")]
	public static bool operator >(DateTime t1, DateTime t2)
	{
		return default(bool);
	}

	[Token(Token = "0x600061E")]
	[Address(RVA = "0x4FAEC90", Offset = "0x4FAEC90", VA = "0x4FAEC90")]
	public static bool operator >=(DateTime t1, DateTime t2)
	{
		return default(bool);
	}

	[Token(Token = "0x600061F")]
	[Address(RVA = "0x4FAECF0", Offset = "0x4FAECF0", VA = "0x4FAECF0", Slot = "6")]
	public TypeCode GetTypeCode()
	{
		return default(TypeCode);
	}

	[Token(Token = "0x6000620")]
	[Address(RVA = "0x4FAED00", Offset = "0x4FAED00", VA = "0x4FAED00", Slot = "7")]
	private bool System_002EIConvertible_002EToBoolean(IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x6000621")]
	[Address(RVA = "0x4FAED80", Offset = "0x4FAED80", VA = "0x4FAED80", Slot = "8")]
	private char System_002EIConvertible_002EToChar(IFormatProvider provider)
	{
		return default(char);
	}

	[Token(Token = "0x6000622")]
	[Address(RVA = "0x4FAEE00", Offset = "0x4FAEE00", VA = "0x4FAEE00", Slot = "9")]
	private sbyte System_002EIConvertible_002EToSByte(IFormatProvider provider)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000623")]
	[Address(RVA = "0x4FAEE80", Offset = "0x4FAEE80", VA = "0x4FAEE80", Slot = "10")]
	private byte System_002EIConvertible_002EToByte(IFormatProvider provider)
	{
		return default(byte);
	}

	[Token(Token = "0x6000624")]
	[Address(RVA = "0x4FAEF00", Offset = "0x4FAEF00", VA = "0x4FAEF00", Slot = "11")]
	private short System_002EIConvertible_002EToInt16(IFormatProvider provider)
	{
		return default(short);
	}

	[Token(Token = "0x6000625")]
	[Address(RVA = "0x4FAEF80", Offset = "0x4FAEF80", VA = "0x4FAEF80", Slot = "12")]
	private ushort System_002EIConvertible_002EToUInt16(IFormatProvider provider)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000626")]
	[Address(RVA = "0x4FAF000", Offset = "0x4FAF000", VA = "0x4FAF000", Slot = "13")]
	private int System_002EIConvertible_002EToInt32(IFormatProvider provider)
	{
		return default(int);
	}

	[Token(Token = "0x6000627")]
	[Address(RVA = "0x4FAF080", Offset = "0x4FAF080", VA = "0x4FAF080", Slot = "14")]
	private uint System_002EIConvertible_002EToUInt32(IFormatProvider provider)
	{
		return default(uint);
	}

	[Token(Token = "0x6000628")]
	[Address(RVA = "0x4FAF100", Offset = "0x4FAF100", VA = "0x4FAF100", Slot = "15")]
	private long System_002EIConvertible_002EToInt64(IFormatProvider provider)
	{
		return default(long);
	}

	[Token(Token = "0x6000629")]
	[Address(RVA = "0x4FAF180", Offset = "0x4FAF180", VA = "0x4FAF180", Slot = "16")]
	private ulong System_002EIConvertible_002EToUInt64(IFormatProvider provider)
	{
		return default(ulong);
	}

	[Token(Token = "0x600062A")]
	[Address(RVA = "0x4FAF200", Offset = "0x4FAF200", VA = "0x4FAF200", Slot = "17")]
	private float System_002EIConvertible_002EToSingle(IFormatProvider provider)
	{
		return default(float);
	}

	[Token(Token = "0x600062B")]
	[Address(RVA = "0x4FAF280", Offset = "0x4FAF280", VA = "0x4FAF280", Slot = "18")]
	private double System_002EIConvertible_002EToDouble(IFormatProvider provider)
	{
		return default(double);
	}

	[Token(Token = "0x600062C")]
	[Address(RVA = "0x4FAF300", Offset = "0x4FAF300", VA = "0x4FAF300", Slot = "19")]
	private decimal System_002EIConvertible_002EToDecimal(IFormatProvider provider)
	{
		return default(decimal);
	}

	[Token(Token = "0x600062D")]
	[Address(RVA = "0x4FAF380", Offset = "0x4FAF380", VA = "0x4FAF380", Slot = "20")]
	private DateTime System_002EIConvertible_002EToDateTime(IFormatProvider provider)
	{
		return default(DateTime);
	}

	[Token(Token = "0x600062E")]
	[Address(RVA = "0x4FAF390", Offset = "0x4FAF390", VA = "0x4FAF390", Slot = "22")]
	private object System_002EIConvertible_002EToType(Type type, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x600062F")]
	[Address(RVA = "0x4FAF420", Offset = "0x4FAF420", VA = "0x4FAF420")]
	internal static bool TryCreate(int year, int month, int day, int hour, int minute, int second, int millisecond, out DateTime result)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000631")]
	[Address(RVA = "0x4FAF5E0", Offset = "0x4FAF5E0", VA = "0x4FAF5E0")]
	internal static extern long GetSystemTimeAsFileTime();

	[Token(Token = "0x6000632")]
	[Address(RVA = "0x4FAF5F0", Offset = "0x4FAF5F0", VA = "0x4FAF5F0")]
	internal long ToBinaryRaw()
	{
		return default(long);
	}
}
