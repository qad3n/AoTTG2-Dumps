using System.ComponentModel;
using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x200023C")]
public class XmlSchemaXPath : XmlSchemaAnnotated
{
	[Token(Token = "0x4000BAE")]
	[FieldOffset(Offset = "0x50")]
	private string xpath;

	[Token(Token = "0x17000636")]
	[XmlAttribute("xpath")]
	[DefaultValue("")]
	public string XPath
	{
		[Token(Token = "0x6001693")]
		[Address(RVA = "0x43E79E0", Offset = "0x43E79E0", VA = "0x43E79E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001694")]
		[Address(RVA = "0x43E79F0", Offset = "0x43E79F0", VA = "0x43E79F0")]
		set
		{
		}
	}

	[Token(Token = "0x6001695")]
	[Address(RVA = "0x43E7A00", Offset = "0x43E7A00", VA = "0x43E7A00")]
	public XmlSchemaXPath()
	{
	}
}
