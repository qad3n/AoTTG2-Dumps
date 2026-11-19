// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.BaseListViewController
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000052")]
public abstract class BaseListViewController : CollectionViewController
{
	[Token(Token = "0x40000FD")]
	[FieldOffset(Offset = "0x30")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Action m_itemsSourceSizeChanged;

	[Token(Token = "0x40000FE")]
	[FieldOffset(Offset = "0x38")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Action<IEnumerable<int>> m_itemsAdded;

	[Token(Token = "0x40000FF")]
	[FieldOffset(Offset = "0x40")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private Action<IEnumerable<int>> m_itemsRemoved;

	[Token(Token = "0x17000058")]
	protected BaseListView baseListView
	{
		[Token(Token = "0x60001D4")]
		[Address(RVA = "0x6A90BD0", Offset = "0x6A8FBD0", VA = "0x6A90BD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x14000006")]
	public event Action itemsSourceSizeChanged
	{
		[Token(Token = "0x60001CE")]
		[Address(RVA = "0x6A90830", Offset = "0x6A8F830", VA = "0x6A90830")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60001CF")]
		[Address(RVA = "0x6A908C0", Offset = "0x6A8F8C0", VA = "0x6A908C0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000007")]
	public event Action<IEnumerable<int>> itemsAdded
	{
		[Token(Token = "0x60001D0")]
		[Address(RVA = "0x6A90950", Offset = "0x6A8F950", VA = "0x6A90950")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60001D1")]
		[Address(RVA = "0x6A909F0", Offset = "0x6A8F9F0", VA = "0x6A909F0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000008")]
	public event Action<IEnumerable<int>> itemsRemoved
	{
		[Token(Token = "0x60001D2")]
		[Address(RVA = "0x6A90A90", Offset = "0x6A8FA90", VA = "0x6A90A90")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60001D3")]
		[Address(RVA = "0x6A90B30", Offset = "0x6A8FB30", VA = "0x6A90B30")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60001D5")]
	[Address(RVA = "0x6A90C30", Offset = "0x6A8FC30", VA = "0x6A90C30", Slot = "14")]
	internal override void InvokeMakeItem(ReusableCollectionItem reusableItem)
	{
	}

	[Token(Token = "0x60001D6")]
	[Address(RVA = "0x6A90DA0", Offset = "0x6A8FDA0", VA = "0x6A90DA0")]
	internal void PostInitRegistration(ReusableListViewItem listItem)
	{
	}

	[Token(Token = "0x60001D7")]
	[Address(RVA = "0x6A91250", Offset = "0x6A90250", VA = "0x6A91250", Slot = "15")]
	internal override void SetBindingContext(ReusableCollectionItem reusableItem, int index)
	{
	}

	[Token(Token = "0x60001D8")]
	[Address(RVA = "0x6A91440", Offset = "0x6A90440", VA = "0x6A91440", Slot = "16")]
	internal override void InvokeBindItem(ReusableCollectionItem reusableItem, int index)
	{
	}

	[Token(Token = "0x60001D9")]
	[Address(RVA = "0x6A915B0", Offset = "0x6A905B0", VA = "0x6A915B0", Slot = "24")]
	public virtual bool NeedsDragHandle(int index)
	{
		return default(bool);
	}

	[Token(Token = "0x60001DA")]
	[Address(RVA = "0x6A915C0", Offset = "0x6A905C0", VA = "0x6A915C0", Slot = "25")]
	public virtual void AddItems(int itemCount)
	{
	}

	[Token(Token = "0x60001DB")]
	[Address(RVA = "0x6A91F80", Offset = "0x6A90F80", VA = "0x6A91F80", Slot = "26")]
	public virtual void Move(int index, int newIndex)
	{
	}

	[Token(Token = "0x60001DC")]
	[Address(RVA = "0x6A92380", Offset = "0x6A91380", VA = "0x6A92380", Slot = "27")]
	public virtual void RemoveItem(int index)
	{
	}

	[Token(Token = "0x60001DD")]
	[Address(RVA = "0x6A92500", Offset = "0x6A91500", VA = "0x6A92500", Slot = "28")]
	public virtual void RemoveItems(List<int> indices)
	{
	}

	[Token(Token = "0x60001DE")]
	[Address(RVA = "0x6A929A0", Offset = "0x6A919A0", VA = "0x6A929A0", Slot = "29")]
	internal virtual void RemoveItems(int itemCount)
	{
	}

	[Token(Token = "0x60001DF")]
	[Address(RVA = "0x6A92B70", Offset = "0x6A91B70", VA = "0x6A92B70", Slot = "30")]
	public virtual void ClearItems()
	{
	}

	[Token(Token = "0x60001E0")]
	[Address(RVA = "0x6A91F60", Offset = "0x6A90F60", VA = "0x6A91F60")]
	protected void RaiseOnSizeChanged()
	{
	}

	[Token(Token = "0x60001E1")]
	[Address(RVA = "0x6A91F40", Offset = "0x6A90F40", VA = "0x6A91F40")]
	protected void RaiseItemsAdded(IEnumerable<int> indices)
	{
	}

	[Token(Token = "0x60001E2")]
	[Address(RVA = "0x6A927A0", Offset = "0x6A917A0", VA = "0x6A927A0")]
	protected void RaiseItemsRemoved(IEnumerable<int> indices)
	{
	}

	[Token(Token = "0x60001E3")]
	[Address(RVA = "0x6A91E50", Offset = "0x6A90E50", VA = "0x6A91E50")]
	private static Array AddToArray(Array source, int itemCount)
	{
		return null;
	}

	[Token(Token = "0x60001E4")]
	[Address(RVA = "0x6A927C0", Offset = "0x6A917C0", VA = "0x6A927C0")]
	private static Array RemoveFromArray(Array source, List<int> indicesToRemove)
	{
		return null;
	}

	[Token(Token = "0x60001E5")]
	[Address(RVA = "0x6A920F0", Offset = "0x6A910F0", VA = "0x6A920F0")]
	private void Swap(int lhs, int rhs)
	{
	}

	[Token(Token = "0x60001E6")]
	[Address(RVA = "0x6A91CD0", Offset = "0x6A90CD0", VA = "0x6A91CD0")]
	private void EnsureItemSourceCanBeResized()
	{
	}

	[Token(Token = "0x60001E7")]
	[Address(RVA = "0x6A92D30", Offset = "0x6A91D30", VA = "0x6A92D30")]
	protected BaseListViewController()
	{
	}
}
