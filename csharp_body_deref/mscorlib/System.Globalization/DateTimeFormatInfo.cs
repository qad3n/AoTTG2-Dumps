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
[Token(Token = "0x200059B")]
public sealed class DateTimeFormatInfo : IFormatProvider, ICloneable
{
	[Token(Token = "0x200059C")]
	internal class TokenHashValue
	{
		[Token(Token = "0x40017E1")]
		[FieldOffset(Offset = "0x10")]
		internal string tokenString;

		[Token(Token = "0x40017E2")]
		[FieldOffset(Offset = "0x18")]
		internal System.TokenType tokenType;

		[Token(Token = "0x40017E3")]
		[FieldOffset(Offset = "0x1C")]
		internal int tokenValue;

		[Token(Token = "0x6002C09")]
		[Address(RVA = "0x3C48C80", Offset = "0x3C48C80", VA = "0x3C48C80")]
		internal TokenHashValue(string tokenString, System.TokenType tokenType, int tokenValue)
		{
		}
	}

	[Token(Token = "0x400178F")]
	[FieldOffset(Offset = "0x0")]
	private static DateTimeFormatInfo s_invariantInfo;

	[NonSerialized]
	[Token(Token = "0x4001790")]
	[FieldOffset(Offset = "0x10")]
	private System.Globalization.CultureData _cultureData;

	[Token(Token = "0x4001791")]
	[FieldOffset(Offset = "0x18")]
	private string _name;

	[NonSerialized]
	[Token(Token = "0x4001792")]
	[FieldOffset(Offset = "0x20")]
	private string _langName;

	[NonSerialized]
	[Token(Token = "0x4001793")]
	[FieldOffset(Offset = "0x28")]
	private CompareInfo _compareInfo;

	[NonSerialized]
	[Token(Token = "0x4001794")]
	[FieldOffset(Offset = "0x30")]
	private CultureInfo _cultureInfo;

	[Token(Token = "0x4001795")]
	[FieldOffset(Offset = "0x38")]
	private string amDesignator;

	[Token(Token = "0x4001796")]
	[FieldOffset(Offset = "0x40")]
	private string pmDesignator;

	[Token(Token = "0x4001797")]
	[FieldOffset(Offset = "0x48")]
	private string dateSeparator;

	[Token(Token = "0x4001798")]
	[FieldOffset(Offset = "0x50")]
	private string generalShortTimePattern;

	[Token(Token = "0x4001799")]
	[FieldOffset(Offset = "0x58")]
	private string generalLongTimePattern;

	[Token(Token = "0x400179A")]
	[FieldOffset(Offset = "0x60")]
	private string timeSeparator;

	[Token(Token = "0x400179B")]
	[FieldOffset(Offset = "0x68")]
	private string monthDayPattern;

	[Token(Token = "0x400179C")]
	[FieldOffset(Offset = "0x70")]
	private string dateTimeOffsetPattern;

	[Token(Token = "0x400179D")]
	private const string rfc1123Pattern = "ddd, dd MMM yyyy HH':'mm':'ss 'GMT'";

	[Token(Token = "0x400179E")]
	private const string sortableDateTimePattern = "yyyy'-'MM'-'dd'T'HH':'mm':'ss";

	[Token(Token = "0x400179F")]
	private const string universalSortableDateTimePattern = "yyyy'-'MM'-'dd HH':'mm':'ss'Z'";

	[Token(Token = "0x40017A0")]
	[FieldOffset(Offset = "0x78")]
	private Calendar calendar;

	[Token(Token = "0x40017A1")]
	[FieldOffset(Offset = "0x80")]
	private int firstDayOfWeek;

	[Token(Token = "0x40017A2")]
	[FieldOffset(Offset = "0x84")]
	private int calendarWeekRule;

	[Token(Token = "0x40017A3")]
	[FieldOffset(Offset = "0x88")]
	private string fullDateTimePattern;

	[Token(Token = "0x40017A4")]
	[FieldOffset(Offset = "0x90")]
	private string[] abbreviatedDayNames;

	[Token(Token = "0x40017A5")]
	[FieldOffset(Offset = "0x98")]
	private string[] m_superShortDayNames;

	[Token(Token = "0x40017A6")]
	[FieldOffset(Offset = "0xA0")]
	private string[] dayNames;

