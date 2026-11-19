// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.BindingList
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Serializable]
[Token(Token = "0x2000139")]
public class BindingList<T> : Collection<T>, IBindingList, IList, ICollection, IEnumerable, ICancelAddNew, IRaiseItemChangedEvents
{
	[Token(Token = "0x400057D")]
	[FieldOffset(Offset = "0x0")]
	private int addNewPos;

	[Token(Token = "0x400057E")]
	[FieldOffset(Offset = "0x0")]
	private bool raiseListChangedEvents;

	[Token(Token = "0x400057F")]
	[FieldOffset(Offset = "0x0")]
	private bool raiseItemChangedEvents;

	[NonSerialized]
	[Token(Token = "0x4000580")]
	[FieldOffset(Offset = "0x0")]
	private PropertyDescriptorCollection _itemTypeProperties;

	[NonSerialized]
	[Token(Token = "0x4000581")]
	[FieldOffset(Offset = "0x0")]
	private PropertyChangedEventHandler _propertyChangedEventHandler;

	[NonSerialized]
	[Token(Token = "0x4000582")]
	[FieldOffset(Offset = "0x0")]
	private AddingNewEventHandler _onAddingNew;

	[NonSerialized]
	[Token(Token = "0x4000583")]
	[FieldOffset(Offset = "0x0")]
	private ListChangedEventHandler _onListChanged;

	[NonSerialized]
	[Token(Token = "0x4000584")]
	[FieldOffset(Offset = "0x0")]
	private int _lastChangeIndex;

	[Token(Token = "0x4000585")]
	[FieldOffset(Offset = "0x0")]
	private bool allowNew;

	[Token(Token = "0x4000586")]
	[FieldOffset(Offset = "0x0")]
	private bool allowEdit;

	[Token(Token = "0x4000587")]
	[FieldOffset(Offset = "0x0")]
	private bool allowRemove;

	[Token(Token = "0x4000588")]
	[FieldOffset(Offset = "0x0")]
	private bool userSetAllowNew;

