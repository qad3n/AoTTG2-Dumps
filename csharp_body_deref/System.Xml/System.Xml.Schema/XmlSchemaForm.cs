using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000237")]
public enum XmlSchemaForm
{
	[Token(Token = "0x4000B9D")]
	[XmlIgnore]
	None,
	[Token(Token = "0x4000B9E")]
	[XmlEnum("qualified")]
	Qualified,
	[Token(Token = "0x4000B9F")]
	[XmlEnum("unqualified")]
	Unqualified
}
