// ==================== AoTTG2 cross-reference ====================
// Type: System.Globalization.TimeSpanParse
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Globalization;

[Token(Token = "0x2000582")]
internal static class TimeSpanParse
{
	[Token(Token = "0x2000583")]
	private enum ParseFailureKind : byte
	{
		[Token(Token = "0x40016BA")]
		None,
		[Token(Token = "0x40016BB")]
		ArgumentNull,
		[Token(Token = "0x40016BC")]
		Format,
		[Token(Token = "0x40016BD")]
		FormatWithParameter,
		[Token(Token = "0x40016BE")]
		Overflow
	}

	[Token(Token = "0x2000584")]
	[Flags]
	private enum TimeSpanStandardStyles : byte
	{
		[Token(Token = "0x40016C0")]
		None = 0,
		[Token(Token = "0x40016C1")]
		Invariant = 1,
		[Token(Token = "0x40016C2")]
		Localized = 2,
		[Token(Token = "0x40016C3")]
		RequireFull = 4,
		[Token(Token = "0x40016C4")]
		Any = Invariant | Localized
	}

	[Token(Token = "0x2000585")]
	private enum TTT : byte
	{
		[Token(Token = "0x40016C6")]
		None,
		[Token(Token = "0x40016C7")]
		End,
		[Token(Token = "0x40016C8")]
		Num,
		[Token(Token = "0x40016C9")]
		Sep,
		[Token(Token = "0x40016CA")]
		NumOverflow
	}

