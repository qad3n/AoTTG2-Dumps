// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.PostProcessing.ScreenSpaceReflectionsRenderer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4B45F40", Offset = "0x4B45F40", VA = "0x4B45F40")]
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
	[Address(RVA = "0x4B44000", Offset = "0x4B44000", VA = "0x4B44000", Slot = "5")]
	public override DepthTextureMode GetCameraFlags()
	{
		return default(DepthTextureMode);
	}

	[Token(Token = "0x6000083")]
	[Address(RVA = "0x4B44010", Offset = "0x4B44010", VA = "0x4B44010")]
	internal void CheckRT(ref RenderTexture rt, int width, int height, FilterMode filterMode, bool useMipMap)
	{
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x4B44210", Offset = "0x4B44210", VA = "0x4B44210", Slot = "8")]
	public override void Render(PostProcessRenderContext context)
	{
	}

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x4B45B40", Offset = "0x4B45B40", VA = "0x4B45B40", Slot = "7")]
	public override void Release()
	{
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x4B45BD0", Offset = "0x4B45BD0", VA = "0x4B45BD0")]
	public ScreenSpaceReflectionsRenderer()
	{
	}
}
