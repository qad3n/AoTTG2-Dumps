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

[Token(Token = "0x200057F")]
internal static class TimeSpanFormat
{
	[Token(Token = "0x2000580")]
	internal enum Pattern
	{
		[Token(Token = "0x40016AF")]
		None,
		[Token(Token = "0x40016B0")]
		Minimum,
		[Token(Token = "0x40016B1")]
		Full
	}

	[Token(Token = "0x2000581")]
	internal struct FormatLiterals
	{
		[Token(Token = "0x40016B2")]
		[FieldOffset(Offset = "0x0")]
		internal string AppCompatLiteral;

		[Token(Token = "0x40016B3")]
		[FieldOffset(Offset = "0x8")]
		internal int dd;

		[Token(Token = "0x40016B4")]
		[FieldOffset(Offset = "0xC")]
		internal int hh;

		[Token(Token = "0x40016B5")]
		[FieldOffset(Offset = "0x10")]
		internal int mm;

		[Token(Token = "0x40016B6")]
		[FieldOffset(Offset = "0x14")]
		internal int ss;

		[Token(Token = "0x40016B7")]
		[FieldOffset(Offset = "0x18")]
		internal int ff;

		[Token(Token = "0x40016B8")]
		[FieldOffset(Offset = "0x20")]
		private string[] _literals;

		[Token(Token = "0x1700060B")]
		internal string Start
		{
			[Token(Token = "0x6002946")]
			[Address(RVA = "0x1AA40B0", Offset = "0x1AA26B0", VA = "0x181AA40B0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700060C")]
		internal string DayHourSep
		{
			[Token(Token = "0x6002947")]
			[Address(RVA = "0x1AA3FC0", Offset = "0x1AA25C0", VA = "0x181AA3FC0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700060D")]
		internal string HourMinuteSep
		{
			[Token(Token = "0x6002948")]
			[Address(RVA = "0x1AA4020", Offset = "0x1AA2620", VA = "0x181AA4020")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700060E")]
		internal string MinuteSecondSep
		{
			[Token(Token = "0x6002949")]
			[Address(RVA = "0x1AA4050", Offset = "0x1AA2650", VA = "0x181AA4050")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700060F")]
		internal string SecondFractionSep
		{
			[Token(Token = "0x600294A")]
			[Address(RVA = "0x1AA4080", Offset = "0x1AA2680", VA = "0x181AA4080")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000610")]
		internal string End
		{
			[Token(Token = "0x600294B")]
			[Address(RVA = "0x1AA3FF0", Offset = "0x1AA25F0", VA = "0x181AA3FF0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600294C")]
		[Address(RVA = "0x1AA3A00", Offset = "0x1AA2000", VA = "0x181AA3A00")]
		internal static FormatLiterals InitInvariant(bool isNegative)
		{
			return default(FormatLiterals);
		}

		[Token(Token = "0x600294D")]
		[Address(RVA = "0x1AA3C10", Offset = "0x1AA2210", VA = "0x181AA3C10")]
		internal void Init(ReadOnlySpan<char> format, bool useInvariantFieldLengths)
		{
		}
	}

	[Token(Token = "0x40016AC")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly FormatLiterals PositiveInvariantFormatLiterals;

	[Token(Token = "0x40016AD")]
	[FieldOffset(Offset = "0x28")]
	internal static readonly FormatLiterals NegativeInvariantFormatLiterals;

	[Token(Token = "0x600293F")]
	[Address(RVA = "0x1A731D0", Offset = "0x1A717D0", VA = "0x181A731D0")]
	private static void AppendNonNegativeInt32(StringBuilder sb, int n, int digits)
	{
	}

	[Token(Token = "0x6002940")]
	[Address(RVA = "0x1A742D0", Offset = "0x1A728D0", VA = "0x181A742D0")]
	internal static string Format(TimeSpan value, string format, IFormatProvider formatProvider)
	{
		return null;
	}

	[Token(Token = "0x6002941")]
	[Address(RVA = "0x1A743A0", Offset = "0x1A729A0", VA = "0x181A743A0")]
	internal static bool TryFormat(TimeSpan value, Span<char> destination, out int charsWritten, ReadOnlySpan<char> format, IFormatProvider formatProvider)
	{
		return default(bool);
	}

	[Token(Token = "0x6002942")]
	[Address(RVA = "0x1A73F80", Offset = "0x1A72580", VA = "0x181A73F80")]
	private static StringBuilder FormatToBuilder(TimeSpan value, ReadOnlySpan<char> format, IFormatProvider formatProvider)
	{
		return null;
	}

	[Token(Token = "0x6002943")]
	[Address(RVA = "0x1A73A70", Offset = "0x1A72070", VA = "0x181A73A70")]
	private static StringBuilder FormatStandard(TimeSpan value, bool isInvariant, ReadOnlySpan<char> format, Pattern pattern)
	{
		return null;
	}

	[Token(Token = "0x6002944")]
	[Address(RVA = "0x1A732A0", Offset = "0x1A718A0", VA = "0x181A732A0")]
	private static StringBuilder FormatCustomized(TimeSpan value, ReadOnlySpan<char> format, DateTimeFormatInfo dtfi, StringBuilder result)
	{
		return null;
	}
}
