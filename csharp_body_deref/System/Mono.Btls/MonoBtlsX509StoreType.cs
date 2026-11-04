// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Btls.MonoBtlsX509StoreType
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Mono.Btls;

[Token(Token = "0x20000A3")]
internal enum MonoBtlsX509StoreType
{
	[Token(Token = "0x40001E5")]
	Custom,
	[Token(Token = "0x40001E6")]
	MachineTrustedRoots,
	[Token(Token = "0x40001E7")]
	MachineIntermediateCA,
	[Token(Token = "0x40001E8")]
	MachineUntrusted,
	[Token(Token = "0x40001E9")]
	UserTrustedRoots,
	[Token(Token = "0x40001EA")]
	UserIntermediateCA,
	[Token(Token = "0x40001EB")]
	UserUntrusted
}
