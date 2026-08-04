// ==================== AoTTG2 cross-reference ====================
// Type: System.DateTimeOffset
// Update status: unchanged since the previous dump
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
	[Token(Token = "0x4000257")]
	internal const long MaxOffset = 504000000000L;

	[Token(Token = "0x4000258")]
	internal const long MinOffset = -504000000000L;

	[Token(Token = "0x4000259")]
	private const long UnixEpochSeconds = 62135596800L;

	[Token(Token = "0x400025A")]
	private const long UnixEpochMilliseconds = 62135596800000L;

	[Token(Token = "0x400025B")]
	internal const long UnixMinSeconds = -62135596800L;

	[Token(Token = "0x400025C")]
	internal const long UnixMaxSeconds = 253402300799L;

	[Token(Token = "0x400025D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly DateTimeOffset MinValue;

	[Token(Token = "0x400025E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public static readonly DateTimeOffset MaxValue;

	[Token(Token = "0x400025F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public static readonly DateTimeOffset UnixEpoch;

	[Token(Token = "0x4000260")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly DateTime _dateTime;

	[Token(Token = "0x4000261")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private readonly short _offsetMinutes;

	[Token(Token = "0x17000078")]
	public static DateTimeOffset Now
	{
		[Token(Token = "0x600063A")]
		[Address(RVA = "0x3C95C80", Offset = "0x3C95C80", VA = "0x3C95C80")]
		get
		{
			return default(DateTimeOffset);
		}
	}

	[Token(Token = "0x17000079")]
	public static DateTimeOffset UtcNow
	{
		[Token(Token = "0x600063B")]
		[Address(RVA = "0x3C95CE0", Offset = "0x3C95CE0", VA = "0x3C95CE0")]
		get
		{
			return default(DateTimeOffset);
		}
	}

	[Token(Token = "0x1700007A")]
	public DateTime DateTime
	{
		[Token(Token = "0x600063C")]
		[Address(RVA = "0x3C95DD0", Offset = "0x3C95DD0", VA = "0x3C95DD0")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x1700007B")]
	public DateTime UtcDateTime
	{
		[Token(Token = "0x600063D")]
		[Address(RVA = "0x3C95F80", Offset = "0x3C95F80", VA = "0x3C95F80")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x1700007C")]
	public DateTime LocalDateTime
	{
		[Token(Token = "0x600063E")]
		[Address(RVA = "0x3C96090", Offset = "0x3C96090", VA = "0x3C96090")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x1700007D")]
	private DateTime ClockDateTime
	{
		[Token(Token = "0x600063F")]
		[Address(RVA = "0x3C95E30", Offset = "0x3C95E30", VA = "0x3C95E30")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x1700007E")]
	public int Day
	{
		[Token(Token = "0x6000640")]
		[Address(RVA = "0x3C96190", Offset = "0x3C96190", VA = "0x3C96190")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700007F")]
	public int Hour
	{
		[Token(Token = "0x6000641")]
		[Address(RVA = "0x3C96260", Offset = "0x3C96260", VA = "0x3C96260")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000080")]
	public int Millisecond
	{
		[Token(Token = "0x6000642")]
		[Address(RVA = "0x3C96350", Offset = "0x3C96350", VA = "0x3C96350")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000081")]
	public int Minute
	{
		[Token(Token = "0x6000643")]
		[Address(RVA = "0x3C96450", Offset = "0x3C96450", VA = "0x3C96450")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000082")]
	public int Month
	{
		[Token(Token = "0x6000644")]
		[Address(RVA = "0x3C96550", Offset = "0x3C96550", VA = "0x3C96550")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000083")]
	public TimeSpan Offset
	{
		[Token(Token = "0x6000645")]
		[Address(RVA = "0x3C96160", Offset = "0x3C96160", VA = "0x3C96160")]
		get
		{
			return default(TimeSpan);
		}
	}

	[Token(Token = "0x17000084")]
	public int Second
	{
		[Token(Token = "0x6000646")]
		[Address(RVA = "0x3C96620", Offset = "0x3C96620", VA = "0x3C96620")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000085")]
	public long Ticks
	{
		[Token(Token = "0x6000647")]
		[Address(RVA = "0x3C96720", Offset = "0x3C96720", VA = "0x3C96720")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x17000086")]
	public TimeSpan TimeOfDay
	{
		[Token(Token = "0x6000648")]
		[Address(RVA = "0x3C967F0", Offset = "0x3C967F0", VA = "0x3C967F0")]
		get
		{
			return default(TimeSpan);
		}
	}

	[Token(Token = "0x17000087")]
	public int Year
	{
		[Token(Token = "0x6000649")]
		[Address(RVA = "0x3C968E0", Offset = "0x3C968E0", VA = "0x3C968E0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000634")]
	[Address(RVA = "0x3C95220", Offset = "0x3C95220", VA = "0x3C95220")]
	public DateTimeOffset(long ticks, TimeSpan offset)
	{
	}

	[Token(Token = "0x6000635")]
	[Address(RVA = "0x3C955B0", Offset = "0x3C955B0", VA = "0x3C955B0")]
	public DateTimeOffset(DateTime dateTime)
	{
	}

	[Token(Token = "0x6000636")]
	[Address(RVA = "0x3C95740", Offset = "0x3C95740", VA = "0x3C95740")]
	public DateTimeOffset(DateTime dateTime, TimeSpan offset)
	{
	}

	[Token(Token = "0x6000637")]
	[Address(RVA = "0x3C95A20", Offset = "0x3C95A20", VA = "0x3C95A20")]
	public DateTimeOffset(int year, int month, int day, int hour, int minute, int second, TimeSpan offset)
	{
	}

	[Token(Token = "0x6000638")]
	[Address(RVA = "0x3C95B00", Offset = "0x3C95B00", VA = "0x3C95B00")]
	public DateTimeOffset(int year, int month, int day, int hour, int minute, int second, int millisecond, TimeSpan offset)
	{
	}

	[Token(Token = "0x6000639")]
	[Address(RVA = "0x3C95BC0", Offset = "0x3C95BC0", VA = "0x3C95BC0")]
	public DateTimeOffset(int year, int month, int day, int hour, int minute, int second, int millisecond, Calendar calendar, TimeSpan offset)
	{
	}

	[Token(Token = "0x600064A")]
	[Address(RVA = "0x3C96970", Offset = "0x3C96970", VA = "0x3C96970")]
	public DateTimeOffset AddMinutes(double minutes)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x600064B")]
	[Address(RVA = "0x3C96AA0", Offset = "0x3C96AA0", VA = "0x3C96AA0")]
	public DateTimeOffset AddTicks(long ticks)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x600064C")]
	[Address(RVA = "0x3C96B80", Offset = "0x3C96B80", VA = "0x3C96B80")]
	public static int Compare(DateTimeOffset first, DateTimeOffset second)
	{
		return default(int);
	}

	[Token(Token = "0x600064D")]
	[Address(RVA = "0x3C96C80", Offset = "0x3C96C80", VA = "0x3C96C80", Slot = "4")]
	private int System_002EIComparable_002ECompareTo(object obj)
	{
		return default(int);
	}

	[Token(Token = "0x600064E")]
	[Address(RVA = "0x3C96E40", Offset = "0x3C96E40", VA = "0x3C96E40", Slot = "6")]
	public int CompareTo(DateTimeOffset other)
	{
		return default(int);
	}

	[Token(Token = "0x600064F")]
	[Address(RVA = "0x3C96F90", Offset = "0x3C96F90", VA = "0x3C96F90", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000650")]
	[Address(RVA = "0x3C970B0", Offset = "0x3C970B0", VA = "0x3C970B0", Slot = "7")]
	public bool Equals(DateTimeOffset other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000651")]
	[Address(RVA = "0x3C97190", Offset = "0x3C97190", VA = "0x3C97190")]
	public static DateTimeOffset FromFileTime(long fileTime)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x6000652")]
	[Address(RVA = "0x3C97200", Offset = "0x3C97200", VA = "0x3C97200")]
	public static DateTimeOffset FromUnixTimeSeconds(long seconds)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x6000653")]
	[Address(RVA = "0x3C97350", Offset = "0x3C97350", VA = "0x3C97350", Slot = "9")]
	private void System_002ERuntime_002ESerialization_002EIDeserializationCallback_002EOnDeserialization(object sender)
	{
	}

	[Token(Token = "0x6000654")]
	[Address(RVA = "0x3C974F0", Offset = "0x3C974F0", VA = "0x3C974F0", Slot = "8")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000655")]
	[Address(RVA = "0x3C975B0", Offset = "0x3C975B0", VA = "0x3C975B0")]
	private DateTimeOffset(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000656")]
	[Address(RVA = "0x3C97730", Offset = "0x3C97730", VA = "0x3C97730", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000657")]
	[Address(RVA = "0x3C97800", Offset = "0x3C97800", VA = "0x3C97800")]
	public static DateTimeOffset Parse(string input, IFormatProvider formatProvider)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x6000658")]
	[Address(RVA = "0x3C97880", Offset = "0x3C97880", VA = "0x3C97880")]
	public static DateTimeOffset Parse(string input, IFormatProvider formatProvider, DateTimeStyles styles)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x6000659")]
	[Address(RVA = "0x3C97C70", Offset = "0x3C97C70", VA = "0x3C97C70")]
	public static DateTimeOffset ParseExact(string input, string format, IFormatProvider formatProvider, DateTimeStyles styles)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x600065A")]
	[Address(RVA = "0x3C980A0", Offset = "0x3C980A0", VA = "0x3C980A0")]
	public long ToUnixTimeSeconds()
	{
		return default(long);
	}

	[Token(Token = "0x600065B")]
	[Address(RVA = "0x3C98190", Offset = "0x3C98190", VA = "0x3C98190")]
	public long ToUnixTimeMilliseconds()
	{
		return default(long);
	}

	[Token(Token = "0x600065C")]
	[Address(RVA = "0x3C98280", Offset = "0x3C98280", VA = "0x3C98280")]
	public DateTimeOffset ToLocalTime()
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x600065D")]
	[Address(RVA = "0x3C982E0", Offset = "0x3C982E0", VA = "0x3C982E0")]
	internal DateTimeOffset ToLocalTime(bool throwOnOverflow)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x600065E")]
	[Address(RVA = "0x3C98390", Offset = "0x3C98390", VA = "0x3C98390", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600065F")]
	[Address(RVA = "0x3C986D0", Offset = "0x3C986D0", VA = "0x3C986D0")]
	public string ToString(string format)
	{
		return null;
	}

	[Token(Token = "0x6000660")]
	[Address(RVA = "0x3C98780", Offset = "0x3C98780", VA = "0x3C98780")]
	public string ToString(IFormatProvider formatProvider)
	{
		return null;
	}

	[Token(Token = "0x6000661")]
	[Address(RVA = "0x3C98830", Offset = "0x3C98830", VA = "0x3C98830", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}

	[Token(Token = "0x6000662")]
	[Address(RVA = "0x3C988E0", Offset = "0x3C988E0", VA = "0x3C988E0", Slot = "10")]
	public bool TryFormat(Span<char> destination, out int charsWritten, [Optional] ReadOnlySpan<char> format, [Optional] IFormatProvider formatProvider)
	{
		return default(bool);
	}

	[Token(Token = "0x6000663")]
	[Address(RVA = "0x3C98BB0", Offset = "0x3C98BB0", VA = "0x3C98BB0")]
	public DateTimeOffset ToUniversalTime()
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x6000664")]
	[Address(RVA = "0x3C98C20", Offset = "0x3C98C20", VA = "0x3C98C20")]
	public static bool TryParse(string input, IFormatProvider formatProvider, DateTimeStyles styles, out DateTimeOffset result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000665")]
	[Address(RVA = "0x3C98F80", Offset = "0x3C98F80", VA = "0x3C98F80")]
	public static bool TryParseExact(string input, string format, IFormatProvider formatProvider, DateTimeStyles styles, out DateTimeOffset result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000666")]
	[Address(RVA = "0x3C95310", Offset = "0x3C95310", VA = "0x3C95310")]
	private static short ValidateOffset(TimeSpan offset)
	{
		return default(short);
	}

	[Token(Token = "0x6000667")]
	[Address(RVA = "0x3C95450", Offset = "0x3C95450", VA = "0x3C95450")]
	private static DateTime ValidateDate(DateTime dateTime, TimeSpan offset)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000668")]
	[Address(RVA = "0x3C97AB0", Offset = "0x3C97AB0", VA = "0x3C97AB0")]
	private static DateTimeStyles ValidateStyles(DateTimeStyles style, string parameterName)
	{
		return default(DateTimeStyles);
	}

	[Token(Token = "0x6000669")]
	[Address(RVA = "0x3C99380", Offset = "0x3C99380", VA = "0x3C99380")]
	public static implicit operator DateTimeOffset(DateTime dateTime)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x600066A")]
	[Address(RVA = "0x3C993B0", Offset = "0x3C993B0", VA = "0x3C993B0")]
	public static TimeSpan operator -(DateTimeOffset left, DateTimeOffset right)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x600066B")]
	[Address(RVA = "0x3C994A0", Offset = "0x3C994A0", VA = "0x3C994A0")]
	public static bool operator ==(DateTimeOffset left, DateTimeOffset right)
	{
		return default(bool);
	}

	[Token(Token = "0x600066C")]
	[Address(RVA = "0x3C99590", Offset = "0x3C99590", VA = "0x3C99590")]
	public static bool operator !=(DateTimeOffset left, DateTimeOffset right)
	{
		return default(bool);
	}

	[Token(Token = "0x600066D")]
	[Address(RVA = "0x3C99680", Offset = "0x3C99680", VA = "0x3C99680")]
	public static bool operator >=(DateTimeOffset left, DateTimeOffset right)
	{
		return default(bool);
	}
}
