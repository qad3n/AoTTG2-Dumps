// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.Internal.ColorGradingLutPass
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Experimental.Rendering;
using UnityEngine.Rendering.RenderGraphModule;

namespace UnityEngine.Rendering.Universal.Internal;

[Token(Token = "0x200020C")]
public class ColorGradingLutPass : ScriptableRenderPass
{
	[Token(Token = "0x200020D")]
	private class PassData
	{
		[Token(Token = "0x4000CB8")]
		[FieldOffset(Offset = "0x10")]
		internal UniversalCameraData cameraData;

		[Token(Token = "0x4000CB9")]
		[FieldOffset(Offset = "0x18")]
		internal UniversalPostProcessingData postProcessingData;

		[Token(Token = "0x4000CBA")]
		[FieldOffset(Offset = "0x20")]
		internal Material lutBuilderLdr;

		[Token(Token = "0x4000CBB")]
		[FieldOffset(Offset = "0x28")]
		internal Material lutBuilderHdr;

		[Token(Token = "0x4000CBC")]
		[FieldOffset(Offset = "0x30")]
		internal bool allowColorGradingACESHDR;

		[Token(Token = "0x4000CBD")]
		[FieldOffset(Offset = "0x34")]
		internal TextureHandle internalLut;

		[Token(Token = "0x6000B70")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public PassData()
		{
		}
	}

	[Token(Token = "0x200020E")]
	private static class ShaderConstants
	{
		[Token(Token = "0x4000CBE")]
		[FieldOffset(Offset = "0x0")]
		public static readonly int _Lut_Params;

		[Token(Token = "0x4000CBF")]
		[FieldOffset(Offset = "0x4")]
		public static readonly int _ColorBalance;

		[Token(Token = "0x4000CC0")]
		[FieldOffset(Offset = "0x8")]
		public static readonly int _ColorFilter;

		[Token(Token = "0x4000CC1")]
		[FieldOffset(Offset = "0xC")]
		public static readonly int _ChannelMixerRed;

		[Token(Token = "0x4000CC2")]
		[FieldOffset(Offset = "0x10")]
		public static readonly int _ChannelMixerGreen;

		[Token(Token = "0x4000CC3")]
		[FieldOffset(Offset = "0x14")]
		public static readonly int _ChannelMixerBlue;

		[Token(Token = "0x4000CC4")]
		[FieldOffset(Offset = "0x18")]
		public static readonly int _HueSatCon;

		[Token(Token = "0x4000CC5")]
		[FieldOffset(Offset = "0x1C")]
		public static readonly int _Lift;

		[Token(Token = "0x4000CC6")]
		[FieldOffset(Offset = "0x20")]
		public static readonly int _Gamma;

		[Token(Token = "0x4000CC7")]
		[FieldOffset(Offset = "0x24")]
		public static readonly int _Gain;

		[Token(Token = "0x4000CC8")]
		[FieldOffset(Offset = "0x28")]
		public static readonly int _Shadows;

		[Token(Token = "0x4000CC9")]
		[FieldOffset(Offset = "0x2C")]
		public static readonly int _Midtones;

		[Token(Token = "0x4000CCA")]
		[FieldOffset(Offset = "0x30")]
		public static readonly int _Highlights;

		[Token(Token = "0x4000CCB")]
		[FieldOffset(Offset = "0x34")]
		public static readonly int _ShaHiLimits;

		[Token(Token = "0x4000CCC")]
		[FieldOffset(Offset = "0x38")]
		public static readonly int _SplitShadows;

		[Token(Token = "0x4000CCD")]
		[FieldOffset(Offset = "0x3C")]
		public static readonly int _SplitHighlights;

		[Token(Token = "0x4000CCE")]
		[FieldOffset(Offset = "0x40")]
		public static readonly int _CurveMaster;

		[Token(Token = "0x4000CCF")]
		[FieldOffset(Offset = "0x44")]
		public static readonly int _CurveRed;

