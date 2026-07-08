using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering.PostProcessing;

[Token(Token = "0x200002E")]
[Preserve]
internal sealed class LensDistortionRenderer : PostProcessEffectRenderer<LensDistortion>
{
	[Token(Token = "0x6000057")]
	[Address(RVA = "0x4818580", Offset = "0x4818580", VA = "0x4818580", Slot = "8")]
	public override void Render(PostProcessRenderContext context)
	{
	}

	[Token(Token = "0x6000058")]
	[Address(RVA = "0x4818800", Offset = "0x4818800", VA = "0x4818800")]
	public LensDistortionRenderer()
	{
	}
}
