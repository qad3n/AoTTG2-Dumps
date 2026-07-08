using System.Xml.Schema;
using Il2CppDummyDll;

namespace System.Xml.Serialization;

[Token(Token = "0x2000153")]
internal class XmlSerializableMapping : XmlTypeMapping
{
	[Token(Token = "0x40006F7")]
	[FieldOffset(Offset = "0x78")]
	private XmlSchema _schema;

	[Token(Token = "0x40006F8")]
	[FieldOffset(Offset = "0x80")]
	private XmlSchemaComplexType _schemaType;

	[Token(Token = "0x40006F9")]
	[FieldOffset(Offset = "0x88")]
	private XmlQualifiedName _schemaTypeName;

	[Token(Token = "0x6000EE8")]
	[Address(RVA = "0x44FC4C0", Offset = "0x44FC4C0", VA = "0x44FC4C0")]
	internal XmlSerializableMapping(XmlRootAttribute root, string elementName, string ns, TypeData typeData, string xmlType, string xmlTypeNamespace)
	{
	}
}
