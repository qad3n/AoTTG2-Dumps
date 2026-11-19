// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.DecalForwardEmissivePass
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x6610B00", Offset = "0x660FB00", VA = "0x6610B00")]
		public PassData()
		{
		}
	}

	[Token(Token = "0x4000225")]
	[FieldOffset(Offset = "0x5C")]
	private FilteringSettings m_FilteringSettings;

	[Token(Token = "0x4000226")]
	[FieldOffset(Offset = "0x80")]
	private List<ShaderTagId> m_ShaderTagIdList;

	[Token(Token = "0x4000227")]
	[FieldOffset(Offset = "0x88")]
	private DecalDrawFowardEmissiveSystem m_DrawSystem;

	[Token(Token = "0x60002B9")]
	[Address(RVA = "0x6610020", Offset = "0x660F020", VA = "0x6610020")]
	public DecalForwardEmissivePass(DecalDrawFowardEmissiveSystem drawSystem)
	{
	}

	[Token(Token = "0x60002BA")]
	[Address(RVA = "0x6610310", Offset = "0x660F310", VA = "0x6610310")]
	private void InitPassData(ref PassData passData)
	{
	}

	[Token(Token = "0x60002BB")]
	[Address(RVA = "0x6610340", Offset = "0x660F340", VA = "0x6610340")]
	private RendererListParams InitRendererListParams(UniversalRenderingData renderingData, UniversalCameraData cameraData, UniversalLightData lightData)
	{
		return default(RendererListParams);
	}

	[Token(Token = "0x60002BC")]
	[Address(RVA = "0x6610480", Offset = "0x660F480", VA = "0x6610480")]
	private static void ExecutePass(RasterCommandBuffer cmd, PassData passData, RendererList rendererList)
	{
	}

	[Token(Token = "0x60002BD")]
	[Address(RVA = "0x66104B0", Offset = "0x660F4B0", VA = "0x66104B0", Slot = "11")]
	public override void RecordRenderGraph(RenderGraph renderGraph, ContextContainer frameData)
	{
	}
}
