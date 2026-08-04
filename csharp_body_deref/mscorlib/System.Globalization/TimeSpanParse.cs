// ==================== AoTTG2 cross-reference ====================
// Type: System.Globalization.TimeSpanParse
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using System.Text;
using Il2CppDummyDll;

namespace System.Globalization;

[Token(Token = "0x20005AE")]
internal static class TimeSpanParse
{
	[Token(Token = "0x20005AF")]
	private enum ParseFailureKind : byte
	{
		[Token(Token = "0x400186B")]
		None,
		[Token(Token = "0x400186C")]
		ArgumentNull,
		[Token(Token = "0x400186D")]
		Format,
		[Token(Token = "0x400186E")]
		FormatWithParameter,
		[Token(Token = "0x400186F")]
		Overflow
	}

	[Token(Token = "0x20005B0")]
	[Flags]
	private enum TimeSpanStandardStyles : byte
	{
		[Token(Token = "0x4001871")]
		None = 0,
		[Token(Token = "0x4001872")]
		Invariant = 1,
		[Token(Token = "0x4001873")]
		Localized = 2,
		[Token(Token = "0x4001874")]
		RequireFull = 4,
		[Token(Token = "0x4001875")]
		Any = 3
	}

	[Token(Token = "0x20005B1")]
	private enum TTT : byte
	{
		[Token(Token = "0x4001877")]
		None,
		[Token(Token = "0x4001878")]
		End,
		[Token(Token = "0x4001879")]
		Num,
		[Token(Token = "0x400187A")]
		Sep,
		[Token(Token = "0x400187B")]
		NumOverflow
	}

