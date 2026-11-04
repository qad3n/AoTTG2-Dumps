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
[Token(Token = "0x200013F")]
public readonly struct TimeSpan : IComparable, IComparable<TimeSpan>, IEquatable<TimeSpan>, IFormattable, System.ISpanFormattable
{
	[Token(Token = "0x4000453")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly TimeSpan Zero;

	[Token(Token = "0x4000454")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public static readonly TimeSpan MaxValue;

	[Token(Token = "0x4000455")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public static readonly TimeSpan MinValue;

	[Token(Token = "0x4000456")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal readonly long _ticks;

	[Token(Token = "0x170000AF")]
	public long Ticks
	{
		[Token(Token = "0x6000A76")]
		[Address(RVA = "0x72FFC0", Offset = "0x72E5C0", VA = "0x18072FFC0")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x170000B0")]
	public int Days
	{
		[Token(Token = "0x6000A77")]
		[Address(RVA = "0x1B4FA90", Offset = "0x1B4E090", VA = "0x181B4FA90")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000B1")]
	public int Hours
	{
		[Token(Token = "0x6000A78")]
		[Address(RVA = "0x1B4FAB0", Offset = "0x1B4E0B0", VA = "0x181B4FAB0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000B2")]
	public int Milliseconds
	{
		[Token(Token = "0x6000A79")]
		[Address(RVA = "0x1B4FAF0", Offset = "0x1B4E0F0", VA = "0x181B4FAF0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000B3")]
	public int Minutes
	{
		[Token(Token = "0x6000A7A")]
		[Address(RVA = "0x1B4FB40", Offset = "0x1B4E140", VA = "0x181B4FB40")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000B4")]
	public int Seconds
	{
		[Token(Token = "0x6000A7B")]
		[Address(RVA = "0x1B4FB90", Offset = "0x1B4E190", VA = "0x181B4FB90")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000B5")]
	public double TotalDays
	{
		[Token(Token = "0x6000A7C")]
		[Address(RVA = "0x1B4FBE0", Offset = "0x1B4E1E0", VA = "0x181B4FBE0")]
		get
		{
			return default(double);
		}
	}

	[Token(Token = "0x170000B6")]
	public double TotalHours
	{
		[Token(Token = "0x6000A7D")]
		[Address(RVA = "0x1B4FC00", Offset = "0x1B4E200", VA = "0x181B4FC00")]
		get
		{
			return default(double);
		}
	}

	[Token(Token = "0x170000B7")]
	public double TotalMilliseconds
	{
		[Token(Token = "0x6000A7E")]
		[Address(RVA = "0x1B4FC20", Offset = "0x1B4E220", VA = "0x181B4FC20")]
		get
		{
			return default(double);
		}
	}

	[Token(Token = "0x170000B8")]
	public double TotalMinutes
	{
		[Token(Token = "0x6000A7F")]
		[Address(RVA = "0x1B4FC50", Offset = "0x1B4E250", VA = "0x181B4FC50")]
		get
		{
			return default(double);
		}
	}

	[Token(Token = "0x170000B9")]
	public double TotalSeconds
	{
		[Token(Token = "0x6000A80")]
		[Address(RVA = "0x1B4FC70", Offset = "0x1B4E270", VA = "0x181B4FC70")]
		get
		{
			return default(double);
		}
	}

	[Token(Token = "0x6000A73")]
	[Address(RVA = "0xB546E0", Offset = "0xB52CE0", VA = "0x180B546E0")]
	public TimeSpan(long ticks)
	{
	}

	[Token(Token = "0x6000A74")]
	[Address(RVA = "0x1B4F9C0", Offset = "0x1B4DFC0", VA = "0x181B4F9C0")]
	public TimeSpan(int hours, int minutes, int seconds)
	{
	}

	[Token(Token = "0x6000A75")]
	[Address(RVA = "0x1B4F900", Offset = "0x1B4DF00", VA = "0x181B4F900")]
	public TimeSpan(int days, int hours, int minutes, int seconds, int milliseconds)
	{
	}

	[Token(Token = "0x6000A81")]
	[Address(RVA = "0x1B4EE70", Offset = "0x1B4D470", VA = "0x181B4EE70")]
	public TimeSpan Add(TimeSpan ts)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000A82")]
	[Address(RVA = "0x1B4F000", Offset = "0x1B4D600", VA = "0x181B4F000")]
	public static int Compare(TimeSpan t1, TimeSpan t2)
	{
		return default(int);
	}

	[Token(Token = "0x6000A83")]
	[Address(RVA = "0x1B4EF20", Offset = "0x1B4D520", VA = "0x181B4EF20", Slot = "4")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000A84")]
	[Address(RVA = "0x1B4EF00", Offset = "0x1B4D500", VA = "0x181B4EF00", Slot = "5")]
	public int CompareTo(TimeSpan value)
	{
		return default(int);
	}

	[Token(Token = "0x6000A85")]
	[Address(RVA = "0x1B4F0B0", Offset = "0x1B4D6B0", VA = "0x181B4F0B0")]
	public static TimeSpan FromDays(double value)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000A86")]
	[Address(RVA = "0x1B4F020", Offset = "0x1B4D620", VA = "0x181B4F020", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A87")]
	[Address(RVA = "0x187DED0", Offset = "0x187C4D0", VA = "0x18187DED0", Slot = "6")]
	public bool Equals(TimeSpan obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A88")]
	[Address(RVA = "0x1B2A110", Offset = "0x1B28710", VA = "0x181B2A110", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000A89")]
	[Address(RVA = "0x1B4F110", Offset = "0x1B4D710", VA = "0x181B4F110")]
	public static TimeSpan FromHours(double value)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000A8A")]
	[Address(RVA = "0x1B4F290", Offset = "0x1B4D890", VA = "0x181B4F290")]
	private static TimeSpan Interval(double value, int scale)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000A8B")]
	[Address(RVA = "0x1B4F170", Offset = "0x1B4D770", VA = "0x181B4F170")]
	public static TimeSpan FromMilliseconds(double value)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000A8C")]
	[Address(RVA = "0x1B4F1D0", Offset = "0x1B4D7D0", VA = "0x181B4F1D0")]
	public static TimeSpan FromMinutes(double value)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000A8D")]
	[Address(RVA = "0x1B4F3A0", Offset = "0x1B4D9A0", VA = "0x181B4F3A0")]
	public TimeSpan Negate()
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000A8E")]
	[Address(RVA = "0x1B4F230", Offset = "0x1B4D830", VA = "0x181B4F230")]
	public static TimeSpan FromSeconds(double value)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000A8F")]
	[Address(RVA = "0x1B4F560", Offset = "0x1B4DB60", VA = "0x181B4F560")]
	public TimeSpan Subtract(TimeSpan ts)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000A90")]
	[Address(RVA = "0x611510", Offset = "0x60FB10", VA = "0x180611510")]
	public static TimeSpan FromTicks(long value)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000A91")]
	[Address(RVA = "0x1B4F5F0", Offset = "0x1B4DBF0", VA = "0x181B4F5F0")]
	internal static long TimeToTicks(int hour, int minute, int second)
	{
		return default(long);
	}

	[Token(Token = "0x6000A92")]
	[Address(RVA = "0x1B4F4E0", Offset = "0x1B4DAE0", VA = "0x181B4F4E0")]
	public static TimeSpan Parse(string s)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000A93")]
	[Address(RVA = "0x1B4F450", Offset = "0x1B4DA50", VA = "0x181B4F450")]
	public static TimeSpan Parse(string input, IFormatProvider formatProvider)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000A94")]
	[Address(RVA = "0x1B4F7F0", Offset = "0x1B4DDF0", VA = "0x181B4F7F0")]
	public static bool TryParse(string s, out TimeSpan result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A95")]
	[Address(RVA = "0x1B4F690", Offset = "0x1B4DC90", VA = "0x181B4F690", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000A96")]
	[Address(RVA = "0x1B4F6F0", Offset = "0x1B4DCF0", VA = "0x181B4F6F0", Slot = "7")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}

	[Token(Token = "0x6000A97")]
	[Address(RVA = "0x1B4F760", Offset = "0x1B4DD60", VA = "0x181B4F760", Slot = "8")]
	public bool TryFormat(Span<char> destination, out int charsWritten, [Optional] ReadOnlySpan<char> format, [Optional] IFormatProvider formatProvider)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A98")]
	[Address(RVA = "0x1B4FE50", Offset = "0x1B4E450", VA = "0x181B4FE50")]
	public static TimeSpan operator -(TimeSpan t)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000A99")]
	[Address(RVA = "0x1B4FD90", Offset = "0x1B4E390", VA = "0x181B4FD90")]
	public static TimeSpan operator -(TimeSpan t1, TimeSpan t2)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000A9A")]
	[Address(RVA = "0x1B4FC90", Offset = "0x1B4E290", VA = "0x181B4FC90")]
	public static TimeSpan operator +(TimeSpan t1, TimeSpan t2)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000A9B")]
	[Address(RVA = "0x841F20", Offset = "0x840520", VA = "0x180841F20")]
	public static bool operator ==(TimeSpan t1, TimeSpan t2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A9C")]
	[Address(RVA = "0x5286D0", Offset = "0x526CD0", VA = "0x1805286D0")]
	public static bool operator !=(TimeSpan t1, TimeSpan t2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A9D")]
	[Address(RVA = "0x1B4FD80", Offset = "0x1B4E380", VA = "0x181B4FD80")]
	public static bool operator <(TimeSpan t1, TimeSpan t2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A9E")]
	[Address(RVA = "0x1B4FD70", Offset = "0x1B4E370", VA = "0x181B4FD70")]
	public static bool operator <=(TimeSpan t1, TimeSpan t2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A9F")]
	[Address(RVA = "0x1B4FD60", Offset = "0x1B4E360", VA = "0x181B4FD60")]
	public static bool operator >(TimeSpan t1, TimeSpan t2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AA0")]
	[Address(RVA = "0x1B4FD50", Offset = "0x1B4E350", VA = "0x181B4FD50")]
	public static bool operator >=(TimeSpan t1, TimeSpan t2)
	{
		return default(bool);
	}
}
