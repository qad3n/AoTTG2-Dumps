// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.PostProcessing.IAmbientOcclusionMethod
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.PostProcessing;

[Token(Token = "0x2000010")]
internal interface IAmbientOcclusionMethod
{
	[Token(Token = "0x600000E")]
	DepthTextureMode GetCameraFlags();

	[Token(Token = "0x600000F")]
	void RenderAfterOpaque(PostProcessRenderContext context);

	[Token(Token = "0x6000010")]
	void RenderAmbientOnly(PostProcessRenderContext context);

	[Token(Token = "0x6000011")]
	void CompositeAmbientOnly(PostProcessRenderContext context);

	[Token(Token = "0x6000012")]
	void Release();
}
