// ==================== AoTTG2 cross-reference ====================
// Type: System.UnescapeMode
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x2000088")]
[Flags]
internal enum UnescapeMode
{
	[Token(Token = "0x400020A")]
	CopyOnly = 0,
	[Token(Token = "0x400020B")]
	Escape = 1,
	[Token(Token = "0x400020C")]
	Unescape = 2,
	[Token(Token = "0x400020D")]
	EscapeUnescape = Escape | Unescape,
	[Token(Token = "0x400020E")]
	V1ToStringFlag = 4,
	[Token(Token = "0x400020F")]
	UnescapeAll = 8,
	[Token(Token = "0x4000210")]
	UnescapeAllOrThrow = 0x18
}
