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
		[Address(RVA = "0x4BF38F0", Offset = "0x4BF38F0", VA = "0x4BF38F0", Slot = "5")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000F7")]
		[Address(RVA = "0x4BF3900", Offset = "0x4BF3900", VA = "0x4BF3900", Slot = "6")]
		set
		{
		}
	}

	[Token(Token = "0x17000023")]
	protected BaseVerticalCollectionView view
	{
		[Token(Token = "0x60000F9")]
		[Address(RVA = "0x4BF3A20", Offset = "0x4BF3A20", VA = "0x4BF3A20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x14000007")]
	public event Action itemsSourceChanged
	{
		[Token(Token = "0x60000F2")]
		[Address(RVA = "0x4BF3670", Offset = "0x4BF3670", VA = "0x4BF3670")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60000F3")]
		[Address(RVA = "0x4BF3700", Offset = "0x4BF3700", VA = "0x4BF3700")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000008")]
	public event Action<int, int> itemIndexChanged
	{
		[Token(Token = "0x60000F4")]
		[Address(RVA = "0x4BF3790", Offset = "0x4BF3790", VA = "0x4BF3790")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60000F5")]
		[Address(RVA = "0x4BF3840", Offset = "0x4BF3840", VA = "0x4BF3840")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60000F8")]
	[Address(RVA = "0x4BF33E0", Offset = "0x4BF33E0", VA = "0x4BF33E0")]
	protected void SetItemsSourceWithoutNotify(IList source)
	{
	}

	[Token(Token = "0x60000FA")]
	[Address(RVA = "0x4BF3A30", Offset = "0x4BF3A30", VA = "0x4BF3A30")]
	public void SetView(BaseVerticalCollectionView collectionView)
	{
	}

	[Token(Token = "0x60000FB")]
	[Address(RVA = "0x4BF3AD0", Offset = "0x4BF3AD0", VA = "0x4BF3AD0", Slot = "7")]
	protected virtual void PrepareView()
	{
	}

	[Token(Token = "0x60000FC")]
	[Address(RVA = "0x4BF3AE0", Offset = "0x4BF3AE0", VA = "0x4BF3AE0", Slot = "8")]
	public virtual void Dispose()
	{
	}

	[Token(Token = "0x60000FD")]
	[Address(RVA = "0x4BF3B30", Offset = "0x4BF3B30", VA = "0x4BF3B30", Slot = "9")]
	public virtual int GetItemsCount()
	{
		return default(int);
	}

	[Token(Token = "0x60000FE")]
	[Address(RVA = "0x4BF3BD0", Offset = "0x4BF3BD0", VA = "0x4BF3BD0", Slot = "10")]
	internal virtual int GetItemsMinCount()
	{
		return default(int);
	}

	[Token(Token = "0x60000FF")]
	[Address(RVA = "0x4BF3BF0", Offset = "0x4BF3BF0", VA = "0x4BF3BF0", Slot = "11")]
	public virtual int GetIndexForId(int id)
	{
		return default(int);
	}

	[Token(Token = "0x6000100")]
	[Address(RVA = "0x4BF3C00", Offset = "0x4BF3C00", VA = "0x4BF3C00", Slot = "12")]
	public virtual int GetIdForIndex(int index)
	{
		return default(int);
	}

	[Token(Token = "0x6000101")]
	[Address(RVA = "0x4BF3C10", Offset = "0x4BF3C10", VA = "0x4BF3C10", Slot = "13")]
	public virtual object GetItemForIndex(int index)
	{
		return null;
	}

	[Token(Token = "0x6000102")]
	[Address(RVA = "0x4BF3D50", Offset = "0x4BF3D50", VA = "0x4BF3D50", Slot = "14")]
	internal virtual void InvokeMakeItem(ReusableCollectionItem reusableItem)
	{
	}

	[Token(Token = "0x6000103")]
	[Address(RVA = "0x4BEC920", Offset = "0x4BEC920", VA = "0x4BEC920", Slot = "15")]
	internal virtual void InvokeBindItem(ReusableCollectionItem reusableItem, int index)
	{
	}

	[Token(Token = "0x6000104")]
	[Address(RVA = "0x4BF3D90", Offset = "0x4BF3D90", VA = "0x4BF3D90", Slot = "16")]
	internal virtual void InvokeUnbindItem(ReusableCollectionItem reusableItem, int index)
	{
	}

	[Token(Token = "0x6000105")]
	[Address(RVA = "0x4BEF820", Offset = "0x4BEF820", VA = "0x4BEF820", Slot = "17")]
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
	[Address(RVA = "0x4BF3A00", Offset = "0x4BF3A00", VA = "0x4BF3A00")]
	protected void RaiseItemsSourceChanged()
	{
	}

	[Token(Token = "0x600010B")]
	[Address(RVA = "0x4BEDA40", Offset = "0x4BEDA40", VA = "0x4BEDA40")]
	protected void RaiseItemIndexChanged(int srcIndex, int dstIndex)
	{
	}

	[Token(Token = "0x600010C")]
	[Address(RVA = "0x4BEE480", Offset = "0x4BEE480", VA = "0x4BEE480")]
	protected CollectionViewController()
	{
	}
}
