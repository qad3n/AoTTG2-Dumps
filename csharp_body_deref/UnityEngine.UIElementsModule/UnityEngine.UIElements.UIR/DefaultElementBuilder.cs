using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x2000497")]
internal class DefaultElementBuilder : BaseElementBuilder
{
	[Token(Token = "0x4000DD8")]
	[FieldOffset(Offset = "0x10")]
	private RenderChain m_RenderChain;

	[Token(Token = "0x6001C84")]
	[Address(RVA = "0x4C5BC50", Offset = "0x4C5BC50", VA = "0x4C5BC50")]
	public DefaultElementBuilder(RenderChain renderChain)
	{
	}

	[Token(Token = "0x6001C85")]
	[Address(RVA = "0x4C5BC80", Offset = "0x4C5BC80", VA = "0x4C5BC80", Slot = "4")]
	public override bool RequiresStencilMask(VisualElement ve)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C86")]
	[Address(RVA = "0x4C5BD00", Offset = "0x4C5BD00", VA = "0x4C5BD00", Slot = "5")]
	protected override void DrawVisualElementBackground(MeshGenerationContext mgc)
	{
	}

	[Token(Token = "0x6001C87")]
	[Address(RVA = "0x4C5D4E0", Offset = "0x4C5D4E0", VA = "0x4C5D4E0", Slot = "6")]
	protected override void DrawVisualElementBorder(MeshGenerationContext mgc)
	{
	}

	[Token(Token = "0x6001C88")]
	[Address(RVA = "0x4C5E0C0", Offset = "0x4C5E0C0", VA = "0x4C5E0C0", Slot = "7")]
	protected override void DrawVisualElementStencilMask(MeshGenerationContext mgc)
	{
	}

	[Token(Token = "0x6001C89")]
	[Address(RVA = "0x4C5E150", Offset = "0x4C5E150", VA = "0x4C5E150")]
	private static void GenerateStencilClipEntryForRoundedRectBackground(MeshGenerationContext mgc)
	{
	}
}
