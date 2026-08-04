// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.BaseElementBuilder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x2000496")]
internal abstract class BaseElementBuilder
{
	[Token(Token = "0x6001C7B")]
	public abstract bool RequiresStencilMask(VisualElement ve);

	[Token(Token = "0x6001C7C")]
	[Address(RVA = "0x4F82AC0", Offset = "0x4F82AC0", VA = "0x4F82AC0")]
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
	[Address(RVA = "0x4F82FD0", Offset = "0x4F82FD0", VA = "0x4F82FD0")]
	private void PushVisualElementClipping(MeshGenerationContext mgc)
	{
	}

	[Token(Token = "0x6001C81")]
	[Address(RVA = "0x4F83390", Offset = "0x4F83390", VA = "0x4F83390")]
	private static void PopVisualElementClipping(MeshGenerationContext mgc)
	{
	}

	[Token(Token = "0x6001C82")]
	[Address(RVA = "0x4F83280", Offset = "0x4F83280", VA = "0x4F83280")]
	private static void InvokeGenerateVisualContent(MeshGenerationContext mgc)
	{
	}

	[Token(Token = "0x6001C83")]
	[Address(RVA = "0x4F83570", Offset = "0x4F83570", VA = "0x4F83570")]
	protected BaseElementBuilder()
	{
	}
}
