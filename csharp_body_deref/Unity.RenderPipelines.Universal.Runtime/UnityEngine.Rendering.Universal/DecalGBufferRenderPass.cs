// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.DecalGBufferRenderPass
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Rendering.RenderGraphModule;
using UnityEngine.Rendering.Universal.Internal;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x2000095")]
internal class DecalGBufferRenderPass : ScriptableRenderPass
{
	[Token(Token = "0x2000096")]
	private class PassData
	{
		[Token(Token = "0x40002EE")]
		[FieldOffset(Offset = "0x10")]
		internal DecalDrawGBufferSystem drawSystem;

		[Token(Token = "0x40002EF")]
		[FieldOffset(Offset = "0x18")]
		internal DecalScreenSpaceSettings settings;

		[Token(Token = "0x40002F0")]
		[FieldOffset(Offset = "0x20")]
		internal bool decalLayers;

		[Token(Token = "0x40002F1")]
		[FieldOffset(Offset = "0x28")]
		internal UniversalCameraData cameraData;

		[Token(Token = "0x40002F2")]
		[FieldOffset(Offset = "0x30")]
		internal RendererListHandle rendererList;

		[Token(Token = "0x600036E")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public PassData()
		{
		}
	}

	[Token(Token = "0x40002E8")]
	[FieldOffset(Offset = "0x60")]
	private FilteringSettings m_FilteringSettings;

	[Token(Token = "0x40002E9")]
	[FieldOffset(Offset = "0x80")]
	private List<ShaderTagId> m_ShaderTagIdList;

	[Token(Token = "0x40002EA")]
	[FieldOffset(Offset = "0x88")]
	private DecalDrawGBufferSystem m_DrawSystem;

	[Token(Token = "0x40002EB")]
	[FieldOffset(Offset = "0x90")]
	private DecalScreenSpaceSettings m_Settings;

	[Token(Token = "0x40002EC")]
	[FieldOffset(Offset = "0x98")]
	private DeferredLights m_DeferredLights;

	[Token(Token = "0x40002ED")]
	[FieldOffset(Offset = "0xA0")]
	private bool m_DecalLayers;

	[Token(Token = "0x6000368")]
	[Address(RVA = "0x2C24030", Offset = "0x2C22630", VA = "0x182C24030")]
	public DecalGBufferRenderPass(DecalScreenSpaceSettings settings, DecalDrawGBufferSystem drawSystem, bool decalLayers)
	{
	}

	[Token(Token = "0x6000369")]
	[Address(RVA = "0x58A900", Offset = "0x588F00", VA = "0x18058A900")]
	internal void Setup(DeferredLights deferredLights)
	{
	}

	[Token(Token = "0x600036A")]
	[Address(RVA = "0x2C230F0", Offset = "0x2C216F0", VA = "0x182C230F0")]
	private void InitPassData(UniversalCameraData cameraData, ref PassData passData)
	{
	}

	[Token(Token = "0x600036B")]
	[Address(RVA = "0x2C22F70", Offset = "0x2C21570", VA = "0x182C22F70")]
	private static void ExecutePass(RasterCommandBuffer cmd, PassData passData, RendererList rendererList)
	{
	}

	[Token(Token = "0x600036C")]
	[Address(RVA = "0x2C23280", Offset = "0x2C21880", VA = "0x182C23280", Slot = "11")]
	public override void RecordRenderGraph(RenderGraph renderGraph, ContextContainer frameData)
	{
	}

	[Token(Token = "0x600036D")]
	[Address(RVA = "0x2C23180", Offset = "0x2C21780", VA = "0x182C23180", Slot = "10")]
	public override void OnCameraCleanup(CommandBuffer cmd)
	{
	}
}
