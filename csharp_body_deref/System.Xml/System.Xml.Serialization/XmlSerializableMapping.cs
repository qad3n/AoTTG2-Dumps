// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Serialization.XmlSerializableMapping
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x4839C20", Offset = "0x4839C20", VA = "0x4839C20")]
	internal XmlSerializableMapping(XmlRootAttribute root, string elementName, string ns, TypeData typeData, string xmlType, string xmlTypeNamespace)
	{
	}
}
