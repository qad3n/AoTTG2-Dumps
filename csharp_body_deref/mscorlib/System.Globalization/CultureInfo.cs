// ==================== AoTTG2 cross-reference ====================
// Type: System.Globalization.CultureInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Mono.Interop;

namespace System.Globalization;

[Serializable]
[StructLayout((LayoutKind)0)]
[Token(Token = "0x20005A5")]
[ComVisible(true)]
public class CultureInfo : ICloneable, IFormatProvider
{
	[Token(Token = "0x20005A6")]
	private struct Data
	{
		[Token(Token = "0x40017F9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int ansi;

		[Token(Token = "0x40017FA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
		public int ebcdic;

		[Token(Token = "0x40017FB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public int mac;

		[Token(Token = "0x40017FC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
		public int oem;

		[Token(Token = "0x40017FD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public bool right_to_left;

		[Token(Token = "0x40017FE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x11")]
		public byte list_sep;
	}

	[Token(Token = "0x20005A7")]
	private delegate void OnCultureInfoChangedDelegate(string language);

	[Token(Token = "0x40017D1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static CultureInfo invariant_culture_info;

	[Token(Token = "0x40017D2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static object shared_table_lock;

	[Token(Token = "0x40017D3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static CultureInfo default_current_culture;

	[Token(Token = "0x40017D4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private bool m_isReadOnly;

	[Token(Token = "0x40017D5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
	private int cultureID;

	[NonSerialized]
	[Token(Token = "0x40017D6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private int parent_lcid;

	[NonSerialized]
	[Token(Token = "0x40017D7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	private int datetime_index;

	[NonSerialized]
	[Token(Token = "0x40017D8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private int number_index;

	[NonSerialized]
	[Token(Token = "0x40017D9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
	private int default_calendar_type;

	[Token(Token = "0x40017DA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private bool m_useUserOverride;

	[Token(Token = "0x40017DB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	internal NumberFormatInfo numInfo;

	[Token(Token = "0x40017DC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	internal DateTimeFormatInfo dateTimeInfo;

	[Token(Token = "0x40017DD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private TextInfo textInfo;

	[Token(Token = "0x40017DE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	internal string m_name;

	[NonSerialized]
	[Token(Token = "0x40017DF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private string englishname;

	[NonSerialized]
	[Token(Token = "0x40017E0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private string nativename;

	[NonSerialized]
	[Token(Token = "0x40017E1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private string iso3lang;

	[NonSerialized]
	[Token(Token = "0x40017E2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private string iso2lang;

	[NonSerialized]
	[Token(Token = "0x40017E3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private string win3lang;

	[NonSerialized]
	[Token(Token = "0x40017E4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private string territory;

	[NonSerialized]
	[Token(Token = "0x40017E5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private string[] native_calendar_names;

	[Token(Token = "0x40017E6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private CompareInfo compareInfo;

	[NonSerialized]
	[Token(Token = "0x40017E7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private unsafe readonly void* textinfo_data;

	[Token(Token = "0x40017E8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private int m_dataItem;

	[Token(Token = "0x40017E9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private Calendar calendar;

	[NonSerialized]
	[Token(Token = "0x40017EA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private CultureInfo parent_culture;

	[NonSerialized]
	[Token(Token = "0x40017EB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private bool constructed;

	[NonSerialized]
	[Token(Token = "0x40017EC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	internal byte[] cached_serialized_form;

	[NonSerialized]
	[Token(Token = "0x40017ED")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	internal System.Globalization.CultureData m_cultureData;

	[NonSerialized]
	[Token(Token = "0x40017EE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	internal bool m_isInherited;

	[Token(Token = "0x40017EF")]
	internal const int InvariantCultureId = 127;

	[Token(Token = "0x40017F0")]
	private const int CalendarTypeBits = 8;

	[Token(Token = "0x40017F1")]
	internal const int LOCALE_INVARIANT = 127;

	[Token(Token = "0x40017F2")]
	private const string MSG_READONLY = "This instance is read only";

	[Token(Token = "0x40017F3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static CultureInfo s_DefaultThreadCurrentUICulture;

	[Token(Token = "0x40017F4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static CultureInfo s_DefaultThreadCurrentCulture;

	[Token(Token = "0x40017F5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private static Dictionary<int, CultureInfo> shared_by_number;

	[Token(Token = "0x40017F6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private static Dictionary<string, CultureInfo> shared_by_name;

	[Token(Token = "0x40017F7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private static CultureInfo s_UserPreferredCultureInfoInAppX;

	[Token(Token = "0x40017F8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	internal static readonly bool IsTaiwanSku;

	[Token(Token = "0x17000675")]
	internal System.Globalization.CultureData _cultureData
	{
		[Token(Token = "0x6002AF0")]
		[Address(RVA = "0xC8FF80", Offset = "0xC8E580", VA = "0x180C8FF80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000676")]
	internal bool _isInherited
	{
		[Token(Token = "0x6002AF1")]
		[Address(RVA = "0x1ABF0C0", Offset = "0x1ABD6C0", VA = "0x181ABF0C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000677")]
	public static CultureInfo InvariantCulture
	{
		[Token(Token = "0x6002AF2")]
		[Address(RVA = "0x1ABEA90", Offset = "0x1ABD090", VA = "0x181ABEA90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000678")]
	public static CultureInfo CurrentCulture
	{
		[Token(Token = "0x6002AF3")]
		[Address(RVA = "0x1ABE6C0", Offset = "0x1ABCCC0", VA = "0x181ABE6C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000679")]
	public static CultureInfo CurrentUICulture
	{
		[Token(Token = "0x6002AF4")]
		[Address(RVA = "0x1ABE6F0", Offset = "0x1ABCCF0", VA = "0x181ABE6F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700067A")]
	internal string Territory
	{
		[Token(Token = "0x6002AF7")]
		[Address(RVA = "0xCDB5A0", Offset = "0xCD9BA0", VA = "0x180CDB5A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700067B")]
	internal string _name
	{
		[Token(Token = "0x6002AF8")]
		[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700067C")]
	public virtual int LCID
	{
		[Token(Token = "0x6002AF9")]
		[Address(RVA = "0x8E79A0", Offset = "0x8E5FA0", VA = "0x1808E79A0", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700067D")]
	public virtual string Name
	{
		[Token(Token = "0x6002AFA")]
		[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700067E")]
	public virtual Calendar Calendar
	{
		[Token(Token = "0x6002AFB")]
		[Address(RVA = "0x1ABE4D0", Offset = "0x1ABCAD0", VA = "0x181ABE4D0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700067F")]
	public virtual CultureInfo Parent
	{
		[Token(Token = "0x6002AFC")]
		[Address(RVA = "0x1ABEBE0", Offset = "0x1ABD1E0", VA = "0x181ABEBE0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000680")]
	public virtual TextInfo TextInfo
	{
		[Token(Token = "0x6002AFD")]
		[Address(RVA = "0x1ABEEA0", Offset = "0x1ABD4A0", VA = "0x181ABEEA0", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000681")]
	public virtual CompareInfo CompareInfo
	{
		[Token(Token = "0x6002B05")]
		[Address(RVA = "0x1ABE570", Offset = "0x1ABCB70", VA = "0x181ABE570", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000682")]
	public virtual bool IsNeutralCulture
	{
		[Token(Token = "0x6002B06")]
		[Address(RVA = "0x1ABEAF0", Offset = "0x1ABD0F0", VA = "0x181ABEAF0", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000683")]
	public virtual NumberFormatInfo NumberFormat
	{
		[Token(Token = "0x6002B08")]
		[Address(RVA = "0x1ABEB30", Offset = "0x1ABD130", VA = "0x181ABEB30", Slot = "14")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002B09")]
		[Address(RVA = "0x1ABF490", Offset = "0x1ABDA90", VA = "0x181ABF490", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x17000684")]
	public virtual DateTimeFormatInfo DateTimeFormat
	{
		[Token(Token = "0x6002B0A")]
		[Address(RVA = "0x1ABE720", Offset = "0x1ABCD20", VA = "0x181ABE720", Slot = "16")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002B0B")]
		[Address(RVA = "0x1ABF2C0", Offset = "0x1ABD8C0", VA = "0x181ABF2C0", Slot = "17")]
		set
		{
		}
	}

	[Token(Token = "0x17000685")]
	public virtual string EnglishName
	{
		[Token(Token = "0x6002B0C")]
		[Address(RVA = "0x1ABE970", Offset = "0x1ABCF70", VA = "0x181ABE970", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000686")]
	public bool IsReadOnly
	{
		[Token(Token = "0x6002B0D")]
		[Address(RVA = "0xE5A320", Offset = "0xE58920", VA = "0x180E5A320")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000687")]
	internal int CalendarType
	{
		[Token(Token = "0x6002B24")]
		[Address(RVA = "0x1ABE430", Offset = "0x1ABCA30", VA = "0x181ABE430")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000688")]
	public static CultureInfo DefaultThreadCurrentCulture
	{
		[Token(Token = "0x6002B27")]
		[Address(RVA = "0x1ABE8B0", Offset = "0x1ABCEB0", VA = "0x181ABE8B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002B28")]
		[Address(RVA = "0x1ABF3B0", Offset = "0x1ABD9B0", VA = "0x181ABF3B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000689")]
	public static CultureInfo DefaultThreadCurrentUICulture
	{
		[Token(Token = "0x6002B29")]
		[Address(RVA = "0x1ABE910", Offset = "0x1ABCF10", VA = "0x181ABE910")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002B2A")]
		[Address(RVA = "0x1ABF420", Offset = "0x1ABDA20", VA = "0x181ABF420")]
		set
		{
		}
	}

	[Token(Token = "0x1700068A")]
	internal string SortName
	{
		[Token(Token = "0x6002B2B")]
		[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700068B")]
	internal static CultureInfo UserDefaultUICulture
	{
		[Token(Token = "0x6002B2C")]
		[Address(RVA = "0x1ABF040", Offset = "0x1ABD640", VA = "0x181ABF040")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700068C")]
	internal static CultureInfo UserDefaultCulture
	{
		[Token(Token = "0x6002B2D")]
		[Address(RVA = "0x1ABF000", Offset = "0x1ABD600", VA = "0x181ABF000")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700068D")]
	internal bool HasInvariantCultureName
	{
		[Token(Token = "0x6002B33")]
		[Address(RVA = "0x1ABE9B0", Offset = "0x1ABCFB0", VA = "0x181ABE9B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6002AF5")]
	[Address(RVA = "0x1AB9920", Offset = "0x1AB7F20", VA = "0x181AB9920")]
	internal static CultureInfo ConstructCurrentCulture()
	{
		return null;
	}

	[Token(Token = "0x6002AF6")]
	[Address(RVA = "0x1AB9B10", Offset = "0x1AB8110", VA = "0x181AB9B10")]
	internal static CultureInfo ConstructCurrentUICulture()
	{
		return null;
	}

	[Token(Token = "0x6002AFE")]
	[Address(RVA = "0x1AB9760", Offset = "0x1AB7D60", VA = "0x181AB9760", Slot = "11")]
	public virtual object Clone()
	{
		return null;
	}

	[Token(Token = "0x6002AFF")]
	[Address(RVA = "0x1ABC660", Offset = "0x1ABAC60", VA = "0x181ABC660", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6002B00")]
	[Address(RVA = "0x1ABCD40", Offset = "0x1ABB340", VA = "0x181ABCD40")]
	public static CultureInfo[] GetCultures(CultureTypes types)
	{
		return null;
	}

	[Token(Token = "0x6002B01")]
	[Address(RVA = "0x1ABD210", Offset = "0x1ABB810", VA = "0x181ABD210")]
	private Data GetTextInfoData()
	{
		return default(Data);
	}

	[Token(Token = "0x6002B02")]
	[Address(RVA = "0x1ABD200", Offset = "0x1ABB800", VA = "0x181ABD200", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6002B03")]
	[Address(RVA = "0x1ABD330", Offset = "0x1ABB930", VA = "0x181ABD330")]
	public static CultureInfo ReadOnly(CultureInfo ci)
	{
		return null;
	}

	[Token(Token = "0x6002B04")]
	[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6002B07")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	private void CheckNeutral()
	{
	}

	[Token(Token = "0x6002B0E")]
	[Address(RVA = "0x1ABD100", Offset = "0x1ABB700", VA = "0x181ABD100", Slot = "19")]
	public virtual object GetFormat(Type formatType)
	{
		return null;
	}

	[Token(Token = "0x6002B0F")]
	[Address(RVA = "0x1AB9DD0", Offset = "0x1AB83D0", VA = "0x181AB9DD0")]
	private void Construct()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002B10")]
	[Address(RVA = "0x1ABE410", Offset = "0x1ABCA10", VA = "0x181ABE410")]
	private extern bool construct_internal_locale_from_lcid(int lcid);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002B11")]
	[Address(RVA = "0x1ABE420", Offset = "0x1ABCA20", VA = "0x181ABE420")]
	private extern bool construct_internal_locale_from_name(string name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002B12")]
	[Address(RVA = "0x1ABF0D0", Offset = "0x1ABD6D0", VA = "0x181ABF0D0")]
	private static extern string get_current_locale_name();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002B13")]
	[Address(RVA = "0x1ABF2B0", Offset = "0x1ABD8B0", VA = "0x181ABF2B0")]
	private static extern CultureInfo[] internal_get_cultures(bool neutral, bool specific, bool installed);

	[Token(Token = "0x6002B14")]
	[Address(RVA = "0x1AB9B50", Offset = "0x1AB8150", VA = "0x181AB9B50")]
	private void ConstructInvariant(bool read_only)
	{
	}

	[Token(Token = "0x6002B15")]
	[Address(RVA = "0x1ABC5E0", Offset = "0x1ABABE0", VA = "0x181ABC5E0")]
	private TextInfo CreateTextInfo(bool readOnly)
	{
		return null;
	}

	[Token(Token = "0x6002B16")]
	[Address(RVA = "0x1ABE3F0", Offset = "0x1ABC9F0", VA = "0x181ABE3F0")]
	public CultureInfo(int culture)
	{
	}

	[Token(Token = "0x6002B17")]
	[Address(RVA = "0x1ABE0A0", Offset = "0x1ABC6A0", VA = "0x181ABE0A0")]
	public CultureInfo(int culture, bool useUserOverride)
	{
	}

	[Token(Token = "0x6002B18")]
	[Address(RVA = "0x1ABE0C0", Offset = "0x1ABC6C0", VA = "0x181ABE0C0")]
	private CultureInfo(int culture, bool useUserOverride, bool read_only)
	{
	}

	[Token(Token = "0x6002B19")]
	[Address(RVA = "0x1ABE060", Offset = "0x1ABC660", VA = "0x181ABE060")]
	public CultureInfo(string name)
	{
	}

	[Token(Token = "0x6002B1A")]
	[Address(RVA = "0x1ABE3D0", Offset = "0x1ABC9D0", VA = "0x181ABE3D0")]
	public CultureInfo(string name, bool useUserOverride)
	{
	}

	[Token(Token = "0x6002B1B")]
	[Address(RVA = "0x1ABDDA0", Offset = "0x1ABC3A0", VA = "0x181ABDDA0")]
	private CultureInfo(string name, bool useUserOverride, bool read_only)
	{
	}

	[Token(Token = "0x6002B1C")]
	[Address(RVA = "0x1ABE080", Offset = "0x1ABC680", VA = "0x181ABE080")]
	private CultureInfo()
	{
	}

	[Token(Token = "0x6002B1D")]
	[Address(RVA = "0x1ABF0E0", Offset = "0x1ABD6E0", VA = "0x181ABF0E0")]
	private static void insert_into_shared_tables(CultureInfo c)
	{
	}

	[Token(Token = "0x6002B1E")]
	[Address(RVA = "0x1ABC860", Offset = "0x1ABAE60", VA = "0x181ABC860")]
	public static CultureInfo GetCultureInfo(int culture)
	{
		return null;
	}

	[Token(Token = "0x6002B1F")]
	[Address(RVA = "0x1ABCAD0", Offset = "0x1ABB0D0", VA = "0x181ABCAD0")]
	public static CultureInfo GetCultureInfo(string name)
	{
		return null;
	}

	[Token(Token = "0x6002B20")]
	[Address(RVA = "0x1AB9FF0", Offset = "0x1AB85F0", VA = "0x181AB9FF0")]
	internal static CultureInfo CreateCulture(string name, bool reference)
	{
		return null;
	}

	[Token(Token = "0x6002B21")]
	[Address(RVA = "0x1ABC2F0", Offset = "0x1ABA8F0", VA = "0x181ABC2F0")]
	public static CultureInfo CreateSpecificCulture(string name)
	{
		return null;
	}

	[Token(Token = "0x6002B22")]
	[Address(RVA = "0x1AB9D30", Offset = "0x1AB8330", VA = "0x181AB9D30")]
	private bool ConstructLocaleFromName(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6002B23")]
	[Address(RVA = "0x1ABA110", Offset = "0x1AB8710", VA = "0x181ABA110")]
	private static CultureInfo CreateSpecificCultureFromNeutral(string name)
	{
		return null;
	}

	[Token(Token = "0x6002B25")]
	[Address(RVA = "0x1AB9DF0", Offset = "0x1AB83F0", VA = "0x181AB9DF0")]
	private static Calendar CreateCalendar(int calendarType)
	{
		return null;
	}

	[Token(Token = "0x6002B26")]
	[Address(RVA = "0x1ABA070", Offset = "0x1AB8670", VA = "0x181ABA070")]
	private static Exception CreateNotFoundException(string name)
	{
		return null;
	}

	[PreserveSig]
	[Token(Token = "0x6002B2E")]
	[Address(RVA = "0x1ABD230", Offset = "0x1ABB830", VA = "0x181ABD230")]
	private static extern void InitializeUserPreferredCultureInfoInAppX(OnCultureInfoChangedDelegate onCultureInfoChangedInAppX);

	[PreserveSig]
	[Token(Token = "0x6002B2F")]
	[Address(RVA = "0x1ABD6E0", Offset = "0x1ABBCE0", VA = "0x181ABD6E0")]
	private static extern void SetUserPreferredCultureInfoInAppX(string name);

	[Token(Token = "0x6002B30")]
	[Address(RVA = "0x1ABD250", Offset = "0x1ABB850", VA = "0x181ABD250")]
	[Mono.Interop.MonoPInvokeCallback(typeof(OnCultureInfoChangedDelegate))]
	private static void OnCultureInfoChangedInAppX(string language)
	{
	}

	[Token(Token = "0x6002B31")]
	[Address(RVA = "0x1ABC6F0", Offset = "0x1ABACF0", VA = "0x181ABC6F0")]
	internal static CultureInfo GetCultureInfoForUserPreferredLanguageInAppX()
	{
		return null;
	}

	[Token(Token = "0x6002B32")]
	[Address(RVA = "0x1ABD510", Offset = "0x1ABBB10", VA = "0x181ABD510")]
	internal static void SetCultureInfoForUserPreferredLanguageInAppX(CultureInfo cultureInfo)
	{
	}

	[Token(Token = "0x6002B34")]
	[Address(RVA = "0x1ABD8A0", Offset = "0x1ABBEA0", VA = "0x181ABD8A0")]
	internal static bool VerifyCultureName(string cultureName, bool throwException)
	{
		return default(bool);
	}

	[Token(Token = "0x6002B35")]
	[Address(RVA = "0x1ABD700", Offset = "0x1ABBD00", VA = "0x181ABD700")]
	internal static bool VerifyCultureName(CultureInfo culture, bool throwException)
	{
		return default(bool);
	}
}