	[Token(Token = "0x40017A7")]
	[FieldOffset(Offset = "0xA8")]
	private string[] abbreviatedMonthNames;

	[Token(Token = "0x40017A8")]
	[FieldOffset(Offset = "0xB0")]
	private string[] monthNames;

	[Token(Token = "0x40017A9")]
	[FieldOffset(Offset = "0xB8")]
	private string[] genitiveMonthNames;

	[Token(Token = "0x40017AA")]
	[FieldOffset(Offset = "0xC0")]
	private string[] m_genitiveAbbreviatedMonthNames;

	[Token(Token = "0x40017AB")]
	[FieldOffset(Offset = "0xC8")]
	private string[] leapYearMonthNames;

	[Token(Token = "0x40017AC")]
	[FieldOffset(Offset = "0xD0")]
	private string longDatePattern;

	[Token(Token = "0x40017AD")]
	[FieldOffset(Offset = "0xD8")]
	private string shortDatePattern;

	[Token(Token = "0x40017AE")]
	[FieldOffset(Offset = "0xE0")]
	private string yearMonthPattern;

	[Token(Token = "0x40017AF")]
	[FieldOffset(Offset = "0xE8")]
	private string longTimePattern;

	[Token(Token = "0x40017B0")]
	[FieldOffset(Offset = "0xF0")]
	private string shortTimePattern;

	[Token(Token = "0x40017B1")]
	[FieldOffset(Offset = "0xF8")]
	private string[] allYearMonthPatterns;

	[Token(Token = "0x40017B2")]
	[FieldOffset(Offset = "0x100")]
	private string[] allShortDatePatterns;

	[Token(Token = "0x40017B3")]
	[FieldOffset(Offset = "0x108")]
	private string[] allLongDatePatterns;

	[Token(Token = "0x40017B4")]
	[FieldOffset(Offset = "0x110")]
	private string[] allShortTimePatterns;

	[Token(Token = "0x40017B5")]
	[FieldOffset(Offset = "0x118")]
	private string[] allLongTimePatterns;

	[Token(Token = "0x40017B6")]
	[FieldOffset(Offset = "0x120")]
	private string[] m_eraNames;

	[Token(Token = "0x40017B7")]
	[FieldOffset(Offset = "0x128")]
	private string[] m_abbrevEraNames;

	[Token(Token = "0x40017B8")]
	[FieldOffset(Offset = "0x130")]
	private string[] m_abbrevEnglishEraNames;

	[Token(Token = "0x40017B9")]
	[FieldOffset(Offset = "0x138")]
	private System.Globalization.CalendarId[] optionalCalendars;

	[Token(Token = "0x40017BA")]
	private const int DEFAULT_ALL_DATETIMES_SIZE = 132;

	[Token(Token = "0x40017BB")]
	[FieldOffset(Offset = "0x140")]
	internal bool _isReadOnly;

	[Token(Token = "0x40017BC")]
	[FieldOffset(Offset = "0x144")]
	private System.Globalization.DateTimeFormatFlags formatFlags;

	[Token(Token = "0x40017BD")]
	[FieldOffset(Offset = "0x8")]
	private static readonly char[] s_monthSpaces;

	[Token(Token = "0x40017BE")]
	internal const string RoundtripFormat = "yyyy'-'MM'-'dd'T'HH':'mm':'ss.fffffffK";

	[Token(Token = "0x40017BF")]
	internal const string RoundtripDateTimeUnfixed = "yyyy'-'MM'-'ddTHH':'mm':'ss zzz";

	[Token(Token = "0x40017C0")]
	[FieldOffset(Offset = "0x148")]
	private string _fullTimeSpanPositivePattern;

	[Token(Token = "0x40017C1")]
	[FieldOffset(Offset = "0x150")]
	private string _fullTimeSpanNegativePattern;

	[Token(Token = "0x40017C2")]
	internal const DateTimeStyles InvalidDateTimeStyles = ~(DateTimeStyles.AllowWhiteSpaces | DateTimeStyles.NoCurrentDateDefault | DateTimeStyles.AdjustToUniversal | DateTimeStyles.AssumeLocal | DateTimeStyles.AssumeUniversal | DateTimeStyles.RoundtripKind);

