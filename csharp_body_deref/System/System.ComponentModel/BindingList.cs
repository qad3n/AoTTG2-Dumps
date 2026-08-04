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
[Token(Token = "0x200026D")]
public class BindingList<T> : Collection<T>, IBindingList, IList, ICollection, IEnumerable, ICancelAddNew, IRaiseItemChangedEvents
{
	[Token(Token = "0x4000D15")]
	[FieldOffset(Offset = "0x0")]
	private int addNewPos;

	[Token(Token = "0x4000D16")]
	[FieldOffset(Offset = "0x0")]
	private bool raiseListChangedEvents;

	[Token(Token = "0x4000D17")]
	[FieldOffset(Offset = "0x0")]
	private bool raiseItemChangedEvents;

	[NonSerialized]
	[Token(Token = "0x4000D18")]
	[FieldOffset(Offset = "0x0")]
	private PropertyDescriptorCollection _itemTypeProperties;

	[NonSerialized]
	[Token(Token = "0x4000D19")]
	[FieldOffset(Offset = "0x0")]
	private PropertyChangedEventHandler _propertyChangedEventHandler;

	[NonSerialized]
	[Token(Token = "0x4000D1A")]
	[FieldOffset(Offset = "0x0")]
	private AddingNewEventHandler _onAddingNew;

	[NonSerialized]
	[Token(Token = "0x4000D1B")]
	[FieldOffset(Offset = "0x0")]
	private ListChangedEventHandler _onListChanged;

	[NonSerialized]
	[Token(Token = "0x4000D1C")]
	[FieldOffset(Offset = "0x0")]
	private int _lastChangeIndex;

	[Token(Token = "0x4000D1D")]
	[FieldOffset(Offset = "0x0")]
	private bool allowNew;

	[Token(Token = "0x4000D1E")]
	[FieldOffset(Offset = "0x0")]
	private bool allowEdit;

	[Token(Token = "0x4000D1F")]
	[FieldOffset(Offset = "0x0")]
	private bool allowRemove;

	[Token(Token = "0x4000D20")]
	[FieldOffset(Offset = "0x0")]
	private bool userSetAllowNew;

