// ==================== AoTTG2 cross-reference ====================
// Type: System.Globalization.HebrewNumberParsingState
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Globalization;

[Token(Token = "0x2000551")]
internal enum HebrewNumberParsingState
{
	[Token(Token = "0x40015D1")]
	InvalidHebrewNumber,
	[Token(Token = "0x40015D2")]
	NotHebrewDigit,
	[Token(Token = "0x40015D3")]
	FoundEndOfHebrewNumber,
	[Token(Token = "0x40015D4")]
	ContinueParsing
}
