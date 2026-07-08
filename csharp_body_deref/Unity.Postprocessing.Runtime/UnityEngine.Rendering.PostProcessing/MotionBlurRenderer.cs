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
	[Address(RVA = "0x48189B0", Offset = "0x48189B0", VA = "0x48189B0", Slot = "5")]
	public override DepthTextureMode GetCameraFlags()
	{
		return default(DepthTextureMode);
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x48189C0", Offset = "0x48189C0", VA = "0x48189C0")]
	private void CreateTemporaryRT(PostProcessRenderContext context, int nameID, int width, int height, RenderTextureFormat RTFormat)
	{
	}

	[Token(Token = "0x600005D")]
	[Address(RVA = "0x4818AF0", Offset = "0x4818AF0", VA = "0x4818AF0", Slot = "8")]
	public override void Render(PostProcessRenderContext context)
	{
	}

	[Token(Token = "0x600005E")]
	[Address(RVA = "0x4819F10", Offset = "0x4819F10", VA = "0x4819F10")]
	public MotionBlurRenderer()
	{
	}
}
