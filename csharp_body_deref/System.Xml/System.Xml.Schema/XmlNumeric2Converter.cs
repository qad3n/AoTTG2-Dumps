using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x200026B")]
internal class XmlNumeric2Converter : XmlBaseConverter
{
	[Token(Token = "0x60018DA")]
	[Address(RVA = "0x440CC40", Offset = "0x440CC40", VA = "0x440CC40")]
	protected XmlNumeric2Converter(XmlSchemaType schemaType)
	{
	}

	[Token(Token = "0x60018DB")]
	[Address(RVA = "0x440CCA0", Offset = "0x440CCA0", VA = "0x440CCA0")]
	public static XmlValueConverter Create(XmlSchemaType schemaType)
	{
		return null;
	}

	[Token(Token = "0x60018DC")]
	[Address(RVA = "0x440CD30", Offset = "0x440CD30", VA = "0x440CD30", Slot = "28")]
	public override double ToDouble(string value)
	{
		return default(double);
	}

	[Token(Token = "0x60018DD")]
	[Address(RVA = "0x440CDF0", Offset = "0x440CDF0", VA = "0x440CDF0", Slot = "29")]
	public override double ToDouble(object value)
	{
		return default(double);
	}

	[Token(Token = "0x60018DE")]
	[Address(RVA = "0x440D100", Offset = "0x440D100", VA = "0x440D100", Slot = "30")]
	public override float ToSingle(double value)
	{
		return default(float);
	}

	[Token(Token = "0x60018DF")]
	[Address(RVA = "0x440D110", Offset = "0x440D110", VA = "0x440D110", Slot = "31")]
	public override float ToSingle(string value)
	{
		return default(float);
	}

	[Token(Token = "0x60018E0")]
	[Address(RVA = "0x440D1D0", Offset = "0x440D1D0", VA = "0x440D1D0", Slot = "32")]
	public override float ToSingle(object value)
	{
		return default(float);
	}

	[Token(Token = "0x60018E1")]
	[Address(RVA = "0x440D500", Offset = "0x440D500", VA = "0x440D500", Slot = "48")]
	public override string ToString(double value)
	{
		return null;
	}

	[Token(Token = "0x60018E2")]
	[Address(RVA = "0x440D5D0", Offset = "0x440D5D0", VA = "0x440D5D0", Slot = "47")]
	public override string ToString(float value)
	{
		return null;
	}

	[Token(Token = "0x60018E3")]
	[Address(RVA = "0x440D650", Offset = "0x440D650", VA = "0x440D650", Slot = "52")]
	public override string ToString(object value, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x60018E4")]
	[Address(RVA = "0x440D940", Offset = "0x440D940", VA = "0x440D940", Slot = "57")]
	public override object ChangeType(double value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x60018E5")]
	[Address(RVA = "0x440DCA0", Offset = "0x440DCA0", VA = "0x440DCA0", Slot = "59")]
	public override object ChangeType(string value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x60018E6")]
	[Address(RVA = "0x440E000", Offset = "0x440E000", VA = "0x440E000", Slot = "61")]
	public override object ChangeType(object value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}
}
