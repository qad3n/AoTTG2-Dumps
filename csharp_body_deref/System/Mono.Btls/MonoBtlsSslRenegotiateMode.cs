// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Btls.MonoBtlsSslRenegotiateMode
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Mono.Btls;

[Token(Token = "0x200008A")]
[Flags]
internal enum MonoBtlsSslRenegotiateMode
{
	[Token(Token = "0x400016A")]
	NEVER = 0,
	[Token(Token = "0x400016B")]
	ONCE = 1,
	[Token(Token = "0x400016C")]
	FREELY = 2,
	[Token(Token = "0x400016D")]
	IGNORE = ONCE | FREELY
}
