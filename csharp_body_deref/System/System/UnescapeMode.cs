// ==================== AoTTG2 cross-reference ====================
// Type: System.UnescapeMode
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20000C7")]
[Flags]
internal enum UnescapeMode
{
	[Token(Token = "0x40002D9")]
	CopyOnly = 0,
	[Token(Token = "0x40002DA")]
	Escape = 1,
	[Token(Token = "0x40002DB")]
	Unescape = 2,
	[Token(Token = "0x40002DC")]
	EscapeUnescape = Escape | Unescape,
	[Token(Token = "0x40002DD")]
	V1ToStringFlag = 4,
	[Token(Token = "0x40002DE")]
	UnescapeAll = 8,
	[Token(Token = "0x40002DF")]
	UnescapeAllOrThrow = 0x18
}
