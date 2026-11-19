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
[Token(Token = "0x2000548")]
public sealed class DateTimeFormatInfo : IFormatProvider, ICloneable
{
	[Token(Token = "0x2000549")]
	internal class TokenHashValue
	{
		[Token(Token = "0x4001592")]
		[FieldOffset(Offset = "0x10")]
		internal string tokenString;

		[Token(Token = "0x4001593")]
		[FieldOffset(Offset = "0x18")]
		internal System.TokenType tokenType;

		[Token(Token = "0x4001594")]
		[FieldOffset(Offset = "0x1C")]
		internal int tokenValue;

		[Token(Token = "0x60028F5")]
		[Address(RVA = "0x53FE380", Offset = "0x53FD380", VA = "0x53FE380")]
		internal TokenHashValue(string tokenString, System.TokenType tokenType, int tokenValue)
		{
		}
	}

	[Token(Token = "0x4001540")]
	[FieldOffset(Offset = "0x0")]
	private static DateTimeFormatInfo s_invariantInfo;

	[NonSerialized]
	[Token(Token = "0x4001541")]
	[FieldOffset(Offset = "0x10")]
	private System.Globalization.CultureData _cultureData;

	[Token(Token = "0x4001542")]
	[FieldOffset(Offset = "0x18")]
	private string _name;

	[NonSerialized]
	[Token(Token = "0x4001543")]
	[FieldOffset(Offset = "0x20")]
	private string _langName;

	[NonSerialized]
	[Token(Token = "0x4001544")]
	[FieldOffset(Offset = "0x28")]
	private CompareInfo _compareInfo;

	[NonSerialized]
	[Token(Token = "0x4001545")]
	[FieldOffset(Offset = "0x30")]
	private CultureInfo _cultureInfo;

	[Token(Token = "0x4001546")]
	[FieldOffset(Offset = "0x38")]
	private string amDesignator;

	[Token(Token = "0x4001547")]
	[FieldOffset(Offset = "0x40")]
	private string pmDesignator;

	[Token(Token = "0x4001548")]
	[FieldOffset(Offset = "0x48")]
	private string dateSeparator;

	[Token(Token = "0x4001549")]
	[FieldOffset(Offset = "0x50")]
	private string generalShortTimePattern;

	[Token(Token = "0x400154A")]
	[FieldOffset(Offset = "0x58")]
	private string generalLongTimePattern;

	[Token(Token = "0x400154B")]
	[FieldOffset(Offset = "0x60")]
	private string timeSeparator;

	[Token(Token = "0x400154C")]
	[FieldOffset(Offset = "0x68")]
	private string monthDayPattern;

	[Token(Token = "0x400154D")]
	[FieldOffset(Offset = "0x70")]
	private string dateTimeOffsetPattern;

	[Token(Token = "0x400154E")]
	private const string rfc1123Pattern = "ddd, dd MMM yyyy HH':'mm':'ss 'GMT'";

	[Token(Token = "0x400154F")]
	private const string sortableDateTimePattern = "yyyy'-'MM'-'dd'T'HH':'mm':'ss";

	[Token(Token = "0x4001550")]
	private const string universalSortableDateTimePattern = "yyyy'-'MM'-'dd HH':'mm':'ss'Z'";

	[Token(Token = "0x4001551")]
	[FieldOffset(Offset = "0x78")]
	private Calendar calendar;

	[Token(Token = "0x4001552")]
	[FieldOffset(Offset = "0x80")]
	private int firstDayOfWeek;

	[Token(Token = "0x4001553")]
	[FieldOffset(Offset = "0x84")]
	private int calendarWeekRule;

	[Token(Token = "0x4001554")]
	[FieldOffset(Offset = "0x88")]
	private string fullDateTimePattern;

	[Token(Token = "0x4001555")]
	[FieldOffset(Offset = "0x90")]
	private string[] abbreviatedDayNames;

	[Token(Token = "0x4001556")]
	[FieldOffset(Offset = "0x98")]
	private string[] m_superShortDayNames;

	[Token(Token = "0x4001557")]
	[FieldOffset(Offset = "0xA0")]
	private string[] dayNames;

