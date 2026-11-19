// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.DBufferRenderPass
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Rendering.RenderGraphModule;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x2000070")]
internal class DBufferRenderPass : ScriptableRenderPass
{
	[Token(Token = "0x2000071")]
	private class PassData
	{
		[Token(Token = "0x400021D")]
		[FieldOffset(Offset = "0x10")]
		internal DecalDrawDBufferSystem drawSystem;

		[Token(Token = "0x400021E")]
		[FieldOffset(Offset = "0x18")]
		internal DBufferSettings settings;

		[Token(Token = "0x400021F")]
		[FieldOffset(Offset = "0x20")]
		internal bool decalLayers;

		[Token(Token = "0x4000220")]
		[FieldOffset(Offset = "0x28")]
		internal RTHandle dBufferDepth;

		[Token(Token = "0x4000221")]
		[FieldOffset(Offset = "0x30")]
		internal RTHandle[] dBufferColorHandles;

		[Token(Token = "0x4000222")]
		[FieldOffset(Offset = "0x38")]
		internal RendererListHandle rendererList;

		[Token(Token = "0x60002B3")]
		[Address(RVA = "0x660FE50", Offset = "0x660EE50", VA = "0x660FE50")]
		public PassData()
		{
		}
	}

	[Token(Token = "0x4000214")]
	[FieldOffset(Offset = "0x0")]
	internal static string[] s_DBufferNames;

	[Token(Token = "0x4000215")]
	[FieldOffset(Offset = "0x8")]
	internal static string s_DBufferDepthName;

	[Token(Token = "0x4000216")]
	[FieldOffset(Offset = "0x10")]
	private static readonly int s_SSAOTextureID;

	[Token(Token = "0x4000217")]
	[FieldOffset(Offset = "0x60")]
	private DecalDrawDBufferSystem m_DrawSystem;

	[Token(Token = "0x4000218")]
	[FieldOffset(Offset = "0x68")]
	private DBufferSettings m_Settings;

	[Token(Token = "0x4000219")]
	[FieldOffset(Offset = "0x70")]
	private FilteringSettings m_FilteringSettings;

	[Token(Token = "0x400021A")]
	[FieldOffset(Offset = "0x90")]
	private List<ShaderTagId> m_ShaderTagIdList;

	[Token(Token = "0x400021B")]
	[FieldOffset(Offset = "0x98")]
	private bool m_DecalLayers;

	[Token(Token = "0x400021C")]
	[FieldOffset(Offset = "0xA0")]
	private TextureHandle[] dbufferHandles;

	[Token(Token = "0x60002AB")]
	[Address(RVA = "0x660DB20", Offset = "0x660CB20", VA = "0x660DB20")]
	public DBufferRenderPass(Material dBufferClear, DBufferSettings settings, DecalDrawDBufferSystem drawSystem, bool decalLayers)
	{
	}

	[Token(Token = "0x60002AC")]
	[Address(RVA = "0x660DF80", Offset = "0x660CF80", VA = "0x660DF80")]
	private static void ExecutePass(RasterCommandBuffer cmd, PassData passData, RendererList rendererList, bool renderGraph)
	{
	}

	[Token(Token = "0x60002AD")]
	[Address(RVA = "0x660E1C0", Offset = "0x660D1C0", VA = "0x660E1C0")]
	private static void SetKeywords(RasterCommandBuffer cmd, PassData passData)
	{
	}

	[Token(Token = "0x60002AE")]
	[Address(RVA = "0x660E2B0", Offset = "0x660D2B0", VA = "0x660E2B0")]
	private void InitPassData(ref PassData passData)
	{
	}

	[Token(Token = "0x60002AF")]
	[Address(RVA = "0x660E310", Offset = "0x660D310", VA = "0x660E310")]
	private RendererListParams InitRendererListParams(UniversalRenderingData renderingData, UniversalCameraData cameraData, UniversalLightData lightData)
	{
		return default(RendererListParams);
	}

	[Token(Token = "0x60002B0")]
	[Address(RVA = "0x660E430", Offset = "0x660D430", VA = "0x660E430", Slot = "11")]
	public override void RecordRenderGraph(RenderGraph renderGraph, ContextContainer frameData)
	{
	}

	[Token(Token = "0x60002B1")]
	[Address(RVA = "0x660FBC0", Offset = "0x660EBC0", VA = "0x660FBC0", Slot = "10")]
	public override void OnCameraCleanup(CommandBuffer cmd)
	{
	}
}
