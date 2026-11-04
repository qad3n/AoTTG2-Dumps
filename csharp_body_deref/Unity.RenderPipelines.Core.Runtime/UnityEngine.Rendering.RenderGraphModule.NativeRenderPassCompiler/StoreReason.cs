// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler.StoreReason
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler;

[Token(Token = "0x20002C4")]
internal enum StoreReason
{
	[Token(Token = "0x4000CC6")]
	InvalidReason,
	[Token(Token = "0x4000CC7")]
	StoreImported,
	[Token(Token = "0x4000CC8")]
	StoreUsedByLaterPass,
	[Token(Token = "0x4000CC9")]
	DiscardImported,
	[Token(Token = "0x4000CCA")]
	DiscardUnused,
	[Token(Token = "0x4000CCB")]
	DiscardBindMs,
	[Token(Token = "0x4000CCC")]
	NoMSAABuffer,
	[Token(Token = "0x4000CCD")]
	Count
}
