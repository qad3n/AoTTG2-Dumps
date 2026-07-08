using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering.PostProcessing;

[Token(Token = "0x200002C")]
[Preserve]
internal sealed class GrainRenderer : PostProcessEffectRenderer<Grain>
{
	[Token(Token = "0x40000B5")]
	[FieldOffset(Offset = "0x20")]
	private RenderTexture m_GrainLookupRT;

	[Token(Token = "0x40000B6")]
	private const int k_SampleCount = 1024;

	[Token(Token = "0x40000B7")]
	[FieldOffset(Offset = "0x28")]
	private int m_SampleIndex;

	[Token(Token = "0x6000051")]
	[Address(RVA = "0x48179E0", Offset = "0x48179E0", VA = "0x48179E0", Slot = "8")]
	public override void Render(PostProcessRenderContext context)
	{
	}

	[Token(Token = "0x6000052")]
	[Address(RVA = "0x48181E0", Offset = "0x48181E0", VA = "0x48181E0")]
	private RenderTextureFormat GetLookupFormat()
	{
		return default(RenderTextureFormat);
	}

	[Token(Token = "0x6000053")]
	[Address(RVA = "0x4818230", Offset = "0x4818230", VA = "0x4818230", Slot = "7")]
	public override void Release()
	{
	}

	[Token(Token = "0x6000054")]
	[Address(RVA = "0x48182A0", Offset = "0x48182A0", VA = "0x48182A0")]
	public GrainRenderer()
	{
	}
}