		[Token(Token = "0x4000CD0")]
		[FieldOffset(Offset = "0x48")]
		public static readonly int _CurveGreen;

		[Token(Token = "0x4000CD1")]
		[FieldOffset(Offset = "0x4C")]
		public static readonly int _CurveBlue;

		[Token(Token = "0x4000CD2")]
		[FieldOffset(Offset = "0x50")]
		public static readonly int _CurveHueVsHue;

		[Token(Token = "0x4000CD3")]
		[FieldOffset(Offset = "0x54")]
		public static readonly int _CurveHueVsSat;

		[Token(Token = "0x4000CD4")]
		[FieldOffset(Offset = "0x58")]
		public static readonly int _CurveLumVsSat;

		[Token(Token = "0x4000CD5")]
		[FieldOffset(Offset = "0x5C")]
		public static readonly int _CurveSatVsSat;
	}

	[Token(Token = "0x4000CB3")]
	[FieldOffset(Offset = "0x60")]
	private readonly Material m_LutBuilderLdr;

	[Token(Token = "0x4000CB4")]
	[FieldOffset(Offset = "0x68")]
	private readonly Material m_LutBuilderHdr;

	[Token(Token = "0x4000CB5")]
	[FieldOffset(Offset = "0x70")]
	internal readonly GraphicsFormat m_HdrLutFormat;

	[Token(Token = "0x4000CB6")]
	[FieldOffset(Offset = "0x74")]
	internal readonly GraphicsFormat m_LdrLutFormat;

	[Token(Token = "0x4000CB7")]
	[FieldOffset(Offset = "0x78")]
	private bool m_AllowColorGradingACESHDR;

	[Token(Token = "0x6000B66")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "9")]
	[Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
	public override void Execute(ScriptableRenderContext context, ref RenderingData renderingData)
	{
	}

	[Token(Token = "0x6000B67")]
	[Address(RVA = "0x2CB9A00", Offset = "0x2CB8000", VA = "0x182CB9A00")]
	public ColorGradingLutPass(RenderPassEvent evt, PostProcessData data)
	{
	}

	[Token(Token = "0x6000B68")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	public void Setup(in RTHandle internalLut)
	{
	}

	[Token(Token = "0x6000B69")]
	[Address(RVA = "0x2CB7D80", Offset = "0x2CB6380", VA = "0x182CB7D80")]
	public void ConfigureDescriptor(in PostProcessingData postProcessingData, out RenderTextureDescriptor descriptor, out FilterMode filterMode)
	{
	}

	[Token(Token = "0x6000B6A")]
	[Address(RVA = "0x2CB7CD0", Offset = "0x2CB62D0", VA = "0x182CB7CD0")]
	public void ConfigureDescriptor(in UniversalPostProcessingData postProcessingData, out RenderTextureDescriptor descriptor, out FilterMode filterMode)
	{
	}

	[Token(Token = "0x6000B6B")]
	[Address(RVA = "0x2CB7E60", Offset = "0x2CB6460", VA = "0x182CB7E60")]
	private static void ExecutePass(RasterCommandBuffer cmd, PassData passData, RTHandle internalLutTarget)
	{
	}

	[Token(Token = "0x6000B6C")]
	[Address(RVA = "0x2CB9380", Offset = "0x2CB7980", VA = "0x182CB9380")]
	internal void Render(RenderGraph renderGraph, ContextContainer frameData, out TextureHandle internalColorLut)
	{
	}

	[Token(Token = "0x6000B6D")]
	[Address(RVA = "0x2CB92D0", Offset = "0x2CB78D0", VA = "0x182CB92D0", Slot = "11")]
	public override void RecordRenderGraph(RenderGraph renderGraph, ContextContainer frameData)
	{
	}

	[Token(Token = "0x6000B6E")]
	[Address(RVA = "0x2CB7C60", Offset = "0x2CB6260", VA = "0x182CB7C60")]
	public void Cleanup()
	{
	}
}
