// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.ReusableListViewItem
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000036")]
internal class ReusableListViewItem : ReusableCollectionItem
{
	[Token(Token = "0x40000A4")]
	[FieldOffset(Offset = "0x40")]
	private VisualElement m_Container;

	[Token(Token = "0x40000A5")]
	[FieldOffset(Offset = "0x48")]
	private VisualElement m_DragHandle;

	[Token(Token = "0x40000A6")]
	[FieldOffset(Offset = "0x50")]
	private VisualElement m_ItemContainer;

	[Token(Token = "0x17000043")]
	public override VisualElement rootElement
	{
		[Token(Token = "0x60001BF")]
		[Address(RVA = "0x4F1DEC0", Offset = "0x4F1DEC0", VA = "0x4F1DEC0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60001C0")]
	[Address(RVA = "0x4F13A20", Offset = "0x4F13A20", VA = "0x4F13A20")]
	public void Init(VisualElement item, bool usesAnimatedDragger)
	{
	}

	[Token(Token = "0x60001C1")]
	[Address(RVA = "0x4F1DED0", Offset = "0x4F1DED0", VA = "0x4F1DED0")]
	protected void UpdateHierarchy(VisualElement root, VisualElement item, bool usesAnimatedDragger)
	{
	}

	[Token(Token = "0x60001C2")]
	[Address(RVA = "0x4F140F0", Offset = "0x4F140F0", VA = "0x4F140F0")]
	public void UpdateDragHandle(bool needsDragHandle)
	{
	}

	[Token(Token = "0x60001C3")]
	[Address(RVA = "0x4F1E1D0", Offset = "0x4F1E1D0", VA = "0x4F1E1D0", Slot = "6")]
	public override void PreAttachElement()
	{
	}

	[Token(Token = "0x60001C4")]
	[Address(RVA = "0x4F1E260", Offset = "0x4F1E260", VA = "0x4F1E260", Slot = "7")]
	public override void DetachElement()
	{
	}

	[Token(Token = "0x60001C5")]
	[Address(RVA = "0x4F1E2F0", Offset = "0x4F1E2F0", VA = "0x4F1E2F0", Slot = "9")]
	public override void SetDragGhost(bool dragGhost)
	{
	}

	[Token(Token = "0x60001C6")]
	[Address(RVA = "0x4F1E3F0", Offset = "0x4F1E3F0", VA = "0x4F1E3F0")]
	public ReusableListViewItem()
	{
	}
}