	[Token(Token = "0x4001558")]
	[FieldOffset(Offset = "0xA8")]
	private string[] abbreviatedMonthNames;

	[Token(Token = "0x4001559")]
	[FieldOffset(Offset = "0xB0")]
	private string[] monthNames;

	[Token(Token = "0x400155A")]
	[FieldOffset(Offset = "0xB8")]
	private string[] genitiveMonthNames;

	[Token(Token = "0x400155B")]
	[FieldOffset(Offset = "0xC0")]
	private string[] m_genitiveAbbreviatedMonthNames;

	[Token(Token = "0x400155C")]
	[FieldOffset(Offset = "0xC8")]
	private string[] leapYearMonthNames;

	[Token(Token = "0x400155D")]
	[FieldOffset(Offset = "0xD0")]
	private string longDatePattern;

	[Token(Token = "0x400155E")]
	[FieldOffset(Offset = "0xD8")]
	private string shortDatePattern;

	[Token(Token = "0x400155F")]
	[FieldOffset(Offset = "0xE0")]
	private string yearMonthPattern;

	[Token(Token = "0x4001560")]
	[FieldOffset(Offset = "0xE8")]
	private string longTimePattern;

	[Token(Token = "0x4001561")]
	[FieldOffset(Offset = "0xF0")]
	private string shortTimePattern;

	[Token(Token = "0x4001562")]
	[FieldOffset(Offset = "0xF8")]
	private string[] allYearMonthPatterns;

	[Token(Token = "0x4001563")]
	[FieldOffset(Offset = "0x100")]
	private string[] allShortDatePatterns;

	[Token(Token = "0x4001564")]
	[FieldOffset(Offset = "0x108")]
	private string[] allLongDatePatterns;

	[Token(Token = "0x4001565")]
	[FieldOffset(Offset = "0x110")]
	private string[] allShortTimePatterns;

	[Token(Token = "0x4001566")]
	[FieldOffset(Offset = "0x118")]
	private string[] allLongTimePatterns;

	[Token(Token = "0x4001567")]
	[FieldOffset(Offset = "0x120")]
	private string[] m_eraNames;

	[Token(Token = "0x4001568")]
	[FieldOffset(Offset = "0x128")]
	private string[] m_abbrevEraNames;

	[Token(Token = "0x4001569")]
	[FieldOffset(Offset = "0x130")]
	private string[] m_abbrevEnglishEraNames;

	[Token(Token = "0x400156A")]
	[FieldOffset(Offset = "0x138")]
	private System.Globalization.CalendarId[] optionalCalendars;

	[Token(Token = "0x400156B")]
	private const int DEFAULT_ALL_DATETIMES_SIZE = 132;

	[Token(Token = "0x400156C")]
	[FieldOffset(Offset = "0x140")]
	internal bool _isReadOnly;

	[Token(Token = "0x400156D")]
	[FieldOffset(Offset = "0x144")]
	private System.Globalization.DateTimeFormatFlags formatFlags;

	[Token(Token = "0x400156E")]
	[FieldOffset(Offset = "0x8")]
	private static readonly char[] s_monthSpaces;

	[Token(Token = "0x400156F")]
	internal const string RoundtripFormat = "yyyy'-'MM'-'dd'T'HH':'mm':'ss.fffffffK";

	[Token(Token = "0x4001570")]
	internal const string RoundtripDateTimeUnfixed = "yyyy'-'MM'-'ddTHH':'mm':'ss zzz";

	[Token(Token = "0x4001571")]
	[FieldOffset(Offset = "0x148")]
	private string _fullTimeSpanPositivePattern;

	[Token(Token = "0x4001572")]
	[FieldOffset(Offset = "0x150")]
	private string _fullTimeSpanNegativePattern;

	[Token(Token = "0x4001573")]
	internal const DateTimeStyles InvalidDateTimeStyles = ~(DateTimeStyles.AllowWhiteSpaces | DateTimeStyles.NoCurrentDateDefault | DateTimeStyles.AdjustToUniversal | DateTimeStyles.AssumeLocal | DateTimeStyles.AssumeUniversal | DateTimeStyles.RoundtripKind);

	[NonSerialized]
	[Token(Token = "0x4001574")]
	[FieldOffset(Offset = "0x158")]
	private TokenHashValue[] _dtfiTokenHash;

