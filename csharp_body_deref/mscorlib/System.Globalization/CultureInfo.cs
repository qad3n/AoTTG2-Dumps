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
[Token(Token = "0x20005D3")]
[ComVisible(true)]
public class CultureInfo : ICloneable, IFormatProvider
{
	[Token(Token = "0x20005D4")]
	private struct Data
	{
		[Token(Token = "0x40019DD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int ansi;

		[Token(Token = "0x40019DE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
		public int ebcdic;

		[Token(Token = "0x40019DF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public int mac;

		[Token(Token = "0x40019E0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
		public int oem;

		[Token(Token = "0x40019E1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public bool right_to_left;

		[Token(Token = "0x40019E2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x11")]
		public byte list_sep;
	}

	[Token(Token = "0x20005D5")]
	private delegate void OnCultureInfoChangedDelegate(string language);

	[Token(Token = "0x40019B5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static CultureInfo invariant_culture_info;

	[Token(Token = "0x40019B6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static object shared_table_lock;

	[Token(Token = "0x40019B7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static CultureInfo default_current_culture;

	[Token(Token = "0x40019B8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private bool m_isReadOnly;

	[Token(Token = "0x40019B9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
	private int cultureID;

	[NonSerialized]
	[Token(Token = "0x40019BA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private int parent_lcid;

	[NonSerialized]
	[Token(Token = "0x40019BB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	private int datetime_index;

	[NonSerialized]
	[Token(Token = "0x40019BC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private int number_index;

	[NonSerialized]
	[Token(Token = "0x40019BD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
	private int default_calendar_type;

	[Token(Token = "0x40019BE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private bool m_useUserOverride;

	[Token(Token = "0x40019BF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	internal NumberFormatInfo numInfo;

	[Token(Token = "0x40019C0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	internal DateTimeFormatInfo dateTimeInfo;

	[Token(Token = "0x40019C1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private TextInfo textInfo;

	[Token(Token = "0x40019C2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	internal string m_name;

	[NonSerialized]
	[Token(Token = "0x40019C3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private string englishname;

	[NonSerialized]
	[Token(Token = "0x40019C4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private string nativename;

	[NonSerialized]
	[Token(Token = "0x40019C5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private string iso3lang;

	[NonSerialized]
	[Token(Token = "0x40019C6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private string iso2lang;

	[NonSerialized]
	[Token(Token = "0x40019C7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private string win3lang;

	[NonSerialized]
	[Token(Token = "0x40019C8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private string territory;

	[NonSerialized]
	[Token(Token = "0x40019C9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private string[] native_calendar_names;

	[Token(Token = "0x40019CA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private CompareInfo compareInfo;

	[NonSerialized]
	[Token(Token = "0x40019CB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private unsafe readonly void* textinfo_data;

	[Token(Token = "0x40019CC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private int m_dataItem;

	[Token(Token = "0x40019CD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private Calendar calendar;

	[NonSerialized]
	[Token(Token = "0x40019CE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private CultureInfo parent_culture;

	[NonSerialized]
	[Token(Token = "0x40019CF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private bool constructed;

	[NonSerialized]
	[Token(Token = "0x40019D0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	internal byte[] cached_serialized_form;

	[NonSerialized]
	[Token(Token = "0x40019D1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	internal System.Globalization.CultureData m_cultureData;

	[NonSerialized]
	[Token(Token = "0x40019D2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	internal bool m_isInherited;

	[Token(Token = "0x40019D3")]
	internal const int InvariantCultureId = 127;

	[Token(Token = "0x40019D4")]
	private const int CalendarTypeBits = 8;

	[Token(Token = "0x40019D5")]
	internal const int LOCALE_INVARIANT = 127;

	[Token(Token = "0x40019D6")]
	private const string MSG_READONLY = "This instance is read only";

	[Token(Token = "0x40019D7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static CultureInfo s_DefaultThreadCurrentUICulture;

	[Token(Token = "0x40019D8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static CultureInfo s_DefaultThreadCurrentCulture;

	[Token(Token = "0x40019D9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private static Dictionary<int, CultureInfo> shared_by_number;

	[Token(Token = "0x40019DA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private static Dictionary<string, CultureInfo> shared_by_name;

	[Token(Token = "0x40019DB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private static CultureInfo s_UserPreferredCultureInfoInAppX;

	[Token(Token = "0x40019DC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	internal static readonly bool IsTaiwanSku;

	[Token(Token = "0x170006E8")]
	internal System.Globalization.CultureData _cultureData
	{
		[Token(Token = "0x6002DE3")]
		[Address(RVA = "0x3C72D60", Offset = "0x3C72D60", VA = "0x3C72D60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006E9")]
	internal bool _isInherited
	{
		[Token(Token = "0x6002DE4")]
		[Address(RVA = "0x3C72D70", Offset = "0x3C72D70", VA = "0x3C72D70")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170006EA")]
	public static CultureInfo InvariantCulture
	{
		[Token(Token = "0x6002DE5")]
		[Address(RVA = "0x3C5B180", Offset = "0x3C5B180", VA = "0x3C5B180")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006EB")]
	public static CultureInfo CurrentCulture
	{
		[Token(Token = "0x6002DE6")]
		[Address(RVA = "0x3C5B3C0", Offset = "0x3C5B3C0", VA = "0x3C5B3C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006EC")]
	public static CultureInfo CurrentUICulture
	{
		[Token(Token = "0x6002DE7")]
		[Address(RVA = "0x3C72D80", Offset = "0x3C72D80", VA = "0x3C72D80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006ED")]
	internal string Territory
	{
		[Token(Token = "0x6002DEA")]
		[Address(RVA = "0x3C73460", Offset = "0x3C73460", VA = "0x3C73460")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006EE")]
	internal string _name
	{
		[Token(Token = "0x6002DEB")]
		[Address(RVA = "0x3C73470", Offset = "0x3C73470", VA = "0x3C73470")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006EF")]
	public virtual int LCID
	{
		[Token(Token = "0x6002DEC")]
		[Address(RVA = "0x3C73480", Offset = "0x3C73480", VA = "0x3C73480", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006F0")]
	public virtual string Name
	{
		[Token(Token = "0x6002DED")]
		[Address(RVA = "0x3C73490", Offset = "0x3C73490", VA = "0x3C73490", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006F1")]
	public virtual Calendar Calendar
	{
		[Token(Token = "0x6002DEE")]
		[Address(RVA = "0x3C734A0", Offset = "0x3C734A0", VA = "0x3C734A0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006F2")]
	public virtual CultureInfo Parent
	{
		[Token(Token = "0x6002DEF")]
		[Address(RVA = "0x3C73750", Offset = "0x3C73750", VA = "0x3C73750", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006F3")]
	public virtual TextInfo TextInfo
	{
		[Token(Token = "0x6002DF0")]
		[Address(RVA = "0x3C73A40", Offset = "0x3C73A40", VA = "0x3C73A40", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006F4")]
	public virtual CompareInfo CompareInfo
	{
		[Token(Token = "0x6002DF8")]
		[Address(RVA = "0x3C744B0", Offset = "0x3C744B0", VA = "0x3C744B0", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006F5")]
	public virtual bool IsNeutralCulture
	{
		[Token(Token = "0x6002DF9")]
		[Address(RVA = "0x3C74620", Offset = "0x3C74620", VA = "0x3C74620", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170006F6")]
	public virtual NumberFormatInfo NumberFormat
	{
		[Token(Token = "0x6002DFB")]
		[Address(RVA = "0x3C74670", Offset = "0x3C74670", VA = "0x3C74670", Slot = "14")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002DFC")]
		[Address(RVA = "0x3C74710", Offset = "0x3C74710", VA = "0x3C74710", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x170006F7")]
	public virtual DateTimeFormatInfo DateTimeFormat
	{
		[Token(Token = "0x6002DFD")]
		[Address(RVA = "0x3C747E0", Offset = "0x3C747E0", VA = "0x3C747E0", Slot = "16")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002DFE")]
		[Address(RVA = "0x3C749A0", Offset = "0x3C749A0", VA = "0x3C749A0", Slot = "17")]
		set
		{
		}
	}

	[Token(Token = "0x170006F8")]
	public virtual string EnglishName
	{
		[Token(Token = "0x6002DFF")]
		[Address(RVA = "0x3C74A70", Offset = "0x3C74A70", VA = "0x3C74A70", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006F9")]
	public bool IsReadOnly
	{
		[Token(Token = "0x6002E00")]
		[Address(RVA = "0x3C74AA0", Offset = "0x3C74AA0", VA = "0x3C74AA0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170006FA")]
	internal int CalendarType
	{
		[Token(Token = "0x6002E17")]
		[Address(RVA = "0x3C74260", Offset = "0x3C74260", VA = "0x3C74260")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006FB")]
	public static CultureInfo DefaultThreadCurrentCulture
	{
		[Token(Token = "0x6002E1A")]
		[Address(RVA = "0x3C77BA0", Offset = "0x3C77BA0", VA = "0x3C77BA0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002E1B")]
		[Address(RVA = "0x3C77BF0", Offset = "0x3C77BF0", VA = "0x3C77BF0")]
		set
		{
		}
	}

	[Token(Token = "0x170006FC")]
	public static CultureInfo DefaultThreadCurrentUICulture
	{
		[Token(Token = "0x6002E1C")]
		[Address(RVA = "0x3C77C60", Offset = "0x3C77C60", VA = "0x3C77C60")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002E1D")]
		[Address(RVA = "0x3C77CB0", Offset = "0x3C77CB0", VA = "0x3C77CB0")]
		set
		{
		}
	}

	[Token(Token = "0x170006FD")]
	internal string SortName
	{
		[Token(Token = "0x6002E1E")]
		[Address(RVA = "0x3C77D20", Offset = "0x3C77D20", VA = "0x3C77D20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006FE")]
	internal static CultureInfo UserDefaultUICulture
	{
		[Token(Token = "0x6002E1F")]
		[Address(RVA = "0x3C77D30", Offset = "0x3C77D30", VA = "0x3C77D30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006FF")]
	internal static CultureInfo UserDefaultCulture
	{
		[Token(Token = "0x6002E20")]
		[Address(RVA = "0x3C77DD0", Offset = "0x3C77DD0", VA = "0x3C77DD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000700")]
	internal bool HasInvariantCultureName
	{
		[Token(Token = "0x6002E26")]
		[Address(RVA = "0x3C780C0", Offset = "0x3C780C0", VA = "0x3C780C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6002DE8")]
	[Address(RVA = "0x3C72DA0", Offset = "0x3C72DA0", VA = "0x3C72DA0")]
	internal static CultureInfo ConstructCurrentCulture()
	{
		return null;
	}

	[Token(Token = "0x6002DE9")]
	[Address(RVA = "0x3C73400", Offset = "0x3C73400", VA = "0x3C73400")]
	internal static CultureInfo ConstructCurrentUICulture()
	{
		return null;
	}

	[Token(Token = "0x6002DF1")]
	[Address(RVA = "0x3C73C30", Offset = "0x3C73C30", VA = "0x3C73C30", Slot = "11")]
	public virtual object Clone()
	{
		return null;
	}

	[Token(Token = "0x6002DF2")]
	[Address(RVA = "0x3C73E00", Offset = "0x3C73E00", VA = "0x3C73E00", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6002DF3")]
	[Address(RVA = "0x3C73E90", Offset = "0x3C73E90", VA = "0x3C73E90")]
	public static CultureInfo[] GetCultures(CultureTypes types)
	{
		return null;
	}

	[Token(Token = "0x6002DF4")]
	[Address(RVA = "0x3C74240", Offset = "0x3C74240", VA = "0x3C74240")]
	private Data GetTextInfoData()
	{
		return default(Data);
	}

	[Token(Token = "0x6002DF5")]
	[Address(RVA = "0x3C742D0", Offset = "0x3C742D0", VA = "0x3C742D0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6002DF6")]
	[Address(RVA = "0x3C742E0", Offset = "0x3C742E0", VA = "0x3C742E0")]
	public static CultureInfo ReadOnly(CultureInfo ci)
	{
		return null;
	}

	[Token(Token = "0x6002DF7")]
	[Address(RVA = "0x3C744A0", Offset = "0x3C744A0", VA = "0x3C744A0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6002DFA")]
	[Address(RVA = "0x3C74660", Offset = "0x3C74660", VA = "0x3C74660")]
	private void CheckNeutral()
	{
	}

	[Token(Token = "0x6002E01")]
	[Address(RVA = "0x3C74AB0", Offset = "0x3C74AB0", VA = "0x3C74AB0", Slot = "19")]
	public virtual object GetFormat(Type formatType)
	{
		return null;
	}

	[Token(Token = "0x6002E02")]
	[Address(RVA = "0x3C73540", Offset = "0x3C73540", VA = "0x3C73540")]
	private void Construct()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002E03")]
	[Address(RVA = "0x3C74BB0", Offset = "0x3C74BB0", VA = "0x3C74BB0")]
	private extern bool construct_internal_locale_from_lcid(int lcid);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002E04")]
	[Address(RVA = "0x3C74BC0", Offset = "0x3C74BC0", VA = "0x3C74BC0")]
	private extern bool construct_internal_locale_from_name(string name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002E05")]
	[Address(RVA = "0x3C730A0", Offset = "0x3C730A0", VA = "0x3C730A0")]
	private static extern string get_current_locale_name();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002E06")]
	[Address(RVA = "0x3C74230", Offset = "0x3C74230", VA = "0x3C74230")]
	private static extern CultureInfo[] internal_get_cultures(bool neutral, bool specific, bool installed);

	[Token(Token = "0x6002E07")]
	[Address(RVA = "0x3C74BD0", Offset = "0x3C74BD0", VA = "0x3C74BD0")]
	private void ConstructInvariant(bool read_only)
	{
	}

	[Token(Token = "0x6002E08")]
	[Address(RVA = "0x3C73B80", Offset = "0x3C73B80", VA = "0x3C73B80")]
	private TextInfo CreateTextInfo(bool readOnly)
	{
		return null;
	}

	[Token(Token = "0x6002E09")]
	[Address(RVA = "0x3C73A30", Offset = "0x3C73A30", VA = "0x3C73A30")]
	public CultureInfo(int culture)
	{
	}

	[Token(Token = "0x6002E0A")]
	[Address(RVA = "0x3C74DA0", Offset = "0x3C74DA0", VA = "0x3C74DA0")]
	public CultureInfo(int culture, bool useUserOverride)
	{
	}

	[Token(Token = "0x6002E0B")]
	[Address(RVA = "0x3C74DB0", Offset = "0x3C74DB0", VA = "0x3C74DB0")]
	private CultureInfo(int culture, bool useUserOverride, bool read_only)
	{
	}

	[Token(Token = "0x6002E0C")]
	[Address(RVA = "0x3C5CE00", Offset = "0x3C5CE00", VA = "0x3C5CE00")]
	public CultureInfo(string name)
	{
	}

	[Token(Token = "0x6002E0D")]
	[Address(RVA = "0x3C64130", Offset = "0x3C64130", VA = "0x3C64130")]
	public CultureInfo(string name, bool useUserOverride)
	{
	}

	[Token(Token = "0x6002E0E")]
	[Address(RVA = "0x3C750A0", Offset = "0x3C750A0", VA = "0x3C750A0")]
	private CultureInfo(string name, bool useUserOverride, bool read_only)
	{
	}

	[Token(Token = "0x6002E0F")]
	[Address(RVA = "0x3C754E0", Offset = "0x3C754E0", VA = "0x3C754E0")]
	private CultureInfo()
	{
	}

	[Token(Token = "0x6002E10")]
	[Address(RVA = "0x3C75500", Offset = "0x3C75500", VA = "0x3C75500")]
	private static void insert_into_shared_tables(CultureInfo c)
	{
	}

	[Token(Token = "0x6002E11")]
	[Address(RVA = "0x3C600E0", Offset = "0x3C600E0", VA = "0x3C600E0")]
	public static CultureInfo GetCultureInfo(int culture)
	{
		return null;
	}

	[Token(Token = "0x6002E12")]
	[Address(RVA = "0x3C60340", Offset = "0x3C60340", VA = "0x3C60340")]
	public static CultureInfo GetCultureInfo(string name)
	{
		return null;
	}

	[Token(Token = "0x6002E13")]
	[Address(RVA = "0x3C75710", Offset = "0x3C75710", VA = "0x3C75710")]
	internal static CultureInfo CreateCulture(string name, bool reference)
	{
		return null;
	}

	[Token(Token = "0x6002E14")]
	[Address(RVA = "0x3C730B0", Offset = "0x3C730B0", VA = "0x3C730B0")]
	public static CultureInfo CreateSpecificCulture(string name)
	{
		return null;
	}

	[Token(Token = "0x6002E15")]
	[Address(RVA = "0x3C753C0", Offset = "0x3C753C0", VA = "0x3C753C0")]
	private bool ConstructLocaleFromName(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6002E16")]
	[Address(RVA = "0x3C75780", Offset = "0x3C75780", VA = "0x3C75780")]
	private static CultureInfo CreateSpecificCultureFromNeutral(string name)
	{
		return null;
	}

	[Token(Token = "0x6002E18")]
	[Address(RVA = "0x3C73560", Offset = "0x3C73560", VA = "0x3C73560")]
	private static Calendar CreateCalendar(int calendarType)
	{
		return null;
	}

	[Token(Token = "0x6002E19")]
	[Address(RVA = "0x3C75440", Offset = "0x3C75440", VA = "0x3C75440")]
	private static Exception CreateNotFoundException(string name)
	{
		return null;
	}

	[PreserveSig]
	[Token(Token = "0x6002E21")]
	[Address(RVA = "0x3C77E30", Offset = "0x3C77E30", VA = "0x3C77E30")]
	private static extern void InitializeUserPreferredCultureInfoInAppX(OnCultureInfoChangedDelegate onCultureInfoChangedInAppX);

	[PreserveSig]
	[Token(Token = "0x6002E22")]
	[Address(RVA = "0x3C77E40", Offset = "0x3C77E40", VA = "0x3C77E40")]
	private static extern void SetUserPreferredCultureInfoInAppX(string name);

	[Token(Token = "0x6002E23")]
	[Address(RVA = "0x3C72CB0", Offset = "0x3C72CB0", VA = "0x3C72CB0")]
	[Mono.Interop.MonoPInvokeCallback(typeof(OnCultureInfoChangedDelegate))]
	private static void OnCultureInfoChangedInAppX(string language)
	{
	}

	[Token(Token = "0x6002E24")]
	[Address(RVA = "0x3C77E50", Offset = "0x3C77E50", VA = "0x3C77E50")]
	internal static CultureInfo GetCultureInfoForUserPreferredLanguageInAppX()
	{
		return null;
	}

	[Token(Token = "0x6002E25")]
	[Address(RVA = "0x3C77F60", Offset = "0x3C77F60", VA = "0x3C77F60")]
	internal static void SetCultureInfoForUserPreferredLanguageInAppX(CultureInfo cultureInfo)
	{
	}

	[Token(Token = "0x6002E27")]
	[Address(RVA = "0x3C781A0", Offset = "0x3C781A0", VA = "0x3C781A0")]
	internal static bool VerifyCultureName(string cultureName, bool throwException)
	{
		return default(bool);
	}

	[Token(Token = "0x6002E28")]
	[Address(RVA = "0x3C782D0", Offset = "0x3C782D0", VA = "0x3C782D0")]
	internal static bool VerifyCultureName(CultureInfo culture, bool throwException)
	{
		return default(bool);
	}
}
