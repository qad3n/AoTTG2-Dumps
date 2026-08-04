// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.BaseListViewController
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000022")]
public abstract class BaseListViewController : CollectionViewController
{
	[Token(Token = "0x1700001F")]
	protected BaseListView baseListView
	{
		[Token(Token = "0x60000B7")]
		[Address(RVA = "0x4F13750", Offset = "0x4F13750", VA = "0x4F13750")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x14000004")]
	public event Action itemsSourceSizeChanged
	{
		[Token(Token = "0x60000B1")]
		[Address(RVA = "0x4F13370", Offset = "0x4F13370", VA = "0x4F13370")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60000B2")]
		[Address(RVA = "0x4F13400", Offset = "0x4F13400", VA = "0x4F13400")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000005")]
	public event Action<IEnumerable<int>> itemsAdded
	{
		[Token(Token = "0x60000B3")]
		[Address(RVA = "0x4F13490", Offset = "0x4F13490", VA = "0x4F13490")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60000B4")]
		[Address(RVA = "0x4F13540", Offset = "0x4F13540", VA = "0x4F13540")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000006")]
	public event Action<IEnumerable<int>> itemsRemoved
	{
		[Token(Token = "0x60000B5")]
		[Address(RVA = "0x4F135F0", Offset = "0x4F135F0", VA = "0x4F135F0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60000B6")]
		[Address(RVA = "0x4F136A0", Offset = "0x4F136A0", VA = "0x4F136A0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60000B8")]
	[Address(RVA = "0x4F137B0", Offset = "0x4F137B0", VA = "0x4F137B0", Slot = "14")]
	internal override void InvokeMakeItem(ReusableCollectionItem reusableItem)
	{
	}

	[Token(Token = "0x60000B9")]
	[Address(RVA = "0x4F13AE0", Offset = "0x4F13AE0", VA = "0x4F13AE0")]
	internal void PostInitRegistration(ReusableListViewItem listItem)
	{
	}

	[Token(Token = "0x60000BA")]
	[Address(RVA = "0x4F13F90", Offset = "0x4F13F90", VA = "0x4F13F90", Slot = "15")]
	internal override void InvokeBindItem(ReusableCollectionItem reusableItem, int index)
	{
	}

	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x4F14320", Offset = "0x4F14320", VA = "0x4F14320", Slot = "22")]
	public virtual bool NeedsDragHandle(int index)
	{
		return default(bool);
	}

	[Token(Token = "0x60000BC")]
	[Address(RVA = "0x4F143A0", Offset = "0x4F143A0", VA = "0x4F143A0", Slot = "23")]
	public virtual void AddItems(int itemCount)
	{
	}

	[Token(Token = "0x60000BD")]
	[Address(RVA = "0x4F14F50", Offset = "0x4F14F50", VA = "0x4F14F50", Slot = "24")]
	public virtual void Move(int index, int newIndex)
	{
	}

	[Token(Token = "0x60000BE")]
	[Address(RVA = "0x4F15390", Offset = "0x4F15390", VA = "0x4F15390", Slot = "25")]
	public virtual void RemoveItem(int index)
	{
	}

	[Token(Token = "0x60000BF")]
	[Address(RVA = "0x4F15530", Offset = "0x4F15530", VA = "0x4F15530", Slot = "26")]
	public virtual void RemoveItems(List<int> indices)
	{
	}

	[Token(Token = "0x60000C0")]
	[Address(RVA = "0x4F159E0", Offset = "0x4F159E0", VA = "0x4F159E0", Slot = "27")]
	internal virtual void RemoveItems(int itemCount)
	{
	}

	[Token(Token = "0x60000C1")]
	[Address(RVA = "0x4F15BE0", Offset = "0x4F15BE0", VA = "0x4F15BE0", Slot = "28")]
	public virtual void ClearItems()
	{
	}

	[Token(Token = "0x60000C2")]
	[Address(RVA = "0x4F14F30", Offset = "0x4F14F30", VA = "0x4F14F30")]
	protected void RaiseOnSizeChanged()
	{
	}

	[Token(Token = "0x60000C3")]
	[Address(RVA = "0x4F14F10", Offset = "0x4F14F10", VA = "0x4F14F10")]
	protected void RaiseItemsAdded(IEnumerable<int> indices)
	{
	}

	[Token(Token = "0x60000C4")]
	[Address(RVA = "0x4F157D0", Offset = "0x4F157D0", VA = "0x4F157D0")]
	protected void RaiseItemsRemoved(IEnumerable<int> indices)
	{
	}

	[Token(Token = "0x60000C5")]
	[Address(RVA = "0x4F14E20", Offset = "0x4F14E20", VA = "0x4F14E20")]
	private static Array AddToArray(Array source, int itemCount)
	{
		return null;
	}

	[Token(Token = "0x60000C6")]
	[Address(RVA = "0x4F157F0", Offset = "0x4F157F0", VA = "0x4F157F0")]
	private static Array RemoveFromArray(Array source, List<int> indicesToRemove)
	{
		return null;
	}

	[Token(Token = "0x60000C7")]
	[Address(RVA = "0x4F150E0", Offset = "0x4F150E0", VA = "0x4F150E0")]
	private void Swap(int lhs, int rhs)
	{
	}

	[Token(Token = "0x60000C8")]
	[Address(RVA = "0x4F14CC0", Offset = "0x4F14CC0", VA = "0x4F14CC0")]
	private void EnsureItemSourceCanBeResized()
	{
	}

	[Token(Token = "0x60000C9")]
	[Address(RVA = "0x4F15DA0", Offset = "0x4F15DA0", VA = "0x4F15DA0")]
	protected BaseListViewController()
	{
	}
}
