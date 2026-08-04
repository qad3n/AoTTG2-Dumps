// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.PostProcessing.ChromaticAberrationRenderer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x4B36300", Offset = "0x4B36300", VA = "0x4B36300", Slot = "8")]
	public override void Render(PostProcessRenderContext context)
	{
	}

	[Token(Token = "0x600002B")]
	[Address(RVA = "0x4B36630", Offset = "0x4B36630", VA = "0x4B36630", Slot = "7")]
	public override void Release()
	{
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x4B366A0", Offset = "0x4B366A0", VA = "0x4B366A0")]
	public ChromaticAberrationRenderer()
	{
	}
}
