// ==================== AoTTG2 cross-reference ====================
// Type: System.DateTimeOffset
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Globalization;
using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[StructLayout((LayoutKind)3)]
[Token(Token = "0x20000CC")]
public readonly struct DateTimeOffset : IComparable, IFormattable, IComparable<DateTimeOffset>, IEquatable<DateTimeOffset>, ISerializable, IDeserializationCallback, System.ISpanFormattable
{
	[Token(Token = "0x40002EF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly DateTimeOffset MinValue;

	[Token(Token = "0x40002F0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public static readonly DateTimeOffset MaxValue;

	[Token(Token = "0x40002F1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public static readonly DateTimeOffset UnixEpoch;

	[Token(Token = "0x40002F2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly DateTime _dateTime;

	[Token(Token = "0x40002F3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private readonly short _offsetMinutes;

	[Token(Token = "0x17000078")]
	public static DateTimeOffset Now
	{
		[Token(Token = "0x600066D")]
		[Address(RVA = "0x1B0F920", Offset = "0x1B0DF20", VA = "0x181B0F920")]
		get
		{
			return default(DateTimeOffset);
		}
	}

	[Token(Token = "0x17000079")]
	public static DateTimeOffset UtcNow
	{
		[Token(Token = "0x600066E")]
		[Address(RVA = "0x1B0FD20", Offset = "0x1B0E320", VA = "0x181B0FD20")]
		get
		{
			return default(DateTimeOffset);
		}
	}

	[Token(Token = "0x1700007A")]
	public DateTime DateTime
	{
		[Token(Token = "0x600066F")]
		[Address(RVA = "0x1B0F3D0", Offset = "0x1B0D9D0", VA = "0x181B0F3D0")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x1700007B")]
	public DateTime UtcDateTime
	{
		[Token(Token = "0x6000670")]
		[Address(RVA = "0x1B0FC10", Offset = "0x1B0E210", VA = "0x181B0FC10")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x1700007C")]
	public DateTime LocalDateTime
	{
		[Token(Token = "0x6000671")]
		[Address(RVA = "0x1B0F5D0", Offset = "0x1B0DBD0", VA = "0x181B0F5D0")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x1700007D")]
	private DateTime ClockDateTime
	{
		[Token(Token = "0x6000672")]
		[Address(RVA = "0x1B0F1D0", Offset = "0x1B0D7D0", VA = "0x181B0F1D0")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x1700007E")]
	public int Day
	{
		[Token(Token = "0x6000673")]
		[Address(RVA = "0x1B0F420", Offset = "0x1B0DA20", VA = "0x181B0F420")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700007F")]
	public int Hour
	{
		[Token(Token = "0x6000674")]
		[Address(RVA = "0x1B0F4E0", Offset = "0x1B0DAE0", VA = "0x181B0F4E0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000080")]
	public int Millisecond
	{
		[Token(Token = "0x6000675")]
		[Address(RVA = "0x1B0F680", Offset = "0x1B0DC80", VA = "0x181B0F680")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000081")]
	public int Minute
	{
		[Token(Token = "0x6000676")]
		[Address(RVA = "0x1B0F770", Offset = "0x1B0DD70", VA = "0x181B0F770")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000082")]
	public int Month
	{
		[Token(Token = "0x6000677")]
		[Address(RVA = "0x1B0F860", Offset = "0x1B0DE60", VA = "0x181B0F860")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000083")]
	public TimeSpan Offset
	{
		[Token(Token = "0x6000678")]
		[Address(RVA = "0x1B0F980", Offset = "0x1B0DF80", VA = "0x181B0F980")]
		get
		{
			return default(TimeSpan);
		}
	}

	[Token(Token = "0x17000084")]
	public int Second
	{
		[Token(Token = "0x6000679")]
		[Address(RVA = "0x1B0F9B0", Offset = "0x1B0DFB0", VA = "0x181B0F9B0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000085")]
	public long Ticks
	{
		[Token(Token = "0x600067A")]
		[Address(RVA = "0x1B0FAA0", Offset = "0x1B0E0A0", VA = "0x181B0FAA0")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x17000086")]
	public TimeSpan TimeOfDay
	{
		[Token(Token = "0x600067B")]
		[Address(RVA = "0x1B0FB50", Offset = "0x1B0E150", VA = "0x181B0FB50")]
		get
		{
			return default(TimeSpan);
		}
	}

	[Token(Token = "0x17000087")]
	public int Year
	{
		[Token(Token = "0x600067C")]
		[Address(RVA = "0x1B0FDD0", Offset = "0x1B0E3D0", VA = "0x181B0FDD0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000667")]
	[Address(RVA = "0x1B0ECE0", Offset = "0x1B0D2E0", VA = "0x181B0ECE0")]
	public DateTimeOffset(long ticks, TimeSpan offset)
	{
	}

	[Token(Token = "0x6000668")]
	[Address(RVA = "0x1B0EFB0", Offset = "0x1B0D5B0", VA = "0x181B0EFB0")]
	public DateTimeOffset(DateTime dateTime)
	{
	}

	[Token(Token = "0x6000669")]
	[Address(RVA = "0x1B0EA40", Offset = "0x1B0D040", VA = "0x181B0EA40")]
	public DateTimeOffset(DateTime dateTime, TimeSpan offset)
	{
	}

	[Token(Token = "0x600066A")]
	[Address(RVA = "0x1B0EDF0", Offset = "0x1B0D3F0", VA = "0x181B0EDF0")]
	public DateTimeOffset(int year, int month, int day, int hour, int minute, int second, TimeSpan offset)
	{
	}

	[Token(Token = "0x600066B")]
	[Address(RVA = "0x1B0F100", Offset = "0x1B0D700", VA = "0x181B0F100")]
	public DateTimeOffset(int year, int month, int day, int hour, int minute, int second, int millisecond, TimeSpan offset)
	{
	}

	[Token(Token = "0x600066C")]
	[Address(RVA = "0x1B0EED0", Offset = "0x1B0D4D0", VA = "0x181B0EED0")]
	public DateTimeOffset(int year, int month, int day, int hour, int minute, int second, int millisecond, Calendar calendar, TimeSpan offset)
	{
	}

	[Token(Token = "0x600067D")]
	[Address(RVA = "0x1B0C4F0", Offset = "0x1B0AAF0", VA = "0x181B0C4F0")]
	public DateTimeOffset AddMinutes(double minutes)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x600067E")]
	[Address(RVA = "0x1B0C760", Offset = "0x1B0AD60", VA = "0x181B0C760")]
	public static int Compare(DateTimeOffset first, DateTimeOffset second)
	{
		return default(int);
	}

	[Token(Token = "0x600067F")]
	[Address(RVA = "0x1B0D3B0", Offset = "0x1B0B9B0", VA = "0x181B0D3B0", Slot = "4")]
	private int System_002EIComparable_002ECompareTo(object obj)
	{
		return default(int);
	}

	[Token(Token = "0x6000680")]
	[Address(RVA = "0x1B0C610", Offset = "0x1B0AC10", VA = "0x181B0C610", Slot = "6")]
	public int CompareTo(DateTimeOffset other)
	{
		return default(int);
	}

	[Token(Token = "0x6000681")]
	[Address(RVA = "0x1B0C800", Offset = "0x1B0AE00", VA = "0x181B0C800", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000682")]
	[Address(RVA = "0x1B0C930", Offset = "0x1B0AF30", VA = "0x181B0C930", Slot = "7")]
	public bool Equals(DateTimeOffset other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000683")]
	[Address(RVA = "0x1B0CA00", Offset = "0x1B0B000", VA = "0x181B0CA00")]
	public static DateTimeOffset FromFileTime(long fileTime)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x6000684")]
	[Address(RVA = "0x1B0D520", Offset = "0x1B0BB20", VA = "0x181B0D520", Slot = "9")]
	private void System_002ERuntime_002ESerialization_002EIDeserializationCallback_002EOnDeserialization(object sender)
	{
	}

	[Token(Token = "0x6000685")]
	[Address(RVA = "0x1B0D640", Offset = "0x1B0BC40", VA = "0x181B0D640", Slot = "8")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000686")]
	[Address(RVA = "0x1B0E8B0", Offset = "0x1B0CEB0", VA = "0x181B0E8B0")]
	private DateTimeOffset(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000687")]
	[Address(RVA = "0x1B0CBD0", Offset = "0x1B0B1D0", VA = "0x181B0CBD0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000688")]
	[Address(RVA = "0x1B0D320", Offset = "0x1B0B920", VA = "0x181B0D320")]
	public static DateTimeOffset Parse(string input, IFormatProvider formatProvider)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x6000689")]
	[Address(RVA = "0x1B0D080", Offset = "0x1B0B680", VA = "0x181B0D080")]
	public static DateTimeOffset Parse(string input, IFormatProvider formatProvider, DateTimeStyles styles)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x600068A")]
	[Address(RVA = "0x1B0CC90", Offset = "0x1B0B290", VA = "0x181B0CC90")]
	public static DateTimeOffset ParseExact(string input, string format, IFormatProvider formatProvider, DateTimeStyles styles)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x600068B")]
	[Address(RVA = "0x1B0DB60", Offset = "0x1B0C160", VA = "0x181B0DB60")]
	public long ToUnixTimeSeconds()
	{
		return default(long);
	}

	[Token(Token = "0x600068C")]
	[Address(RVA = "0x1B0DA90", Offset = "0x1B0C090", VA = "0x181B0DA90")]
	public long ToUnixTimeMilliseconds()
	{
		return default(long);
	}

	[Token(Token = "0x600068D")]
	[Address(RVA = "0x1B0D7C0", Offset = "0x1B0BDC0", VA = "0x181B0D7C0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600068E")]
	[Address(RVA = "0x1B0D880", Offset = "0x1B0BE80", VA = "0x181B0D880")]
	public string ToString(string format)
	{
		return null;
	}

	[Token(Token = "0x600068F")]
	[Address(RVA = "0x1B0D950", Offset = "0x1B0BF50", VA = "0x181B0D950")]
	public string ToString(IFormatProvider formatProvider)
	{
		return null;
	}

	[Token(Token = "0x6000690")]
	[Address(RVA = "0x1B0D700", Offset = "0x1B0BD00", VA = "0x181B0D700", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}

	[Token(Token = "0x6000691")]
	[Address(RVA = "0x1B0DC30", Offset = "0x1B0C230", VA = "0x181B0DC30", Slot = "10")]
	public bool TryFormat(Span<char> destination, out int charsWritten, [Optional] ReadOnlySpan<char> format, [Optional] IFormatProvider formatProvider)
	{
		return default(bool);
	}

	[Token(Token = "0x6000692")]
	[Address(RVA = "0x1B0DA20", Offset = "0x1B0C020", VA = "0x181B0DA20")]
	public DateTimeOffset ToUniversalTime()
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x6000693")]
	[Address(RVA = "0x1B0DFB0", Offset = "0x1B0C5B0", VA = "0x181B0DFB0")]
	public static bool TryParse(string input, IFormatProvider formatProvider, DateTimeStyles styles, out DateTimeOffset result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000694")]
	[Address(RVA = "0x1B0DD40", Offset = "0x1B0C340", VA = "0x181B0DD40")]
	public static bool TryParseExact(string input, string format, IFormatProvider formatProvider, DateTimeStyles styles, out DateTimeOffset result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000695")]
	[Address(RVA = "0x1B0E3C0", Offset = "0x1B0C9C0", VA = "0x181B0E3C0")]
	private static short ValidateOffset(TimeSpan offset)
	{
		return default(short);
	}

	[Token(Token = "0x6000696")]
	[Address(RVA = "0x1B0E2A0", Offset = "0x1B0C8A0", VA = "0x181B0E2A0")]
	private static DateTime ValidateDate(DateTime dateTime, TimeSpan offset)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000697")]
	[Address(RVA = "0x1B0E540", Offset = "0x1B0CB40", VA = "0x181B0E540")]
	private static DateTimeStyles ValidateStyles(DateTimeStyles style, string parameterName)
	{
		return default(DateTimeStyles);
	}

	[Token(Token = "0x6000698")]
	[Address(RVA = "0x1B10020", Offset = "0x1B0E620", VA = "0x181B10020")]
	public static implicit operator DateTimeOffset(DateTime dateTime)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x6000699")]
	[Address(RVA = "0x1B10110", Offset = "0x1B0E710", VA = "0x181B10110")]
	public static TimeSpan operator -(DateTimeOffset left, DateTimeOffset right)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x600069A")]
	[Address(RVA = "0x1B0FE80", Offset = "0x1B0E480", VA = "0x181B0FE80")]
	public static bool operator ==(DateTimeOffset left, DateTimeOffset right)
	{
		return default(bool);
	}

	[Token(Token = "0x600069B")]
	[Address(RVA = "0x1B10040", Offset = "0x1B0E640", VA = "0x181B10040")]
	public static bool operator !=(DateTimeOffset left, DateTimeOffset right)
	{
		return default(bool);
	}

	[Token(Token = "0x600069C")]
	[Address(RVA = "0x1B0FF50", Offset = "0x1B0E550", VA = "0x181B0FF50")]
	public static bool operator >=(DateTimeOffset left, DateTimeOffset right)
	{
		return default(bool);
	}
}
