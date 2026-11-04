// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.Internal.GBufferPass
// Update status: NEW in this game update
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
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
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
	[Address(RVA = "0x2CD6C50", Offset = "0x2CD5250", VA = "0x182CD6C50")]
	public GBufferPass(RenderPassEvent evt, RenderQueueRange renderQueueRange, LayerMask layerMask, StencilState stencilState, int stencilReference, DeferredLights deferredLights)
	{
	}

	[Token(Token = "0x6000C1E")]
	[Address(RVA = "0x2CD5950", Offset = "0x2CD3F50", VA = "0x182CD5950")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000C1F")]
	[Address(RVA = "0x2CD5970", Offset = "0x2CD3F70", VA = "0x182CD5970")]
	private static void ExecutePass(RasterCommandBuffer cmd, PassData data, RendererList rendererList, RendererList errorRendererList)
	{
	}

	[Token(Token = "0x6000C20")]
	[Address(RVA = "0x2CD5B40", Offset = "0x2CD4140", VA = "0x182CD5B40")]
	private void InitRendererLists(ref PassData passData, ScriptableRenderContext context, RenderGraph renderGraph, UniversalRenderingData renderingData, UniversalCameraData cameraData, UniversalLightData lightData, bool useRenderGraph, uint batchLayerMask = 4294967295u)
	{
	}

	[Token(Token = "0x6000C21")]
	[Address(RVA = "0x2CD60A0", Offset = "0x2CD46A0", VA = "0x182CD60A0")]
	internal void Render(RenderGraph renderGraph, ContextContainer frameData, TextureHandle cameraColor, TextureHandle cameraDepth, bool setGlobalTextures, uint batchLayerMask = 4294967295u)
	{
	}
}
