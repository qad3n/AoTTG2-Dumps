// ==================== AoTTG2 cross-reference ====================
// Type: System.Globalization.DateTimeFormatInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Globalization;

[Serializable]
[Token(Token = "0x200056F")]
public sealed class DateTimeFormatInfo : IFormatProvider, ICloneable
{
	[Token(Token = "0x2000570")]
	internal class TokenHashValue
	{
		[Token(Token = "0x4001632")]
		[FieldOffset(Offset = "0x10")]
		internal string tokenString;

		[Token(Token = "0x4001633")]
		[FieldOffset(Offset = "0x18")]
		internal System.TokenType tokenType;

		[Token(Token = "0x4001634")]
		[FieldOffset(Offset = "0x1C")]
		internal int tokenValue;

		[Token(Token = "0x6002927")]
		[Address(RVA = "0x1A74560", Offset = "0x1A72B60", VA = "0x181A74560")]
		internal TokenHashValue(string tokenString, System.TokenType tokenType, int tokenValue)
		{
		}
	}

	[Token(Token = "0x40015E0")]
	[FieldOffset(Offset = "0x0")]
	private static DateTimeFormatInfo s_invariantInfo;

	[NonSerialized]
	[Token(Token = "0x40015E1")]
	[FieldOffset(Offset = "0x10")]
	private System.Globalization.CultureData _cultureData;

	[Token(Token = "0x40015E2")]
	[FieldOffset(Offset = "0x18")]
	private string _name;

	[NonSerialized]
	[Token(Token = "0x40015E3")]
	[FieldOffset(Offset = "0x20")]
	private string _langName;

	[NonSerialized]
	[Token(Token = "0x40015E4")]
	[FieldOffset(Offset = "0x28")]
	private CompareInfo _compareInfo;

	[NonSerialized]
	[Token(Token = "0x40015E5")]
	[FieldOffset(Offset = "0x30")]
	private CultureInfo _cultureInfo;

	[Token(Token = "0x40015E6")]
	[FieldOffset(Offset = "0x38")]
	private string amDesignator;

	[Token(Token = "0x40015E7")]
	[FieldOffset(Offset = "0x40")]
	private string pmDesignator;

	[Token(Token = "0x40015E8")]
	[FieldOffset(Offset = "0x48")]
	private string dateSeparator;

	[Token(Token = "0x40015E9")]
	[FieldOffset(Offset = "0x50")]
	private string generalShortTimePattern;

	[Token(Token = "0x40015EA")]
	[FieldOffset(Offset = "0x58")]
	private string generalLongTimePattern;

	[Token(Token = "0x40015EB")]
	[FieldOffset(Offset = "0x60")]
	private string timeSeparator;

	[Token(Token = "0x40015EC")]
	[FieldOffset(Offset = "0x68")]
	private string monthDayPattern;

	[Token(Token = "0x40015ED")]
	[FieldOffset(Offset = "0x70")]
	private string dateTimeOffsetPattern;

	[Token(Token = "0x40015EE")]
	private const string rfc1123Pattern = "ddd, dd MMM yyyy HH':'mm':'ss 'GMT'";

	[Token(Token = "0x40015EF")]
	private const string sortableDateTimePattern = "yyyy'-'MM'-'dd'T'HH':'mm':'ss";

	[Token(Token = "0x40015F0")]
	private const string universalSortableDateTimePattern = "yyyy'-'MM'-'dd HH':'mm':'ss'Z'";

	[Token(Token = "0x40015F1")]
	[FieldOffset(Offset = "0x78")]
	private Calendar calendar;

	[Token(Token = "0x40015F2")]
	[FieldOffset(Offset = "0x80")]
	private int firstDayOfWeek;

	[Token(Token = "0x40015F3")]
	[FieldOffset(Offset = "0x84")]
	private int calendarWeekRule;

	[Token(Token = "0x40015F4")]
	[FieldOffset(Offset = "0x88")]
	private string fullDateTimePattern;

	[Token(Token = "0x40015F5")]
	[FieldOffset(Offset = "0x90")]
	private string[] abbreviatedDayNames;

	[Token(Token = "0x40015F6")]
	[FieldOffset(Offset = "0x98")]
	private string[] m_superShortDayNames;

