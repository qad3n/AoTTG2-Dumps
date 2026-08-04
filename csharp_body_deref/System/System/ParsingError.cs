// ==================== AoTTG2 cross-reference ====================
// Type: System.ParsingError
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x2000087")]
internal enum ParsingError
{
	[Token(Token = "0x40001FA")]
	None = 0,
	[Token(Token = "0x40001FB")]
	BadFormat = 1,
	[Token(Token = "0x40001FC")]
	BadScheme = 2,
	[Token(Token = "0x40001FD")]
	BadAuthority = 3,
	[Token(Token = "0x40001FE")]
	EmptyUriString = 4,
	[Token(Token = "0x40001FF")]
	LastRelativeUriOkErrIndex = 4,
	[Token(Token = "0x4000200")]
	SchemeLimit = 5,
	[Token(Token = "0x4000201")]
	SizeLimit = 6,
	[Token(Token = "0x4000202")]
	MustRootedPath = 7,
	[Token(Token = "0x4000203")]
	BadHostName = 8,
	[Token(Token = "0x4000204")]
	NonEmptyHost = 9,
	[Token(Token = "0x4000205")]
	BadPort = 10,
	[Token(Token = "0x4000206")]
	BadAuthorityTerminator = 11,
	[Token(Token = "0x4000207")]
	CannotCreateRelative = 12
}
