// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.DefaultElementBuilder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x2000497")]
internal class DefaultElementBuilder : BaseElementBuilder
{
	[Token(Token = "0x4000DD8")]
	[FieldOffset(Offset = "0x10")]
	private RenderChain m_RenderChain;

	[Token(Token = "0x6001C84")]
	[Address(RVA = "0x4F83580", Offset = "0x4F83580", VA = "0x4F83580")]
	public DefaultElementBuilder(RenderChain renderChain)
	{
	}

	[Token(Token = "0x6001C85")]
	[Address(RVA = "0x4F835B0", Offset = "0x4F835B0", VA = "0x4F835B0", Slot = "4")]
	public override bool RequiresStencilMask(VisualElement ve)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C86")]
	[Address(RVA = "0x4F83630", Offset = "0x4F83630", VA = "0x4F83630", Slot = "5")]
	protected override void DrawVisualElementBackground(MeshGenerationContext mgc)
	{
	}

	[Token(Token = "0x6001C87")]
	[Address(RVA = "0x4F84E10", Offset = "0x4F84E10", VA = "0x4F84E10", Slot = "6")]
	protected override void DrawVisualElementBorder(MeshGenerationContext mgc)
	{
	}

	[Token(Token = "0x6001C88")]
	[Address(RVA = "0x4F859F0", Offset = "0x4F859F0", VA = "0x4F859F0", Slot = "7")]
	protected override void DrawVisualElementStencilMask(MeshGenerationContext mgc)
	{
	}

	[Token(Token = "0x6001C89")]
	[Address(RVA = "0x4F85A80", Offset = "0x4F85A80", VA = "0x4F85A80")]
	private static void GenerateStencilClipEntryForRoundedRectBackground(MeshGenerationContext mgc)
	{
	}
}
