using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000253")]
public class XmlSchemaSimpleContent : XmlSchemaContentModel
{
	[Token(Token = "0x4000BF8")]
	[FieldOffset(Offset = "0x50")]
	private XmlSchemaContent content;

	[Token(Token = "0x17000679")]
	[XmlElement("extension", typeof(XmlSchemaSimpleContentExtension))]
	[XmlElement("restriction", typeof(XmlSchemaSimpleContentRestriction))]
	public override XmlSchemaContent Content
	{
		[Token(Token = "0x6001752")]
		[Address(RVA = "0x43F4F60", Offset = "0x43F4F60", VA = "0x43F4F60", Slot = "14")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001753")]
		[Address(RVA = "0x43F4F70", Offset = "0x43F4F70", VA = "0x43F4F70", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x6001754")]
	[Address(RVA = "0x43F4F80", Offset = "0x43F4F80", VA = "0x43F4F80")]
	public XmlSchemaSimpleContent()
	{
	}
}
