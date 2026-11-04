// ==================== AoTTG2 cross-reference ====================
// Type: System.Globalization.DateTimeStyles
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Globalization;

[Token(Token = "0x2000575")]
[Flags]
public enum DateTimeStyles
{
	[Token(Token = "0x4001661")]
	None = 0,
	[Token(Token = "0x4001662")]
	AllowLeadingWhite = 1,
	[Token(Token = "0x4001663")]
	AllowTrailingWhite = 2,
	[Token(Token = "0x4001664")]
	AllowInnerWhite = 4,
	[Token(Token = "0x4001665")]
	AllowWhiteSpaces = AllowLeadingWhite | AllowTrailingWhite | AllowInnerWhite,
	[Token(Token = "0x4001666")]
	NoCurrentDateDefault = 8,
	[Token(Token = "0x4001667")]
	AdjustToUniversal = 0x10,
	[Token(Token = "0x4001668")]
	AssumeLocal = 0x20,
	[Token(Token = "0x4001669")]
	AssumeUniversal = 0x40,
	[Token(Token = "0x400166A")]
	RoundtripKind = 0x80
}
