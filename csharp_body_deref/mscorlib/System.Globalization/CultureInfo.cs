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
[Token(Token = "0x2000580")]
[ComVisible(true)]
public class CultureInfo : ICloneable, IFormatProvider
{
	[Token(Token = "0x2000581")]
	private struct Data
	{
		[Token(Token = "0x4001760")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int ansi;

		[Token(Token = "0x4001761")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
		public int ebcdic;

		[Token(Token = "0x4001762")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public int mac;

		[Token(Token = "0x4001763")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
		public int oem;

		[Token(Token = "0x4001764")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public bool right_to_left;

		[Token(Token = "0x4001765")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x11")]
		public byte list_sep;
	}

	[Token(Token = "0x2000582")]
	private delegate void OnCultureInfoChangedDelegate(string language);

	[Token(Token = "0x4001738")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static CultureInfo invariant_culture_info;

	[Token(Token = "0x4001739")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static object shared_table_lock;

	[Token(Token = "0x400173A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static CultureInfo default_current_culture;

	[Token(Token = "0x400173B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private bool m_isReadOnly;

	[Token(Token = "0x400173C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
	private int cultureID;

	[NonSerialized]
	[Token(Token = "0x400173D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private int parent_lcid;

	[NonSerialized]
	[Token(Token = "0x400173E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	private int datetime_index;

	[NonSerialized]
	[Token(Token = "0x400173F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private int number_index;

	[NonSerialized]
	[Token(Token = "0x4001740")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
	private int default_calendar_type;

	[Token(Token = "0x4001741")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private bool m_useUserOverride;

	[Token(Token = "0x4001742")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	internal NumberFormatInfo numInfo;

	[Token(Token = "0x4001743")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	internal DateTimeFormatInfo dateTimeInfo;

	[Token(Token = "0x4001744")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private TextInfo textInfo;

	[Token(Token = "0x4001745")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	internal string m_name;

	[NonSerialized]
	[Token(Token = "0x4001746")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private string englishname;

	[NonSerialized]
	[Token(Token = "0x4001747")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private string nativename;

	[NonSerialized]
	[Token(Token = "0x4001748")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private string iso3lang;

	[NonSerialized]
	[Token(Token = "0x4001749")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private string iso2lang;

	[NonSerialized]
	[Token(Token = "0x400174A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private string win3lang;

	[NonSerialized]
	[Token(Token = "0x400174B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private string territory;

	[NonSerialized]
	[Token(Token = "0x400174C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private string[] native_calendar_names;

	[Token(Token = "0x400174D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private CompareInfo compareInfo;

	[NonSerialized]
	[Token(Token = "0x400174E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private unsafe readonly void* textinfo_data;

	[Token(Token = "0x400174F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private int m_dataItem;

	[Token(Token = "0x4001750")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private Calendar calendar;

	[NonSerialized]
	[Token(Token = "0x4001751")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private CultureInfo parent_culture;

	[NonSerialized]
	[Token(Token = "0x4001752")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private bool constructed;

	[NonSerialized]
	[Token(Token = "0x4001753")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	internal byte[] cached_serialized_form;

	[NonSerialized]
	[Token(Token = "0x4001754")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	internal System.Globalization.CultureData m_cultureData;

	[NonSerialized]
	[Token(Token = "0x4001755")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	internal bool m_isInherited;

	[Token(Token = "0x4001756")]
	internal const int InvariantCultureId = 127;

	[Token(Token = "0x4001757")]
	private const int CalendarTypeBits = 8;

	[Token(Token = "0x4001758")]
	internal const int LOCALE_INVARIANT = 127;

	[Token(Token = "0x4001759")]
	private const string MSG_READONLY = "This instance is read only";

	[Token(Token = "0x400175A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static CultureInfo s_DefaultThreadCurrentUICulture;

	[Token(Token = "0x400175B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static CultureInfo s_DefaultThreadCurrentCulture;

	[Token(Token = "0x400175C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private static Dictionary<int, CultureInfo> shared_by_number;

	[Token(Token = "0x400175D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private static Dictionary<string, CultureInfo> shared_by_name;

	[Token(Token = "0x400175E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private static CultureInfo s_UserPreferredCultureInfoInAppX;

	[Token(Token = "0x400175F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	internal static readonly bool IsTaiwanSku;

	[Token(Token = "0x17000676")]
	internal System.Globalization.CultureData _cultureData
	{
		[Token(Token = "0x6002ACF")]
		[Address(RVA = "0x5445C20", Offset = "0x5444C20", VA = "0x5445C20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000677")]
	internal bool _isInherited
	{
		[Token(Token = "0x6002AD0")]
		[Address(RVA = "0x5445C30", Offset = "0x5444C30", VA = "0x5445C30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000678")]
	public static CultureInfo InvariantCulture
	{
		[Token(Token = "0x6002AD1")]
		[Address(RVA = "0x5445C40", Offset = "0x5444C40", VA = "0x5445C40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000679")]
	public static CultureInfo CurrentCulture
	{
		[Token(Token = "0x6002AD2")]
		[Address(RVA = "0x5445C90", Offset = "0x5444C90", VA = "0x5445C90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700067A")]
	public static CultureInfo CurrentUICulture
	{
		[Token(Token = "0x6002AD3")]
		[Address(RVA = "0x5445CB0", Offset = "0x5444CB0", VA = "0x5445CB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700067B")]
	internal string Territory
	{
		[Token(Token = "0x6002AD6")]
		[Address(RVA = "0x5446380", Offset = "0x5445380", VA = "0x5446380")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700067C")]
	internal string _name
	{
		[Token(Token = "0x6002AD7")]
		[Address(RVA = "0x5446390", Offset = "0x5445390", VA = "0x5446390")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700067D")]
	public virtual int LCID
	{
		[Token(Token = "0x6002AD8")]
		[Address(RVA = "0x54463A0", Offset = "0x54453A0", VA = "0x54463A0", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700067E")]
	public virtual string Name
	{
		[Token(Token = "0x6002AD9")]
		[Address(RVA = "0x54463B0", Offset = "0x54453B0", VA = "0x54463B0", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700067F")]
	public virtual Calendar Calendar
	{
		[Token(Token = "0x6002ADA")]
		[Address(RVA = "0x54463C0", Offset = "0x54453C0", VA = "0x54463C0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000680")]
	public virtual CultureInfo Parent
	{
		[Token(Token = "0x6002ADB")]
		[Address(RVA = "0x5446670", Offset = "0x5445670", VA = "0x5446670", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000681")]
	public virtual TextInfo TextInfo
	{
		[Token(Token = "0x6002ADC")]
		[Address(RVA = "0x5446970", Offset = "0x5445970", VA = "0x5446970", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000682")]
	public virtual CompareInfo CompareInfo
	{
		[Token(Token = "0x6002AE4")]
		[Address(RVA = "0x5447370", Offset = "0x5446370", VA = "0x5447370", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000683")]
	public virtual bool IsNeutralCulture
	{
		[Token(Token = "0x6002AE5")]
		[Address(RVA = "0x54474D0", Offset = "0x54464D0", VA = "0x54474D0", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000684")]
	public virtual NumberFormatInfo NumberFormat
	{
		[Token(Token = "0x6002AE7")]
		[Address(RVA = "0x5447520", Offset = "0x5446520", VA = "0x5447520", Slot = "14")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002AE8")]
		[Address(RVA = "0x54475C0", Offset = "0x54465C0", VA = "0x54475C0", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x17000685")]
	public virtual DateTimeFormatInfo DateTimeFormat
	{
		[Token(Token = "0x6002AE9")]
		[Address(RVA = "0x5447690", Offset = "0x5446690", VA = "0x5447690", Slot = "16")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002AEA")]
		[Address(RVA = "0x5447860", Offset = "0x5446860", VA = "0x5447860", Slot = "17")]
		set
		{
		}
	}

	[Token(Token = "0x17000686")]
	public virtual string EnglishName
	{
		[Token(Token = "0x6002AEB")]
		[Address(RVA = "0x5447930", Offset = "0x5446930", VA = "0x5447930", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000687")]
	public bool IsReadOnly
	{
		[Token(Token = "0x6002AEC")]
		[Address(RVA = "0x5447960", Offset = "0x5446960", VA = "0x5447960")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000688")]
	internal int CalendarType
	{
		[Token(Token = "0x6002B03")]
		[Address(RVA = "0x5447120", Offset = "0x5446120", VA = "0x5447120")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000689")]
	public static CultureInfo DefaultThreadCurrentCulture
	{
		[Token(Token = "0x6002B06")]
		[Address(RVA = "0x544AA90", Offset = "0x5449A90", VA = "0x544AA90")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002B07")]
		[Address(RVA = "0x544AAE0", Offset = "0x5449AE0", VA = "0x544AAE0")]
		set
		{
		}
	}

	[Token(Token = "0x1700068A")]
	public static CultureInfo DefaultThreadCurrentUICulture
	{
		[Token(Token = "0x6002B08")]
		[Address(RVA = "0x544AB50", Offset = "0x5449B50", VA = "0x544AB50")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002B09")]
		[Address(RVA = "0x544ABA0", Offset = "0x5449BA0", VA = "0x544ABA0")]
		set
		{
		}
	}

	[Token(Token = "0x1700068B")]
	internal string SortName
	{
		[Token(Token = "0x6002B0A")]
		[Address(RVA = "0x544AC10", Offset = "0x5449C10", VA = "0x544AC10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700068C")]
	internal static CultureInfo UserDefaultUICulture
	{
		[Token(Token = "0x6002B0B")]
		[Address(RVA = "0x544AC20", Offset = "0x5449C20", VA = "0x544AC20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700068D")]
	internal static CultureInfo UserDefaultCulture
	{
		[Token(Token = "0x6002B0C")]
		[Address(RVA = "0x544ACC0", Offset = "0x5449CC0", VA = "0x544ACC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700068E")]
	internal bool HasInvariantCultureName
	{
		[Token(Token = "0x6002B12")]
		[Address(RVA = "0x544B160", Offset = "0x544A160", VA = "0x544B160")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6002AD4")]
	[Address(RVA = "0x5445CD0", Offset = "0x5444CD0", VA = "0x5445CD0")]
	internal static CultureInfo ConstructCurrentCulture()
	{
		return null;
	}

	[Token(Token = "0x6002AD5")]
	[Address(RVA = "0x5446320", Offset = "0x5445320", VA = "0x5446320")]
	internal static CultureInfo ConstructCurrentUICulture()
	{
		return null;
	}

	[Token(Token = "0x6002ADD")]
	[Address(RVA = "0x5446B50", Offset = "0x5445B50", VA = "0x5446B50", Slot = "11")]
	public virtual object Clone()
	{
		return null;
	}

	[Token(Token = "0x6002ADE")]
	[Address(RVA = "0x5446CF0", Offset = "0x5445CF0", VA = "0x5446CF0", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6002ADF")]
	[Address(RVA = "0x5446D70", Offset = "0x5445D70", VA = "0x5446D70")]
	public static CultureInfo[] GetCultures(CultureTypes types)
	{
		return null;
	}

	[Token(Token = "0x6002AE0")]
	[Address(RVA = "0x5447100", Offset = "0x5446100", VA = "0x5447100")]
	private Data GetTextInfoData()
	{
		return default(Data);
	}

	[Token(Token = "0x6002AE1")]
	[Address(RVA = "0x5447190", Offset = "0x5446190", VA = "0x5447190", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6002AE2")]
	[Address(RVA = "0x54471A0", Offset = "0x54461A0", VA = "0x54471A0")]
	public static CultureInfo ReadOnly(CultureInfo ci)
	{
		return null;
	}

	[Token(Token = "0x6002AE3")]
	[Address(RVA = "0x5447360", Offset = "0x5446360", VA = "0x5447360", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6002AE6")]
	[Address(RVA = "0x5447510", Offset = "0x5446510", VA = "0x5447510")]
	private void CheckNeutral()
	{
	}

	[Token(Token = "0x6002AED")]
	[Address(RVA = "0x5447970", Offset = "0x5446970", VA = "0x5447970", Slot = "19")]
	public virtual object GetFormat(Type formatType)
	{
		return null;
	}

	[Token(Token = "0x6002AEE")]
	[Address(RVA = "0x5446460", Offset = "0x5445460", VA = "0x5446460")]
	private void Construct()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002AEF")]
	[Address(RVA = "0x5447A70", Offset = "0x5446A70", VA = "0x5447A70")]
	private extern bool construct_internal_locale_from_lcid(int lcid);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002AF0")]
	[Address(RVA = "0x5447A80", Offset = "0x5446A80", VA = "0x5447A80")]
	private extern bool construct_internal_locale_from_name(string name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002AF1")]
	[Address(RVA = "0x5445FD0", Offset = "0x5444FD0", VA = "0x5445FD0")]
	private static extern string get_current_locale_name();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002AF2")]
	[Address(RVA = "0x54470F0", Offset = "0x54460F0", VA = "0x54470F0")]
	private static extern CultureInfo[] internal_get_cultures(bool neutral, bool specific, bool installed);

	[Token(Token = "0x6002AF3")]
	[Address(RVA = "0x5447A90", Offset = "0x5446A90", VA = "0x5447A90")]
	private void ConstructInvariant(bool read_only)
	{
	}

	[Token(Token = "0x6002AF4")]
	[Address(RVA = "0x5446AE0", Offset = "0x5445AE0", VA = "0x5446AE0")]
	private TextInfo CreateTextInfo(bool readOnly)
	{
		return null;
	}

	[Token(Token = "0x6002AF5")]
	[Address(RVA = "0x5446960", Offset = "0x5445960", VA = "0x5446960")]
	public CultureInfo(int culture)
	{
	}

	[Token(Token = "0x6002AF6")]
	[Address(RVA = "0x5447C30", Offset = "0x5446C30", VA = "0x5447C30")]
	public CultureInfo(int culture, bool useUserOverride)
	{
	}

	[Token(Token = "0x6002AF7")]
	[Address(RVA = "0x5447C40", Offset = "0x5446C40", VA = "0x5447C40")]
	private CultureInfo(int culture, bool useUserOverride, bool read_only)
	{
	}

	[Token(Token = "0x6002AF8")]
	[Address(RVA = "0x5446950", Offset = "0x5445950", VA = "0x5446950")]
	public CultureInfo(string name)
	{
	}

	[Token(Token = "0x6002AF9")]
	[Address(RVA = "0x5447F30", Offset = "0x5446F30", VA = "0x5447F30")]
	public CultureInfo(string name, bool useUserOverride)
	{
	}

	[Token(Token = "0x6002AFA")]
	[Address(RVA = "0x5447F40", Offset = "0x5446F40", VA = "0x5447F40")]
	private CultureInfo(string name, bool useUserOverride, bool read_only)
	{
	}

	[Token(Token = "0x6002AFB")]
	[Address(RVA = "0x5448370", Offset = "0x5447370", VA = "0x5448370")]
	private CultureInfo()
	{
	}

	[Token(Token = "0x6002AFC")]
	[Address(RVA = "0x5448390", Offset = "0x5447390", VA = "0x5448390")]
	private static void insert_into_shared_tables(CultureInfo c)
	{
	}

	[Token(Token = "0x6002AFD")]
	[Address(RVA = "0x5448590", Offset = "0x5447590", VA = "0x5448590")]
	public static CultureInfo GetCultureInfo(int culture)
	{
		return null;
	}

	[Token(Token = "0x6002AFE")]
	[Address(RVA = "0x54487D0", Offset = "0x54477D0", VA = "0x54487D0")]
	public static CultureInfo GetCultureInfo(string name)
	{
		return null;
	}

	[Token(Token = "0x6002AFF")]
	[Address(RVA = "0x5448A00", Offset = "0x5447A00", VA = "0x5448A00")]
	internal static CultureInfo CreateCulture(string name, bool reference)
	{
		return null;
	}

	[Token(Token = "0x6002B00")]
	[Address(RVA = "0x5445FE0", Offset = "0x5444FE0", VA = "0x5445FE0")]
	public static CultureInfo CreateSpecificCulture(string name)
	{
		return null;
	}

	[Token(Token = "0x6002B01")]
	[Address(RVA = "0x5448250", Offset = "0x5447250", VA = "0x5448250")]
	private bool ConstructLocaleFromName(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6002B02")]
	[Address(RVA = "0x5448A70", Offset = "0x5447A70", VA = "0x5448A70")]
	private static CultureInfo CreateSpecificCultureFromNeutral(string name)
	{
		return null;
	}

	[Token(Token = "0x6002B04")]
	[Address(RVA = "0x5446480", Offset = "0x5445480", VA = "0x5446480")]
	private static Calendar CreateCalendar(int calendarType)
	{
		return null;
	}

	[Token(Token = "0x6002B05")]
	[Address(RVA = "0x54482D0", Offset = "0x54472D0", VA = "0x54482D0")]
	private static Exception CreateNotFoundException(string name)
	{
		return null;
	}

	[PreserveSig]
	[Token(Token = "0x6002B0D")]
	[Address(RVA = "0x544AD20", Offset = "0x5449D20", VA = "0x544AD20")]
	private static extern void InitializeUserPreferredCultureInfoInAppX(OnCultureInfoChangedDelegate onCultureInfoChangedInAppX);

	[PreserveSig]
	[Token(Token = "0x6002B0E")]
	[Address(RVA = "0x544AD30", Offset = "0x5449D30", VA = "0x544AD30")]
	private static extern void SetUserPreferredCultureInfoInAppX(string name);

	[Token(Token = "0x6002B0F")]
	[Address(RVA = "0x5445B70", Offset = "0x5444B70", VA = "0x5445B70")]
	[Mono.Interop.MonoPInvokeCallback(typeof(OnCultureInfoChangedDelegate))]
	private static void OnCultureInfoChangedInAppX(string language)
	{
	}

	[Token(Token = "0x6002B10")]
	[Address(RVA = "0x544AD40", Offset = "0x5449D40", VA = "0x544AD40")]
	internal static CultureInfo GetCultureInfoForUserPreferredLanguageInAppX()
	{
		return null;
	}

	[Token(Token = "0x6002B11")]
	[Address(RVA = "0x544AF80", Offset = "0x5449F80", VA = "0x544AF80")]
	internal static void SetCultureInfoForUserPreferredLanguageInAppX(CultureInfo cultureInfo)
	{
	}

	[Token(Token = "0x6002B13")]
	[Address(RVA = "0x544B240", Offset = "0x544A240", VA = "0x544B240")]
	internal static bool VerifyCultureName(string cultureName, bool throwException)
	{
		return default(bool);
	}

	[Token(Token = "0x6002B14")]
	[Address(RVA = "0x544B370", Offset = "0x544A370", VA = "0x544B370")]
	internal static bool VerifyCultureName(CultureInfo culture, bool throwException)
	{
		return default(bool);
	}
}
