// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.BaseElementBuilder
// Update status: unchanged since the previous dump
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
	[Address(RVA = "0x6B7D500", Offset = "0x6B7C500", VA = "0x6B7D500")]
	public void Build(MeshGenerationContext mgc)
	{
	}

	[Token(Token = "0x6002919")]
	[Address(RVA = "0x6B7D530", Offset = "0x6B7C530", VA = "0x6B7D530")]
	private void BuildRenderTreeQuadElement(MeshGenerationContext mgc)
	{
	}

	[Token(Token = "0x600291A")]
	[Address(RVA = "0x6B7DBD0", Offset = "0x6B7CBD0", VA = "0x6B7DBD0")]
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
	[Address(RVA = "0x6B7E090", Offset = "0x6B7D090", VA = "0x6B7E090")]
	private void PushVisualElementClipping(MeshGenerationContext mgc)
	{
	}

	[Token(Token = "0x6002920")]
	[Address(RVA = "0x6B7E260", Offset = "0x6B7D260", VA = "0x6B7E260")]
	private static void PopVisualElementClipping(MeshGenerationContext mgc)
	{
	}

	[Token(Token = "0x6002921")]
	[Address(RVA = "0x6B7E140", Offset = "0x6B7D140", VA = "0x6B7E140")]
	private static void InvokeGenerateVisualContent(MeshGenerationContext mgc)
	{
	}

	[Token(Token = "0x6002922")]
	[Address(RVA = "0x6B7E2E0", Offset = "0x6B7D2E0", VA = "0x6B7E2E0")]
	protected BaseElementBuilder()
	{
	}
}
