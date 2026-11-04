// ==================== AoTTG2 cross-reference ====================
// Type: System.DateTime
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Globalization;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[StructLayout((LayoutKind)3)]
[Token(Token = "0x20000CA")]
public readonly struct DateTime : IComparable, IFormattable, IConvertible, IComparable<DateTime>, IEquatable<DateTime>, ISerializable, System.ISpanFormattable
{
	[Token(Token = "0x40002BC")]
	private const long TicksPerMillisecond = 10000L;

	[Token(Token = "0x40002BD")]
	private const long TicksPerSecond = 10000000L;

	[Token(Token = "0x40002BE")]
	private const long TicksPerMinute = 600000000L;

	[Token(Token = "0x40002BF")]
	private const long TicksPerHour = 36000000000L;

	[Token(Token = "0x40002C0")]
	private const long TicksPerDay = 864000000000L;

	[Token(Token = "0x40002C1")]
	private const int MillisPerSecond = 1000;

	[Token(Token = "0x40002C2")]
	private const int MillisPerMinute = 60000;

	[Token(Token = "0x40002C3")]
	private const int MillisPerHour = 3600000;

	[Token(Token = "0x40002C4")]
	private const int MillisPerDay = 86400000;

	[Token(Token = "0x40002C5")]
	private const int DaysPerYear = 365;

	[Token(Token = "0x40002C6")]
	private const int DaysPer4Years = 1461;

	[Token(Token = "0x40002C7")]
	private const int DaysPer100Years = 36524;

	[Token(Token = "0x40002C8")]
	private const int DaysPer400Years = 146097;

	[Token(Token = "0x40002C9")]
	private const int DaysTo1601 = 584388;

	[Token(Token = "0x40002CA")]
	private const int DaysTo1899 = 693593;

	[Token(Token = "0x40002CB")]
	internal const int DaysTo1970 = 719162;

	[Token(Token = "0x40002CC")]
	private const int DaysTo10000 = 3652059;

	[Token(Token = "0x40002CD")]
	internal const long MinTicks = 0L;

	[Token(Token = "0x40002CE")]
	internal const long MaxTicks = 3155378975999999999L;

	[Token(Token = "0x40002CF")]
	private const long MaxMillis = 315537897600000L;

	[Token(Token = "0x40002D0")]
	internal const long UnixEpochTicks = 621355968000000000L;

	[Token(Token = "0x40002D1")]
	private const long FileTimeOffset = 504911232000000000L;

	[Token(Token = "0x40002D2")]
	private const long DoubleDateOffset = 599264352000000000L;

	[Token(Token = "0x40002D3")]
	private const long OADateMinAsTicks = 31241376000000000L;

	[Token(Token = "0x40002D4")]
	private const double OADateMinAsDouble = -657435.0;

	[Token(Token = "0x40002D5")]
	private const double OADateMaxAsDouble = 2958466.0;

	[Token(Token = "0x40002D6")]
	private const int DatePartYear = 0;

	[Token(Token = "0x40002D7")]
	private const int DatePartDayOfYear = 1;

	[Token(Token = "0x40002D8")]
	private const int DatePartMonth = 2;

	[Token(Token = "0x40002D9")]
	private const int DatePartDay = 3;

	[Token(Token = "0x40002DA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly int[] s_daysToMonth365;

	[Token(Token = "0x40002DB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly int[] s_daysToMonth366;

	[Token(Token = "0x40002DC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public static readonly DateTime MinValue;

	[Token(Token = "0x40002DD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public static readonly DateTime MaxValue;

	[Token(Token = "0x40002DE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public static readonly DateTime UnixEpoch;

	[Token(Token = "0x40002DF")]
	private const ulong TicksMask = 4611686018427387903uL;

	[Token(Token = "0x40002E0")]
	private const ulong FlagsMask = 13835058055282163712uL;

	[Token(Token = "0x40002E1")]
	private const ulong LocalMask = 9223372036854775808uL;

	[Token(Token = "0x40002E2")]
	private const long TicksCeiling = 4611686018427387904L;

	[Token(Token = "0x40002E3")]
	private const ulong KindUnspecified = 0uL;

	[Token(Token = "0x40002E4")]
	private const ulong KindUtc = 4611686018427387904uL;

	[Token(Token = "0x40002E5")]
	private const ulong KindLocal = 9223372036854775808uL;

	[Token(Token = "0x40002E6")]
	private const ulong KindLocalAmbiguousDst = 13835058055282163712uL;

	[Token(Token = "0x40002E7")]
	private const int KindShift = 62;

	[Token(Token = "0x40002E8")]
	private const string TicksField = "ticks";

	[Token(Token = "0x40002E9")]
	private const string DateDataField = "dateData";

	[Token(Token = "0x40002EA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly ulong _dateData;

	[Token(Token = "0x17000067")]
	internal long InternalTicks
	{
		[Token(Token = "0x600060D")]
		[Address(RVA = "0x1B20E80", Offset = "0x1B1F480", VA = "0x181B20E80")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x17000068")]
	private ulong InternalKind
	{
		[Token(Token = "0x600060E")]
		[Address(RVA = "0x1B20E60", Offset = "0x1B1F460", VA = "0x181B20E60")]
		get
		{
			return default(ulong);
		}
	}

	[Token(Token = "0x17000069")]
	public DateTime Date
	{
		[Token(Token = "0x6000626")]
		[Address(RVA = "0x1B20C70", Offset = "0x1B1F270", VA = "0x181B20C70")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x1700006A")]
	public int Day
	{
		[Token(Token = "0x6000629")]
		[Address(RVA = "0x1B20D80", Offset = "0x1B1F380", VA = "0x181B20D80")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700006B")]
	public DayOfWeek DayOfWeek
	{
		[Token(Token = "0x600062A")]
		[Address(RVA = "0x1B20CF0", Offset = "0x1B1F2F0", VA = "0x181B20CF0")]
		get
		{
			return default(DayOfWeek);
		}
	}

	[Token(Token = "0x1700006C")]
	public int Hour
	{
		[Token(Token = "0x600062C")]
		[Address(RVA = "0x1B20DD0", Offset = "0x1B1F3D0", VA = "0x181B20DD0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700006D")]
	public DateTimeKind Kind
	{
		[Token(Token = "0x600062E")]
		[Address(RVA = "0x1B20EA0", Offset = "0x1B1F4A0", VA = "0x181B20EA0")]
		get
		{
			return default(DateTimeKind);
		}
	}

	[Token(Token = "0x1700006E")]
	public int Millisecond
	{
		[Token(Token = "0x600062F")]
		[Address(RVA = "0x1B20F10", Offset = "0x1B1F510", VA = "0x181B20F10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700006F")]
	public int Minute
	{
		[Token(Token = "0x6000630")]
		[Address(RVA = "0x1B20FA0", Offset = "0x1B1F5A0", VA = "0x181B20FA0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000070")]
	public int Month
	{
		[Token(Token = "0x6000631")]
		[Address(RVA = "0x1B21030", Offset = "0x1B1F630", VA = "0x181B21030")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000071")]
	public static DateTime Now
	{
		[Token(Token = "0x6000632")]
		[Address(RVA = "0x1B21080", Offset = "0x1B1F680", VA = "0x181B21080")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x17000072")]
	public int Second
	{
		[Token(Token = "0x6000633")]
		[Address(RVA = "0x1B21210", Offset = "0x1B1F810", VA = "0x181B21210")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000073")]
	public long Ticks
	{
		[Token(Token = "0x6000634")]
		[Address(RVA = "0x1B212A0", Offset = "0x1B1F8A0", VA = "0x181B212A0")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x17000074")]
	public TimeSpan TimeOfDay
	{
		[Token(Token = "0x6000635")]
		[Address(RVA = "0x1B212F0", Offset = "0x1B1F8F0", VA = "0x181B212F0")]
		get
		{
			return default(TimeSpan);
		}
	}

	[Token(Token = "0x17000075")]
	public static DateTime Today
	{
		[Token(Token = "0x6000636")]
		[Address(RVA = "0x1B21360", Offset = "0x1B1F960", VA = "0x181B21360")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x17000076")]
	public int Year
	{
		[Token(Token = "0x6000637")]
		[Address(RVA = "0x1B21470", Offset = "0x1B1FA70", VA = "0x181B21470")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000077")]
	public static DateTime UtcNow
	{
		[Token(Token = "0x6000663")]
		[Address(RVA = "0x1B21410", Offset = "0x1B1FA10", VA = "0x181B21410")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x6000603")]
	[Address(RVA = "0x1B204B0", Offset = "0x1B1EAB0", VA = "0x181B204B0")]
	public DateTime(long ticks)
	{
	}

	[Token(Token = "0x6000604")]
	[Address(RVA = "0xB546E0", Offset = "0xB52CE0", VA = "0x180B546E0")]
	private DateTime(ulong dateData)
	{
	}

	[Token(Token = "0x6000605")]
	[Address(RVA = "0x1B20B80", Offset = "0x1B1F180", VA = "0x181B20B80")]
	public DateTime(long ticks, DateTimeKind kind)
	{
	}

	[Token(Token = "0x6000606")]
	[Address(RVA = "0x1B207B0", Offset = "0x1B1EDB0", VA = "0x181B207B0")]
	internal DateTime(long ticks, DateTimeKind kind, bool isAmbiguousDst)
	{
	}

	[Token(Token = "0x6000607")]
	[Address(RVA = "0x1B20860", Offset = "0x1B1EE60", VA = "0x181B20860")]
	public DateTime(int year, int month, int day)
	{
	}

	[Token(Token = "0x6000608")]
	[Address(RVA = "0x1B20130", Offset = "0x1B1E730", VA = "0x181B20130")]
	public DateTime(int year, int month, int day, int hour, int minute, int second)
	{
	}

	[Token(Token = "0x6000609")]
	[Address(RVA = "0x1B20A80", Offset = "0x1B1F080", VA = "0x181B20A80")]
	public DateTime(int year, int month, int day, int hour, int minute, int second, DateTimeKind kind)
	{
	}

	[Token(Token = "0x600060A")]
	[Address(RVA = "0x1B208D0", Offset = "0x1B1EED0", VA = "0x181B208D0")]
	public DateTime(int year, int month, int day, int hour, int minute, int second, int millisecond)
	{
	}

	[Token(Token = "0x600060B")]
	[Address(RVA = "0x1B20540", Offset = "0x1B1EB40", VA = "0x181B20540")]
	public DateTime(int year, int month, int day, int hour, int minute, int second, int millisecond, Calendar calendar)
	{
	}

	[Token(Token = "0x600060C")]
	[Address(RVA = "0x1B201B0", Offset = "0x1B1E7B0", VA = "0x181B201B0")]
	private DateTime(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x600060F")]
	[Address(RVA = "0x1B1CE10", Offset = "0x1B1B410", VA = "0x181B1CE10")]
	public DateTime Add(TimeSpan value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000610")]
	[Address(RVA = "0x1B1CCF0", Offset = "0x1B1B2F0", VA = "0x181B1CCF0")]
	private DateTime Add(double value, int scale)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000611")]
	[Address(RVA = "0x1B1C620", Offset = "0x1B1AC20", VA = "0x181B1C620")]
	public DateTime AddDays(double value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000612")]
	[Address(RVA = "0x1B1C680", Offset = "0x1B1AC80", VA = "0x181B1C680")]
	public DateTime AddMilliseconds(double value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000613")]
	[Address(RVA = "0x1B1C6E0", Offset = "0x1B1ACE0", VA = "0x181B1C6E0")]
	public DateTime AddMinutes(double value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000614")]
	[Address(RVA = "0x1B1C740", Offset = "0x1B1AD40", VA = "0x181B1C740")]
	public DateTime AddMonths(int months)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000615")]
	[Address(RVA = "0x1B1CAB0", Offset = "0x1B1B0B0", VA = "0x181B1CAB0")]
	public DateTime AddSeconds(double value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000616")]
	[Address(RVA = "0x1B1CB10", Offset = "0x1B1B110", VA = "0x181B1CB10")]
	public DateTime AddTicks(long value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000617")]
	[Address(RVA = "0x1B1CC20", Offset = "0x1B1B220", VA = "0x181B1CC20")]
	public DateTime AddYears(int value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000618")]
	[Address(RVA = "0x1B1CFC0", Offset = "0x1B1B5C0", VA = "0x181B1CFC0")]
	public static int Compare(DateTime t1, DateTime t2)
	{
		return default(int);
	}

	[Token(Token = "0x6000619")]
	[Address(RVA = "0x1B1CE70", Offset = "0x1B1B470", VA = "0x181B1CE70", Slot = "4")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x600061A")]
	[Address(RVA = "0x1B1CF60", Offset = "0x1B1B560", VA = "0x181B1CF60", Slot = "23")]
	public int CompareTo(DateTime value)
	{
		return default(int);
	}

	[Token(Token = "0x600061B")]
	[Address(RVA = "0x1B1D040", Offset = "0x1B1B640", VA = "0x181B1D040")]
	private static long DateToTicks(int year, int month, int day)
	{
		return default(long);
	}

	[Token(Token = "0x600061C")]
	[Address(RVA = "0x1B1F150", Offset = "0x1B1D750", VA = "0x181B1F150")]
	private static long TimeToTicks(int hour, int minute, int second)
	{
		return default(long);
	}

	[Token(Token = "0x600061D")]
	[Address(RVA = "0x1B1D220", Offset = "0x1B1B820", VA = "0x181B1D220")]
	public static int DaysInMonth(int year, int month)
	{
		return default(int);
	}

	[Token(Token = "0x600061E")]
	[Address(RVA = "0x1B1D360", Offset = "0x1B1B960", VA = "0x181B1D360", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x600061F")]
	[Address(RVA = "0x1B1D420", Offset = "0x1B1BA20", VA = "0x181B1D420", Slot = "24")]
	public bool Equals(DateTime value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000620")]
	[Address(RVA = "0x1B1D530", Offset = "0x1B1BB30", VA = "0x181B1D530")]
	public static DateTime FromBinary(long dateData)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000621")]
	[Address(RVA = "0x1B1D490", Offset = "0x1B1BA90", VA = "0x181B1D490")]
	internal static DateTime FromBinaryRaw(long dateData)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000622")]
	[Address(RVA = "0x1B1D920", Offset = "0x1B1BF20", VA = "0x181B1D920")]
	public static DateTime FromFileTime(long fileTime)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000623")]
	[Address(RVA = "0x1B1D810", Offset = "0x1B1BE10", VA = "0x181B1D810")]
	public static DateTime FromFileTimeUtc(long fileTime)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000624")]
	[Address(RVA = "0x1B1F060", Offset = "0x1B1D660", VA = "0x181B1F060", Slot = "25")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000625")]
	[Address(RVA = "0x1B1E780", Offset = "0x1B1CD80", VA = "0x181B1E780")]
	public static DateTime SpecifyKind(DateTime value, DateTimeKind kind)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000627")]
	[Address(RVA = "0x1B1DAB0", Offset = "0x1B1C0B0", VA = "0x181B1DAB0")]
	private int GetDatePart(int part)
	{
		return default(int);
	}

	[Token(Token = "0x6000628")]
	[Address(RVA = "0x1B1DC90", Offset = "0x1B1C290", VA = "0x181B1DC90")]
	internal void GetDatePart(out int year, out int month, out int day)
	{
	}

	[Token(Token = "0x600062B")]
	[Address(RVA = "0x1B1DE50", Offset = "0x1B1C450", VA = "0x181B1DE50", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600062D")]
	[Address(RVA = "0x1B1DEC0", Offset = "0x1B1C4C0", VA = "0x181B1DEC0")]
	internal bool IsAmbiguousDaylightSavingTime()
	{
		return default(bool);
	}

	[Token(Token = "0x6000638")]
	[Address(RVA = "0x1B1DF20", Offset = "0x1B1C520", VA = "0x181B1DF20")]
	public static bool IsLeapYear(int year)
	{
		return default(bool);
	}

	[Token(Token = "0x6000639")]
	[Address(RVA = "0x1B1E680", Offset = "0x1B1CC80", VA = "0x181B1E680")]
	public static DateTime Parse(string s, IFormatProvider provider)
	{
		return default(DateTime);
	}

	[Token(Token = "0x600063A")]
	[Address(RVA = "0x1B1E540", Offset = "0x1B1CB40", VA = "0x181B1E540")]
	public static DateTime Parse(string s, IFormatProvider provider, DateTimeStyles styles)
	{
		return default(DateTime);
	}

	[Token(Token = "0x600063B")]
	[Address(RVA = "0x1B1E000", Offset = "0x1B1C600", VA = "0x181B1E000")]
	public static DateTime ParseExact(string s, string format, IFormatProvider provider, DateTimeStyles style)
	{
		return default(DateTime);
	}

	[Token(Token = "0x600063C")]
	[Address(RVA = "0x1B1E330", Offset = "0x1B1C930", VA = "0x181B1E330")]
	public static DateTime ParseExact(string s, string[] formats, IFormatProvider provider, DateTimeStyles style)
	{
		return default(DateTime);
	}

	[Token(Token = "0x600063D")]
	[Address(RVA = "0x1B1E800", Offset = "0x1B1CE00", VA = "0x181B1E800")]
	public TimeSpan Subtract(DateTime value)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x600063E")]
	[Address(RVA = "0x1B1F4C0", Offset = "0x1B1DAC0", VA = "0x181B1F4C0")]
	public DateTime ToLocalTime()
	{
		return default(DateTime);
	}

	[Token(Token = "0x600063F")]
	[Address(RVA = "0x1B1F210", Offset = "0x1B1D810", VA = "0x181B1F210")]
	internal DateTime ToLocalTime(bool throwOnOverflow)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000640")]
	[Address(RVA = "0x1B1F510", Offset = "0x1B1DB10", VA = "0x181B1F510")]
	public string ToShortDateString()
	{
		return null;
	}

	[Token(Token = "0x6000641")]
	[Address(RVA = "0x1B1F5F0", Offset = "0x1B1DBF0", VA = "0x181B1F5F0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000642")]
	[Address(RVA = "0x1B1F6F0", Offset = "0x1B1DCF0", VA = "0x181B1F6F0")]
	public string ToString(string format)
	{
		return null;
	}

	[Token(Token = "0x6000643")]
	[Address(RVA = "0x1B1F690", Offset = "0x1B1DC90", VA = "0x181B1F690", Slot = "21")]
	public string ToString(IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6000644")]
	[Address(RVA = "0x1B1F580", Offset = "0x1B1DB80", VA = "0x181B1F580", Slot = "5")]
	public string ToString(string format, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6000645")]
	[Address(RVA = "0x1B1F990", Offset = "0x1B1DF90", VA = "0x181B1F990", Slot = "26")]
	public bool TryFormat(Span<char> destination, out int charsWritten, [Optional] ReadOnlySpan<char> format, [Optional] IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x6000646")]
	[Address(RVA = "0x1B1F750", Offset = "0x1B1DD50", VA = "0x181B1F750")]
	public DateTime ToUniversalTime()
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000647")]
	[Address(RVA = "0x1B1FDC0", Offset = "0x1B1E3C0", VA = "0x181B1FDC0")]
	public static bool TryParse(string s, IFormatProvider provider, DateTimeStyles styles, out DateTime result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000648")]
	[Address(RVA = "0x1B1FA70", Offset = "0x1B1E070", VA = "0x181B1FA70")]
	public static bool TryParseExact(string s, string format, IFormatProvider provider, DateTimeStyles style, out DateTime result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000649")]
	[Address(RVA = "0x1B214C0", Offset = "0x1B1FAC0", VA = "0x181B214C0")]
	public static DateTime operator +(DateTime d, TimeSpan t)
	{
		return default(DateTime);
	}

	[Token(Token = "0x600064A")]
	[Address(RVA = "0x1B21870", Offset = "0x1B1FE70", VA = "0x181B21870")]
	public static DateTime operator -(DateTime d, TimeSpan t)
	{
		return default(DateTime);
	}

	[Token(Token = "0x600064B")]
	[Address(RVA = "0x1B21970", Offset = "0x1B1FF70", VA = "0x181B21970")]
	public static TimeSpan operator -(DateTime d1, DateTime d2)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x600064C")]
	[Address(RVA = "0x1B215D0", Offset = "0x1B1FBD0", VA = "0x181B215D0")]
	public static bool operator ==(DateTime d1, DateTime d2)
	{
		return default(bool);
	}

	[Token(Token = "0x600064D")]
	[Address(RVA = "0x1B21720", Offset = "0x1B1FD20", VA = "0x181B21720")]
	public static bool operator !=(DateTime d1, DateTime d2)
	{
		return default(bool);
	}

	[Token(Token = "0x600064E")]
	[Address(RVA = "0x1B21800", Offset = "0x1B1FE00", VA = "0x181B21800")]
	public static bool operator <(DateTime t1, DateTime t2)
	{
		return default(bool);
	}

	[Token(Token = "0x600064F")]
	[Address(RVA = "0x1B21790", Offset = "0x1B1FD90", VA = "0x181B21790")]
	public static bool operator <=(DateTime t1, DateTime t2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000650")]
	[Address(RVA = "0x1B216B0", Offset = "0x1B1FCB0", VA = "0x181B216B0")]
	public static bool operator >(DateTime t1, DateTime t2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000651")]
	[Address(RVA = "0x1B21640", Offset = "0x1B1FC40", VA = "0x181B21640")]
	public static bool operator >=(DateTime t1, DateTime t2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000652")]
	[Address(RVA = "0x846EF0", Offset = "0x8454F0", VA = "0x180846EF0", Slot = "6")]
	public TypeCode GetTypeCode()
	{
		return default(TypeCode);
	}

	[Token(Token = "0x6000653")]
	[Address(RVA = "0x1B1E870", Offset = "0x1B1CE70", VA = "0x181B1E870", Slot = "7")]
	private bool System_002EIConvertible_002EToBoolean(IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x6000654")]
	[Address(RVA = "0x1B1E990", Offset = "0x1B1CF90", VA = "0x181B1E990", Slot = "8")]
	private char System_002EIConvertible_002EToChar(IFormatProvider provider)
	{
		return default(char);
	}

	[Token(Token = "0x6000655")]
	[Address(RVA = "0x1B1ECF0", Offset = "0x1B1D2F0", VA = "0x181B1ECF0", Slot = "9")]
	private sbyte System_002EIConvertible_002EToSByte(IFormatProvider provider)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000656")]
	[Address(RVA = "0x1B1E900", Offset = "0x1B1CF00", VA = "0x181B1E900", Slot = "10")]
	private byte System_002EIConvertible_002EToByte(IFormatProvider provider)
	{
		return default(byte);
	}

	[Token(Token = "0x6000657")]
	[Address(RVA = "0x1B1EB40", Offset = "0x1B1D140", VA = "0x181B1EB40", Slot = "11")]
	private short System_002EIConvertible_002EToInt16(IFormatProvider provider)
	{
		return default(short);
	}

	[Token(Token = "0x6000658")]
	[Address(RVA = "0x1B1EEB0", Offset = "0x1B1D4B0", VA = "0x181B1EEB0", Slot = "12")]
	private ushort System_002EIConvertible_002EToUInt16(IFormatProvider provider)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000659")]
	[Address(RVA = "0x1B1EBD0", Offset = "0x1B1D1D0", VA = "0x181B1EBD0", Slot = "13")]
	private int System_002EIConvertible_002EToInt32(IFormatProvider provider)
	{
		return default(int);
	}

	[Token(Token = "0x600065A")]
	[Address(RVA = "0x1B1EF40", Offset = "0x1B1D540", VA = "0x181B1EF40", Slot = "14")]
	private uint System_002EIConvertible_002EToUInt32(IFormatProvider provider)
	{
		return default(uint);
	}

	[Token(Token = "0x600065B")]
	[Address(RVA = "0x1B1EC60", Offset = "0x1B1D260", VA = "0x181B1EC60", Slot = "15")]
	private long System_002EIConvertible_002EToInt64(IFormatProvider provider)
	{
		return default(long);
	}

	[Token(Token = "0x600065C")]
	[Address(RVA = "0x1B1EFD0", Offset = "0x1B1D5D0", VA = "0x181B1EFD0", Slot = "16")]
	private ulong System_002EIConvertible_002EToUInt64(IFormatProvider provider)
	{
		return default(ulong);
	}

	[Token(Token = "0x600065D")]
	[Address(RVA = "0x1B1ED80", Offset = "0x1B1D380", VA = "0x181B1ED80", Slot = "17")]
	private float System_002EIConvertible_002EToSingle(IFormatProvider provider)
	{
		return default(float);
	}

	[Token(Token = "0x600065E")]
	[Address(RVA = "0x1B1EAB0", Offset = "0x1B1D0B0", VA = "0x181B1EAB0", Slot = "18")]
	private double System_002EIConvertible_002EToDouble(IFormatProvider provider)
	{
		return default(double);
	}

	[Token(Token = "0x600065F")]
	[Address(RVA = "0x1B1EA20", Offset = "0x1B1D020", VA = "0x181B1EA20", Slot = "19")]
	private decimal System_002EIConvertible_002EToDecimal(IFormatProvider provider)
	{
		return 0m;
	}

	[Token(Token = "0x6000660")]
	[Address(RVA = "0x72FFC0", Offset = "0x72E5C0", VA = "0x18072FFC0", Slot = "20")]
	private DateTime System_002EIConvertible_002EToDateTime(IFormatProvider provider)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000661")]
	[Address(RVA = "0x1B1EE10", Offset = "0x1B1D410", VA = "0x181B1EE10", Slot = "22")]
	private object System_002EIConvertible_002EToType(Type type, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6000662")]
	[Address(RVA = "0x1B1F7B0", Offset = "0x1B1DDB0", VA = "0x181B1F7B0")]
	internal static bool TryCreate(int year, int month, int day, int hour, int minute, int second, int millisecond, out DateTime result)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000664")]
	[Address(RVA = "0x1B1DEB0", Offset = "0x1B1C4B0", VA = "0x181B1DEB0")]
	internal static extern long GetSystemTimeAsFileTime();

	[Token(Token = "0x6000665")]
	[Address(RVA = "0x72FFC0", Offset = "0x72E5C0", VA = "0x18072FFC0")]
	internal long ToBinaryRaw()
	{
		return default(long);
	}
}
