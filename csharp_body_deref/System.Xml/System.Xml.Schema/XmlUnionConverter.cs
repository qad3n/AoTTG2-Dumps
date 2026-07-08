using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000274")]
internal class XmlUnionConverter : XmlBaseConverter
{
	[Token(Token = "0x4000CCA")]
	[FieldOffset(Offset = "0x28")]
	private XmlValueConverter[] converters;

	[Token(Token = "0x4000CCB")]
	[FieldOffset(Offset = "0x30")]
	private bool hasAtomicMember;

	[Token(Token = "0x4000CCC")]
	[FieldOffset(Offset = "0x31")]
	private bool hasListMember;

	[Token(Token = "0x6001956")]
	[Address(RVA = "0x441F510", Offset = "0x441F510", VA = "0x441F510")]
	protected XmlUnionConverter(XmlSchemaType schemaType)
	{
	}

	[Token(Token = "0x6001957")]
	[Address(RVA = "0x441F7A0", Offset = "0x441F7A0", VA = "0x441F7A0")]
	public static XmlValueConverter Create(XmlSchemaType schemaType)
	{
		return null;
	}

	[Token(Token = "0x6001958")]
	[Address(RVA = "0x441F7F0", Offset = "0x441F7F0", VA = "0x441F7F0", Slot = "61")]
	public override object ChangeType(object value, Type destinationType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}
}
