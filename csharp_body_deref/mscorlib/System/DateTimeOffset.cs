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
[Token(Token = "0x20000A4")]
public readonly struct DateTimeOffset : IComparable, IFormattable, IComparable<DateTimeOffset>, IEquatable<DateTimeOffset>, ISerializable, IDeserializationCallback, System.ISpanFormattable
{
	[Token(Token = "0x400024A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly DateTimeOffset MinValue;

	[Token(Token = "0x400024B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public static readonly DateTimeOffset MaxValue;

	[Token(Token = "0x400024C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public static readonly DateTimeOffset UnixEpoch;

	[Token(Token = "0x400024D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly DateTime _dateTime;

	[Token(Token = "0x400024E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private readonly short _offsetMinutes;

	[Token(Token = "0x17000078")]
	public static DateTimeOffset Now
	{
		[Token(Token = "0x6000644")]
		[Address(RVA = "0x54999E0", Offset = "0x54989E0", VA = "0x54999E0")]
		get
		{
			return default(DateTimeOffset);
		}
	}

	[Token(Token = "0x17000079")]
	public static DateTimeOffset UtcNow
	{
		[Token(Token = "0x6000645")]
		[Address(RVA = "0x5499A40", Offset = "0x5498A40", VA = "0x5499A40")]
		get
		{
			return default(DateTimeOffset);
		}
	}

	[Token(Token = "0x1700007A")]
	public DateTime DateTime
	{
		[Token(Token = "0x6000646")]
		[Address(RVA = "0x5499B30", Offset = "0x5498B30", VA = "0x5499B30")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x1700007B")]
	public DateTime UtcDateTime
	{
		[Token(Token = "0x6000647")]
		[Address(RVA = "0x5499CE0", Offset = "0x5498CE0", VA = "0x5499CE0")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x1700007C")]
	public DateTime LocalDateTime
	{
		[Token(Token = "0x6000648")]
		[Address(RVA = "0x5499DF0", Offset = "0x5498DF0", VA = "0x5499DF0")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x1700007D")]
	private DateTime ClockDateTime
	{
		[Token(Token = "0x6000649")]
		[Address(RVA = "0x5499B90", Offset = "0x5498B90", VA = "0x5499B90")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x1700007E")]
	public int Day
	{
		[Token(Token = "0x600064A")]
		[Address(RVA = "0x5499EF0", Offset = "0x5498EF0", VA = "0x5499EF0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700007F")]
	public int Hour
	{
		[Token(Token = "0x600064B")]
		[Address(RVA = "0x5499FC0", Offset = "0x5498FC0", VA = "0x5499FC0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000080")]
	public int Millisecond
	{
		[Token(Token = "0x600064C")]
		[Address(RVA = "0x549A0B0", Offset = "0x54990B0", VA = "0x549A0B0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000081")]
	public int Minute
	{
		[Token(Token = "0x600064D")]
		[Address(RVA = "0x549A1B0", Offset = "0x54991B0", VA = "0x549A1B0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000082")]
	public int Month
	{
		[Token(Token = "0x600064E")]
		[Address(RVA = "0x549A2B0", Offset = "0x54992B0", VA = "0x549A2B0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000083")]
	public TimeSpan Offset
	{
		[Token(Token = "0x600064F")]
		[Address(RVA = "0x5499EC0", Offset = "0x5498EC0", VA = "0x5499EC0")]
		get
		{
			return default(TimeSpan);
		}
	}

	[Token(Token = "0x17000084")]
	public int Second
	{
		[Token(Token = "0x6000650")]
		[Address(RVA = "0x549A380", Offset = "0x5499380", VA = "0x549A380")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000085")]
	public long Ticks
	{
		[Token(Token = "0x6000651")]
		[Address(RVA = "0x549A480", Offset = "0x5499480", VA = "0x549A480")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x17000086")]
	public TimeSpan TimeOfDay
	{
		[Token(Token = "0x6000652")]
		[Address(RVA = "0x549A550", Offset = "0x5499550", VA = "0x549A550")]
		get
		{
			return default(TimeSpan);
		}
	}

	[Token(Token = "0x17000087")]
	public int Year
	{
		[Token(Token = "0x6000653")]
		[Address(RVA = "0x549A640", Offset = "0x5499640", VA = "0x549A640")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600063E")]
	[Address(RVA = "0x5498F50", Offset = "0x5497F50", VA = "0x5498F50")]
	public DateTimeOffset(long ticks, TimeSpan offset)
	{
	}

	[Token(Token = "0x600063F")]
	[Address(RVA = "0x5499300", Offset = "0x5498300", VA = "0x5499300")]
	public DateTimeOffset(DateTime dateTime)
	{
	}

	[Token(Token = "0x6000640")]
	[Address(RVA = "0x5499490", Offset = "0x5498490", VA = "0x5499490")]
	public DateTimeOffset(DateTime dateTime, TimeSpan offset)
	{
	}

	[Token(Token = "0x6000641")]
	[Address(RVA = "0x5499780", Offset = "0x5498780", VA = "0x5499780")]
	public DateTimeOffset(int year, int month, int day, int hour, int minute, int second, TimeSpan offset)
	{
	}

	[Token(Token = "0x6000642")]
	[Address(RVA = "0x5499860", Offset = "0x5498860", VA = "0x5499860")]
	public DateTimeOffset(int year, int month, int day, int hour, int minute, int second, int millisecond, TimeSpan offset)
	{
	}

	[Token(Token = "0x6000643")]
	[Address(RVA = "0x5499920", Offset = "0x5498920", VA = "0x5499920")]
	public DateTimeOffset(int year, int month, int day, int hour, int minute, int second, int millisecond, Calendar calendar, TimeSpan offset)
	{
	}

	[Token(Token = "0x6000654")]
	[Address(RVA = "0x549A6C0", Offset = "0x54996C0", VA = "0x549A6C0")]
	public DateTimeOffset AddMinutes(double minutes)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x6000655")]
	[Address(RVA = "0x549A800", Offset = "0x5499800", VA = "0x549A800")]
	public DateTimeOffset AddTicks(long ticks)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x6000656")]
	[Address(RVA = "0x549A8E0", Offset = "0x54998E0", VA = "0x549A8E0")]
	public static int Compare(DateTimeOffset first, DateTimeOffset second)
	{
		return default(int);
	}

	[Token(Token = "0x6000657")]
	[Address(RVA = "0x549A9E0", Offset = "0x54999E0", VA = "0x549A9E0", Slot = "4")]
	private int System_002EIComparable_002ECompareTo(object obj)
	{
		return default(int);
	}

	[Token(Token = "0x6000658")]
	[Address(RVA = "0x549ABA0", Offset = "0x5499BA0", VA = "0x549ABA0", Slot = "6")]
	public int CompareTo(DateTimeOffset other)
	{
		return default(int);
	}

	[Token(Token = "0x6000659")]
	[Address(RVA = "0x549ACF0", Offset = "0x5499CF0", VA = "0x549ACF0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600065A")]
	[Address(RVA = "0x549AE10", Offset = "0x5499E10", VA = "0x549AE10", Slot = "7")]
	public bool Equals(DateTimeOffset other)
	{
		return default(bool);
	}

	[Token(Token = "0x600065B")]
	[Address(RVA = "0x549AEF0", Offset = "0x5499EF0", VA = "0x549AEF0")]
	public static DateTimeOffset FromFileTime(long fileTime)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x600065C")]
	[Address(RVA = "0x549AF60", Offset = "0x5499F60", VA = "0x549AF60")]
	public static DateTimeOffset FromUnixTimeSeconds(long seconds)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x600065D")]
	[Address(RVA = "0x549B0B0", Offset = "0x549A0B0", VA = "0x549B0B0", Slot = "9")]
	private void System_002ERuntime_002ESerialization_002EIDeserializationCallback_002EOnDeserialization(object sender)
	{
	}

	[Token(Token = "0x600065E")]
	[Address(RVA = "0x549B220", Offset = "0x549A220", VA = "0x549B220", Slot = "8")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x600065F")]
	[Address(RVA = "0x549B2E0", Offset = "0x549A2E0", VA = "0x549B2E0")]
	private DateTimeOffset(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000660")]
	[Address(RVA = "0x549B460", Offset = "0x549A460", VA = "0x549B460", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000661")]
	[Address(RVA = "0x549B530", Offset = "0x549A530", VA = "0x549B530")]
	public static DateTimeOffset Parse(string input, IFormatProvider formatProvider)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x6000662")]
	[Address(RVA = "0x549B5B0", Offset = "0x549A5B0", VA = "0x549B5B0")]
	public static DateTimeOffset Parse(string input, IFormatProvider formatProvider, DateTimeStyles styles)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x6000663")]
	[Address(RVA = "0x549B9A0", Offset = "0x549A9A0", VA = "0x549B9A0")]
	public static DateTimeOffset ParseExact(string input, string format, IFormatProvider formatProvider, DateTimeStyles styles)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x6000664")]
	[Address(RVA = "0x549BDC0", Offset = "0x549ADC0", VA = "0x549BDC0")]
	public long ToUnixTimeSeconds()
	{
		return default(long);
	}

	[Token(Token = "0x6000665")]
	[Address(RVA = "0x549BEB0", Offset = "0x549AEB0", VA = "0x549BEB0")]
	public long ToUnixTimeMilliseconds()
	{
		return default(long);
	}

	[Token(Token = "0x6000666")]
	[Address(RVA = "0x549BFA0", Offset = "0x549AFA0", VA = "0x549BFA0")]
	public DateTimeOffset ToLocalTime()
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x6000667")]
	[Address(RVA = "0x549C010", Offset = "0x549B010", VA = "0x549C010")]
	internal DateTimeOffset ToLocalTime(bool throwOnOverflow)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x6000668")]
	[Address(RVA = "0x549C0B0", Offset = "0x549B0B0", VA = "0x549C0B0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000669")]
	[Address(RVA = "0x549C400", Offset = "0x549B400", VA = "0x549C400")]
	public string ToString(string format)
	{
		return null;
	}

	[Token(Token = "0x600066A")]
	[Address(RVA = "0x549C4B0", Offset = "0x549B4B0", VA = "0x549C4B0")]
	public string ToString(IFormatProvider formatProvider)
	{
		return null;
	}

	[Token(Token = "0x600066B")]
	[Address(RVA = "0x549C560", Offset = "0x549B560", VA = "0x549C560", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}

	[Token(Token = "0x600066C")]
	[Address(RVA = "0x549C610", Offset = "0x549B610", VA = "0x549C610", Slot = "10")]
	public bool TryFormat(Span<char> destination, out int charsWritten, [Optional] ReadOnlySpan<char> format, [Optional] IFormatProvider formatProvider)
	{
		return default(bool);
	}

	[Token(Token = "0x600066D")]
	[Address(RVA = "0x549C8E0", Offset = "0x549B8E0", VA = "0x549C8E0")]
	public DateTimeOffset ToUniversalTime()
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x600066E")]
	[Address(RVA = "0x549C950", Offset = "0x549B950", VA = "0x549C950")]
	public static bool TryParse(string input, IFormatProvider formatProvider, DateTimeStyles styles, out DateTimeOffset result)
	{
		return default(bool);
	}

	[Token(Token = "0x600066F")]
	[Address(RVA = "0x549CC80", Offset = "0x549BC80", VA = "0x549CC80")]
	public static bool TryParseExact(string input, string format, IFormatProvider formatProvider, DateTimeStyles styles, out DateTimeOffset result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000670")]
	[Address(RVA = "0x5499040", Offset = "0x5498040", VA = "0x5499040")]
	private static short ValidateOffset(TimeSpan offset)
	{
		return default(short);
	}

	[Token(Token = "0x6000671")]
	[Address(RVA = "0x54991A0", Offset = "0x54981A0", VA = "0x54991A0")]
	private static DateTime ValidateDate(DateTime dateTime, TimeSpan offset)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000672")]
	[Address(RVA = "0x549B7E0", Offset = "0x549A7E0", VA = "0x549B7E0")]
	private static DateTimeStyles ValidateStyles(DateTimeStyles style, string parameterName)
	{
		return default(DateTimeStyles);
	}

	[Token(Token = "0x6000673")]
	[Address(RVA = "0x549D040", Offset = "0x549C040", VA = "0x549D040")]
	public static implicit operator DateTimeOffset(DateTime dateTime)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x6000674")]
	[Address(RVA = "0x549D070", Offset = "0x549C070", VA = "0x549D070")]
	public static TimeSpan operator -(DateTimeOffset left, DateTimeOffset right)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000675")]
	[Address(RVA = "0x549D160", Offset = "0x549C160", VA = "0x549D160")]
	public static bool operator ==(DateTimeOffset left, DateTimeOffset right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000676")]
	[Address(RVA = "0x549D250", Offset = "0x549C250", VA = "0x549D250")]
	public static bool operator !=(DateTimeOffset left, DateTimeOffset right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000677")]
	[Address(RVA = "0x549D340", Offset = "0x549C340", VA = "0x549D340")]
	public static bool operator >=(DateTimeOffset left, DateTimeOffset right)
	{
		return default(bool);
	}
}
