// ==================== AoTTG2 cross-reference ====================
// Type: System.ParsingError
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20000C6")]
internal enum ParsingError
{
	[Token(Token = "0x40002CA")]
	None = 0,
	[Token(Token = "0x40002CB")]
	BadFormat = 1,
	[Token(Token = "0x40002CC")]
	BadScheme = 2,
	[Token(Token = "0x40002CD")]
	BadAuthority = 3,
	[Token(Token = "0x40002CE")]
	EmptyUriString = 4,
	[Token(Token = "0x40002CF")]
	LastRelativeUriOkErrIndex = EmptyUriString,
	[Token(Token = "0x40002D0")]
	SchemeLimit = 5,
	[Token(Token = "0x40002D1")]
	SizeLimit = 6,
	[Token(Token = "0x40002D2")]
	MustRootedPath = 7,
	[Token(Token = "0x40002D3")]
	BadHostName = 8,
	[Token(Token = "0x40002D4")]
	NonEmptyHost = 9,
	[Token(Token = "0x40002D5")]
	BadPort = 10,
	[Token(Token = "0x40002D6")]
	BadAuthorityTerminator = 11,
	[Token(Token = "0x40002D7")]
	CannotCreateRelative = 12
}
