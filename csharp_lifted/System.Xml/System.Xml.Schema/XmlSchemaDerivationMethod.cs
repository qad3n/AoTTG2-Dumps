// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.XmlSchemaDerivationMethod
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000223")]
[Flags]
public enum XmlSchemaDerivationMethod
{
	[Token(Token = "0x4000B5D")]
	[XmlEnum("")]
	Empty = 0,
	[Token(Token = "0x4000B5E")]
	[XmlEnum("substitution")]
	Substitution = 1,
	[Token(Token = "0x4000B5F")]
	[XmlEnum("extension")]
	Extension = 2,
	[Token(Token = "0x4000B60")]
	[XmlEnum("restriction")]
	Restriction = 4,
	[Token(Token = "0x4000B61")]
	[XmlEnum("list")]
	List = 8,
	[Token(Token = "0x4000B62")]
	[XmlEnum("union")]
	Union = 0x10,
	[Token(Token = "0x4000B63")]
	[XmlEnum("#all")]
	All = 0xFF,
	[Token(Token = "0x4000B64")]
	[XmlIgnore]
	None = 0x100
}
