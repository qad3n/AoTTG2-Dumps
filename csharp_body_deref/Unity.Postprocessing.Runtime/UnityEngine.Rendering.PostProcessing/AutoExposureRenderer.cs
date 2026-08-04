// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.PostProcessing.AutoExposureRenderer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x4B33D00", Offset = "0x4B33D00", VA = "0x4B33D00")]
	public AutoExposureRenderer()
	{
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x4B33EB0", Offset = "0x4B33EB0", VA = "0x4B33EB0")]
	private void CheckTexture(int eye, int id)
	{
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x4B340A0", Offset = "0x4B340A0", VA = "0x4B340A0", Slot = "8")]
	public override void Render(PostProcessRenderContext context)
	{
	}

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x4B349B0", Offset = "0x4B349B0", VA = "0x4B349B0", Slot = "7")]
	public override void Release()
	{
	}
}
