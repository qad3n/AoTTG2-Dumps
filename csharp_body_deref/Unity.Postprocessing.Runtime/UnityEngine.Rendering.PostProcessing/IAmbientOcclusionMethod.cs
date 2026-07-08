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
