// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.Internal.DrawObjectsWithRenderingLayersPass
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Rendering.RenderGraphModule;

namespace UnityEngine.Rendering.Universal.Internal;

[Token(Token = "0x2000233")]
internal class DrawObjectsWithRenderingLayersPass : DrawObjectsPass
{
	[Token(Token = "0x2000234")]
	private class RenderingLayersPassData
	{
		[Token(Token = "0x4000DA3")]
		[FieldOffset(Offset = "0x10")]
		internal PassData basePassData;

		[Token(Token = "0x4000DA4")]
		[FieldOffset(Offset = "0x18")]
		internal RenderingLayerUtils.MaskSize maskSize;

		[Token(Token = "0x6000C19")]
		[Address(RVA = "0x66D7CB0", Offset = "0x66D6CB0", VA = "0x66D7CB0")]
		public RenderingLayersPassData()
		{
		}
	}

	[Token(Token = "0x6000C17")]
	[Address(RVA = "0x66D6BD0", Offset = "0x66D5BD0", VA = "0x66D6BD0")]
	public DrawObjectsWithRenderingLayersPass(URPProfileId profilerTag, bool opaque, RenderPassEvent evt, RenderQueueRange renderQueueRange, LayerMask layerMask, StencilState stencilState, int stencilReference)
	{
	}

	[Token(Token = "0x6000C18")]
	[Address(RVA = "0x66D6C80", Offset = "0x66D5C80", VA = "0x66D6C80")]
	internal void Render(RenderGraph renderGraph, ContextContainer frameData, TextureHandle colorTarget, TextureHandle renderingLayersTexture, TextureHandle depthTarget, TextureHandle mainShadowsTexture, TextureHandle additionalShadowsTexture, RenderingLayerUtils.MaskSize maskSize, uint batchLayerMask = 4294967295u)
	{
	}
}
