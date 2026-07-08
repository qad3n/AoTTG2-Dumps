using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering.PostProcessing;

[Token(Token = "0x2000011")]
[Preserve]
internal sealed class AmbientOcclusionRenderer : PostProcessEffectRenderer<AmbientOcclusion>
{
	[Token(Token = "0x400002B")]
	[FieldOffset(Offset = "0x20")]
	private IAmbientOcclusionMethod[] m_Methods;

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x480DE00", Offset = "0x480DE00", VA = "0x480DE00", Slot = "4")]
	public override void Init()
	{
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x480E440", Offset = "0x480E440", VA = "0x480E440")]
	public bool IsAmbientOnly(PostProcessRenderContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x480E4C0", Offset = "0x480E4C0", VA = "0x480E4C0")]
	public IAmbientOcclusionMethod Get()
	{
		return null;
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x480E520", Offset = "0x480E520", VA = "0x480E520", Slot = "5")]
	public override DepthTextureMode GetCameraFlags()
	{
		return default(DepthTextureMode);
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x480E640", Offset = "0x480E640", VA = "0x480E640", Slot = "7")]
	public override void Release()
	{
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x480E760", Offset = "0x480E760", VA = "0x480E760")]
	public ScalableAO GetScalableAO()
	{
		return null;
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x480E7C0", Offset = "0x480E7C0", VA = "0x480E7C0")]
	public MultiScaleVO GetMultiScaleVO()
	{
		return null;
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x480E820", Offset = "0x480E820", VA = "0x480E820", Slot = "8")]
	public override void Render(PostProcessRenderContext context)
	{
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x480E830", Offset = "0x480E830", VA = "0x480E830")]
	public AmbientOcclusionRenderer()
	{
	}
}
