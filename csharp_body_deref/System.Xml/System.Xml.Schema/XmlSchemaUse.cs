using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x200025E")]
public enum XmlSchemaUse
{
	[Token(Token = "0x4000C19")]
	[XmlIgnore]
	None,
	[Token(Token = "0x4000C1A")]
	[XmlEnum("optional")]
	Optional,
	[Token(Token = "0x4000C1B")]
	[XmlEnum("prohibited")]
	Prohibited,
	[Token(Token = "0x4000C1C")]
	[XmlEnum("required")]
	Required
}
