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
[Token(Token = "0x2000586")]
[ComVisible(true)]
public class RegionInfo
{
	[Token(Token = "0x4001771")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static RegionInfo currentRegion;

	[Token(Token = "0x4001772")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private int regionId;

	[Token(Token = "0x4001773")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private string iso2Name;

	[Token(Token = "0x4001774")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private string iso3Name;

	[Token(Token = "0x4001775")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private string win3Name;

	[Token(Token = "0x4001776")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private string englishName;

	[Token(Token = "0x4001777")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private string nativeName;

	[Token(Token = "0x4001778")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private string currencySymbol;

	[Token(Token = "0x4001779")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private string isoCurrencySymbol;

	[Token(Token = "0x400177A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private string currencyEnglishName;

	[Token(Token = "0x400177B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private string currencyNativeName;

	[Token(Token = "0x1700068F")]
	public static RegionInfo CurrentRegion
	{
		[Token(Token = "0x6002B2D")]
		[Address(RVA = "0x544CD80", Offset = "0x544BD80", VA = "0x544CD80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000690")]
	[ComVisible(false)]
	public virtual string CurrencyEnglishName
	{
		[Token(Token = "0x6002B33")]
		[Address(RVA = "0x544D2F0", Offset = "0x544C2F0", VA = "0x544D2F0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000691")]
	public virtual string CurrencySymbol
	{
		[Token(Token = "0x6002B34")]
		[Address(RVA = "0x544D300", Offset = "0x544C300", VA = "0x544D300", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000692")]
	[System.MonoTODO("DisplayName currently only returns the EnglishName")]
	public virtual string DisplayName
	{
		[Token(Token = "0x6002B35")]
		[Address(RVA = "0x544D310", Offset = "0x544C310", VA = "0x544D310", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000693")]
	public virtual string EnglishName
	{
		[Token(Token = "0x6002B36")]
		[Address(RVA = "0x544D320", Offset = "0x544C320", VA = "0x544D320", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000694")]
	[ComVisible(false)]
	public virtual int GeoId
	{
		[Token(Token = "0x6002B37")]
		[Address(RVA = "0x544D330", Offset = "0x544C330", VA = "0x544D330", Slot = "8")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000695")]
	public virtual bool IsMetric
	{
		[Token(Token = "0x6002B38")]
		[Address(RVA = "0x544D340", Offset = "0x544C340", VA = "0x544D340", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000696")]
	public virtual string ISOCurrencySymbol
	{
		[Token(Token = "0x6002B39")]
		[Address(RVA = "0x544D3B0", Offset = "0x544C3B0", VA = "0x544D3B0", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000697")]
	[ComVisible(false)]
	public virtual string NativeName
	{
		[Token(Token = "0x6002B3A")]
		[Address(RVA = "0x544D3C0", Offset = "0x544C3C0", VA = "0x544D3C0", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000698")]
	[ComVisible(false)]
	public virtual string CurrencyNativeName
	{
		[Token(Token = "0x6002B3B")]
		[Address(RVA = "0x544D3D0", Offset = "0x544C3D0", VA = "0x544D3D0", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000699")]
	public virtual string Name
	{
		[Token(Token = "0x6002B3C")]
		[Address(RVA = "0x544D3E0", Offset = "0x544C3E0", VA = "0x544D3E0", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700069A")]
	public virtual string ThreeLetterISORegionName
	{
		[Token(Token = "0x6002B3D")]
		[Address(RVA = "0x544D3F0", Offset = "0x544C3F0", VA = "0x544D3F0", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700069B")]
	public virtual string ThreeLetterWindowsRegionName
	{
		[Token(Token = "0x6002B3E")]
		[Address(RVA = "0x544D400", Offset = "0x544C400", VA = "0x544D400", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700069C")]
	public virtual string TwoLetterISORegionName
	{
		[Token(Token = "0x6002B3F")]
		[Address(RVA = "0x544D410", Offset = "0x544C410", VA = "0x544D410", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002B2E")]
	[Address(RVA = "0x544D040", Offset = "0x544C040", VA = "0x544D040")]
	public RegionInfo(int culture)
	{
	}

	[Token(Token = "0x6002B2F")]
	[Address(RVA = "0x544D1D0", Offset = "0x544C1D0", VA = "0x544D1D0")]
	public RegionInfo(string name)
	{
	}

	[Token(Token = "0x6002B30")]
	[Address(RVA = "0x544CE50", Offset = "0x544BE50", VA = "0x544CE50")]
	private RegionInfo(CultureInfo ci)
	{
	}

	[Token(Token = "0x6002B31")]
	[Address(RVA = "0x544D130", Offset = "0x544C130", VA = "0x544D130")]
	private bool GetByTerritory(CultureInfo ci)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002B32")]
	[Address(RVA = "0x544D2E0", Offset = "0x544C2E0", VA = "0x544D2E0")]
	private extern bool construct_internal_region_from_name(string name);

	[Token(Token = "0x6002B40")]
	[Address(RVA = "0x544D420", Offset = "0x544C420", VA = "0x544D420", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6002B41")]
	[Address(RVA = "0x544D4C0", Offset = "0x544C4C0", VA = "0x544D4C0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6002B42")]
	[Address(RVA = "0x544D500", Offset = "0x544C500", VA = "0x544D500", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6002B43")]
	[Address(RVA = "0x544D520", Offset = "0x544C520", VA = "0x544D520")]
	internal static void ClearCachedData()
	{
	}
}
