// ==================== AoTTG2 cross-reference ====================
// Type: System.Globalization.TimeSpanParse
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using System.Text;
using Il2CppDummyDll;

namespace System.Globalization;

[Token(Token = "0x200055B")]
internal static class TimeSpanParse
{
	[Token(Token = "0x200055C")]
	private enum ParseFailureKind : byte
	{
		[Token(Token = "0x400161A")]
		None,
		[Token(Token = "0x400161B")]
		ArgumentNull,
		[Token(Token = "0x400161C")]
		Format,
		[Token(Token = "0x400161D")]
		FormatWithParameter,
		[Token(Token = "0x400161E")]
		Overflow
	}

	[Token(Token = "0x200055D")]
	[Flags]
	private enum TimeSpanStandardStyles : byte
	{
		[Token(Token = "0x4001620")]
		None = 0,
		[Token(Token = "0x4001621")]
		Invariant = 1,
		[Token(Token = "0x4001622")]
		Localized = 2,
		[Token(Token = "0x4001623")]
		RequireFull = 4,
		[Token(Token = "0x4001624")]
		Any = Invariant | Localized
	}

	[Token(Token = "0x200055E")]
	private enum TTT : byte
	{
		[Token(Token = "0x4001626")]
		None,
		[Token(Token = "0x4001627")]
		End,
		[Token(Token = "0x4001628")]
		Num,
		[Token(Token = "0x4001629")]
		Sep,
		[Token(Token = "0x400162A")]
		NumOverflow
	}

