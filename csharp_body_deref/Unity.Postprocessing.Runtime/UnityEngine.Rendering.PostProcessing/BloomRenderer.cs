using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering.PostProcessing;

[Token(Token = "0x2000017")]
[Preserve]
internal sealed class BloomRenderer : PostProcessEffectRenderer<Bloom>
{
	[Token(Token = "0x2000018")]
	private enum Pass
	{
		[Token(Token = "0x4000048")]
		Prefilter13,
		[Token(Token = "0x4000049")]
		Prefilter4,
		[Token(Token = "0x400004A")]
		Downsample13,
		[Token(Token = "0x400004B")]
		Downsample4,
		[Token(Token = "0x400004C")]
		UpsampleTent,
		[Token(Token = "0x400004D")]
		UpsampleBox,
		[Token(Token = "0x400004E")]
		DebugOverlayThreshold,
		[Token(Token = "0x400004F")]
		DebugOverlayTent,
		[Token(Token = "0x4000050")]
		DebugOverlayBox
	}

	[Token(Token = "0x2000019")]
	private struct Level
	{
		[Token(Token = "0x4000051")]
		[FieldOffset(Offset = "0x0")]
		internal int down;

		[Token(Token = "0x4000052")]
		[FieldOffset(Offset = "0x4")]
		internal int up;
	}

	[Token(Token = "0x4000045")]
	[FieldOffset(Offset = "0x20")]
	private Level[] m_Pyramid;

	[Token(Token = "0x4000046")]
	private const int k_MaxPyramidSize = 16;

	[Token(Token = "0x6000025")]
	[Address(RVA = "0x480FCA0", Offset = "0x480FCA0", VA = "0x480FCA0", Slot = "4")]
	public override void Init()
	{
	}

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x480FDC0", Offset = "0x480FDC0", VA = "0x480FDC0", Slot = "8")]
	public override void Render(PostProcessRenderContext context)
	{
	}

	[Token(Token = "0x6000027")]
	[Address(RVA = "0x4811080", Offset = "0x4811080", VA = "0x4811080")]
	public BloomRenderer()
	{
	}
}
