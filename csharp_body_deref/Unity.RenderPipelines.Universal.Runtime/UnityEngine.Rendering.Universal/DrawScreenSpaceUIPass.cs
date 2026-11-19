// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.DrawScreenSpaceUIPass
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Experimental.Rendering;
using UnityEngine.Rendering.RenderGraphModule;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x2000120")]
internal class DrawScreenSpaceUIPass : ScriptableRenderPass
{
	[Token(Token = "0x2000121")]
	private class PassData
	{
		[Token(Token = "0x4000640")]
		[FieldOffset(Offset = "0x10")]
		internal RendererListHandle rendererList;

		[Token(Token = "0x600070A")]
		[Address(RVA = "0x6650850", Offset = "0x664F850", VA = "0x6650850")]
		public PassData()
		{
		}
	}

	[Token(Token = "0x2000122")]
	private class UnsafePassData
	{
		[Token(Token = "0x4000641")]
		[FieldOffset(Offset = "0x10")]
		internal RendererListHandle rendererList;

		[Token(Token = "0x4000642")]
		[FieldOffset(Offset = "0x1C")]
		internal TextureHandle colorTarget;

		[Token(Token = "0x600070B")]
		[Address(RVA = "0x6650860", Offset = "0x664F860", VA = "0x6650860")]
		public UnsafePassData()
		{
		}
	}

	[Token(Token = "0x400063D")]
	[FieldOffset(Offset = "0x60")]
	private RTHandle m_ColorTarget;

	[Token(Token = "0x400063E")]
	[FieldOffset(Offset = "0x68")]
	private RTHandle m_DepthTarget;

	[Token(Token = "0x400063F")]
	[FieldOffset(Offset = "0x70")]
	private bool m_RenderOffscreen;

	[Token(Token = "0x6000700")]
	[Address(RVA = "0x664EDE0", Offset = "0x664DDE0", VA = "0x664EDE0")]
	public DrawScreenSpaceUIPass(RenderPassEvent evt, bool renderOffscreen)
	{
	}

	[Token(Token = "0x6000701")]
	[Address(RVA = "0x664EE40", Offset = "0x664DE40", VA = "0x664EE40")]
	private static void ConfigureColorDescriptor(ref RenderTextureDescriptor descriptor, int cameraWidth, int cameraHeight)
	{
	}

	[Token(Token = "0x6000702")]
	[Address(RVA = "0x664EE70", Offset = "0x664DE70", VA = "0x664EE70")]
	internal static void ConfigureOffscreenUITextureDesc(ref TextureDesc textureDesc)
	{
	}

	[Token(Token = "0x6000703")]
	[Address(RVA = "0x664EEA0", Offset = "0x664DEA0", VA = "0x664EEA0")]
	private static void ConfigureDepthDescriptor(ref RenderTextureDescriptor descriptor, GraphicsFormat depthStencilFormat, int targetWidth, int targetHeight)
	{
	}

	[Token(Token = "0x6000704")]
	[Address(RVA = "0x664EEE0", Offset = "0x664DEE0", VA = "0x664EEE0")]
	private static void ExecutePass(RasterCommandBuffer commandBuffer, PassData passData, RendererList rendererList)
	{
	}

	[Token(Token = "0x6000705")]
	[Address(RVA = "0x664EF00", Offset = "0x664DF00", VA = "0x664EF00")]
	private static void ExecutePass(UnsafeCommandBuffer commandBuffer, UnsafePassData passData, RendererList rendererList)
	{
	}

	[Token(Token = "0x6000706")]
	[Address(RVA = "0x664EF20", Offset = "0x664DF20", VA = "0x664EF20")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000707")]
	[Address(RVA = "0x664EF50", Offset = "0x664DF50", VA = "0x664EF50")]
	public void Setup(UniversalCameraData cameraData, GraphicsFormat depthStencilFormat)
	{
	}

	[Token(Token = "0x6000708")]
	[Address(RVA = "0x664F0E0", Offset = "0x664E0E0", VA = "0x664F0E0")]
	internal void RenderOffscreen(RenderGraph renderGraph, ContextContainer frameData, GraphicsFormat depthStencilFormat, TextureHandle overlayUITexture)
	{
	}

	[Token(Token = "0x6000709")]
	[Address(RVA = "0x664FE20", Offset = "0x664EE20", VA = "0x664FE20")]
	internal void RenderOverlay(RenderGraph renderGraph, ContextContainer frameData, in TextureHandle colorBuffer, in TextureHandle depthBuffer)
	{
	}
}
