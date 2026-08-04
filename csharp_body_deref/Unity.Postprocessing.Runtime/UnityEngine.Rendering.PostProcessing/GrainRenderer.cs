// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.PostProcessing.GrainRenderer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x4B3CAD0", Offset = "0x4B3CAD0", VA = "0x4B3CAD0", Slot = "8")]
	public override void Render(PostProcessRenderContext context)
	{
	}

	[Token(Token = "0x6000052")]
	[Address(RVA = "0x4B3D2D0", Offset = "0x4B3D2D0", VA = "0x4B3D2D0")]
	private RenderTextureFormat GetLookupFormat()
	{
		return default(RenderTextureFormat);
	}

	[Token(Token = "0x6000053")]
	[Address(RVA = "0x4B3D320", Offset = "0x4B3D320", VA = "0x4B3D320", Slot = "7")]
	public override void Release()
	{
	}

	[Token(Token = "0x6000054")]
	[Address(RVA = "0x4B3D390", Offset = "0x4B3D390", VA = "0x4B3D390")]
	public GrainRenderer()
	{
	}
}
