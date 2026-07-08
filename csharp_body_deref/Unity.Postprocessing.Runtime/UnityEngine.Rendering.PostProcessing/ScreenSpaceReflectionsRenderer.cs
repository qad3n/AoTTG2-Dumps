using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering.PostProcessing;

[Token(Token = "0x200003C")]
[Preserve]
internal sealed class ScreenSpaceReflectionsRenderer : PostProcessEffectRenderer<ScreenSpaceReflections>
{
	[Token(Token = "0x200003D")]
	private class QualityPreset
	{
		[Token(Token = "0x4000106")]
		[FieldOffset(Offset = "0x10")]
		public int maximumIterationCount;

		[Token(Token = "0x4000107")]
		[FieldOffset(Offset = "0x14")]
		public float thickness;

		[Token(Token = "0x4000108")]
		[FieldOffset(Offset = "0x18")]
		public ScreenSpaceReflectionResolution downsampling;

		[Token(Token = "0x6000087")]
		[Address(RVA = "0x4820E50", Offset = "0x4820E50", VA = "0x4820E50")]
		public QualityPreset()
		{
		}
	}

	[Token(Token = "0x200003E")]
	private enum Pass
	{
		[Token(Token = "0x400010A")]
		Test,
		[Token(Token = "0x400010B")]
		Resolve,
		[Token(Token = "0x400010C")]
		Reproject,
		[Token(Token = "0x400010D")]
		Composite
	}

	[Token(Token = "0x4000102")]
	[FieldOffset(Offset = "0x20")]
	private RenderTexture m_Resolve;

	[Token(Token = "0x4000103")]
	[FieldOffset(Offset = "0x28")]
	private RenderTexture m_History;

	[Token(Token = "0x4000104")]
	[FieldOffset(Offset = "0x30")]
	private int[] m_MipIDs;

	[Token(Token = "0x4000105")]
	[FieldOffset(Offset = "0x38")]
	private readonly QualityPreset[] m_Presets;

	[Token(Token = "0x6000082")]
	[Address(RVA = "0x481EF10", Offset = "0x481EF10", VA = "0x481EF10", Slot = "5")]
	public override DepthTextureMode GetCameraFlags()
	{
		return default(DepthTextureMode);
	}

	[Token(Token = "0x6000083")]
	[Address(RVA = "0x481EF20", Offset = "0x481EF20", VA = "0x481EF20")]
	internal void CheckRT(ref RenderTexture rt, int width, int height, FilterMode filterMode, bool useMipMap)
	{
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x481F120", Offset = "0x481F120", VA = "0x481F120", Slot = "8")]
	public override void Render(PostProcessRenderContext context)
	{
	}

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x4820A50", Offset = "0x4820A50", VA = "0x4820A50", Slot = "7")]
	public override void Release()
	{
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x4820AE0", Offset = "0x4820AE0", VA = "0x4820AE0")]
	public ScreenSpaceReflectionsRenderer()
	{
	}
}