	[Token(Token = "0x1700019B")]
	private bool ItemTypeHasDefaultConstructor
	{
		[Token(Token = "0x60007A5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700019C")]
	public bool RaiseListChangedEvents
	{
		[Token(Token = "0x60007AD")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60007AE")]
		set
		{
		}
	}

	[Token(Token = "0x1700019D")]
	private bool AddingNewHandled
	{
		[Token(Token = "0x60007BA")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700019E")]
	public bool AllowNew
	{
		[Token(Token = "0x60007BC")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60007BD")]
		set
		{
		}
	}

	[Token(Token = "0x1700019F")]
	private bool System_002EComponentModel_002EIBindingList_002EAllowNew
	{
		[Token(Token = "0x60007BE")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001A0")]
	public bool AllowEdit
	{
		[Token(Token = "0x60007BF")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60007C0")]
		set
		{
		}
	}

	[Token(Token = "0x170001A1")]
	private bool System_002EComponentModel_002EIBindingList_002EAllowEdit
	{
		[Token(Token = "0x60007C1")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001A2")]
	public bool AllowRemove
	{
		[Token(Token = "0x60007C2")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60007C3")]
		set
		{
		}
	}

	[Token(Token = "0x170001A3")]
	private bool System_002EComponentModel_002EIBindingList_002EAllowRemove
	{
		[Token(Token = "0x60007C4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001A4")]
	private bool System_002EComponentModel_002EIBindingList_002ESupportsChangeNotification
	{
		[Token(Token = "0x60007C5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001A5")]
	protected virtual bool SupportsChangeNotificationCore
	{
		[Token(Token = "0x60007C6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001A6")]
	private bool System_002EComponentModel_002EIBindingList_002ESupportsSearching
	{
		[Token(Token = "0x60007C7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001A7")]
	protected virtual bool SupportsSearchingCore
	{
		[Token(Token = "0x60007C8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001A8")]
	private bool System_002EComponentModel_002EIBindingList_002ESupportsSorting
	{
		[Token(Token = "0x60007C9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001A9")]
	protected virtual bool SupportsSortingCore
	{
		[Token(Token = "0x60007CA")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001AA")]
	private bool System_002EComponentModel_002EIBindingList_002EIsSorted
	{
		[Token(Token = "0x60007CB")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001AB")]
	protected virtual bool IsSortedCore
	{
		[Token(Token = "0x60007CC")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001AC")]
	private PropertyDescriptor System_002EComponentModel_002EIBindingList_002ESortProperty
	{
		[Token(Token = "0x60007CD")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001AD")]
	protected virtual PropertyDescriptor SortPropertyCore
	{
		[Token(Token = "0x60007CE")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001AE")]
	private ListSortDirection System_002EComponentModel_002EIBindingList_002ESortDirection
	{
		[Token(Token = "0x60007CF")]
		get
		{
			return default(ListSortDirection);
		}
	}

	[Token(Token = "0x170001AF")]
	protected virtual ListSortDirection SortDirectionCore
	{
		[Token(Token = "0x60007D0")]
		get
		{
			return default(ListSortDirection);
		}
	}

	[Token(Token = "0x170001B0")]
	private bool System_002EComponentModel_002EIRaiseItemChangedEvents_002ERaisesItemChangedEvents
	{
		[Token(Token = "0x60007DC")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x14000005")]
	public event AddingNewEventHandler AddingNew
	{
		[Token(Token = "0x60007A6")]
		add
		{
		}
		[Token(Token = "0x60007A7")]
		remove
		{
		}
	}

	[Token(Token = "0x14000006")]
	public event ListChangedEventHandler ListChanged
	{
		[Token(Token = "0x60007AA")]
		add
		{
		}
		[Token(Token = "0x60007AB")]
		remove
		{
		}
	}

	[Token(Token = "0x60007A2")]
	public BindingList()
	{
	}

	[Token(Token = "0x60007A3")]
	public BindingList(IList<T> list)
	{
	}

	[Token(Token = "0x60007A4")]
	private void Initialize()
	{
	}

	[Token(Token = "0x60007A8")]
	protected virtual void OnAddingNew(AddingNewEventArgs e)
	{
	}

	[Token(Token = "0x60007A9")]
	private object FireAddingNew()
	{
		return null;
	}

	[Token(Token = "0x60007AC")]
	protected virtual void OnListChanged(ListChangedEventArgs e)
	{
	}

	[Token(Token = "0x60007AF")]
	public void ResetBindings()
	{
	}

	[Token(Token = "0x60007B0")]
	public void ResetItem(int position)
	{
	}

	[Token(Token = "0x60007B1")]
	private void FireListChanged(ListChangedType type, int index)
	{
	}

	[Token(Token = "0x60007B2")]
	protected override void ClearItems()
	{
	}

	[Token(Token = "0x60007B3")]
	protected override void InsertItem(int index, T item)
	{
	}

	[Token(Token = "0x60007B4")]
	protected override void RemoveItem(int index)
	{
	}

	[Token(Token = "0x60007B5")]
	protected override void SetItem(int index, T item)
	{
	}

	[Token(Token = "0x60007B6")]
	public virtual void CancelNew(int itemIndex)
	{
	}

	[Token(Token = "0x60007B7")]
	public virtual void EndNew(int itemIndex)
	{
	}

	[Token(Token = "0x60007B8")]
	public T AddNew()
	{
		return (T)null;
	}

	[Token(Token = "0x60007B9")]
	private object System_002EComponentModel_002EIBindingList_002EAddNew()
	{
		return null;
	}

	[Token(Token = "0x60007BB")]
	protected virtual object AddNewCore()
	{
		return null;
	}

	[Token(Token = "0x60007D1")]
	private void System_002EComponentModel_002EIBindingList_002EApplySort(PropertyDescriptor prop, ListSortDirection direction)
	{
	}

	[Token(Token = "0x60007D2")]
	protected virtual void ApplySortCore(PropertyDescriptor prop, ListSortDirection direction)
	{
	}

	[Token(Token = "0x60007D3")]
	private void System_002EComponentModel_002EIBindingList_002ERemoveSort()
	{
	}

	[Token(Token = "0x60007D4")]
	protected virtual void RemoveSortCore()
	{
	}

	[Token(Token = "0x60007D5")]
	private int System_002EComponentModel_002EIBindingList_002EFind(PropertyDescriptor prop, object key)
	{
		return default(int);
	}

	[Token(Token = "0x60007D6")]
	protected virtual int FindCore(PropertyDescriptor prop, object key)
	{
		return default(int);
	}

	[Token(Token = "0x60007D7")]
	private void System_002EComponentModel_002EIBindingList_002EAddIndex(PropertyDescriptor prop)
	{
	}

	[Token(Token = "0x60007D8")]
	private void System_002EComponentModel_002EIBindingList_002ERemoveIndex(PropertyDescriptor prop)
	{
	}

	[Token(Token = "0x60007D9")]
	private void HookPropertyChanged(T item)
	{
	}

	[Token(Token = "0x60007DA")]
	private void UnhookPropertyChanged(T item)
	{
	}

	[Token(Token = "0x60007DB")]
	private void Child_PropertyChanged(object sender, PropertyChangedEventArgs e)
	{
	}
}
