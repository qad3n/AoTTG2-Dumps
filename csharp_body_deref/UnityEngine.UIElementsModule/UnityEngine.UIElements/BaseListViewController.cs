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
		[Address(RVA = "0x4BEBE20", Offset = "0x4BEBE20", VA = "0x4BEBE20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x14000004")]
	public event Action itemsSourceSizeChanged
	{
		[Token(Token = "0x60000B1")]
		[Address(RVA = "0x4BEBA40", Offset = "0x4BEBA40", VA = "0x4BEBA40")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60000B2")]
		[Address(RVA = "0x4BEBAD0", Offset = "0x4BEBAD0", VA = "0x4BEBAD0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000005")]
	public event Action<IEnumerable<int>> itemsAdded
	{
		[Token(Token = "0x60000B3")]
		[Address(RVA = "0x4BEBB60", Offset = "0x4BEBB60", VA = "0x4BEBB60")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60000B4")]
		[Address(RVA = "0x4BEBC10", Offset = "0x4BEBC10", VA = "0x4BEBC10")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000006")]
	public event Action<IEnumerable<int>> itemsRemoved
	{
		[Token(Token = "0x60000B5")]
		[Address(RVA = "0x4BEBCC0", Offset = "0x4BEBCC0", VA = "0x4BEBCC0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60000B6")]
		[Address(RVA = "0x4BEBD70", Offset = "0x4BEBD70", VA = "0x4BEBD70")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60000B8")]
	[Address(RVA = "0x4BEBE80", Offset = "0x4BEBE80", VA = "0x4BEBE80", Slot = "14")]
	internal override void InvokeMakeItem(ReusableCollectionItem reusableItem)
	{
	}

	[Token(Token = "0x60000B9")]
	[Address(RVA = "0x4BEC1B0", Offset = "0x4BEC1B0", VA = "0x4BEC1B0")]
	internal void PostInitRegistration(ReusableListViewItem listItem)
	{
	}

	[Token(Token = "0x60000BA")]
	[Address(RVA = "0x4BEC660", Offset = "0x4BEC660", VA = "0x4BEC660", Slot = "15")]
	internal override void InvokeBindItem(ReusableCollectionItem reusableItem, int index)
	{
	}

	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x4BEC9F0", Offset = "0x4BEC9F0", VA = "0x4BEC9F0", Slot = "22")]
	public virtual bool NeedsDragHandle(int index)
	{
		return default(bool);
	}

	[Token(Token = "0x60000BC")]
	[Address(RVA = "0x4BECA70", Offset = "0x4BECA70", VA = "0x4BECA70", Slot = "23")]
	public virtual void AddItems(int itemCount)
	{
	}

	[Token(Token = "0x60000BD")]
	[Address(RVA = "0x4BED620", Offset = "0x4BED620", VA = "0x4BED620", Slot = "24")]
	public virtual void Move(int index, int newIndex)
	{
	}

	[Token(Token = "0x60000BE")]
	[Address(RVA = "0x4BEDA60", Offset = "0x4BEDA60", VA = "0x4BEDA60", Slot = "25")]
	public virtual void RemoveItem(int index)
	{
	}

	[Token(Token = "0x60000BF")]
	[Address(RVA = "0x4BEDC00", Offset = "0x4BEDC00", VA = "0x4BEDC00", Slot = "26")]
	public virtual void RemoveItems(List<int> indices)
	{
	}

	[Token(Token = "0x60000C0")]
	[Address(RVA = "0x4BEE0B0", Offset = "0x4BEE0B0", VA = "0x4BEE0B0", Slot = "27")]
	internal virtual void RemoveItems(int itemCount)
	{
	}

	[Token(Token = "0x60000C1")]
	[Address(RVA = "0x4BEE2B0", Offset = "0x4BEE2B0", VA = "0x4BEE2B0", Slot = "28")]
	public virtual void ClearItems()
	{
	}

	[Token(Token = "0x60000C2")]
	[Address(RVA = "0x4BED600", Offset = "0x4BED600", VA = "0x4BED600")]
	protected void RaiseOnSizeChanged()
	{
	}

	[Token(Token = "0x60000C3")]
	[Address(RVA = "0x4BED5E0", Offset = "0x4BED5E0", VA = "0x4BED5E0")]
	protected void RaiseItemsAdded(IEnumerable<int> indices)
	{
	}

	[Token(Token = "0x60000C4")]
	[Address(RVA = "0x4BEDEA0", Offset = "0x4BEDEA0", VA = "0x4BEDEA0")]
	protected void RaiseItemsRemoved(IEnumerable<int> indices)
	{
	}

	[Token(Token = "0x60000C5")]
	[Address(RVA = "0x4BED4F0", Offset = "0x4BED4F0", VA = "0x4BED4F0")]
	private static Array AddToArray(Array source, int itemCount)
	{
		return null;
	}

	[Token(Token = "0x60000C6")]
	[Address(RVA = "0x4BEDEC0", Offset = "0x4BEDEC0", VA = "0x4BEDEC0")]
	private static Array RemoveFromArray(Array source, List<int> indicesToRemove)
	{
		return null;
	}

	[Token(Token = "0x60000C7")]
	[Address(RVA = "0x4BED7B0", Offset = "0x4BED7B0", VA = "0x4BED7B0")]
	private void Swap(int lhs, int rhs)
	{
	}

	[Token(Token = "0x60000C8")]
	[Address(RVA = "0x4BED390", Offset = "0x4BED390", VA = "0x4BED390")]
	private void EnsureItemSourceCanBeResized()
	{
	}

	[Token(Token = "0x60000C9")]
	[Address(RVA = "0x4BEE470", Offset = "0x4BEE470", VA = "0x4BEE470")]
	protected BaseListViewController()
	{
	}
}