	[Token(Token = "0x40015F7")]
	[FieldOffset(Offset = "0xA0")]
	private string[] dayNames;

	[Token(Token = "0x40015F8")]
	[FieldOffset(Offset = "0xA8")]
	private string[] abbreviatedMonthNames;

	[Token(Token = "0x40015F9")]
	[FieldOffset(Offset = "0xB0")]
	private string[] monthNames;

	[Token(Token = "0x40015FA")]
	[FieldOffset(Offset = "0xB8")]
	private string[] genitiveMonthNames;

	[Token(Token = "0x40015FB")]
	[FieldOffset(Offset = "0xC0")]
	private string[] m_genitiveAbbreviatedMonthNames;

	[Token(Token = "0x40015FC")]
	[FieldOffset(Offset = "0xC8")]
	private string[] leapYearMonthNames;

	[Token(Token = "0x40015FD")]
	[FieldOffset(Offset = "0xD0")]
	private string longDatePattern;

	[Token(Token = "0x40015FE")]
	[FieldOffset(Offset = "0xD8")]
	private string shortDatePattern;

	[Token(Token = "0x40015FF")]
	[FieldOffset(Offset = "0xE0")]
	private string yearMonthPattern;

	[Token(Token = "0x4001600")]
	[FieldOffset(Offset = "0xE8")]
	private string longTimePattern;

	[Token(Token = "0x4001601")]
	[FieldOffset(Offset = "0xF0")]
	private string shortTimePattern;

	[Token(Token = "0x4001602")]
	[FieldOffset(Offset = "0xF8")]
	private string[] allYearMonthPatterns;

	[Token(Token = "0x4001603")]
	[FieldOffset(Offset = "0x100")]
	private string[] allShortDatePatterns;

	[Token(Token = "0x4001604")]
	[FieldOffset(Offset = "0x108")]
	private string[] allLongDatePatterns;

	[Token(Token = "0x4001605")]
	[FieldOffset(Offset = "0x110")]
	private string[] allShortTimePatterns;

	[Token(Token = "0x4001606")]
	[FieldOffset(Offset = "0x118")]
	private string[] allLongTimePatterns;

	[Token(Token = "0x4001607")]
	[FieldOffset(Offset = "0x120")]
	private string[] m_eraNames;

	[Token(Token = "0x4001608")]
	[FieldOffset(Offset = "0x128")]
	private string[] m_abbrevEraNames;

	[Token(Token = "0x4001609")]
	[FieldOffset(Offset = "0x130")]
	private string[] m_abbrevEnglishEraNames;

	[Token(Token = "0x400160A")]
	[FieldOffset(Offset = "0x138")]
	private System.Globalization.CalendarId[] optionalCalendars;

	[Token(Token = "0x400160B")]
	private const int DEFAULT_ALL_DATETIMES_SIZE = 132;

	[Token(Token = "0x400160C")]
	[FieldOffset(Offset = "0x140")]
	internal bool _isReadOnly;

	[Token(Token = "0x400160D")]
	[FieldOffset(Offset = "0x144")]
	private System.Globalization.DateTimeFormatFlags formatFlags;

	[Token(Token = "0x400160E")]
	[FieldOffset(Offset = "0x8")]
	private static readonly char[] s_monthSpaces;

	[Token(Token = "0x400160F")]
	internal const string RoundtripFormat = "yyyy'-'MM'-'dd'T'HH':'mm':'ss.fffffffK";

	[Token(Token = "0x4001610")]
	internal const string RoundtripDateTimeUnfixed = "yyyy'-'MM'-'ddTHH':'mm':'ss zzz";

	[Token(Token = "0x4001611")]
	[FieldOffset(Offset = "0x148")]
	private string _fullTimeSpanPositivePattern;

	[Token(Token = "0x4001612")]
	[FieldOffset(Offset = "0x150")]
	private string _fullTimeSpanNegativePattern;

	[Token(Token = "0x4001613")]
	internal const DateTimeStyles InvalidDateTimeStyles = ~(DateTimeStyles.AllowWhiteSpaces | DateTimeStyles.NoCurrentDateDefault | DateTimeStyles.AdjustToUniversal | DateTimeStyles.AssumeLocal | DateTimeStyles.AssumeUniversal | DateTimeStyles.RoundtripKind);

