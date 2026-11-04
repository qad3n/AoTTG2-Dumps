// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.XsdDuration
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000282")]
internal struct XsdDuration
{
	[Token(Token = "0x2000283")]
	private enum Parts
	{
		[Token(Token = "0x4000DC3")]
		HasNone = 0,
		[Token(Token = "0x4000DC4")]
		HasYears = 1,
		[Token(Token = "0x4000DC5")]
		HasMonths = 2,
		[Token(Token = "0x4000DC6")]
		HasDays = 4,
		[Token(Token = "0x4000DC7")]
		HasHours = 8,
		[Token(Token = "0x4000DC8")]
		HasMinutes = 0x10,
		[Token(Token = "0x4000DC9")]
		HasSeconds = 0x20
	}

	[Token(Token = "0x2000284")]
	public enum DurationType
	{
		[Token(Token = "0x4000DCB")]
		Duration,
		[Token(Token = "0x4000DCC")]
		YearMonthDuration,
		[Token(Token = "0x4000DCD")]
		DayTimeDuration
	}

	[Token(Token = "0x4000DBB")]
	[FieldOffset(Offset = "0x0")]
	private int years;

	[Token(Token = "0x4000DBC")]
	[FieldOffset(Offset = "0x4")]
	private int months;

	[Token(Token = "0x4000DBD")]
	[FieldOffset(Offset = "0x8")]
	private int days;

	[Token(Token = "0x4000DBE")]
	[FieldOffset(Offset = "0xC")]
	private int hours;

	[Token(Token = "0x4000DBF")]
	[FieldOffset(Offset = "0x10")]
	private int minutes;

	[Token(Token = "0x4000DC0")]
	[FieldOffset(Offset = "0x14")]
	private int seconds;

	[Token(Token = "0x4000DC1")]
	[FieldOffset(Offset = "0x18")]
	private uint nanoseconds;

	[Token(Token = "0x170006BC")]
	public bool IsNegative
	{
		[Token(Token = "0x6001A18")]
		[Address(RVA = "0x26C8CD0", Offset = "0x26C72D0", VA = "0x1826C8CD0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170006BD")]
	public int Years
	{
		[Token(Token = "0x6001A19")]
		[Address(RVA = "0x57AED0", Offset = "0x5794D0", VA = "0x18057AED0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006BE")]
	public int Months
	{
		[Token(Token = "0x6001A1A")]
		[Address(RVA = "0x57AEC0", Offset = "0x5794C0", VA = "0x18057AEC0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006BF")]
	public int Days
	{
		[Token(Token = "0x6001A1B")]
		[Address(RVA = "0x57AEE0", Offset = "0x5794E0", VA = "0x18057AEE0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006C0")]
	public int Hours
	{
		[Token(Token = "0x6001A1C")]
		[Address(RVA = "0x57AEF0", Offset = "0x5794F0", VA = "0x18057AEF0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006C1")]
	public int Minutes
	{
		[Token(Token = "0x6001A1D")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006C2")]
	public int Seconds
	{
		[Token(Token = "0x6001A1E")]
		[Address(RVA = "0x8E79A0", Offset = "0x8E5FA0", VA = "0x1808E79A0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006C3")]
	public int Nanoseconds
	{
		[Token(Token = "0x6001A1F")]
		[Address(RVA = "0x26C8CE0", Offset = "0x26C72E0", VA = "0x1826C8CE0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001A13")]
	[Address(RVA = "0x26C8A30", Offset = "0x26C7030", VA = "0x1826C8A30")]
	public XsdDuration(bool isNegative, int years, int months, int days, int hours, int minutes, int seconds, int nanoseconds)
	{
	}

	[Token(Token = "0x6001A14")]
	[Address(RVA = "0x26C8720", Offset = "0x26C6D20", VA = "0x1826C8720")]
	public XsdDuration(TimeSpan timeSpan)
	{
	}

	[Token(Token = "0x6001A15")]
	[Address(RVA = "0x26C8730", Offset = "0x26C6D30", VA = "0x1826C8730")]
	public XsdDuration(TimeSpan timeSpan, DurationType durationType)
	{
	}

	[Token(Token = "0x6001A16")]
	[Address(RVA = "0x26C8CC0", Offset = "0x26C72C0", VA = "0x1826C8CC0")]
	public XsdDuration(string s)
	{
	}

	[Token(Token = "0x6001A17")]
	[Address(RVA = "0x26C8980", Offset = "0x26C6F80", VA = "0x1826C8980")]
	public XsdDuration(string s, DurationType durationType)
	{
	}

	[Token(Token = "0x6001A20")]
	[Address(RVA = "0x26C73B0", Offset = "0x26C59B0", VA = "0x1826C73B0")]
	public TimeSpan ToTimeSpan()
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6001A21")]
	[Address(RVA = "0x26C7400", Offset = "0x26C5A00", VA = "0x1826C7400")]
	public TimeSpan ToTimeSpan(DurationType durationType)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6001A22")]
	[Address(RVA = "0x26C80E0", Offset = "0x26C66E0", VA = "0x1826C80E0")]
	internal Exception TryToTimeSpan(out TimeSpan result)
	{
		return null;
	}

	[Token(Token = "0x6001A23")]
	[Address(RVA = "0x26C80F0", Offset = "0x26C66F0", VA = "0x1826C80F0")]
	internal Exception TryToTimeSpan(DurationType durationType, out TimeSpan result)
	{
		return null;
	}

	[Token(Token = "0x6001A24")]
	[Address(RVA = "0x26C6FB0", Offset = "0x26C55B0", VA = "0x1826C6FB0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6001A25")]
	[Address(RVA = "0x26C6FC0", Offset = "0x26C55C0", VA = "0x1826C6FC0")]
	internal string ToString(DurationType durationType)
	{
		return null;
	}

	[Token(Token = "0x6001A26")]
	[Address(RVA = "0x26C75A0", Offset = "0x26C5BA0", VA = "0x1826C75A0")]
	internal static Exception TryParse(string s, out XsdDuration result)
	{
		return null;
	}

	[Token(Token = "0x6001A27")]
	[Address(RVA = "0x26C75B0", Offset = "0x26C5BB0", VA = "0x1826C75B0")]
	internal static Exception TryParse(string s, DurationType durationType, out XsdDuration result)
	{
		return null;
	}

	[Token(Token = "0x6001A28")]
	[Address(RVA = "0x26C7450", Offset = "0x26C5A50", VA = "0x1826C7450")]
	private static string TryParseDigits(string s, ref int offset, bool eatDigits, out int result, out int numDigits)
	{
		return null;
	}
}
