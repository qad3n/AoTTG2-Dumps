// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.DefaultMultiColumnTreeViewController
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200005A")]
public class DefaultMultiColumnTreeViewController<T> : MultiColumnTreeViewController
{
	[Token(Token = "0x4000131")]
	[FieldOffset(Offset = "0x0")]
	private TreeDataController<T> m_TreeDataController;

	[Token(Token = "0x1700006B")]
	private TreeDataController<T> treeDataController
	{
		[Token(Token = "0x600026A")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700006C")]
	public override IList itemsSource
	{
		[Token(Token = "0x600026C")]
		get
		{
			return null;
		}
		[Token(Token = "0x600026D")]
		set
		{
		}
	}

	[Token(Token = "0x600026B")]
	public DefaultMultiColumnTreeViewController(Columns columns, SortColumnDescriptions sortDescriptions, List<SortColumnDescription> sortedColumns)
	{
	}

	[Token(Token = "0x600026E")]
	public void SetRootItems(IList<TreeViewItemData<T>> items)
	{
	}

	[Token(Token = "0x600026F")]
	public override object GetItemForIndex(int index)
	{
		return null;
	}
}
