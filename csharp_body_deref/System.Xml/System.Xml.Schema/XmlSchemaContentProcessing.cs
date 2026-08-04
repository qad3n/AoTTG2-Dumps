// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.XmlSchemaContentProcessing
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
