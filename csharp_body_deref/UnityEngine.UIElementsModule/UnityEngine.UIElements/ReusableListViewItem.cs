// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.ReusableListViewItem
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000069")]
internal class ReusableListViewItem : ReusableCollectionItem
{
	[Token(Token = "0x4000166")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string k_SortingDisablesReorderingTooltip;

	[Token(Token = "0x4000167")]
	[FieldOffset(Offset = "0x48")]
	private VisualElement m_Container;

	[Token(Token = "0x4000168")]
	[FieldOffset(Offset = "0x50")]
	private VisualElement m_DragHandle;

	[Token(Token = "0x4000169")]
	[FieldOffset(Offset = "0x58")]
	private VisualElement m_ItemContainer;

	[Token(Token = "0x17000084")]
	public override VisualElement rootElement
	{
		[Token(Token = "0x600030F")]
		[Address(RVA = "0x30B0A20", Offset = "0x30AF020", VA = "0x1830B0A20", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000310")]
	[Address(RVA = "0x30B0220", Offset = "0x30AE820", VA = "0x1830B0220")]
	public void Init(VisualElement item, bool usesAnimatedDragger)
	{
	}

	[Token(Token = "0x6000311")]
	[Address(RVA = "0x30B06A0", Offset = "0x30AECA0", VA = "0x1830B06A0")]
	protected void UpdateHierarchy(VisualElement root, VisualElement item, bool usesAnimatedDragger)
	{
	}

	[Token(Token = "0x6000312")]
	[Address(RVA = "0x30B0530", Offset = "0x30AEB30", VA = "0x1830B0530")]
	public void UpdateDragHandle(bool needsDragHandle)
	{
	}

	[Token(Token = "0x6000313")]
	[Address(RVA = "0x30B0490", Offset = "0x30AEA90", VA = "0x1830B0490")]
	public void SetDragHandleEnabled(bool enabled)
	{
	}

	[Token(Token = "0x6000314")]
	[Address(RVA = "0x30B0390", Offset = "0x30AE990", VA = "0x1830B0390", Slot = "6")]
	public override void PreAttachElement()
	{
	}

	[Token(Token = "0x6000315")]
	[Address(RVA = "0x30B0190", Offset = "0x30AE790", VA = "0x1830B0190", Slot = "7")]
	public override void DetachElement()
	{
	}

	[Token(Token = "0x6000316")]
	[Address(RVA = "0x30B0420", Offset = "0x30AEA20", VA = "0x1830B0420", Slot = "10")]
	public override void SetDragGhost(bool dragGhost)
	{
	}

	[Token(Token = "0x6000317")]
	[Address(RVA = "0x30B0300", Offset = "0x30AE900", VA = "0x1830B0300", Slot = "11")]
	protected override void OnGeometryChanged(GeometryChangedEvent evt)
	{
	}

	[Token(Token = "0x6000318")]
	[Address(RVA = "0x30B0A10", Offset = "0x30AF010", VA = "0x1830B0A10")]
	public ReusableListViewItem()
	{
	}
}
