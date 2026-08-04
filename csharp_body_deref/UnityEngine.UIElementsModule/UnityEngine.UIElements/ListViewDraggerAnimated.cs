// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.ListViewDraggerAnimated
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000158")]
internal class ListViewDraggerAnimated : ListViewDragger
{
	[Token(Token = "0x40005F2")]
	[FieldOffset(Offset = "0x78")]
	private int m_DragStartIndex;

	[Token(Token = "0x40005F3")]
	[FieldOffset(Offset = "0x7C")]
	private int m_CurrentIndex;

	[Token(Token = "0x40005F4")]
	[FieldOffset(Offset = "0x80")]
	private float m_SelectionHeight;

	[Token(Token = "0x40005F5")]
	[FieldOffset(Offset = "0x84")]
	private float m_LocalOffsetOnStart;

	[Token(Token = "0x40005F6")]
	[FieldOffset(Offset = "0x88")]
	private Vector3 m_CurrentPointerPosition;

	[Token(Token = "0x40005F7")]
	[FieldOffset(Offset = "0x98")]
	private ReusableCollectionItem m_Item;

	[Token(Token = "0x40005F8")]
	[FieldOffset(Offset = "0xA0")]
	private ReusableCollectionItem m_OffsetItem;

	[Token(Token = "0x170001B2")]
	public bool isDragging
	{
		[Token(Token = "0x600098B")]
		[Address(RVA = "0x50231C0", Offset = "0x50231C0", VA = "0x50231C0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600098C")]
		[Address(RVA = "0x50231D0", Offset = "0x50231D0", VA = "0x50231D0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170001B3")]
	public ReusableCollectionItem draggedItem
	{
		[Token(Token = "0x600098D")]
		[Address(RVA = "0x50231E0", Offset = "0x50231E0", VA = "0x50231E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001B4")]
	protected override bool supportsDragEvents
	{
		[Token(Token = "0x600098E")]
		[Address(RVA = "0x50231F0", Offset = "0x50231F0", VA = "0x50231F0", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600098F")]
	[Address(RVA = "0x5023200", Offset = "0x5023200", VA = "0x5023200")]
	public ListViewDraggerAnimated(BaseVerticalCollectionView listView)
	{
	}

	[Token(Token = "0x6000990")]
	[Address(RVA = "0x5023220", Offset = "0x5023220", VA = "0x5023220", Slot = "7")]
	protected internal override StartDragArgs StartDrag(Vector3 pointerPosition)
	{
		return default(StartDragArgs);
	}

	[Token(Token = "0x6000991")]
	[Address(RVA = "0x50241A0", Offset = "0x50241A0", VA = "0x50241A0", Slot = "8")]
	protected internal override void UpdateDrag(Vector3 pointerPosition)
	{
	}

	[Token(Token = "0x6000992")]
	[Address(RVA = "0x5023D40", Offset = "0x5023D40", VA = "0x5023D40")]
	private void Animate(ReusableCollectionItem element, float paddingTop)
	{
	}

	[Token(Token = "0x6000993")]
	[Address(RVA = "0x5025050", Offset = "0x5025050", VA = "0x5025050", Slot = "9")]
	protected internal override void OnDrop(Vector3 pointerPosition)
	{
	}

	[Token(Token = "0x6000994")]
	[Address(RVA = "0x5025620", Offset = "0x5025620", VA = "0x5025620", Slot = "10")]
	protected override void ClearDragAndDropUI(bool dragCancelled)
	{
	}

	[Token(Token = "0x6000995")]
	[Address(RVA = "0x5025630", Offset = "0x5025630", VA = "0x5025630", Slot = "11")]
	protected override bool TryGetDragPosition(Vector2 pointerPosition, ref DragPosition dragPosition)
	{
		return default(bool);
	}
}
