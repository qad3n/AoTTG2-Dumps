using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000220")]
public enum XmlSchemaContentProcessing
{
	[Token(Token = "0x4000B53")]
	[XmlIgnore]
	None,
	[Token(Token = "0x4000B54")]
	[XmlEnum("skip")]
	Skip,
	[Token(Token = "0x4000B55")]
	[XmlEnum("lax")]
	Lax,
	[Token(Token = "0x4000B56")]
	[XmlEnum("strict")]
	Strict
}
