// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.ValidationType
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x2000041")]
public enum ValidationType
{
	[Token(Token = "0x4000144")]
	None,
	[Token(Token = "0x4000145")]
	[Obsolete("Validation type should be specified as DTD or Schema.")]
	Auto,
	[Token(Token = "0x4000146")]
	DTD,
	[Token(Token = "0x4000147")]
	[Obsolete("XDR Validation through XmlValidatingReader is obsoleted")]
	XDR,
	[Token(Token = "0x4000148")]
	Schema
}