	[Token(Token = "0x4001575")]
	private const int TOKEN_HASH_SIZE = 199;

	[Token(Token = "0x4001576")]
	private const int SECOND_PRIME = 197;

	[Token(Token = "0x4001577")]
	private const string dateSeparatorOrTimeZoneOffset = "-";

	[Token(Token = "0x4001578")]
	private const string invariantDateSeparator = "/";

	[Token(Token = "0x4001579")]
	private const string invariantTimeSeparator = ":";

	[Token(Token = "0x400157A")]
	internal const string IgnorablePeriod = ".";

	[Token(Token = "0x400157B")]
	internal const string IgnorableComma = ",";

	[Token(Token = "0x400157C")]
	internal const string CJKYearSuff = "年";

	[Token(Token = "0x400157D")]
	internal const string CJKMonthSuff = "月";

	[Token(Token = "0x400157E")]
	internal const string CJKDaySuff = "日";

	[Token(Token = "0x400157F")]
	internal const string KoreanYearSuff = "년";

	[Token(Token = "0x4001580")]
	internal const string KoreanMonthSuff = "월";

	[Token(Token = "0x4001581")]
	internal const string KoreanDaySuff = "일";

	[Token(Token = "0x4001582")]
	internal const string KoreanHourSuff = "시";

	[Token(Token = "0x4001583")]
	internal const string KoreanMinuteSuff = "분";

	[Token(Token = "0x4001584")]
	internal const string KoreanSecondSuff = "초";

	[Token(Token = "0x4001585")]
	internal const string CJKHourSuff = "時";

	[Token(Token = "0x4001586")]
	internal const string ChineseHourSuff = "时";

	[Token(Token = "0x4001587")]
	internal const string CJKMinuteSuff = "分";

	[Token(Token = "0x4001588")]
	internal const string CJKSecondSuff = "秒";

	[Token(Token = "0x4001589")]
	internal const string JapaneseEraStart = "元";

	[Token(Token = "0x400158A")]
	internal const string LocalTimeMark = "T";

	[Token(Token = "0x400158B")]
	internal const string GMTName = "GMT";

	[Token(Token = "0x400158C")]
	internal const string ZuluName = "Z";

	[Token(Token = "0x400158D")]
	internal const string KoreanLangName = "ko";

	[Token(Token = "0x400158E")]
	internal const string JapaneseLangName = "ja";

	[Token(Token = "0x400158F")]
	internal const string EnglishLangName = "en";

	[Token(Token = "0x4001590")]
	[FieldOffset(Offset = "0x10")]
	private static DateTimeFormatInfo s_jajpDTFI;

	[Token(Token = "0x4001591")]
	[FieldOffset(Offset = "0x18")]
	private static DateTimeFormatInfo s_zhtwDTFI;

