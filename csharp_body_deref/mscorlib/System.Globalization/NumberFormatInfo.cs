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
[Token(Token = "0x200056F")]
[ComVisible(true)]
public sealed class NumberFormatInfo : ICloneable, IFormatProvider
{
	[Token(Token = "0x40016AD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static NumberFormatInfo invariantInfo;

	[Token(Token = "0x40016AE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal int[] numberGroupSizes;

	[Token(Token = "0x40016AF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	internal int[] currencyGroupSizes;

	[Token(Token = "0x40016B0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	internal int[] percentGroupSizes;

	[Token(Token = "0x40016B1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	internal string positiveSign;

	[Token(Token = "0x40016B2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	internal string negativeSign;

	[Token(Token = "0x40016B3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	internal string numberDecimalSeparator;

	[Token(Token = "0x40016B4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	internal string numberGroupSeparator;

	[Token(Token = "0x40016B5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	internal string currencyGroupSeparator;

	[Token(Token = "0x40016B6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	internal string currencyDecimalSeparator;

	[Token(Token = "0x40016B7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	internal string currencySymbol;

	[Token(Token = "0x40016B8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	internal string ansiCurrencySymbol;

	[Token(Token = "0x40016B9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	internal string nanSymbol;

	[Token(Token = "0x40016BA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	internal string positiveInfinitySymbol;

	[Token(Token = "0x40016BB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	internal string negativeInfinitySymbol;

	[Token(Token = "0x40016BC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	internal string percentDecimalSeparator;

	[Token(Token = "0x40016BD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	internal string percentGroupSeparator;

	[Token(Token = "0x40016BE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	internal string percentSymbol;

	[Token(Token = "0x40016BF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	internal string perMilleSymbol;

	[Token(Token = "0x40016C0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	[OptionalField(VersionAdded = 2)]
	internal string[] nativeDigits;

	[Token(Token = "0x40016C1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	[OptionalField(VersionAdded = 1)]
	internal int m_dataItem;

	[Token(Token = "0x40016C2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xAC")]
	internal int numberDecimalDigits;

	[Token(Token = "0x40016C3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	internal int currencyDecimalDigits;

	[Token(Token = "0x40016C4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB4")]
	internal int currencyPositivePattern;

	[Token(Token = "0x40016C5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	internal int currencyNegativePattern;

	[Token(Token = "0x40016C6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xBC")]
	internal int numberNegativePattern;

	[Token(Token = "0x40016C7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	internal int percentPositivePattern;

	[Token(Token = "0x40016C8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC4")]
	internal int percentNegativePattern;

	[Token(Token = "0x40016C9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	internal int percentDecimalDigits;

	[Token(Token = "0x40016CA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xCC")]
	[OptionalField(VersionAdded = 2)]
	internal int digitSubstitution;

	[Token(Token = "0x40016CB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	internal bool isReadOnly;

	[Token(Token = "0x40016CC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD1")]
	[OptionalField(VersionAdded = 1)]
	internal bool m_useUserOverride;

	[Token(Token = "0x40016CD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD2")]
	[OptionalField(VersionAdded = 2)]
	internal bool m_isInvariant;

	[Token(Token = "0x40016CE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD3")]
	[OptionalField(VersionAdded = 1)]
	internal bool validForParseAsNumber;

	[Token(Token = "0x40016CF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD4")]
	[OptionalField(VersionAdded = 1)]
	internal bool validForParseAsCurrency;

	[Token(Token = "0x40016D0")]
	private const NumberStyles InvalidNumberStyles = ~(NumberStyles.Any | NumberStyles.AllowHexSpecifier);

	[Token(Token = "0x17000631")]
	public static NumberFormatInfo InvariantInfo
	{
		[Token(Token = "0x60029EF")]
		[Address(RVA = "0x5432E60", Offset = "0x5431E60", VA = "0x5432E60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000632")]
	public int CurrencyDecimalDigits
	{
		[Token(Token = "0x60029F2")]
		[Address(RVA = "0x54332D0", Offset = "0x54322D0", VA = "0x54332D0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000633")]
	public string CurrencyDecimalSeparator
	{
		[Token(Token = "0x60029F3")]
		[Address(RVA = "0x54332E0", Offset = "0x54322E0", VA = "0x54332E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000634")]
	public bool IsReadOnly
	{
		[Token(Token = "0x60029F4")]
		[Address(RVA = "0x54332F0", Offset = "0x54322F0", VA = "0x54332F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000635")]
	public int[] CurrencyGroupSizes
	{
		[Token(Token = "0x60029F5")]
		[Address(RVA = "0x5433300", Offset = "0x5432300", VA = "0x5433300")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000636")]
	public int[] NumberGroupSizes
	{
		[Token(Token = "0x60029F6")]
		[Address(RVA = "0x5433380", Offset = "0x5432380", VA = "0x5433380")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000637")]
	public int[] PercentGroupSizes
	{
		[Token(Token = "0x60029F7")]
		[Address(RVA = "0x5433400", Offset = "0x5432400", VA = "0x5433400")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000638")]
	public string CurrencyGroupSeparator
	{
		[Token(Token = "0x60029F8")]
		[Address(RVA = "0x5433480", Offset = "0x5432480", VA = "0x5433480")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000639")]
	public string CurrencySymbol
	{
		[Token(Token = "0x60029F9")]
		[Address(RVA = "0x5433490", Offset = "0x5432490", VA = "0x5433490")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700063A")]
	public static NumberFormatInfo CurrentInfo
	{
		[Token(Token = "0x60029FA")]
		[Address(RVA = "0x5433180", Offset = "0x5432180", VA = "0x5433180")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700063B")]
	public string NaNSymbol
	{
		[Token(Token = "0x60029FB")]
		[Address(RVA = "0x54334A0", Offset = "0x54324A0", VA = "0x54334A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60029FC")]
		[Address(RVA = "0x54334B0", Offset = "0x54324B0", VA = "0x54334B0")]
		set
		{
		}
	}

	[Token(Token = "0x1700063C")]
	public int CurrencyNegativePattern
	{
		[Token(Token = "0x60029FD")]
		[Address(RVA = "0x5433580", Offset = "0x5432580", VA = "0x5433580")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700063D")]
	public int NumberNegativePattern
	{
		[Token(Token = "0x60029FE")]
		[Address(RVA = "0x5433590", Offset = "0x5432590", VA = "0x5433590")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700063E")]
	public int PercentPositivePattern
	{
		[Token(Token = "0x60029FF")]
		[Address(RVA = "0x54335A0", Offset = "0x54325A0", VA = "0x54335A0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700063F")]
	public int PercentNegativePattern
	{
		[Token(Token = "0x6002A00")]
		[Address(RVA = "0x54335B0", Offset = "0x54325B0", VA = "0x54335B0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000640")]
	public string NegativeInfinitySymbol
	{
		[Token(Token = "0x6002A01")]
		[Address(RVA = "0x54335C0", Offset = "0x54325C0", VA = "0x54335C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000641")]
	public string NegativeSign
	{
		[Token(Token = "0x6002A02")]
		[Address(RVA = "0x54335D0", Offset = "0x54325D0", VA = "0x54335D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000642")]
	public int NumberDecimalDigits
	{
		[Token(Token = "0x6002A03")]
		[Address(RVA = "0x54335E0", Offset = "0x54325E0", VA = "0x54335E0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002A04")]
		[Address(RVA = "0x54335F0", Offset = "0x54325F0", VA = "0x54335F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000643")]
	public string NumberDecimalSeparator
	{
		[Token(Token = "0x6002A05")]
		[Address(RVA = "0x5433730", Offset = "0x5432730", VA = "0x5433730")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000644")]
	public string NumberGroupSeparator
	{
		[Token(Token = "0x6002A06")]
		[Address(RVA = "0x5433740", Offset = "0x5432740", VA = "0x5433740")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000645")]
	public int CurrencyPositivePattern
	{
		[Token(Token = "0x6002A07")]
		[Address(RVA = "0x5433750", Offset = "0x5432750", VA = "0x5433750")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000646")]
	public string PositiveInfinitySymbol
	{
		[Token(Token = "0x6002A08")]
		[Address(RVA = "0x5433760", Offset = "0x5432760", VA = "0x5433760")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000647")]
	public string PositiveSign
	{
		[Token(Token = "0x6002A09")]
		[Address(RVA = "0x5433770", Offset = "0x5432770", VA = "0x5433770")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000648")]
	public int PercentDecimalDigits
	{
		[Token(Token = "0x6002A0A")]
		[Address(RVA = "0x5433780", Offset = "0x5432780", VA = "0x5433780")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000649")]
	public string PercentDecimalSeparator
	{
		[Token(Token = "0x6002A0B")]
		[Address(RVA = "0x5433790", Offset = "0x5432790", VA = "0x5433790")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700064A")]
	public string PercentGroupSeparator
	{
		[Token(Token = "0x6002A0C")]
		[Address(RVA = "0x54337A0", Offset = "0x54327A0", VA = "0x54337A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700064B")]
	public string PercentSymbol
	{
		[Token(Token = "0x6002A0D")]
		[Address(RVA = "0x54337B0", Offset = "0x54327B0", VA = "0x54337B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700064C")]
	public string PerMilleSymbol
	{
		[Token(Token = "0x6002A0E")]
		[Address(RVA = "0x54337C0", Offset = "0x54327C0", VA = "0x54337C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60029E9")]
	[Address(RVA = "0x5432280", Offset = "0x5431280", VA = "0x5432280")]
	public NumberFormatInfo()
	{
	}

	[Token(Token = "0x60029EA")]
	[Address(RVA = "0x5432840", Offset = "0x5431840", VA = "0x5432840")]
	[OnSerializing]
	private void OnSerializing(StreamingContext ctx)
	{
	}

	[Token(Token = "0x60029EB")]
	[Address(RVA = "0x54328C0", Offset = "0x54318C0", VA = "0x54328C0")]
	[OnDeserializing]
	private void OnDeserializing(StreamingContext ctx)
	{
	}

	[Token(Token = "0x60029EC")]
	[Address(RVA = "0x54328D0", Offset = "0x54318D0", VA = "0x54328D0")]
	[OnDeserialized]
	private void OnDeserialized(StreamingContext ctx)
	{
	}

	[Token(Token = "0x60029ED")]
	[Address(RVA = "0x5432290", Offset = "0x5431290", VA = "0x5432290")]
	internal NumberFormatInfo(System.Globalization.CultureData cultureData)
	{
	}

	[Token(Token = "0x60029EE")]
	[Address(RVA = "0x5432DF0", Offset = "0x5431DF0", VA = "0x5432DF0")]
	private void VerifyWritable()
	{
	}

	[Token(Token = "0x60029F0")]
	[Address(RVA = "0x5432FD0", Offset = "0x5431FD0", VA = "0x5432FD0")]
	public static NumberFormatInfo GetInstance(IFormatProvider formatProvider)
	{
		return null;
	}

	[Token(Token = "0x60029F1")]
	[Address(RVA = "0x5433270", Offset = "0x5432270", VA = "0x5433270", Slot = "4")]
	public object Clone()
	{
		return null;
	}

	[Token(Token = "0x6002A0F")]
	[Address(RVA = "0x54337D0", Offset = "0x54327D0", VA = "0x54337D0", Slot = "5")]
	public object GetFormat(Type formatType)
	{
		return null;
	}

	[Token(Token = "0x6002A10")]
	[Address(RVA = "0x5432F10", Offset = "0x5431F10", VA = "0x5432F10")]
	public static NumberFormatInfo ReadOnly(NumberFormatInfo nfi)
	{
		return null;
	}

	[Token(Token = "0x6002A11")]
	[Address(RVA = "0x5433850", Offset = "0x5432850", VA = "0x5433850")]
	internal static void ValidateParseStyleInteger(NumberStyles style)
	{
	}

	[Token(Token = "0x6002A12")]
	[Address(RVA = "0x5433920", Offset = "0x5432920", VA = "0x5433920")]
	internal static void ValidateParseStyleFloatingPoint(NumberStyles style)
	{
	}
}
