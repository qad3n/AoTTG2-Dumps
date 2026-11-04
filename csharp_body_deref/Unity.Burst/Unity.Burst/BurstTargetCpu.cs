// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Burst.BurstTargetCpu
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Unity.Burst;

[Token(Token = "0x2000014")]
internal enum BurstTargetCpu
{
	[Token(Token = "0x40000A9")]
	Auto,
	[Token(Token = "0x40000AA")]
	X86_SSE2,
	[Token(Token = "0x40000AB")]
	X86_SSE4,
	[Token(Token = "0x40000AC")]
	X64_SSE2,
	[Token(Token = "0x40000AD")]
	X64_SSE4,
	[Token(Token = "0x40000AE")]
	AVX,
	[Token(Token = "0x40000AF")]
	AVX2,
	[Token(Token = "0x40000B0")]
	WASM32,
	[Token(Token = "0x40000B1")]
	ARMV7A_NEON32,
	[Token(Token = "0x40000B2")]
	ARMV8A_AARCH64,
	[Token(Token = "0x40000B3")]
	THUMB2_NEON32,
	[Token(Token = "0x40000B4")]
	ARMV8A_AARCH64_HALFFP,
	[Token(Token = "0x40000B5")]
	ARMV9A,
	[Token(Token = "0x40000B6")]
	WASM64
}
