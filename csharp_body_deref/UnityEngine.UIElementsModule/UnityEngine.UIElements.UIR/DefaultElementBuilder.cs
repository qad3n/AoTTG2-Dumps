// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.DefaultElementBuilder
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x2000579")]
internal class DefaultElementBuilder : BaseElementBuilder
{
	[Token(Token = "0x40012B0")]
	[FieldOffset(Offset = "0x10")]
	private RenderTreeManager m_RenderTreeManager;

	[Token(Token = "0x6002923")]
	[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
	public DefaultElementBuilder(RenderTreeManager renderTreeManager)
	{
	}

	[Token(Token = "0x6002924")]
	[Address(RVA = "0x317E340", Offset = "0x317C940", VA = "0x18317E340", Slot = "4")]
	public override bool RequiresStencilMask(VisualElement ve)
	{
		return default(bool);
	}

	[Token(Token = "0x6002925")]
	[Address(RVA = "0x317BE30", Offset = "0x317A430", VA = "0x18317BE30", Slot = "5")]
	protected override void DrawVisualElementBackground(MeshGenerationContext mgc)
	{
	}

	[Token(Token = "0x6002926")]
	[Address(RVA = "0x317D510", Offset = "0x317BB10", VA = "0x18317D510", Slot = "6")]
	protected override void DrawVisualElementBorder(MeshGenerationContext mgc)
	{
	}

	[Token(Token = "0x6002927")]
	[Address(RVA = "0x317DAC0", Offset = "0x317C0C0", VA = "0x18317DAC0", Slot = "7")]
	protected override void DrawVisualElementStencilMask(MeshGenerationContext mgc)
	{
	}

	[Token(Token = "0x6002928")]
	[Address(RVA = "0x317DC00", Offset = "0x317C200", VA = "0x18317DC00")]
	private static void GenerateStencilClipEntryForRoundedRectBackground(MeshGenerationContext mgc)
	{
	}

	[Token(Token = "0x6002929")]
	[Address(RVA = "0x317E510", Offset = "0x317CB10", VA = "0x18317E510", Slot = "8")]
	public override void ScheduleMeshGenerationJobs(MeshGenerationContext mgc)
	{
	}
}
