using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering.PostProcessing;

[Token(Token = "0x2000021")]
[Preserve]
internal sealed class ColorGradingRenderer : PostProcessEffectRenderer<ColorGrading>
{
	[Token(Token = "0x2000022")]
	private enum Pass
	{
		[Token(Token = "0x400008F")]
		LutGenLDRFromScratch,
		[Token(Token = "0x4000090")]
		LutGenLDR,
		[Token(Token = "0x4000091")]
		LutGenHDR2D
	}

	[Token(Token = "0x4000087")]
	[FieldOffset(Offset = "0x20")]
	private Texture2D m_GradingCurves;

	[Token(Token = "0x4000088")]
	[FieldOffset(Offset = "0x28")]
	private readonly Color[] m_Pixels;

	[Token(Token = "0x4000089")]
	[FieldOffset(Offset = "0x30")]
	private RenderTexture m_InternalLdrLut;

	[Token(Token = "0x400008A")]
	[FieldOffset(Offset = "0x38")]
	private RenderTexture m_InternalLogLut;

	[Token(Token = "0x400008B")]
	private const int k_Lut2DSize = 32;

	[Token(Token = "0x400008C")]
	private const int k_Lut3DSize = 33;

	[Token(Token = "0x400008D")]
	[FieldOffset(Offset = "0x40")]
	private readonly HableCurve m_HableCurve;

	[Token(Token = "0x6000031")]
	[Address(RVA = "0x4812740", Offset = "0x4812740", VA = "0x4812740", Slot = "8")]
	public override void Render(PostProcessRenderContext context)
	{
	}

	[Token(Token = "0x6000032")]
	[Address(RVA = "0x4812880", Offset = "0x4812880", VA = "0x4812880")]
	private void RenderExternalPipeline3D(PostProcessRenderContext context)
	{
	}

	[Token(Token = "0x6000033")]
	[Address(RVA = "0x4812AD0", Offset = "0x4812AD0", VA = "0x4812AD0")]
	private void RenderHDRPipeline3D(PostProcessRenderContext context)
	{
	}

	[Token(Token = "0x6000034")]
	[Address(RVA = "0x48136F0", Offset = "0x48136F0", VA = "0x48136F0")]
	private void RenderHDRPipeline2D(PostProcessRenderContext context)
	{
	}

	[Token(Token = "0x6000035")]
	[Address(RVA = "0x4814360", Offset = "0x4814360", VA = "0x4814360")]
	private void RenderLDRPipeline2D(PostProcessRenderContext context)
	{
	}

	[Token(Token = "0x6000036")]
	[Address(RVA = "0x4814F30", Offset = "0x4814F30", VA = "0x4814F30")]
	private void CheckInternalLogLut()
	{
	}

	[Token(Token = "0x6000037")]
	[Address(RVA = "0x4815540", Offset = "0x4815540", VA = "0x4815540")]
	private void CheckInternalStripLut()
	{
	}

	[Token(Token = "0x6000038")]
	[Address(RVA = "0x4815100", Offset = "0x4815100", VA = "0x4815100")]
	private Texture2D GetCurveTexture(bool hdr)
	{
		return null;
	}

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x48157C0", Offset = "0x48157C0", VA = "0x48157C0")]
	private static bool IsRenderTextureFormatSupportedForLinearFiltering(RenderTextureFormat format)
	{
		return default(bool);
	}

	[Token(Token = "0x600003A")]
	[Address(RVA = "0x48156E0", Offset = "0x48156E0", VA = "0x48156E0")]
	private static RenderTextureFormat GetLutFormat()
	{
		return default(RenderTextureFormat);
	}

	[Token(Token = "0x600003B")]
	[Address(RVA = "0x48157A0", Offset = "0x48157A0", VA = "0x48157A0")]
	private static TextureFormat GetCurveFormat()
	{
		return default(TextureFormat);
	}

	[Token(Token = "0x600003C")]
	[Address(RVA = "0x4815820", Offset = "0x4815820", VA = "0x4815820", Slot = "7")]
	public override void Release()
	{
	}

	[Token(Token = "0x600003D")]
	[Address(RVA = "0x48158D0", Offset = "0x48158D0", VA = "0x48158D0")]
	public ColorGradingRenderer()
	{
	}
}
