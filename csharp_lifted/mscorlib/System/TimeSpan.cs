// ==================== AoTTG2 cross-reference ====================
// Type: System.TimeSpan
// Update status: CHANGED in this game update
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
	[Token(Token = "0x40003AE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly TimeSpan Zero;

	[Token(Token = "0x40003AF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public static readonly TimeSpan MaxValue;

	[Token(Token = "0x40003B0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public static readonly TimeSpan MinValue;

	[Token(Token = "0x40003B1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal readonly long _ticks;

	[Token(Token = "0x170000AF")]
	public long Ticks
	{
		[Token(Token = "0x6000A52")]
		[Address(RVA = "0x54D6170", Offset = "0x54D5170", VA = "0x54D6170")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x170000B0")]
	public int Days
	{
		[Token(Token = "0x6000A53")]
		[Address(RVA = "0x54D6180", Offset = "0x54D5180", VA = "0x54D6180")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000B1")]
	public int Hours
	{
		[Token(Token = "0x6000A54")]
		[Address(RVA = "0x54D61B0", Offset = "0x54D51B0", VA = "0x54D61B0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000B2")]
	public int Milliseconds
	{
		[Token(Token = "0x6000A55")]
		[Address(RVA = "0x54D61F0", Offset = "0x54D51F0", VA = "0x54D61F0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000B3")]
	public int Minutes
	{
		[Token(Token = "0x6000A56")]
		[Address(RVA = "0x54D6240", Offset = "0x54D5240", VA = "0x54D6240")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000B4")]
	public int Seconds
	{
		[Token(Token = "0x6000A57")]
		[Address(RVA = "0x54D6290", Offset = "0x54D5290", VA = "0x54D6290")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000B5")]
	public double TotalDays
	{
		[Token(Token = "0x6000A58")]
		[Address(RVA = "0x54D62E0", Offset = "0x54D52E0", VA = "0x54D62E0")]
		get
		{
			return default(double);
		}
	}

	[Token(Token = "0x170000B6")]
	public double TotalHours
	{
		[Token(Token = "0x6000A59")]
		[Address(RVA = "0x54D62F0", Offset = "0x54D52F0", VA = "0x54D62F0")]
		get
		{
			return default(double);
		}
	}

	[Token(Token = "0x170000B7")]
	public double TotalMilliseconds
	{
		[Token(Token = "0x6000A5A")]
		[Address(RVA = "0x54D6300", Offset = "0x54D5300", VA = "0x54D6300")]
		get
		{
			return default(double);
		}
	}

	[Token(Token = "0x170000B8")]
	public double TotalMinutes
	{
		[Token(Token = "0x6000A5B")]
		[Address(RVA = "0x54D6340", Offset = "0x54D5340", VA = "0x54D6340")]
		get
		{
			return default(double);
		}
	}

	[Token(Token = "0x170000B9")]
	public double TotalSeconds
	{
		[Token(Token = "0x6000A5C")]
		[Address(RVA = "0x54D6350", Offset = "0x54D5350", VA = "0x54D6350")]
		get
		{
			return default(double);
		}
	}

	[Token(Token = "0x6000A4F")]
	[Address(RVA = "0x54D5F40", Offset = "0x54D4F40", VA = "0x54D5F40")]
	public TimeSpan(long ticks)
	{
	}

	[Token(Token = "0x6000A50")]
	[Address(RVA = "0x54D5F50", Offset = "0x54D4F50", VA = "0x54D5F50")]
	public TimeSpan(int hours, int minutes, int seconds)
	{
	}

	[Token(Token = "0x6000A51")]
	[Address(RVA = "0x54D60C0", Offset = "0x54D50C0", VA = "0x54D60C0")]
	public TimeSpan(int days, int hours, int minutes, int seconds, int milliseconds)
	{
	}

	[Token(Token = "0x6000A5D")]
	[Address(RVA = "0x54D6360", Offset = "0x54D5360", VA = "0x54D6360")]
	public TimeSpan Add(TimeSpan ts)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000A5E")]
	[Address(RVA = "0x54D63C0", Offset = "0x54D53C0", VA = "0x54D63C0")]
	public static int Compare(TimeSpan t1, TimeSpan t2)
	{
		return default(int);
	}

	[Token(Token = "0x6000A5F")]
	[Address(RVA = "0x54D63E0", Offset = "0x54D53E0", VA = "0x54D63E0", Slot = "4")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000A60")]
	[Address(RVA = "0x54D6490", Offset = "0x54D5490", VA = "0x54D6490", Slot = "5")]
	public int CompareTo(TimeSpan value)
	{
		return default(int);
	}

	[Token(Token = "0x6000A61")]
	[Address(RVA = "0x54D64B0", Offset = "0x54D54B0", VA = "0x54D64B0")]
	public static TimeSpan FromDays(double value)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000A62")]
	[Address(RVA = "0x54D6620", Offset = "0x54D5620", VA = "0x54D6620", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A63")]
	[Address(RVA = "0x54D6680", Offset = "0x54D5680", VA = "0x54D6680", Slot = "6")]
	public bool Equals(TimeSpan obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A64")]
	[Address(RVA = "0x54D6690", Offset = "0x54D5690", VA = "0x54D6690", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000A65")]
	[Address(RVA = "0x54D66A0", Offset = "0x54D56A0", VA = "0x54D66A0")]
	public static TimeSpan FromHours(double value)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000A66")]
	[Address(RVA = "0x54D6530", Offset = "0x54D5530", VA = "0x54D6530")]
	private static TimeSpan Interval(double value, int scale)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000A67")]
	[Address(RVA = "0x54D6720", Offset = "0x54D5720", VA = "0x54D6720")]
	public static TimeSpan FromMilliseconds(double value)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000A68")]
	[Address(RVA = "0x54D67A0", Offset = "0x54D57A0", VA = "0x54D67A0")]
	public static TimeSpan FromMinutes(double value)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000A69")]
	[Address(RVA = "0x54D6820", Offset = "0x54D5820", VA = "0x54D6820")]
	public TimeSpan Negate()
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000A6A")]
	[Address(RVA = "0x54D68F0", Offset = "0x54D58F0", VA = "0x54D68F0")]
	public static TimeSpan FromSeconds(double value)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000A6B")]
	[Address(RVA = "0x54D6970", Offset = "0x54D5970", VA = "0x54D6970")]
	public TimeSpan Subtract(TimeSpan ts)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000A6C")]
	[Address(RVA = "0x54D69D0", Offset = "0x54D59D0", VA = "0x54D69D0")]
	public static TimeSpan FromTicks(long value)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000A6D")]
	[Address(RVA = "0x54D6030", Offset = "0x54D5030", VA = "0x54D6030")]
	internal static long TimeToTicks(int hour, int minute, int second)
	{
		return default(long);
	}

	[Token(Token = "0x6000A6E")]
	[Address(RVA = "0x54D69E0", Offset = "0x54D59E0", VA = "0x54D69E0")]
	public static TimeSpan Parse(string s)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000A6F")]
	[Address(RVA = "0x54D6A50", Offset = "0x54D5A50", VA = "0x54D6A50")]
	public static TimeSpan Parse(string input, IFormatProvider formatProvider)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000A70")]
	[Address(RVA = "0x54D6AC0", Offset = "0x54D5AC0", VA = "0x54D6AC0")]
	public static bool TryParse(string s, out TimeSpan result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A71")]
	[Address(RVA = "0x54D6B20", Offset = "0x54D5B20", VA = "0x54D6B20")]
	public static bool TryParseExact(string input, string format, IFormatProvider formatProvider, out TimeSpan result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A72")]
	[Address(RVA = "0x54D6BD0", Offset = "0x54D5BD0", VA = "0x54D6BD0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000A73")]
	[Address(RVA = "0x54D6C20", Offset = "0x54D5C20", VA = "0x54D6C20")]
	public string ToString(string format)
	{
		return null;
	}

	[Token(Token = "0x6000A74")]
	[Address(RVA = "0x54D6C80", Offset = "0x54D5C80", VA = "0x54D6C80", Slot = "7")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}

	[Token(Token = "0x6000A75")]
	[Address(RVA = "0x54D6CE0", Offset = "0x54D5CE0", VA = "0x54D6CE0", Slot = "8")]
	public bool TryFormat(Span<char> destination, out int charsWritten, [Optional] ReadOnlySpan<char> format, [Optional] IFormatProvider formatProvider)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A76")]
	[Address(RVA = "0x54D6D70", Offset = "0x54D5D70", VA = "0x54D6D70")]
	public static TimeSpan operator -(TimeSpan t)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000A77")]
	[Address(RVA = "0x54D6E30", Offset = "0x54D5E30", VA = "0x54D6E30")]
	public static TimeSpan operator -(TimeSpan t1, TimeSpan t2)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000A78")]
	[Address(RVA = "0x54D6EF0", Offset = "0x54D5EF0", VA = "0x54D6EF0")]
	public static TimeSpan operator +(TimeSpan t1, TimeSpan t2)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000A79")]
	[Address(RVA = "0x54D6FB0", Offset = "0x54D5FB0", VA = "0x54D6FB0")]
	public static bool operator ==(TimeSpan t1, TimeSpan t2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A7A")]
	[Address(RVA = "0x54D6FC0", Offset = "0x54D5FC0", VA = "0x54D6FC0")]
	public static bool operator !=(TimeSpan t1, TimeSpan t2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A7B")]
	[Address(RVA = "0x54D6FD0", Offset = "0x54D5FD0", VA = "0x54D6FD0")]
	public static bool operator <(TimeSpan t1, TimeSpan t2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A7C")]
	[Address(RVA = "0x54D6FE0", Offset = "0x54D5FE0", VA = "0x54D6FE0")]
	public static bool operator <=(TimeSpan t1, TimeSpan t2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A7D")]
	[Address(RVA = "0x54D6FF0", Offset = "0x54D5FF0", VA = "0x54D6FF0")]
	public static bool operator >(TimeSpan t1, TimeSpan t2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A7E")]
	[Address(RVA = "0x54D7000", Offset = "0x54D6000", VA = "0x54D7000")]
	public static bool operator >=(TimeSpan t1, TimeSpan t2)
	{
		return default(bool);
	}
}
