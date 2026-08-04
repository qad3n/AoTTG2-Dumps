// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.WriteState
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x2000080")]
public enum WriteState
{
	[Token(Token = "0x40003A2")]
	Start,
	[Token(Token = "0x40003A3")]
	Prolog,
	[Token(Token = "0x40003A4")]
	Element,
	[Token(Token = "0x40003A5")]
	Attribute,
	[Token(Token = "0x40003A6")]
	Content,
	[Token(Token = "0x40003A7")]
	Closed,
	[Token(Token = "0x40003A8")]
	Error
}
