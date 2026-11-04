// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.BaseListViewController
// Update status: CHANGED in this game update
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
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
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
		[Address(RVA = "0x3080700", Offset = "0x307ED00", VA = "0x183080700")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x14000006")]
	public event Action itemsSourceSizeChanged
	{
		[Token(Token = "0x60001CE")]
		[Address(RVA = "0x3080660", Offset = "0x307EC60", VA = "0x183080660")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60001CF")]
		[Address(RVA = "0x30808E0", Offset = "0x307EEE0", VA = "0x1830808E0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000007")]
	public event Action<IEnumerable<int>> itemsAdded
	{
		[Token(Token = "0x60001D0")]
		[Address(RVA = "0x3080500", Offset = "0x307EB00", VA = "0x183080500")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60001D1")]
		[Address(RVA = "0x3080780", Offset = "0x307ED80", VA = "0x183080780")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000008")]
	public event Action<IEnumerable<int>> itemsRemoved
	{
		[Token(Token = "0x60001D2")]
		[Address(RVA = "0x30805B0", Offset = "0x307EBB0", VA = "0x1830805B0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60001D3")]
		[Address(RVA = "0x3080830", Offset = "0x307EE30", VA = "0x183080830")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60001D5")]
	[Address(RVA = "0x307F130", Offset = "0x307D730", VA = "0x18307F130", Slot = "14")]
	internal override void InvokeMakeItem(ReusableCollectionItem reusableItem)
	{
	}

	[Token(Token = "0x60001D6")]
	[Address(RVA = "0x307F440", Offset = "0x307DA40", VA = "0x18307F440")]
	internal void PostInitRegistration(ReusableListViewItem listItem)
	{
	}

	[Token(Token = "0x60001D7")]
	[Address(RVA = "0x3080170", Offset = "0x307E770", VA = "0x183080170", Slot = "15")]
	internal override void SetBindingContext(ReusableCollectionItem reusableItem, int index)
	{
	}

	[Token(Token = "0x60001D8")]
	[Address(RVA = "0x307EFF0", Offset = "0x307D5F0", VA = "0x18307EFF0", Slot = "16")]
	internal override void InvokeBindItem(ReusableCollectionItem reusableItem, int index)
	{
	}

	[Token(Token = "0x60001D9")]
	[Address(RVA = "0x10B79A0", Offset = "0x10B5FA0", VA = "0x1810B79A0", Slot = "24")]
	public virtual bool NeedsDragHandle(int index)
	{
		return default(bool);
	}

	[Token(Token = "0x60001DA")]
	[Address(RVA = "0x307E610", Offset = "0x307CC10", VA = "0x18307E610", Slot = "25")]
	public virtual void AddItems(int itemCount)
	{
	}

	[Token(Token = "0x60001DB")]
	[Address(RVA = "0x307F220", Offset = "0x307D820", VA = "0x18307F220", Slot = "26")]
	public virtual void Move(int index, int newIndex)
	{
	}

	[Token(Token = "0x60001DC")]
	[Address(RVA = "0x307FAC0", Offset = "0x307E0C0", VA = "0x18307FAC0", Slot = "27")]
	public virtual void RemoveItem(int index)
	{
	}

	[Token(Token = "0x60001DD")]
	[Address(RVA = "0x307FDD0", Offset = "0x307E3D0", VA = "0x18307FDD0", Slot = "28")]
	public virtual void RemoveItems(List<int> indices)
	{
	}

	[Token(Token = "0x60001DE")]
	[Address(RVA = "0x307FC30", Offset = "0x307E230", VA = "0x18307FC30", Slot = "29")]
	internal virtual void RemoveItems(int itemCount)
	{
	}

	[Token(Token = "0x60001DF")]
	[Address(RVA = "0x307ED90", Offset = "0x307D390", VA = "0x18307ED90", Slot = "30")]
	public virtual void ClearItems()
	{
	}

	[Token(Token = "0x60001E0")]
	[Address(RVA = "0x730AA0", Offset = "0x72F0A0", VA = "0x180730AA0")]
	protected void RaiseOnSizeChanged()
	{
	}

	[Token(Token = "0x60001E1")]
	[Address(RVA = "0x307F8E0", Offset = "0x307DEE0", VA = "0x18307F8E0")]
	protected void RaiseItemsAdded(IEnumerable<int> indices)
	{
	}

	[Token(Token = "0x60001E2")]
	[Address(RVA = "0x307F900", Offset = "0x307DF00", VA = "0x18307F900")]
	protected void RaiseItemsRemoved(IEnumerable<int> indices)
	{
	}

	[Token(Token = "0x60001E3")]
	[Address(RVA = "0x307EC80", Offset = "0x307D280", VA = "0x18307EC80")]
	private static Array AddToArray(Array source, int itemCount)
	{
		return null;
	}

	[Token(Token = "0x60001E4")]
	[Address(RVA = "0x307F920", Offset = "0x307DF20", VA = "0x18307F920")]
	private static Array RemoveFromArray(Array source, List<int> indicesToRemove)
	{
		return null;
	}

	[Token(Token = "0x60001E5")]
	[Address(RVA = "0x3080320", Offset = "0x307E920", VA = "0x183080320")]
	private void Swap(int lhs, int rhs)
	{
	}

	[Token(Token = "0x60001E6")]
	[Address(RVA = "0x307EEA0", Offset = "0x307D4A0", VA = "0x18307EEA0")]
	private void EnsureItemSourceCanBeResized()
	{
	}

	[Token(Token = "0x60001E7")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	protected BaseListViewController()
	{
	}
}
