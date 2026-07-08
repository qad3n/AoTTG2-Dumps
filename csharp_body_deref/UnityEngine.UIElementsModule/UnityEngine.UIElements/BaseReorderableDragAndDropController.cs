using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000143")]
internal abstract class BaseReorderableDragAndDropController : ICollectionDragAndDropController, IDragAndDropController<IListDragAndDropArgs>, IReorderable
{
	[Token(Token = "0x40005B9")]
	[FieldOffset(Offset = "0x10")]
	protected readonly BaseVerticalCollectionView m_View;

	[Token(Token = "0x40005BA")]
	[FieldOffset(Offset = "0x18")]
	protected List<int> m_SortedSelectedIds;

	[Token(Token = "0x17000196")]
	public virtual bool enableReordering
	{
		[Token(Token = "0x6000919")]
		[Address(RVA = "0x4CF3310", Offset = "0x4CF3310", VA = "0x4CF3310", Slot = "13")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600091A")]
		[Address(RVA = "0x4CF3320", Offset = "0x4CF3320", VA = "0x4CF3320", Slot = "14")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000917")]
	[Address(RVA = "0x4CF3270", Offset = "0x4CF3270", VA = "0x4CF3270", Slot = "10")]
	public IEnumerable<int> GetSortedSelectedIds()
	{
		return null;
	}

	[Token(Token = "0x6000918")]
	[Address(RVA = "0x4CF3280", Offset = "0x4CF3280", VA = "0x4CF3280")]
	protected BaseReorderableDragAndDropController(BaseVerticalCollectionView view)
	{
	}

	[Token(Token = "0x600091B")]
	[Address(RVA = "0x4CF3330", Offset = "0x4CF3330", VA = "0x4CF3330", Slot = "15")]
	public virtual bool CanStartDrag(IEnumerable<int> itemIds)
	{
		return default(bool);
	}

	[Token(Token = "0x600091C")]
	[Address(RVA = "0x4CF3350", Offset = "0x4CF3350", VA = "0x4CF3350", Slot = "16")]
	public virtual StartDragArgs SetupDragAndDrop(IEnumerable<int> itemIds, bool skipText = false)
	{
		return default(StartDragArgs);
	}

	[Token(Token = "0x600091D")]
	[Address(RVA = "0x4CF3E40", Offset = "0x4CF3E40", VA = "0x4CF3E40", Slot = "17")]
	protected virtual int CompareId(int id1, int id2)
	{
		return default(int);
	}

	[Token(Token = "0x600091E")]
	public abstract DragVisualMode HandleDragAndDrop(IListDragAndDropArgs args);

	[Token(Token = "0x600091F")]
	public abstract void OnDrop(IListDragAndDropArgs args);

	[Token(Token = "0x6000920")]
	[Address(RVA = "0x4CF3E60", Offset = "0x4CF3E60", VA = "0x4CF3E60", Slot = "20")]
	public virtual void DragCleanup()
	{
	}

	[Token(Token = "0x6000921")]
	[Address(RVA = "0x4CF3E70", Offset = "0x4CF3E70", VA = "0x4CF3E70", Slot = "21")]
	public virtual void HandleAutoExpand(ReusableCollectionItem item, Vector2 pointerPosition)
	{
	}
}
