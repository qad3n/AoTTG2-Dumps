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
		[Address(RVA = "0x4BF6590", Offset = "0x4BF6590", VA = "0x4BF6590", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60001C0")]
	[Address(RVA = "0x4BEC0F0", Offset = "0x4BEC0F0", VA = "0x4BEC0F0")]
	public void Init(VisualElement item, bool usesAnimatedDragger)
	{
	}

	[Token(Token = "0x60001C1")]
	[Address(RVA = "0x4BF65A0", Offset = "0x4BF65A0", VA = "0x4BF65A0")]
	protected void UpdateHierarchy(VisualElement root, VisualElement item, bool usesAnimatedDragger)
	{
	}

	[Token(Token = "0x60001C2")]
	[Address(RVA = "0x4BEC7C0", Offset = "0x4BEC7C0", VA = "0x4BEC7C0")]
	public void UpdateDragHandle(bool needsDragHandle)
	{
	}

	[Token(Token = "0x60001C3")]
	[Address(RVA = "0x4BF68A0", Offset = "0x4BF68A0", VA = "0x4BF68A0", Slot = "6")]
	public override void PreAttachElement()
	{
	}

	[Token(Token = "0x60001C4")]
	[Address(RVA = "0x4BF6930", Offset = "0x4BF6930", VA = "0x4BF6930", Slot = "7")]
	public override void DetachElement()
	{
	}

	[Token(Token = "0x60001C5")]
	[Address(RVA = "0x4BF69C0", Offset = "0x4BF69C0", VA = "0x4BF69C0", Slot = "9")]
	public override void SetDragGhost(bool dragGhost)
	{
	}

	[Token(Token = "0x60001C6")]
	[Address(RVA = "0x4BF6AC0", Offset = "0x4BF6AC0", VA = "0x4BF6AC0")]
	public ReusableListViewItem()
	{
	}
}
