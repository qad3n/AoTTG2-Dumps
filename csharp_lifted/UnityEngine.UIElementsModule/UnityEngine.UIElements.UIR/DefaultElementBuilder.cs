// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.DefaultElementBuilder
// Update status: unchanged since the previous dump
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
	[Address(RVA = "0x6B7E2F0", Offset = "0x6B7D2F0", VA = "0x6B7E2F0")]
	public DefaultElementBuilder(RenderTreeManager renderTreeManager)
	{
	}

	[Token(Token = "0x6002924")]
	[Address(RVA = "0x6B7E320", Offset = "0x6B7D320", VA = "0x6B7E320", Slot = "4")]
	public override bool RequiresStencilMask(VisualElement ve)
	{
		return default(bool);
	}

	[Token(Token = "0x6002925")]
	[Address(RVA = "0x6B7E430", Offset = "0x6B7D430", VA = "0x6B7E430", Slot = "5")]
	protected override void DrawVisualElementBackground(MeshGenerationContext mgc)
	{
	}

	[Token(Token = "0x6002926")]
	[Address(RVA = "0x6B803B0", Offset = "0x6B7F3B0", VA = "0x6B803B0", Slot = "6")]
	protected override void DrawVisualElementBorder(MeshGenerationContext mgc)
	{
	}

	[Token(Token = "0x6002927")]
	[Address(RVA = "0x6B80CD0", Offset = "0x6B7FCD0", VA = "0x6B80CD0", Slot = "7")]
	protected override void DrawVisualElementStencilMask(MeshGenerationContext mgc)
	{
	}

	[Token(Token = "0x6002928")]
	[Address(RVA = "0x6B80E00", Offset = "0x6B7FE00", VA = "0x6B80E00")]
	private static void GenerateStencilClipEntryForRoundedRectBackground(MeshGenerationContext mgc)
	{
	}

	[Token(Token = "0x6002929")]
	[Address(RVA = "0x6B817E0", Offset = "0x6B807E0", VA = "0x6B817E0", Slot = "8")]
	public override void ScheduleMeshGenerationJobs(MeshGenerationContext mgc)
	{
	}
}
