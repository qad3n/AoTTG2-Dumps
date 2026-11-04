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
[Token(Token = "0x2000178")]
public class BindingList<T> : Collection<T>, IBindingList, IList, ICollection, IEnumerable, ICancelAddNew, IRaiseItemChangedEvents
{
	[Token(Token = "0x400064C")]
	[FieldOffset(Offset = "0x0")]
	private int addNewPos;

	[Token(Token = "0x400064D")]
	[FieldOffset(Offset = "0x0")]
	private bool raiseListChangedEvents;

	[Token(Token = "0x400064E")]
	[FieldOffset(Offset = "0x0")]
	private bool raiseItemChangedEvents;

	[NonSerialized]
	[Token(Token = "0x400064F")]
	[FieldOffset(Offset = "0x0")]
	private PropertyDescriptorCollection _itemTypeProperties;

	[NonSerialized]
	[Token(Token = "0x4000650")]
	[FieldOffset(Offset = "0x0")]
	private PropertyChangedEventHandler _propertyChangedEventHandler;

	[NonSerialized]
	[Token(Token = "0x4000651")]
	[FieldOffset(Offset = "0x0")]
	private AddingNewEventHandler _onAddingNew;

	[NonSerialized]
	[Token(Token = "0x4000652")]
	[FieldOffset(Offset = "0x0")]
	private ListChangedEventHandler _onListChanged;

	[NonSerialized]
	[Token(Token = "0x4000653")]
	[FieldOffset(Offset = "0x0")]
	private int _lastChangeIndex;

	[Token(Token = "0x4000654")]
	[FieldOffset(Offset = "0x0")]
	private bool allowNew;

	[Token(Token = "0x4000655")]
	[FieldOffset(Offset = "0x0")]
	private bool allowEdit;

	[Token(Token = "0x4000656")]
	[FieldOffset(Offset = "0x0")]
	private bool allowRemove;

	[Token(Token = "0x4000657")]
	[FieldOffset(Offset = "0x0")]
	private bool userSetAllowNew;

