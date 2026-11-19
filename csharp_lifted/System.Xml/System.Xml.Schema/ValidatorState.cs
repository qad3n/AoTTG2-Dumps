// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.ValidatorState
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000262")]
internal enum ValidatorState
{
	[Token(Token = "0x4000C25")]
	None,
	[Token(Token = "0x4000C26")]
	Start,
	[Token(Token = "0x4000C27")]
	TopLevelAttribute,
	[Token(Token = "0x4000C28")]
	TopLevelTextOrWS,
	[Token(Token = "0x4000C29")]
	Element,
	[Token(Token = "0x4000C2A")]
	Attribute,
	[Token(Token = "0x4000C2B")]
	EndOfAttributes,
	[Token(Token = "0x4000C2C")]
	Text,
	[Token(Token = "0x4000C2D")]
	Whitespace,
	[Token(Token = "0x4000C2E")]
	EndElement,
	[Token(Token = "0x4000C2F")]
	SkipToEndElement,
	[Token(Token = "0x4000C30")]
	Finish
}
