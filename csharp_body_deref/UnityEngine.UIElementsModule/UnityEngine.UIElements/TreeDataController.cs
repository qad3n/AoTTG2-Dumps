// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.TreeDataController
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using Unity.Hierarchy;

namespace UnityEngine.UIElements;

[Token(Token = "0x200005F")]
internal sealed class TreeDataController<T>
{
	[Token(Token = "0x4000135")]
	[FieldOffset(Offset = "0x0")]
	private Dictionary<HierarchyNode, TreeViewItemData<T>> m_NodeToItemDataDictionary;

	[Token(Token = "0x4000136")]
	[FieldOffset(Offset = "0x0")]
	private Stack<IEnumerator<TreeViewItemData<T>>> m_ItemStack;

	[Token(Token = "0x4000137")]
	[FieldOffset(Offset = "0x0")]
	private Stack<HierarchyNode> m_NodeStack;

	[Token(Token = "0x600029D")]
	public T GetDataForNode(HierarchyNode node)
	{
		return (T)null;
	}

	[Token(Token = "0x600029E")]
	internal void ConvertTreeViewItemDataToHierarchy(IEnumerable<TreeViewItemData<T>> list, Func<HierarchyNode, HierarchyNode> createNode, Action<int, HierarchyNode> updateDictionary)
	{
	}

	[Token(Token = "0x600029F")]
	internal void UpdateNodeToDataDictionary(HierarchyNode node, TreeViewItemData<T> item)
	{
	}

	[Token(Token = "0x60002A0")]
	internal void ClearNodeToDataDictionary()
	{
	}

	[Token(Token = "0x60002A1")]
	public TreeDataController()
	{
	}
}
