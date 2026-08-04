// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.PostProcessing.DepthOfFieldRenderer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering.PostProcessing;

[Token(Token = "0x2000026")]
[Preserve]
internal sealed class DepthOfFieldRenderer : PostProcessEffectRenderer<DepthOfField>
{
	[Token(Token = "0x2000027")]
	private enum Pass
	{
		[Token(Token = "0x40000A1")]
		CoCCalculation,
		[Token(Token = "0x40000A2")]
		CoCTemporalFilter,
		[Token(Token = "0x40000A3")]
		DownsampleAndPrefilter,
		[Token(Token = "0x40000A4")]
		BokehSmallKernel,
		[Token(Token = "0x40000A5")]
		BokehMediumKernel,
		[Token(Token = "0x40000A6")]
		BokehLargeKernel,
		[Token(Token = "0x40000A7")]
		BokehVeryLargeKernel,
		[Token(Token = "0x40000A8")]
		PostFilter,
		[Token(Token = "0x40000A9")]
		Combine,
		[Token(Token = "0x40000AA")]
		DebugOverlay
	}

	[Token(Token = "0x400009B")]
	private const int k_NumEyes = 2;

	[Token(Token = "0x400009C")]
	private const int k_NumCoCHistoryTextures = 2;

	[Token(Token = "0x400009D")]
	[FieldOffset(Offset = "0x20")]
	private readonly RenderTexture[][] m_CoCHistoryTextures;

	[Token(Token = "0x400009E")]
	[FieldOffset(Offset = "0x28")]
	private int[] m_HistoryPingPong;

	[Token(Token = "0x400009F")]
	private const float k_FilmHeight = 0.024f;

	[Token(Token = "0x6000041")]
	[Address(RVA = "0x4B3AC30", Offset = "0x4B3AC30", VA = "0x4B3AC30")]
	public DepthOfFieldRenderer()
	{
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x4B3ADE0", Offset = "0x4B3ADE0", VA = "0x4B3ADE0", Slot = "5")]
	public override DepthTextureMode GetCameraFlags()
	{
		return default(DepthTextureMode);
	}

	[Token(Token = "0x6000043")]
	[Address(RVA = "0x4B3ADF0", Offset = "0x4B3ADF0", VA = "0x4B3ADF0")]
	private RenderTextureFormat SelectFormat(RenderTextureFormat primary, RenderTextureFormat secondary)
	{
		return default(RenderTextureFormat);
	}

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x4B3AE70", Offset = "0x4B3AE70", VA = "0x4B3AE70")]
	private float CalculateMaxCoCRadius(int screenHeight)
	{
		return default(float);
	}

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x4B3AEE0", Offset = "0x4B3AEE0", VA = "0x4B3AEE0")]
	private RenderTexture CheckHistory(int eye, int id, PostProcessRenderContext context, RenderTextureFormat format)
	{
		return null;
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x4B3B130", Offset = "0x4B3B130", VA = "0x4B3B130", Slot = "8")]
	public override void Render(PostProcessRenderContext context)
	{
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x4B3BFF0", Offset = "0x4B3BFF0", VA = "0x4B3BFF0", Slot = "7")]
	public override void Release()
	{
	}
}