	[Token(Token = "0x2000586")]
	private ref struct TimeSpanToken
	{
		[Token(Token = "0x40016CB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal TTT _ttt;

		[Token(Token = "0x40016CC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
		internal int _num;

		[Token(Token = "0x40016CD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		internal int _zeroes;

		[Token(Token = "0x40016CE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		internal ReadOnlySpan<char> _sep;

		[Token(Token = "0x6002959")]
		[Address(RVA = "0x1AB4310", Offset = "0x1AB2910", VA = "0x181AB4310")]
		public TimeSpanToken(TTT type)
		{
		}

		[Token(Token = "0x600295A")]
		[Address(RVA = "0x1AB4340", Offset = "0x1AB2940", VA = "0x181AB4340")]
		public TimeSpanToken(int number)
		{
		}

		[Token(Token = "0x600295B")]
		[Address(RVA = "0x1AB4320", Offset = "0x1AB2920", VA = "0x181AB4320")]
		public TimeSpanToken(TTT type, int number, int leadingZeroes, ReadOnlySpan<char> separator)
		{
		}

		[Token(Token = "0x600295C")]
		[Address(RVA = "0x1AB42B0", Offset = "0x1AB28B0", VA = "0x181AB42B0")]
		public bool IsInvalidFraction()
		{
			return default(bool);
		}
	}

	[Token(Token = "0x2000587")]
	private ref struct TimeSpanTokenizer
	{
		[Token(Token = "0x40016CF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private ReadOnlySpan<char> _value;

		[Token(Token = "0x40016D0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _pos;

		[Token(Token = "0x600295D")]
		[Address(RVA = "0x1AB4580", Offset = "0x1AB2B80", VA = "0x181AB4580")]
		internal TimeSpanTokenizer(ReadOnlySpan<char> input)
		{
		}

		[Token(Token = "0x600295E")]
		[Address(RVA = "0x1028C90", Offset = "0x1027290", VA = "0x181028C90")]
		internal TimeSpanTokenizer(ReadOnlySpan<char> input, int startPosition)
		{
		}

		[Token(Token = "0x600295F")]
		[Address(RVA = "0x1AB4360", Offset = "0x1AB2960", VA = "0x181AB4360")]
		internal TimeSpanToken GetNextToken()
		{
			return default(TimeSpanToken);
		}
	}

	[Token(Token = "0x2000588")]
	private ref struct TimeSpanRawInfo
	{
		[Token(Token = "0x40016D1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal TTT _lastSeenTTT;

		[Token(Token = "0x40016D2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
		internal int _tokenCount;

		[Token(Token = "0x40016D3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		internal int _sepCount;

		[Token(Token = "0x40016D4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
		internal int _numCount;

		[Token(Token = "0x40016D5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private System.Globalization.TimeSpanFormat.FormatLiterals _posLoc;

		[Token(Token = "0x40016D6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private System.Globalization.TimeSpanFormat.FormatLiterals _negLoc;

		[Token(Token = "0x40016D7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		private bool _posLocInit;

		[Token(Token = "0x40016D8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x61")]
		private bool _negLocInit;

		[Token(Token = "0x40016D9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		private string _fullPosPattern;

		[Token(Token = "0x40016DA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
		private string _fullNegPattern;

		[Token(Token = "0x40016DB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
		internal TimeSpanToken _numbers0;

		[Token(Token = "0x40016DC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
		internal TimeSpanToken _numbers1;

		[Token(Token = "0x40016DD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
		internal TimeSpanToken _numbers2;

		[Token(Token = "0x40016DE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
		internal TimeSpanToken _numbers3;

		[Token(Token = "0x40016DF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
		internal TimeSpanToken _numbers4;

		[Token(Token = "0x40016E0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x118")]
		internal ReadOnlySpan<char> _literals0;

		[Token(Token = "0x40016E1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x128")]
		internal ReadOnlySpan<char> _literals1;

		[Token(Token = "0x40016E2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x138")]
		internal ReadOnlySpan<char> _literals2;

		[Token(Token = "0x40016E3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x148")]
		internal ReadOnlySpan<char> _literals3;

		[Token(Token = "0x40016E4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x158")]
		internal ReadOnlySpan<char> _literals4;

		[Token(Token = "0x40016E5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x168")]
		internal ReadOnlySpan<char> _literals5;

		[Token(Token = "0x17000611")]
		internal System.Globalization.TimeSpanFormat.FormatLiterals PositiveInvariant
		{
			[Token(Token = "0x6002960")]
			[Address(RVA = "0x1AB3FF0", Offset = "0x1AB25F0", VA = "0x181AB3FF0")]
			get
			{
				return default(System.Globalization.TimeSpanFormat.FormatLiterals);
			}
		}

		[Token(Token = "0x17000612")]
		internal System.Globalization.TimeSpanFormat.FormatLiterals NegativeInvariant
		{
			[Token(Token = "0x6002961")]
			[Address(RVA = "0x1AB3EB0", Offset = "0x1AB24B0", VA = "0x181AB3EB0")]
			get
			{
				return default(System.Globalization.TimeSpanFormat.FormatLiterals);
			}
		}

		[Token(Token = "0x17000613")]
		internal System.Globalization.TimeSpanFormat.FormatLiterals PositiveLocalized
		{
			[Token(Token = "0x6002962")]
			[Address(RVA = "0x1AB4060", Offset = "0x1AB2660", VA = "0x181AB4060")]
			get
			{
				return default(System.Globalization.TimeSpanFormat.FormatLiterals);
			}
		}

		[Token(Token = "0x17000614")]
		internal System.Globalization.TimeSpanFormat.FormatLiterals NegativeLocalized
		{
			[Token(Token = "0x6002963")]
			[Address(RVA = "0x1AB3F20", Offset = "0x1AB2520", VA = "0x181AB3F20")]
			get
			{
				return default(System.Globalization.TimeSpanFormat.FormatLiterals);
			}
		}

		[Token(Token = "0x6002964")]
		[Address(RVA = "0x1AB2540", Offset = "0x1AB0B40", VA = "0x181AB2540")]
		internal bool FullAppCompatMatch(System.Globalization.TimeSpanFormat.FormatLiterals pattern)
		{
			return default(bool);
		}

		[Token(Token = "0x6002965")]
		[Address(RVA = "0x1AB3A50", Offset = "0x1AB2050", VA = "0x181AB3A50")]
		internal bool PartialAppCompatMatch(System.Globalization.TimeSpanFormat.FormatLiterals pattern)
		{
			return default(bool);
		}

		[Token(Token = "0x6002966")]
		[Address(RVA = "0x1AB3670", Offset = "0x1AB1C70", VA = "0x181AB3670")]
		internal bool FullMatch(System.Globalization.TimeSpanFormat.FormatLiterals pattern)
		{
			return default(bool);
		}

		[Token(Token = "0x6002967")]
		[Address(RVA = "0x1AB2D90", Offset = "0x1AB1390", VA = "0x181AB2D90")]
		internal bool FullDMatch(System.Globalization.TimeSpanFormat.FormatLiterals pattern)
		{
			return default(bool);
		}

		[Token(Token = "0x6002968")]
		[Address(RVA = "0x1AB2F10", Offset = "0x1AB1510", VA = "0x181AB2F10")]
		internal bool FullHMMatch(System.Globalization.TimeSpanFormat.FormatLiterals pattern)
		{
			return default(bool);
		}

		[Token(Token = "0x6002969")]
		[Address(RVA = "0x1AB2820", Offset = "0x1AB0E20", VA = "0x181AB2820")]
		internal bool FullDHMMatch(System.Globalization.TimeSpanFormat.FormatLiterals pattern)
		{
			return default(bool);
		}

		[Token(Token = "0x600296A")]
		[Address(RVA = "0x1AB3400", Offset = "0x1AB1A00", VA = "0x181AB3400")]
		internal bool FullHMSMatch(System.Globalization.TimeSpanFormat.FormatLiterals pattern)
		{
			return default(bool);
		}

		[Token(Token = "0x600296B")]
		[Address(RVA = "0x1AB2A90", Offset = "0x1AB1090", VA = "0x181AB2A90")]
		internal bool FullDHMSMatch(System.Globalization.TimeSpanFormat.FormatLiterals pattern)
		{
			return default(bool);
		}

		[Token(Token = "0x600296C")]
		[Address(RVA = "0x1AB3100", Offset = "0x1AB1700", VA = "0x181AB3100")]
		internal bool FullHMSFMatch(System.Globalization.TimeSpanFormat.FormatLiterals pattern)
		{
			return default(bool);
		}

		[Token(Token = "0x600296D")]
		[Address(RVA = "0x1AB39F0", Offset = "0x1AB1FF0", VA = "0x181AB39F0")]
		internal void Init(DateTimeFormatInfo dtfi)
		{
		}

		[Token(Token = "0x600296E")]
		[Address(RVA = "0x1AB3CB0", Offset = "0x1AB22B0", VA = "0x181AB3CB0")]
		internal bool ProcessToken(ref TimeSpanToken tok, ref TimeSpanResult result)
		{
			return default(bool);
		}

		[Token(Token = "0x600296F")]
		[Address(RVA = "0x1AB23F0", Offset = "0x1AB09F0", VA = "0x181AB23F0")]
		private bool AddSep(ReadOnlySpan<char> sep, ref TimeSpanResult result)
		{
			return default(bool);
		}

		[Token(Token = "0x6002970")]
		[Address(RVA = "0x1AB22A0", Offset = "0x1AB08A0", VA = "0x181AB22A0")]
		private bool AddNum(TimeSpanToken num, ref TimeSpanResult result)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x2000589")]
	private struct TimeSpanResult
	{
		[Token(Token = "0x40016E6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal TimeSpan parsedTimeSpan;

		[Token(Token = "0x40016E7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		private readonly bool _throwOnFailure;

		[Token(Token = "0x6002971")]
		[Address(RVA = "0x1AB42A0", Offset = "0x1AB28A0", VA = "0x181AB42A0")]
		internal TimeSpanResult(bool throwOnFailure)
		{
		}

		[Token(Token = "0x6002972")]
		[Address(RVA = "0x1AB4130", Offset = "0x1AB2730", VA = "0x181AB4130")]
		internal bool SetFailure(ParseFailureKind kind, string resourceKey, [Optional] object messageArgument, [Optional] string argumentName)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600294E")]
	[Address(RVA = "0x1AAE470", Offset = "0x1AACA70", VA = "0x181AAE470")]
	internal static long Pow10(int pow)
	{
		return default(long);
	}

	[Token(Token = "0x600294F")]
	[Address(RVA = "0x1AB2110", Offset = "0x1AB0710", VA = "0x181AB2110")]
	private static bool TryTimeToTicks(bool positive, TimeSpanToken days, TimeSpanToken hours, TimeSpanToken minutes, TimeSpanToken seconds, TimeSpanToken fraction, out long result)
	{
		return default(bool);
	}

	[Token(Token = "0x6002950")]
	[Address(RVA = "0x1AAE430", Offset = "0x1AACA30", VA = "0x181AAE430")]
	internal static TimeSpan Parse(ReadOnlySpan<char> input, IFormatProvider formatProvider)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6002951")]
	[Address(RVA = "0x1AB20B0", Offset = "0x1AB06B0", VA = "0x181AB20B0")]
	internal static bool TryParse(ReadOnlySpan<char> input, IFormatProvider formatProvider, out TimeSpan result)
	{
		return default(bool);
	}

	[Token(Token = "0x6002952")]
	[Address(RVA = "0x1AB0FF0", Offset = "0x1AAF5F0", VA = "0x181AB0FF0")]
	private static bool TryParseTimeSpan(ReadOnlySpan<char> input, TimeSpanStandardStyles style, IFormatProvider formatProvider, ref TimeSpanResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x6002953")]
	[Address(RVA = "0x1AAE560", Offset = "0x1AACB60", VA = "0x181AAE560")]
	private static bool ProcessTerminalState(ref TimeSpanRawInfo raw, TimeSpanStandardStyles style, ref TimeSpanResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x6002954")]
	[Address(RVA = "0x1AAE6C0", Offset = "0x1AACCC0", VA = "0x181AAE6C0")]
	private static bool ProcessTerminal_DHMSF(ref TimeSpanRawInfo raw, TimeSpanStandardStyles style, ref TimeSpanResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x6002955")]
	[Address(RVA = "0x1AAED40", Offset = "0x1AAD340", VA = "0x181AAED40")]
	private static bool ProcessTerminal_HMS_F_D(ref TimeSpanRawInfo raw, TimeSpanStandardStyles style, ref TimeSpanResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x6002956")]
	[Address(RVA = "0x1AAFF40", Offset = "0x1AAE540", VA = "0x181AAFF40")]
	private static bool ProcessTerminal_HM_S_D(ref TimeSpanRawInfo raw, TimeSpanStandardStyles style, ref TimeSpanResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x6002957")]
	[Address(RVA = "0x1AB0D60", Offset = "0x1AAF360", VA = "0x181AB0D60")]
	private static bool ProcessTerminal_HM(ref TimeSpanRawInfo raw, TimeSpanStandardStyles style, ref TimeSpanResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x6002958")]
	[Address(RVA = "0x1AAEAB0", Offset = "0x1AAD0B0", VA = "0x181AAEAB0")]
	private static bool ProcessTerminal_D(ref TimeSpanRawInfo raw, TimeSpanStandardStyles style, ref TimeSpanResult result)
	{
		return default(bool);
	}
}
