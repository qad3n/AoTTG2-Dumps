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

[Token(Token = "0x2000558")]
internal static class TimeSpanFormat
{
	[Token(Token = "0x2000559")]
	internal enum Pattern
	{
		[Token(Token = "0x400160F")]
		None,
		[Token(Token = "0x4001610")]
		Minimum,
		[Token(Token = "0x4001611")]
		Full
	}

	[Token(Token = "0x200055A")]
	internal struct FormatLiterals
	{
		[Token(Token = "0x4001612")]
		[FieldOffset(Offset = "0x0")]
		internal string AppCompatLiteral;

		[Token(Token = "0x4001613")]
		[FieldOffset(Offset = "0x8")]
		internal int dd;

		[Token(Token = "0x4001614")]
		[FieldOffset(Offset = "0xC")]
		internal int hh;

		[Token(Token = "0x4001615")]
		[FieldOffset(Offset = "0x10")]
		internal int mm;

		[Token(Token = "0x4001616")]
		[FieldOffset(Offset = "0x14")]
		internal int ss;

		[Token(Token = "0x4001617")]
		[FieldOffset(Offset = "0x18")]
		internal int ff;

		[Token(Token = "0x4001618")]
		[FieldOffset(Offset = "0x20")]
		private string[] _literals;

		[Token(Token = "0x1700060A")]
		internal string Start
		{
			[Token(Token = "0x6002914")]
			[Address(RVA = "0x5401510", Offset = "0x5400510", VA = "0x5401510")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700060B")]
		internal string DayHourSep
		{
			[Token(Token = "0x6002915")]
			[Address(RVA = "0x5401530", Offset = "0x5400530", VA = "0x5401530")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700060C")]
		internal string HourMinuteSep
		{
			[Token(Token = "0x6002916")]
			[Address(RVA = "0x5401560", Offset = "0x5400560", VA = "0x5401560")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700060D")]
		internal string MinuteSecondSep
		{
			[Token(Token = "0x6002917")]
			[Address(RVA = "0x5401580", Offset = "0x5400580", VA = "0x5401580")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700060E")]
		internal string SecondFractionSep
		{
			[Token(Token = "0x6002918")]
			[Address(RVA = "0x54015B0", Offset = "0x54005B0", VA = "0x54015B0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700060F")]
		internal string End
		{
			[Token(Token = "0x6002919")]
			[Address(RVA = "0x54015D0", Offset = "0x54005D0", VA = "0x54015D0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600291A")]
		[Address(RVA = "0x54016B0", Offset = "0x54006B0", VA = "0x54016B0")]
		internal static FormatLiterals InitInvariant(bool isNegative)
		{
			return default(FormatLiterals);
		}

		[Token(Token = "0x600291B")]
		[Address(RVA = "0x5401080", Offset = "0x5400080", VA = "0x5401080")]
		internal void Init(ReadOnlySpan<char> format, bool useInvariantFieldLengths)
		{
		}
	}

	[Token(Token = "0x400160C")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly FormatLiterals PositiveInvariantFormatLiterals;

	[Token(Token = "0x400160D")]
	[FieldOffset(Offset = "0x28")]
	internal static readonly FormatLiterals NegativeInvariantFormatLiterals;

	[Token(Token = "0x600290D")]
	[Address(RVA = "0x53FFB30", Offset = "0x53FEB30", VA = "0x53FFB30")]
	private static void AppendNonNegativeInt32(StringBuilder sb, int n, int digits)
	{
	}

	[Token(Token = "0x600290E")]
	[Address(RVA = "0x53FFC00", Offset = "0x53FEC00", VA = "0x53FFC00")]
	internal static string Format(TimeSpan value, string format, IFormatProvider formatProvider)
	{
		return null;
	}

	[Token(Token = "0x600290F")]
	[Address(RVA = "0x5400040", Offset = "0x53FF040", VA = "0x5400040")]
	internal static bool TryFormat(TimeSpan value, Span<char> destination, out int charsWritten, ReadOnlySpan<char> format, IFormatProvider formatProvider)
	{
		return default(bool);
	}

	[Token(Token = "0x6002910")]
	[Address(RVA = "0x53FFCD0", Offset = "0x53FECD0", VA = "0x53FFCD0")]
	private static StringBuilder FormatToBuilder(TimeSpan value, ReadOnlySpan<char> format, IFormatProvider formatProvider)
	{
		return null;
	}

	[Token(Token = "0x6002911")]
	[Address(RVA = "0x5400140", Offset = "0x53FF140", VA = "0x5400140")]
	private static StringBuilder FormatStandard(TimeSpan value, bool isInvariant, ReadOnlySpan<char> format, Pattern pattern)
	{
		return null;
	}

	[Token(Token = "0x6002912")]
	[Address(RVA = "0x5400770", Offset = "0x53FF770", VA = "0x5400770")]
	private static StringBuilder FormatCustomized(TimeSpan value, ReadOnlySpan<char> format, DateTimeFormatInfo dtfi, StringBuilder result)
	{
		return null;
	}
}
