// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.DrawScreenSpaceUIPass
// Update status: NEW in this game update
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
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
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
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
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
	[Address(RVA = "0x2C57EA0", Offset = "0x2C564A0", VA = "0x182C57EA0")]
	public DrawScreenSpaceUIPass(RenderPassEvent evt, bool renderOffscreen)
	{
	}

	[Token(Token = "0x6000701")]
	[Address(RVA = "0x2C56B70", Offset = "0x2C55170", VA = "0x182C56B70")]
	private static void ConfigureColorDescriptor(ref RenderTextureDescriptor descriptor, int cameraWidth, int cameraHeight)
	{
	}

	[Token(Token = "0x6000702")]
	[Address(RVA = "0x2C56BE0", Offset = "0x2C551E0", VA = "0x182C56BE0")]
	internal static void ConfigureOffscreenUITextureDesc(ref TextureDesc textureDesc)
	{
	}

	[Token(Token = "0x6000703")]
	[Address(RVA = "0x2C56BB0", Offset = "0x2C551B0", VA = "0x182C56BB0")]
	private static void ConfigureDepthDescriptor(ref RenderTextureDescriptor descriptor, GraphicsFormat depthStencilFormat, int targetWidth, int targetHeight)
	{
	}

	[Token(Token = "0x6000704")]
	[Address(RVA = "0x2C24360", Offset = "0x2C22960", VA = "0x182C24360")]
	private static void ExecutePass(RasterCommandBuffer commandBuffer, PassData passData, RendererList rendererList)
	{
	}

	[Token(Token = "0x6000705")]
	[Address(RVA = "0x2C24360", Offset = "0x2C22960", VA = "0x182C24360")]
	private static void ExecutePass(UnsafeCommandBuffer commandBuffer, UnsafePassData passData, RendererList rendererList)
	{
	}

	[Token(Token = "0x6000706")]
	[Address(RVA = "0x2C56C20", Offset = "0x2C55220", VA = "0x182C56C20")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000707")]
	[Address(RVA = "0x2C57CA0", Offset = "0x2C562A0", VA = "0x182C57CA0")]
	public void Setup(UniversalCameraData cameraData, GraphicsFormat depthStencilFormat)
	{
	}

	[Token(Token = "0x6000708")]
	[Address(RVA = "0x2C56C60", Offset = "0x2C55260", VA = "0x182C56C60")]
	internal void RenderOffscreen(RenderGraph renderGraph, ContextContainer frameData, GraphicsFormat depthStencilFormat, TextureHandle overlayUITexture)
	{
	}

	[Token(Token = "0x6000709")]
	[Address(RVA = "0x2C57560", Offset = "0x2C55B60", VA = "0x182C57560")]
	internal void RenderOverlay(RenderGraph renderGraph, ContextContainer frameData, in TextureHandle colorBuffer, in TextureHandle depthBuffer)
	{
	}
}
