// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.DecalPreviewPass
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Rendering.RenderGraphModule;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x2000078")]
internal class DecalPreviewPass : ScriptableRenderPass
{
	[Token(Token = "0x2000079")]
	private class PassData
	{
		[Token(Token = "0x4000230")]
		[FieldOffset(Offset = "0x10")]
		internal RendererListHandle rendererList;

		[Token(Token = "0x60002C8")]
		[Address(RVA = "0x66117D0", Offset = "0x66107D0", VA = "0x66117D0")]
		public PassData()
		{
		}
	}

	[Token(Token = "0x400022D")]
	[FieldOffset(Offset = "0x5C")]
	private FilteringSettings m_FilteringSettings;

	[Token(Token = "0x400022E")]
	[FieldOffset(Offset = "0x80")]
	private List<ShaderTagId> m_ShaderTagIdList;

	[Token(Token = "0x400022F")]
	[FieldOffset(Offset = "0x88")]
	private ProfilingSampler m_ProfilingSampler;

	[Token(Token = "0x60002C5")]
	[Address(RVA = "0x6610DC0", Offset = "0x660FDC0", VA = "0x6610DC0")]
	public DecalPreviewPass()
	{
	}

	[Token(Token = "0x60002C6")]
	[Address(RVA = "0x6610FE0", Offset = "0x660FFE0", VA = "0x6610FE0")]
	private static void ExecutePass(RasterCommandBuffer cmd, PassData passData, RendererList rendererList)
	{
	}

	[Token(Token = "0x60002C7")]
	[Address(RVA = "0x6611000", Offset = "0x6610000", VA = "0x6611000", Slot = "11")]
	public override void RecordRenderGraph(RenderGraph renderGraph, ContextContainer frameData)
	{
	}
}
