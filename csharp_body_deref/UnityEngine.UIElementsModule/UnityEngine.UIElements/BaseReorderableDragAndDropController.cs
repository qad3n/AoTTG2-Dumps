// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.BaseReorderableDragAndDropController
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x501AC40", Offset = "0x501AC40", VA = "0x501AC40", Slot = "13")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600091A")]
		[Address(RVA = "0x501AC50", Offset = "0x501AC50", VA = "0x501AC50", Slot = "14")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000917")]
	[Address(RVA = "0x501ABA0", Offset = "0x501ABA0", VA = "0x501ABA0", Slot = "10")]
	public IEnumerable<int> GetSortedSelectedIds()
	{
		return null;
	}

	[Token(Token = "0x6000918")]
	[Address(RVA = "0x501ABB0", Offset = "0x501ABB0", VA = "0x501ABB0")]
	protected BaseReorderableDragAndDropController(BaseVerticalCollectionView view)
	{
	}

	[Token(Token = "0x600091B")]
	[Address(RVA = "0x501AC60", Offset = "0x501AC60", VA = "0x501AC60", Slot = "15")]
	public virtual bool CanStartDrag(IEnumerable<int> itemIds)
	{
		return default(bool);
	}

	[Token(Token = "0x600091C")]
	[Address(RVA = "0x501AC80", Offset = "0x501AC80", VA = "0x501AC80", Slot = "16")]
	public virtual StartDragArgs SetupDragAndDrop(IEnumerable<int> itemIds, bool skipText = false)
	{
		return default(StartDragArgs);
	}

	[Token(Token = "0x600091D")]
	[Address(RVA = "0x501B770", Offset = "0x501B770", VA = "0x501B770", Slot = "17")]
	protected virtual int CompareId(int id1, int id2)
	{
		return default(int);
	}

	[Token(Token = "0x600091E")]
	public abstract DragVisualMode HandleDragAndDrop(IListDragAndDropArgs args);

	[Token(Token = "0x600091F")]
	public abstract void OnDrop(IListDragAndDropArgs args);

	[Token(Token = "0x6000920")]
	[Address(RVA = "0x501B790", Offset = "0x501B790", VA = "0x501B790", Slot = "20")]
	public virtual void DragCleanup()
	{
	}

	[Token(Token = "0x6000921")]
	[Address(RVA = "0x501B7A0", Offset = "0x501B7A0", VA = "0x501B7A0", Slot = "21")]
	public virtual void HandleAutoExpand(ReusableCollectionItem item, Vector2 pointerPosition)
	{
	}
}
