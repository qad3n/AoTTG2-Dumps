// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.AsnDecodeStatus
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x20000E7")]
internal enum AsnDecodeStatus
{
	[Token(Token = "0x4000449")]
	NotDecoded = -1,
	[Token(Token = "0x400044A")]
	Ok,
	[Token(Token = "0x400044B")]
	BadAsn,
	[Token(Token = "0x400044C")]
	BadTag,
	[Token(Token = "0x400044D")]
	BadLength,
	[Token(Token = "0x400044E")]
	InformationNotAvailable
}
