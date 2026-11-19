// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.ReusableListViewItem
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x6A9C300", Offset = "0x6A9B300", VA = "0x6A9C300", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000310")]
	[Address(RVA = "0x6A9C310", Offset = "0x6A9B310", VA = "0x6A9C310")]
	public void Init(VisualElement item, bool usesAnimatedDragger)
	{
	}

	[Token(Token = "0x6000311")]
	[Address(RVA = "0x6A9C3D0", Offset = "0x6A9B3D0", VA = "0x6A9C3D0")]
	protected void UpdateHierarchy(VisualElement root, VisualElement item, bool usesAnimatedDragger)
	{
	}

	[Token(Token = "0x6000312")]
	[Address(RVA = "0x6A9C6D0", Offset = "0x6A9B6D0", VA = "0x6A9C6D0")]
	public void UpdateDragHandle(bool needsDragHandle)
	{
	}

	[Token(Token = "0x6000313")]
	[Address(RVA = "0x6A9A620", Offset = "0x6A99620", VA = "0x6A9A620")]
	public void SetDragHandleEnabled(bool enabled)
	{
	}

	[Token(Token = "0x6000314")]
	[Address(RVA = "0x6A9C830", Offset = "0x6A9B830", VA = "0x6A9C830", Slot = "6")]
	public override void PreAttachElement()
	{
	}

	[Token(Token = "0x6000315")]
	[Address(RVA = "0x6A9C8C0", Offset = "0x6A9B8C0", VA = "0x6A9C8C0", Slot = "7")]
	public override void DetachElement()
	{
	}

	[Token(Token = "0x6000316")]
	[Address(RVA = "0x6A9C950", Offset = "0x6A9B950", VA = "0x6A9C950", Slot = "10")]
	public override void SetDragGhost(bool dragGhost)
	{
	}

	[Token(Token = "0x6000317")]
	[Address(RVA = "0x6A9C9B0", Offset = "0x6A9B9B0", VA = "0x6A9C9B0", Slot = "11")]
	protected override void OnGeometryChanged(GeometryChangedEvent evt)
	{
	}

	[Token(Token = "0x6000318")]
	[Address(RVA = "0x6A9C9D0", Offset = "0x6A9B9D0", VA = "0x6A9C9D0")]
	public ReusableListViewItem()
	{
	}
}
