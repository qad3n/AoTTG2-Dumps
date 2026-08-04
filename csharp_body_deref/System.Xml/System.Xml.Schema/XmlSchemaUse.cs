// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.XmlSchemaUse
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
