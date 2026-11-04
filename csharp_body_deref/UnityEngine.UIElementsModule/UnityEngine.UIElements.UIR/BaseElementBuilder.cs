// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.BaseElementBuilder
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x2000578")]
internal abstract class BaseElementBuilder
{
	[Token(Token = "0x6002917")]
	public abstract bool RequiresStencilMask(VisualElement ve);

	[Token(Token = "0x6002918")]
	[Address(RVA = "0x3177630", Offset = "0x3175C30", VA = "0x183177630")]
	public void Build(MeshGenerationContext mgc)
	{
	}

	[Token(Token = "0x6002919")]
	[Address(RVA = "0x3176820", Offset = "0x3174E20", VA = "0x183176820")]
	private void BuildRenderTreeQuadElement(MeshGenerationContext mgc)
	{
	}

	[Token(Token = "0x600291A")]
	[Address(RVA = "0x3176EA0", Offset = "0x31754A0", VA = "0x183176EA0")]
	private void BuildStandardElement(MeshGenerationContext mgc)
	{
	}

	[Token(Token = "0x600291B")]
	protected abstract void DrawVisualElementBackground(MeshGenerationContext mgc);

	[Token(Token = "0x600291C")]
	protected abstract void DrawVisualElementBorder(MeshGenerationContext mgc);

	[Token(Token = "0x600291D")]
	protected abstract void DrawVisualElementStencilMask(MeshGenerationContext mgc);

	[Token(Token = "0x600291E")]
	public abstract void ScheduleMeshGenerationJobs(MeshGenerationContext mgc);

	[Token(Token = "0x600291F")]
	[Address(RVA = "0x3177870", Offset = "0x3175E70", VA = "0x183177870")]
	private void PushVisualElementClipping(MeshGenerationContext mgc)
	{
	}

	[Token(Token = "0x6002920")]
	[Address(RVA = "0x3177770", Offset = "0x3175D70", VA = "0x183177770")]
	private static void PopVisualElementClipping(MeshGenerationContext mgc)
	{
	}

	[Token(Token = "0x6002921")]
	[Address(RVA = "0x3177670", Offset = "0x3175C70", VA = "0x183177670")]
	private static void InvokeGenerateVisualContent(MeshGenerationContext mgc)
	{
	}

	[Token(Token = "0x6002922")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected BaseElementBuilder()
	{
	}
}
