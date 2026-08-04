// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.PostProcessing.ColorGradingRenderer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x4B37830", Offset = "0x4B37830", VA = "0x4B37830", Slot = "8")]
	public override void Render(PostProcessRenderContext context)
	{
	}

	[Token(Token = "0x6000032")]
	[Address(RVA = "0x4B37970", Offset = "0x4B37970", VA = "0x4B37970")]
	private void RenderExternalPipeline3D(PostProcessRenderContext context)
	{
	}

	[Token(Token = "0x6000033")]
	[Address(RVA = "0x4B37BC0", Offset = "0x4B37BC0", VA = "0x4B37BC0")]
	private void RenderHDRPipeline3D(PostProcessRenderContext context)
	{
	}

	[Token(Token = "0x6000034")]
	[Address(RVA = "0x4B387E0", Offset = "0x4B387E0", VA = "0x4B387E0")]
	private void RenderHDRPipeline2D(PostProcessRenderContext context)
	{
	}

	[Token(Token = "0x6000035")]
	[Address(RVA = "0x4B39450", Offset = "0x4B39450", VA = "0x4B39450")]
	private void RenderLDRPipeline2D(PostProcessRenderContext context)
	{
	}

	[Token(Token = "0x6000036")]
	[Address(RVA = "0x4B3A020", Offset = "0x4B3A020", VA = "0x4B3A020")]
	private void CheckInternalLogLut()
	{
	}

	[Token(Token = "0x6000037")]
	[Address(RVA = "0x4B3A630", Offset = "0x4B3A630", VA = "0x4B3A630")]
	private void CheckInternalStripLut()
	{
	}

	[Token(Token = "0x6000038")]
	[Address(RVA = "0x4B3A1F0", Offset = "0x4B3A1F0", VA = "0x4B3A1F0")]
	private Texture2D GetCurveTexture(bool hdr)
	{
		return null;
	}

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x4B3A8B0", Offset = "0x4B3A8B0", VA = "0x4B3A8B0")]
	private static bool IsRenderTextureFormatSupportedForLinearFiltering(RenderTextureFormat format)
	{
		return default(bool);
	}

	[Token(Token = "0x600003A")]
	[Address(RVA = "0x4B3A7D0", Offset = "0x4B3A7D0", VA = "0x4B3A7D0")]
	private static RenderTextureFormat GetLutFormat()
	{
		return default(RenderTextureFormat);
	}

	[Token(Token = "0x600003B")]
	[Address(RVA = "0x4B3A890", Offset = "0x4B3A890", VA = "0x4B3A890")]
	private static TextureFormat GetCurveFormat()
	{
		return default(TextureFormat);
	}

	[Token(Token = "0x600003C")]
	[Address(RVA = "0x4B3A910", Offset = "0x4B3A910", VA = "0x4B3A910", Slot = "7")]
	public override void Release()
	{
	}

	[Token(Token = "0x600003D")]
	[Address(RVA = "0x4B3A9C0", Offset = "0x4B3A9C0", VA = "0x4B3A9C0")]
	public ColorGradingRenderer()
	{
	}
}
