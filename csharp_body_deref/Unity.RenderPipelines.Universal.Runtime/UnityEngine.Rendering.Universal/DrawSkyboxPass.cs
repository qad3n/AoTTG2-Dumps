// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.DrawSkyboxPass
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Experimental.Rendering;
using UnityEngine.Rendering.RenderGraphModule;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x20000C2")]
public class DrawSkyboxPass : ScriptableRenderPass
{
	[Token(Token = "0x20000C3")]
	private class PassData
	{
		[Token(Token = "0x400042F")]
		[FieldOffset(Offset = "0x10")]
		internal XRPass xr;

		[Token(Token = "0x4000430")]
		[FieldOffset(Offset = "0x18")]
		internal RendererListHandle skyRendererListHandle;

		[Token(Token = "0x4000431")]
		[FieldOffset(Offset = "0x28")]
		internal Material material;

		[Token(Token = "0x6000504")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public PassData()
		{
		}
	}

	[Token(Token = "0x60004FE")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "9")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public override void Execute(ScriptableRenderContext context, ref RenderingData renderingData)
	{
	}

	[Token(Token = "0x60004FF")]
	[Address(RVA = "0x2C394B0", Offset = "0x2C37AB0", VA = "0x182C394B0")]
	public DrawSkyboxPass(RenderPassEvent evt)
	{
	}

	[Token(Token = "0x6000500")]
	[Address(RVA = "0x2C389B0", Offset = "0x2C36FB0", VA = "0x182C389B0")]
	private RendererListHandle CreateSkyBoxRendererList(RenderGraph renderGraph, UniversalCameraData cameraData)
	{
		return default(RendererListHandle);
	}

	[Token(Token = "0x6000501")]
	[Address(RVA = "0x2C38CB0", Offset = "0x2C372B0", VA = "0x182C38CB0")]
	private static void ExecutePass(RasterCommandBuffer cmd, XRPass xr, RendererList rendererList)
	{
	}

	[Token(Token = "0x6000502")]
	[Address(RVA = "0x2C38D80", Offset = "0x2C37380", VA = "0x182C38D80")]
	private void InitPassData(ref PassData passData, in XRPass xr, in RendererListHandle handle)
	{
	}

	[Token(Token = "0x6000503")]
	[Address(RVA = "0x2C38DD0", Offset = "0x2C373D0", VA = "0x182C38DD0")]
	internal void Render(RenderGraph renderGraph, ContextContainer frameData, ScriptableRenderContext context, TextureHandle colorTarget, TextureHandle depthTarget, Material skyboxMaterial)
	{
	}
}
