using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x200026C")]
internal class XmlDateTimeConverter : XmlBaseConverter
{
	[Token(Token = "0x60018E7")]
	[Address(RVA = "0x440E6C0", Offset = "0x440E6C0", VA = "0x440E6C0")]
	protected XmlDateTimeConverter(XmlSchemaType schemaType)
	{
	}

	[Token(Token = "0x60018E8")]
	[Address(RVA = "0x440E720", Offset = "0x440E720", VA = "0x440E720")]
	public static XmlValueConverter Create(XmlSchemaType schemaType)
	{
		return null;
	}

	[Token(Token = "0x60018E9")]
	[Address(RVA = "0x440E7B0", Offset = "0x440E7B0", VA = "0x440E7B0", Slot = "37")]
	public override DateTime ToDateTime(DateTimeOffset value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60018EA")]
	[Address(RVA = "0x440E800", Offset = "0x440E800", VA = "0x440E800", Slot = "38")]
	public override DateTime ToDateTime(string value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60018EB")]
	[Address(RVA = "0x440E9E0", Offset = "0x440E9E0", VA = "0x440E9E0", Slot = "39")]
	public override DateTime ToDateTime(object value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60018EC")]
	[Address(RVA = "0x440ED30", Offset = "0x440ED30", VA = "0x440ED30", Slot = "40")]
	public override DateTimeOffset ToDateTimeOffset(DateTime value)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x60018ED")]
	[Address(RVA = "0x440ED60", Offset = "0x440ED60", VA = "0x440ED60", Slot = "41")]
	public override DateTimeOffset ToDateTimeOffset(string value)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x60018EE")]
	[Address(RVA = "0x440EF40", Offset = "0x440EF40", VA = "0x440EF40", Slot = "42")]
	public override DateTimeOffset ToDateTimeOffset(object value)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x60018EF")]
	[Address(RVA = "0x440F2A0", Offset = "0x440F2A0", VA = "0x440F2A0", Slot = "49")]
	public override string ToString(DateTime value)
	{
		return null;
	}

	[Token(Token = "0x60018F0")]
	[Address(RVA = "0x440F430", Offset = "0x440F430", VA = "0x440F430", Slot = "50")]
	public override string ToString(DateTimeOffset value)
	{
		return null;
	}

	[Token(Token = "0x60018F1")]
	[Address(RVA = "0x440F5C0", Offset = "0x440F5C0", VA = "0x440F5C0", Slot = "52")]
	public override string ToString(object value, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x60018F2")]
	[Address(RVA = "0x440F8E0", Offset = "0x440F8E0", VA = "0x440F8E0", Slot = "58")]
	public override object ChangeType(DateTime value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x60018F3")]
	[Address(RVA = "0x440FC50", Offset = "0x440FC50", VA = "0x440FC50", Slot = "59")]
	public override object ChangeType(string value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x60018F4")]
	[Address(RVA = "0x440FFD0", Offset = "0x440FFD0", VA = "0x440FFD0", Slot = "61")]
	public override object ChangeType(object value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}
}
