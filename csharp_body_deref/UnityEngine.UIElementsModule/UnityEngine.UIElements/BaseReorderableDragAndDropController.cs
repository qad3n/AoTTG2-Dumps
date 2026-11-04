// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.BaseReorderableDragAndDropController
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000188")]
internal abstract class BaseReorderableDragAndDropController : ICollectionDragAndDropController, IDragAndDropController<IListDragAndDropArgs>, IReorderable
{
	[Token(Token = "0x40006E2")]
	[FieldOffset(Offset = "0x10")]
	protected readonly BaseVerticalCollectionView m_View;

	[Token(Token = "0x40006E3")]
	[FieldOffset(Offset = "0x18")]
	protected List<int> m_SortedSelectedIds;

	[Token(Token = "0x17000213")]
	public virtual bool enableReordering
	{
		[Token(Token = "0x6000B08")]
		[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050", Slot = "13")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000B09")]
		[Address(RVA = "0x138BAA0", Offset = "0x138A0A0", VA = "0x18138BAA0", Slot = "14")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000B06")]
	[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "10")]
	public IEnumerable<int> GetSortedSelectedIds()
	{
		return null;
	}

	[Token(Token = "0x6000B07")]
	[Address(RVA = "0x323E9C0", Offset = "0x323CFC0", VA = "0x18323E9C0")]
	protected BaseReorderableDragAndDropController(BaseVerticalCollectionView view)
	{
	}

	[Token(Token = "0x6000B0A")]
	[Address(RVA = "0x10B79A0", Offset = "0x10B5FA0", VA = "0x1810B79A0", Slot = "15")]
	public virtual bool CanStartDrag(IEnumerable<int> itemIds)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B0B")]
	[Address(RVA = "0x10B79A0", Offset = "0x10B5FA0", VA = "0x1810B79A0", Slot = "16")]
	public virtual bool CanDrop()
	{
		return default(bool);
	}

	[Token(Token = "0x6000B0C")]
	[Address(RVA = "0x323E4D0", Offset = "0x323CAD0", VA = "0x18323E4D0", Slot = "17")]
	public virtual StartDragArgs SetupDragAndDrop(IEnumerable<int> itemIds, bool skipText = false)
	{
		return default(StartDragArgs);
	}

	[Token(Token = "0x6000B0D")]
	[Address(RVA = "0x323E4B0", Offset = "0x323CAB0", VA = "0x18323E4B0", Slot = "18")]
	protected virtual int CompareId(int id1, int id2)
	{
		return default(int);
	}

	[Token(Token = "0x6000B0E")]
	public abstract DragVisualMode HandleDragAndDrop(IListDragAndDropArgs args);

	[Token(Token = "0x6000B0F")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "20")]
	public virtual void OnDrop(IListDragAndDropArgs args)
	{
	}

	[Token(Token = "0x6000B10")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "21")]
	public virtual void DragCleanup()
	{
	}

	[Token(Token = "0x6000B11")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "22")]
	public virtual void HandleAutoExpand(ReusableCollectionItem item, Vector2 pointerPosition)
	{
	}
}
