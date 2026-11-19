// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.DebugRenderSetup
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Rendering.RenderGraphModule;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x200006A")]
internal class DebugRenderSetup : IDisposable
{
	[Token(Token = "0x4000208")]
	[FieldOffset(Offset = "0x10")]
	private readonly DebugHandler m_DebugHandler;

	[Token(Token = "0x4000209")]
	[FieldOffset(Offset = "0x18")]
	private readonly FilteringSettings m_FilteringSettings;

	[Token(Token = "0x400020A")]
	[FieldOffset(Offset = "0x38")]
	private readonly int m_Index;

	[Token(Token = "0x170000B7")]
	private DebugDisplaySettingsMaterial MaterialSettings
	{
		[Token(Token = "0x6000279")]
		[Address(RVA = "0x660BD10", Offset = "0x660AD10", VA = "0x660BD10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000B8")]
	private DebugDisplaySettingsRendering RenderingSettings
	{
		[Token(Token = "0x600027A")]
		[Address(RVA = "0x660BD40", Offset = "0x660AD40", VA = "0x660BD40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000B9")]
	private DebugDisplaySettingsLighting LightingSettings
	{
		[Token(Token = "0x600027B")]
		[Address(RVA = "0x660BD70", Offset = "0x660AD70", VA = "0x660BD70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600027C")]
	[Address(RVA = "0x660BBE0", Offset = "0x660ABE0", VA = "0x660BBE0")]
	internal void Begin(RasterCommandBuffer cmd)
	{
	}

	[Token(Token = "0x600027D")]
	[Address(RVA = "0x660BCC0", Offset = "0x660ACC0", VA = "0x660BCC0")]
	internal void End(RasterCommandBuffer cmd)
	{
	}

	[Token(Token = "0x600027E")]
	[Address(RVA = "0x660B020", Offset = "0x660A020", VA = "0x660B020")]
	internal DebugRenderSetup(DebugHandler debugHandler, int index, FilteringSettings filteringSettings)
	{
	}

	[Token(Token = "0x600027F")]
	[Address(RVA = "0x660BDA0", Offset = "0x660ADA0", VA = "0x660BDA0")]
	internal void CreateRendererList(ScriptableRenderContext context, ref CullingResults cullResults, ref DrawingSettings drawingSettings, ref FilteringSettings filteringSettings, ref RenderStateBlock renderStateBlock, ref RendererList rendererList)
	{
	}

	[Token(Token = "0x6000280")]
	[Address(RVA = "0x660BF50", Offset = "0x660AF50", VA = "0x660BF50")]
	internal void CreateRendererList(RenderGraph renderGraph, ref CullingResults cullResults, ref DrawingSettings drawingSettings, ref FilteringSettings filteringSettings, ref RenderStateBlock renderStateBlock, ref RendererListHandle rendererListHdl)
	{
	}

	[Token(Token = "0x6000281")]
	[Address(RVA = "0x660BC40", Offset = "0x660AC40", VA = "0x660BC40")]
	internal void DrawWithRendererList(RasterCommandBuffer cmd, ref RendererList rendererList)
	{
	}

	[Token(Token = "0x6000282")]
	[Address(RVA = "0x660B220", Offset = "0x660A220", VA = "0x660B220")]
	internal DrawingSettings CreateDrawingSettings(DrawingSettings drawingSettings)
	{
		return default(DrawingSettings);
	}

	[Token(Token = "0x6000283")]
	[Address(RVA = "0x660B300", Offset = "0x660A300", VA = "0x660B300")]
	internal RenderStateBlock GetRenderStateBlock(RenderStateBlock renderStateBlock)
	{
		return default(RenderStateBlock);
	}

	[Token(Token = "0x6000284")]
	[Address(RVA = "0x660C100", Offset = "0x660B100", VA = "0x660C100")]
	internal int GetIndex()
	{
		return default(int);
	}

	[Token(Token = "0x6000285")]
	[Address(RVA = "0x660B210", Offset = "0x660A210", VA = "0x660B210", Slot = "4")]
	public void Dispose()
	{
	}
}
