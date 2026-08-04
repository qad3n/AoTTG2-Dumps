// ==================== AoTTG2 cross-reference ====================
// Type: System.Globalization.TimeSpanFormat
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Text;
using Il2CppDummyDll;

namespace System.Globalization;

[Token(Token = "0x20005AB")]
internal static class TimeSpanFormat
{
	[Token(Token = "0x20005AC")]
	internal enum Pattern
	{
		[Token(Token = "0x4001860")]
		None,
		[Token(Token = "0x4001861")]
		Minimum,
		[Token(Token = "0x4001862")]
		Full
	}

	[Token(Token = "0x20005AD")]
	internal struct FormatLiterals
	{
		[Token(Token = "0x4001863")]
		[FieldOffset(Offset = "0x0")]
		internal string AppCompatLiteral;

		[Token(Token = "0x4001864")]
		[FieldOffset(Offset = "0x8")]
		internal int dd;

		[Token(Token = "0x4001865")]
		[FieldOffset(Offset = "0xC")]
		internal int hh;

		[Token(Token = "0x4001866")]
		[FieldOffset(Offset = "0x10")]
		internal int mm;

		[Token(Token = "0x4001867")]
		[FieldOffset(Offset = "0x14")]
		internal int ss;

		[Token(Token = "0x4001868")]
		[FieldOffset(Offset = "0x18")]
		internal int ff;

		[Token(Token = "0x4001869")]
		[FieldOffset(Offset = "0x20")]
		private string[] _literals;

		[Token(Token = "0x1700067C")]
		internal string Start
		{
			[Token(Token = "0x6002C28")]
			[Address(RVA = "0x3C4BFD0", Offset = "0x3C4BFD0", VA = "0x3C4BFD0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700067D")]
		internal string DayHourSep
		{
			[Token(Token = "0x6002C29")]
			[Address(RVA = "0x3C4BFF0", Offset = "0x3C4BFF0", VA = "0x3C4BFF0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700067E")]
		internal string HourMinuteSep
		{
			[Token(Token = "0x6002C2A")]
			[Address(RVA = "0x3C4C010", Offset = "0x3C4C010", VA = "0x3C4C010")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700067F")]
		internal string MinuteSecondSep
		{
			[Token(Token = "0x6002C2B")]
			[Address(RVA = "0x3C4C030", Offset = "0x3C4C030", VA = "0x3C4C030")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000680")]
		internal string SecondFractionSep
		{
			[Token(Token = "0x6002C2C")]
			[Address(RVA = "0x3C4C050", Offset = "0x3C4C050", VA = "0x3C4C050")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000681")]
		internal string End
		{
			[Token(Token = "0x6002C2D")]
			[Address(RVA = "0x3C4C070", Offset = "0x3C4C070", VA = "0x3C4C070")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002C2E")]
		[Address(RVA = "0x3C4C150", Offset = "0x3C4C150", VA = "0x3C4C150")]
		internal static FormatLiterals InitInvariant(bool isNegative)
		{
			return default(FormatLiterals);
		}

		[Token(Token = "0x6002C2F")]
		[Address(RVA = "0x3C4BAB0", Offset = "0x3C4BAB0", VA = "0x3C4BAB0")]
		internal void Init(ReadOnlySpan<char> format, bool useInvariantFieldLengths)
		{
		}
	}

	[Token(Token = "0x400185D")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly FormatLiterals PositiveInvariantFormatLiterals;

	[Token(Token = "0x400185E")]
	[FieldOffset(Offset = "0x28")]
	internal static readonly FormatLiterals NegativeInvariantFormatLiterals;

	[Token(Token = "0x6002C21")]
	[Address(RVA = "0x3C4A4E0", Offset = "0x3C4A4E0", VA = "0x3C4A4E0")]
	private static void AppendNonNegativeInt32(StringBuilder sb, int n, int digits)
	{
	}

	[Token(Token = "0x6002C22")]
	[Address(RVA = "0x3C4A5B0", Offset = "0x3C4A5B0", VA = "0x3C4A5B0")]
	internal static string Format(TimeSpan value, string format, IFormatProvider formatProvider)
	{
		return null;
	}

	[Token(Token = "0x6002C23")]
	[Address(RVA = "0x3C4A9E0", Offset = "0x3C4A9E0", VA = "0x3C4A9E0")]
	internal static bool TryFormat(TimeSpan value, Span<char> destination, out int charsWritten, ReadOnlySpan<char> format, IFormatProvider formatProvider)
	{
		return default(bool);
	}

	[Token(Token = "0x6002C24")]
	[Address(RVA = "0x3C4A680", Offset = "0x3C4A680", VA = "0x3C4A680")]
	private static StringBuilder FormatToBuilder(TimeSpan value, ReadOnlySpan<char> format, IFormatProvider formatProvider)
	{
		return null;
	}

	[Token(Token = "0x6002C25")]
	[Address(RVA = "0x3C4AAE0", Offset = "0x3C4AAE0", VA = "0x3C4AAE0")]
	private static StringBuilder FormatStandard(TimeSpan value, bool isInvariant, ReadOnlySpan<char> format, Pattern pattern)
	{
		return null;
	}

	[Token(Token = "0x6002C26")]
	[Address(RVA = "0x3C4B160", Offset = "0x3C4B160", VA = "0x3C4B160")]
	private static StringBuilder FormatCustomized(TimeSpan value, ReadOnlySpan<char> format, DateTimeFormatInfo dtfi, StringBuilder result)
	{
		return null;
	}
}