	[NonSerialized]
	[Token(Token = "0x4001614")]
	[FieldOffset(Offset = "0x158")]
	private TokenHashValue[] _dtfiTokenHash;

	[Token(Token = "0x4001615")]
	private const int TOKEN_HASH_SIZE = 199;

	[Token(Token = "0x4001616")]
	private const int SECOND_PRIME = 197;

	[Token(Token = "0x4001617")]
	private const string dateSeparatorOrTimeZoneOffset = "-";

	[Token(Token = "0x4001618")]
	private const string invariantDateSeparator = "/";

	[Token(Token = "0x4001619")]
	private const string invariantTimeSeparator = ":";

	[Token(Token = "0x400161A")]
	internal const string IgnorablePeriod = ".";

	[Token(Token = "0x400161B")]
	internal const string IgnorableComma = ",";

	[Token(Token = "0x400161C")]
	internal const string CJKYearSuff = "年";

	[Token(Token = "0x400161D")]
	internal const string CJKMonthSuff = "月";

	[Token(Token = "0x400161E")]
	internal const string CJKDaySuff = "日";

	[Token(Token = "0x400161F")]
	internal const string KoreanYearSuff = "년";

	[Token(Token = "0x4001620")]
	internal const string KoreanMonthSuff = "월";

	[Token(Token = "0x4001621")]
	internal const string KoreanDaySuff = "일";

	[Token(Token = "0x4001622")]
	internal const string KoreanHourSuff = "시";

	[Token(Token = "0x4001623")]
	internal const string KoreanMinuteSuff = "분";

	[Token(Token = "0x4001624")]
	internal const string KoreanSecondSuff = "초";

	[Token(Token = "0x4001625")]
	internal const string CJKHourSuff = "時";

	[Token(Token = "0x4001626")]
	internal const string ChineseHourSuff = "时";

	[Token(Token = "0x4001627")]
	internal const string CJKMinuteSuff = "分";

	[Token(Token = "0x4001628")]
	internal const string CJKSecondSuff = "秒";

	[Token(Token = "0x4001629")]
	internal const string JapaneseEraStart = "元";

	[Token(Token = "0x400162A")]
	internal const string LocalTimeMark = "T";

	[Token(Token = "0x400162B")]
	internal const string GMTName = "GMT";

	[Token(Token = "0x400162C")]
	internal const string ZuluName = "Z";

	[Token(Token = "0x400162D")]
	internal const string KoreanLangName = "ko";

	[Token(Token = "0x400162E")]
	internal const string JapaneseLangName = "ja";

	[Token(Token = "0x400162F")]
	internal const string EnglishLangName = "en";

	[Token(Token = "0x4001630")]
	[FieldOffset(Offset = "0x10")]
	private static DateTimeFormatInfo s_jajpDTFI;

	[Token(Token = "0x4001631")]
	[FieldOffset(Offset = "0x18")]
	private static DateTimeFormatInfo s_zhtwDTFI;

