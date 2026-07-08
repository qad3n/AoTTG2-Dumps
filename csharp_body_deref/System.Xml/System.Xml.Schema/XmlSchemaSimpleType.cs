using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000256")]
public class XmlSchemaSimpleType : XmlSchemaType
{
	[Token(Token = "0x4000C01")]
	[FieldOffset(Offset = "0x98")]
	private XmlSchemaSimpleTypeContent content;

	[Token(Token = "0x17000682")]
	[XmlElement("restriction", typeof(XmlSchemaSimpleTypeRestriction))]
	[XmlElement("list", typeof(XmlSchemaSimpleTypeList))]
	[XmlElement("union", typeof(XmlSchemaSimpleTypeUnion))]
	public XmlSchemaSimpleTypeContent Content
	{
		[Token(Token = "0x6001767")]
		[Address(RVA = "0x43F53F0", Offset = "0x43F53F0", VA = "0x43F53F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001768")]
		[Address(RVA = "0x43F5400", Offset = "0x43F5400", VA = "0x43F5400")]
		set
		{
		}
	}

	[Token(Token = "0x6001766")]
	[Address(RVA = "0x43F52F0", Offset = "0x43F52F0", VA = "0x43F52F0")]
	public XmlSchemaSimpleType()
	{
	}

	[Token(Token = "0x6001769")]
	[Address(RVA = "0x43F5420", Offset = "0x43F5420", VA = "0x43F5420", Slot = "13")]
	internal override XmlSchemaObject Clone()
	{
		return null;
	}
}
