using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000214")]
public class XmlSchemaAttributeGroupRef : XmlSchemaAnnotated
{
	[Token(Token = "0x4000B2A")]
	[FieldOffset(Offset = "0x50")]
	private XmlQualifiedName refName;

	[Token(Token = "0x170005C0")]
	[XmlAttribute("ref")]
	public XmlQualifiedName RefName
	{
		[Token(Token = "0x6001573")]
		[Address(RVA = "0x43E2080", Offset = "0x43E2080", VA = "0x43E2080")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001574")]
		[Address(RVA = "0x43E2090", Offset = "0x43E2090", VA = "0x43E2090")]
		set
		{
		}
	}

	[Token(Token = "0x6001575")]
	[Address(RVA = "0x43E2120", Offset = "0x43E2120", VA = "0x43E2120")]
	public XmlSchemaAttributeGroupRef()
	{
	}
}
