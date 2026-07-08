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
