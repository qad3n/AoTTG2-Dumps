// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Serialization.IXmlSerializable
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
