// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.CollectionViewController
// Update status: CHANGED in this game update
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
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Action m_itemsSourceChanged;

	[Token(Token = "0x4000130")]
	[FieldOffset(Offset = "0x28")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Action<int, int> m_itemIndexChanged;

	[Token(Token = "0x17000069")]
	public virtual IList itemsSource
	{
		[Token(Token = "0x6000251")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "5")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000252")]
		[Address(RVA = "0x30AD670", Offset = "0x30ABC70", VA = "0x1830AD670", Slot = "6")]
		set
		{
		}
	}

	[Token(Token = "0x1700006A")]
	protected BaseVerticalCollectionView view
	{
		[Token(Token = "0x6000254")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1400000A")]
	public event Action itemsSourceChanged
	{
		[Token(Token = "0x600024D")]
		[Address(RVA = "0x30AD480", Offset = "0x30ABA80", VA = "0x1830AD480")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600024E")]
		[Address(RVA = "0x30AD5D0", Offset = "0x30ABBD0", VA = "0x1830AD5D0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x1400000B")]
	public event Action<int, int> itemIndexChanged
	{
		[Token(Token = "0x600024F")]
		[Address(RVA = "0x30AD3D0", Offset = "0x30AB9D0", VA = "0x1830AD3D0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000250")]
		[Address(RVA = "0x30AD520", Offset = "0x30ABB20", VA = "0x1830AD520")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000253")]
	[Address(RVA = "0x30AD2C0", Offset = "0x30AB8C0", VA = "0x1830AD2C0")]
	private protected void SetHierarchyViewModelWithoutNotify(HierarchyViewModel source)
	{
	}

	[Token(Token = "0x6000255")]
	[Address(RVA = "0x30AD330", Offset = "0x30AB930", VA = "0x1830AD330")]
	public void SetView(BaseVerticalCollectionView collectionView)
	{
	}

	[Token(Token = "0x6000256")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "7")]
	protected virtual void PrepareView()
	{
	}

	[Token(Token = "0x6000257")]
	[Address(RVA = "0x30ACFB0", Offset = "0x30AB5B0", VA = "0x1830ACFB0", Slot = "8")]
	public virtual void Dispose()
	{
	}

	[Token(Token = "0x6000258")]
	[Address(RVA = "0x30AD0A0", Offset = "0x30AB6A0", VA = "0x1830AD0A0", Slot = "9")]
	public virtual int GetItemsCount()
	{
		return default(int);
	}

	[Token(Token = "0x6000259")]
	[Address(RVA = "0x1B78A70", Offset = "0x1B77070", VA = "0x181B78A70", Slot = "10")]
	internal virtual int GetItemsMinCount()
	{
		return default(int);
	}

	[Token(Token = "0x600025A")]
	[Address(RVA = "0x10C75F0", Offset = "0x10C5BF0", VA = "0x1810C75F0", Slot = "11")]
	public virtual int GetIndexForId(int id)
	{
		return default(int);
	}

	[Token(Token = "0x600025B")]
	[Address(RVA = "0x10C75F0", Offset = "0x10C5BF0", VA = "0x1810C75F0", Slot = "12")]
	public virtual int GetIdForIndex(int index)
	{
		return default(int);
	}

	[Token(Token = "0x600025C")]
	[Address(RVA = "0x30AD000", Offset = "0x30AB600", VA = "0x1830AD000", Slot = "13")]
	public virtual object GetItemForIndex(int index)
	{
		return null;
	}

	[Token(Token = "0x600025D")]
	[Address(RVA = "0x30AD220", Offset = "0x30AB820", VA = "0x1830AD220", Slot = "14")]
	internal virtual void InvokeMakeItem(ReusableCollectionItem reusableItem)
	{
	}

	[Token(Token = "0x600025E")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "15")]
	internal virtual void SetBindingContext(ReusableCollectionItem reusableItem, int index)
	{
	}

	[Token(Token = "0x600025F")]
	[Address(RVA = "0x30AD0F0", Offset = "0x30AB6F0", VA = "0x1830AD0F0", Slot = "16")]
	internal virtual void InvokeBindItem(ReusableCollectionItem reusableItem, int index)
	{
	}

	[Token(Token = "0x6000260")]
	[Address(RVA = "0x30AD260", Offset = "0x30AB860", VA = "0x1830AD260", Slot = "17")]
	internal virtual void InvokeUnbindItem(ReusableCollectionItem reusableItem, int index)
	{
	}

	[Token(Token = "0x6000261")]
	[Address(RVA = "0x30AD1F0", Offset = "0x30AB7F0", VA = "0x1830AD1F0", Slot = "18")]
	internal virtual void InvokeDestroyItem(ReusableCollectionItem reusableItem)
	{
	}

	[Token(Token = "0x6000262")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "19")]
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
	[Address(RVA = "0x18F79C0", Offset = "0x18F5FC0", VA = "0x1818F79C0")]
	protected void RaiseItemsSourceChanged()
	{
	}

	[Token(Token = "0x6000268")]
	[Address(RVA = "0x30AD2A0", Offset = "0x30AB8A0", VA = "0x1830AD2A0")]
	protected void RaiseItemIndexChanged(int srcIndex, int dstIndex)
	{
	}

	[Token(Token = "0x6000269")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected CollectionViewController()
	{
	}
}
