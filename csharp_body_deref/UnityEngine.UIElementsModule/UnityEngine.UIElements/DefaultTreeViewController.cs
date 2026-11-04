// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.DefaultTreeViewController
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200005B")]
public class DefaultTreeViewController<T> : TreeViewController
{
	[Token(Token = "0x4000132")]
	[FieldOffset(Offset = "0x0")]
	private TreeDataController<T> m_TreeDataController;

	[Token(Token = "0x1700006D")]
	private TreeDataController<T> treeDataController
	{
		[Token(Token = "0x6000272")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700006E")]
	public override IList itemsSource
	{
		[Token(Token = "0x6000273")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000274")]
		set
		{
		}
	}

	[Token(Token = "0x6000275")]
	public void SetRootItems(IList<TreeViewItemData<T>> items)
	{
	}

	[Token(Token = "0x6000276")]
	public override object GetItemForIndex(int index)
	{
		return null;
	}

	[Token(Token = "0x6000277")]
	public DefaultTreeViewController()
	{
	}
}
