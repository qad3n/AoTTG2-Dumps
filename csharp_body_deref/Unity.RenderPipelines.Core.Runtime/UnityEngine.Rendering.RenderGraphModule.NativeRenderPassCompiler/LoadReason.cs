// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler.LoadReason
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler;

[Token(Token = "0x20002C2")]
internal enum LoadReason
{
	[Token(Token = "0x4000CBB")]
	InvalidReason,
	[Token(Token = "0x4000CBC")]
	LoadImported,
	[Token(Token = "0x4000CBD")]
	LoadPreviouslyWritten,
	[Token(Token = "0x4000CBE")]
	ClearImported,
	[Token(Token = "0x4000CBF")]
	ClearCreated,
	[Token(Token = "0x4000CC0")]
	FullyRewritten,
	[Token(Token = "0x4000CC1")]
	Count
}
