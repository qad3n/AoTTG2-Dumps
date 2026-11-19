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
	[Token(Token = "0x4000217")]
	private const long TicksPerMillisecond = 10000L;

	[Token(Token = "0x4000218")]
	private const long TicksPerSecond = 10000000L;

	[Token(Token = "0x4000219")]
	private const long TicksPerMinute = 600000000L;

	[Token(Token = "0x400021A")]
	private const long TicksPerHour = 36000000000L;

	[Token(Token = "0x400021B")]
	private const long TicksPerDay = 864000000000L;

	[Token(Token = "0x400021C")]
	private const int MillisPerSecond = 1000;

	[Token(Token = "0x400021D")]
	private const int MillisPerMinute = 60000;

	[Token(Token = "0x400021E")]
	private const int MillisPerHour = 3600000;

	[Token(Token = "0x400021F")]
	private const int MillisPerDay = 86400000;

	[Token(Token = "0x4000220")]
	private const int DaysPerYear = 365;

	[Token(Token = "0x4000221")]
	private const int DaysPer4Years = 1461;

	[Token(Token = "0x4000222")]
	private const int DaysPer100Years = 36524;

	[Token(Token = "0x4000223")]
	private const int DaysPer400Years = 146097;

	[Token(Token = "0x4000224")]
	private const int DaysTo1601 = 584388;

	[Token(Token = "0x4000225")]
	private const int DaysTo1899 = 693593;

	[Token(Token = "0x4000226")]
	internal const int DaysTo1970 = 719162;

	[Token(Token = "0x4000227")]
	private const int DaysTo10000 = 3652059;

	[Token(Token = "0x4000228")]
	internal const long MinTicks = 0L;

	[Token(Token = "0x4000229")]
	internal const long MaxTicks = 3155378975999999999L;

	[Token(Token = "0x400022A")]
	private const long MaxMillis = 315537897600000L;

	[Token(Token = "0x400022B")]
	internal const long UnixEpochTicks = 621355968000000000L;

	[Token(Token = "0x400022C")]
	private const long FileTimeOffset = 504911232000000000L;

	[Token(Token = "0x400022D")]
	private const long DoubleDateOffset = 599264352000000000L;

	[Token(Token = "0x400022E")]
	private const long OADateMinAsTicks = 31241376000000000L;

	[Token(Token = "0x400022F")]
	private const double OADateMinAsDouble = -657435.0;

	[Token(Token = "0x4000230")]
	private const double OADateMaxAsDouble = 2958466.0;

	[Token(Token = "0x4000231")]
	private const int DatePartYear = 0;

	[Token(Token = "0x4000232")]
	private const int DatePartDayOfYear = 1;

	[Token(Token = "0x4000233")]
	private const int DatePartMonth = 2;

	[Token(Token = "0x4000234")]
	private const int DatePartDay = 3;

	[Token(Token = "0x4000235")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly int[] s_daysToMonth365;

	[Token(Token = "0x4000236")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly int[] s_daysToMonth366;

	[Token(Token = "0x4000237")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public static readonly DateTime MinValue;

	[Token(Token = "0x4000238")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public static readonly DateTime MaxValue;

	[Token(Token = "0x4000239")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public static readonly DateTime UnixEpoch;

	[Token(Token = "0x400023A")]
	private const ulong TicksMask = 4611686018427387903uL;

	[Token(Token = "0x400023B")]
	private const ulong FlagsMask = 13835058055282163712uL;

	[Token(Token = "0x400023C")]
	private const ulong LocalMask = 9223372036854775808uL;

	[Token(Token = "0x400023D")]
	private const long TicksCeiling = 4611686018427387904L;

	[Token(Token = "0x400023E")]
	private const ulong KindUnspecified = 0uL;

	[Token(Token = "0x400023F")]
	private const ulong KindUtc = 4611686018427387904uL;

	[Token(Token = "0x4000240")]
	private const ulong KindLocal = 9223372036854775808uL;

	[Token(Token = "0x4000241")]
	private const ulong KindLocalAmbiguousDst = 13835058055282163712uL;

	[Token(Token = "0x4000242")]
	private const int KindShift = 62;

	[Token(Token = "0x4000243")]
	private const string TicksField = "ticks";

	[Token(Token = "0x4000244")]
	private const string DateDataField = "dateData";

	[Token(Token = "0x4000245")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly ulong _dateData;

	[Token(Token = "0x17000067")]
	internal long InternalTicks
	{
		[Token(Token = "0x60005E4")]
		[Address(RVA = "0x5494950", Offset = "0x5493950", VA = "0x5494950")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x17000068")]
	private ulong InternalKind
	{
		[Token(Token = "0x60005E5")]
		[Address(RVA = "0x5494960", Offset = "0x5493960", VA = "0x5494960")]
		get
		{
			return default(ulong);
		}
	}

	[Token(Token = "0x17000069")]
	public DateTime Date
	{
		[Token(Token = "0x60005FD")]
		[Address(RVA = "0x5495E60", Offset = "0x5494E60", VA = "0x5495E60")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x1700006A")]
	public int Day
	{
		[Token(Token = "0x6000600")]
		[Address(RVA = "0x54960C0", Offset = "0x54950C0", VA = "0x54960C0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700006B")]
	public DayOfWeek DayOfWeek
	{
		[Token(Token = "0x6000601")]
		[Address(RVA = "0x5496130", Offset = "0x5495130", VA = "0x5496130")]
		get
		{
			return default(DayOfWeek);
		}
	}

	[Token(Token = "0x1700006C")]
	public int Hour
	{
		[Token(Token = "0x6000603")]
		[Address(RVA = "0x5496200", Offset = "0x5495200", VA = "0x5496200")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700006D")]
	public DateTimeKind Kind
	{
		[Token(Token = "0x6000605")]
		[Address(RVA = "0x54962C0", Offset = "0x54952C0", VA = "0x54962C0")]
		get
		{
			return default(DateTimeKind);
		}
	}

	[Token(Token = "0x1700006E")]
	public int Millisecond
	{
		[Token(Token = "0x6000606")]
		[Address(RVA = "0x5496330", Offset = "0x5495330", VA = "0x5496330")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700006F")]
	public int Minute
	{
		[Token(Token = "0x6000607")]
		[Address(RVA = "0x54963B0", Offset = "0x54953B0", VA = "0x54963B0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000070")]
	public int Month
	{
		[Token(Token = "0x6000608")]
		[Address(RVA = "0x5496430", Offset = "0x5495430", VA = "0x5496430")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000071")]
	public static DateTime Now
	{
		[Token(Token = "0x6000609")]
		[Address(RVA = "0x54964A0", Offset = "0x54954A0", VA = "0x54964A0")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x17000072")]
	public int Second
	{
		[Token(Token = "0x600060A")]
		[Address(RVA = "0x54966F0", Offset = "0x54956F0", VA = "0x54966F0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000073")]
	public long Ticks
	{
		[Token(Token = "0x600060B")]
		[Address(RVA = "0x5494620", Offset = "0x5493620", VA = "0x5494620")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x17000074")]
	public TimeSpan TimeOfDay
	{
		[Token(Token = "0x600060C")]
		[Address(RVA = "0x5496770", Offset = "0x5495770", VA = "0x5496770")]
		get
		{
			return default(TimeSpan);
		}
	}

	[Token(Token = "0x17000075")]
	public static DateTime Today
	{
		[Token(Token = "0x600060D")]
		[Address(RVA = "0x54967E0", Offset = "0x54957E0", VA = "0x54967E0")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x17000076")]
	public int Year
	{
		[Token(Token = "0x600060E")]
		[Address(RVA = "0x54968F0", Offset = "0x54958F0", VA = "0x54968F0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000077")]
	public static DateTime UtcNow
	{
		[Token(Token = "0x600063A")]
		[Address(RVA = "0x5496690", Offset = "0x5495690", VA = "0x5496690")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x60005DA")]
	[Address(RVA = "0x5493C00", Offset = "0x5492C00", VA = "0x5493C00")]
	public DateTime(long ticks)
	{
	}

	[Token(Token = "0x60005DB")]
	[Address(RVA = "0x5493C80", Offset = "0x5492C80", VA = "0x5493C80")]
	private DateTime(ulong dateData)
	{
	}

	[Token(Token = "0x60005DC")]
	[Address(RVA = "0x5493C90", Offset = "0x5492C90", VA = "0x5493C90")]
	public DateTime(long ticks, DateTimeKind kind)
	{
	}

	[Token(Token = "0x60005DD")]
	[Address(RVA = "0x5493D60", Offset = "0x5492D60", VA = "0x5493D60")]
	internal DateTime(long ticks, DateTimeKind kind, bool isAmbiguousDst)
	{
	}

	[Token(Token = "0x60005DE")]
	[Address(RVA = "0x5493DF0", Offset = "0x5492DF0", VA = "0x5493DF0")]
	public DateTime(int year, int month, int day)
	{
	}

	[Token(Token = "0x60005DF")]
	[Address(RVA = "0x5493FE0", Offset = "0x5492FE0", VA = "0x5493FE0")]
	public DateTime(int year, int month, int day, int hour, int minute, int second)
	{
	}

	[Token(Token = "0x60005E0")]
	[Address(RVA = "0x5494120", Offset = "0x5493120", VA = "0x5494120")]
	public DateTime(int year, int month, int day, int hour, int minute, int second, DateTimeKind kind)
	{
	}

	[Token(Token = "0x60005E1")]
	[Address(RVA = "0x5494220", Offset = "0x5493220", VA = "0x5494220")]
	public DateTime(int year, int month, int day, int hour, int minute, int second, int millisecond)
	{
	}

	[Token(Token = "0x60005E2")]
	[Address(RVA = "0x54943D0", Offset = "0x54933D0", VA = "0x54943D0")]
	public DateTime(int year, int month, int day, int hour, int minute, int second, int millisecond, Calendar calendar)
	{
	}

	[Token(Token = "0x60005E3")]
	[Address(RVA = "0x5494690", Offset = "0x5493690", VA = "0x5494690")]
	private DateTime(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60005E6")]
	[Address(RVA = "0x5494970", Offset = "0x5493970", VA = "0x5494970")]
	public DateTime Add(TimeSpan value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60005E7")]
	[Address(RVA = "0x5494AC0", Offset = "0x5493AC0", VA = "0x5494AC0")]
	private DateTime Add(double value, int scale)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60005E8")]
	[Address(RVA = "0x5494BC0", Offset = "0x5493BC0", VA = "0x5494BC0")]
	public DateTime AddDays(double value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60005E9")]
	[Address(RVA = "0x5494C30", Offset = "0x5493C30", VA = "0x5494C30")]
	public DateTime AddMilliseconds(double value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60005EA")]
	[Address(RVA = "0x5494CA0", Offset = "0x5493CA0", VA = "0x5494CA0")]
	public DateTime AddMinutes(double value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60005EB")]
	[Address(RVA = "0x5494D10", Offset = "0x5493D10", VA = "0x5494D10")]
	public DateTime AddMonths(int months)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60005EC")]
	[Address(RVA = "0x5495250", Offset = "0x5494250", VA = "0x5495250")]
	public DateTime AddSeconds(double value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60005ED")]
	[Address(RVA = "0x54949C0", Offset = "0x54939C0", VA = "0x54949C0")]
	public DateTime AddTicks(long value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60005EE")]
	[Address(RVA = "0x54952C0", Offset = "0x54942C0", VA = "0x54952C0")]
	public DateTime AddYears(int value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60005EF")]
	[Address(RVA = "0x5495380", Offset = "0x5494380", VA = "0x5495380")]
	public static int Compare(DateTime t1, DateTime t2)
	{
		return default(int);
	}

	[Token(Token = "0x60005F0")]
	[Address(RVA = "0x54953F0", Offset = "0x54943F0", VA = "0x54953F0", Slot = "4")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x60005F1")]
	[Address(RVA = "0x5495520", Offset = "0x5494520", VA = "0x5495520", Slot = "23")]
	public int CompareTo(DateTime value)
	{
		return default(int);
	}

	[Token(Token = "0x60005F2")]
	[Address(RVA = "0x5493E50", Offset = "0x5492E50", VA = "0x5493E50")]
	private static long DateToTicks(int year, int month, int day)
	{
		return default(long);
	}

	[Token(Token = "0x60005F3")]
	[Address(RVA = "0x5494070", Offset = "0x5493070", VA = "0x5494070")]
	private static long TimeToTicks(int hour, int minute, int second)
	{
		return default(long);
	}

	[Token(Token = "0x60005F4")]
	[Address(RVA = "0x5495130", Offset = "0x5494130", VA = "0x5495130")]
	public static int DaysInMonth(int year, int month)
	{
		return default(int);
	}

	[Token(Token = "0x60005F5")]
	[Address(RVA = "0x5495670", Offset = "0x5494670", VA = "0x5495670", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60005F6")]
	[Address(RVA = "0x5495710", Offset = "0x5494710", VA = "0x5495710", Slot = "24")]
	public bool Equals(DateTime value)
	{
		return default(bool);
	}

	[Token(Token = "0x60005F7")]
	[Address(RVA = "0x5495770", Offset = "0x5494770", VA = "0x5495770")]
	public static DateTime FromBinary(long dateData)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60005F8")]
	[Address(RVA = "0x5495A40", Offset = "0x5494A40", VA = "0x5495A40")]
	internal static DateTime FromBinaryRaw(long dateData)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60005F9")]
	[Address(RVA = "0x5495AC0", Offset = "0x5494AC0", VA = "0x5495AC0")]
	public static DateTime FromFileTime(long fileTime)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60005FA")]
	[Address(RVA = "0x5495C00", Offset = "0x5494C00", VA = "0x5495C00")]
	public static DateTime FromFileTimeUtc(long fileTime)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60005FB")]
	[Address(RVA = "0x5495D00", Offset = "0x5494D00", VA = "0x5495D00", Slot = "25")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60005FC")]
	[Address(RVA = "0x5495DF0", Offset = "0x5494DF0", VA = "0x5495DF0")]
	public static DateTime SpecifyKind(DateTime value, DateTimeKind kind)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60005FE")]
	[Address(RVA = "0x5495EE0", Offset = "0x5494EE0", VA = "0x5495EE0")]
	private int GetDatePart(int part)
	{
		return default(int);
	}

	[Token(Token = "0x60005FF")]
	[Address(RVA = "0x5494F50", Offset = "0x5493F50", VA = "0x5494F50")]
	internal void GetDatePart(out int year, out int month, out int day)
	{
	}

	[Token(Token = "0x6000602")]
	[Address(RVA = "0x54961B0", Offset = "0x54951B0", VA = "0x54961B0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000604")]
	[Address(RVA = "0x5496270", Offset = "0x5495270", VA = "0x5496270")]
	internal bool IsAmbiguousDaylightSavingTime()
	{
		return default(bool);
	}

	[Token(Token = "0x600060F")]
	[Address(RVA = "0x54955D0", Offset = "0x54945D0", VA = "0x54955D0")]
	public static bool IsLeapYear(int year)
	{
		return default(bool);
	}

	[Token(Token = "0x6000610")]
	[Address(RVA = "0x5496A80", Offset = "0x5495A80", VA = "0x5496A80")]
	public static DateTime Parse(string s, IFormatProvider provider)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000611")]
	[Address(RVA = "0x5496C90", Offset = "0x5495C90", VA = "0x5496C90")]
	public static DateTime Parse(string s, IFormatProvider provider, DateTimeStyles styles)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000612")]
	[Address(RVA = "0x5496DC0", Offset = "0x5495DC0", VA = "0x5496DC0")]
	public static DateTime ParseExact(string s, string format, IFormatProvider provider, DateTimeStyles style)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000613")]
	[Address(RVA = "0x5497070", Offset = "0x5496070", VA = "0x5497070")]
	public static DateTime ParseExact(string s, string[] formats, IFormatProvider provider, DateTimeStyles style)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000614")]
	[Address(RVA = "0x54972C0", Offset = "0x54962C0", VA = "0x54972C0")]
	public TimeSpan Subtract(DateTime value)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000615")]
	[Address(RVA = "0x5495C90", Offset = "0x5494C90", VA = "0x5495C90")]
	public DateTime ToLocalTime()
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000616")]
	[Address(RVA = "0x5497320", Offset = "0x5496320", VA = "0x5497320")]
	internal DateTime ToLocalTime(bool throwOnOverflow)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000617")]
	[Address(RVA = "0x5497570", Offset = "0x5496570", VA = "0x5497570")]
	public string ToShortDateString()
	{
		return null;
	}

	[Token(Token = "0x6000618")]
	[Address(RVA = "0x54976B0", Offset = "0x54966B0", VA = "0x54976B0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000619")]
	[Address(RVA = "0x5497760", Offset = "0x5496760", VA = "0x5497760")]
	public string ToString(string format)
	{
		return null;
	}

	[Token(Token = "0x600061A")]
	[Address(RVA = "0x5497810", Offset = "0x5496810", VA = "0x5497810", Slot = "21")]
	public string ToString(IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x600061B")]
	[Address(RVA = "0x54978C0", Offset = "0x54968C0", VA = "0x54978C0", Slot = "5")]
	public string ToString(string format, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x600061C")]
	[Address(RVA = "0x5497980", Offset = "0x5496980", VA = "0x5497980", Slot = "26")]
	public bool TryFormat(Span<char> destination, out int charsWritten, [Optional] ReadOnlySpan<char> format, [Optional] IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x600061D")]
	[Address(RVA = "0x5497B20", Offset = "0x5496B20", VA = "0x5497B20")]
	public DateTime ToUniversalTime()
	{
		return default(DateTime);
	}

	[Token(Token = "0x600061E")]
	[Address(RVA = "0x5497B70", Offset = "0x5496B70", VA = "0x5497B70")]
	public static bool TryParse(string s, IFormatProvider provider, DateTimeStyles styles, out DateTime result)
	{
		return default(bool);
	}

	[Token(Token = "0x600061F")]
	[Address(RVA = "0x5497DA0", Offset = "0x5496DA0", VA = "0x5497DA0")]
	public static bool TryParseExact(string s, string format, IFormatProvider provider, DateTimeStyles style, out DateTime result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000620")]
	[Address(RVA = "0x5498040", Offset = "0x5497040", VA = "0x5498040")]
	public static DateTime operator +(DateTime d, TimeSpan t)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000621")]
	[Address(RVA = "0x5498140", Offset = "0x5497140", VA = "0x5498140")]
	public static DateTime operator -(DateTime d, TimeSpan t)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000622")]
	[Address(RVA = "0x5498240", Offset = "0x5497240", VA = "0x5498240")]
	public static TimeSpan operator -(DateTime d1, DateTime d2)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000623")]
	[Address(RVA = "0x54982A0", Offset = "0x54972A0", VA = "0x54982A0")]
	public static bool operator ==(DateTime d1, DateTime d2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000624")]
	[Address(RVA = "0x5498300", Offset = "0x5497300", VA = "0x5498300")]
	public static bool operator !=(DateTime d1, DateTime d2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000625")]
	[Address(RVA = "0x5498360", Offset = "0x5497360", VA = "0x5498360")]
	public static bool operator <(DateTime t1, DateTime t2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000626")]
	[Address(RVA = "0x54983C0", Offset = "0x54973C0", VA = "0x54983C0")]
	public static bool operator <=(DateTime t1, DateTime t2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000627")]
	[Address(RVA = "0x5498420", Offset = "0x5497420", VA = "0x5498420")]
	public static bool operator >(DateTime t1, DateTime t2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000628")]
	[Address(RVA = "0x5498480", Offset = "0x5497480", VA = "0x5498480")]
	public static bool operator >=(DateTime t1, DateTime t2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000629")]
	[Address(RVA = "0x54984E0", Offset = "0x54974E0", VA = "0x54984E0", Slot = "6")]
	public TypeCode GetTypeCode()
	{
		return default(TypeCode);
	}

	[Token(Token = "0x600062A")]
	[Address(RVA = "0x54984F0", Offset = "0x54974F0", VA = "0x54984F0", Slot = "7")]
	private bool System_002EIConvertible_002EToBoolean(IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x600062B")]
	[Address(RVA = "0x5498570", Offset = "0x5497570", VA = "0x5498570", Slot = "8")]
	private char System_002EIConvertible_002EToChar(IFormatProvider provider)
	{
		return default(char);
	}

	[Token(Token = "0x600062C")]
	[Address(RVA = "0x54985F0", Offset = "0x54975F0", VA = "0x54985F0", Slot = "9")]
	private sbyte System_002EIConvertible_002EToSByte(IFormatProvider provider)
	{
		return default(sbyte);
	}

	[Token(Token = "0x600062D")]
	[Address(RVA = "0x5498670", Offset = "0x5497670", VA = "0x5498670", Slot = "10")]
	private byte System_002EIConvertible_002EToByte(IFormatProvider provider)
	{
		return default(byte);
	}

	[Token(Token = "0x600062E")]
	[Address(RVA = "0x54986F0", Offset = "0x54976F0", VA = "0x54986F0", Slot = "11")]
	private short System_002EIConvertible_002EToInt16(IFormatProvider provider)
	{
		return default(short);
	}

	[Token(Token = "0x600062F")]
	[Address(RVA = "0x5498770", Offset = "0x5497770", VA = "0x5498770", Slot = "12")]
	private ushort System_002EIConvertible_002EToUInt16(IFormatProvider provider)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000630")]
	[Address(RVA = "0x54987F0", Offset = "0x54977F0", VA = "0x54987F0", Slot = "13")]
	private int System_002EIConvertible_002EToInt32(IFormatProvider provider)
	{
		return default(int);
	}

	[Token(Token = "0x6000631")]
	[Address(RVA = "0x5498870", Offset = "0x5497870", VA = "0x5498870", Slot = "14")]
	private uint System_002EIConvertible_002EToUInt32(IFormatProvider provider)
	{
		return default(uint);
	}

	[Token(Token = "0x6000632")]
	[Address(RVA = "0x54988F0", Offset = "0x54978F0", VA = "0x54988F0", Slot = "15")]
	private long System_002EIConvertible_002EToInt64(IFormatProvider provider)
	{
		return default(long);
	}

	[Token(Token = "0x6000633")]
	[Address(RVA = "0x5498970", Offset = "0x5497970", VA = "0x5498970", Slot = "16")]
	private ulong System_002EIConvertible_002EToUInt64(IFormatProvider provider)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000634")]
	[Address(RVA = "0x54989F0", Offset = "0x54979F0", VA = "0x54989F0", Slot = "17")]
	private float System_002EIConvertible_002EToSingle(IFormatProvider provider)
	{
		return default(float);
	}

	[Token(Token = "0x6000635")]
	[Address(RVA = "0x5498A70", Offset = "0x5497A70", VA = "0x5498A70", Slot = "18")]
	private double System_002EIConvertible_002EToDouble(IFormatProvider provider)
	{
		return default(double);
	}

	[Token(Token = "0x6000636")]
	[Address(RVA = "0x5498AF0", Offset = "0x5497AF0", VA = "0x5498AF0", Slot = "19")]
	private decimal System_002EIConvertible_002EToDecimal(IFormatProvider provider)
	{
		return 0m;
	}

	[Token(Token = "0x6000637")]
	[Address(RVA = "0x5498B70", Offset = "0x5497B70", VA = "0x5498B70", Slot = "20")]
	private DateTime System_002EIConvertible_002EToDateTime(IFormatProvider provider)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000638")]
	[Address(RVA = "0x5498B80", Offset = "0x5497B80", VA = "0x5498B80", Slot = "22")]
	private object System_002EIConvertible_002EToType(Type type, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6000639")]
	[Address(RVA = "0x5498C10", Offset = "0x5497C10", VA = "0x5498C10")]
	internal static bool TryCreate(int year, int month, int day, int hour, int minute, int second, int millisecond, out DateTime result)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600063B")]
	[Address(RVA = "0x5498E30", Offset = "0x5497E30", VA = "0x5498E30")]
	internal static extern long GetSystemTimeAsFileTime();

	[Token(Token = "0x600063C")]
	[Address(RVA = "0x5498E40", Offset = "0x5497E40", VA = "0x5498E40")]
	internal long ToBinaryRaw()
	{
		return default(long);
	}
}
