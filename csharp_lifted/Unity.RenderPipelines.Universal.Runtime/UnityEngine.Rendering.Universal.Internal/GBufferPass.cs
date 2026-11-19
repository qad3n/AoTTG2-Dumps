// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.Internal.GBufferPass
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Rendering.RenderGraphModule;

namespace UnityEngine.Rendering.Universal.Internal;

[Token(Token = "0x2000236")]
internal class GBufferPass : ScriptableRenderPass
{
	[Token(Token = "0x2000237")]
	private class PassData
	{
		[Token(Token = "0x4000DB4")]
		[FieldOffset(Offset = "0x10")]
		internal DeferredLights deferredLights;

		[Token(Token = "0x4000DB5")]
		[FieldOffset(Offset = "0x18")]
		internal RendererListHandle rendererListHdl;

		[Token(Token = "0x4000DB6")]
		[FieldOffset(Offset = "0x24")]
		internal RendererListHandle objectsWithErrorRendererListHdl;

		[Token(Token = "0x4000DB7")]
		[FieldOffset(Offset = "0x30")]
		internal TextureHandle screenSpaceIrradianceHdl;

		[Token(Token = "0x6000C23")]
		[Address(RVA = "0x66D9DE0", Offset = "0x66D8DE0", VA = "0x66D9DE0")]
		public PassData()
		{
		}
	}

	[Token(Token = "0x4000DA7")]
	[FieldOffset(Offset = "0x0")]
	private static readonly int s_CameraNormalsTextureID;

	[Token(Token = "0x4000DA8")]
	[FieldOffset(Offset = "0x4")]
	private static readonly int s_CameraRenderingLayersTextureID;

	[Token(Token = "0x4000DA9")]
	[FieldOffset(Offset = "0x8")]
	private static readonly ShaderTagId s_ShaderTagLit;

	[Token(Token = "0x4000DAA")]
	[FieldOffset(Offset = "0xC")]
	private static readonly ShaderTagId s_ShaderTagSimpleLit;

	[Token(Token = "0x4000DAB")]
	[FieldOffset(Offset = "0x10")]
	private static readonly ShaderTagId s_ShaderTagUnlit;

	[Token(Token = "0x4000DAC")]
	[FieldOffset(Offset = "0x14")]
	private static readonly ShaderTagId s_ShaderTagComplexLit;

	[Token(Token = "0x4000DAD")]
	[FieldOffset(Offset = "0x18")]
	private static readonly ShaderTagId s_ShaderTagUniversalGBuffer;

	[Token(Token = "0x4000DAE")]
	[FieldOffset(Offset = "0x1C")]
	private static readonly ShaderTagId s_ShaderTagUniversalMaterialType;

	[Token(Token = "0x4000DAF")]
	[FieldOffset(Offset = "0x60")]
	private DeferredLights m_DeferredLights;

	[Token(Token = "0x4000DB0")]
	[FieldOffset(Offset = "0x20")]
	private static ShaderTagId[] s_ShaderTagValues;

	[Token(Token = "0x4000DB1")]
	[FieldOffset(Offset = "0x28")]
	private static RenderStateBlock[] s_RenderStateBlocks;

	[Token(Token = "0x4000DB2")]
	[FieldOffset(Offset = "0x68")]
	private FilteringSettings m_FilteringSettings;

	[Token(Token = "0x4000DB3")]
	[FieldOffset(Offset = "0x88")]
	private RenderStateBlock m_RenderStateBlock;

	[Token(Token = "0x6000C1D")]
	[Address(RVA = "0x66D8090", Offset = "0x66D7090", VA = "0x66D8090")]
	public GBufferPass(RenderPassEvent evt, RenderQueueRange renderQueueRange, LayerMask layerMask, StencilState stencilState, int stencilReference, DeferredLights deferredLights)
	{
	}

	[Token(Token = "0x6000C1E")]
	[Address(RVA = "0x66D8990", Offset = "0x66D7990", VA = "0x66D8990")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000C1F")]
	[Address(RVA = "0x66D89B0", Offset = "0x66D79B0", VA = "0x66D89B0")]
	private static void ExecutePass(RasterCommandBuffer cmd, PassData data, RendererList rendererList, RendererList errorRendererList)
	{
	}

	[Token(Token = "0x6000C20")]
	[Address(RVA = "0x66D8C90", Offset = "0x66D7C90", VA = "0x66D8C90")]
	private void InitRendererLists(ref PassData passData, ScriptableRenderContext context, RenderGraph renderGraph, UniversalRenderingData renderingData, UniversalCameraData cameraData, UniversalLightData lightData, bool useRenderGraph, uint batchLayerMask = 4294967295u)
	{
	}

	[Token(Token = "0x6000C21")]
	[Address(RVA = "0x66D9070", Offset = "0x66D8070", VA = "0x66D9070")]
	internal void Render(RenderGraph renderGraph, ContextContainer frameData, TextureHandle cameraColor, TextureHandle cameraDepth, bool setGlobalTextures, uint batchLayerMask = 4294967295u)
	{
	}
}
