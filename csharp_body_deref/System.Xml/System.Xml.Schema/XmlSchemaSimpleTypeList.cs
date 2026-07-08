using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000258")]
public class XmlSchemaSimpleTypeList : XmlSchemaSimpleTypeContent
{
	[Token(Token = "0x4000C02")]
	[FieldOffset(Offset = "0x50")]
	private XmlQualifiedName itemTypeName;

	[Token(Token = "0x4000C03")]
	[FieldOffset(Offset = "0x58")]
	private XmlSchemaSimpleType itemType;

	[Token(Token = "0x4000C04")]
	[FieldOffset(Offset = "0x60")]
	private XmlSchemaSimpleType baseItemType;

	[Token(Token = "0x17000683")]
	[XmlAttribute("itemType")]
	public XmlQualifiedName ItemTypeName
	{
		[Token(Token = "0x600176B")]
		[Address(RVA = "0x43F5530", Offset = "0x43F5530", VA = "0x43F5530")]
		get
		{
			return null;
		}
		[Token(Token = "0x600176C")]
		[Address(RVA = "0x43F5540", Offset = "0x43F5540", VA = "0x43F5540")]
		set
		{
		}
	}

	[Token(Token = "0x17000684")]
	[XmlElement("simpleType", typeof(XmlSchemaSimpleType))]
	public XmlSchemaSimpleType ItemType
	{
		[Token(Token = "0x600176D")]
		[Address(RVA = "0x43F55D0", Offset = "0x43F55D0", VA = "0x43F55D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600176E")]
		[Address(RVA = "0x43F55E0", Offset = "0x43F55E0", VA = "0x43F55E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000685")]
	[XmlIgnore]
	public XmlSchemaSimpleType BaseItemType
	{
		[Token(Token = "0x600176F")]
		[Address(RVA = "0x43F55F0", Offset = "0x43F55F0", VA = "0x43F55F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001770")]
		[Address(RVA = "0x43F5600", Offset = "0x43F5600", VA = "0x43F5600")]
		set
		{
		}
	}

	[Token(Token = "0x6001771")]
	[Address(RVA = "0x43F5610", Offset = "0x43F5610", VA = "0x43F5610", Slot = "13")]
	internal override XmlSchemaObject Clone()
	{
		return null;
	}

	[Token(Token = "0x6001772")]
	[Address(RVA = "0x43F56B0", Offset = "0x43F56B0", VA = "0x43F56B0")]
	public XmlSchemaSimpleTypeList()
	{
	}
}
