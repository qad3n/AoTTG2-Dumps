using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Unity.Profiling;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000023")]
public abstract class BaseTreeViewController : CollectionViewController
{
	[Token(Token = "0x400005A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private Dictionary<int, TreeItem> m_TreeItems;

	[Token(Token = "0x400005B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private List<int> m_RootIndices;

	[Token(Token = "0x400005C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private List<TreeViewItemWrapper> m_ItemWrappers;

	[Token(Token = "0x400005D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private HashSet<int> m_TreeItemIdsWithItemWrappers;

	[Token(Token = "0x400005E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private List<TreeViewItemWrapper> m_WrapperInsertionList;

	[Token(Token = "0x400005F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly ProfilerMarker K_ExpandItemByIndex;

	[Token(Token = "0x4000060")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly ProfilerMarker k_CreateWrappers;

	[Token(Token = "0x17000020")]
	protected BaseTreeView baseTreeView
	{
		[Token(Token = "0x60000CB")]
		[Address(RVA = "0x4BEE540", Offset = "0x4BEE540", VA = "0x4BEE540")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000021")]
	public override IList itemsSource
	{
		[Token(Token = "0x60000CC")]
		[Address(RVA = "0x4BEE5A0", Offset = "0x4BEE5A0", VA = "0x4BEE5A0", Slot = "5")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000CD")]
		[Address(RVA = "0x4BEE5B0", Offset = "0x4BEE5B0", VA = "0x4BEE5B0", Slot = "6")]
		set
		{
		}
	}

	[Token(Token = "0x60000CE")]
	[Address(RVA = "0x4BEE600", Offset = "0x4BEE600", VA = "0x4BEE600")]
	public void RebuildTree()
	{
	}

	[Token(Token = "0x60000CF")]
	[Address(RVA = "0x4BEEB50", Offset = "0x4BEEB50", VA = "0x4BEEB50")]
	public IEnumerable<int> GetRootItemIds()
	{
		return null;
	}

	[Token(Token = "0x60000D0")]
	public abstract IEnumerable<int> GetAllItemIds([Optional] IEnumerable<int> rootIds);

	[Token(Token = "0x60000D1")]
	public abstract int GetParentId(int id);

	[Token(Token = "0x60000D2")]
	public abstract IEnumerable<int> GetChildrenIds(int id);

	[Token(Token = "0x60000D3")]
	public abstract void Move(int id, int newParentId, int childIndex = -1, bool rebuildTree = true);

	[Token(Token = "0x60000D4")]
	[Address(RVA = "0x4BEEB60", Offset = "0x4BEEB60", VA = "0x4BEEB60", Slot = "14")]
	internal override void InvokeMakeItem(ReusableCollectionItem reusableItem)
	{
	}

	[Token(Token = "0x60000D5")]
	[Address(RVA = "0x4BEF070", Offset = "0x4BEF070", VA = "0x4BEF070", Slot = "15")]
	internal override void InvokeBindItem(ReusableCollectionItem reusableItem, int index)
	{
	}

	[Token(Token = "0x60000D6")]
	[Address(RVA = "0x4BEF480", Offset = "0x4BEF480", VA = "0x4BEF480", Slot = "17")]
	internal override void InvokeDestroyItem(ReusableCollectionItem reusableItem)
	{
	}

	[Token(Token = "0x60000D7")]
	[Address(RVA = "0x4BEEC10", Offset = "0x4BEEC10", VA = "0x4BEEC10")]
	internal void PostInitRegistration(ReusableTreeViewItem treeItem)
	{
	}

	[Token(Token = "0x60000D8")]
	[Address(RVA = "0x4BEF9C0", Offset = "0x4BEF9C0", VA = "0x4BEF9C0")]
	private void OnItemPointerUp(PointerUpEvent evt)
	{
	}

	[Token(Token = "0x60000D9")]
	[Address(RVA = "0x4BF0500", Offset = "0x4BF0500", VA = "0x4BF0500")]
	private void OnToggleValueChanged(ChangeEvent<bool> evt)
	{
	}

	[Token(Token = "0x60000DA")]
	[Address(RVA = "0x4BF1ED0", Offset = "0x4BF1ED0", VA = "0x4BF1ED0", Slot = "11")]
	public override int GetIndexForId(int id)
	{
		return default(int);
	}

	[Token(Token = "0x60000DB")]
	[Address(RVA = "0x4BF1FD0", Offset = "0x4BF1FD0", VA = "0x4BF1FD0", Slot = "12")]
	public override int GetIdForIndex(int index)
	{
		return default(int);
	}

	[Token(Token = "0x60000DC")]
	[Address(RVA = "0x4BF20D0", Offset = "0x4BF20D0", VA = "0x4BF20D0", Slot = "26")]
	public virtual bool HasChildren(int id)
	{
		return default(bool);
	}

	[Token(Token = "0x60000DD")]
	[Address(RVA = "0x4BF2140", Offset = "0x4BF2140", VA = "0x4BF2140")]
	internal bool Exists(int id)
	{
		return default(bool);
	}

	[Token(Token = "0x60000DE")]
	[Address(RVA = "0x4BEF3B0", Offset = "0x4BEF3B0", VA = "0x4BEF3B0")]
	public bool HasChildrenByIndex(int index)
	{
		return default(bool);
	}

	[Token(Token = "0x60000DF")]
	[Address(RVA = "0x4BF02C0", Offset = "0x4BF02C0", VA = "0x4BF02C0")]
	public IEnumerable<int> GetChildrenIdsByIndex(int index)
	{
		return null;
	}

	[Token(Token = "0x60000E0")]
	[Address(RVA = "0x4BF2190", Offset = "0x4BF2190", VA = "0x4BF2190")]
	public int GetChildIndexForId(int id)
	{
		return default(int);
	}

	[Token(Token = "0x60000E1")]
	[Address(RVA = "0x4BF2550", Offset = "0x4BF2550", VA = "0x4BF2550")]
	internal int GetIndentationDepth(int id)
	{
		return default(int);
	}

	[Token(Token = "0x60000E2")]
	[Address(RVA = "0x4BEF240", Offset = "0x4BEF240", VA = "0x4BEF240")]
	internal int GetIndentationDepthByIndex(int index)
	{
		return default(int);
	}

	[Token(Token = "0x60000E3")]
	[Address(RVA = "0x4BF25A0", Offset = "0x4BF25A0", VA = "0x4BF25A0", Slot = "27")]
	internal virtual bool CanChangeExpandedState(int id)
	{
		return default(bool);
	}

	[Token(Token = "0x60000E4")]
	[Address(RVA = "0x4BF25B0", Offset = "0x4BF25B0", VA = "0x4BF25B0")]
	public bool IsExpanded(int id)
	{
		return default(bool);
	}

	[Token(Token = "0x60000E5")]
	[Address(RVA = "0x4BEF2C0", Offset = "0x4BEF2C0", VA = "0x4BEF2C0")]
	public bool IsExpandedByIndex(int index)
	{
		return default(bool);
	}

	[Token(Token = "0x60000E6")]
	[Address(RVA = "0x4BF0E80", Offset = "0x4BF0E80", VA = "0x4BF0E80")]
	public void ExpandItemByIndex(int index, bool expandAllChildren, bool refresh = true)
	{
	}

	[Token(Token = "0x60000E7")]
	[Address(RVA = "0x4BF2EB0", Offset = "0x4BF2EB0", VA = "0x4BF2EB0")]
	public void ExpandItem(int id, bool expandAllChildren, bool refresh = true)
	{
	}

	[Token(Token = "0x60000E8")]
	[Address(RVA = "0x4BF06A0", Offset = "0x4BF06A0", VA = "0x4BF06A0")]
	public void CollapseItemByIndex(int index, bool collapseAllChildren)
	{
	}

	[Token(Token = "0x60000E9")]
	[Address(RVA = "0x4BF31C0", Offset = "0x4BF31C0", VA = "0x4BF31C0")]
	public void CollapseItem(int id, bool collapseAllChildren)
	{
	}

	[Token(Token = "0x60000EA")]
	[Address(RVA = "0x4BEEAB0", Offset = "0x4BEEAB0", VA = "0x4BEEAB0")]
	internal void RegenerateWrappers()
	{
	}

	[Token(Token = "0x60000EB")]
	[Address(RVA = "0x4BF2670", Offset = "0x4BF2670", VA = "0x4BF2670")]
	private void CreateWrappers(IEnumerable<int> treeViewItemIds, int depth, ref List<TreeViewItemWrapper> wrappers)
	{
	}

	[Token(Token = "0x60000EC")]
	[Address(RVA = "0x4BF2080", Offset = "0x4BF2080", VA = "0x4BF2080")]
	private bool IsIndexValid(int index)
	{
		return default(bool);
	}

	[Token(Token = "0x60000ED")]
	[Address(RVA = "0x4BF33F0", Offset = "0x4BF33F0", VA = "0x4BF33F0")]
	internal void RaiseItemParentChanged(int id, int newParentId)
	{
	}

	[Token(Token = "0x60000EE")]
	[Address(RVA = "0x4BF3410", Offset = "0x4BF3410", VA = "0x4BF3410")]
	protected BaseTreeViewController()
	{
	}
}
