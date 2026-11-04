// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.DecalForwardEmissivePass
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Rendering.RenderGraphModule;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x2000074")]
internal class DecalForwardEmissivePass : ScriptableRenderPass
{
	[Token(Token = "0x2000075")]
	private class PassData
	{
		[Token(Token = "0x4000228")]
		[FieldOffset(Offset = "0x10")]
		internal DecalDrawFowardEmissiveSystem drawSystem;

		[Token(Token = "0x4000229")]
		[FieldOffset(Offset = "0x18")]
		internal RendererListHandle rendererList;

		[Token(Token = "0x60002BE")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public PassData()
		{
		}
	}

	[Token(Token = "0x4000225")]
	[FieldOffset(Offset = "0x60")]
	private FilteringSettings m_FilteringSettings;

	[Token(Token = "0x4000226")]
	[FieldOffset(Offset = "0x80")]
	private List<ShaderTagId> m_ShaderTagIdList;

	[Token(Token = "0x4000227")]
	[FieldOffset(Offset = "0x88")]
	private DecalDrawFowardEmissiveSystem m_DrawSystem;

	[Token(Token = "0x60002B9")]
	[Address(RVA = "0x2C22C40", Offset = "0x2C21240", VA = "0x182C22C40")]
	public DecalForwardEmissivePass(DecalDrawFowardEmissiveSystem drawSystem)
	{
	}

	[Token(Token = "0x60002BA")]
	[Address(RVA = "0x2C220E0", Offset = "0x2C206E0", VA = "0x182C220E0")]
	private void InitPassData(ref PassData passData)
	{
	}

	[Token(Token = "0x60002BB")]
	[Address(RVA = "0x2C22110", Offset = "0x2C20710", VA = "0x182C22110")]
	private RendererListParams InitRendererListParams(UniversalRenderingData renderingData, UniversalCameraData cameraData, UniversalLightData lightData)
	{
		return default(RendererListParams);
	}

	[Token(Token = "0x60002BC")]
	[Address(RVA = "0x2C19760", Offset = "0x2C17D60", VA = "0x182C19760")]
	private static void ExecutePass(RasterCommandBuffer cmd, PassData passData, RendererList rendererList)
	{
	}

	[Token(Token = "0x60002BD")]
	[Address(RVA = "0x2C223F0", Offset = "0x2C209F0", VA = "0x182C223F0", Slot = "11")]
	public override void RecordRenderGraph(RenderGraph renderGraph, ContextContainer frameData)
	{
	}
}
