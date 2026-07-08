using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200011E")]
internal readonly struct TreeData<T>
{
	[Token(Token = "0x40004B4")]
	[FieldOffset(Offset = "0x0")]
	private readonly IList<int> m_RootItemIds;

	[Token(Token = "0x40004B5")]
	[FieldOffset(Offset = "0x0")]
	private readonly Dictionary<int, TreeViewItemData<T>> m_Tree;

	[Token(Token = "0x40004B6")]
	[FieldOffset(Offset = "0x0")]
	private readonly Dictionary<int, int> m_ParentIds;

	[Token(Token = "0x40004B7")]
	[FieldOffset(Offset = "0x0")]
	private readonly Dictionary<int, List<int>> m_ChildrenIds;

	[Token(Token = "0x17000157")]
	public IEnumerable<int> rootItemIds
	{
		[Token(Token = "0x6000792")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000793")]
	public TreeData(IList<TreeViewItemData<T>> rootItems)
	{
	}

	[Token(Token = "0x6000794")]
	public TreeViewItemData<T> GetDataForId(int id)
	{
		return default(TreeViewItemData<T>);
	}

	[Token(Token = "0x6000795")]
	public int GetParentId(int id)
	{
		return default(int);
	}

	[Token(Token = "0x6000796")]
	public void Move(int id, int newParentId, int childIndex)
	{
	}

	[Token(Token = "0x6000797")]
	public bool HasAncestor(int childId, int ancestorId)
	{
		return default(bool);
	}

	[Token(Token = "0x6000798")]
	private void AddItemToParent(TreeViewItemData<T> item, int parentId, int childIndex)
	{
	}

	[Token(Token = "0x6000799")]
	private void RemoveFromParent(int id, int parentId)
	{
	}

	[Token(Token = "0x600079A")]
	private void UpdateParentTree(TreeViewItemData<T> current)
	{
	}

	[Token(Token = "0x600079B")]
	private void RefreshTree(IList<TreeViewItemData<T>> rootItems)
	{
	}

	[Token(Token = "0x600079C")]
	private void BuildTree(IEnumerable<TreeViewItemData<T>> items, bool isRoot)
	{
	}
}
