// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.DecalPreviewPass
// Update status: NEW in this game update
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
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public PassData()
		{
		}
	}

	[Token(Token = "0x400022D")]
	[FieldOffset(Offset = "0x60")]
	private FilteringSettings m_FilteringSettings;

	[Token(Token = "0x400022E")]
	[FieldOffset(Offset = "0x80")]
	private List<ShaderTagId> m_ShaderTagIdList;

	[Token(Token = "0x400022F")]
	[FieldOffset(Offset = "0x88")]
	private ProfilingSampler m_ProfilingSampler;

	[Token(Token = "0x60002C5")]
	[Address(RVA = "0x2C24B70", Offset = "0x2C23170", VA = "0x182C24B70")]
	public DecalPreviewPass()
	{
	}

	[Token(Token = "0x60002C6")]
	[Address(RVA = "0x2C24360", Offset = "0x2C22960", VA = "0x182C24360")]
	private static void ExecutePass(RasterCommandBuffer cmd, PassData passData, RendererList rendererList)
	{
	}

	[Token(Token = "0x60002C7")]
	[Address(RVA = "0x2C243A0", Offset = "0x2C229A0", VA = "0x182C243A0", Slot = "11")]
	public override void RecordRenderGraph(RenderGraph renderGraph, ContextContainer frameData)
	{
	}
}
