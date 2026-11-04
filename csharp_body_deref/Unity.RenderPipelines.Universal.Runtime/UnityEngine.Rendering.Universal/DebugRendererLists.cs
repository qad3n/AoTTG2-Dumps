// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.DebugRendererLists
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Rendering.RenderGraphModule;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x2000069")]
internal class DebugRendererLists
{
	[Token(Token = "0x4000203")]
	[FieldOffset(Offset = "0x10")]
	private readonly DebugHandler m_DebugHandler;

	[Token(Token = "0x4000204")]
	[FieldOffset(Offset = "0x18")]
	private readonly FilteringSettings m_FilteringSettings;

	[Token(Token = "0x4000205")]
	[FieldOffset(Offset = "0x38")]
	private List<DebugRenderSetup> m_DebugRenderSetups;

	[Token(Token = "0x4000206")]
	[FieldOffset(Offset = "0x40")]
	private List<RendererList> m_ActiveDebugRendererList;

	[Token(Token = "0x4000207")]
	[FieldOffset(Offset = "0x48")]
	private List<RendererListHandle> m_ActiveDebugRendererListHdl;

	[Token(Token = "0x6000272")]
	[Address(RVA = "0x2C05EC0", Offset = "0x2C044C0", VA = "0x182C05EC0")]
	public DebugRendererLists(DebugHandler debugHandler, FilteringSettings filteringSettings)
	{
	}

	[Token(Token = "0x6000273")]
	[Address(RVA = "0x2C04950", Offset = "0x2C02F50", VA = "0x182C04950")]
	private void CreateDebugRenderSetups(FilteringSettings filteringSettings)
	{
	}

	[Token(Token = "0x6000274")]
	[Address(RVA = "0x2C05770", Offset = "0x2C03D70", VA = "0x182C05770")]
	private void DisposeDebugRenderLists()
	{
	}

	[Token(Token = "0x6000275")]
	[Address(RVA = "0x2C05120", Offset = "0x2C03720", VA = "0x182C05120")]
	internal void CreateRendererListsWithDebugRenderState(ScriptableRenderContext context, ref CullingResults cullResults, ref DrawingSettings drawingSettings, ref FilteringSettings filteringSettings, ref RenderStateBlock renderStateBlock)
	{
	}

	[Token(Token = "0x6000276")]
	[Address(RVA = "0x2C04AD0", Offset = "0x2C030D0", VA = "0x182C04AD0")]
	internal void CreateRendererListsWithDebugRenderState(RenderGraph renderGraph, ref CullingResults cullResults, ref DrawingSettings drawingSettings, ref FilteringSettings filteringSettings, ref RenderStateBlock renderStateBlock)
	{
	}

	[Token(Token = "0x6000277")]
	[Address(RVA = "0x2C05CF0", Offset = "0x2C042F0", VA = "0x182C05CF0")]
	internal void PrepareRendererListForRasterPass(IRasterRenderGraphBuilder builder)
	{
	}

	[Token(Token = "0x6000278")]
	[Address(RVA = "0x2C05910", Offset = "0x2C03F10", VA = "0x182C05910")]
	internal void DrawWithRendererList(RasterCommandBuffer cmd)
	{
	}
}
