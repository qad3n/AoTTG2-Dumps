// ==================== AoTTG2 cross-reference ====================
// Type: System.TimeSpan
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3CD21D0", Offset = "0x3CD21D0", VA = "0x3CD21D0")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x170000B0")]
	public int Days
	{
		[Token(Token = "0x6000A32")]
		[Address(RVA = "0x3CD21E0", Offset = "0x3CD21E0", VA = "0x3CD21E0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000B1")]
	public int Hours
	{
		[Token(Token = "0x6000A33")]
		[Address(RVA = "0x3CD2210", Offset = "0x3CD2210", VA = "0x3CD2210")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000B2")]
	public int Milliseconds
	{
		[Token(Token = "0x6000A34")]
		[Address(RVA = "0x3CD2260", Offset = "0x3CD2260", VA = "0x3CD2260")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000B3")]
	public int Minutes
	{
		[Token(Token = "0x6000A35")]
		[Address(RVA = "0x3CD22B0", Offset = "0x3CD22B0", VA = "0x3CD22B0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000B4")]
	public int Seconds
	{
		[Token(Token = "0x6000A36")]
		[Address(RVA = "0x3CD2300", Offset = "0x3CD2300", VA = "0x3CD2300")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000B5")]
	public double TotalDays
	{
		[Token(Token = "0x6000A37")]
		[Address(RVA = "0x3CD2350", Offset = "0x3CD2350", VA = "0x3CD2350")]
		get
		{
			return default(double);
		}
	}

	[Token(Token = "0x170000B6")]
	public double TotalHours
	{
		[Token(Token = "0x6000A38")]
		[Address(RVA = "0x3CD2360", Offset = "0x3CD2360", VA = "0x3CD2360")]
		get
		{
			return default(double);
		}
	}

	[Token(Token = "0x170000B7")]
	public double TotalMilliseconds
	{
		[Token(Token = "0x6000A39")]
		[Address(RVA = "0x3CD2370", Offset = "0x3CD2370", VA = "0x3CD2370")]
		get
		{
			return default(double);
		}
	}

	[Token(Token = "0x170000B8")]
	public double TotalMinutes
	{
		[Token(Token = "0x6000A3A")]
		[Address(RVA = "0x3CD23A0", Offset = "0x3CD23A0", VA = "0x3CD23A0")]
		get
		{
			return default(double);
		}
	}

	[Token(Token = "0x170000B9")]
	public double TotalSeconds
	{
		[Token(Token = "0x6000A3B")]
		[Address(RVA = "0x3CD23B0", Offset = "0x3CD23B0", VA = "0x3CD23B0")]
		get
		{
			return default(double);
		}
	}

	[Token(Token = "0x6000A2E")]
	[Address(RVA = "0x3CD1FA0", Offset = "0x3CD1FA0", VA = "0x3CD1FA0")]
	public TimeSpan(long ticks)
	{
	}

	[Token(Token = "0x6000A2F")]
	[Address(RVA = "0x3CD1FB0", Offset = "0x3CD1FB0", VA = "0x3CD1FB0")]
	public TimeSpan(int hours, int minutes, int seconds)
	{
	}

	[Token(Token = "0x6000A30")]
	[Address(RVA = "0x3CD2120", Offset = "0x3CD2120", VA = "0x3CD2120")]
	public TimeSpan(int days, int hours, int minutes, int seconds, int milliseconds)
	{
	}

	[Token(Token = "0x6000A3C")]
	[Address(RVA = "0x3CD23C0", Offset = "0x3CD23C0", VA = "0x3CD23C0")]
	public TimeSpan Add(TimeSpan ts)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000A3D")]
	[Address(RVA = "0x3CD2420", Offset = "0x3CD2420", VA = "0x3CD2420")]
	public static int Compare(TimeSpan t1, TimeSpan t2)
	{
		return default(int);
	}

	[Token(Token = "0x6000A3E")]
	[Address(RVA = "0x3CD2440", Offset = "0x3CD2440", VA = "0x3CD2440", Slot = "4")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000A3F")]
	[Address(RVA = "0x3CD24F0", Offset = "0x3CD24F0", VA = "0x3CD24F0", Slot = "5")]
	public int CompareTo(TimeSpan value)
	{
		return default(int);
	}

	[Token(Token = "0x6000A40")]
	[Address(RVA = "0x3CD2510", Offset = "0x3CD2510", VA = "0x3CD2510")]
	public static TimeSpan FromDays(double value)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000A41")]
	[Address(RVA = "0x3CD2670", Offset = "0x3CD2670", VA = "0x3CD2670", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A42")]
	[Address(RVA = "0x3CD26D0", Offset = "0x3CD26D0", VA = "0x3CD26D0", Slot = "6")]
	public bool Equals(TimeSpan obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A43")]
	[Address(RVA = "0x3CD26E0", Offset = "0x3CD26E0", VA = "0x3CD26E0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000A44")]
	[Address(RVA = "0x3CD26F0", Offset = "0x3CD26F0", VA = "0x3CD26F0")]
	public static TimeSpan FromHours(double value)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000A45")]
	[Address(RVA = "0x3CD2580", Offset = "0x3CD2580", VA = "0x3CD2580")]
	private static TimeSpan Interval(double value, int scale)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000A46")]
	[Address(RVA = "0x3CD2770", Offset = "0x3CD2770", VA = "0x3CD2770")]
	public static TimeSpan FromMilliseconds(double value)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000A47")]
	[Address(RVA = "0x3CD27F0", Offset = "0x3CD27F0", VA = "0x3CD27F0")]
	public static TimeSpan FromMinutes(double value)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000A48")]
	[Address(RVA = "0x3CD2870", Offset = "0x3CD2870", VA = "0x3CD2870")]
	public TimeSpan Negate()
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000A49")]
	[Address(RVA = "0x3CD2940", Offset = "0x3CD2940", VA = "0x3CD2940")]
	public static TimeSpan FromSeconds(double value)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000A4A")]
	[Address(RVA = "0x3CD29C0", Offset = "0x3CD29C0", VA = "0x3CD29C0")]
	public TimeSpan Subtract(TimeSpan ts)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000A4B")]
	[Address(RVA = "0x3CD2A20", Offset = "0x3CD2A20", VA = "0x3CD2A20")]
	public static TimeSpan FromTicks(long value)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000A4C")]
	[Address(RVA = "0x3CD2090", Offset = "0x3CD2090", VA = "0x3CD2090")]
	internal static long TimeToTicks(int hour, int minute, int second)
	{
		return default(long);
	}

	[Token(Token = "0x6000A4D")]
	[Address(RVA = "0x3CD2A30", Offset = "0x3CD2A30", VA = "0x3CD2A30")]
	public static TimeSpan Parse(string s)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000A4E")]
	[Address(RVA = "0x3CD2A80", Offset = "0x3CD2A80", VA = "0x3CD2A80")]
	public static TimeSpan Parse(string input, IFormatProvider formatProvider)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000A4F")]
	[Address(RVA = "0x3CD2AE0", Offset = "0x3CD2AE0", VA = "0x3CD2AE0")]
	public static bool TryParse(string s, out TimeSpan result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A50")]
	[Address(RVA = "0x3CD2B40", Offset = "0x3CD2B40", VA = "0x3CD2B40")]
	public static bool TryParseExact(string input, string format, IFormatProvider formatProvider, out TimeSpan result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A51")]
	[Address(RVA = "0x3CD2BF0", Offset = "0x3CD2BF0", VA = "0x3CD2BF0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000A52")]
	[Address(RVA = "0x3CD2C40", Offset = "0x3CD2C40", VA = "0x3CD2C40")]
	public string ToString(string format)
	{
		return null;
	}

	[Token(Token = "0x6000A53")]
	[Address(RVA = "0x3CD2CA0", Offset = "0x3CD2CA0", VA = "0x3CD2CA0", Slot = "7")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}

	[Token(Token = "0x6000A54")]
	[Address(RVA = "0x3CD2D00", Offset = "0x3CD2D00", VA = "0x3CD2D00", Slot = "8")]
	public bool TryFormat(Span<char> destination, out int charsWritten, [Optional] ReadOnlySpan<char> format, [Optional] IFormatProvider formatProvider)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A55")]
	[Address(RVA = "0x3CD2D90", Offset = "0x3CD2D90", VA = "0x3CD2D90")]
	public static TimeSpan operator -(TimeSpan t)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000A56")]
	[Address(RVA = "0x3CD2E50", Offset = "0x3CD2E50", VA = "0x3CD2E50")]
	public static TimeSpan operator -(TimeSpan t1, TimeSpan t2)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000A57")]
	[Address(RVA = "0x3CD2EF0", Offset = "0x3CD2EF0", VA = "0x3CD2EF0")]
	public static TimeSpan operator +(TimeSpan t1, TimeSpan t2)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000A58")]
	[Address(RVA = "0x3CD2FB0", Offset = "0x3CD2FB0", VA = "0x3CD2FB0")]
	public static bool operator ==(TimeSpan t1, TimeSpan t2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A59")]
	[Address(RVA = "0x3CD2FC0", Offset = "0x3CD2FC0", VA = "0x3CD2FC0")]
	public static bool operator !=(TimeSpan t1, TimeSpan t2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A5A")]
	[Address(RVA = "0x3CD2FD0", Offset = "0x3CD2FD0", VA = "0x3CD2FD0")]
	public static bool operator <(TimeSpan t1, TimeSpan t2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A5B")]
	[Address(RVA = "0x3CD2FE0", Offset = "0x3CD2FE0", VA = "0x3CD2FE0")]
	public static bool operator <=(TimeSpan t1, TimeSpan t2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A5C")]
	[Address(RVA = "0x3CD2FF0", Offset = "0x3CD2FF0", VA = "0x3CD2FF0")]
	public static bool operator >(TimeSpan t1, TimeSpan t2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A5D")]
	[Address(RVA = "0x3CD3000", Offset = "0x3CD3000", VA = "0x3CD3000")]
	public static bool operator >=(TimeSpan t1, TimeSpan t2)
	{
		return default(bool);
	}
}
