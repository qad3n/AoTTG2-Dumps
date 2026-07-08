using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x2000496")]
internal abstract class BaseElementBuilder
{
	[Token(Token = "0x6001C7B")]
	public abstract bool RequiresStencilMask(VisualElement ve);

	[Token(Token = "0x6001C7C")]
	[Address(RVA = "0x4C5B190", Offset = "0x4C5B190", VA = "0x4C5B190")]
	public void Build(MeshGenerationContext mgc)
	{
	}

	[Token(Token = "0x6001C7D")]
	protected abstract void DrawVisualElementBackground(MeshGenerationContext mgc);

	[Token(Token = "0x6001C7E")]
	protected abstract void DrawVisualElementBorder(MeshGenerationContext mgc);

	[Token(Token = "0x6001C7F")]
	protected abstract void DrawVisualElementStencilMask(MeshGenerationContext mgc);

	[Token(Token = "0x6001C80")]
	[Address(RVA = "0x4C5B6A0", Offset = "0x4C5B6A0", VA = "0x4C5B6A0")]
	private void PushVisualElementClipping(MeshGenerationContext mgc)
	{
	}

	[Token(Token = "0x6001C81")]
	[Address(RVA = "0x4C5BA60", Offset = "0x4C5BA60", VA = "0x4C5BA60")]
	private static void PopVisualElementClipping(MeshGenerationContext mgc)
	{
	}

	[Token(Token = "0x6001C82")]
	[Address(RVA = "0x4C5B950", Offset = "0x4C5B950", VA = "0x4C5B950")]
	private static void InvokeGenerateVisualContent(MeshGenerationContext mgc)
	{
	}

	[Token(Token = "0x6001C83")]
	[Address(RVA = "0x4C5BC40", Offset = "0x4C5BC40", VA = "0x4C5BC40")]
	protected BaseElementBuilder()
	{
	}
}
