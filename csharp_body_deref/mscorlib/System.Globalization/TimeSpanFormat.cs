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
			[Address(RVA = "0x4F664B0", Offset = "0x4F664B0", VA = "0x4F664B0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700067D")]
		internal string DayHourSep
		{
			[Token(Token = "0x6002C29")]
			[Address(RVA = "0x4F664D0", Offset = "0x4F664D0", VA = "0x4F664D0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700067E")]
		internal string HourMinuteSep
		{
			[Token(Token = "0x6002C2A")]
			[Address(RVA = "0x4F664F0", Offset = "0x4F664F0", VA = "0x4F664F0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700067F")]
		internal string MinuteSecondSep
		{
			[Token(Token = "0x6002C2B")]
			[Address(RVA = "0x4F66510", Offset = "0x4F66510", VA = "0x4F66510")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000680")]
		internal string SecondFractionSep
		{
			[Token(Token = "0x6002C2C")]
			[Address(RVA = "0x4F66530", Offset = "0x4F66530", VA = "0x4F66530")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000681")]
		internal string End
		{
			[Token(Token = "0x6002C2D")]
			[Address(RVA = "0x4F66550", Offset = "0x4F66550", VA = "0x4F66550")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002C2E")]
		[Address(RVA = "0x4F66630", Offset = "0x4F66630", VA = "0x4F66630")]
		internal static FormatLiterals InitInvariant(bool isNegative)
		{
			return default(FormatLiterals);
		}

		[Token(Token = "0x6002C2F")]
		[Address(RVA = "0x4F65F90", Offset = "0x4F65F90", VA = "0x4F65F90")]
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
	[Address(RVA = "0x4F649C0", Offset = "0x4F649C0", VA = "0x4F649C0")]
	private static void AppendNonNegativeInt32(StringBuilder sb, int n, int digits)
	{
	}

	[Token(Token = "0x6002C22")]
	[Address(RVA = "0x4F64A90", Offset = "0x4F64A90", VA = "0x4F64A90")]
	internal static string Format(TimeSpan value, string format, IFormatProvider formatProvider)
	{
		return null;
	}

	[Token(Token = "0x6002C23")]
	[Address(RVA = "0x4F64EC0", Offset = "0x4F64EC0", VA = "0x4F64EC0")]
	internal static bool TryFormat(TimeSpan value, Span<char> destination, out int charsWritten, ReadOnlySpan<char> format, IFormatProvider formatProvider)
	{
		return default(bool);
	}

	[Token(Token = "0x6002C24")]
	[Address(RVA = "0x4F64B60", Offset = "0x4F64B60", VA = "0x4F64B60")]
	private static StringBuilder FormatToBuilder(TimeSpan value, ReadOnlySpan<char> format, IFormatProvider formatProvider)
	{
		return null;
	}

	[Token(Token = "0x6002C25")]
	[Address(RVA = "0x4F64FC0", Offset = "0x4F64FC0", VA = "0x4F64FC0")]
	private static StringBuilder FormatStandard(TimeSpan value, bool isInvariant, ReadOnlySpan<char> format, Pattern pattern)
	{
		return null;
	}

	[Token(Token = "0x6002C26")]
	[Address(RVA = "0x4F65640", Offset = "0x4F65640", VA = "0x4F65640")]
	private static StringBuilder FormatCustomized(TimeSpan value, ReadOnlySpan<char> format, DateTimeFormatInfo dtfi, StringBuilder result)
	{
		return null;
	}
}