	[Token(Token = "0x170005D7")]
	private string CultureName
	{
		[Token(Token = "0x60028C6")]
		[Address(RVA = "0x1A66830", Offset = "0x1A64E30", VA = "0x181A66830")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005D8")]
	private CultureInfo Culture
	{
		[Token(Token = "0x60028C7")]
		[Address(RVA = "0x1A66870", Offset = "0x1A64E70", VA = "0x181A66870")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005D9")]
	private string LanguageName
	{
		[Token(Token = "0x60028C8")]
		[Address(RVA = "0x1A67430", Offset = "0x1A65A30", VA = "0x181A67430")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005DA")]
	public static DateTimeFormatInfo InvariantInfo
	{
		[Token(Token = "0x60028D4")]
		[Address(RVA = "0x1A67290", Offset = "0x1A65890", VA = "0x181A67290")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005DB")]
	public static DateTimeFormatInfo CurrentInfo
	{
		[Token(Token = "0x60028D5")]
		[Address(RVA = "0x1A66910", Offset = "0x1A64F10", VA = "0x181A66910")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005DC")]
	public string AMDesignator
	{
		[Token(Token = "0x60028D9")]
		[Address(RVA = "0x1A66130", Offset = "0x1A64730", VA = "0x181A66130")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005DD")]
	public Calendar Calendar
	{
		[Token(Token = "0x60028DA")]
		[Address(RVA = "0xCDB5A0", Offset = "0xCD9BA0", VA = "0x180CDB5A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60028DB")]
		[Address(RVA = "0x1A68160", Offset = "0x1A66760", VA = "0x181A68160")]
		set
		{
		}
	}

	[Token(Token = "0x170005DE")]
	private System.Globalization.CalendarId[] OptionalCalendars
	{
		[Token(Token = "0x60028DC")]
		[Address(RVA = "0x1A67730", Offset = "0x1A65D30", VA = "0x181A67730")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005DF")]
	internal string[] EraNames
	{
		[Token(Token = "0x60028DD")]
		[Address(RVA = "0x1A66D70", Offset = "0x1A65370", VA = "0x181A66D70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005E0")]
	internal string[] AbbreviatedEraNames
	{
		[Token(Token = "0x60028DF")]
		[Address(RVA = "0x1A66280", Offset = "0x1A64880", VA = "0x181A66280")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005E1")]
	internal string[] AbbreviatedEnglishEraNames
	{
		[Token(Token = "0x60028E1")]
		[Address(RVA = "0x1A66200", Offset = "0x1A64800", VA = "0x181A66200")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005E2")]
	public string DateSeparator
	{
		[Token(Token = "0x60028E2")]
		[Address(RVA = "0x1A66A10", Offset = "0x1A65010", VA = "0x181A66A10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005E3")]
	public string FullDateTimePattern
	{
		[Token(Token = "0x60028E3")]
		[Address(RVA = "0x1A66E10", Offset = "0x1A65410", VA = "0x181A66E10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005E4")]
	public string LongDatePattern
	{
		[Token(Token = "0x60028E4")]
		[Address(RVA = "0x1A67470", Offset = "0x1A65A70", VA = "0x181A67470")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005E5")]
	public string LongTimePattern
	{
		[Token(Token = "0x60028E5")]
		[Address(RVA = "0x1A674D0", Offset = "0x1A65AD0", VA = "0x181A674D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005E6")]
	public string MonthDayPattern
	{
		[Token(Token = "0x60028E6")]
		[Address(RVA = "0x1A67560", Offset = "0x1A65B60", VA = "0x181A67560")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005E7")]
	public string PMDesignator
	{
		[Token(Token = "0x60028E7")]
		[Address(RVA = "0x1A67780", Offset = "0x1A65D80", VA = "0x181A67780")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005E8")]
	public string RFC1123Pattern
	{
		[Token(Token = "0x60028E8")]
		[Address(RVA = "0x1A677C0", Offset = "0x1A65DC0", VA = "0x181A677C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005E9")]
	public string ShortDatePattern
	{
		[Token(Token = "0x60028E9")]
		[Address(RVA = "0x1A677F0", Offset = "0x1A65DF0", VA = "0x181A677F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005EA")]
	public string ShortTimePattern
	{
		[Token(Token = "0x60028EA")]
		[Address(RVA = "0x1A67850", Offset = "0x1A65E50", VA = "0x181A67850")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005EB")]
	public string SortableDateTimePattern
	{
		[Token(Token = "0x60028EB")]
		[Address(RVA = "0x1A678E0", Offset = "0x1A65EE0", VA = "0x181A678E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005EC")]
	internal string GeneralShortTimePattern
	{
		[Token(Token = "0x60028EC")]
		[Address(RVA = "0x1A67100", Offset = "0x1A65700", VA = "0x181A67100")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005ED")]
	internal string GeneralLongTimePattern
	{
		[Token(Token = "0x60028ED")]
		[Address(RVA = "0x1A67040", Offset = "0x1A65640", VA = "0x181A67040")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005EE")]
	internal string DateTimeOffsetPattern
	{
		[Token(Token = "0x60028EE")]
		[Address(RVA = "0x1A66A80", Offset = "0x1A65080", VA = "0x181A66A80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005EF")]
	public string TimeSeparator
	{
		[Token(Token = "0x60028EF")]
		[Address(RVA = "0x1A67910", Offset = "0x1A65F10", VA = "0x181A67910")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005F0")]
	public string UniversalSortableDateTimePattern
	{
		[Token(Token = "0x60028F0")]
		[Address(RVA = "0x1A67B70", Offset = "0x1A66170", VA = "0x181A67B70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005F1")]
	public string YearMonthPattern
	{
		[Token(Token = "0x60028F1")]
		[Address(RVA = "0x1A67BA0", Offset = "0x1A661A0", VA = "0x181A67BA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005F2")]
	public string[] AbbreviatedDayNames
	{
		[Token(Token = "0x60028F2")]
		[Address(RVA = "0x1A66170", Offset = "0x1A64770", VA = "0x181A66170")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005F3")]
	public string[] DayNames
	{
		[Token(Token = "0x60028F3")]
		[Address(RVA = "0x1A66CE0", Offset = "0x1A652E0", VA = "0x181A66CE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005F4")]
	public string[] AbbreviatedMonthNames
	{
		[Token(Token = "0x60028F4")]
		[Address(RVA = "0x1A66300", Offset = "0x1A64900", VA = "0x181A66300")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005F5")]
	public string[] MonthNames
	{
		[Token(Token = "0x60028F5")]
		[Address(RVA = "0x1A676A0", Offset = "0x1A65CA0", VA = "0x181A676A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005F6")]
	internal bool HasSpacesInMonthNames
	{
		[Token(Token = "0x60028F6")]
		[Address(RVA = "0x1A67230", Offset = "0x1A65830", VA = "0x181A67230")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170005F7")]
	internal bool HasSpacesInDayNames
	{
		[Token(Token = "0x60028F7")]
		[Address(RVA = "0x1A67200", Offset = "0x1A65800", VA = "0x181A67200")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170005F8")]
	private string[] AllYearMonthPatterns
	{
		[Token(Token = "0x6002902")]
		[Address(RVA = "0x1A66650", Offset = "0x1A64C50", VA = "0x181A66650")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005F9")]
	private string[] AllShortDatePatterns
	{
		[Token(Token = "0x6002903")]
		[Address(RVA = "0x1A664F0", Offset = "0x1A64AF0", VA = "0x181A664F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005FA")]
	private string[] AllShortTimePatterns
	{
		[Token(Token = "0x6002904")]
		[Address(RVA = "0x1A665A0", Offset = "0x1A64BA0", VA = "0x181A665A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005FB")]
	private string[] AllLongDatePatterns
	{
		[Token(Token = "0x6002905")]
		[Address(RVA = "0x1A66390", Offset = "0x1A64990", VA = "0x181A66390")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005FC")]
	private string[] AllLongTimePatterns
	{
		[Token(Token = "0x6002906")]
		[Address(RVA = "0x1A66440", Offset = "0x1A64A40", VA = "0x181A66440")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005FD")]
	private string[] UnclonedYearMonthPatterns
	{
		[Token(Token = "0x6002907")]
		[Address(RVA = "0x1A67AF0", Offset = "0x1A660F0", VA = "0x181A67AF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005FE")]
	private string[] UnclonedShortDatePatterns
	{
		[Token(Token = "0x6002908")]
		[Address(RVA = "0x1A67A20", Offset = "0x1A66020", VA = "0x181A67A20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005FF")]
	private string[] UnclonedLongDatePatterns
	{
		[Token(Token = "0x6002909")]
		[Address(RVA = "0x1A67950", Offset = "0x1A65F50", VA = "0x181A67950")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000600")]
	private string[] UnclonedShortTimePatterns
	{
		[Token(Token = "0x600290A")]
		[Address(RVA = "0x1A67AA0", Offset = "0x1A660A0", VA = "0x181A67AA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000601")]
	private string[] UnclonedLongTimePatterns
	{
		[Token(Token = "0x600290B")]
		[Address(RVA = "0x1A679D0", Offset = "0x1A65FD0", VA = "0x181A679D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000602")]
	public bool IsReadOnly
	{
		[Token(Token = "0x600290D")]
		[Address(RVA = "0x1A673A0", Offset = "0x1A659A0", VA = "0x181A673A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000603")]
	public string[] MonthGenitiveNames
	{
		[Token(Token = "0x600290E")]
		[Address(RVA = "0x1A675D0", Offset = "0x1A65BD0", VA = "0x181A675D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000604")]
	internal string FullTimeSpanPositivePattern
	{
		[Token(Token = "0x600290F")]
		[Address(RVA = "0x1A66F50", Offset = "0x1A65550", VA = "0x181A66F50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000605")]
	internal string FullTimeSpanNegativePattern
	{
		[Token(Token = "0x6002910")]
		[Address(RVA = "0x1A66EE0", Offset = "0x1A654E0", VA = "0x181A66EE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000606")]
	internal CompareInfo CompareInfo
	{
		[Token(Token = "0x6002911")]
		[Address(RVA = "0x1A66700", Offset = "0x1A64D00", VA = "0x181A66700")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000607")]
	internal System.Globalization.DateTimeFormatFlags FormatFlags
	{
		[Token(Token = "0x6002913")]
		[Address(RVA = "0x1A66DF0", Offset = "0x1A653F0", VA = "0x181A66DF0")]
		get
		{
			return default(System.Globalization.DateTimeFormatFlags);
		}
	}

	[Token(Token = "0x17000608")]
	internal bool HasForceTwoDigitYears
	{
		[Token(Token = "0x6002915")]
		[Address(RVA = "0x1A671C0", Offset = "0x1A657C0", VA = "0x181A671C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000609")]
	internal bool HasYearMonthAdjustment
	{
		[Token(Token = "0x6002916")]
		[Address(RVA = "0x1A67260", Offset = "0x1A65860", VA = "0x181A67260")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60028C9")]
	[Address(RVA = "0x1A67C70", Offset = "0x1A66270", VA = "0x181A67C70")]
	private string[] internalGetAbbreviatedDayOfWeekNames()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60028CA")]
	[Address(RVA = "0x1A67C00", Offset = "0x1A66200", VA = "0x181A67C00")]
	private string[] internalGetAbbreviatedDayOfWeekNamesCore()
	{
		return null;
	}

	[Token(Token = "0x60028CB")]
	[Address(RVA = "0x1A67D90", Offset = "0x1A66390", VA = "0x181A67D90")]
	private string[] internalGetDayOfWeekNames()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60028CC")]
	[Address(RVA = "0x1A67D20", Offset = "0x1A66320", VA = "0x181A67D20")]
	private string[] internalGetDayOfWeekNamesCore()
	{
		return null;
	}

	[Token(Token = "0x60028CD")]
	[Address(RVA = "0x1A67D00", Offset = "0x1A66300", VA = "0x181A67D00")]
	private string[] internalGetAbbreviatedMonthNames()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60028CE")]
	[Address(RVA = "0x1A67C90", Offset = "0x1A66290", VA = "0x181A67C90")]
	private string[] internalGetAbbreviatedMonthNamesCore()
	{
		return null;
	}

	[Token(Token = "0x60028CF")]
	[Address(RVA = "0x1A68140", Offset = "0x1A66740", VA = "0x181A68140")]
	private string[] internalGetMonthNames()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60028D0")]
	[Address(RVA = "0x1A680D0", Offset = "0x1A666D0", VA = "0x181A680D0")]
	private string[] internalGetMonthNamesCore()
	{
		return null;
	}

	[Token(Token = "0x60028D1")]
	[Address(RVA = "0x1A65E40", Offset = "0x1A64440", VA = "0x181A65E40")]
	public DateTimeFormatInfo()
	{
	}

	[Token(Token = "0x60028D2")]
	[Address(RVA = "0x1A660C0", Offset = "0x1A646C0", VA = "0x181A660C0")]
	internal DateTimeFormatInfo(System.Globalization.CultureData cultureData, Calendar cal)
	{
	}

	[Token(Token = "0x60028D3")]
	[Address(RVA = "0x1A637A0", Offset = "0x1A61DA0", VA = "0x181A637A0")]
	private void InitializeOverridableProperties(System.Globalization.CultureData cultureData, int calendarId)
	{
	}

	[Token(Token = "0x60028D6")]
	[Address(RVA = "0x1A62B20", Offset = "0x1A61120", VA = "0x181A62B20")]
	public static DateTimeFormatInfo GetInstance(IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x60028D7")]
	[Address(RVA = "0x1A62AA0", Offset = "0x1A610A0", VA = "0x181A62AA0", Slot = "4")]
	public object GetFormat(Type formatType)
	{
		return null;
	}

	[Token(Token = "0x60028D8")]
	[Address(RVA = "0x1A61160", Offset = "0x1A5F760", VA = "0x181A61160", Slot = "5")]
	public object Clone()
	{
		return null;
	}

	[Token(Token = "0x60028DE")]
	[Address(RVA = "0x1A62970", Offset = "0x1A60F70", VA = "0x181A62970")]
	public string GetEraName(int era)
	{
		return null;
	}

	[Token(Token = "0x60028E0")]
	[Address(RVA = "0x1A61FC0", Offset = "0x1A605C0", VA = "0x181A61FC0")]
	public string GetAbbreviatedEraName(int era)
	{
		return null;
	}

	[Token(Token = "0x60028F8")]
	[Address(RVA = "0x1A67F20", Offset = "0x1A66520", VA = "0x181A67F20")]
	internal string internalGetMonthName(int month, System.Globalization.MonthNameStyles style, bool abbreviated)
	{
		return null;
	}

	[Token(Token = "0x60028F9")]
	[Address(RVA = "0x1A67DB0", Offset = "0x1A663B0", VA = "0x181A67DB0")]
	private string[] internalGetGenitiveMonthNames(bool abbreviated)
	{
		return null;
	}

	[Token(Token = "0x60028FA")]
	[Address(RVA = "0x1A67EA0", Offset = "0x1A664A0", VA = "0x181A67EA0")]
	internal string[] internalGetLeapYearMonthNames()
	{
		return null;
	}

	[Token(Token = "0x60028FB")]
	[Address(RVA = "0x1A61EB0", Offset = "0x1A604B0", VA = "0x181A61EB0")]
	public string GetAbbreviatedDayName(DayOfWeek dayofweek)
	{
		return null;
	}

	[Token(Token = "0x60028FC")]
	[Address(RVA = "0x1A62750", Offset = "0x1A60D50", VA = "0x181A62750")]
	private static string[] GetCombinedPatterns(string[] patterns1, string[] patterns2, string connectString)
	{
		return null;
	}

	[Token(Token = "0x60028FD")]
	[Address(RVA = "0x1A62240", Offset = "0x1A60840", VA = "0x181A62240")]
	public string[] GetAllDateTimePatterns(char format)
	{
		return null;
	}

	[Token(Token = "0x60028FE")]
	[Address(RVA = "0x1A62860", Offset = "0x1A60E60", VA = "0x181A62860")]
	public string GetDayName(DayOfWeek dayofweek)
	{
		return null;
	}

	[Token(Token = "0x60028FF")]
	[Address(RVA = "0x1A62130", Offset = "0x1A60730", VA = "0x181A62130")]
	public string GetAbbreviatedMonthName(int month)
	{
		return null;
	}

	[Token(Token = "0x6002900")]
	[Address(RVA = "0x1A63040", Offset = "0x1A61640", VA = "0x181A63040")]
	public string GetMonthName(int month)
	{
		return null;
	}

	[Token(Token = "0x6002901")]
	[Address(RVA = "0x1A62E70", Offset = "0x1A61470", VA = "0x181A62E70")]
	private static string[] GetMergedPatterns(string[] patterns, string defaultPattern)
	{
		return null;
	}

	[Token(Token = "0x600290C")]
	[Address(RVA = "0x1A65170", Offset = "0x1A63770", VA = "0x181A65170")]
	public static DateTimeFormatInfo ReadOnly(DateTimeFormatInfo dtfi)
	{
		return null;
	}

	[Token(Token = "0x6002912")]
	[Address(RVA = "0x1A65B30", Offset = "0x1A64130", VA = "0x181A65B30")]
	internal static void ValidateStyles(DateTimeStyles style, string parameterName)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6002914")]
	[Address(RVA = "0x1A63300", Offset = "0x1A61900", VA = "0x181A63300")]
	private System.Globalization.DateTimeFormatFlags InitializeFormatFlags()
	{
		return default(System.Globalization.DateTimeFormatFlags);
	}

	[Token(Token = "0x6002917")]
	[Address(RVA = "0x1A65C60", Offset = "0x1A64260", VA = "0x181A65C60")]
	internal bool YearMonthAdjustment(ref int year, ref int month, bool parsedMonthName)
	{
		return default(bool);
	}

	[Token(Token = "0x6002918")]
	[Address(RVA = "0x1A62CC0", Offset = "0x1A612C0", VA = "0x181A62CC0")]
	internal static DateTimeFormatInfo GetJapaneseCalendarDTFI()
	{
		return null;
	}

	[Token(Token = "0x6002919")]
	[Address(RVA = "0x1A63150", Offset = "0x1A61750", VA = "0x181A63150")]
	internal static DateTimeFormatInfo GetTaiwanCalendarDTFI()
	{
		return null;
	}

	[Token(Token = "0x600291A")]
	[Address(RVA = "0x1A61120", Offset = "0x1A5F720", VA = "0x181A61120")]
	private void ClearTokenHashTable()
	{
	}

	[Token(Token = "0x600291B")]
	[Address(RVA = "0x1A613A0", Offset = "0x1A5F9A0", VA = "0x181A613A0")]
	internal TokenHashValue[] CreateTokenHashTable()
	{
		return null;
	}

	[Token(Token = "0x600291C")]
	[Address(RVA = "0x1A64220", Offset = "0x1A62820", VA = "0x181A64220")]
	private void PopulateSpecialTokenHashTable(TokenHashValue[] temp, ref bool useDateSepAsIgnorableSymbol)
	{
	}

	[Token(Token = "0x600291D")]
	[Address(RVA = "0x1A640F0", Offset = "0x1A626F0", VA = "0x181A640F0")]
	private static bool IsJapaneseCalendar(Calendar calendar)
	{
		return default(bool);
	}

	[Token(Token = "0x600291E")]
	[Address(RVA = "0x1A61070", Offset = "0x1A5F670", VA = "0x181A61070")]
	private void AddMonthNames(TokenHashValue[] temp, string monthPostfix)
	{
	}

	[Token(Token = "0x600291F")]
	[Address(RVA = "0x1A65940", Offset = "0x1A63F40", VA = "0x181A65940")]
	private static bool TryParseHebrewNumber(ref System.__DTString str, out bool badFormat, out int number)
	{
		return default(bool);
	}

	[Token(Token = "0x6002920")]
	[Address(RVA = "0x1A640D0", Offset = "0x1A626D0", VA = "0x181A640D0")]
	private static bool IsHebrewChar(char ch)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002921")]
	[Address(RVA = "0x1A63FC0", Offset = "0x1A625C0", VA = "0x181A63FC0")]
	private bool IsAllowedJapaneseTokenFollowedByNonSpaceLetter(string tokenString, char nextCh)
	{
		return default(bool);
	}

	[Token(Token = "0x6002922")]
	[Address(RVA = "0x1A65290", Offset = "0x1A63890", VA = "0x181A65290")]
	internal bool Tokenize(System.TokenType TokenMask, out System.TokenType tokenType, out int tokenValue, ref System.__DTString str)
	{
		return default(bool);
	}

	[Token(Token = "0x6002923")]
	[Address(RVA = "0x1A63960", Offset = "0x1A61F60", VA = "0x181A63960")]
	private void InsertAtCurrentHashNode(TokenHashValue[] hashTable, string str, char ch, System.TokenType tokenType, int tokenValue, int pos, int hashcode, int hashProbe)
	{
	}

	[Token(Token = "0x6002924")]
	[Address(RVA = "0x1A63BB0", Offset = "0x1A621B0", VA = "0x181A63BB0")]
	private void InsertHash(TokenHashValue[] hashTable, string str, System.TokenType tokenType, int tokenValue)
	{
	}

	[Token(Token = "0x6002925")]
	[Address(RVA = "0x1A612A0", Offset = "0x1A5F8A0", VA = "0x181A612A0")]
	private bool CompareStringIgnoreCaseOptimized(string string1, int offset1, int length1, string string2, int offset2, int length2)
	{
		return default(bool);
	}
}
