// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.CollectionViewController
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Hierarchy;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000059")]
public abstract class CollectionViewController : IDisposable
{
	[Token(Token = "0x400012D")]
	[FieldOffset(Offset = "0x10")]
	private BaseVerticalCollectionView m_View;

	[Token(Token = "0x400012E")]
	[FieldOffset(Offset = "0x18")]
	private IList m_ItemsSource;

	[Token(Token = "0x400012F")]
	[FieldOffset(Offset = "0x20")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private Action m_itemsSourceChanged;

	[Token(Token = "0x4000130")]
	[FieldOffset(Offset = "0x28")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private Action<int, int> m_itemIndexChanged;

	[Token(Token = "0x17000069")]
	public virtual IList itemsSource
	{
		[Token(Token = "0x6000251")]
		[Address(RVA = "0x6A98FA0", Offset = "0x6A97FA0", VA = "0x6A98FA0", Slot = "5")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000252")]
		[Address(RVA = "0x6A98FB0", Offset = "0x6A97FB0", VA = "0x6A98FB0", Slot = "6")]
		set
		{
		}
	}

	[Token(Token = "0x1700006A")]
	protected BaseVerticalCollectionView view
	{
		[Token(Token = "0x6000254")]
		[Address(RVA = "0x6A99320", Offset = "0x6A98320", VA = "0x6A99320")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1400000A")]
	public event Action itemsSourceChanged
	{
		[Token(Token = "0x600024D")]
		[Address(RVA = "0x6A98D40", Offset = "0x6A97D40", VA = "0x6A98D40")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600024E")]
		[Address(RVA = "0x6A98DD0", Offset = "0x6A97DD0", VA = "0x6A98DD0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x1400000B")]
	public event Action<int, int> itemIndexChanged
	{
		[Token(Token = "0x600024F")]
		[Address(RVA = "0x6A98E60", Offset = "0x6A97E60", VA = "0x6A98E60")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000250")]
		[Address(RVA = "0x6A98F00", Offset = "0x6A97F00", VA = "0x6A98F00")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000253")]
	[Address(RVA = "0x6A992C0", Offset = "0x6A982C0", VA = "0x6A992C0")]
	private protected void SetHierarchyViewModelWithoutNotify(HierarchyViewModel source)
	{
	}

	[Token(Token = "0x6000255")]
	[Address(RVA = "0x6A99330", Offset = "0x6A98330", VA = "0x6A99330")]
	public void SetView(BaseVerticalCollectionView collectionView)
	{
	}

	[Token(Token = "0x6000256")]
	[Address(RVA = "0x6A993D0", Offset = "0x6A983D0", VA = "0x6A993D0", Slot = "7")]
	protected virtual void PrepareView()
	{
	}

	[Token(Token = "0x6000257")]
	[Address(RVA = "0x6A993E0", Offset = "0x6A983E0", VA = "0x6A993E0", Slot = "8")]
	public virtual void Dispose()
	{
	}

	[Token(Token = "0x6000258")]
	[Address(RVA = "0x6A99430", Offset = "0x6A98430", VA = "0x6A99430", Slot = "9")]
	public virtual int GetItemsCount()
	{
		return default(int);
	}

	[Token(Token = "0x6000259")]
	[Address(RVA = "0x6A994D0", Offset = "0x6A984D0", VA = "0x6A994D0", Slot = "10")]
	internal virtual int GetItemsMinCount()
	{
		return default(int);
	}

	[Token(Token = "0x600025A")]
	[Address(RVA = "0x6A994F0", Offset = "0x6A984F0", VA = "0x6A994F0", Slot = "11")]
	public virtual int GetIndexForId(int id)
	{
		return default(int);
	}

	[Token(Token = "0x600025B")]
	[Address(RVA = "0x6A99500", Offset = "0x6A98500", VA = "0x6A99500", Slot = "12")]
	public virtual int GetIdForIndex(int index)
	{
		return default(int);
	}

	[Token(Token = "0x600025C")]
	[Address(RVA = "0x6A99510", Offset = "0x6A98510", VA = "0x6A99510", Slot = "13")]
	public virtual object GetItemForIndex(int index)
	{
		return null;
	}

	[Token(Token = "0x600025D")]
	[Address(RVA = "0x6A99650", Offset = "0x6A98650", VA = "0x6A99650", Slot = "14")]
	internal virtual void InvokeMakeItem(ReusableCollectionItem reusableItem)
	{
	}

	[Token(Token = "0x600025E")]
	[Address(RVA = "0x6A99690", Offset = "0x6A98690", VA = "0x6A99690", Slot = "15")]
	internal virtual void SetBindingContext(ReusableCollectionItem reusableItem, int index)
	{
	}

	[Token(Token = "0x600025F")]
	[Address(RVA = "0x6A996A0", Offset = "0x6A986A0", VA = "0x6A996A0", Slot = "16")]
	internal virtual void InvokeBindItem(ReusableCollectionItem reusableItem, int index)
	{
	}

	[Token(Token = "0x6000260")]
	[Address(RVA = "0x6A997B0", Offset = "0x6A987B0", VA = "0x6A997B0", Slot = "17")]
	internal virtual void InvokeUnbindItem(ReusableCollectionItem reusableItem, int index)
	{
	}

	[Token(Token = "0x6000261")]
	[Address(RVA = "0x6A997E0", Offset = "0x6A987E0", VA = "0x6A997E0", Slot = "18")]
	internal virtual void InvokeDestroyItem(ReusableCollectionItem reusableItem)
	{
	}

	[Token(Token = "0x6000262")]
	[Address(RVA = "0x6A99810", Offset = "0x6A98810", VA = "0x6A99810", Slot = "19")]
	internal virtual void PreRefresh()
	{
	}

	[Token(Token = "0x6000263")]
	protected abstract VisualElement MakeItem();

	[Token(Token = "0x6000264")]
	protected abstract void BindItem(VisualElement element, int index);

	[Token(Token = "0x6000265")]
	protected abstract void UnbindItem(VisualElement element, int index);

	[Token(Token = "0x6000266")]
	protected abstract void DestroyItem(VisualElement element);

	[Token(Token = "0x6000267")]
	[Address(RVA = "0x6A992A0", Offset = "0x6A982A0", VA = "0x6A992A0")]
	protected void RaiseItemsSourceChanged()
	{
	}

	[Token(Token = "0x6000268")]
	[Address(RVA = "0x6A99820", Offset = "0x6A98820", VA = "0x6A99820")]
	protected void RaiseItemIndexChanged(int srcIndex, int dstIndex)
	{
	}

	[Token(Token = "0x6000269")]
	[Address(RVA = "0x6A99840", Offset = "0x6A98840", VA = "0x6A99840")]
	protected CollectionViewController()
	{
	}
}
