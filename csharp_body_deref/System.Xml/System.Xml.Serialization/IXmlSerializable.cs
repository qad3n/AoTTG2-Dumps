using System.Xml.Schema;
using Il2CppDummyDll;

namespace System.Xml.Serialization;

[Token(Token = "0x200010A")]
public interface IXmlSerializable
{
	[Token(Token = "0x6000CC2")]
	XmlSchema GetSchema();

	[Token(Token = "0x6000CC3")]
	void ReadXml(XmlReader reader);

	[Token(Token = "0x6000CC4")]
	void WriteXml(XmlWriter writer);
}