	[Token(Token = "0x1700035B")]
	private bool ItemTypeHasDefaultConstructor
	{
		[Token(Token = "0x6000F1D")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700035C")]
	public bool RaiseListChangedEvents
	{
		[Token(Token = "0x6000F25")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000F26")]
		set
		{
		}
	}

	[Token(Token = "0x1700035D")]
	private bool AddingNewHandled
	{
		[Token(Token = "0x6000F32")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700035E")]
	public bool AllowNew
	{
		[Token(Token = "0x6000F34")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000F35")]
		set
		{
		}
	}

	[Token(Token = "0x1700035F")]
	private bool System_002EComponentModel_002EIBindingList_002EAllowNew
	{
		[Token(Token = "0x6000F36")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000360")]
	public bool AllowEdit
	{
		[Token(Token = "0x6000F37")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000F38")]
		set
		{
		}
	}

	[Token(Token = "0x17000361")]
	private bool System_002EComponentModel_002EIBindingList_002EAllowEdit
	{
		[Token(Token = "0x6000F39")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000362")]
	public bool AllowRemove
	{
		[Token(Token = "0x6000F3A")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000F3B")]
		set
		{
		}
	}

	[Token(Token = "0x17000363")]
	private bool System_002EComponentModel_002EIBindingList_002EAllowRemove
	{
		[Token(Token = "0x6000F3C")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000364")]
	private bool System_002EComponentModel_002EIBindingList_002ESupportsChangeNotification
	{
		[Token(Token = "0x6000F3D")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000365")]
	protected virtual bool SupportsChangeNotificationCore
	{
		[Token(Token = "0x6000F3E")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000366")]
	private bool System_002EComponentModel_002EIBindingList_002ESupportsSearching
	{
		[Token(Token = "0x6000F3F")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000367")]
	protected virtual bool SupportsSearchingCore
	{
		[Token(Token = "0x6000F40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000368")]
	private bool System_002EComponentModel_002EIBindingList_002ESupportsSorting
	{
		[Token(Token = "0x6000F41")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000369")]
	protected virtual bool SupportsSortingCore
	{
		[Token(Token = "0x6000F42")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700036A")]
	private bool System_002EComponentModel_002EIBindingList_002EIsSorted
	{
		[Token(Token = "0x6000F43")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700036B")]
	protected virtual bool IsSortedCore
	{
		[Token(Token = "0x6000F44")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700036C")]
	private PropertyDescriptor System_002EComponentModel_002EIBindingList_002ESortProperty
	{
		[Token(Token = "0x6000F45")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700036D")]
	protected virtual PropertyDescriptor SortPropertyCore
	{
		[Token(Token = "0x6000F46")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700036E")]
	private ListSortDirection System_002EComponentModel_002EIBindingList_002ESortDirection
	{
		[Token(Token = "0x6000F47")]
		get
		{
			return default(ListSortDirection);
		}
	}

	[Token(Token = "0x1700036F")]
	protected virtual ListSortDirection SortDirectionCore
	{
		[Token(Token = "0x6000F48")]
		get
		{
			return default(ListSortDirection);
		}
	}

	[Token(Token = "0x17000370")]
	private bool System_002EComponentModel_002EIRaiseItemChangedEvents_002ERaisesItemChangedEvents
	{
		[Token(Token = "0x6000F54")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x14000005")]
	public event AddingNewEventHandler AddingNew
	{
		[Token(Token = "0x6000F1E")]
		add
		{
		}
		[Token(Token = "0x6000F1F")]
		remove
		{
		}
	}

	[Token(Token = "0x14000006")]
	public event ListChangedEventHandler ListChanged
	{
		[Token(Token = "0x6000F22")]
		add
		{
		}
		[Token(Token = "0x6000F23")]
		remove
		{
		}
	}

	[Token(Token = "0x6000F1A")]
	public BindingList()
	{
	}

	[Token(Token = "0x6000F1B")]
	public BindingList(IList<T> list)
	{
	}

	[Token(Token = "0x6000F1C")]
	private void Initialize()
	{
	}

	[Token(Token = "0x6000F20")]
	protected virtual void OnAddingNew(AddingNewEventArgs e)
	{
	}

	[Token(Token = "0x6000F21")]
	private object FireAddingNew()
	{
		return null;
	}

	[Token(Token = "0x6000F24")]
	protected virtual void OnListChanged(ListChangedEventArgs e)
	{
	}

	[Token(Token = "0x6000F27")]
	public void ResetBindings()
	{
	}

	[Token(Token = "0x6000F28")]
	public void ResetItem(int position)
	{
	}

	[Token(Token = "0x6000F29")]
	private void FireListChanged(ListChangedType type, int index)
	{
	}

	[Token(Token = "0x6000F2A")]
	protected override void ClearItems()
	{
	}

	[Token(Token = "0x6000F2B")]
	protected override void InsertItem(int index, T item)
	{
	}

	[Token(Token = "0x6000F2C")]
	protected override void RemoveItem(int index)
	{
	}

	[Token(Token = "0x6000F2D")]
	protected override void SetItem(int index, T item)
	{
	}

	[Token(Token = "0x6000F2E")]
	public virtual void CancelNew(int itemIndex)
	{
	}

	[Token(Token = "0x6000F2F")]
	public virtual void EndNew(int itemIndex)
	{
	}

	[Token(Token = "0x6000F30")]
	public T AddNew()
	{
		return (T)null;
	}

	[Token(Token = "0x6000F31")]
	private object System_002EComponentModel_002EIBindingList_002EAddNew()
	{
		return null;
	}

	[Token(Token = "0x6000F33")]
	protected virtual object AddNewCore()
	{
		return null;
	}

	[Token(Token = "0x6000F49")]
	private void System_002EComponentModel_002EIBindingList_002EApplySort(PropertyDescriptor prop, ListSortDirection direction)
	{
	}

	[Token(Token = "0x6000F4A")]
	protected virtual void ApplySortCore(PropertyDescriptor prop, ListSortDirection direction)
	{
	}

	[Token(Token = "0x6000F4B")]
	private void System_002EComponentModel_002EIBindingList_002ERemoveSort()
	{
	}

	[Token(Token = "0x6000F4C")]
	protected virtual void RemoveSortCore()
	{
	}

	[Token(Token = "0x6000F4D")]
	private int System_002EComponentModel_002EIBindingList_002EFind(PropertyDescriptor prop, object key)
	{
		return default(int);
	}

	[Token(Token = "0x6000F4E")]
	protected virtual int FindCore(PropertyDescriptor prop, object key)
	{
		return default(int);
	}

	[Token(Token = "0x6000F4F")]
	private void System_002EComponentModel_002EIBindingList_002EAddIndex(PropertyDescriptor prop)
	{
	}

	[Token(Token = "0x6000F50")]
	private void System_002EComponentModel_002EIBindingList_002ERemoveIndex(PropertyDescriptor prop)
	{
	}

	[Token(Token = "0x6000F51")]
	private void HookPropertyChanged(T item)
	{
	}

	[Token(Token = "0x6000F52")]
	private void UnhookPropertyChanged(T item)
	{
	}

	[Token(Token = "0x6000F53")]
	private void Child_PropertyChanged(object sender, PropertyChangedEventArgs e)
	{
	}
}
