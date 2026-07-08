using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x200026E")]
internal class XmlMiscConverter : XmlBaseConverter
{
	[Token(Token = "0x60018FE")]
	[Address(RVA = "0x4411990", Offset = "0x4411990", VA = "0x4411990")]
	protected XmlMiscConverter(XmlSchemaType schemaType)
	{
	}

	[Token(Token = "0x60018FF")]
	[Address(RVA = "0x44119F0", Offset = "0x44119F0", VA = "0x44119F0")]
	public static XmlValueConverter Create(XmlSchemaType schemaType)
	{
		return null;
	}

	[Token(Token = "0x6001900")]
	[Address(RVA = "0x4411A80", Offset = "0x4411A80", VA = "0x4411A80", Slot = "52")]
	public override string ToString(object value, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x6001901")]
	[Address(RVA = "0x44120C0", Offset = "0x44120C0", VA = "0x44120C0", Slot = "59")]
	public override object ChangeType(string value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x6001902")]
	[Address(RVA = "0x44126E0", Offset = "0x44126E0", VA = "0x44126E0", Slot = "61")]
	public override object ChangeType(object value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x6001903")]
	[Address(RVA = "0x4411FA0", Offset = "0x4411FA0", VA = "0x4411FA0")]
	private object ChangeTypeWildcardDestination(object value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x6001904")]
	[Address(RVA = "0x4412590", Offset = "0x4412590", VA = "0x4412590")]
	private object ChangeTypeWildcardSource(object value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}
}
