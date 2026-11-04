// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.ListViewDraggerAnimated
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200019D")]
internal class ListViewDraggerAnimated : ListViewDragger
{
	[Token(Token = "0x4000722")]
	[FieldOffset(Offset = "0x80")]
	private int m_DragStartIndex;

	[Token(Token = "0x4000723")]
	[FieldOffset(Offset = "0x84")]
	private int m_CurrentIndex;

	[Token(Token = "0x4000724")]
	[FieldOffset(Offset = "0x88")]
	private float m_SelectionHeight;

	[Token(Token = "0x4000725")]
	[FieldOffset(Offset = "0x8C")]
	private float m_LocalOffsetOnStart;

	[Token(Token = "0x4000726")]
	[FieldOffset(Offset = "0x90")]
	private Vector3 m_CurrentPointerPosition;

	[Token(Token = "0x4000727")]
	[FieldOffset(Offset = "0xA0")]
	private ReusableCollectionItem m_Item;

	[Token(Token = "0x4000728")]
	[FieldOffset(Offset = "0xA8")]
	private ReusableCollectionItem m_OffsetItem;

	[Token(Token = "0x17000234")]
	public bool isDragging
	{
		[Token(Token = "0x6000B87")]
		[Address(RVA = "0x560590", Offset = "0x55EB90", VA = "0x180560590")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000B88")]
		[Address(RVA = "0x560600", Offset = "0x55EC00", VA = "0x180560600")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000235")]
	public ReusableCollectionItem draggedItem
	{
		[Token(Token = "0x6000B89")]
		[Address(RVA = "0x187BC20", Offset = "0x187A220", VA = "0x18187BC20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000236")]
	protected override bool supportsDragEvents
	{
		[Token(Token = "0x6000B8A")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000B8B")]
	[Address(RVA = "0x3243C60", Offset = "0x3242260", VA = "0x183243C60")]
	public ListViewDraggerAnimated(BaseVerticalCollectionView listView)
	{
	}

	[Token(Token = "0x6000B8C")]
	[Address(RVA = "0x3242AC0", Offset = "0x32410C0", VA = "0x183242AC0", Slot = "7")]
	protected internal override StartDragArgs StartDrag(Vector3 pointerPosition, EventModifiers modifiers)
	{
		return default(StartDragArgs);
	}

	[Token(Token = "0x6000B8D")]
	[Address(RVA = "0x3243470", Offset = "0x3241A70", VA = "0x183243470", Slot = "8")]
	protected internal override void UpdateDrag(Vector3 pointerPosition, EventModifiers modifiers)
	{
	}

	[Token(Token = "0x6000B8E")]
	[Address(RVA = "0x32422F0", Offset = "0x32408F0", VA = "0x1832422F0")]
	private void Animate(ReusableCollectionItem element, float paddingTop)
	{
	}

	[Token(Token = "0x6000B8F")]
	[Address(RVA = "0x32426A0", Offset = "0x3240CA0", VA = "0x1832426A0", Slot = "9")]
	protected internal override void OnDrop(Vector3 pointerPosition, EventModifiers modifiers)
	{
	}

	[Token(Token = "0x6000B90")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "10")]
	protected override void ClearDragAndDropUI(bool dragCancelled)
	{
	}

	[Token(Token = "0x6000B91")]
	[Address(RVA = "0x3243430", Offset = "0x3241A30", VA = "0x183243430", Slot = "11")]
	protected override bool TryGetDragPosition(Vector2 pointerPosition, ref DragPosition dragPosition)
	{
		return default(bool);
	}
}
