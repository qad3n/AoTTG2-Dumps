// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.DataViewManager
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.ComponentModel;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x2000053")]
public class DataViewManager : MarshalByValueComponent, IBindingList, IList, ICollection, IEnumerable, ITypedList
{
	[Token(Token = "0x400019D")]
	[FieldOffset(Offset = "0x20")]
	private DataViewSettingCollection _dataViewSettingsCollection;

	[Token(Token = "0x400019E")]
	[FieldOffset(Offset = "0x28")]
	private DataSet _dataSet;

	[Token(Token = "0x400019F")]
	[FieldOffset(Offset = "0x30")]
	private DataViewManagerListItemTypeDescriptor _item;

	[Token(Token = "0x40001A0")]
	[FieldOffset(Offset = "0x38")]
	private bool _locked;

	[Token(Token = "0x40001A1")]
	[FieldOffset(Offset = "0x3C")]
	internal int _nViews;

	[Token(Token = "0x40001A2")]
	[FieldOffset(Offset = "0x0")]
	private static NotSupportedException s_notSupported;

	[Token(Token = "0x40001A3")]
	[FieldOffset(Offset = "0x40")]
	[CompilerGenerated]
	private ListChangedEventHandler m_ListChanged;

	[Token(Token = "0x170000F6")]
	[DefaultValue(null)]
	public DataSet DataSet
	{
		[Token(Token = "0x600057F")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000F7")]
	[DesignerSerializationVisibility(DesignerSerializationVisibility.Content)]
	public DataViewSettingCollection DataViewSettings
	{
		[Token(Token = "0x6000580")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000F8")]
	private int System_002ECollections_002EICollection_002ECount
	{
		[Token(Token = "0x6000582")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "45")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000F9")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x6000583")]
		[Address(RVA = "0x611510", Offset = "0x60FB10", VA = "0x180611510", Slot = "46")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000FA")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x6000584")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "47")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000FB")]
	private bool System_002ECollections_002EIList_002EIsReadOnly
	{
		[Token(Token = "0x6000585")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "38")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000FC")]
	private bool System_002ECollections_002EIList_002EIsFixedSize
	{
		[Token(Token = "0x6000586")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "39")]
		get
		{
			return default(bool);
		}
	}

	// C# has no syntax for parameterized property 'System.Collections.IList.Item'.
	// Its 'property:' attributes below are ignored by the compiler (CS0657).
	[property: Token(Token = "0x170000FD")]
	[Token(Token = "0x6000588")]
	[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0", Slot = "33")]
	private object System_002ECollections_002EIList_002Eget_Item(int index)
	{
		return null;
	}

	[Token(Token = "0x6000589")]
	[Address(RVA = "0x250B3A0", Offset = "0x25099A0", VA = "0x18250B3A0", Slot = "34")]
	private void System_002ECollections_002EIList_002Eset_Item(int index, object value)
	{
	}

	[Token(Token = "0x170000FE")]
	private bool System_002EComponentModel_002EIBindingList_002EAllowNew
	{
		[Token(Token = "0x6000591")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000FF")]
	private bool System_002EComponentModel_002EIBindingList_002EAllowEdit
	{
		[Token(Token = "0x6000593")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "18")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000100")]
	private bool System_002EComponentModel_002EIBindingList_002EAllowRemove
	{
		[Token(Token = "0x6000594")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "19")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000101")]
	private bool System_002EComponentModel_002EIBindingList_002ESupportsChangeNotification
	{
		[Token(Token = "0x6000595")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000102")]
	private bool System_002EComponentModel_002EIBindingList_002ESupportsSearching
	{
		[Token(Token = "0x6000596")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "21")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000103")]
	private bool System_002EComponentModel_002EIBindingList_002ESupportsSorting
	{
		[Token(Token = "0x6000597")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "22")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000104")]
	private bool System_002EComponentModel_002EIBindingList_002EIsSorted
	{
		[Token(Token = "0x6000598")]
		[Address(RVA = "0x250B510", Offset = "0x2509B10", VA = "0x18250B510", Slot = "23")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000105")]
	private PropertyDescriptor System_002EComponentModel_002EIBindingList_002ESortProperty
	{
		[Token(Token = "0x6000599")]
		[Address(RVA = "0x250B5B0", Offset = "0x2509BB0", VA = "0x18250B5B0", Slot = "24")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000106")]
	private ListSortDirection System_002EComponentModel_002EIBindingList_002ESortDirection
	{
		[Token(Token = "0x600059A")]
		[Address(RVA = "0x250B560", Offset = "0x2509B60", VA = "0x18250B560", Slot = "25")]
		get
		{
			return default(ListSortDirection);
		}
	}

	[Token(Token = "0x1400000B")]
	public event ListChangedEventHandler ListChanged
	{
		[Token(Token = "0x600059B")]
		[Address(RVA = "0x250BD50", Offset = "0x250A350", VA = "0x18250BD50", Slot = "26")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600059C")]
		[Address(RVA = "0x250BDF0", Offset = "0x250A3F0", VA = "0x18250BDF0", Slot = "27")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x600057E")]
	[Address(RVA = "0x250BB20", Offset = "0x250A120", VA = "0x18250BB20")]
	internal DataViewManager(DataSet dataSet, bool locked)
	{
	}

	[Token(Token = "0x6000581")]
	[Address(RVA = "0x250B1A0", Offset = "0x25097A0", VA = "0x18250B1A0", Slot = "48")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000587")]
	[Address(RVA = "0x250B120", Offset = "0x2509720", VA = "0x18250B120", Slot = "44")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x600058A")]
	[Address(RVA = "0x250B280", Offset = "0x2509880", VA = "0x18250B280", Slot = "35")]
	private int System_002ECollections_002EIList_002EAdd(object value)
	{
		return default(int);
	}

	[Token(Token = "0x600058B")]
	[Address(RVA = "0x250B2B0", Offset = "0x25098B0", VA = "0x18250B2B0", Slot = "37")]
	private void System_002ECollections_002EIList_002EClear()
	{
	}

	[Token(Token = "0x600058C")]
	[Address(RVA = "0x250B2E0", Offset = "0x25098E0", VA = "0x18250B2E0", Slot = "36")]
	private bool System_002ECollections_002EIList_002EContains(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x600058D")]
	[Address(RVA = "0x250B2F0", Offset = "0x25098F0", VA = "0x18250B2F0", Slot = "40")]
	private int System_002ECollections_002EIList_002EIndexOf(object value)
	{
		return default(int);
	}

	[Token(Token = "0x600058E")]
	[Address(RVA = "0x250B310", Offset = "0x2509910", VA = "0x18250B310", Slot = "41")]
	private void System_002ECollections_002EIList_002EInsert(int index, object value)
	{
	}

	[Token(Token = "0x600058F")]
	[Address(RVA = "0x250B370", Offset = "0x2509970", VA = "0x18250B370", Slot = "42")]
	private void System_002ECollections_002EIList_002ERemove(object value)
	{
	}

	[Token(Token = "0x6000590")]
	[Address(RVA = "0x250B340", Offset = "0x2509940", VA = "0x18250B340", Slot = "43")]
	private void System_002ECollections_002EIList_002ERemoveAt(int index)
	{
	}

	[Token(Token = "0x6000592")]
	[Address(RVA = "0x250B3D0", Offset = "0x25099D0", VA = "0x18250B3D0", Slot = "17")]
	private object System_002EComponentModel_002EIBindingList_002EAddNew()
	{
		return null;
	}

	[Token(Token = "0x600059D")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "28")]
	private void System_002EComponentModel_002EIBindingList_002EAddIndex(PropertyDescriptor property)
	{
	}

	[Token(Token = "0x600059E")]
	[Address(RVA = "0x250B420", Offset = "0x2509A20", VA = "0x18250B420", Slot = "29")]
	private void System_002EComponentModel_002EIBindingList_002EApplySort(PropertyDescriptor property, ListSortDirection direction)
	{
	}

	[Token(Token = "0x600059F")]
	[Address(RVA = "0x250B470", Offset = "0x2509A70", VA = "0x18250B470", Slot = "30")]
	private int System_002EComponentModel_002EIBindingList_002EFind(PropertyDescriptor property, object key)
	{
		return default(int);
	}

	[Token(Token = "0x60005A0")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "31")]
	private void System_002EComponentModel_002EIBindingList_002ERemoveIndex(PropertyDescriptor property)
	{
	}

	[Token(Token = "0x60005A1")]
	[Address(RVA = "0x250B4C0", Offset = "0x2509AC0", VA = "0x18250B4C0", Slot = "32")]
	private void System_002EComponentModel_002EIBindingList_002ERemoveSort()
	{
	}

	[Token(Token = "0x60005A2")]
	[Address(RVA = "0x250B790", Offset = "0x2509D90", VA = "0x18250B790", Slot = "49")]
	private string System_002EComponentModel_002EITypedList_002EGetListName(PropertyDescriptor[] listAccessors)
	{
		return null;
	}

	[Token(Token = "0x60005A3")]
	[Address(RVA = "0x250B600", Offset = "0x2509C00", VA = "0x18250B600", Slot = "50")]
	private PropertyDescriptorCollection System_002EComponentModel_002EITypedList_002EGetItemProperties(PropertyDescriptor[] listAccessors)
	{
		return null;
	}

	[Token(Token = "0x60005A4")]
	[Address(RVA = "0x250AE00", Offset = "0x2509400", VA = "0x18250AE00")]
	public DataView CreateDataView(DataTable table)
	{
		return null;
	}

	[Token(Token = "0x60005A5")]
	[Address(RVA = "0x250AEB0", Offset = "0x25094B0", VA = "0x18250AEB0", Slot = "51")]
	protected virtual void OnListChanged(ListChangedEventArgs e)
	{
	}

	[Token(Token = "0x60005A6")]
	[Address(RVA = "0x250B820", Offset = "0x2509E20", VA = "0x18250B820", Slot = "52")]
	protected virtual void TableCollectionChanged(object sender, CollectionChangeEventArgs e)
	{
	}

	[Token(Token = "0x60005A7")]
	[Address(RVA = "0x250AEF0", Offset = "0x25094F0", VA = "0x18250AEF0", Slot = "53")]
	protected virtual void RelationCollectionChanged(object sender, CollectionChangeEventArgs e)
	{
	}
}
