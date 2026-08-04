// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.CollectionViewController
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000025")]
public abstract class CollectionViewController : IDisposable
{
	[Token(Token = "0x4000063")]
	[FieldOffset(Offset = "0x10")]
	private BaseVerticalCollectionView m_View;

	[Token(Token = "0x4000064")]
	[FieldOffset(Offset = "0x18")]
	private IList m_ItemsSource;

	[Token(Token = "0x17000022")]
	public virtual IList itemsSource
	{
		[Token(Token = "0x60000F6")]
		[Address(RVA = "0x4F1B220", Offset = "0x4F1B220", VA = "0x4F1B220", Slot = "5")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000F7")]
		[Address(RVA = "0x4F1B230", Offset = "0x4F1B230", VA = "0x4F1B230", Slot = "6")]
		set
		{
		}
	}

	[Token(Token = "0x17000023")]
	protected BaseVerticalCollectionView view
	{
		[Token(Token = "0x60000F9")]
		[Address(RVA = "0x4F1B350", Offset = "0x4F1B350", VA = "0x4F1B350")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x14000007")]
	public event Action itemsSourceChanged
	{
		[Token(Token = "0x60000F2")]
		[Address(RVA = "0x4F1AFA0", Offset = "0x4F1AFA0", VA = "0x4F1AFA0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60000F3")]
		[Address(RVA = "0x4F1B030", Offset = "0x4F1B030", VA = "0x4F1B030")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000008")]
	public event Action<int, int> itemIndexChanged
	{
		[Token(Token = "0x60000F4")]
		[Address(RVA = "0x4F1B0C0", Offset = "0x4F1B0C0", VA = "0x4F1B0C0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60000F5")]
		[Address(RVA = "0x4F1B170", Offset = "0x4F1B170", VA = "0x4F1B170")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60000F8")]
	[Address(RVA = "0x4F1AD10", Offset = "0x4F1AD10", VA = "0x4F1AD10")]
	protected void SetItemsSourceWithoutNotify(IList source)
	{
	}

	[Token(Token = "0x60000FA")]
	[Address(RVA = "0x4F1B360", Offset = "0x4F1B360", VA = "0x4F1B360")]
	public void SetView(BaseVerticalCollectionView collectionView)
	{
	}

	[Token(Token = "0x60000FB")]
	[Address(RVA = "0x4F1B400", Offset = "0x4F1B400", VA = "0x4F1B400", Slot = "7")]
	protected virtual void PrepareView()
	{
	}

	[Token(Token = "0x60000FC")]
	[Address(RVA = "0x4F1B410", Offset = "0x4F1B410", VA = "0x4F1B410", Slot = "8")]
	public virtual void Dispose()
	{
	}

	[Token(Token = "0x60000FD")]
	[Address(RVA = "0x4F1B460", Offset = "0x4F1B460", VA = "0x4F1B460", Slot = "9")]
	public virtual int GetItemsCount()
	{
		return default(int);
	}

	[Token(Token = "0x60000FE")]
	[Address(RVA = "0x4F1B500", Offset = "0x4F1B500", VA = "0x4F1B500", Slot = "10")]
	internal virtual int GetItemsMinCount()
	{
		return default(int);
	}

	[Token(Token = "0x60000FF")]
	[Address(RVA = "0x4F1B520", Offset = "0x4F1B520", VA = "0x4F1B520", Slot = "11")]
	public virtual int GetIndexForId(int id)
	{
		return default(int);
	}

	[Token(Token = "0x6000100")]
	[Address(RVA = "0x4F1B530", Offset = "0x4F1B530", VA = "0x4F1B530", Slot = "12")]
	public virtual int GetIdForIndex(int index)
	{
		return default(int);
	}

	[Token(Token = "0x6000101")]
	[Address(RVA = "0x4F1B540", Offset = "0x4F1B540", VA = "0x4F1B540", Slot = "13")]
	public virtual object GetItemForIndex(int index)
	{
		return null;
	}

	[Token(Token = "0x6000102")]
	[Address(RVA = "0x4F1B680", Offset = "0x4F1B680", VA = "0x4F1B680", Slot = "14")]
	internal virtual void InvokeMakeItem(ReusableCollectionItem reusableItem)
	{
	}

	[Token(Token = "0x6000103")]
	[Address(RVA = "0x4F14250", Offset = "0x4F14250", VA = "0x4F14250", Slot = "15")]
	internal virtual void InvokeBindItem(ReusableCollectionItem reusableItem, int index)
	{
	}

	[Token(Token = "0x6000104")]
	[Address(RVA = "0x4F1B6C0", Offset = "0x4F1B6C0", VA = "0x4F1B6C0", Slot = "16")]
	internal virtual void InvokeUnbindItem(ReusableCollectionItem reusableItem, int index)
	{
	}

	[Token(Token = "0x6000105")]
	[Address(RVA = "0x4F17150", Offset = "0x4F17150", VA = "0x4F17150", Slot = "17")]
	internal virtual void InvokeDestroyItem(ReusableCollectionItem reusableItem)
	{
	}

	[Token(Token = "0x6000106")]
	protected abstract VisualElement MakeItem();

	[Token(Token = "0x6000107")]
	protected abstract void BindItem(VisualElement element, int index);

	[Token(Token = "0x6000108")]
	protected abstract void UnbindItem(VisualElement element, int index);

	[Token(Token = "0x6000109")]
	protected abstract void DestroyItem(VisualElement element);

	[Token(Token = "0x600010A")]
	[Address(RVA = "0x4F1B330", Offset = "0x4F1B330", VA = "0x4F1B330")]
	protected void RaiseItemsSourceChanged()
	{
	}

	[Token(Token = "0x600010B")]
	[Address(RVA = "0x4F15370", Offset = "0x4F15370", VA = "0x4F15370")]
	protected void RaiseItemIndexChanged(int srcIndex, int dstIndex)
	{
	}

	[Token(Token = "0x600010C")]
	[Address(RVA = "0x4F15DB0", Offset = "0x4F15DB0", VA = "0x4F15DB0")]
	protected CollectionViewController()
	{
	}
}