	[NonSerialized]
	[Token(Token = "0x40017C3")]
	[FieldOffset(Offset = "0x158")]
	private TokenHashValue[] _dtfiTokenHash;

	[Token(Token = "0x40017C4")]
	private const int TOKEN_HASH_SIZE = 199;

	[Token(Token = "0x40017C5")]
	private const int SECOND_PRIME = 197;

	[Token(Token = "0x40017C6")]
	private const string dateSeparatorOrTimeZoneOffset = "-";

	[Token(Token = "0x40017C7")]
	private const string invariantDateSeparator = "/";

	[Token(Token = "0x40017C8")]
	private const string invariantTimeSeparator = ":";

	[Token(Token = "0x40017C9")]
	internal const string IgnorablePeriod = ".";

	[Token(Token = "0x40017CA")]
	internal const string IgnorableComma = ",";

	[Token(Token = "0x40017CB")]
	internal const string CJKYearSuff = "年";

	[Token(Token = "0x40017CC")]
	internal const string CJKMonthSuff = "月";

	[Token(Token = "0x40017CD")]
	internal const string CJKDaySuff = "日";

	[Token(Token = "0x40017CE")]
	internal const string KoreanYearSuff = "년";

	[Token(Token = "0x40017CF")]
	internal const string KoreanMonthSuff = "월";

	[Token(Token = "0x40017D0")]
	internal const string KoreanDaySuff = "일";

	[Token(Token = "0x40017D1")]
	internal const string KoreanHourSuff = "시";

	[Token(Token = "0x40017D2")]
	internal const string KoreanMinuteSuff = "분";

	[Token(Token = "0x40017D3")]
	internal const string KoreanSecondSuff = "초";

	[Token(Token = "0x40017D4")]
	internal const string CJKHourSuff = "時";

	[Token(Token = "0x40017D5")]
	internal const string ChineseHourSuff = "时";

	[Token(Token = "0x40017D6")]
	internal const string CJKMinuteSuff = "分";

	[Token(Token = "0x40017D7")]
	internal const string CJKSecondSuff = "秒";

	[Token(Token = "0x40017D8")]
	internal const string JapaneseEraStart = "元";

	[Token(Token = "0x40017D9")]
	internal const string LocalTimeMark = "T";

	[Token(Token = "0x40017DA")]
	internal const string GMTName = "GMT";

	[Token(Token = "0x40017DB")]
	internal const string ZuluName = "Z";

	[Token(Token = "0x40017DC")]
	internal const string KoreanLangName = "ko";

	[Token(Token = "0x40017DD")]
	internal const string JapaneseLangName = "ja";

	[Token(Token = "0x40017DE")]
	internal const string EnglishLangName = "en";

	[Token(Token = "0x40017DF")]
	[FieldOffset(Offset = "0x10")]
	private static DateTimeFormatInfo s_jajpDTFI;

	[Token(Token = "0x40017E0")]
	[FieldOffset(Offset = "0x18")]
	private static DateTimeFormatInfo s_zhtwDTFI;