	[Token(Token = "0x170005D6")]
	private string CultureName
	{
		[Token(Token = "0x6002894")]
		[Address(RVA = "0x53F6700", Offset = "0x53F5700", VA = "0x53F6700")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005D7")]
	private CultureInfo Culture
	{
		[Token(Token = "0x6002895")]
		[Address(RVA = "0x53F6740", Offset = "0x53F5740", VA = "0x53F6740")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005D8")]
	private string LanguageName
	{
		[Token(Token = "0x6002896")]
		[Address(RVA = "0x53F67E0", Offset = "0x53F57E0", VA = "0x53F67E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005D9")]
	public static DateTimeFormatInfo InvariantInfo
	{
		[Token(Token = "0x60028A2")]
		[Address(RVA = "0x53F7340", Offset = "0x53F6340", VA = "0x53F7340")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005DA")]
	public static DateTimeFormatInfo CurrentInfo
	{
		[Token(Token = "0x60028A3")]
		[Address(RVA = "0x53F7440", Offset = "0x53F6440", VA = "0x53F7440")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005DB")]
	public string AMDesignator
	{
		[Token(Token = "0x60028A7")]
		[Address(RVA = "0x53F78A0", Offset = "0x53F68A0", VA = "0x53F78A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005DC")]
	public Calendar Calendar
	{
		[Token(Token = "0x60028A8")]
		[Address(RVA = "0x53F78E0", Offset = "0x53F68E0", VA = "0x53F78E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60028A9")]
		[Address(RVA = "0x53F6D50", Offset = "0x53F5D50", VA = "0x53F6D50")]
		set
		{
		}
	}

	[Token(Token = "0x170005DD")]
	private System.Globalization.CalendarId[] OptionalCalendars
	{
		[Token(Token = "0x60028AA")]
		[Address(RVA = "0x53F79C0", Offset = "0x53F69C0", VA = "0x53F79C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005DE")]
	internal string[] EraNames
	{
		[Token(Token = "0x60028AB")]
		[Address(RVA = "0x53F7A40", Offset = "0x53F6A40", VA = "0x53F7A40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005DF")]
	internal string[] AbbreviatedEraNames
	{
		[Token(Token = "0x60028AD")]
		[Address(RVA = "0x53F7BC0", Offset = "0x53F6BC0", VA = "0x53F7BC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005E0")]
	internal string[] AbbreviatedEnglishEraNames
	{
		[Token(Token = "0x60028AF")]
		[Address(RVA = "0x53F7D70", Offset = "0x53F6D70", VA = "0x53F7D70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005E1")]
	public string DateSeparator
	{
		[Token(Token = "0x60028B0")]
		[Address(RVA = "0x53F7DE0", Offset = "0x53F6DE0", VA = "0x53F7DE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005E2")]
	public string FullDateTimePattern
	{
		[Token(Token = "0x60028B1")]
		[Address(RVA = "0x53F7E50", Offset = "0x53F6E50", VA = "0x53F7E50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005E3")]
	public string LongDatePattern
	{
		[Token(Token = "0x60028B2")]
		[Address(RVA = "0x53F7EF0", Offset = "0x53F6EF0", VA = "0x53F7EF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005E4")]
	public string LongTimePattern
	{
		[Token(Token = "0x60028B3")]
		[Address(RVA = "0x53F7F90", Offset = "0x53F6F90", VA = "0x53F7F90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005E5")]
	public string MonthDayPattern
	{
		[Token(Token = "0x60028B4")]
		[Address(RVA = "0x53F80E0", Offset = "0x53F70E0", VA = "0x53F80E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005E6")]
	public string PMDesignator
	{
		[Token(Token = "0x60028B5")]
		[Address(RVA = "0x53F8150", Offset = "0x53F7150", VA = "0x53F8150")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005E7")]
	public string RFC1123Pattern
	{
		[Token(Token = "0x60028B6")]
		[Address(RVA = "0x53F8190", Offset = "0x53F7190", VA = "0x53F8190")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005E8")]
	public string ShortDatePattern
	{
		[Token(Token = "0x60028B7")]
		[Address(RVA = "0x53F81C0", Offset = "0x53F71C0", VA = "0x53F81C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005E9")]
	public string ShortTimePattern
	{
		[Token(Token = "0x60028B8")]
		[Address(RVA = "0x53F82D0", Offset = "0x53F72D0", VA = "0x53F82D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005EA")]
	public string SortableDateTimePattern
	{
		[Token(Token = "0x60028B9")]
		[Address(RVA = "0x53F83B0", Offset = "0x53F73B0", VA = "0x53F83B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005EB")]
	internal string GeneralShortTimePattern
	{
		[Token(Token = "0x60028BA")]
		[Address(RVA = "0x53F83E0", Offset = "0x53F73E0", VA = "0x53F83E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005EC")]
	internal string GeneralLongTimePattern
	{
		[Token(Token = "0x60028BB")]
		[Address(RVA = "0x53F8470", Offset = "0x53F7470", VA = "0x53F8470")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005ED")]
	internal string DateTimeOffsetPattern
	{
		[Token(Token = "0x60028BC")]
		[Address(RVA = "0x53F8500", Offset = "0x53F7500", VA = "0x53F8500")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005EE")]
	public string TimeSeparator
	{
		[Token(Token = "0x60028BD")]
		[Address(RVA = "0x53F86B0", Offset = "0x53F76B0", VA = "0x53F86B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005EF")]
	public string UniversalSortableDateTimePattern
	{
		[Token(Token = "0x60028BE")]
		[Address(RVA = "0x53F86F0", Offset = "0x53F76F0", VA = "0x53F86F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005F0")]
	public string YearMonthPattern
	{
		[Token(Token = "0x60028BF")]
		[Address(RVA = "0x53F8720", Offset = "0x53F7720", VA = "0x53F8720")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005F1")]
	public string[] AbbreviatedDayNames
	{
		[Token(Token = "0x60028C0")]
		[Address(RVA = "0x53F8830", Offset = "0x53F7830", VA = "0x53F8830")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005F2")]
	public string[] DayNames
	{
		[Token(Token = "0x60028C1")]
		[Address(RVA = "0x53F88C0", Offset = "0x53F78C0", VA = "0x53F88C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005F3")]
	public string[] AbbreviatedMonthNames
	{
		[Token(Token = "0x60028C2")]
		[Address(RVA = "0x53F8950", Offset = "0x53F7950", VA = "0x53F8950")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005F4")]
	public string[] MonthNames
	{
		[Token(Token = "0x60028C3")]
		[Address(RVA = "0x53F89E0", Offset = "0x53F79E0", VA = "0x53F89E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005F5")]
	internal bool HasSpacesInMonthNames
	{
		[Token(Token = "0x60028C4")]
		[Address(RVA = "0x53F8A70", Offset = "0x53F7A70", VA = "0x53F8A70")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170005F6")]
	internal bool HasSpacesInDayNames
	{
		[Token(Token = "0x60028C5")]
		[Address(RVA = "0x53F8AC0", Offset = "0x53F7AC0", VA = "0x53F8AC0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170005F7")]
	private string[] AllYearMonthPatterns
	{
		[Token(Token = "0x60028D0")]
		[Address(RVA = "0x53F9670", Offset = "0x53F8670", VA = "0x53F9670")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005F8")]
	private string[] AllShortDatePatterns
	{
		[Token(Token = "0x60028D1")]
		[Address(RVA = "0x53F93D0", Offset = "0x53F83D0", VA = "0x53F93D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005F9")]
	private string[] AllShortTimePatterns
	{
		[Token(Token = "0x60028D2")]
		[Address(RVA = "0x53F9530", Offset = "0x53F8530", VA = "0x53F9530")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005FA")]
	private string[] AllLongDatePatterns
	{
		[Token(Token = "0x60028D3")]
		[Address(RVA = "0x53F9480", Offset = "0x53F8480", VA = "0x53F9480")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005FB")]
	private string[] AllLongTimePatterns
	{
		[Token(Token = "0x60028D4")]
		[Address(RVA = "0x53F95D0", Offset = "0x53F85D0", VA = "0x53F95D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005FC")]
	private string[] UnclonedYearMonthPatterns
	{
		[Token(Token = "0x60028D5")]
		[Address(RVA = "0x53F87C0", Offset = "0x53F77C0", VA = "0x53F87C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005FD")]
	private string[] UnclonedShortDatePatterns
	{
		[Token(Token = "0x60028D6")]
		[Address(RVA = "0x53F8260", Offset = "0x53F7260", VA = "0x53F8260")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005FE")]
	private string[] UnclonedLongDatePatterns
	{
		[Token(Token = "0x60028D7")]
		[Address(RVA = "0x53F8020", Offset = "0x53F7020", VA = "0x53F8020")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005FF")]
	private string[] UnclonedShortTimePatterns
	{
		[Token(Token = "0x60028D8")]
		[Address(RVA = "0x53F8360", Offset = "0x53F7360", VA = "0x53F8360")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000600")]
	private string[] UnclonedLongTimePatterns
	{
		[Token(Token = "0x60028D9")]
		[Address(RVA = "0x53F8090", Offset = "0x53F7090", VA = "0x53F8090")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000601")]
	public bool IsReadOnly
	{
		[Token(Token = "0x60028DB")]
		[Address(RVA = "0x53F78F0", Offset = "0x53F68F0", VA = "0x53F78F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000602")]
	public string[] MonthGenitiveNames
	{
		[Token(Token = "0x60028DC")]
		[Address(RVA = "0x53F9D70", Offset = "0x53F8D70", VA = "0x53F9D70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000603")]
	internal string FullTimeSpanPositivePattern
	{
		[Token(Token = "0x60028DD")]
		[Address(RVA = "0x53F9E40", Offset = "0x53F8E40", VA = "0x53F9E40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000604")]
	internal string FullTimeSpanNegativePattern
	{
		[Token(Token = "0x60028DE")]
		[Address(RVA = "0x53F9F20", Offset = "0x53F8F20", VA = "0x53F9F20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000605")]
	internal CompareInfo CompareInfo
	{
		[Token(Token = "0x60028DF")]
		[Address(RVA = "0x53F9FB0", Offset = "0x53F8FB0", VA = "0x53F9FB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000606")]
	internal System.Globalization.DateTimeFormatFlags FormatFlags
	{
		[Token(Token = "0x60028E1")]
		[Address(RVA = "0x53F8AA0", Offset = "0x53F7AA0", VA = "0x53F8AA0")]
		get
		{
			return default(System.Globalization.DateTimeFormatFlags);
		}
	}

	[Token(Token = "0x17000607")]
	internal bool HasForceTwoDigitYears
	{
		[Token(Token = "0x60028E3")]
		[Address(RVA = "0x53FA490", Offset = "0x53F9490", VA = "0x53FA490")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000608")]
	internal bool HasYearMonthAdjustment
	{
		[Token(Token = "0x60028E4")]
		[Address(RVA = "0x53FA4C0", Offset = "0x53F94C0", VA = "0x53FA4C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6002897")]
	[Address(RVA = "0x53F6820", Offset = "0x53F5820", VA = "0x53F6820")]
	private string[] internalGetAbbreviatedDayOfWeekNames()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6002898")]
	[Address(RVA = "0x53F6840", Offset = "0x53F5840", VA = "0x53F6840")]
	private string[] internalGetAbbreviatedDayOfWeekNamesCore()
	{
		return null;
	}

	[Token(Token = "0x6002899")]
	[Address(RVA = "0x53F68A0", Offset = "0x53F58A0", VA = "0x53F68A0")]
	private string[] internalGetDayOfWeekNames()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x600289A")]
	[Address(RVA = "0x53F68C0", Offset = "0x53F58C0", VA = "0x53F68C0")]
	private string[] internalGetDayOfWeekNamesCore()
	{
		return null;
	}

	[Token(Token = "0x600289B")]
	[Address(RVA = "0x53F6920", Offset = "0x53F5920", VA = "0x53F6920")]
	private string[] internalGetAbbreviatedMonthNames()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x600289C")]
	[Address(RVA = "0x53F6940", Offset = "0x53F5940", VA = "0x53F6940")]
	private string[] internalGetAbbreviatedMonthNamesCore()
	{
		return null;
	}

	[Token(Token = "0x600289D")]
	[Address(RVA = "0x53F69A0", Offset = "0x53F59A0", VA = "0x53F69A0")]
	private string[] internalGetMonthNames()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x600289E")]
	[Address(RVA = "0x53F69C0", Offset = "0x53F59C0", VA = "0x53F69C0")]
	private string[] internalGetMonthNamesCore()
	{
		return null;
	}

	[Token(Token = "0x600289F")]
	[Address(RVA = "0x53F6A20", Offset = "0x53F5A20", VA = "0x53F6A20")]
	public DateTimeFormatInfo()
	{
	}

	[Token(Token = "0x60028A0")]
	[Address(RVA = "0x53F6D00", Offset = "0x53F5D00", VA = "0x53F6D00")]
	internal DateTimeFormatInfo(System.Globalization.CultureData cultureData, Calendar cal)
	{
	}

	[Token(Token = "0x60028A1")]
	[Address(RVA = "0x53F6B10", Offset = "0x53F5B10", VA = "0x53F6B10")]
	private void InitializeOverridableProperties(System.Globalization.CultureData cultureData, int calendarId)
	{
	}

	[Token(Token = "0x60028A4")]
	[Address(RVA = "0x53F7570", Offset = "0x53F6570", VA = "0x53F7570")]
	public static DateTimeFormatInfo GetInstance(IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x60028A5")]
	[Address(RVA = "0x53F7710", Offset = "0x53F6710", VA = "0x53F7710", Slot = "4")]
	public object GetFormat(Type formatType)
	{
		return null;
	}

	[Token(Token = "0x60028A6")]
	[Address(RVA = "0x53F7790", Offset = "0x53F6790", VA = "0x53F7790", Slot = "5")]
	public object Clone()
	{
		return null;
	}

	[Token(Token = "0x60028AC")]
	[Address(RVA = "0x53F7AB0", Offset = "0x53F6AB0", VA = "0x53F7AB0")]
	public string GetEraName(int era)
	{
		return null;
	}

	[Token(Token = "0x60028AE")]
	[Address(RVA = "0x53F7C30", Offset = "0x53F6C30", VA = "0x53F7C30")]
	public string GetAbbreviatedEraName(int era)
	{
		return null;
	}

	[Token(Token = "0x60028C6")]
	[Address(RVA = "0x53F8AF0", Offset = "0x53F7AF0", VA = "0x53F8AF0")]
	internal string internalGetMonthName(int month, System.Globalization.MonthNameStyles style, bool abbreviated)
	{
		return null;
	}

	[Token(Token = "0x60028C7")]
	[Address(RVA = "0x53F8C90", Offset = "0x53F7C90", VA = "0x53F8C90")]
	private string[] internalGetGenitiveMonthNames(bool abbreviated)
	{
		return null;
	}

	[Token(Token = "0x60028C8")]
	[Address(RVA = "0x53F8D50", Offset = "0x53F7D50", VA = "0x53F8D50")]
	internal string[] internalGetLeapYearMonthNames()
	{
		return null;
	}

	[Token(Token = "0x60028C9")]
	[Address(RVA = "0x53F8DC0", Offset = "0x53F7DC0", VA = "0x53F8DC0")]
	public string GetAbbreviatedDayName(DayOfWeek dayofweek)
	{
		return null;
	}

	[Token(Token = "0x60028CA")]
	[Address(RVA = "0x53F8EC0", Offset = "0x53F7EC0", VA = "0x53F8EC0")]
	private static string[] GetCombinedPatterns(string[] patterns1, string[] patterns2, string connectString)
	{
		return null;
	}

	[Token(Token = "0x60028CB")]
	[Address(RVA = "0x53F9050", Offset = "0x53F8050", VA = "0x53F9050")]
	public string[] GetAllDateTimePatterns(char format)
	{
		return null;
	}

	[Token(Token = "0x60028CC")]
	[Address(RVA = "0x53F9720", Offset = "0x53F8720", VA = "0x53F9720")]
	public string GetDayName(DayOfWeek dayofweek)
	{
		return null;
	}

	[Token(Token = "0x60028CD")]
	[Address(RVA = "0x53F9820", Offset = "0x53F8820", VA = "0x53F9820")]
	public string GetAbbreviatedMonthName(int month)
	{
		return null;
	}

	[Token(Token = "0x60028CE")]
	[Address(RVA = "0x53F9910", Offset = "0x53F8910", VA = "0x53F9910")]
	public string GetMonthName(int month)
	{
		return null;
	}

	[Token(Token = "0x60028CF")]
	[Address(RVA = "0x53F9A00", Offset = "0x53F8A00", VA = "0x53F9A00")]
	private static string[] GetMergedPatterns(string[] patterns, string defaultPattern)
	{
		return null;
	}

	[Token(Token = "0x60028DA")]
	[Address(RVA = "0x53F9BC0", Offset = "0x53F8BC0", VA = "0x53F9BC0")]
	public static DateTimeFormatInfo ReadOnly(DateTimeFormatInfo dtfi)
	{
		return null;
	}

	[Token(Token = "0x60028E0")]
	[Address(RVA = "0x53FA040", Offset = "0x53F9040", VA = "0x53FA040")]
	internal static void ValidateStyles(DateTimeStyles style, string parameterName)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60028E2")]
	[Address(RVA = "0x53FA100", Offset = "0x53F9100", VA = "0x53FA100")]
	private System.Globalization.DateTimeFormatFlags InitializeFormatFlags()
	{
		return default(System.Globalization.DateTimeFormatFlags);
	}

	[Token(Token = "0x60028E5")]
	[Address(RVA = "0x53FA4F0", Offset = "0x53F94F0", VA = "0x53FA4F0")]
	internal bool YearMonthAdjustment(ref int year, ref int month, bool parsedMonthName)
	{
		return default(bool);
	}

	[Token(Token = "0x60028E6")]
	[Address(RVA = "0x53FA610", Offset = "0x53F9610", VA = "0x53FA610")]
	internal static DateTimeFormatInfo GetJapaneseCalendarDTFI()
	{
		return null;
	}

	[Token(Token = "0x60028E7")]
	[Address(RVA = "0x53FA7D0", Offset = "0x53F97D0", VA = "0x53FA7D0")]
	internal static DateTimeFormatInfo GetTaiwanCalendarDTFI()
	{
		return null;
	}

	[Token(Token = "0x60028E8")]
	[Address(RVA = "0x53F7A10", Offset = "0x53F6A10", VA = "0x53F7A10")]
	private void ClearTokenHashTable()
	{
	}

	[Token(Token = "0x60028E9")]
	[Address(RVA = "0x53FA990", Offset = "0x53F9990", VA = "0x53FA990")]
	internal TokenHashValue[] CreateTokenHashTable()
	{
		return null;
	}

	[Token(Token = "0x60028EA")]
	[Address(RVA = "0x53FC2B0", Offset = "0x53FB2B0", VA = "0x53FC2B0")]
	private void PopulateSpecialTokenHashTable(TokenHashValue[] temp, ref bool useDateSepAsIgnorableSymbol)
	{
	}

	[Token(Token = "0x60028EB")]
	[Address(RVA = "0x53FD500", Offset = "0x53FC500", VA = "0x53FD500")]
	private static bool IsJapaneseCalendar(Calendar calendar)
	{
		return default(bool);
	}

	[Token(Token = "0x60028EC")]
	[Address(RVA = "0x53FCEB0", Offset = "0x53FBEB0", VA = "0x53FCEB0")]
	private void AddMonthNames(TokenHashValue[] temp, string monthPostfix)
	{
	}

	[Token(Token = "0x60028ED")]
	[Address(RVA = "0x53FD680", Offset = "0x53FC680", VA = "0x53FD680")]
	private static bool TryParseHebrewNumber(ref System.__DTString str, out bool badFormat, out int number)
	{
		return default(bool);
	}

	[Token(Token = "0x60028EE")]
	[Address(RVA = "0x53FDA40", Offset = "0x53FCA40", VA = "0x53FDA40")]
	private static bool IsHebrewChar(char ch)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60028EF")]
	[Address(RVA = "0x53FDA50", Offset = "0x53FCA50", VA = "0x53FDA50")]
	private bool IsAllowedJapaneseTokenFollowedByNonSpaceLetter(string tokenString, char nextCh)
	{
		return default(bool);
	}

	[Token(Token = "0x60028F0")]
	[Address(RVA = "0x53FDB30", Offset = "0x53FCB30", VA = "0x53FDB30")]
	internal bool Tokenize(System.TokenType TokenMask, out System.TokenType tokenType, out int tokenValue, ref System.__DTString str)
	{
		return default(bool);
	}

	[Token(Token = "0x60028F1")]
	[Address(RVA = "0x53FE160", Offset = "0x53FD160", VA = "0x53FE160")]
	private void InsertAtCurrentHashNode(TokenHashValue[] hashTable, string str, char ch, System.TokenType tokenType, int tokenValue, int pos, int hashcode, int hashProbe)
	{
	}

	[Token(Token = "0x60028F2")]
	[Address(RVA = "0x53FBF70", Offset = "0x53FAF70", VA = "0x53FBF70")]
	private void InsertHash(TokenHashValue[] hashTable, string str, System.TokenType tokenType, int tokenValue)
	{
	}

	[Token(Token = "0x60028F3")]
	[Address(RVA = "0x53FE3C0", Offset = "0x53FD3C0", VA = "0x53FE3C0")]
	private bool CompareStringIgnoreCaseOptimized(string string1, int offset1, int length1, string string2, int offset2, int length2)
	{
		return default(bool);
	}
}
