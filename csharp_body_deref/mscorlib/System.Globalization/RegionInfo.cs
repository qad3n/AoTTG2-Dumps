using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Globalization;

[Serializable]
[StructLayout((LayoutKind)0)]
[Token(Token = "0x20005D9")]
[ComVisible(true)]
public class RegionInfo
{
	[Token(Token = "0x40019EE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static RegionInfo currentRegion;

	[Token(Token = "0x40019EF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private int regionId;

	[Token(Token = "0x40019F0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private string iso2Name;

	[Token(Token = "0x40019F1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private string iso3Name;

	[Token(Token = "0x40019F2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private string win3Name;

	[Token(Token = "0x40019F3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private string englishName;

	[Token(Token = "0x40019F4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private string nativeName;

	[Token(Token = "0x40019F5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private string currencySymbol;

	[Token(Token = "0x40019F6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private string isoCurrencySymbol;

	[Token(Token = "0x40019F7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private string currencyEnglishName;

	[Token(Token = "0x40019F8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private string currencyNativeName;

	[Token(Token = "0x17000701")]
	public static RegionInfo CurrentRegion
	{
		[Token(Token = "0x6002E41")]
		[Address(RVA = "0x4F941E0", Offset = "0x4F941E0", VA = "0x4F941E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000702")]
	[ComVisible(false)]
	public virtual string CurrencyEnglishName
	{
		[Token(Token = "0x6002E47")]
		[Address(RVA = "0x4F94740", Offset = "0x4F94740", VA = "0x4F94740", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000703")]
	public virtual string CurrencySymbol
	{
		[Token(Token = "0x6002E48")]
		[Address(RVA = "0x4F94750", Offset = "0x4F94750", VA = "0x4F94750", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000704")]
	[System.MonoTODO("DisplayName currently only returns the EnglishName")]
	public virtual string DisplayName
	{
		[Token(Token = "0x6002E49")]
		[Address(RVA = "0x4F94760", Offset = "0x4F94760", VA = "0x4F94760", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000705")]
	public virtual string EnglishName
	{
		[Token(Token = "0x6002E4A")]
		[Address(RVA = "0x4F94770", Offset = "0x4F94770", VA = "0x4F94770", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000706")]
	[ComVisible(false)]
	public virtual int GeoId
	{
		[Token(Token = "0x6002E4B")]
		[Address(RVA = "0x4F94780", Offset = "0x4F94780", VA = "0x4F94780", Slot = "8")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000707")]
	public virtual bool IsMetric
	{
		[Token(Token = "0x6002E4C")]
		[Address(RVA = "0x4F94790", Offset = "0x4F94790", VA = "0x4F94790", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000708")]
	public virtual string ISOCurrencySymbol
	{
		[Token(Token = "0x6002E4D")]
		[Address(RVA = "0x4F94800", Offset = "0x4F94800", VA = "0x4F94800", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000709")]
	[ComVisible(false)]
	public virtual string NativeName
	{
		[Token(Token = "0x6002E4E")]
		[Address(RVA = "0x4F94810", Offset = "0x4F94810", VA = "0x4F94810", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700070A")]
	[ComVisible(false)]
	public virtual string CurrencyNativeName
	{
		[Token(Token = "0x6002E4F")]
		[Address(RVA = "0x4F94820", Offset = "0x4F94820", VA = "0x4F94820", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700070B")]
	public virtual string Name
	{
		[Token(Token = "0x6002E50")]
		[Address(RVA = "0x4F94830", Offset = "0x4F94830", VA = "0x4F94830", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700070C")]
	public virtual string ThreeLetterISORegionName
	{
		[Token(Token = "0x6002E51")]
		[Address(RVA = "0x4F94840", Offset = "0x4F94840", VA = "0x4F94840", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700070D")]
	public virtual string ThreeLetterWindowsRegionName
	{
		[Token(Token = "0x6002E52")]
		[Address(RVA = "0x4F94850", Offset = "0x4F94850", VA = "0x4F94850", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700070E")]
	public virtual string TwoLetterISORegionName
	{
		[Token(Token = "0x6002E53")]
		[Address(RVA = "0x4F94860", Offset = "0x4F94860", VA = "0x4F94860", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002E42")]
	[Address(RVA = "0x4F94490", Offset = "0x4F94490", VA = "0x4F94490")]
	public RegionInfo(int culture)
	{
	}

	[Token(Token = "0x6002E43")]
	[Address(RVA = "0x4F94620", Offset = "0x4F94620", VA = "0x4F94620")]
	public RegionInfo(string name)
	{
	}

	[Token(Token = "0x6002E44")]
	[Address(RVA = "0x4F942A0", Offset = "0x4F942A0", VA = "0x4F942A0")]
	private RegionInfo(CultureInfo ci)
	{
	}

	[Token(Token = "0x6002E45")]
	[Address(RVA = "0x4F94580", Offset = "0x4F94580", VA = "0x4F94580")]
	private bool GetByTerritory(CultureInfo ci)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002E46")]
	[Address(RVA = "0x4F94730", Offset = "0x4F94730", VA = "0x4F94730")]
	private extern bool construct_internal_region_from_name(string name);

	[Token(Token = "0x6002E54")]
	[Address(RVA = "0x4F94870", Offset = "0x4F94870", VA = "0x4F94870", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6002E55")]
	[Address(RVA = "0x4F94920", Offset = "0x4F94920", VA = "0x4F94920", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6002E56")]
	[Address(RVA = "0x4F94960", Offset = "0x4F94960", VA = "0x4F94960", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6002E57")]
	[Address(RVA = "0x4F94980", Offset = "0x4F94980", VA = "0x4F94980")]
	internal static void ClearCachedData()
	{
	}
}
