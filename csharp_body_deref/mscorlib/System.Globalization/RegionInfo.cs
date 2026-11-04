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
[Token(Token = "0x20005AB")]
[ComVisible(true)]
public class RegionInfo
{
	[Token(Token = "0x400180A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static RegionInfo currentRegion;

	[Token(Token = "0x400180B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private int regionId;

	[Token(Token = "0x400180C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private string iso2Name;

	[Token(Token = "0x400180D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private string iso3Name;

	[Token(Token = "0x400180E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private string win3Name;

	[Token(Token = "0x400180F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private string englishName;

	[Token(Token = "0x4001810")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private string nativeName;

	[Token(Token = "0x4001811")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private string currencySymbol;

	[Token(Token = "0x4001812")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private string isoCurrencySymbol;

	[Token(Token = "0x4001813")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private string currencyEnglishName;

	[Token(Token = "0x4001814")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private string currencyNativeName;

	[Token(Token = "0x1700068E")]
	public static RegionInfo CurrentRegion
	{
		[Token(Token = "0x6002B4E")]
		[Address(RVA = "0x1AC4C70", Offset = "0x1AC3270", VA = "0x181AC4C70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700068F")]
	[ComVisible(false)]
	public virtual string CurrencyEnglishName
	{
		[Token(Token = "0x6002B54")]
		[Address(RVA = "0x5853D0", Offset = "0x5839D0", VA = "0x1805853D0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000690")]
	public virtual string CurrencySymbol
	{
		[Token(Token = "0x6002B55")]
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000691")]
	[System.MonoTODO("DisplayName currently only returns the EnglishName")]
	public virtual string DisplayName
	{
		[Token(Token = "0x6002B56")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000692")]
	public virtual string EnglishName
	{
		[Token(Token = "0x6002B57")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000693")]
	[ComVisible(false)]
	public virtual int GeoId
	{
		[Token(Token = "0x6002B58")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860", Slot = "8")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000694")]
	public virtual bool IsMetric
	{
		[Token(Token = "0x6002B59")]
		[Address(RVA = "0x1AC4D50", Offset = "0x1AC3350", VA = "0x181AC4D50", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000695")]
	public virtual string ISOCurrencySymbol
	{
		[Token(Token = "0x6002B5A")]
		[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000696")]
	[ComVisible(false)]
	public virtual string NativeName
	{
		[Token(Token = "0x6002B5B")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000697")]
	[ComVisible(false)]
	public virtual string CurrencyNativeName
	{
		[Token(Token = "0x6002B5C")]
		[Address(RVA = "0x58A570", Offset = "0x588B70", VA = "0x18058A570", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000698")]
	public virtual string Name
	{
		[Token(Token = "0x6002B5D")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000699")]
	public virtual string ThreeLetterISORegionName
	{
		[Token(Token = "0x6002B5E")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700069A")]
	public virtual string ThreeLetterWindowsRegionName
	{
		[Token(Token = "0x6002B5F")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700069B")]
	public virtual string TwoLetterISORegionName
	{
		[Token(Token = "0x6002B60")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002B4F")]
	[Address(RVA = "0x1AC4AE0", Offset = "0x1AC30E0", VA = "0x181AC4AE0")]
	public RegionInfo(int culture)
	{
	}

	[Token(Token = "0x6002B50")]
	[Address(RVA = "0x1AC4720", Offset = "0x1AC2D20", VA = "0x181AC4720")]
	public RegionInfo(string name)
	{
	}

	[Token(Token = "0x6002B51")]
	[Address(RVA = "0x1AC48E0", Offset = "0x1AC2EE0", VA = "0x181AC48E0")]
	private RegionInfo(CultureInfo ci)
	{
	}

	[Token(Token = "0x6002B52")]
	[Address(RVA = "0x1AC4610", Offset = "0x1AC2C10", VA = "0x181AC4610")]
	private bool GetByTerritory(CultureInfo ci)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002B53")]
	[Address(RVA = "0x1AC4C60", Offset = "0x1AC3260", VA = "0x181AC4C60")]
	private extern bool construct_internal_region_from_name(string name);

	[Token(Token = "0x6002B61")]
	[Address(RVA = "0x1AC4560", Offset = "0x1AC2B60", VA = "0x181AC4560", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6002B62")]
	[Address(RVA = "0x1AC46C0", Offset = "0x1AC2CC0", VA = "0x181AC46C0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6002B63")]
	[Address(RVA = "0x1AC4700", Offset = "0x1AC2D00", VA = "0x181AC4700", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6002B64")]
	[Address(RVA = "0x1AC4510", Offset = "0x1AC2B10", VA = "0x181AC4510")]
	internal static void ClearCachedData()
	{
	}
}
