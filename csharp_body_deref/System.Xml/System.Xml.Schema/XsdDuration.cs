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
		[Address(RVA = "0x44330C0", Offset = "0x44330C0", VA = "0x44330C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170006BD")]
	public int Years
	{
		[Token(Token = "0x6001A19")]
		[Address(RVA = "0x44330D0", Offset = "0x44330D0", VA = "0x44330D0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006BE")]
	public int Months
	{
		[Token(Token = "0x6001A1A")]
		[Address(RVA = "0x44330E0", Offset = "0x44330E0", VA = "0x44330E0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006BF")]
	public int Days
	{
		[Token(Token = "0x6001A1B")]
		[Address(RVA = "0x44330F0", Offset = "0x44330F0", VA = "0x44330F0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006C0")]
	public int Hours
	{
		[Token(Token = "0x6001A1C")]
		[Address(RVA = "0x4433100", Offset = "0x4433100", VA = "0x4433100")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006C1")]
	public int Minutes
	{
		[Token(Token = "0x6001A1D")]
		[Address(RVA = "0x4433110", Offset = "0x4433110", VA = "0x4433110")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006C2")]
	public int Seconds
	{
		[Token(Token = "0x6001A1E")]
		[Address(RVA = "0x4433120", Offset = "0x4433120", VA = "0x4433120")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006C3")]
	public int Nanoseconds
	{
		[Token(Token = "0x6001A1F")]
		[Address(RVA = "0x44330B0", Offset = "0x44330B0", VA = "0x44330B0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001A13")]
	[Address(RVA = "0x44322B0", Offset = "0x44322B0", VA = "0x44322B0")]
	public XsdDuration(bool isNegative, int years, int months, int days, int hours, int minutes, int seconds, int nanoseconds)
	{
	}

	[Token(Token = "0x6001A14")]
	[Address(RVA = "0x4432430", Offset = "0x4432430", VA = "0x4432430")]
	public XsdDuration(TimeSpan timeSpan)
	{
	}

	[Token(Token = "0x6001A15")]
	[Address(RVA = "0x4432550", Offset = "0x4432550", VA = "0x4432550")]
	public XsdDuration(TimeSpan timeSpan, DurationType durationType)
	{
	}

	[Token(Token = "0x6001A16")]
	[Address(RVA = "0x4432720", Offset = "0x4432720", VA = "0x4432720")]
	public XsdDuration(string s)
	{
	}

	[Token(Token = "0x6001A17")]
	[Address(RVA = "0x44327A0", Offset = "0x44327A0", VA = "0x44327A0")]
	public XsdDuration(string s, DurationType durationType)
	{
	}

	[Token(Token = "0x6001A20")]
	[Address(RVA = "0x4433130", Offset = "0x4433130", VA = "0x4433130")]
	public TimeSpan ToTimeSpan()
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6001A21")]
	[Address(RVA = "0x4433180", Offset = "0x4433180", VA = "0x4433180")]
	public TimeSpan ToTimeSpan(DurationType durationType)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6001A22")]
	[Address(RVA = "0x4433830", Offset = "0x4433830", VA = "0x4433830")]
	internal Exception TryToTimeSpan(out TimeSpan result)
	{
		return null;
	}

	[Token(Token = "0x6001A23")]
	[Address(RVA = "0x44331D0", Offset = "0x44331D0", VA = "0x44331D0")]
	internal Exception TryToTimeSpan(DurationType durationType, out TimeSpan result)
	{
		return null;
	}

	[Token(Token = "0x6001A24")]
	[Address(RVA = "0x4433840", Offset = "0x4433840", VA = "0x4433840", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6001A25")]
	[Address(RVA = "0x4433850", Offset = "0x4433850", VA = "0x4433850")]
	internal string ToString(DurationType durationType)
	{
		return null;
	}

	[Token(Token = "0x6001A26")]
	[Address(RVA = "0x4433C50", Offset = "0x4433C50", VA = "0x4433C50")]
	internal static Exception TryParse(string s, out XsdDuration result)
	{
		return null;
	}

	[Token(Token = "0x6001A27")]
	[Address(RVA = "0x4432820", Offset = "0x4432820", VA = "0x4432820")]
	internal static Exception TryParse(string s, DurationType durationType, out XsdDuration result)
	{
		return null;
	}

	[Token(Token = "0x6001A28")]
	[Address(RVA = "0x4433C60", Offset = "0x4433C60", VA = "0x4433C60")]
	private static string TryParseDigits(string s, ref int offset, bool eatDigits, out int result, out int numDigits)
	{
		return null;
	}
}
