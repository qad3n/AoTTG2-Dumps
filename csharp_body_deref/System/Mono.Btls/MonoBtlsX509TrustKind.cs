// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Btls.MonoBtlsX509TrustKind
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Mono.Btls;

[Token(Token = "0x20000A4")]
[Flags]
internal enum MonoBtlsX509TrustKind
{
	[Token(Token = "0x40001ED")]
	DEFAULT = 0,
	[Token(Token = "0x40001EE")]
	TRUST_CLIENT = 1,
	[Token(Token = "0x40001EF")]
	TRUST_SERVER = 2,
	[Token(Token = "0x40001F0")]
	TRUST_ALL = 4,
	[Token(Token = "0x40001F1")]
	REJECT_CLIENT = 0x20,
	[Token(Token = "0x40001F2")]
	REJECT_SERVER = 0x40,
	[Token(Token = "0x40001F3")]
	REJECT_ALL = 0x80
}
