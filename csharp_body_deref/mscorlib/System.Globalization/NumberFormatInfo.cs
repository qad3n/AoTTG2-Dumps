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
[Token(Token = "0x2000594")]
[ComVisible(true)]
public sealed class NumberFormatInfo : ICloneable, IFormatProvider
{
	[Token(Token = "0x4001746")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static NumberFormatInfo invariantInfo;

	[Token(Token = "0x4001747")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal int[] numberGroupSizes;

	[Token(Token = "0x4001748")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	internal int[] currencyGroupSizes;

	[Token(Token = "0x4001749")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	internal int[] percentGroupSizes;

	[Token(Token = "0x400174A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	internal string positiveSign;

	[Token(Token = "0x400174B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	internal string negativeSign;

	[Token(Token = "0x400174C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	internal string numberDecimalSeparator;

	[Token(Token = "0x400174D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	internal string numberGroupSeparator;

	[Token(Token = "0x400174E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	internal string currencyGroupSeparator;

	[Token(Token = "0x400174F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	internal string currencyDecimalSeparator;

	[Token(Token = "0x4001750")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	internal string currencySymbol;

	[Token(Token = "0x4001751")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	internal string ansiCurrencySymbol;

	[Token(Token = "0x4001752")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	internal string nanSymbol;

	[Token(Token = "0x4001753")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	internal string positiveInfinitySymbol;

	[Token(Token = "0x4001754")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	internal string negativeInfinitySymbol;

	[Token(Token = "0x4001755")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	internal string percentDecimalSeparator;

	[Token(Token = "0x4001756")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	internal string percentGroupSeparator;

	[Token(Token = "0x4001757")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	internal string percentSymbol;

	[Token(Token = "0x4001758")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	internal string perMilleSymbol;

	[Token(Token = "0x4001759")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	[OptionalField(VersionAdded = 2)]
	internal string[] nativeDigits;

	[Token(Token = "0x400175A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	[OptionalField(VersionAdded = 1)]
	internal int m_dataItem;

	[Token(Token = "0x400175B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xAC")]
	internal int numberDecimalDigits;

	[Token(Token = "0x400175C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	internal int currencyDecimalDigits;

	[Token(Token = "0x400175D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB4")]
	internal int currencyPositivePattern;

	[Token(Token = "0x400175E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	internal int currencyNegativePattern;

	[Token(Token = "0x400175F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xBC")]
	internal int numberNegativePattern;

	[Token(Token = "0x4001760")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	internal int percentPositivePattern;

	[Token(Token = "0x4001761")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC4")]
	internal int percentNegativePattern;

	[Token(Token = "0x4001762")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	internal int percentDecimalDigits;

	[Token(Token = "0x4001763")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xCC")]
	[OptionalField(VersionAdded = 2)]
	internal int digitSubstitution;

	[Token(Token = "0x4001764")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	internal bool isReadOnly;

	[Token(Token = "0x4001765")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD1")]
	[OptionalField(VersionAdded = 1)]
	internal bool m_useUserOverride;

	[Token(Token = "0x4001766")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD2")]
	[OptionalField(VersionAdded = 2)]
	internal bool m_isInvariant;

	[Token(Token = "0x4001767")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD3")]
	[OptionalField(VersionAdded = 1)]
	internal bool validForParseAsNumber;

	[Token(Token = "0x4001768")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD4")]
	[OptionalField(VersionAdded = 1)]
	internal bool validForParseAsCurrency;

	[Token(Token = "0x4001769")]
	private const NumberStyles InvalidNumberStyles = ~(NumberStyles.Any | NumberStyles.AllowHexSpecifier);

	[Token(Token = "0x17000630")]
	public static NumberFormatInfo InvariantInfo
	{
		[Token(Token = "0x6002A10")]
		[Address(RVA = "0x1AAAC40", Offset = "0x1AA9240", VA = "0x181AAAC40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000631")]
	public int CurrencyDecimalDigits
	{
		[Token(Token = "0x6002A13")]
		[Address(RVA = "0x1AAAA90", Offset = "0x1AA9090", VA = "0x181AAAA90")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000632")]
	public string CurrencyDecimalSeparator
	{
		[Token(Token = "0x6002A14")]
		[Address(RVA = "0x5853D0", Offset = "0x5839D0", VA = "0x1805853D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000633")]
	public bool IsReadOnly
	{
		[Token(Token = "0x6002A15")]
		[Address(RVA = "0x1AAAD60", Offset = "0x1AA9360", VA = "0x181AAAD60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000634")]
	public int[] CurrencyGroupSizes
	{
		[Token(Token = "0x6002A16")]
		[Address(RVA = "0x1AAAAA0", Offset = "0x1AA90A0", VA = "0x181AAAAA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000635")]
	public int[] NumberGroupSizes
	{
		[Token(Token = "0x6002A17")]
		[Address(RVA = "0x1AAAD80", Offset = "0x1AA9380", VA = "0x181AAAD80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000636")]
	public int[] PercentGroupSizes
	{
		[Token(Token = "0x6002A18")]
		[Address(RVA = "0x1AAAE20", Offset = "0x1AA9420", VA = "0x181AAAE20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000637")]
	public string CurrencyGroupSeparator
	{
		[Token(Token = "0x6002A19")]
		[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000638")]
	public string CurrencySymbol
	{
		[Token(Token = "0x6002A1A")]
		[Address(RVA = "0x58A570", Offset = "0x588B70", VA = "0x18058A570")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000639")]
	public static NumberFormatInfo CurrentInfo
	{
		[Token(Token = "0x6002A1B")]
		[Address(RVA = "0x1AAAB40", Offset = "0x1AA9140", VA = "0x181AAAB40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700063A")]
	public string NaNSymbol
	{
		[Token(Token = "0x6002A1C")]
		[Address(RVA = "0x58A6F0", Offset = "0x588CF0", VA = "0x18058A6F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002A1D")]
		[Address(RVA = "0x1AAAEA0", Offset = "0x1AA94A0", VA = "0x181AAAEA0")]
		set
		{
		}
	}

	[Token(Token = "0x1700063B")]
	public int CurrencyNegativePattern
	{
		[Token(Token = "0x6002A1E")]
		[Address(RVA = "0x1AAAB20", Offset = "0x1AA9120", VA = "0x181AAAB20")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700063C")]
	public int NumberNegativePattern
	{
		[Token(Token = "0x6002A1F")]
		[Address(RVA = "0x1AAAE00", Offset = "0x1AA9400", VA = "0x181AAAE00")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700063D")]
	public int PercentPositivePattern
	{
		[Token(Token = "0x6002A20")]
		[Address(RVA = "0x16F8DE0", Offset = "0x16F73E0", VA = "0x1816F8DE0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700063E")]
	public int PercentNegativePattern
	{
		[Token(Token = "0x6002A21")]
		[Address(RVA = "0xB5B920", Offset = "0xB59F20", VA = "0x180B5B920")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700063F")]
	public string NegativeInfinitySymbol
	{
		[Token(Token = "0x6002A22")]
		[Address(RVA = "0xCDB5A0", Offset = "0xCD9BA0", VA = "0x180CDB5A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000640")]
	public string NegativeSign
	{
		[Token(Token = "0x6002A23")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000641")]
	public int NumberDecimalDigits
	{
		[Token(Token = "0x6002A24")]
		[Address(RVA = "0x1AAAD70", Offset = "0x1AA9370", VA = "0x181AAAD70")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002A25")]
		[Address(RVA = "0x1AAAF40", Offset = "0x1AA9540", VA = "0x181AAAF40")]
		set
		{
		}
	}

	[Token(Token = "0x17000642")]
	public string NumberDecimalSeparator
	{
		[Token(Token = "0x6002A26")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000643")]
	public string NumberGroupSeparator
	{
		[Token(Token = "0x6002A27")]
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000644")]
	public int CurrencyPositivePattern
	{
		[Token(Token = "0x6002A28")]
		[Address(RVA = "0x1AAAB30", Offset = "0x1AA9130", VA = "0x181AAAB30")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000645")]
	public string PositiveInfinitySymbol
	{
		[Token(Token = "0x6002A29")]
		[Address(RVA = "0xB48770", Offset = "0xB46D70", VA = "0x180B48770")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000646")]
	public string PositiveSign
	{
		[Token(Token = "0x6002A2A")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000647")]
	public int PercentDecimalDigits
	{
		[Token(Token = "0x6002A2B")]
		[Address(RVA = "0x1AAAE10", Offset = "0x1AA9410", VA = "0x181AAAE10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000648")]
	public string PercentDecimalSeparator
	{
		[Token(Token = "0x6002A2C")]
		[Address(RVA = "0x58A5D0", Offset = "0x588BD0", VA = "0x18058A5D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000649")]
	public string PercentGroupSeparator
	{
		[Token(Token = "0x6002A2D")]
		[Address(RVA = "0xB5B9C0", Offset = "0xB59FC0", VA = "0x180B5B9C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700064A")]
	public string PercentSymbol
	{
		[Token(Token = "0x6002A2E")]
		[Address(RVA = "0xA4D3D0", Offset = "0xA4B9D0", VA = "0x180A4D3D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700064B")]
	public string PerMilleSymbol
	{
		[Token(Token = "0x6002A2F")]
		[Address(RVA = "0x58A580", Offset = "0x588B80", VA = "0x18058A580")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002A0A")]
	[Address(RVA = "0x1AAA4B0", Offset = "0x1AA8AB0", VA = "0x181AAA4B0")]
	public NumberFormatInfo()
	{
	}

	[Token(Token = "0x6002A0B")]
	[Address(RVA = "0x1AAA100", Offset = "0x1AA8700", VA = "0x181AAA100")]
	[OnSerializing]
	private void OnSerializing(StreamingContext ctx)
	{
	}

	[Token(Token = "0x6002A0C")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	[OnDeserializing]
	private void OnDeserializing(StreamingContext ctx)
	{
	}

	[Token(Token = "0x6002A0D")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	[OnDeserialized]
	private void OnDeserialized(StreamingContext ctx)
	{
	}

	[Token(Token = "0x6002A0E")]
	[Address(RVA = "0x1AAA4C0", Offset = "0x1AA8AC0", VA = "0x181AAA4C0")]
	internal NumberFormatInfo(System.Globalization.CultureData cultureData)
	{
	}

	[Token(Token = "0x6002A0F")]
	[Address(RVA = "0x1AAA430", Offset = "0x1AA8A30", VA = "0x181AAA430")]
	private void VerifyWritable()
	{
	}

	[Token(Token = "0x6002A11")]
	[Address(RVA = "0x1AA9E80", Offset = "0x1AA8480", VA = "0x181AA9E80")]
	public static NumberFormatInfo GetInstance(IFormatProvider formatProvider)
	{
		return null;
	}

	[Token(Token = "0x6002A12")]
	[Address(RVA = "0x1AA9D90", Offset = "0x1AA8390", VA = "0x181AA9D90", Slot = "4")]
	public object Clone()
	{
		return null;
	}

	[Token(Token = "0x6002A30")]
	[Address(RVA = "0x1AA9E00", Offset = "0x1AA8400", VA = "0x181AA9E00", Slot = "5")]
	public object GetFormat(Type formatType)
	{
		return null;
	}

	[Token(Token = "0x6002A31")]
	[Address(RVA = "0x1AAA190", Offset = "0x1AA8790", VA = "0x181AAA190")]
	public static NumberFormatInfo ReadOnly(NumberFormatInfo nfi)
	{
		return null;
	}

	[Token(Token = "0x6002A32")]
	[Address(RVA = "0x1AAA340", Offset = "0x1AA8940", VA = "0x181AAA340")]
	internal static void ValidateParseStyleInteger(NumberStyles style)
	{
	}

	[Token(Token = "0x6002A33")]
	[Address(RVA = "0x1AAA260", Offset = "0x1AA8860", VA = "0x181AAA260")]
	internal static void ValidateParseStyleFloatingPoint(NumberStyles style)
	{
	}
}
