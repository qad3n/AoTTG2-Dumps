using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x200021F")]
public abstract class XmlSchemaContentModel : XmlSchemaAnnotated
{
	[Token(Token = "0x170005EE")]
	[XmlIgnore]
	public abstract XmlSchemaContent Content
	{
		[Token(Token = "0x60015DC")]
		get;
		[Token(Token = "0x60015DD")]
		set;
	}

	[Token(Token = "0x60015DE")]
	[Address(RVA = "0x43E3030", Offset = "0x43E3030", VA = "0x43E3030")]
	protected XmlSchemaContentModel()
	{
	}
}
