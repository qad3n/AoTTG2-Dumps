using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000027")]
internal class DefaultTreeViewController<T> : TreeViewController
{
	[Token(Token = "0x4000068")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private TreeDataController<T> m_TreeDataController;

	[Token(Token = "0x17000026")]
	private TreeDataController<T> treeDataController
	{
		[Token(Token = "0x6000119")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000027")]
	public override IList itemsSource
	{
		[Token(Token = "0x600011A")]
		get
		{
			return null;
		}
		[Token(Token = "0x600011B")]
		set
		{
		}
	}

	[Token(Token = "0x600011C")]
	public void SetRootItems(IList<TreeViewItemData<T>> items)
	{
	}

	[Token(Token = "0x600011D")]
	public override object GetItemForIndex(int index)
	{
		return null;
	}

	[Token(Token = "0x600011E")]
	public override int GetParentId(int id)
	{
		return default(int);
	}

	[Token(Token = "0x600011F")]
	public override bool HasChildren(int id)
	{
		return default(bool);
	}

	[Token(Token = "0x6000120")]
	public override IEnumerable<int> GetChildrenIds(int id)
	{
		return null;
	}

	[Token(Token = "0x6000121")]
	public override void Move(int id, int newParentId, int childIndex = -1, bool rebuildTree = true)
	{
	}

	[Token(Token = "0x6000122")]
	private bool IsChildOf(int childId, int id)
	{
		return default(bool);
	}

	[Token(Token = "0x6000123")]
	public override IEnumerable<int> GetAllItemIds([Optional] IEnumerable<int> rootIds)
	{
		return null;
	}

	[Token(Token = "0x6000124")]
	public DefaultTreeViewController()
	{
	}
}