	[Token(Token = "0x17000648")]
	private string CultureName
	{
		[Token(Token = "0x6002BA8")]
		[Address(RVA = "0x3C40850", Offset = "0x3C40850", VA = "0x3C40850")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000649")]
	private CultureInfo Culture
	{
		[Token(Token = "0x6002BA9")]
		[Address(RVA = "0x3C40890", Offset = "0x3C40890", VA = "0x3C40890")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700064A")]
	private string LanguageName
	{
		[Token(Token = "0x6002BAA")]
		[Address(RVA = "0x3C40930", Offset = "0x3C40930", VA = "0x3C40930")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700064B")]
	public static DateTimeFormatInfo InvariantInfo
	{
		[Token(Token = "0x6002BB6")]
		[Address(RVA = "0x3C41550", Offset = "0x3C41550", VA = "0x3C41550")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700064C")]
	public static DateTimeFormatInfo CurrentInfo
	{
		[Token(Token = "0x6002BB7")]
		[Address(RVA = "0x3C41650", Offset = "0x3C41650", VA = "0x3C41650")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700064D")]
	public string AMDesignator
	{
		[Token(Token = "0x6002BBB")]
		[Address(RVA = "0x3C41AB0", Offset = "0x3C41AB0", VA = "0x3C41AB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700064E")]
	public Calendar Calendar
	{
		[Token(Token = "0x6002BBC")]
		[Address(RVA = "0x3C41AF0", Offset = "0x3C41AF0", VA = "0x3C41AF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002BBD")]
		[Address(RVA = "0x3C40F50", Offset = "0x3C40F50", VA = "0x3C40F50")]
		set
		{
		}
	}

	[Token(Token = "0x1700064F")]
	private System.Globalization.CalendarId[] OptionalCalendars
	{
		[Token(Token = "0x6002BBE")]
		[Address(RVA = "0x3C41BD0", Offset = "0x3C41BD0", VA = "0x3C41BD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000650")]
	internal string[] EraNames
	{
		[Token(Token = "0x6002BBF")]
		[Address(RVA = "0x3C41C50", Offset = "0x3C41C50", VA = "0x3C41C50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000651")]
	internal string[] AbbreviatedEraNames
	{
		[Token(Token = "0x6002BC1")]
		[Address(RVA = "0x3C41DF0", Offset = "0x3C41DF0", VA = "0x3C41DF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000652")]
	internal string[] AbbreviatedEnglishEraNames
	{
		[Token(Token = "0x6002BC3")]
		[Address(RVA = "0x3C41FA0", Offset = "0x3C41FA0", VA = "0x3C41FA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000653")]
	public string DateSeparator
	{
		[Token(Token = "0x6002BC4")]
		[Address(RVA = "0x3C42010", Offset = "0x3C42010", VA = "0x3C42010")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000654")]
	public string FullDateTimePattern
	{
		[Token(Token = "0x6002BC5")]
		[Address(RVA = "0x3C42080", Offset = "0x3C42080", VA = "0x3C42080")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000655")]
	public string LongDatePattern
	{
		[Token(Token = "0x6002BC6")]
		[Address(RVA = "0x3C42120", Offset = "0x3C42120", VA = "0x3C42120")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000656")]
	public string LongTimePattern
	{
		[Token(Token = "0x6002BC7")]
		[Address(RVA = "0x3C421C0", Offset = "0x3C421C0", VA = "0x3C421C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000657")]
	public string MonthDayPattern
	{
		[Token(Token = "0x6002BC8")]
		[Address(RVA = "0x3C42310", Offset = "0x3C42310", VA = "0x3C42310")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000658")]
	public string PMDesignator
	{
		[Token(Token = "0x6002BC9")]
		[Address(RVA = "0x3C42380", Offset = "0x3C42380", VA = "0x3C42380")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000659")]
	public string RFC1123Pattern
	{
		[Token(Token = "0x6002BCA")]
		[Address(RVA = "0x3C423C0", Offset = "0x3C423C0", VA = "0x3C423C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700065A")]
	public string ShortDatePattern
	{
		[Token(Token = "0x6002BCB")]
		[Address(RVA = "0x3C423F0", Offset = "0x3C423F0", VA = "0x3C423F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700065B")]
	public string ShortTimePattern
	{
		[Token(Token = "0x6002BCC")]
		[Address(RVA = "0x3C42500", Offset = "0x3C42500", VA = "0x3C42500")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700065C")]
	public string SortableDateTimePattern
	{
		[Token(Token = "0x6002BCD")]
		[Address(RVA = "0x3C425E0", Offset = "0x3C425E0", VA = "0x3C425E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700065D")]
	internal string GeneralShortTimePattern
	{
		[Token(Token = "0x6002BCE")]
		[Address(RVA = "0x3C42610", Offset = "0x3C42610", VA = "0x3C42610")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700065E")]
	internal string GeneralLongTimePattern
	{
		[Token(Token = "0x6002BCF")]
		[Address(RVA = "0x3C426A0", Offset = "0x3C426A0", VA = "0x3C426A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700065F")]
	internal string DateTimeOffsetPattern
	{
		[Token(Token = "0x6002BD0")]
		[Address(RVA = "0x3C42730", Offset = "0x3C42730", VA = "0x3C42730")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000660")]
	public string TimeSeparator
	{
		[Token(Token = "0x6002BD1")]
		[Address(RVA = "0x3C42930", Offset = "0x3C42930", VA = "0x3C42930")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000661")]
	public string UniversalSortableDateTimePattern
	{
		[Token(Token = "0x6002BD2")]
		[Address(RVA = "0x3C42970", Offset = "0x3C42970", VA = "0x3C42970")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000662")]
	public string YearMonthPattern
	{
		[Token(Token = "0x6002BD3")]
		[Address(RVA = "0x3C429A0", Offset = "0x3C429A0", VA = "0x3C429A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000663")]
	public string[] AbbreviatedDayNames
	{
		[Token(Token = "0x6002BD4")]
		[Address(RVA = "0x3C42AB0", Offset = "0x3C42AB0", VA = "0x3C42AB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000664")]
	public string[] DayNames
	{
		[Token(Token = "0x6002BD5")]
		[Address(RVA = "0x3C42B40", Offset = "0x3C42B40", VA = "0x3C42B40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000665")]
	public string[] AbbreviatedMonthNames
	{
		[Token(Token = "0x6002BD6")]
		[Address(RVA = "0x3C42BD0", Offset = "0x3C42BD0", VA = "0x3C42BD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000666")]
	public string[] MonthNames
	{
		[Token(Token = "0x6002BD7")]
		[Address(RVA = "0x3C42C60", Offset = "0x3C42C60", VA = "0x3C42C60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000667")]
	internal bool HasSpacesInMonthNames
	{
		[Token(Token = "0x6002BD8")]
		[Address(RVA = "0x3C42CF0", Offset = "0x3C42CF0", VA = "0x3C42CF0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000668")]
	internal bool HasSpacesInDayNames
	{
		[Token(Token = "0x6002BD9")]
		[Address(RVA = "0x3C42D40", Offset = "0x3C42D40", VA = "0x3C42D40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000669")]
	private string[] AllYearMonthPatterns
	{
		[Token(Token = "0x6002BE4")]
		[Address(RVA = "0x3C438E0", Offset = "0x3C438E0", VA = "0x3C438E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700066A")]
	private string[] AllShortDatePatterns
	{
		[Token(Token = "0x6002BE5")]
		[Address(RVA = "0x3C43640", Offset = "0x3C43640", VA = "0x3C43640")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700066B")]
	private string[] AllShortTimePatterns
	{
		[Token(Token = "0x6002BE6")]
		[Address(RVA = "0x3C437A0", Offset = "0x3C437A0", VA = "0x3C437A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700066C")]
	private string[] AllLongDatePatterns
	{
		[Token(Token = "0x6002BE7")]
		[Address(RVA = "0x3C436F0", Offset = "0x3C436F0", VA = "0x3C436F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700066D")]
	private string[] AllLongTimePatterns
	{
		[Token(Token = "0x6002BE8")]
		[Address(RVA = "0x3C43840", Offset = "0x3C43840", VA = "0x3C43840")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700066E")]
	private string[] UnclonedYearMonthPatterns
	{
		[Token(Token = "0x6002BE9")]
		[Address(RVA = "0x3C42A40", Offset = "0x3C42A40", VA = "0x3C42A40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700066F")]
	private string[] UnclonedShortDatePatterns
	{
		[Token(Token = "0x6002BEA")]
		[Address(RVA = "0x3C42490", Offset = "0x3C42490", VA = "0x3C42490")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000670")]
	private string[] UnclonedLongDatePatterns
	{
		[Token(Token = "0x6002BEB")]
		[Address(RVA = "0x3C42250", Offset = "0x3C42250", VA = "0x3C42250")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000671")]
	private string[] UnclonedShortTimePatterns
	{
		[Token(Token = "0x6002BEC")]
		[Address(RVA = "0x3C42590", Offset = "0x3C42590", VA = "0x3C42590")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000672")]
	private string[] UnclonedLongTimePatterns
	{
		[Token(Token = "0x6002BED")]
		[Address(RVA = "0x3C422C0", Offset = "0x3C422C0", VA = "0x3C422C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000673")]
	public bool IsReadOnly
	{
		[Token(Token = "0x6002BEF")]
		[Address(RVA = "0x3C41B00", Offset = "0x3C41B00", VA = "0x3C41B00")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000674")]
	public string[] MonthGenitiveNames
	{
		[Token(Token = "0x6002BF0")]
		[Address(RVA = "0x3C440E0", Offset = "0x3C440E0", VA = "0x3C440E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000675")]
	internal string FullTimeSpanPositivePattern
	{
		[Token(Token = "0x6002BF1")]
		[Address(RVA = "0x3C441B0", Offset = "0x3C441B0", VA = "0x3C441B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000676")]
	internal string FullTimeSpanNegativePattern
	{
		[Token(Token = "0x6002BF2")]
		[Address(RVA = "0x3C44290", Offset = "0x3C44290", VA = "0x3C44290")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000677")]
	internal CompareInfo CompareInfo
	{
		[Token(Token = "0x6002BF3")]
		[Address(RVA = "0x3C44320", Offset = "0x3C44320", VA = "0x3C44320")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000678")]
	internal System.Globalization.DateTimeFormatFlags FormatFlags
	{
		[Token(Token = "0x6002BF5")]
		[Address(RVA = "0x3C42D20", Offset = "0x3C42D20", VA = "0x3C42D20")]
		get
		{
			return default(System.Globalization.DateTimeFormatFlags);
		}
	}

	[Token(Token = "0x17000679")]
	internal bool HasForceTwoDigitYears
	{
		[Token(Token = "0x6002BF7")]
		[Address(RVA = "0x3C44820", Offset = "0x3C44820", VA = "0x3C44820")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700067A")]
	internal bool HasYearMonthAdjustment
	{
		[Token(Token = "0x6002BF8")]
		[Address(RVA = "0x3C44850", Offset = "0x3C44850", VA = "0x3C44850")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6002BAB")]
	[Address(RVA = "0x3C40970", Offset = "0x3C40970", VA = "0x3C40970")]
	private string[] internalGetAbbreviatedDayOfWeekNames()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6002BAC")]
	[Address(RVA = "0x3C40980", Offset = "0x3C40980", VA = "0x3C40980")]
	private string[] internalGetAbbreviatedDayOfWeekNamesCore()
	{
		return null;
	}

	[Token(Token = "0x6002BAD")]
	[Address(RVA = "0x3C409E0", Offset = "0x3C409E0", VA = "0x3C409E0")]
	private string[] internalGetDayOfWeekNames()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6002BAE")]
	[Address(RVA = "0x3C409F0", Offset = "0x3C409F0", VA = "0x3C409F0")]
	private string[] internalGetDayOfWeekNamesCore()
	{
		return null;
	}

	[Token(Token = "0x6002BAF")]
	[Address(RVA = "0x3C40A50", Offset = "0x3C40A50", VA = "0x3C40A50")]
	private string[] internalGetAbbreviatedMonthNames()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6002BB0")]
	[Address(RVA = "0x3C40A60", Offset = "0x3C40A60", VA = "0x3C40A60")]
	private string[] internalGetAbbreviatedMonthNamesCore()
	{
		return null;
	}

	[Token(Token = "0x6002BB1")]
	[Address(RVA = "0x3C40AC0", Offset = "0x3C40AC0", VA = "0x3C40AC0")]
	private string[] internalGetMonthNames()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6002BB2")]
	[Address(RVA = "0x3C40AD0", Offset = "0x3C40AD0", VA = "0x3C40AD0")]
	private string[] internalGetMonthNamesCore()
	{
		return null;
	}

	[Token(Token = "0x6002BB3")]
	[Address(RVA = "0x3C40B30", Offset = "0x3C40B30", VA = "0x3C40B30")]
	public DateTimeFormatInfo()
	{
	}

	[Token(Token = "0x6002BB4")]
	[Address(RVA = "0x3C40F00", Offset = "0x3C40F00", VA = "0x3C40F00")]
	internal DateTimeFormatInfo(System.Globalization.CultureData cultureData, Calendar cal)
	{
	}

	[Token(Token = "0x6002BB5")]
	[Address(RVA = "0x3C40D10", Offset = "0x3C40D10", VA = "0x3C40D10")]
	private void InitializeOverridableProperties(System.Globalization.CultureData cultureData, int calendarId)
	{
	}

	[Token(Token = "0x6002BB8")]
	[Address(RVA = "0x3C41780", Offset = "0x3C41780", VA = "0x3C41780")]
	public static DateTimeFormatInfo GetInstance(IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6002BB9")]
	[Address(RVA = "0x3C41920", Offset = "0x3C41920", VA = "0x3C41920", Slot = "4")]
	public object GetFormat(Type formatType)
	{
		return null;
	}

	[Token(Token = "0x6002BBA")]
	[Address(RVA = "0x3C419A0", Offset = "0x3C419A0", VA = "0x3C419A0", Slot = "5")]
	public object Clone()
	{
		return null;
	}

	[Token(Token = "0x6002BC0")]
	[Address(RVA = "0x3C41CC0", Offset = "0x3C41CC0", VA = "0x3C41CC0")]
	public string GetEraName(int era)
	{
		return null;
	}

	[Token(Token = "0x6002BC2")]
	[Address(RVA = "0x3C41E60", Offset = "0x3C41E60", VA = "0x3C41E60")]
	public string GetAbbreviatedEraName(int era)
	{
		return null;
	}

	[Token(Token = "0x6002BDA")]
	[Address(RVA = "0x3C42D70", Offset = "0x3C42D70", VA = "0x3C42D70")]
	internal string internalGetMonthName(int month, System.Globalization.MonthNameStyles style, bool abbreviated)
	{
		return null;
	}

	[Token(Token = "0x6002BDB")]
	[Address(RVA = "0x3C42F20", Offset = "0x3C42F20", VA = "0x3C42F20")]
	private string[] internalGetGenitiveMonthNames(bool abbreviated)
	{
		return null;
	}

	[Token(Token = "0x6002BDC")]
	[Address(RVA = "0x3C42FE0", Offset = "0x3C42FE0", VA = "0x3C42FE0")]
	internal string[] internalGetLeapYearMonthNames()
	{
		return null;
	}

	[Token(Token = "0x6002BDD")]
	[Address(RVA = "0x3C43050", Offset = "0x3C43050", VA = "0x3C43050")]
	public string GetAbbreviatedDayName(DayOfWeek dayofweek)
	{
		return null;
	}

	[Token(Token = "0x6002BDE")]
	[Address(RVA = "0x3C43150", Offset = "0x3C43150", VA = "0x3C43150")]
	private static string[] GetCombinedPatterns(string[] patterns1, string[] patterns2, string connectString)
	{
		return null;
	}

	[Token(Token = "0x6002BDF")]
	[Address(RVA = "0x3C432A0", Offset = "0x3C432A0", VA = "0x3C432A0")]
	public string[] GetAllDateTimePatterns(char format)
	{
		return null;
	}

	[Token(Token = "0x6002BE0")]
	[Address(RVA = "0x3C43990", Offset = "0x3C43990", VA = "0x3C43990")]
	public string GetDayName(DayOfWeek dayofweek)
	{
		return null;
	}

	[Token(Token = "0x6002BE1")]
	[Address(RVA = "0x3C43A90", Offset = "0x3C43A90", VA = "0x3C43A90")]
	public string GetAbbreviatedMonthName(int month)
	{
		return null;
	}

	[Token(Token = "0x6002BE2")]
	[Address(RVA = "0x3C43B80", Offset = "0x3C43B80", VA = "0x3C43B80")]
	public string GetMonthName(int month)
	{
		return null;
	}

	[Token(Token = "0x6002BE3")]
	[Address(RVA = "0x3C43C70", Offset = "0x3C43C70", VA = "0x3C43C70")]
	private static string[] GetMergedPatterns(string[] patterns, string defaultPattern)
	{
		return null;
	}

	[Token(Token = "0x6002BEE")]
	[Address(RVA = "0x3C43E40", Offset = "0x3C43E40", VA = "0x3C43E40")]
	public static DateTimeFormatInfo ReadOnly(DateTimeFormatInfo dtfi)
	{
		return null;
	}

	[Token(Token = "0x6002BF4")]
	[Address(RVA = "0x3C443B0", Offset = "0x3C443B0", VA = "0x3C443B0")]
	internal static void ValidateStyles(DateTimeStyles style, string parameterName)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6002BF6")]
	[Address(RVA = "0x3C44470", Offset = "0x3C44470", VA = "0x3C44470")]
	private System.Globalization.DateTimeFormatFlags InitializeFormatFlags()
	{
		return default(System.Globalization.DateTimeFormatFlags);
	}

	[Token(Token = "0x6002BF9")]
	[Address(RVA = "0x3C44880", Offset = "0x3C44880", VA = "0x3C44880")]
	internal bool YearMonthAdjustment(ref int year, ref int month, bool parsedMonthName)
	{
		return default(bool);
	}

	[Token(Token = "0x6002BFA")]
	[Address(RVA = "0x3C449B0", Offset = "0x3C449B0", VA = "0x3C449B0")]
	internal static DateTimeFormatInfo GetJapaneseCalendarDTFI()
	{
		return null;
	}

	[Token(Token = "0x6002BFB")]
	[Address(RVA = "0x3C44B70", Offset = "0x3C44B70", VA = "0x3C44B70")]
	internal static DateTimeFormatInfo GetTaiwanCalendarDTFI()
	{
		return null;
	}

	[Token(Token = "0x6002BFC")]
	[Address(RVA = "0x3C41C20", Offset = "0x3C41C20", VA = "0x3C41C20")]
	private void ClearTokenHashTable()
	{
	}

	[Token(Token = "0x6002BFD")]
	[Address(RVA = "0x3C44D30", Offset = "0x3C44D30", VA = "0x3C44D30")]
	internal TokenHashValue[] CreateTokenHashTable()
	{
		return null;
	}

	[Token(Token = "0x6002BFE")]
	[Address(RVA = "0x3C46B00", Offset = "0x3C46B00", VA = "0x3C46B00")]
	private void PopulateSpecialTokenHashTable(TokenHashValue[] temp, ref bool useDateSepAsIgnorableSymbol)
	{
	}

	[Token(Token = "0x6002BFF")]
	[Address(RVA = "0x3C47D70", Offset = "0x3C47D70", VA = "0x3C47D70")]
	private static bool IsJapaneseCalendar(Calendar calendar)
	{
		return default(bool);
	}

	[Token(Token = "0x6002C00")]
	[Address(RVA = "0x3C47710", Offset = "0x3C47710", VA = "0x3C47710")]
	private void AddMonthNames(TokenHashValue[] temp, string monthPostfix)
	{
	}

	[Token(Token = "0x6002C01")]
	[Address(RVA = "0x3C47EF0", Offset = "0x3C47EF0", VA = "0x3C47EF0")]
	private static bool TryParseHebrewNumber(ref System.__DTString str, out bool badFormat, out int number)
	{
		return default(bool);
	}

	[Token(Token = "0x6002C02")]
	[Address(RVA = "0x3C482E0", Offset = "0x3C482E0", VA = "0x3C482E0")]
	private static bool IsHebrewChar(char ch)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002C03")]
	[Address(RVA = "0x3C482F0", Offset = "0x3C482F0", VA = "0x3C482F0")]
	private bool IsAllowedJapaneseTokenFollowedByNonSpaceLetter(string tokenString, char nextCh)
	{
		return default(bool);
	}

	[Token(Token = "0x6002C04")]
	[Address(RVA = "0x3C483D0", Offset = "0x3C483D0", VA = "0x3C483D0")]
	internal bool Tokenize(System.TokenType TokenMask, out System.TokenType tokenType, out int tokenValue, ref System.__DTString str)
	{
		return default(bool);
	}

	[Token(Token = "0x6002C05")]
	[Address(RVA = "0x3C48A30", Offset = "0x3C48A30", VA = "0x3C48A30")]
	private void InsertAtCurrentHashNode(TokenHashValue[] hashTable, string str, char ch, System.TokenType tokenType, int tokenValue, int pos, int hashcode, int hashProbe)
	{
	}

	[Token(Token = "0x6002C06")]
	[Address(RVA = "0x3C467B0", Offset = "0x3C467B0", VA = "0x3C467B0")]
	private void InsertHash(TokenHashValue[] hashTable, string str, System.TokenType tokenType, int tokenValue)
	{
	}

	[Token(Token = "0x6002C07")]
	[Address(RVA = "0x3C48CC0", Offset = "0x3C48CC0", VA = "0x3C48CC0")]
	private bool CompareStringIgnoreCaseOptimized(string string1, int offset1, int length1, string string2, int offset2, int length2)
	{
		return default(bool);
	}
}
