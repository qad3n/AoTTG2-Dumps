using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000026")]
internal class DefaultMultiColumnTreeViewController<T> : MultiColumnTreeViewController
{
	[Token(Token = "0x4000067")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private TreeDataController<T> m_TreeDataController;

	[Token(Token = "0x17000024")]
	private TreeDataController<T> treeDataController
	{
		[Token(Token = "0x600010D")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000025")]
	public override IList itemsSource
	{
		[Token(Token = "0x600010F")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000110")]
		set
		{
		}
	}

	[Token(Token = "0x600010E")]
	public DefaultMultiColumnTreeViewController(Columns columns, SortColumnDescriptions sortDescriptions, List<SortColumnDescription> sortedColumns)
	{
	}

	[Token(Token = "0x6000111")]
	public void SetRootItems(IList<TreeViewItemData<T>> items)
	{
	}

	[Token(Token = "0x6000112")]
	public override object GetItemForIndex(int index)
	{
		return null;
	}

	[Token(Token = "0x6000113")]
	public override int GetParentId(int id)
	{
		return default(int);
	}

	[Token(Token = "0x6000114")]
	public override bool HasChildren(int id)
	{
		return default(bool);
	}

	[Token(Token = "0x6000115")]
	public override IEnumerable<int> GetChildrenIds(int id)
	{
		return null;
	}

	[Token(Token = "0x6000116")]
	public override void Move(int id, int newParentId, int childIndex = -1, bool rebuildTree = true)
	{
	}

	[Token(Token = "0x6000117")]
	private bool IsChildOf(int childId, int id)
	{
		return default(bool);
	}

	[Token(Token = "0x6000118")]
	public override IEnumerable<int> GetAllItemIds([Optional] IEnumerable<int> rootIds)
	{
		return null;
	}
}
