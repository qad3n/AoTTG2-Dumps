// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.BaseTreeViewController
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4F15E70", Offset = "0x4F15E70", VA = "0x4F15E70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000021")]
	public override IList itemsSource
	{
		[Token(Token = "0x60000CC")]
		[Address(RVA = "0x4F15ED0", Offset = "0x4F15ED0", VA = "0x4F15ED0", Slot = "5")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000CD")]
		[Address(RVA = "0x4F15EE0", Offset = "0x4F15EE0", VA = "0x4F15EE0", Slot = "6")]
		set
		{
		}
	}

	[Token(Token = "0x60000CE")]
	[Address(RVA = "0x4F15F30", Offset = "0x4F15F30", VA = "0x4F15F30")]
	public void RebuildTree()
	{
	}

	[Token(Token = "0x60000CF")]
	[Address(RVA = "0x4F16480", Offset = "0x4F16480", VA = "0x4F16480")]
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
	[Address(RVA = "0x4F16490", Offset = "0x4F16490", VA = "0x4F16490", Slot = "14")]
	internal override void InvokeMakeItem(ReusableCollectionItem reusableItem)
	{
	}

	[Token(Token = "0x60000D5")]
	[Address(RVA = "0x4F169A0", Offset = "0x4F169A0", VA = "0x4F169A0", Slot = "15")]
	internal override void InvokeBindItem(ReusableCollectionItem reusableItem, int index)
	{
	}

	[Token(Token = "0x60000D6")]
	[Address(RVA = "0x4F16DB0", Offset = "0x4F16DB0", VA = "0x4F16DB0", Slot = "17")]
	internal override void InvokeDestroyItem(ReusableCollectionItem reusableItem)
	{
	}

	[Token(Token = "0x60000D7")]
	[Address(RVA = "0x4F16540", Offset = "0x4F16540", VA = "0x4F16540")]
	internal void PostInitRegistration(ReusableTreeViewItem treeItem)
	{
	}

	[Token(Token = "0x60000D8")]
	[Address(RVA = "0x4F172F0", Offset = "0x4F172F0", VA = "0x4F172F0")]
	private void OnItemPointerUp(PointerUpEvent evt)
	{
	}

	[Token(Token = "0x60000D9")]
	[Address(RVA = "0x4F17E30", Offset = "0x4F17E30", VA = "0x4F17E30")]
	private void OnToggleValueChanged(ChangeEvent<bool> evt)
	{
	}

	[Token(Token = "0x60000DA")]
	[Address(RVA = "0x4F19800", Offset = "0x4F19800", VA = "0x4F19800", Slot = "11")]
	public override int GetIndexForId(int id)
	{
		return default(int);
	}

	[Token(Token = "0x60000DB")]
	[Address(RVA = "0x4F19900", Offset = "0x4F19900", VA = "0x4F19900", Slot = "12")]
	public override int GetIdForIndex(int index)
	{
		return default(int);
	}

	[Token(Token = "0x60000DC")]
	[Address(RVA = "0x4F19A00", Offset = "0x4F19A00", VA = "0x4F19A00", Slot = "26")]
	public virtual bool HasChildren(int id)
	{
		return default(bool);
	}

	[Token(Token = "0x60000DD")]
	[Address(RVA = "0x4F19A70", Offset = "0x4F19A70", VA = "0x4F19A70")]
	internal bool Exists(int id)
	{
		return default(bool);
	}

	[Token(Token = "0x60000DE")]
	[Address(RVA = "0x4F16CE0", Offset = "0x4F16CE0", VA = "0x4F16CE0")]
	public bool HasChildrenByIndex(int index)
	{
		return default(bool);
	}

	[Token(Token = "0x60000DF")]
	[Address(RVA = "0x4F17BF0", Offset = "0x4F17BF0", VA = "0x4F17BF0")]
	public IEnumerable<int> GetChildrenIdsByIndex(int index)
	{
		return null;
	}

	[Token(Token = "0x60000E0")]
	[Address(RVA = "0x4F19AC0", Offset = "0x4F19AC0", VA = "0x4F19AC0")]
	public int GetChildIndexForId(int id)
	{
		return default(int);
	}

	[Token(Token = "0x60000E1")]
	[Address(RVA = "0x4F19E80", Offset = "0x4F19E80", VA = "0x4F19E80")]
	internal int GetIndentationDepth(int id)
	{
		return default(int);
	}

	[Token(Token = "0x60000E2")]
	[Address(RVA = "0x4F16B70", Offset = "0x4F16B70", VA = "0x4F16B70")]
	internal int GetIndentationDepthByIndex(int index)
	{
		return default(int);
	}

	[Token(Token = "0x60000E3")]
	[Address(RVA = "0x4F19ED0", Offset = "0x4F19ED0", VA = "0x4F19ED0", Slot = "27")]
	internal virtual bool CanChangeExpandedState(int id)
	{
		return default(bool);
	}

	[Token(Token = "0x60000E4")]
	[Address(RVA = "0x4F19EE0", Offset = "0x4F19EE0", VA = "0x4F19EE0")]
	public bool IsExpanded(int id)
	{
		return default(bool);
	}

	[Token(Token = "0x60000E5")]
	[Address(RVA = "0x4F16BF0", Offset = "0x4F16BF0", VA = "0x4F16BF0")]
	public bool IsExpandedByIndex(int index)
	{
		return default(bool);
	}

	[Token(Token = "0x60000E6")]
	[Address(RVA = "0x4F187B0", Offset = "0x4F187B0", VA = "0x4F187B0")]
	public void ExpandItemByIndex(int index, bool expandAllChildren, bool refresh = true)
	{
	}

	[Token(Token = "0x60000E7")]
	[Address(RVA = "0x4F1A7E0", Offset = "0x4F1A7E0", VA = "0x4F1A7E0")]
	public void ExpandItem(int id, bool expandAllChildren, bool refresh = true)
	{
	}

	[Token(Token = "0x60000E8")]
	[Address(RVA = "0x4F17FD0", Offset = "0x4F17FD0", VA = "0x4F17FD0")]
	public void CollapseItemByIndex(int index, bool collapseAllChildren)
	{
	}

	[Token(Token = "0x60000E9")]
	[Address(RVA = "0x4F1AAF0", Offset = "0x4F1AAF0", VA = "0x4F1AAF0")]
	public void CollapseItem(int id, bool collapseAllChildren)
	{
	}

	[Token(Token = "0x60000EA")]
	[Address(RVA = "0x4F163E0", Offset = "0x4F163E0", VA = "0x4F163E0")]
	internal void RegenerateWrappers()
	{
	}

	[Token(Token = "0x60000EB")]
	[Address(RVA = "0x4F19FA0", Offset = "0x4F19FA0", VA = "0x4F19FA0")]
	private void CreateWrappers(IEnumerable<int> treeViewItemIds, int depth, ref List<TreeViewItemWrapper> wrappers)
	{
	}

	[Token(Token = "0x60000EC")]
	[Address(RVA = "0x4F199B0", Offset = "0x4F199B0", VA = "0x4F199B0")]
	private bool IsIndexValid(int index)
	{
		return default(bool);
	}

	[Token(Token = "0x60000ED")]
	[Address(RVA = "0x4F1AD20", Offset = "0x4F1AD20", VA = "0x4F1AD20")]
	internal void RaiseItemParentChanged(int id, int newParentId)
	{
	}

	[Token(Token = "0x60000EE")]
	[Address(RVA = "0x4F1AD40", Offset = "0x4F1AD40", VA = "0x4F1AD40")]
	protected BaseTreeViewController()
	{
	}
}