	[Token(Token = "0x200055F")]
	private ref struct TimeSpanToken
	{
		[Token(Token = "0x400162B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal TTT _ttt;

		[Token(Token = "0x400162C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
		internal int _num;

		[Token(Token = "0x400162D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		internal int _zeroes;

		[Token(Token = "0x400162E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		internal ReadOnlySpan<char> _sep;

		[Token(Token = "0x600292E")]
		[Address(RVA = "0x5408FF0", Offset = "0x5407FF0", VA = "0x5408FF0")]
		public TimeSpanToken(TTT type)
		{
		}

		[Token(Token = "0x600292F")]
		[Address(RVA = "0x54066E0", Offset = "0x54056E0", VA = "0x54066E0")]
		public TimeSpanToken(int number)
		{
		}

		[Token(Token = "0x6002930")]
		[Address(RVA = "0x5408FC0", Offset = "0x5407FC0", VA = "0x5408FC0")]
		public TimeSpanToken(int number, int leadingZeroes)
		{
		}

		[Token(Token = "0x6002931")]
		[Address(RVA = "0x5409010", Offset = "0x5408010", VA = "0x5409010")]
		public TimeSpanToken(TTT type, int number, int leadingZeroes, ReadOnlySpan<char> separator)
		{
		}

		[Token(Token = "0x6002932")]
		[Address(RVA = "0x5401AF0", Offset = "0x5400AF0", VA = "0x5401AF0")]
		public bool IsInvalidFraction()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x2000560")]
	private ref struct TimeSpanTokenizer
	{
		[Token(Token = "0x400162F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private ReadOnlySpan<char> _value;

		[Token(Token = "0x4001630")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _pos;

		[Token(Token = "0x17000610")]
		internal bool EOL
		{
			[Token(Token = "0x6002936")]
			[Address(RVA = "0x5408F90", Offset = "0x5407F90", VA = "0x5408F90")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000611")]
		internal char NextChar
		{
			[Token(Token = "0x6002938")]
			[Address(RVA = "0x5408F50", Offset = "0x5407F50", VA = "0x5408F50")]
			get
			{
				return default(char);
			}
		}

		[Token(Token = "0x6002933")]
		[Address(RVA = "0x5402070", Offset = "0x5401070", VA = "0x5402070")]
		internal TimeSpanTokenizer(ReadOnlySpan<char> input)
		{
		}

		[Token(Token = "0x6002934")]
		[Address(RVA = "0x5408CF0", Offset = "0x5407CF0", VA = "0x5408CF0")]
		internal TimeSpanTokenizer(ReadOnlySpan<char> input, int startPosition)
		{
		}

		[Token(Token = "0x6002935")]
		[Address(RVA = "0x5402130", Offset = "0x5401130", VA = "0x5402130")]
		internal TimeSpanToken GetNextToken()
		{
			return default(TimeSpanToken);
		}

		[Token(Token = "0x6002937")]
		[Address(RVA = "0x5408FE0", Offset = "0x5407FE0", VA = "0x5408FE0")]
		internal void BackOne()
		{
		}
	}

	[Token(Token = "0x2000561")]
	private ref struct TimeSpanRawInfo
	{
		[Token(Token = "0x4001631")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal TTT _lastSeenTTT;

		[Token(Token = "0x4001632")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
		internal int _tokenCount;

		[Token(Token = "0x4001633")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		internal int _sepCount;

		[Token(Token = "0x4001634")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
		internal int _numCount;

		[Token(Token = "0x4001635")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private System.Globalization.TimeSpanFormat.FormatLiterals _posLoc;

		[Token(Token = "0x4001636")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private System.Globalization.TimeSpanFormat.FormatLiterals _negLoc;

		[Token(Token = "0x4001637")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		private bool _posLocInit;

		[Token(Token = "0x4001638")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x61")]
		private bool _negLocInit;

		[Token(Token = "0x4001639")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		private string _fullPosPattern;

		[Token(Token = "0x400163A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
		private string _fullNegPattern;

		[Token(Token = "0x400163B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
		internal TimeSpanToken _numbers0;

		[Token(Token = "0x400163C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
		internal TimeSpanToken _numbers1;

		[Token(Token = "0x400163D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
		internal TimeSpanToken _numbers2;

		[Token(Token = "0x400163E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
		internal TimeSpanToken _numbers3;

		[Token(Token = "0x400163F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
		internal TimeSpanToken _numbers4;

		[Token(Token = "0x4001640")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x118")]
		internal ReadOnlySpan<char> _literals0;

		[Token(Token = "0x4001641")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x128")]
		internal ReadOnlySpan<char> _literals1;

		[Token(Token = "0x4001642")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x138")]
		internal ReadOnlySpan<char> _literals2;

		[Token(Token = "0x4001643")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x148")]
		internal ReadOnlySpan<char> _literals3;

		[Token(Token = "0x4001644")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x158")]
		internal ReadOnlySpan<char> _literals4;

		[Token(Token = "0x4001645")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x168")]
		internal ReadOnlySpan<char> _literals5;

		[Token(Token = "0x17000612")]
		internal System.Globalization.TimeSpanFormat.FormatLiterals PositiveInvariant
		{
			[Token(Token = "0x6002939")]
			[Address(RVA = "0x5409030", Offset = "0x5408030", VA = "0x5409030")]
			get
			{
				return default(System.Globalization.TimeSpanFormat.FormatLiterals);
			}
		}

		[Token(Token = "0x17000613")]
		internal System.Globalization.TimeSpanFormat.FormatLiterals NegativeInvariant
		{
			[Token(Token = "0x600293A")]
			[Address(RVA = "0x54090A0", Offset = "0x54080A0", VA = "0x54090A0")]
			get
			{
				return default(System.Globalization.TimeSpanFormat.FormatLiterals);
			}
		}

		[Token(Token = "0x17000614")]
		internal System.Globalization.TimeSpanFormat.FormatLiterals PositiveLocalized
		{
			[Token(Token = "0x600293B")]
			[Address(RVA = "0x5406580", Offset = "0x5405580", VA = "0x5406580")]
			get
			{
				return default(System.Globalization.TimeSpanFormat.FormatLiterals);
			}
		}

		[Token(Token = "0x17000615")]
		internal System.Globalization.TimeSpanFormat.FormatLiterals NegativeLocalized
		{
			[Token(Token = "0x600293C")]
			[Address(RVA = "0x5406630", Offset = "0x5405630", VA = "0x5406630")]
			get
			{
				return default(System.Globalization.TimeSpanFormat.FormatLiterals);
			}
		}

		[Token(Token = "0x600293D")]
		[Address(RVA = "0x5406DE0", Offset = "0x5405DE0", VA = "0x5406DE0")]
		internal bool FullAppCompatMatch(System.Globalization.TimeSpanFormat.FormatLiterals pattern)
		{
			return default(bool);
		}

		[Token(Token = "0x600293E")]
		[Address(RVA = "0x54077D0", Offset = "0x54067D0", VA = "0x54077D0")]
		internal bool PartialAppCompatMatch(System.Globalization.TimeSpanFormat.FormatLiterals pattern)
		{
			return default(bool);
		}

		[Token(Token = "0x600293F")]
		[Address(RVA = "0x54061E0", Offset = "0x54051E0", VA = "0x54061E0")]
		internal bool FullMatch(System.Globalization.TimeSpanFormat.FormatLiterals pattern)
		{
			return default(bool);
		}

		[Token(Token = "0x6002940")]
		[Address(RVA = "0x5407D90", Offset = "0x5406D90", VA = "0x5407D90")]
		internal bool FullDMatch(System.Globalization.TimeSpanFormat.FormatLiterals pattern)
		{
			return default(bool);
		}

		[Token(Token = "0x6002941")]
		[Address(RVA = "0x5407B00", Offset = "0x5406B00", VA = "0x5407B00")]
		internal bool FullHMMatch(System.Globalization.TimeSpanFormat.FormatLiterals pattern)
		{
			return default(bool);
		}

		[Token(Token = "0x6002942")]
		[Address(RVA = "0x5407490", Offset = "0x5406490", VA = "0x5407490")]
		internal bool FullDHMMatch(System.Globalization.TimeSpanFormat.FormatLiterals pattern)
		{
			return default(bool);
		}

		[Token(Token = "0x6002943")]
		[Address(RVA = "0x5407150", Offset = "0x5406150", VA = "0x5407150")]
		internal bool FullHMSMatch(System.Globalization.TimeSpanFormat.FormatLiterals pattern)
		{
			return default(bool);
		}

		[Token(Token = "0x6002944")]
		[Address(RVA = "0x5406A70", Offset = "0x5405A70", VA = "0x5406A70")]
		internal bool FullDHMSMatch(System.Globalization.TimeSpanFormat.FormatLiterals pattern)
		{
			return default(bool);
		}

		[Token(Token = "0x6002945")]
		[Address(RVA = "0x5406700", Offset = "0x5405700", VA = "0x5406700")]
		internal bool FullHMSFMatch(System.Globalization.TimeSpanFormat.FormatLiterals pattern)
		{
			return default(bool);
		}

		[Token(Token = "0x6002946")]
		[Address(RVA = "0x5402080", Offset = "0x5401080", VA = "0x5402080")]
		internal void Init(DateTimeFormatInfo dtfi)
		{
		}

		[Token(Token = "0x6002947")]
		[Address(RVA = "0x5402390", Offset = "0x5401390", VA = "0x5402390")]
		internal bool ProcessToken(ref TimeSpanToken tok, ref TimeSpanResult result)
		{
			return default(bool);
		}

		[Token(Token = "0x6002948")]
		[Address(RVA = "0x5409110", Offset = "0x5408110", VA = "0x5409110")]
		private bool AddSep(ReadOnlySpan<char> sep, ref TimeSpanResult result)
		{
			return default(bool);
		}

		[Token(Token = "0x6002949")]
		[Address(RVA = "0x5409210", Offset = "0x5408210", VA = "0x5409210")]
		private bool AddNum(TimeSpanToken num, ref TimeSpanResult result)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x2000562")]
	private struct TimeSpanResult
	{
		[Token(Token = "0x4001646")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal TimeSpan parsedTimeSpan;

		[Token(Token = "0x4001647")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		private readonly bool _throwOnFailure;

		[Token(Token = "0x600294A")]
		[Address(RVA = "0x5428C60", Offset = "0x5427C60", VA = "0x5428C60")]
		internal TimeSpanResult(bool throwOnFailure)
		{
		}

		[Token(Token = "0x600294B")]
		[Address(RVA = "0x5428C70", Offset = "0x5427C70", VA = "0x5428C70")]
		internal bool SetFailure(ParseFailureKind kind, string resourceKey, [Optional] object messageArgument, [Optional] string argumentName)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x2000563")]
	private ref struct StringParser
	{
		[Token(Token = "0x4001648")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private ReadOnlySpan<char> _str;

		[Token(Token = "0x4001649")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private char _ch;

		[Token(Token = "0x400164A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
		private int _pos;

		[Token(Token = "0x400164B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private int _len;

		[Token(Token = "0x600294C")]
		[Address(RVA = "0x5428D90", Offset = "0x5427D90", VA = "0x5428D90")]
		internal void NextChar()
		{
		}

		[Token(Token = "0x600294D")]
		[Address(RVA = "0x5428DD0", Offset = "0x5427DD0", VA = "0x5428DD0")]
		internal char NextNonDigit()
		{
			return default(char);
		}

		[Token(Token = "0x600294E")]
		[Address(RVA = "0x5428E20", Offset = "0x5427E20", VA = "0x5428E20")]
		internal bool TryParse(ReadOnlySpan<char> input, ref TimeSpanResult result)
		{
			return default(bool);
		}

		[Token(Token = "0x600294F")]
		[Address(RVA = "0x5429570", Offset = "0x5428570", VA = "0x5429570")]
		internal bool ParseInt(int max, out int i, ref TimeSpanResult result)
		{
			return default(bool);
		}

		[Token(Token = "0x6002950")]
		[Address(RVA = "0x54291A0", Offset = "0x54281A0", VA = "0x54291A0")]
		internal bool ParseTime(out long time, ref TimeSpanResult result)
		{
			return default(bool);
		}

		[Token(Token = "0x6002951")]
		[Address(RVA = "0x5429150", Offset = "0x5428150", VA = "0x5429150")]
		internal void SkipBlanks()
		{
		}
	}

	[Token(Token = "0x600291C")]
	[Address(RVA = "0x54014A0", Offset = "0x54004A0", VA = "0x54014A0")]
	internal static long Pow10(int pow)
	{
		return default(long);
	}

	[Token(Token = "0x600291D")]
	[Address(RVA = "0x54018E0", Offset = "0x54008E0", VA = "0x54018E0")]
	private static bool TryTimeToTicks(bool positive, TimeSpanToken days, TimeSpanToken hours, TimeSpanToken minutes, TimeSpanToken seconds, TimeSpanToken fraction, out long result)
	{
		return default(bool);
	}

	[Token(Token = "0x600291E")]
	[Address(RVA = "0x5401BC0", Offset = "0x5400BC0", VA = "0x5401BC0")]
	internal static TimeSpan Parse(ReadOnlySpan<char> input, IFormatProvider formatProvider)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x600291F")]
	[Address(RVA = "0x5401E40", Offset = "0x5400E40", VA = "0x5401E40")]
	internal static bool TryParse(ReadOnlySpan<char> input, IFormatProvider formatProvider, out TimeSpan result)
	{
		return default(bool);
	}

	[Token(Token = "0x6002920")]
	[Address(RVA = "0x5401EB0", Offset = "0x5400EB0", VA = "0x5401EB0")]
	internal static bool TryParseExact(ReadOnlySpan<char> input, ReadOnlySpan<char> format, IFormatProvider formatProvider, TimeSpanStyles styles, out TimeSpan result)
	{
		return default(bool);
	}

	[Token(Token = "0x6002921")]
	[Address(RVA = "0x5401C10", Offset = "0x5400C10", VA = "0x5401C10")]
	private static bool TryParseTimeSpan(ReadOnlySpan<char> input, TimeSpanStandardStyles style, IFormatProvider formatProvider, ref TimeSpanResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x6002922")]
	[Address(RVA = "0x5402700", Offset = "0x5401700", VA = "0x5402700")]
	private static bool ProcessTerminalState(ref TimeSpanRawInfo raw, TimeSpanStandardStyles style, ref TimeSpanResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x6002923")]
	[Address(RVA = "0x5405CB0", Offset = "0x5404CB0", VA = "0x5405CB0")]
	private static bool ProcessTerminal_DHMSF(ref TimeSpanRawInfo raw, TimeSpanStandardStyles style, ref TimeSpanResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x6002924")]
	[Address(RVA = "0x5404250", Offset = "0x5403250", VA = "0x5404250")]
	private static bool ProcessTerminal_HMS_F_D(ref TimeSpanRawInfo raw, TimeSpanStandardStyles style, ref TimeSpanResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x6002925")]
	[Address(RVA = "0x5402EA0", Offset = "0x5401EA0", VA = "0x5402EA0")]
	private static bool ProcessTerminal_HM_S_D(ref TimeSpanRawInfo raw, TimeSpanStandardStyles style, ref TimeSpanResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x6002926")]
	[Address(RVA = "0x5402B50", Offset = "0x5401B50", VA = "0x5402B50")]
	private static bool ProcessTerminal_HM(ref TimeSpanRawInfo raw, TimeSpanStandardStyles style, ref TimeSpanResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x6002927")]
	[Address(RVA = "0x5402810", Offset = "0x5401810", VA = "0x5402810")]
	private static bool ProcessTerminal_D(ref TimeSpanRawInfo raw, TimeSpanStandardStyles style, ref TimeSpanResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x6002928")]
	[Address(RVA = "0x5401F40", Offset = "0x5400F40", VA = "0x5401F40")]
	private static bool TryParseExactTimeSpan(ReadOnlySpan<char> input, ReadOnlySpan<char> format, IFormatProvider formatProvider, TimeSpanStyles styles, ref TimeSpanResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x6002929")]
	[Address(RVA = "0x5407F90", Offset = "0x5406F90", VA = "0x5407F90")]
	private static bool TryParseByFormat(ReadOnlySpan<char> input, ReadOnlySpan<char> format, TimeSpanStyles styles, ref TimeSpanResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x600292A")]
	[Address(RVA = "0x5408D00", Offset = "0x5407D00", VA = "0x5408D00")]
	private static bool ParseExactDigits(ref TimeSpanTokenizer tokenizer, int minDigitLength, out int result)
	{
		return default(bool);
	}

	[Token(Token = "0x600292B")]
	[Address(RVA = "0x5408DC0", Offset = "0x5407DC0", VA = "0x5408DC0")]
	private static bool ParseExactDigits(ref TimeSpanTokenizer tokenizer, int minDigitLength, int maxDigitLength, out int zeroes, out int result)
	{
		return default(bool);
	}

	[Token(Token = "0x600292C")]
	[Address(RVA = "0x5408EA0", Offset = "0x5407EA0", VA = "0x5408EA0")]
	private static bool ParseExactLiteral(ref TimeSpanTokenizer tokenizer, StringBuilder enquotedString)
	{
		return default(bool);
	}

	[Token(Token = "0x600292D")]
	[Address(RVA = "0x5407F60", Offset = "0x5406F60", VA = "0x5407F60")]
	private static bool TryParseTimeSpanConstant(ReadOnlySpan<char> input, ref TimeSpanResult result)
	{
		return default(bool);
	}
}
