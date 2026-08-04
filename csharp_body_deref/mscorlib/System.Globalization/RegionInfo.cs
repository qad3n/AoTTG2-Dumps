// ==================== AoTTG2 cross-reference ====================
// Type: System.Globalization.RegionInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3C79D00", Offset = "0x3C79D00", VA = "0x3C79D00")]
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
		[Address(RVA = "0x3C7A260", Offset = "0x3C7A260", VA = "0x3C7A260", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000703")]
	public virtual string CurrencySymbol
	{
		[Token(Token = "0x6002E48")]
		[Address(RVA = "0x3C7A270", Offset = "0x3C7A270", VA = "0x3C7A270", Slot = "5")]
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
		[Address(RVA = "0x3C7A280", Offset = "0x3C7A280", VA = "0x3C7A280", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000705")]
	public virtual string EnglishName
	{
		[Token(Token = "0x6002E4A")]
		[Address(RVA = "0x3C7A290", Offset = "0x3C7A290", VA = "0x3C7A290", Slot = "7")]
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
		[Address(RVA = "0x3C7A2A0", Offset = "0x3C7A2A0", VA = "0x3C7A2A0", Slot = "8")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000707")]
	public virtual bool IsMetric
	{
		[Token(Token = "0x6002E4C")]
		[Address(RVA = "0x3C7A2B0", Offset = "0x3C7A2B0", VA = "0x3C7A2B0", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000708")]
	public virtual string ISOCurrencySymbol
	{
		[Token(Token = "0x6002E4D")]
		[Address(RVA = "0x3C7A320", Offset = "0x3C7A320", VA = "0x3C7A320", Slot = "10")]
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
		[Address(RVA = "0x3C7A330", Offset = "0x3C7A330", VA = "0x3C7A330", Slot = "11")]
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
		[Address(RVA = "0x3C7A340", Offset = "0x3C7A340", VA = "0x3C7A340", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700070B")]
	public virtual string Name
	{
		[Token(Token = "0x6002E50")]
		[Address(RVA = "0x3C7A350", Offset = "0x3C7A350", VA = "0x3C7A350", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700070C")]
	public virtual string ThreeLetterISORegionName
	{
		[Token(Token = "0x6002E51")]
		[Address(RVA = "0x3C7A360", Offset = "0x3C7A360", VA = "0x3C7A360", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700070D")]
	public virtual string ThreeLetterWindowsRegionName
	{
		[Token(Token = "0x6002E52")]
		[Address(RVA = "0x3C7A370", Offset = "0x3C7A370", VA = "0x3C7A370", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700070E")]
	public virtual string TwoLetterISORegionName
	{
		[Token(Token = "0x6002E53")]
		[Address(RVA = "0x3C7A380", Offset = "0x3C7A380", VA = "0x3C7A380", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002E42")]
	[Address(RVA = "0x3C79FB0", Offset = "0x3C79FB0", VA = "0x3C79FB0")]
	public RegionInfo(int culture)
	{
	}

	[Token(Token = "0x6002E43")]
	[Address(RVA = "0x3C7A140", Offset = "0x3C7A140", VA = "0x3C7A140")]
	public RegionInfo(string name)
	{
	}

	[Token(Token = "0x6002E44")]
	[Address(RVA = "0x3C79DC0", Offset = "0x3C79DC0", VA = "0x3C79DC0")]
	private RegionInfo(CultureInfo ci)
	{
	}

	[Token(Token = "0x6002E45")]
	[Address(RVA = "0x3C7A0A0", Offset = "0x3C7A0A0", VA = "0x3C7A0A0")]
	private bool GetByTerritory(CultureInfo ci)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002E46")]
	[Address(RVA = "0x3C7A250", Offset = "0x3C7A250", VA = "0x3C7A250")]
	private extern bool construct_internal_region_from_name(string name);

	[Token(Token = "0x6002E54")]
	[Address(RVA = "0x3C7A390", Offset = "0x3C7A390", VA = "0x3C7A390", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6002E55")]
	[Address(RVA = "0x3C7A440", Offset = "0x3C7A440", VA = "0x3C7A440", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6002E56")]
	[Address(RVA = "0x3C7A480", Offset = "0x3C7A480", VA = "0x3C7A480", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6002E57")]
	[Address(RVA = "0x3C7A4A0", Offset = "0x3C7A4A0", VA = "0x3C7A4A0")]
	internal static void ClearCachedData()
	{
	}
}
