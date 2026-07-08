using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x200026D")]
internal class XmlBooleanConverter : XmlBaseConverter
{
	[Token(Token = "0x60018F5")]
	[Address(RVA = "0x44106F0", Offset = "0x44106F0", VA = "0x44106F0")]
	protected XmlBooleanConverter(XmlSchemaType schemaType)
	{
	}

	[Token(Token = "0x60018F6")]
	[Address(RVA = "0x4410750", Offset = "0x4410750", VA = "0x4410750")]
	public static XmlValueConverter Create(XmlSchemaType schemaType)
	{
		return null;
	}

	[Token(Token = "0x60018F7")]
	[Address(RVA = "0x44107E0", Offset = "0x44107E0", VA = "0x44107E0", Slot = "8")]
	public override bool ToBoolean(string value)
	{
		return default(bool);
	}

	[Token(Token = "0x60018F8")]
	[Address(RVA = "0x4410880", Offset = "0x4410880", VA = "0x4410880", Slot = "9")]
	public override bool ToBoolean(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60018F9")]
	[Address(RVA = "0x4410B20", Offset = "0x4410B20", VA = "0x4410B20", Slot = "43")]
	public override string ToString(bool value)
	{
		return null;
	}

	[Token(Token = "0x60018FA")]
	[Address(RVA = "0x4410B80", Offset = "0x4410B80", VA = "0x4410B80", Slot = "52")]
	public override string ToString(object value, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x60018FB")]
	[Address(RVA = "0x4410E00", Offset = "0x4410E00", VA = "0x4410E00", Slot = "53")]
	public override object ChangeType(bool value, Type destinationType)
	{
		return null;
	}

	[Token(Token = "0x60018FC")]
	[Address(RVA = "0x4411100", Offset = "0x4411100", VA = "0x4411100", Slot = "59")]
	public override object ChangeType(string value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x60018FD")]
	[Address(RVA = "0x4411410", Offset = "0x4411410", VA = "0x4411410", Slot = "61")]
	public override object ChangeType(object value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}
}
