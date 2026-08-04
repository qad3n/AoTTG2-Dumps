// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.AttributeMatchState
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x20001F0")]
internal enum AttributeMatchState
{
	[Token(Token = "0x400092C")]
	AttributeFound,
	[Token(Token = "0x400092D")]
	AnyIdAttributeFound,
	[Token(Token = "0x400092E")]
	UndeclaredElementAndAttribute,
	[Token(Token = "0x400092F")]
	UndeclaredAttribute,
	[Token(Token = "0x4000930")]
	AnyAttributeLax,
	[Token(Token = "0x4000931")]
	AnyAttributeSkip,
	[Token(Token = "0x4000932")]
	ProhibitedAnyAttribute,
	[Token(Token = "0x4000933")]
	ProhibitedAttribute,
	[Token(Token = "0x4000934")]
	AttributeNameMismatch,
	[Token(Token = "0x4000935")]
	ValidateAttributeInvalidCall
}
