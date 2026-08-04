// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.PostProcessing.MotionBlurRenderer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering.PostProcessing;

[Token(Token = "0x2000030")]
[Preserve]
internal sealed class MotionBlurRenderer : PostProcessEffectRenderer<MotionBlur>
{
	[Token(Token = "0x2000031")]
	private enum Pass
	{
		[Token(Token = "0x40000C1")]
		VelocitySetup,
		[Token(Token = "0x40000C2")]
		TileMax1,
		[Token(Token = "0x40000C3")]
		TileMax2,
		[Token(Token = "0x40000C4")]
		TileMaxV,
		[Token(Token = "0x40000C5")]
		NeighborMax,
		[Token(Token = "0x40000C6")]
		Reconstruction
	}

	[Token(Token = "0x600005B")]
	[Address(RVA = "0x4B3DAA0", Offset = "0x4B3DAA0", VA = "0x4B3DAA0", Slot = "5")]
	public override DepthTextureMode GetCameraFlags()
	{
		return default(DepthTextureMode);
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x4B3DAB0", Offset = "0x4B3DAB0", VA = "0x4B3DAB0")]
	private void CreateTemporaryRT(PostProcessRenderContext context, int nameID, int width, int height, RenderTextureFormat RTFormat)
	{
	}

	[Token(Token = "0x600005D")]
	[Address(RVA = "0x4B3DBE0", Offset = "0x4B3DBE0", VA = "0x4B3DBE0", Slot = "8")]
	public override void Render(PostProcessRenderContext context)
	{
	}

	[Token(Token = "0x600005E")]
	[Address(RVA = "0x4B3F000", Offset = "0x4B3F000", VA = "0x4B3F000")]
	public MotionBlurRenderer()
	{
	}
}
