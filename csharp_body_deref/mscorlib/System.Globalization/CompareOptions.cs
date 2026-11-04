// ==================== AoTTG2 cross-reference ====================
// Type: System.Globalization.CompareOptions
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Globalization;

[Token(Token = "0x200056A")]
[Flags]
public enum CompareOptions
{
	[Token(Token = "0x40015BF")]
	None = 0,
	[Token(Token = "0x40015C0")]
	IgnoreCase = 1,
	[Token(Token = "0x40015C1")]
	IgnoreNonSpace = 2,
	[Token(Token = "0x40015C2")]
	IgnoreSymbols = 4,
	[Token(Token = "0x40015C3")]
	IgnoreKanaType = 8,
	[Token(Token = "0x40015C4")]
	IgnoreWidth = 0x10,
	[Token(Token = "0x40015C5")]
	OrdinalIgnoreCase = 0x10000000,
	[Token(Token = "0x40015C6")]
	StringSort = 0x20000000,
	[Token(Token = "0x40015C7")]
	Ordinal = 0x40000000
}
