using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering.PostProcessing;

[Token(Token = "0x2000015")]
[Preserve]
internal sealed class AutoExposureRenderer : PostProcessEffectRenderer<AutoExposure>
{
	[Token(Token = "0x4000036")]
	private const int k_NumEyes = 2;

	[Token(Token = "0x4000037")]
	private const int k_NumAutoExposureTextures = 2;

	[Token(Token = "0x4000038")]
	[FieldOffset(Offset = "0x20")]
	private readonly RenderTexture[][] m_AutoExposurePool;

	[Token(Token = "0x4000039")]
	[FieldOffset(Offset = "0x28")]
	private int[] m_AutoExposurePingPong;

	[Token(Token = "0x400003A")]
	[FieldOffset(Offset = "0x30")]
	private RenderTexture m_CurrentAutoExposure;

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x480EC10", Offset = "0x480EC10", VA = "0x480EC10")]
	public AutoExposureRenderer()
	{
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x480EDC0", Offset = "0x480EDC0", VA = "0x480EDC0")]
	private void CheckTexture(int eye, int id)
	{
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x480EFB0", Offset = "0x480EFB0", VA = "0x480EFB0", Slot = "8")]
	public override void Render(PostProcessRenderContext context)
	{
	}

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x480F8C0", Offset = "0x480F8C0", VA = "0x480F8C0", Slot = "7")]
	public override void Release()
	{
	}
}
