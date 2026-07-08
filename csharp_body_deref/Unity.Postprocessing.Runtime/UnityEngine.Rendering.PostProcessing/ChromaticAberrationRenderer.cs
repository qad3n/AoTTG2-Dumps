using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering.PostProcessing;

[Token(Token = "0x200001B")]
[Preserve]
internal sealed class ChromaticAberrationRenderer : PostProcessEffectRenderer<ChromaticAberration>
{
	[Token(Token = "0x4000056")]
	[FieldOffset(Offset = "0x20")]
	private Texture2D m_InternalSpectralLut;

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x4811210", Offset = "0x4811210", VA = "0x4811210", Slot = "8")]
	public override void Render(PostProcessRenderContext context)
	{
	}

	[Token(Token = "0x600002B")]
	[Address(RVA = "0x4811540", Offset = "0x4811540", VA = "0x4811540", Slot = "7")]
	public override void Release()
	{
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x48115B0", Offset = "0x48115B0", VA = "0x48115B0")]
	public ChromaticAberrationRenderer()
	{
	}
}