	[Token(Token = "0x170001CA")]
	private bool ItemTypeHasDefaultConstructor
	{
		[Token(Token = "0x6000965")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001CB")]
	public bool RaiseListChangedEvents
	{
		[Token(Token = "0x600096D")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600096E")]
		set
		{
		}
	}

	[Token(Token = "0x170001CC")]
	private bool AddingNewHandled
	{
		[Token(Token = "0x600097A")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001CD")]
	public bool AllowNew
	{
		[Token(Token = "0x600097C")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600097D")]
		set
		{
		}
	}

	[Token(Token = "0x170001CE")]
	private bool System_002EComponentModel_002EIBindingList_002EAllowNew
	{
		[Token(Token = "0x600097E")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001CF")]
	public bool AllowEdit
	{
		[Token(Token = "0x600097F")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000980")]
		set
		{
		}
	}

	[Token(Token = "0x170001D0")]
	private bool System_002EComponentModel_002EIBindingList_002EAllowEdit
	{
		[Token(Token = "0x6000981")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001D1")]
	public bool AllowRemove
	{
		[Token(Token = "0x6000982")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000983")]
		set
		{
		}
	}

	[Token(Token = "0x170001D2")]
	private bool System_002EComponentModel_002EIBindingList_002EAllowRemove
	{
		[Token(Token = "0x6000984")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001D3")]
	private bool System_002EComponentModel_002EIBindingList_002ESupportsChangeNotification
	{
		[Token(Token = "0x6000985")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001D4")]
	protected virtual bool SupportsChangeNotificationCore
	{
		[Token(Token = "0x6000986")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001D5")]
	private bool System_002EComponentModel_002EIBindingList_002ESupportsSearching
	{
		[Token(Token = "0x6000987")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001D6")]
	protected virtual bool SupportsSearchingCore
	{
		[Token(Token = "0x6000988")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001D7")]
	private bool System_002EComponentModel_002EIBindingList_002ESupportsSorting
	{
		[Token(Token = "0x6000989")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001D8")]
	protected virtual bool SupportsSortingCore
	{
		[Token(Token = "0x600098A")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001D9")]
	private bool System_002EComponentModel_002EIBindingList_002EIsSorted
	{
		[Token(Token = "0x600098B")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001DA")]
	protected virtual bool IsSortedCore
	{
		[Token(Token = "0x600098C")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001DB")]
	private PropertyDescriptor System_002EComponentModel_002EIBindingList_002ESortProperty
	{
		[Token(Token = "0x600098D")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001DC")]
	protected virtual PropertyDescriptor SortPropertyCore
	{
		[Token(Token = "0x600098E")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001DD")]
	private ListSortDirection System_002EComponentModel_002EIBindingList_002ESortDirection
	{
		[Token(Token = "0x600098F")]
		get
		{
			return default(ListSortDirection);
		}
	}

	[Token(Token = "0x170001DE")]
	protected virtual ListSortDirection SortDirectionCore
	{
		[Token(Token = "0x6000990")]
		get
		{
			return default(ListSortDirection);
		}
	}

	[Token(Token = "0x170001DF")]
	private bool System_002EComponentModel_002EIRaiseItemChangedEvents_002ERaisesItemChangedEvents
	{
		[Token(Token = "0x600099C")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x14000005")]
	public event AddingNewEventHandler AddingNew
	{
		[Token(Token = "0x6000966")]
		add
		{
		}
		[Token(Token = "0x6000967")]
		remove
		{
		}
	}

	[Token(Token = "0x14000006")]
	public event ListChangedEventHandler ListChanged
	{
		[Token(Token = "0x600096A")]
		add
		{
		}
		[Token(Token = "0x600096B")]
		remove
		{
		}
	}

	[Token(Token = "0x6000962")]
	public BindingList()
	{
	}

	[Token(Token = "0x6000963")]
	public BindingList(IList<T> list)
	{
	}

	[Token(Token = "0x6000964")]
	private void Initialize()
	{
	}

	[Token(Token = "0x6000968")]
	protected virtual void OnAddingNew(AddingNewEventArgs e)
	{
	}

	[Token(Token = "0x6000969")]
	private object FireAddingNew()
	{
		return null;
	}

	[Token(Token = "0x600096C")]
	protected virtual void OnListChanged(ListChangedEventArgs e)
	{
	}

	[Token(Token = "0x600096F")]
	public void ResetBindings()
	{
	}

	[Token(Token = "0x6000970")]
	public void ResetItem(int position)
	{
	}

	[Token(Token = "0x6000971")]
	private void FireListChanged(ListChangedType type, int index)
	{
	}

	[Token(Token = "0x6000972")]
	protected override void ClearItems()
	{
	}

	[Token(Token = "0x6000973")]
	protected override void InsertItem(int index, T item)
	{
	}

	[Token(Token = "0x6000974")]
	protected override void RemoveItem(int index)
	{
	}

	[Token(Token = "0x6000975")]
	protected override void SetItem(int index, T item)
	{
	}

	[Token(Token = "0x6000976")]
	public virtual void CancelNew(int itemIndex)
	{
	}

	[Token(Token = "0x6000977")]
	public virtual void EndNew(int itemIndex)
	{
	}

	[Token(Token = "0x6000978")]
	public T AddNew()
	{
		return (T)null;
	}

	[Token(Token = "0x6000979")]
	private object System_002EComponentModel_002EIBindingList_002EAddNew()
	{
		return null;
	}

	[Token(Token = "0x600097B")]
	protected virtual object AddNewCore()
	{
		return null;
	}

	[Token(Token = "0x6000991")]
	private void System_002EComponentModel_002EIBindingList_002EApplySort(PropertyDescriptor prop, ListSortDirection direction)
	{
	}

	[Token(Token = "0x6000992")]
	protected virtual void ApplySortCore(PropertyDescriptor prop, ListSortDirection direction)
	{
	}

	[Token(Token = "0x6000993")]
	private void System_002EComponentModel_002EIBindingList_002ERemoveSort()
	{
	}

	[Token(Token = "0x6000994")]
	protected virtual void RemoveSortCore()
	{
	}

	[Token(Token = "0x6000995")]
	private int System_002EComponentModel_002EIBindingList_002EFind(PropertyDescriptor prop, object key)
	{
		return default(int);
	}

	[Token(Token = "0x6000996")]
	protected virtual int FindCore(PropertyDescriptor prop, object key)
	{
		return default(int);
	}

	[Token(Token = "0x6000997")]
	private void System_002EComponentModel_002EIBindingList_002EAddIndex(PropertyDescriptor prop)
	{
	}

	[Token(Token = "0x6000998")]
	private void System_002EComponentModel_002EIBindingList_002ERemoveIndex(PropertyDescriptor prop)
	{
	}

	[Token(Token = "0x6000999")]
	private void HookPropertyChanged(T item)
	{
	}

	[Token(Token = "0x600099A")]
	private void UnhookPropertyChanged(T item)
	{
	}

	[Token(Token = "0x600099B")]
	private void Child_PropertyChanged(object sender, PropertyChangedEventArgs e)
	{
	}
}
