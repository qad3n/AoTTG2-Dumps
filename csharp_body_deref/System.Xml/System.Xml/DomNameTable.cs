using System.Xml.Schema;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x2000095")]
internal class DomNameTable
{
	[Token(Token = "0x4000428")]
	[FieldOffset(Offset = "0x10")]
	private XmlName[] entries;

	[Token(Token = "0x4000429")]
	[FieldOffset(Offset = "0x18")]
	private int count;

	[Token(Token = "0x400042A")]
	[FieldOffset(Offset = "0x1C")]
	private int mask;

	[Token(Token = "0x400042B")]
	[FieldOffset(Offset = "0x20")]
	private XmlDocument ownerDocument;

	[Token(Token = "0x400042C")]
	[FieldOffset(Offset = "0x28")]
	private XmlNameTable nameTable;

	[Token(Token = "0x60007AE")]
	[Address(RVA = "0x4489EB0", Offset = "0x4489EB0", VA = "0x4489EB0")]
	public DomNameTable(XmlDocument document)
	{
	}

	[Token(Token = "0x60007AF")]
	[Address(RVA = "0x4489F50", Offset = "0x4489F50", VA = "0x4489F50")]
	public XmlName GetName(string prefix, string localName, string ns, IXmlSchemaInfo schemaInfo)
	{
		return null;
	}

	[Token(Token = "0x60007B0")]
	[Address(RVA = "0x448A0A0", Offset = "0x448A0A0", VA = "0x448A0A0")]
	public XmlName AddName(string prefix, string localName, string ns, IXmlSchemaInfo schemaInfo)
	{
		return null;
	}

	[Token(Token = "0x60007B1")]
	[Address(RVA = "0x448A330", Offset = "0x448A330", VA = "0x448A330")]
	private void Grow()
	{
	}
}
