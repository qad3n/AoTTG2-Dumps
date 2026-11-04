// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.DebugRenderSetup
// Update status: NEW in this game update
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
		[Address(RVA = "0x2C048F0", Offset = "0x2C02EF0", VA = "0x182C048F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000B8")]
	private DebugDisplaySettingsRendering RenderingSettings
	{
		[Token(Token = "0x600027A")]
		[Address(RVA = "0x2C04920", Offset = "0x2C02F20", VA = "0x182C04920")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000B9")]
	private DebugDisplaySettingsLighting LightingSettings
	{
		[Token(Token = "0x600027B")]
		[Address(RVA = "0x2C048C0", Offset = "0x2C02EC0", VA = "0x182C048C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600027C")]
	[Address(RVA = "0x2C03BC0", Offset = "0x2C021C0", VA = "0x182C03BC0")]
	internal void Begin(RasterCommandBuffer cmd)
	{
	}

	[Token(Token = "0x600027D")]
	[Address(RVA = "0x2C043F0", Offset = "0x2C029F0", VA = "0x182C043F0")]
	internal void End(RasterCommandBuffer cmd)
	{
	}

	[Token(Token = "0x600027E")]
	[Address(RVA = "0x2C04870", Offset = "0x2C02E70", VA = "0x182C04870")]
	internal DebugRenderSetup(DebugHandler debugHandler, int index, FilteringSettings filteringSettings)
	{
	}

	[Token(Token = "0x600027F")]
	[Address(RVA = "0x2C03E80", Offset = "0x2C02480", VA = "0x182C03E80")]
	internal void CreateRendererList(ScriptableRenderContext context, ref CullingResults cullResults, ref DrawingSettings drawingSettings, ref FilteringSettings filteringSettings, ref RenderStateBlock renderStateBlock, ref RendererList rendererList)
	{
	}

	[Token(Token = "0x6000280")]
	[Address(RVA = "0x2C040F0", Offset = "0x2C026F0", VA = "0x182C040F0")]
	internal void CreateRendererList(RenderGraph renderGraph, ref CullingResults cullResults, ref DrawingSettings drawingSettings, ref FilteringSettings filteringSettings, ref RenderStateBlock renderStateBlock, ref RendererListHandle rendererListHdl)
	{
	}

	[Token(Token = "0x6000281")]
	[Address(RVA = "0x2C04360", Offset = "0x2C02960", VA = "0x182C04360")]
	internal void DrawWithRendererList(RasterCommandBuffer cmd, ref RendererList rendererList)
	{
	}

	[Token(Token = "0x6000282")]
	[Address(RVA = "0x2C03C30", Offset = "0x2C02230", VA = "0x182C03C30")]
	internal DrawingSettings CreateDrawingSettings(DrawingSettings drawingSettings)
	{
		return default(DrawingSettings);
	}

	[Token(Token = "0x6000283")]
	[Address(RVA = "0x2C04460", Offset = "0x2C02A60", VA = "0x182C04460")]
	internal RenderStateBlock GetRenderStateBlock(RenderStateBlock renderStateBlock)
	{
		return default(RenderStateBlock);
	}

	[Token(Token = "0x6000284")]
	[Address(RVA = "0x172E4A0", Offset = "0x172CAA0", VA = "0x18172E4A0")]
	internal int GetIndex()
	{
		return default(int);
	}

	[Token(Token = "0x6000285")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "4")]
	public void Dispose()
	{
	}
}
