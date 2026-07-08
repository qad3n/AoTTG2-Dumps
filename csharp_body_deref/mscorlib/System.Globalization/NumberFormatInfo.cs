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
		[Address(RVA = "0x4F785E0", Offset = "0x4F785E0", VA = "0x4F785E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006A4")]
	public int CurrencyDecimalDigits
	{
		[Token(Token = "0x6002D06")]
		[Address(RVA = "0x4F78A30", Offset = "0x4F78A30", VA = "0x4F78A30")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006A5")]
	public string CurrencyDecimalSeparator
	{
		[Token(Token = "0x6002D07")]
		[Address(RVA = "0x4F78A40", Offset = "0x4F78A40", VA = "0x4F78A40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006A6")]
	public bool IsReadOnly
	{
		[Token(Token = "0x6002D08")]
		[Address(RVA = "0x4F78A50", Offset = "0x4F78A50", VA = "0x4F78A50")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170006A7")]
	public int[] CurrencyGroupSizes
	{
		[Token(Token = "0x6002D09")]
		[Address(RVA = "0x4F78A60", Offset = "0x4F78A60", VA = "0x4F78A60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006A8")]
	public int[] NumberGroupSizes
	{
		[Token(Token = "0x6002D0A")]
		[Address(RVA = "0x4F78AE0", Offset = "0x4F78AE0", VA = "0x4F78AE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006A9")]
	public int[] PercentGroupSizes
	{
		[Token(Token = "0x6002D0B")]
		[Address(RVA = "0x4F78B60", Offset = "0x4F78B60", VA = "0x4F78B60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006AA")]
	public string CurrencyGroupSeparator
	{
		[Token(Token = "0x6002D0C")]
		[Address(RVA = "0x4F78BE0", Offset = "0x4F78BE0", VA = "0x4F78BE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006AB")]
	public string CurrencySymbol
	{
		[Token(Token = "0x6002D0D")]
		[Address(RVA = "0x4F78BF0", Offset = "0x4F78BF0", VA = "0x4F78BF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006AC")]
	public static NumberFormatInfo CurrentInfo
	{
		[Token(Token = "0x6002D0E")]
		[Address(RVA = "0x4F788F0", Offset = "0x4F788F0", VA = "0x4F788F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006AD")]
	public string NaNSymbol
	{
		[Token(Token = "0x6002D0F")]
		[Address(RVA = "0x4F78C00", Offset = "0x4F78C00", VA = "0x4F78C00")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002D10")]
		[Address(RVA = "0x4F78C10", Offset = "0x4F78C10", VA = "0x4F78C10")]
		set
		{
		}
	}

	[Token(Token = "0x170006AE")]
	public int CurrencyNegativePattern
	{
		[Token(Token = "0x6002D11")]
		[Address(RVA = "0x4F78CF0", Offset = "0x4F78CF0", VA = "0x4F78CF0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006AF")]
	public int NumberNegativePattern
	{
		[Token(Token = "0x6002D12")]
		[Address(RVA = "0x4F78D00", Offset = "0x4F78D00", VA = "0x4F78D00")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006B0")]
	public int PercentPositivePattern
	{
		[Token(Token = "0x6002D13")]
		[Address(RVA = "0x4F78D10", Offset = "0x4F78D10", VA = "0x4F78D10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006B1")]
	public int PercentNegativePattern
	{
		[Token(Token = "0x6002D14")]
		[Address(RVA = "0x4F78D20", Offset = "0x4F78D20", VA = "0x4F78D20")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006B2")]
	public string NegativeInfinitySymbol
	{
		[Token(Token = "0x6002D15")]
		[Address(RVA = "0x4F78D30", Offset = "0x4F78D30", VA = "0x4F78D30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006B3")]
	public string NegativeSign
	{
		[Token(Token = "0x6002D16")]
		[Address(RVA = "0x4F78D40", Offset = "0x4F78D40", VA = "0x4F78D40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006B4")]
	public int NumberDecimalDigits
	{
		[Token(Token = "0x6002D17")]
		[Address(RVA = "0x4F78D50", Offset = "0x4F78D50", VA = "0x4F78D50")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002D18")]
		[Address(RVA = "0x4F78D60", Offset = "0x4F78D60", VA = "0x4F78D60")]
		set
		{
		}
	}

	[Token(Token = "0x170006B5")]
	public string NumberDecimalSeparator
	{
		[Token(Token = "0x6002D19")]
		[Address(RVA = "0x4F78EB0", Offset = "0x4F78EB0", VA = "0x4F78EB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006B6")]
	public string NumberGroupSeparator
	{
		[Token(Token = "0x6002D1A")]
		[Address(RVA = "0x4F78EC0", Offset = "0x4F78EC0", VA = "0x4F78EC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006B7")]
	public int CurrencyPositivePattern
	{
		[Token(Token = "0x6002D1B")]
		[Address(RVA = "0x4F78ED0", Offset = "0x4F78ED0", VA = "0x4F78ED0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006B8")]
	public string PositiveInfinitySymbol
	{
		[Token(Token = "0x6002D1C")]
		[Address(RVA = "0x4F78EE0", Offset = "0x4F78EE0", VA = "0x4F78EE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006B9")]
	public string PositiveSign
	{
		[Token(Token = "0x6002D1D")]
		[Address(RVA = "0x4F78EF0", Offset = "0x4F78EF0", VA = "0x4F78EF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006BA")]
	public int PercentDecimalDigits
	{
		[Token(Token = "0x6002D1E")]
		[Address(RVA = "0x4F78F00", Offset = "0x4F78F00", VA = "0x4F78F00")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006BB")]
	public string PercentDecimalSeparator
	{
		[Token(Token = "0x6002D1F")]
		[Address(RVA = "0x4F78F10", Offset = "0x4F78F10", VA = "0x4F78F10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006BC")]
	public string PercentGroupSeparator
	{
		[Token(Token = "0x6002D20")]
		[Address(RVA = "0x4F78F20", Offset = "0x4F78F20", VA = "0x4F78F20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006BD")]
	public string PercentSymbol
	{
		[Token(Token = "0x6002D21")]
		[Address(RVA = "0x4F78F30", Offset = "0x4F78F30", VA = "0x4F78F30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006BE")]
	public string PerMilleSymbol
	{
		[Token(Token = "0x6002D22")]
		[Address(RVA = "0x4F78F40", Offset = "0x4F78F40", VA = "0x4F78F40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002CFD")]
	[Address(RVA = "0x4F779E0", Offset = "0x4F779E0", VA = "0x4F779E0")]
	public NumberFormatInfo()
	{
	}

	[Token(Token = "0x6002CFE")]
	[Address(RVA = "0x4F77F90", Offset = "0x4F77F90", VA = "0x4F77F90")]
	[OnSerializing]
	private void OnSerializing(StreamingContext ctx)
	{
	}

	[Token(Token = "0x6002CFF")]
	[Address(RVA = "0x4F78010", Offset = "0x4F78010", VA = "0x4F78010")]
	[OnDeserializing]
	private void OnDeserializing(StreamingContext ctx)
	{
	}

	[Token(Token = "0x6002D00")]
	[Address(RVA = "0x4F78020", Offset = "0x4F78020", VA = "0x4F78020")]
	[OnDeserialized]
	private void OnDeserialized(StreamingContext ctx)
	{
	}

	[Token(Token = "0x6002D01")]
	[Address(RVA = "0x4F779F0", Offset = "0x4F779F0", VA = "0x4F779F0")]
	internal NumberFormatInfo(System.Globalization.CultureData cultureData)
	{
	}

	[Token(Token = "0x6002D02")]
	[Address(RVA = "0x4F78570", Offset = "0x4F78570", VA = "0x4F78570")]
	private void VerifyWritable()
	{
	}

	[Token(Token = "0x6002D04")]
	[Address(RVA = "0x4F78750", Offset = "0x4F78750", VA = "0x4F78750")]
	public static NumberFormatInfo GetInstance(IFormatProvider formatProvider)
	{
		return null;
	}

	[Token(Token = "0x6002D05")]
	[Address(RVA = "0x4F789D0", Offset = "0x4F789D0", VA = "0x4F789D0", Slot = "4")]
	public object Clone()
	{
		return null;
	}

	[Token(Token = "0x6002D23")]
	[Address(RVA = "0x4F78F50", Offset = "0x4F78F50", VA = "0x4F78F50", Slot = "5")]
	public object GetFormat(Type formatType)
	{
		return null;
	}

	[Token(Token = "0x6002D24")]
	[Address(RVA = "0x4F78690", Offset = "0x4F78690", VA = "0x4F78690")]
	public static NumberFormatInfo ReadOnly(NumberFormatInfo nfi)
	{
		return null;
	}

	[Token(Token = "0x6002D25")]
	[Address(RVA = "0x4F78FD0", Offset = "0x4F78FD0", VA = "0x4F78FD0")]
	internal static void ValidateParseStyleInteger(NumberStyles style)
	{
	}

	[Token(Token = "0x6002D26")]
	[Address(RVA = "0x4F790A0", Offset = "0x4F790A0", VA = "0x4F790A0")]
	internal static void ValidateParseStyleFloatingPoint(NumberStyles style)
	{
	}
}
