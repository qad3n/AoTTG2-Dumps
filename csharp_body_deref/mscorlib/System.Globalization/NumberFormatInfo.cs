// ==================== AoTTG2 cross-reference ====================
// Type: System.Globalization.NumberFormatInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Globalization;

[Serializable]
[Token(Token = "0x20005C2")]
[ComVisible(true)]
public sealed class NumberFormatInfo : ICloneable, IFormatProvider
{
	[Token(Token = "0x4001925")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static NumberFormatInfo invariantInfo;

	[Token(Token = "0x4001926")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal int[] numberGroupSizes;

	[Token(Token = "0x4001927")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	internal int[] currencyGroupSizes;

	[Token(Token = "0x4001928")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	internal int[] percentGroupSizes;

	[Token(Token = "0x4001929")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	internal string positiveSign;

	[Token(Token = "0x400192A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	internal string negativeSign;

	[Token(Token = "0x400192B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	internal string numberDecimalSeparator;

	[Token(Token = "0x400192C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	internal string numberGroupSeparator;

	[Token(Token = "0x400192D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	internal string currencyGroupSeparator;

	[Token(Token = "0x400192E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	internal string currencyDecimalSeparator;

	[Token(Token = "0x400192F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	internal string currencySymbol;

	[Token(Token = "0x4001930")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	internal string ansiCurrencySymbol;

	[Token(Token = "0x4001931")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	internal string nanSymbol;

	[Token(Token = "0x4001932")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	internal string positiveInfinitySymbol;

	[Token(Token = "0x4001933")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	internal string negativeInfinitySymbol;

	[Token(Token = "0x4001934")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	internal string percentDecimalSeparator;

	[Token(Token = "0x4001935")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	internal string percentGroupSeparator;

	[Token(Token = "0x4001936")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	internal string percentSymbol;

	[Token(Token = "0x4001937")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	internal string perMilleSymbol;

	[Token(Token = "0x4001938")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	[OptionalField(VersionAdded = 2)]
	internal string[] nativeDigits;

	[Token(Token = "0x4001939")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	[OptionalField(VersionAdded = 1)]
	internal int m_dataItem;

	[Token(Token = "0x400193A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xAC")]
	internal int numberDecimalDigits;

	[Token(Token = "0x400193B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	internal int currencyDecimalDigits;

	[Token(Token = "0x400193C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB4")]
	internal int currencyPositivePattern;

	[Token(Token = "0x400193D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	internal int currencyNegativePattern;

	[Token(Token = "0x400193E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xBC")]
	internal int numberNegativePattern;

	[Token(Token = "0x400193F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	internal int percentPositivePattern;

	[Token(Token = "0x4001940")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC4")]
	internal int percentNegativePattern;

	[Token(Token = "0x4001941")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	internal int percentDecimalDigits;

	[Token(Token = "0x4001942")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xCC")]
	[OptionalField(VersionAdded = 2)]
	internal int digitSubstitution;

	[Token(Token = "0x4001943")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	internal bool isReadOnly;

	[Token(Token = "0x4001944")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD1")]
	[OptionalField(VersionAdded = 1)]
	internal bool m_useUserOverride;

	[Token(Token = "0x4001945")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD2")]
	[OptionalField(VersionAdded = 2)]
	internal bool m_isInvariant;

	[Token(Token = "0x4001946")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD3")]
	[OptionalField(VersionAdded = 1)]
	internal bool validForParseAsNumber;

	[Token(Token = "0x4001947")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD4")]
	[OptionalField(VersionAdded = 1)]
	internal bool validForParseAsCurrency;

	[Token(Token = "0x4001948")]
	private const NumberStyles InvalidNumberStyles = ~(NumberStyles.Any | NumberStyles.AllowHexSpecifier);

	[Token(Token = "0x170006A3")]
	public static NumberFormatInfo InvariantInfo
	{
		[Token(Token = "0x6002D03")]
		[Address(RVA = "0x3C5E100", Offset = "0x3C5E100", VA = "0x3C5E100")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006A4")]
	public int CurrencyDecimalDigits
	{
		[Token(Token = "0x6002D06")]
		[Address(RVA = "0x3C5E550", Offset = "0x3C5E550", VA = "0x3C5E550")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006A5")]
	public string CurrencyDecimalSeparator
	{
		[Token(Token = "0x6002D07")]
		[Address(RVA = "0x3C5E560", Offset = "0x3C5E560", VA = "0x3C5E560")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006A6")]
	public bool IsReadOnly
	{
		[Token(Token = "0x6002D08")]
		[Address(RVA = "0x3C5E570", Offset = "0x3C5E570", VA = "0x3C5E570")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170006A7")]
	public int[] CurrencyGroupSizes
	{
		[Token(Token = "0x6002D09")]
		[Address(RVA = "0x3C5E580", Offset = "0x3C5E580", VA = "0x3C5E580")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006A8")]
	public int[] NumberGroupSizes
	{
		[Token(Token = "0x6002D0A")]
		[Address(RVA = "0x3C5E600", Offset = "0x3C5E600", VA = "0x3C5E600")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006A9")]
	public int[] PercentGroupSizes
	{
		[Token(Token = "0x6002D0B")]
		[Address(RVA = "0x3C5E680", Offset = "0x3C5E680", VA = "0x3C5E680")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006AA")]
	public string CurrencyGroupSeparator
	{
		[Token(Token = "0x6002D0C")]
		[Address(RVA = "0x3C5E700", Offset = "0x3C5E700", VA = "0x3C5E700")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006AB")]
	public string CurrencySymbol
	{
		[Token(Token = "0x6002D0D")]
		[Address(RVA = "0x3C5E710", Offset = "0x3C5E710", VA = "0x3C5E710")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006AC")]
	public static NumberFormatInfo CurrentInfo
	{
		[Token(Token = "0x6002D0E")]
		[Address(RVA = "0x3C5E410", Offset = "0x3C5E410", VA = "0x3C5E410")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006AD")]
	public string NaNSymbol
	{
		[Token(Token = "0x6002D0F")]
		[Address(RVA = "0x3C5E720", Offset = "0x3C5E720", VA = "0x3C5E720")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002D10")]
		[Address(RVA = "0x3C5E730", Offset = "0x3C5E730", VA = "0x3C5E730")]
		set
		{
		}
	}

	[Token(Token = "0x170006AE")]
	public int CurrencyNegativePattern
	{
		[Token(Token = "0x6002D11")]
		[Address(RVA = "0x3C5E810", Offset = "0x3C5E810", VA = "0x3C5E810")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006AF")]
	public int NumberNegativePattern
	{
		[Token(Token = "0x6002D12")]
		[Address(RVA = "0x3C5E820", Offset = "0x3C5E820", VA = "0x3C5E820")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006B0")]
	public int PercentPositivePattern
	{
		[Token(Token = "0x6002D13")]
		[Address(RVA = "0x3C5E830", Offset = "0x3C5E830", VA = "0x3C5E830")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006B1")]
	public int PercentNegativePattern
	{
		[Token(Token = "0x6002D14")]
		[Address(RVA = "0x3C5E840", Offset = "0x3C5E840", VA = "0x3C5E840")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006B2")]
	public string NegativeInfinitySymbol
	{
		[Token(Token = "0x6002D15")]
		[Address(RVA = "0x3C5E850", Offset = "0x3C5E850", VA = "0x3C5E850")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006B3")]
	public string NegativeSign
	{
		[Token(Token = "0x6002D16")]
		[Address(RVA = "0x3C5E860", Offset = "0x3C5E860", VA = "0x3C5E860")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006B4")]
	public int NumberDecimalDigits
	{
		[Token(Token = "0x6002D17")]
		[Address(RVA = "0x3C5E870", Offset = "0x3C5E870", VA = "0x3C5E870")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002D18")]
		[Address(RVA = "0x3C5E880", Offset = "0x3C5E880", VA = "0x3C5E880")]
		set
		{
		}
	}

	[Token(Token = "0x170006B5")]
	public string NumberDecimalSeparator
	{
		[Token(Token = "0x6002D19")]
		[Address(RVA = "0x3C5E9D0", Offset = "0x3C5E9D0", VA = "0x3C5E9D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006B6")]
	public string NumberGroupSeparator
	{
		[Token(Token = "0x6002D1A")]
		[Address(RVA = "0x3C5E9E0", Offset = "0x3C5E9E0", VA = "0x3C5E9E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006B7")]
	public int CurrencyPositivePattern
	{
		[Token(Token = "0x6002D1B")]
		[Address(RVA = "0x3C5E9F0", Offset = "0x3C5E9F0", VA = "0x3C5E9F0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006B8")]
	public string PositiveInfinitySymbol
	{
		[Token(Token = "0x6002D1C")]
		[Address(RVA = "0x3C5EA00", Offset = "0x3C5EA00", VA = "0x3C5EA00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006B9")]
	public string PositiveSign
	{
		[Token(Token = "0x6002D1D")]
		[Address(RVA = "0x3C5EA10", Offset = "0x3C5EA10", VA = "0x3C5EA10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006BA")]
	public int PercentDecimalDigits
	{
		[Token(Token = "0x6002D1E")]
		[Address(RVA = "0x3C5EA20", Offset = "0x3C5EA20", VA = "0x3C5EA20")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006BB")]
	public string PercentDecimalSeparator
	{
		[Token(Token = "0x6002D1F")]
		[Address(RVA = "0x3C5EA30", Offset = "0x3C5EA30", VA = "0x3C5EA30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006BC")]
	public string PercentGroupSeparator
	{
		[Token(Token = "0x6002D20")]
		[Address(RVA = "0x3C5EA40", Offset = "0x3C5EA40", VA = "0x3C5EA40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006BD")]
	public string PercentSymbol
	{
		[Token(Token = "0x6002D21")]
		[Address(RVA = "0x3C5EA50", Offset = "0x3C5EA50", VA = "0x3C5EA50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006BE")]
	public string PerMilleSymbol
	{
		[Token(Token = "0x6002D22")]
		[Address(RVA = "0x3C5EA60", Offset = "0x3C5EA60", VA = "0x3C5EA60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002CFD")]
	[Address(RVA = "0x3C5D500", Offset = "0x3C5D500", VA = "0x3C5D500")]
	public NumberFormatInfo()
	{
	}

	[Token(Token = "0x6002CFE")]
	[Address(RVA = "0x3C5DAB0", Offset = "0x3C5DAB0", VA = "0x3C5DAB0")]
	[OnSerializing]
	private void OnSerializing(StreamingContext ctx)
	{
	}

	[Token(Token = "0x6002CFF")]
	[Address(RVA = "0x3C5DB30", Offset = "0x3C5DB30", VA = "0x3C5DB30")]
	[OnDeserializing]
	private void OnDeserializing(StreamingContext ctx)
	{
	}

	[Token(Token = "0x6002D00")]
	[Address(RVA = "0x3C5DB40", Offset = "0x3C5DB40", VA = "0x3C5DB40")]
	[OnDeserialized]
	private void OnDeserialized(StreamingContext ctx)
	{
	}

	[Token(Token = "0x6002D01")]
	[Address(RVA = "0x3C5D510", Offset = "0x3C5D510", VA = "0x3C5D510")]
	internal NumberFormatInfo(System.Globalization.CultureData cultureData)
	{
	}

	[Token(Token = "0x6002D02")]
	[Address(RVA = "0x3C5E090", Offset = "0x3C5E090", VA = "0x3C5E090")]
	private void VerifyWritable()
	{
	}

	[Token(Token = "0x6002D04")]
	[Address(RVA = "0x3C5E270", Offset = "0x3C5E270", VA = "0x3C5E270")]
	public static NumberFormatInfo GetInstance(IFormatProvider formatProvider)
	{
		return null;
	}

	[Token(Token = "0x6002D05")]
	[Address(RVA = "0x3C5E4F0", Offset = "0x3C5E4F0", VA = "0x3C5E4F0", Slot = "4")]
	public object Clone()
	{
		return null;
	}

	[Token(Token = "0x6002D23")]
	[Address(RVA = "0x3C5EA70", Offset = "0x3C5EA70", VA = "0x3C5EA70", Slot = "5")]
	public object GetFormat(Type formatType)
	{
		return null;
	}

	[Token(Token = "0x6002D24")]
	[Address(RVA = "0x3C5E1B0", Offset = "0x3C5E1B0", VA = "0x3C5E1B0")]
	public static NumberFormatInfo ReadOnly(NumberFormatInfo nfi)
	{
		return null;
	}

	[Token(Token = "0x6002D25")]
	[Address(RVA = "0x3C5EAF0", Offset = "0x3C5EAF0", VA = "0x3C5EAF0")]
	internal static void ValidateParseStyleInteger(NumberStyles style)
	{
	}

	[Token(Token = "0x6002D26")]
	[Address(RVA = "0x3C5EBC0", Offset = "0x3C5EBC0", VA = "0x3C5EBC0")]
	internal static void ValidateParseStyleFloatingPoint(NumberStyles style)
	{
	}
}
