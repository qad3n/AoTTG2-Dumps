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
		[Address(RVA = "0x4770820", Offset = "0x4770820", VA = "0x4770820")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170006BD")]
	public int Years
	{
		[Token(Token = "0x6001A19")]
		[Address(RVA = "0x4770830", Offset = "0x4770830", VA = "0x4770830")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006BE")]
	public int Months
	{
		[Token(Token = "0x6001A1A")]
		[Address(RVA = "0x4770840", Offset = "0x4770840", VA = "0x4770840")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006BF")]
	public int Days
	{
		[Token(Token = "0x6001A1B")]
		[Address(RVA = "0x4770850", Offset = "0x4770850", VA = "0x4770850")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006C0")]
	public int Hours
	{
		[Token(Token = "0x6001A1C")]
		[Address(RVA = "0x4770860", Offset = "0x4770860", VA = "0x4770860")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006C1")]
	public int Minutes
	{
		[Token(Token = "0x6001A1D")]
		[Address(RVA = "0x4770870", Offset = "0x4770870", VA = "0x4770870")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006C2")]
	public int Seconds
	{
		[Token(Token = "0x6001A1E")]
		[Address(RVA = "0x4770880", Offset = "0x4770880", VA = "0x4770880")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006C3")]
	public int Nanoseconds
	{
		[Token(Token = "0x6001A1F")]
		[Address(RVA = "0x4770810", Offset = "0x4770810", VA = "0x4770810")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001A13")]
	[Address(RVA = "0x476FA10", Offset = "0x476FA10", VA = "0x476FA10")]
	public XsdDuration(bool isNegative, int years, int months, int days, int hours, int minutes, int seconds, int nanoseconds)
	{
	}

	[Token(Token = "0x6001A14")]
	[Address(RVA = "0x476FB90", Offset = "0x476FB90", VA = "0x476FB90")]
	public XsdDuration(TimeSpan timeSpan)
	{
	}

	[Token(Token = "0x6001A15")]
	[Address(RVA = "0x476FCB0", Offset = "0x476FCB0", VA = "0x476FCB0")]
	public XsdDuration(TimeSpan timeSpan, DurationType durationType)
	{
	}

	[Token(Token = "0x6001A16")]
	[Address(RVA = "0x476FE80", Offset = "0x476FE80", VA = "0x476FE80")]
	public XsdDuration(string s)
	{
	}

	[Token(Token = "0x6001A17")]
	[Address(RVA = "0x476FF00", Offset = "0x476FF00", VA = "0x476FF00")]
	public XsdDuration(string s, DurationType durationType)
	{
	}

	[Token(Token = "0x6001A20")]
	[Address(RVA = "0x4770890", Offset = "0x4770890", VA = "0x4770890")]
	public TimeSpan ToTimeSpan()
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6001A21")]
	[Address(RVA = "0x47708E0", Offset = "0x47708E0", VA = "0x47708E0")]
	public TimeSpan ToTimeSpan(DurationType durationType)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6001A22")]
	[Address(RVA = "0x4770F90", Offset = "0x4770F90", VA = "0x4770F90")]
	internal Exception TryToTimeSpan(out TimeSpan result)
	{
		return null;
	}

	[Token(Token = "0x6001A23")]
	[Address(RVA = "0x4770930", Offset = "0x4770930", VA = "0x4770930")]
	internal Exception TryToTimeSpan(DurationType durationType, out TimeSpan result)
	{
		return null;
	}

	[Token(Token = "0x6001A24")]
	[Address(RVA = "0x4770FA0", Offset = "0x4770FA0", VA = "0x4770FA0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6001A25")]
	[Address(RVA = "0x4770FB0", Offset = "0x4770FB0", VA = "0x4770FB0")]
	internal string ToString(DurationType durationType)
	{
		return null;
	}

	[Token(Token = "0x6001A26")]
	[Address(RVA = "0x47713B0", Offset = "0x47713B0", VA = "0x47713B0")]
	internal static Exception TryParse(string s, out XsdDuration result)
	{
		return null;
	}

	[Token(Token = "0x6001A27")]
	[Address(RVA = "0x476FF80", Offset = "0x476FF80", VA = "0x476FF80")]
	internal static Exception TryParse(string s, DurationType durationType, out XsdDuration result)
	{
		return null;
	}

	[Token(Token = "0x6001A28")]
	[Address(RVA = "0x47713C0", Offset = "0x47713C0", VA = "0x47713C0")]
	private static string TryParseDigits(string s, ref int offset, bool eatDigits, out int result, out int numDigits)
	{
		return null;
	}
}
