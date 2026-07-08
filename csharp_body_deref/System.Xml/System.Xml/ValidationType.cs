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
