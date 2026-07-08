using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x200023F")]
public class XmlSchemaKeyref : XmlSchemaIdentityConstraint
{
	[Token(Token = "0x4000BAF")]
	[FieldOffset(Offset = "0x78")]
	private XmlQualifiedName refer;

	[Token(Token = "0x17000637")]
	[XmlAttribute("refer")]
	public XmlQualifiedName Refer
	{
		[Token(Token = "0x6001698")]
		[Address(RVA = "0x43E7A30", Offset = "0x43E7A30", VA = "0x43E7A30")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001699")]
		[Address(RVA = "0x43E7A40", Offset = "0x43E7A40", VA = "0x43E7A40")]
		set
		{
		}
	}

	[Token(Token = "0x600169A")]
	[Address(RVA = "0x43E7AD0", Offset = "0x43E7AD0", VA = "0x43E7AD0")]
	public XmlSchemaKeyref()
	{
	}
}
