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
		[Address(RVA = "0x3C90BD0", Offset = "0x3C90BD0", VA = "0x3C90BD0")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x17000068")]
	private ulong InternalKind
	{
		[Token(Token = "0x60005DB")]
		[Address(RVA = "0x3C90BE0", Offset = "0x3C90BE0", VA = "0x3C90BE0")]
		get
		{
			return default(ulong);
		}
	}

	[Token(Token = "0x17000069")]
	public DateTime Date
	{
		[Token(Token = "0x60005F3")]
		[Address(RVA = "0x3C920F0", Offset = "0x3C920F0", VA = "0x3C920F0")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x1700006A")]
	public int Day
	{
		[Token(Token = "0x60005F6")]
		[Address(RVA = "0x3C92340", Offset = "0x3C92340", VA = "0x3C92340")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700006B")]
	public DayOfWeek DayOfWeek
	{
		[Token(Token = "0x60005F7")]
		[Address(RVA = "0x3C923B0", Offset = "0x3C923B0", VA = "0x3C923B0")]
		get
		{
			return default(DayOfWeek);
		}
	}

	[Token(Token = "0x1700006C")]
	public int Hour
	{
		[Token(Token = "0x60005F9")]
		[Address(RVA = "0x3C92480", Offset = "0x3C92480", VA = "0x3C92480")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700006D")]
	public DateTimeKind Kind
	{
		[Token(Token = "0x60005FB")]
		[Address(RVA = "0x3C92540", Offset = "0x3C92540", VA = "0x3C92540")]
		get
		{
			return default(DateTimeKind);
		}
	}

	[Token(Token = "0x1700006E")]
	public int Millisecond
	{
		[Token(Token = "0x60005FC")]
		[Address(RVA = "0x3C925D0", Offset = "0x3C925D0", VA = "0x3C925D0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700006F")]
	public int Minute
	{
		[Token(Token = "0x60005FD")]
		[Address(RVA = "0x3C92650", Offset = "0x3C92650", VA = "0x3C92650")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000070")]
	public int Month
	{
		[Token(Token = "0x60005FE")]
		[Address(RVA = "0x3C926D0", Offset = "0x3C926D0", VA = "0x3C926D0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000071")]
	public static DateTime Now
	{
		[Token(Token = "0x60005FF")]
		[Address(RVA = "0x3C92740", Offset = "0x3C92740", VA = "0x3C92740")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x17000072")]
	public int Second
	{
		[Token(Token = "0x6000600")]
		[Address(RVA = "0x3C92970", Offset = "0x3C92970", VA = "0x3C92970")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000073")]
	public long Ticks
	{
		[Token(Token = "0x6000601")]
		[Address(RVA = "0x3C908A0", Offset = "0x3C908A0", VA = "0x3C908A0")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x17000074")]
	public TimeSpan TimeOfDay
	{
		[Token(Token = "0x6000602")]
		[Address(RVA = "0x3C929F0", Offset = "0x3C929F0", VA = "0x3C929F0")]
		get
		{
			return default(TimeSpan);
		}
	}

	[Token(Token = "0x17000075")]
	public static DateTime Today
	{
		[Token(Token = "0x6000603")]
		[Address(RVA = "0x3C92A60", Offset = "0x3C92A60", VA = "0x3C92A60")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x17000076")]
	public int Year
	{
		[Token(Token = "0x6000604")]
		[Address(RVA = "0x3C92B70", Offset = "0x3C92B70", VA = "0x3C92B70")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000077")]
	public static DateTime UtcNow
	{
		[Token(Token = "0x6000630")]
		[Address(RVA = "0x3C92910", Offset = "0x3C92910", VA = "0x3C92910")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x60005D0")]
	[Address(RVA = "0x3C8FE80", Offset = "0x3C8FE80", VA = "0x3C8FE80")]
	public DateTime(long ticks)
	{
	}

	[Token(Token = "0x60005D1")]
	[Address(RVA = "0x3C8FF00", Offset = "0x3C8FF00", VA = "0x3C8FF00")]
	private DateTime(ulong dateData)
	{
	}

	[Token(Token = "0x60005D2")]
	[Address(RVA = "0x3C8FF10", Offset = "0x3C8FF10", VA = "0x3C8FF10")]
	public DateTime(long ticks, DateTimeKind kind)
	{
	}

	[Token(Token = "0x60005D3")]
	[Address(RVA = "0x3C8FFE0", Offset = "0x3C8FFE0", VA = "0x3C8FFE0")]
	internal DateTime(long ticks, DateTimeKind kind, bool isAmbiguousDst)
	{
	}

	[Token(Token = "0x60005D4")]
	[Address(RVA = "0x3C90070", Offset = "0x3C90070", VA = "0x3C90070")]
	public DateTime(int year, int month, int day)
	{
	}

	[Token(Token = "0x60005D5")]
	[Address(RVA = "0x3C90260", Offset = "0x3C90260", VA = "0x3C90260")]
	public DateTime(int year, int month, int day, int hour, int minute, int second)
	{
	}

	[Token(Token = "0x60005D6")]
	[Address(RVA = "0x3C903A0", Offset = "0x3C903A0", VA = "0x3C903A0")]
	public DateTime(int year, int month, int day, int hour, int minute, int second, DateTimeKind kind)
	{
	}

	[Token(Token = "0x60005D7")]
	[Address(RVA = "0x3C904A0", Offset = "0x3C904A0", VA = "0x3C904A0")]
	public DateTime(int year, int month, int day, int hour, int minute, int second, int millisecond)
	{
	}

	[Token(Token = "0x60005D8")]
	[Address(RVA = "0x3C90650", Offset = "0x3C90650", VA = "0x3C90650")]
	public DateTime(int year, int month, int day, int hour, int minute, int second, int millisecond, Calendar calendar)
	{
	}

	[Token(Token = "0x60005D9")]
	[Address(RVA = "0x3C90910", Offset = "0x3C90910", VA = "0x3C90910")]
	private DateTime(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60005DC")]
	[Address(RVA = "0x3C90BF0", Offset = "0x3C90BF0", VA = "0x3C90BF0")]
	public DateTime Add(TimeSpan value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60005DD")]
	[Address(RVA = "0x3C90D40", Offset = "0x3C90D40", VA = "0x3C90D40")]
	private DateTime Add(double value, int scale)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60005DE")]
	[Address(RVA = "0x3C90E40", Offset = "0x3C90E40", VA = "0x3C90E40")]
	public DateTime AddDays(double value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60005DF")]
	[Address(RVA = "0x3C90EB0", Offset = "0x3C90EB0", VA = "0x3C90EB0")]
	public DateTime AddMilliseconds(double value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60005E0")]
	[Address(RVA = "0x3C90F20", Offset = "0x3C90F20", VA = "0x3C90F20")]
	public DateTime AddMinutes(double value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60005E1")]
	[Address(RVA = "0x3C90F90", Offset = "0x3C90F90", VA = "0x3C90F90")]
	public DateTime AddMonths(int months)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60005E2")]
	[Address(RVA = "0x3C914E0", Offset = "0x3C914E0", VA = "0x3C914E0")]
	public DateTime AddSeconds(double value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60005E3")]
	[Address(RVA = "0x3C90C40", Offset = "0x3C90C40", VA = "0x3C90C40")]
	public DateTime AddTicks(long value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60005E4")]
	[Address(RVA = "0x3C91550", Offset = "0x3C91550", VA = "0x3C91550")]
	public DateTime AddYears(int value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60005E5")]
	[Address(RVA = "0x3C91610", Offset = "0x3C91610", VA = "0x3C91610")]
	public static int Compare(DateTime t1, DateTime t2)
	{
		return default(int);
	}

	[Token(Token = "0x60005E6")]
	[Address(RVA = "0x3C91680", Offset = "0x3C91680", VA = "0x3C91680", Slot = "4")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x60005E7")]
	[Address(RVA = "0x3C917B0", Offset = "0x3C917B0", VA = "0x3C917B0", Slot = "23")]
	public int CompareTo(DateTime value)
	{
		return default(int);
	}

	[Token(Token = "0x60005E8")]
	[Address(RVA = "0x3C900D0", Offset = "0x3C900D0", VA = "0x3C900D0")]
	private static long DateToTicks(int year, int month, int day)
	{
		return default(long);
	}

	[Token(Token = "0x60005E9")]
	[Address(RVA = "0x3C902F0", Offset = "0x3C902F0", VA = "0x3C902F0")]
	private static long TimeToTicks(int hour, int minute, int second)
	{
		return default(long);
	}

	[Token(Token = "0x60005EA")]
	[Address(RVA = "0x3C913D0", Offset = "0x3C913D0", VA = "0x3C913D0")]
	public static int DaysInMonth(int year, int month)
	{
		return default(int);
	}

	[Token(Token = "0x60005EB")]
	[Address(RVA = "0x3C91910", Offset = "0x3C91910", VA = "0x3C91910", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60005EC")]
	[Address(RVA = "0x3C919B0", Offset = "0x3C919B0", VA = "0x3C919B0", Slot = "24")]
	public bool Equals(DateTime value)
	{
		return default(bool);
	}

	[Token(Token = "0x60005ED")]
	[Address(RVA = "0x3C91A10", Offset = "0x3C91A10", VA = "0x3C91A10")]
	public static DateTime FromBinary(long dateData)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60005EE")]
	[Address(RVA = "0x3C91CF0", Offset = "0x3C91CF0", VA = "0x3C91CF0")]
	internal static DateTime FromBinaryRaw(long dateData)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60005EF")]
	[Address(RVA = "0x3C91D80", Offset = "0x3C91D80", VA = "0x3C91D80")]
	public static DateTime FromFileTime(long fileTime)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60005F0")]
	[Address(RVA = "0x3C91E90", Offset = "0x3C91E90", VA = "0x3C91E90")]
	public static DateTime FromFileTimeUtc(long fileTime)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60005F1")]
	[Address(RVA = "0x3C91F90", Offset = "0x3C91F90", VA = "0x3C91F90", Slot = "25")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60005F2")]
	[Address(RVA = "0x3C92080", Offset = "0x3C92080", VA = "0x3C92080")]
	public static DateTime SpecifyKind(DateTime value, DateTimeKind kind)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60005F4")]
	[Address(RVA = "0x3C92170", Offset = "0x3C92170", VA = "0x3C92170")]
	private int GetDatePart(int part)
	{
		return default(int);
	}

	[Token(Token = "0x60005F5")]
	[Address(RVA = "0x3C911E0", Offset = "0x3C911E0", VA = "0x3C911E0")]
	internal void GetDatePart(out int year, out int month, out int day)
	{
	}

	[Token(Token = "0x60005F8")]
	[Address(RVA = "0x3C92430", Offset = "0x3C92430", VA = "0x3C92430", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60005FA")]
	[Address(RVA = "0x3C924F0", Offset = "0x3C924F0", VA = "0x3C924F0")]
	internal bool IsAmbiguousDaylightSavingTime()
	{
		return default(bool);
	}

	[Token(Token = "0x6000605")]
	[Address(RVA = "0x3C91860", Offset = "0x3C91860", VA = "0x3C91860")]
	public static bool IsLeapYear(int year)
	{
		return default(bool);
	}

	[Token(Token = "0x6000606")]
	[Address(RVA = "0x3C92D00", Offset = "0x3C92D00", VA = "0x3C92D00")]
	public static DateTime Parse(string s, IFormatProvider provider)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000607")]
	[Address(RVA = "0x3C92F10", Offset = "0x3C92F10", VA = "0x3C92F10")]
	public static DateTime Parse(string s, IFormatProvider provider, DateTimeStyles styles)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000608")]
	[Address(RVA = "0x3C93040", Offset = "0x3C93040", VA = "0x3C93040")]
	public static DateTime ParseExact(string s, string format, IFormatProvider provider, DateTimeStyles style)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000609")]
	[Address(RVA = "0x3C93300", Offset = "0x3C93300", VA = "0x3C93300")]
	public static DateTime ParseExact(string s, string[] formats, IFormatProvider provider, DateTimeStyles style)
	{
		return default(DateTime);
	}

	[Token(Token = "0x600060A")]
	[Address(RVA = "0x3C93550", Offset = "0x3C93550", VA = "0x3C93550")]
	public TimeSpan Subtract(DateTime value)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x600060B")]
	[Address(RVA = "0x3C91F20", Offset = "0x3C91F20", VA = "0x3C91F20")]
	public DateTime ToLocalTime()
	{
		return default(DateTime);
	}

	[Token(Token = "0x600060C")]
	[Address(RVA = "0x3C935B0", Offset = "0x3C935B0", VA = "0x3C935B0")]
	internal DateTime ToLocalTime(bool throwOnOverflow)
	{
		return default(DateTime);
	}

	[Token(Token = "0x600060D")]
	[Address(RVA = "0x3C93840", Offset = "0x3C93840", VA = "0x3C93840")]
	public string ToShortDateString()
	{
		return null;
	}

	[Token(Token = "0x600060E")]
	[Address(RVA = "0x3C93980", Offset = "0x3C93980", VA = "0x3C93980", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600060F")]
	[Address(RVA = "0x3C93A30", Offset = "0x3C93A30", VA = "0x3C93A30")]
	public string ToString(string format)
	{
		return null;
	}

	[Token(Token = "0x6000610")]
	[Address(RVA = "0x3C93AE0", Offset = "0x3C93AE0", VA = "0x3C93AE0", Slot = "21")]
	public string ToString(IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6000611")]
	[Address(RVA = "0x3C93B90", Offset = "0x3C93B90", VA = "0x3C93B90", Slot = "5")]
	public string ToString(string format, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6000612")]
	[Address(RVA = "0x3C93C50", Offset = "0x3C93C50", VA = "0x3C93C50", Slot = "26")]
	public bool TryFormat(Span<char> destination, out int charsWritten, [Optional] ReadOnlySpan<char> format, [Optional] IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x6000613")]
	[Address(RVA = "0x3C93DF0", Offset = "0x3C93DF0", VA = "0x3C93DF0")]
	public DateTime ToUniversalTime()
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000614")]
	[Address(RVA = "0x3C93E40", Offset = "0x3C93E40", VA = "0x3C93E40")]
	public static bool TryParse(string s, IFormatProvider provider, DateTimeStyles styles, out DateTime result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000615")]
	[Address(RVA = "0x3C940A0", Offset = "0x3C940A0", VA = "0x3C940A0")]
	public static bool TryParseExact(string s, string format, IFormatProvider provider, DateTimeStyles style, out DateTime result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000616")]
	[Address(RVA = "0x3C94370", Offset = "0x3C94370", VA = "0x3C94370")]
	public static DateTime operator +(DateTime d, TimeSpan t)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000617")]
	[Address(RVA = "0x3C94470", Offset = "0x3C94470", VA = "0x3C94470")]
	public static DateTime operator -(DateTime d, TimeSpan t)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000618")]
	[Address(RVA = "0x3C94570", Offset = "0x3C94570", VA = "0x3C94570")]
	public static TimeSpan operator -(DateTime d1, DateTime d2)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000619")]
	[Address(RVA = "0x3C945D0", Offset = "0x3C945D0", VA = "0x3C945D0")]
	public static bool operator ==(DateTime d1, DateTime d2)
	{
		return default(bool);
	}

	[Token(Token = "0x600061A")]
	[Address(RVA = "0x3C94630", Offset = "0x3C94630", VA = "0x3C94630")]
	public static bool operator !=(DateTime d1, DateTime d2)
	{
		return default(bool);
	}

	[Token(Token = "0x600061B")]
	[Address(RVA = "0x3C94690", Offset = "0x3C94690", VA = "0x3C94690")]
	public static bool operator <(DateTime t1, DateTime t2)
	{
		return default(bool);
	}

	[Token(Token = "0x600061C")]
	[Address(RVA = "0x3C946F0", Offset = "0x3C946F0", VA = "0x3C946F0")]
	public static bool operator <=(DateTime t1, DateTime t2)
	{
		return default(bool);
	}

	[Token(Token = "0x600061D")]
	[Address(RVA = "0x3C94750", Offset = "0x3C94750", VA = "0x3C94750")]
	public static bool operator >(DateTime t1, DateTime t2)
	{
		return default(bool);
	}

	[Token(Token = "0x600061E")]
	[Address(RVA = "0x3C947B0", Offset = "0x3C947B0", VA = "0x3C947B0")]
	public static bool operator >=(DateTime t1, DateTime t2)
	{
		return default(bool);
	}

	[Token(Token = "0x600061F")]
	[Address(RVA = "0x3C94810", Offset = "0x3C94810", VA = "0x3C94810", Slot = "6")]
	public TypeCode GetTypeCode()
	{
		return default(TypeCode);
	}

	[Token(Token = "0x6000620")]
	[Address(RVA = "0x3C94820", Offset = "0x3C94820", VA = "0x3C94820", Slot = "7")]
	private bool System_002EIConvertible_002EToBoolean(IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x6000621")]
	[Address(RVA = "0x3C948A0", Offset = "0x3C948A0", VA = "0x3C948A0", Slot = "8")]
	private char System_002EIConvertible_002EToChar(IFormatProvider provider)
	{
		return default(char);
	}

	[Token(Token = "0x6000622")]
	[Address(RVA = "0x3C94920", Offset = "0x3C94920", VA = "0x3C94920", Slot = "9")]
	private sbyte System_002EIConvertible_002EToSByte(IFormatProvider provider)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6000623")]
	[Address(RVA = "0x3C949A0", Offset = "0x3C949A0", VA = "0x3C949A0", Slot = "10")]
	private byte System_002EIConvertible_002EToByte(IFormatProvider provider)
	{
		return default(byte);
	}

	[Token(Token = "0x6000624")]
	[Address(RVA = "0x3C94A20", Offset = "0x3C94A20", VA = "0x3C94A20", Slot = "11")]
	private short System_002EIConvertible_002EToInt16(IFormatProvider provider)
	{
		return default(short);
	}

	[Token(Token = "0x6000625")]
	[Address(RVA = "0x3C94AA0", Offset = "0x3C94AA0", VA = "0x3C94AA0", Slot = "12")]
	private ushort System_002EIConvertible_002EToUInt16(IFormatProvider provider)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000626")]
	[Address(RVA = "0x3C94B20", Offset = "0x3C94B20", VA = "0x3C94B20", Slot = "13")]
	private int System_002EIConvertible_002EToInt32(IFormatProvider provider)
	{
		return default(int);
	}

	[Token(Token = "0x6000627")]
	[Address(RVA = "0x3C94BA0", Offset = "0x3C94BA0", VA = "0x3C94BA0", Slot = "14")]
	private uint System_002EIConvertible_002EToUInt32(IFormatProvider provider)
	{
		return default(uint);
	}

	[Token(Token = "0x6000628")]
	[Address(RVA = "0x3C94C20", Offset = "0x3C94C20", VA = "0x3C94C20", Slot = "15")]
	private long System_002EIConvertible_002EToInt64(IFormatProvider provider)
	{
		return default(long);
	}

	[Token(Token = "0x6000629")]
	[Address(RVA = "0x3C94CA0", Offset = "0x3C94CA0", VA = "0x3C94CA0", Slot = "16")]
	private ulong System_002EIConvertible_002EToUInt64(IFormatProvider provider)
	{
		return default(ulong);
	}

	[Token(Token = "0x600062A")]
	[Address(RVA = "0x3C94D20", Offset = "0x3C94D20", VA = "0x3C94D20", Slot = "17")]
	private float System_002EIConvertible_002EToSingle(IFormatProvider provider)
	{
		return default(float);
	}

	[Token(Token = "0x600062B")]
	[Address(RVA = "0x3C94DA0", Offset = "0x3C94DA0", VA = "0x3C94DA0", Slot = "18")]
	private double System_002EIConvertible_002EToDouble(IFormatProvider provider)
	{
		return default(double);
	}

	[Token(Token = "0x600062C")]
	[Address(RVA = "0x3C94E20", Offset = "0x3C94E20", VA = "0x3C94E20", Slot = "19")]
	private decimal System_002EIConvertible_002EToDecimal(IFormatProvider provider)
	{
		return default(decimal);
	}

	[Token(Token = "0x600062D")]
	[Address(RVA = "0x3C94EA0", Offset = "0x3C94EA0", VA = "0x3C94EA0", Slot = "20")]
	private DateTime System_002EIConvertible_002EToDateTime(IFormatProvider provider)
	{
		return default(DateTime);
	}

	[Token(Token = "0x600062E")]
	[Address(RVA = "0x3C94EB0", Offset = "0x3C94EB0", VA = "0x3C94EB0", Slot = "22")]
	private object System_002EIConvertible_002EToType(Type type, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x600062F")]
	[Address(RVA = "0x3C94F40", Offset = "0x3C94F40", VA = "0x3C94F40")]
	internal static bool TryCreate(int year, int month, int day, int hour, int minute, int second, int millisecond, out DateTime result)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000631")]
	[Address(RVA = "0x3C95100", Offset = "0x3C95100", VA = "0x3C95100")]
	internal static extern long GetSystemTimeAsFileTime();

	[Token(Token = "0x6000632")]
	[Address(RVA = "0x3C95110", Offset = "0x3C95110", VA = "0x3C95110")]
	internal long ToBinaryRaw()
	{
		return default(long);
	}
}