	[Token(Token = "0x20005B2")]
	private ref struct TimeSpanToken
	{
		[Token(Token = "0x400187C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal TTT _ttt;

		[Token(Token = "0x400187D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
		internal int _num;

		[Token(Token = "0x400187E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		internal int _zeroes;

		[Token(Token = "0x400187F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		internal ReadOnlySpan<char> _sep;

		[Token(Token = "0x6002C42")]
		[Address(RVA = "0x3C54440", Offset = "0x3C54440", VA = "0x3C54440")]
		public TimeSpanToken(TTT type)
		{
		}

		[Token(Token = "0x6002C43")]
		[Address(RVA = "0x3C51240", Offset = "0x3C51240", VA = "0x3C51240")]
		public TimeSpanToken(int number)
		{
		}

		[Token(Token = "0x6002C44")]
		[Address(RVA = "0x3C540C0", Offset = "0x3C540C0", VA = "0x3C540C0")]
		public TimeSpanToken(int number, int leadingZeroes)
		{
		}

		[Token(Token = "0x6002C45")]
		[Address(RVA = "0x3C54460", Offset = "0x3C54460", VA = "0x3C54460")]
		public TimeSpanToken(TTT type, int number, int leadingZeroes, ReadOnlySpan<char> separator)
		{
		}

		[Token(Token = "0x6002C46")]
		[Address(RVA = "0x3C4C5F0", Offset = "0x3C4C5F0", VA = "0x3C4C5F0")]
		public bool IsInvalidFraction()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x20005B3")]
	private ref struct TimeSpanTokenizer
	{
		[Token(Token = "0x4001880")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private ReadOnlySpan<char> _value;

		[Token(Token = "0x4001881")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _pos;

		[Token(Token = "0x17000682")]
		internal bool EOL
		{
			[Token(Token = "0x6002C4A")]
			[Address(RVA = "0x3C54090", Offset = "0x3C54090", VA = "0x3C54090")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000683")]
		internal char NextChar
		{
			[Token(Token = "0x6002C4C")]
			[Address(RVA = "0x3C54050", Offset = "0x3C54050", VA = "0x3C54050")]
			get
			{
				return default(char);
			}
		}

		[Token(Token = "0x6002C47")]
		[Address(RVA = "0x3C4CCD0", Offset = "0x3C4CCD0", VA = "0x3C4CCD0")]
		internal TimeSpanTokenizer(ReadOnlySpan<char> input)
		{
		}

		[Token(Token = "0x6002C48")]
		[Address(RVA = "0x3C53E00", Offset = "0x3C53E00", VA = "0x3C53E00")]
		internal TimeSpanTokenizer(ReadOnlySpan<char> input, int startPosition)
		{
		}

		[Token(Token = "0x6002C49")]
		[Address(RVA = "0x3C4CD90", Offset = "0x3C4CD90", VA = "0x3C4CD90")]
		internal TimeSpanToken GetNextToken()
		{
			return default(TimeSpanToken);
		}

		[Token(Token = "0x6002C4B")]
		[Address(RVA = "0x3C540E0", Offset = "0x3C540E0", VA = "0x3C540E0")]
		internal void BackOne()
		{
		}
	}

	[Token(Token = "0x20005B4")]
	private ref struct TimeSpanRawInfo
	{
		[Token(Token = "0x4001882")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal TTT _lastSeenTTT;

		[Token(Token = "0x4001883")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
		internal int _tokenCount;

		[Token(Token = "0x4001884")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		internal int _sepCount;

		[Token(Token = "0x4001885")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
		internal int _numCount;

		[Token(Token = "0x4001886")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private System.Globalization.TimeSpanFormat.FormatLiterals _posLoc;

		[Token(Token = "0x4001887")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private System.Globalization.TimeSpanFormat.FormatLiterals _negLoc;

		[Token(Token = "0x4001888")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		private bool _posLocInit;

		[Token(Token = "0x4001889")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x61")]
		private bool _negLocInit;

		[Token(Token = "0x400188A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		private string _fullPosPattern;

		[Token(Token = "0x400188B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
		private string _fullNegPattern;

		[Token(Token = "0x400188C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
		internal TimeSpanToken _numbers0;

		[Token(Token = "0x400188D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
		internal TimeSpanToken _numbers1;

		[Token(Token = "0x400188E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
		internal TimeSpanToken _numbers2;

		[Token(Token = "0x400188F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
		internal TimeSpanToken _numbers3;

		[Token(Token = "0x4001890")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
		internal TimeSpanToken _numbers4;

		[Token(Token = "0x4001891")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x118")]
		internal ReadOnlySpan<char> _literals0;

		[Token(Token = "0x4001892")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x128")]
		internal ReadOnlySpan<char> _literals1;

		[Token(Token = "0x4001893")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x138")]
		internal ReadOnlySpan<char> _literals2;

		[Token(Token = "0x4001894")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x148")]
		internal ReadOnlySpan<char> _literals3;

		[Token(Token = "0x4001895")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x158")]
		internal ReadOnlySpan<char> _literals4;

		[Token(Token = "0x4001896")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x168")]
		internal ReadOnlySpan<char> _literals5;

		[Token(Token = "0x17000684")]
		internal System.Globalization.TimeSpanFormat.FormatLiterals PositiveInvariant
		{
			[Token(Token = "0x6002C4D")]
			[Address(RVA = "0x3C54480", Offset = "0x3C54480", VA = "0x3C54480")]
			get
			{
				return default(System.Globalization.TimeSpanFormat.FormatLiterals);
			}
		}

		[Token(Token = "0x17000685")]
		internal System.Globalization.TimeSpanFormat.FormatLiterals NegativeInvariant
		{
			[Token(Token = "0x6002C4E")]
			[Address(RVA = "0x3C544F0", Offset = "0x3C544F0", VA = "0x3C544F0")]
			get
			{
				return default(System.Globalization.TimeSpanFormat.FormatLiterals);
			}
		}

		[Token(Token = "0x17000686")]
		internal System.Globalization.TimeSpanFormat.FormatLiterals PositiveLocalized
		{
			[Token(Token = "0x6002C4F")]
			[Address(RVA = "0x3C510E0", Offset = "0x3C510E0", VA = "0x3C510E0")]
			get
			{
				return default(System.Globalization.TimeSpanFormat.FormatLiterals);
			}
		}

		[Token(Token = "0x17000687")]
		internal System.Globalization.TimeSpanFormat.FormatLiterals NegativeLocalized
		{
			[Token(Token = "0x6002C50")]
			[Address(RVA = "0x3C51190", Offset = "0x3C51190", VA = "0x3C51190")]
			get
			{
				return default(System.Globalization.TimeSpanFormat.FormatLiterals);
			}
		}

		[Token(Token = "0x6002C51")]
		[Address(RVA = "0x3C51AE0", Offset = "0x3C51AE0", VA = "0x3C51AE0")]
		internal bool FullAppCompatMatch(System.Globalization.TimeSpanFormat.FormatLiterals pattern)
		{
			return default(bool);
		}

		[Token(Token = "0x6002C52")]
		[Address(RVA = "0x3C52610", Offset = "0x3C52610", VA = "0x3C52610")]
		internal bool PartialAppCompatMatch(System.Globalization.TimeSpanFormat.FormatLiterals pattern)
		{
			return default(bool);
		}

		[Token(Token = "0x6002C53")]
		[Address(RVA = "0x3C50BE0", Offset = "0x3C50BE0", VA = "0x3C50BE0")]
		internal bool FullMatch(System.Globalization.TimeSpanFormat.FormatLiterals pattern)
		{
			return default(bool);
		}

		[Token(Token = "0x6002C54")]
		[Address(RVA = "0x3C52C40", Offset = "0x3C52C40", VA = "0x3C52C40")]
		internal bool FullDMatch(System.Globalization.TimeSpanFormat.FormatLiterals pattern)
		{
			return default(bool);
		}

		[Token(Token = "0x6002C55")]
		[Address(RVA = "0x3C52980", Offset = "0x3C52980", VA = "0x3C52980")]
		internal bool FullHMMatch(System.Globalization.TimeSpanFormat.FormatLiterals pattern)
		{
			return default(bool);
		}

		[Token(Token = "0x6002C56")]
		[Address(RVA = "0x3C52290", Offset = "0x3C52290", VA = "0x3C52290")]
		internal bool FullDHMMatch(System.Globalization.TimeSpanFormat.FormatLiterals pattern)
		{
			return default(bool);
		}

		[Token(Token = "0x6002C57")]
		[Address(RVA = "0x3C51F10", Offset = "0x3C51F10", VA = "0x3C51F10")]
		internal bool FullHMSMatch(System.Globalization.TimeSpanFormat.FormatLiterals pattern)
		{
			return default(bool);
		}

		[Token(Token = "0x6002C58")]
		[Address(RVA = "0x3C516A0", Offset = "0x3C516A0", VA = "0x3C516A0")]
		internal bool FullDHMSMatch(System.Globalization.TimeSpanFormat.FormatLiterals pattern)
		{
			return default(bool);
		}

		[Token(Token = "0x6002C59")]
		[Address(RVA = "0x3C51260", Offset = "0x3C51260", VA = "0x3C51260")]
		internal bool FullHMSFMatch(System.Globalization.TimeSpanFormat.FormatLiterals pattern)
		{
			return default(bool);
		}

		[Token(Token = "0x6002C5A")]
		[Address(RVA = "0x3C4CCE0", Offset = "0x3C4CCE0", VA = "0x3C4CCE0")]
		internal void Init(DateTimeFormatInfo dtfi)
		{
		}

		[Token(Token = "0x6002C5B")]
		[Address(RVA = "0x3C4CFC0", Offset = "0x3C4CFC0", VA = "0x3C4CFC0")]
		internal bool ProcessToken(ref TimeSpanToken tok, ref TimeSpanResult result)
		{
			return default(bool);
		}

		[Token(Token = "0x6002C5C")]
		[Address(RVA = "0x3C54560", Offset = "0x3C54560", VA = "0x3C54560")]
		private bool AddSep(ReadOnlySpan<char> sep, ref TimeSpanResult result)
		{
			return default(bool);
		}

		[Token(Token = "0x6002C5D")]
		[Address(RVA = "0x3C54690", Offset = "0x3C54690", VA = "0x3C54690")]
		private bool AddNum(TimeSpanToken num, ref TimeSpanResult result)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x20005B5")]
	private struct TimeSpanResult
	{
		[Token(Token = "0x4001897")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal TimeSpan parsedTimeSpan;

		[Token(Token = "0x4001898")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		private readonly bool _throwOnFailure;

		[Token(Token = "0x6002C5E")]
		[Address(RVA = "0x3C4C6D0", Offset = "0x3C4C6D0", VA = "0x3C4C6D0")]
		internal TimeSpanResult(bool throwOnFailure)
		{
		}

		[Token(Token = "0x6002C5F")]
		[Address(RVA = "0x3C4CBB0", Offset = "0x3C4CBB0", VA = "0x3C4CBB0")]
		internal bool SetFailure(ParseFailureKind kind, string resourceKey, [Optional] object messageArgument, [Optional] string argumentName)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x20005B6")]
	private ref struct StringParser
	{
		[Token(Token = "0x4001899")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private ReadOnlySpan<char> _str;

		[Token(Token = "0x400189A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private char _ch;

		[Token(Token = "0x400189B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
		private int _pos;

		[Token(Token = "0x400189C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private int _len;

		[Token(Token = "0x6002C60")]
		[Address(RVA = "0x3C547D0", Offset = "0x3C547D0", VA = "0x3C547D0")]
		internal void NextChar()
		{
		}

		[Token(Token = "0x6002C61")]
		[Address(RVA = "0x3C54810", Offset = "0x3C54810", VA = "0x3C54810")]
		internal char NextNonDigit()
		{
			return default(char);
		}

		[Token(Token = "0x6002C62")]
		[Address(RVA = "0x3C540F0", Offset = "0x3C540F0", VA = "0x3C540F0")]
		internal bool TryParse(ReadOnlySpan<char> input, ref TimeSpanResult result)
		{
			return default(bool);
		}

		[Token(Token = "0x6002C63")]
		[Address(RVA = "0x3C54CB0", Offset = "0x3C54CB0", VA = "0x3C54CB0")]
		internal bool ParseInt(int max, out int i, ref TimeSpanResult result)
		{
			return default(bool);
		}

		[Token(Token = "0x6002C64")]
		[Address(RVA = "0x3C548B0", Offset = "0x3C548B0", VA = "0x3C548B0")]
		internal bool ParseTime(out long time, ref TimeSpanResult result)
		{
			return default(bool);
		}

		[Token(Token = "0x6002C65")]
		[Address(RVA = "0x3C54850", Offset = "0x3C54850", VA = "0x3C54850")]
		internal void SkipBlanks()
		{
		}
	}

	[Token(Token = "0x6002C30")]
	[Address(RVA = "0x3C4BF60", Offset = "0x3C4BF60", VA = "0x3C4BF60")]
	internal static long Pow10(int pow)
	{
		return default(long);
	}

	[Token(Token = "0x6002C31")]
	[Address(RVA = "0x3C4C390", Offset = "0x3C4C390", VA = "0x3C4C390")]
	private static bool TryTimeToTicks(bool positive, TimeSpanToken days, TimeSpanToken hours, TimeSpanToken minutes, TimeSpanToken seconds, TimeSpanToken fraction, out long result)
	{
		return default(bool);
	}

	[Token(Token = "0x6002C32")]
	[Address(RVA = "0x3C4C6A0", Offset = "0x3C4C6A0", VA = "0x3C4C6A0")]
	internal static TimeSpan Parse(ReadOnlySpan<char> input, IFormatProvider formatProvider)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6002C33")]
	[Address(RVA = "0x3C4C9A0", Offset = "0x3C4C9A0", VA = "0x3C4C9A0")]
	internal static bool TryParse(ReadOnlySpan<char> input, IFormatProvider formatProvider, out TimeSpan result)
	{
		return default(bool);
	}

	[Token(Token = "0x6002C34")]
	[Address(RVA = "0x3C4C9F0", Offset = "0x3C4C9F0", VA = "0x3C4C9F0")]
	internal static bool TryParseExact(ReadOnlySpan<char> input, ReadOnlySpan<char> format, IFormatProvider formatProvider, TimeSpanStyles styles, out TimeSpan result)
	{
		return default(bool);
	}

	[Token(Token = "0x6002C35")]
	[Address(RVA = "0x3C4C6E0", Offset = "0x3C4C6E0", VA = "0x3C4C6E0")]
	private static bool TryParseTimeSpan(ReadOnlySpan<char> input, TimeSpanStandardStyles style, IFormatProvider formatProvider, ref TimeSpanResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x6002C36")]
	[Address(RVA = "0x3C4D120", Offset = "0x3C4D120", VA = "0x3C4D120")]
	private static bool ProcessTerminalState(ref TimeSpanRawInfo raw, TimeSpanStandardStyles style, ref TimeSpanResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x6002C37")]
	[Address(RVA = "0x3C507C0", Offset = "0x3C507C0", VA = "0x3C507C0")]
	private static bool ProcessTerminal_DHMSF(ref TimeSpanRawInfo raw, TimeSpanStandardStyles style, ref TimeSpanResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x6002C38")]
	[Address(RVA = "0x3C4F3E0", Offset = "0x3C4F3E0", VA = "0x3C4F3E0")]
	private static bool ProcessTerminal_HMS_F_D(ref TimeSpanRawInfo raw, TimeSpanStandardStyles style, ref TimeSpanResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x6002C39")]
	[Address(RVA = "0x3C4DCB0", Offset = "0x3C4DCB0", VA = "0x3C4DCB0")]
	private static bool ProcessTerminal_HM_S_D(ref TimeSpanRawInfo raw, TimeSpanStandardStyles style, ref TimeSpanResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x6002C3A")]
	[Address(RVA = "0x3C4D7A0", Offset = "0x3C4D7A0", VA = "0x3C4D7A0")]
	private static bool ProcessTerminal_HM(ref TimeSpanRawInfo raw, TimeSpanStandardStyles style, ref TimeSpanResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x6002C3B")]
	[Address(RVA = "0x3C4D250", Offset = "0x3C4D250", VA = "0x3C4D250")]
	private static bool ProcessTerminal_D(ref TimeSpanRawInfo raw, TimeSpanStandardStyles style, ref TimeSpanResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x6002C3C")]
	[Address(RVA = "0x3C4CA40", Offset = "0x3C4CA40", VA = "0x3C4CA40")]
	private static bool TryParseExactTimeSpan(ReadOnlySpan<char> input, ReadOnlySpan<char> format, IFormatProvider formatProvider, TimeSpanStyles styles, ref TimeSpanResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x6002C3D")]
	[Address(RVA = "0x3C52E70", Offset = "0x3C52E70", VA = "0x3C52E70")]
	private static bool TryParseByFormat(ReadOnlySpan<char> input, ReadOnlySpan<char> format, TimeSpanStyles styles, ref TimeSpanResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x6002C3E")]
	[Address(RVA = "0x3C53E10", Offset = "0x3C53E10", VA = "0x3C53E10")]
	private static bool ParseExactDigits(ref TimeSpanTokenizer tokenizer, int minDigitLength, out int result)
	{
		return default(bool);
	}

	[Token(Token = "0x6002C3F")]
	[Address(RVA = "0x3C53ED0", Offset = "0x3C53ED0", VA = "0x3C53ED0")]
	private static bool ParseExactDigits(ref TimeSpanTokenizer tokenizer, int minDigitLength, int maxDigitLength, out int zeroes, out int result)
	{
		return default(bool);
	}

	[Token(Token = "0x6002C40")]
	[Address(RVA = "0x3C53FA0", Offset = "0x3C53FA0", VA = "0x3C53FA0")]
	private static bool ParseExactLiteral(ref TimeSpanTokenizer tokenizer, StringBuilder enquotedString)
	{
		return default(bool);
	}

	[Token(Token = "0x6002C41")]
	[Address(RVA = "0x3C52E40", Offset = "0x3C52E40", VA = "0x3C52E40")]
	private static bool TryParseTimeSpanConstant(ReadOnlySpan<char> input, ref TimeSpanResult result)
	{
		return default(bool);
	}
}
