using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x2000117")]
public readonly struct TimeSpan : IComparable, IComparable<TimeSpan>, IEquatable<TimeSpan>, IFormattable, System.ISpanFormattable
{
	[Token(Token = "0x40003D8")]
	public const long TicksPerMillisecond = 10000L;

	[Token(Token = "0x40003D9")]
	private const double MillisecondsPerTick = 0.0001;

	[Token(Token = "0x40003DA")]
	public const long TicksPerSecond = 10000000L;

	[Token(Token = "0x40003DB")]
	private const double SecondsPerTick = 1E-07;

	[Token(Token = "0x40003DC")]
	public const long TicksPerMinute = 600000000L;

	[Token(Token = "0x40003DD")]
	private const double MinutesPerTick = 1.6666666666666667E-09;

	[Token(Token = "0x40003DE")]
	public const long TicksPerHour = 36000000000L;

	[Token(Token = "0x40003DF")]
	private const double HoursPerTick = 2.7777777777777777E-11;

	[Token(Token = "0x40003E0")]
	public const long TicksPerDay = 864000000000L;

	[Token(Token = "0x40003E1")]
	private const double DaysPerTick = 1.1574074074074074E-12;

	[Token(Token = "0x40003E2")]
	private const int MillisPerSecond = 1000;

	[Token(Token = "0x40003E3")]
	private const int MillisPerMinute = 60000;

	[Token(Token = "0x40003E4")]
	private const int MillisPerHour = 3600000;

	[Token(Token = "0x40003E5")]
	private const int MillisPerDay = 86400000;

	[Token(Token = "0x40003E6")]
	internal const long MaxSeconds = 922337203685L;

	[Token(Token = "0x40003E7")]
	internal const long MinSeconds = -922337203685L;

	[Token(Token = "0x40003E8")]
	internal const long MaxMilliSeconds = 922337203685477L;

	[Token(Token = "0x40003E9")]
	internal const long MinMilliSeconds = -922337203685477L;

	[Token(Token = "0x40003EA")]
	internal const long TicksPerTenthSecond = 1000000L;

	[Token(Token = "0x40003EB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly TimeSpan Zero;

	[Token(Token = "0x40003EC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public static readonly TimeSpan MaxValue;

	[Token(Token = "0x40003ED")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public static readonly TimeSpan MinValue;

	[Token(Token = "0x40003EE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal readonly long _ticks;

	[Token(Token = "0x170000AF")]
	public long Ticks
	{
		[Token(Token = "0x6000A31")]
		[Address(RVA = "0x4FEC6B0", Offset = "0x4FEC6B0", VA = "0x4FEC6B0")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x170000B0")]
	public int Days
	{
		[Token(Token = "0x6000A32")]
		[Address(RVA = "0x4FEC6C0", Offset = "0x4FEC6C0", VA = "0x4FEC6C0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000B1")]
	public int Hours
	{
		[Token(Token = "0x6000A33")]
		[Address(RVA = "0x4FEC6F0", Offset = "0x4FEC6F0", VA = "0x4FEC6F0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000B2")]
	public int Milliseconds
	{
		[Token(Token = "0x6000A34")]
		[Address(RVA = "0x4FEC740", Offset = "0x4FEC740", VA = "0x4FEC740")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000B3")]
	public int Minutes
	{
		[Token(Token = "0x6000A35")]
		[Address(RVA = "0x4FEC790", Offset = "0x4FEC790", VA = "0x4FEC790")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000B4")]
	public int Seconds
	{
		[Token(Token = "0x6000A36")]
		[Address(RVA = "0x4FEC7E0", Offset = "0x4FEC7E0", VA = "0x4FEC7E0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000B5")]
	public double TotalDays
	{
		[Token(Token = "0x6000A37")]
		[Address(RVA = "0x4FEC830", Offset = "0x4FEC830", VA = "0x4FEC830")]
		get
		{
			return default(double);
		}
	}

	[Token(Token = "0x170000B6")]
	public double TotalHours
	{
		[Token(Token = "0x6000A38")]
		[Address(RVA = "0x4FEC840", Offset = "0x4FEC840", VA = "0x4FEC840")]
		get
		{
			return default(double);
		}
	}

	[Token(Token = "0x170000B7")]
	public double TotalMilliseconds
	{
		[Token(Token = "0x6000A39")]
		[Address(RVA = "0x4FEC850", Offset = "0x4FEC850", VA = "0x4FEC850")]
		get
		{
			return default(double);
		}
	}

	[Token(Token = "0x170000B8")]
	public double TotalMinutes
	{
		[Token(Token = "0x6000A3A")]
		[Address(RVA = "0x4FEC880", Offset = "0x4FEC880", VA = "0x4FEC880")]
		get
		{
			return default(double);
		}
	}

	[Token(Token = "0x170000B9")]
	public double TotalSeconds
	{
		[Token(Token = "0x6000A3B")]
		[Address(RVA = "0x4FEC890", Offset = "0x4FEC890", VA = "0x4FEC890")]
		get
		{
			return default(double);
		}
	}

	[Token(Token = "0x6000A2E")]
	[Address(RVA = "0x4FEC480", Offset = "0x4FEC480", VA = "0x4FEC480")]
	public TimeSpan(long ticks)
	{
	}

	[Token(Token = "0x6000A2F")]
	[Address(RVA = "0x4FEC490", Offset = "0x4FEC490", VA = "0x4FEC490")]
	public TimeSpan(int hours, int minutes, int seconds)
	{
	}

	[Token(Token = "0x6000A30")]
	[Address(RVA = "0x4FEC600", Offset = "0x4FEC600", VA = "0x4FEC600")]
	public TimeSpan(int days, int hours, int minutes, int seconds, int milliseconds)
	{
	}

	[Token(Token = "0x6000A3C")]
	[Address(RVA = "0x4FEC8A0", Offset = "0x4FEC8A0", VA = "0x4FEC8A0")]
	public TimeSpan Add(TimeSpan ts)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000A3D")]
	[Address(RVA = "0x4FEC900", Offset = "0x4FEC900", VA = "0x4FEC900")]
	public static int Compare(TimeSpan t1, TimeSpan t2)
	{
		return default(int);
	}

	[Token(Token = "0x6000A3E")]
	[Address(RVA = "0x4FEC920", Offset = "0x4FEC920", VA = "0x4FEC920", Slot = "4")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000A3F")]
	[Address(RVA = "0x4FEC9D0", Offset = "0x4FEC9D0", VA = "0x4FEC9D0", Slot = "5")]
	public int CompareTo(TimeSpan value)
	{
		return default(int);
	}

	[Token(Token = "0x6000A40")]
	[Address(RVA = "0x4FEC9F0", Offset = "0x4FEC9F0", VA = "0x4FEC9F0")]
	public static TimeSpan FromDays(double value)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000A41")]
	[Address(RVA = "0x4FECB50", Offset = "0x4FECB50", VA = "0x4FECB50", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A42")]
	[Address(RVA = "0x4FECBB0", Offset = "0x4FECBB0", VA = "0x4FECBB0", Slot = "6")]
	public bool Equals(TimeSpan obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A43")]
	[Address(RVA = "0x4FECBC0", Offset = "0x4FECBC0", VA = "0x4FECBC0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000A44")]
	[Address(RVA = "0x4FECBD0", Offset = "0x4FECBD0", VA = "0x4FECBD0")]
	public static TimeSpan FromHours(double value)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000A45")]
	[Address(RVA = "0x4FECA60", Offset = "0x4FECA60", VA = "0x4FECA60")]
	private static TimeSpan Interval(double value, int scale)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000A46")]
	[Address(RVA = "0x4FECC50", Offset = "0x4FECC50", VA = "0x4FECC50")]
	public static TimeSpan FromMilliseconds(double value)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000A47")]
	[Address(RVA = "0x4FECCD0", Offset = "0x4FECCD0", VA = "0x4FECCD0")]
	public static TimeSpan FromMinutes(double value)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000A48")]
	[Address(RVA = "0x4FECD50", Offset = "0x4FECD50", VA = "0x4FECD50")]
	public TimeSpan Negate()
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000A49")]
	[Address(RVA = "0x4FECE20", Offset = "0x4FECE20", VA = "0x4FECE20")]
	public static TimeSpan FromSeconds(double value)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000A4A")]
	[Address(RVA = "0x4FECEA0", Offset = "0x4FECEA0", VA = "0x4FECEA0")]
	public TimeSpan Subtract(TimeSpan ts)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000A4B")]
	[Address(RVA = "0x4FECF00", Offset = "0x4FECF00", VA = "0x4FECF00")]
	public static TimeSpan FromTicks(long value)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000A4C")]
	[Address(RVA = "0x4FEC570", Offset = "0x4FEC570", VA = "0x4FEC570")]
	internal static long TimeToTicks(int hour, int minute, int second)
	{
		return default(long);
	}

	[Token(Token = "0x6000A4D")]
	[Address(RVA = "0x4FECF10", Offset = "0x4FECF10", VA = "0x4FECF10")]
	public static TimeSpan Parse(string s)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000A4E")]
	[Address(RVA = "0x4FECF60", Offset = "0x4FECF60", VA = "0x4FECF60")]
	public static TimeSpan Parse(string input, IFormatProvider formatProvider)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000A4F")]
	[Address(RVA = "0x4FECFC0", Offset = "0x4FECFC0", VA = "0x4FECFC0")]
	public static bool TryParse(string s, out TimeSpan result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A50")]
	[Address(RVA = "0x4FED020", Offset = "0x4FED020", VA = "0x4FED020")]
	public static bool TryParseExact(string input, string format, IFormatProvider formatProvider, out TimeSpan result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A51")]
	[Address(RVA = "0x4FED0D0", Offset = "0x4FED0D0", VA = "0x4FED0D0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000A52")]
	[Address(RVA = "0x4FED120", Offset = "0x4FED120", VA = "0x4FED120")]
	public string ToString(string format)
	{
		return null;
	}

	[Token(Token = "0x6000A53")]
	[Address(RVA = "0x4FED180", Offset = "0x4FED180", VA = "0x4FED180", Slot = "7")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}

	[Token(Token = "0x6000A54")]
	[Address(RVA = "0x4FED1E0", Offset = "0x4FED1E0", VA = "0x4FED1E0", Slot = "8")]
	public bool TryFormat(Span<char> destination, out int charsWritten, [Optional] ReadOnlySpan<char> format, [Optional] IFormatProvider formatProvider)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A55")]
	[Address(RVA = "0x4FED270", Offset = "0x4FED270", VA = "0x4FED270")]
	public static TimeSpan operator -(TimeSpan t)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000A56")]
	[Address(RVA = "0x4FED330", Offset = "0x4FED330", VA = "0x4FED330")]
	public static TimeSpan operator -(TimeSpan t1, TimeSpan t2)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000A57")]
	[Address(RVA = "0x4FED3D0", Offset = "0x4FED3D0", VA = "0x4FED3D0")]
	public static TimeSpan operator +(TimeSpan t1, TimeSpan t2)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000A58")]
	[Address(RVA = "0x4FED490", Offset = "0x4FED490", VA = "0x4FED490")]
	public static bool operator ==(TimeSpan t1, TimeSpan t2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A59")]
	[Address(RVA = "0x4FED4A0", Offset = "0x4FED4A0", VA = "0x4FED4A0")]
	public static bool operator !=(TimeSpan t1, TimeSpan t2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A5A")]
	[Address(RVA = "0x4FED4B0", Offset = "0x4FED4B0", VA = "0x4FED4B0")]
	public static bool operator <(TimeSpan t1, TimeSpan t2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A5B")]
	[Address(RVA = "0x4FED4C0", Offset = "0x4FED4C0", VA = "0x4FED4C0")]
	public static bool operator <=(TimeSpan t1, TimeSpan t2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A5C")]
	[Address(RVA = "0x4FED4D0", Offset = "0x4FED4D0", VA = "0x4FED4D0")]
	public static bool operator >(TimeSpan t1, TimeSpan t2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A5D")]
	[Address(RVA = "0x4FED4E0", Offset = "0x4FED4E0", VA = "0x4FED4E0")]
	public static bool operator >=(TimeSpan t1, TimeSpan t2)
	{
		return default(bool);
	}
}
