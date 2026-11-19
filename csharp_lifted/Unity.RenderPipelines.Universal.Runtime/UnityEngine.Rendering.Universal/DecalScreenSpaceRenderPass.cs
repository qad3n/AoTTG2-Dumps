// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.DecalScreenSpaceRenderPass
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Rendering.RenderGraphModule;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x2000099")]
internal class DecalScreenSpaceRenderPass : ScriptableRenderPass
{
	[Token(Token = "0x200009A")]
	private class PassData
	{
		[Token(Token = "0x40002FA")]
		[FieldOffset(Offset = "0x10")]
		internal DecalDrawScreenSpaceSystem drawSystem;

		[Token(Token = "0x40002FB")]
		[FieldOffset(Offset = "0x18")]
		internal DecalScreenSpaceSettings settings;

		[Token(Token = "0x40002FC")]
		[FieldOffset(Offset = "0x20")]
		internal bool decalLayers;

		[Token(Token = "0x40002FD")]
		[FieldOffset(Offset = "0x21")]
		internal bool isGLDevice;

		[Token(Token = "0x40002FE")]
		[FieldOffset(Offset = "0x24")]
		internal TextureHandle colorTarget;

		[Token(Token = "0x40002FF")]
		[FieldOffset(Offset = "0x38")]
		internal UniversalCameraData cameraData;

		[Token(Token = "0x4000300")]
		[FieldOffset(Offset = "0x40")]
		internal RendererListHandle rendererList;

		[Token(Token = "0x600037A")]
		[Address(RVA = "0x661D9D0", Offset = "0x661C9D0", VA = "0x661D9D0")]
		public PassData()
		{
		}
	}

	[Token(Token = "0x40002F5")]
	[FieldOffset(Offset = "0x5C")]
	private FilteringSettings m_FilteringSettings;

	[Token(Token = "0x40002F6")]
	[FieldOffset(Offset = "0x80")]
	private List<ShaderTagId> m_ShaderTagIdList;

	[Token(Token = "0x40002F7")]
	[FieldOffset(Offset = "0x88")]
	private DecalDrawScreenSpaceSystem m_DrawSystem;

	[Token(Token = "0x40002F8")]
	[FieldOffset(Offset = "0x90")]
	private DecalScreenSpaceSettings m_Settings;

	[Token(Token = "0x40002F9")]
	[FieldOffset(Offset = "0x98")]
	private bool m_DecalLayers;

	[Token(Token = "0x6000374")]
	[Address(RVA = "0x661C6C0", Offset = "0x661B6C0", VA = "0x661C6C0")]
	public DecalScreenSpaceRenderPass(DecalScreenSpaceSettings settings, DecalDrawScreenSpaceSystem drawSystem, bool decalLayers)
	{
	}

	[Token(Token = "0x6000375")]
	[Address(RVA = "0x661C980", Offset = "0x661B980", VA = "0x661C980")]
	private RendererListParams CreateRenderListParams(UniversalRenderingData renderingData, UniversalCameraData cameraData, UniversalLightData lightData)
	{
		return default(RendererListParams);
	}

	[Token(Token = "0x6000376")]
	[Address(RVA = "0x661CAA0", Offset = "0x661BAA0", VA = "0x661CAA0")]
	private void InitPassData(UniversalCameraData cameraData, ref PassData passData)
	{
	}

	[Token(Token = "0x6000377")]
	[Address(RVA = "0x661CB70", Offset = "0x661BB70", VA = "0x661CB70")]
	private static void ExecutePass(RasterCommandBuffer cmd, PassData passData, RendererList rendererList)
	{
	}

	[Token(Token = "0x6000378")]
	[Address(RVA = "0x661CCC0", Offset = "0x661BCC0", VA = "0x661CCC0", Slot = "11")]
	public override void RecordRenderGraph(RenderGraph renderGraph, ContextContainer frameData)
	{
	}

	[Token(Token = "0x6000379")]
	[Address(RVA = "0x661D8E0", Offset = "0x661C8E0", VA = "0x661D8E0", Slot = "10")]
	public override void OnCameraCleanup(CommandBuffer cmd)
	{
	}
}
