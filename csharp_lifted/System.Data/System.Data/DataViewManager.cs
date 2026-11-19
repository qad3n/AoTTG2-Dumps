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
		[Address(RVA = "0x5EAAD50", Offset = "0x5EA9D50", VA = "0x5EAAD50")]
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
		[Address(RVA = "0x5EAAD60", Offset = "0x5EA9D60", VA = "0x5EAAD60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000F8")]
	private int System_002ECollections_002EICollection_002ECount
	{
		[Token(Token = "0x6000582")]
		[Address(RVA = "0x5EAAE40", Offset = "0x5EA9E40", VA = "0x5EAAE40", Slot = "45")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000F9")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x6000583")]
		[Address(RVA = "0x5EAAE50", Offset = "0x5EA9E50", VA = "0x5EAAE50", Slot = "46")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000FA")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x6000584")]
		[Address(RVA = "0x5EAAE60", Offset = "0x5EA9E60", VA = "0x5EAAE60", Slot = "47")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000FB")]
	private bool System_002ECollections_002EIList_002EIsReadOnly
	{
		[Token(Token = "0x6000585")]
		[Address(RVA = "0x5EAAE70", Offset = "0x5EA9E70", VA = "0x5EAAE70", Slot = "38")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000FC")]
	private bool System_002ECollections_002EIList_002EIsFixedSize
	{
		[Token(Token = "0x6000586")]
		[Address(RVA = "0x5EAAE80", Offset = "0x5EA9E80", VA = "0x5EAAE80", Slot = "39")]
		get
		{
			return default(bool);
		}
	}

	// C# has no syntax for parameterized property 'System.Collections.IList.Item'.
	// Its 'property:' attributes below are ignored by the compiler (CS0657).
	[property: Token(Token = "0x170000FD")]
	[Token(Token = "0x6000588")]
	[Address(RVA = "0x5EAAF10", Offset = "0x5EA9F10", VA = "0x5EAAF10", Slot = "33")]
	private object System_002ECollections_002EIList_002Eget_Item(int index)
	{
		return null;
	}

	[Token(Token = "0x6000589")]
	[Address(RVA = "0x5EAAF20", Offset = "0x5EA9F20", VA = "0x5EAAF20", Slot = "34")]
	private void System_002ECollections_002EIList_002Eset_Item(int index, object value)
	{
	}

	[Token(Token = "0x170000FE")]
	private bool System_002EComponentModel_002EIBindingList_002EAllowNew
	{
		[Token(Token = "0x6000591")]
		[Address(RVA = "0x5EAB060", Offset = "0x5EAA060", VA = "0x5EAB060", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000FF")]
	private bool System_002EComponentModel_002EIBindingList_002EAllowEdit
	{
		[Token(Token = "0x6000593")]
		[Address(RVA = "0x5EAB0C0", Offset = "0x5EAA0C0", VA = "0x5EAB0C0", Slot = "18")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000100")]
	private bool System_002EComponentModel_002EIBindingList_002EAllowRemove
	{
		[Token(Token = "0x6000594")]
		[Address(RVA = "0x5EAB0D0", Offset = "0x5EAA0D0", VA = "0x5EAB0D0", Slot = "19")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000101")]
	private bool System_002EComponentModel_002EIBindingList_002ESupportsChangeNotification
	{
		[Token(Token = "0x6000595")]
		[Address(RVA = "0x5EAB0E0", Offset = "0x5EAA0E0", VA = "0x5EAB0E0", Slot = "20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000102")]
	private bool System_002EComponentModel_002EIBindingList_002ESupportsSearching
	{
		[Token(Token = "0x6000596")]
		[Address(RVA = "0x5EAB0F0", Offset = "0x5EAA0F0", VA = "0x5EAB0F0", Slot = "21")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000103")]
	private bool System_002EComponentModel_002EIBindingList_002ESupportsSorting
	{
		[Token(Token = "0x6000597")]
		[Address(RVA = "0x5EAB100", Offset = "0x5EAA100", VA = "0x5EAB100", Slot = "22")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000104")]
	private bool System_002EComponentModel_002EIBindingList_002EIsSorted
	{
		[Token(Token = "0x6000598")]
		[Address(RVA = "0x5EAB110", Offset = "0x5EAA110", VA = "0x5EAB110", Slot = "23")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000105")]
	private PropertyDescriptor System_002EComponentModel_002EIBindingList_002ESortProperty
	{
		[Token(Token = "0x6000599")]
		[Address(RVA = "0x5EAB160", Offset = "0x5EAA160", VA = "0x5EAB160", Slot = "24")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000106")]
	private ListSortDirection System_002EComponentModel_002EIBindingList_002ESortDirection
	{
		[Token(Token = "0x600059A")]
		[Address(RVA = "0x5EAB1B0", Offset = "0x5EAA1B0", VA = "0x5EAB1B0", Slot = "25")]
		get
		{
			return default(ListSortDirection);
		}
	}

	[Token(Token = "0x1400000B")]
	public event ListChangedEventHandler ListChanged
	{
		[Token(Token = "0x600059B")]
		[Address(RVA = "0x5EAB200", Offset = "0x5EAA200", VA = "0x5EAB200", Slot = "26")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600059C")]
		[Address(RVA = "0x5EAB290", Offset = "0x5EAA290", VA = "0x5EAB290", Slot = "27")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x600057E")]
	[Address(RVA = "0x5EAAA90", Offset = "0x5EA9A90", VA = "0x5EAAA90")]
	internal DataViewManager(DataSet dataSet, bool locked)
	{
	}

	[Token(Token = "0x6000581")]
	[Address(RVA = "0x5EAAD70", Offset = "0x5EA9D70", VA = "0x5EAAD70", Slot = "48")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000587")]
	[Address(RVA = "0x5EAAE90", Offset = "0x5EA9E90", VA = "0x5EAAE90", Slot = "44")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x600058A")]
	[Address(RVA = "0x5EAAF50", Offset = "0x5EA9F50", VA = "0x5EAAF50", Slot = "35")]
	private int System_002ECollections_002EIList_002EAdd(object value)
	{
		return default(int);
	}

	[Token(Token = "0x600058B")]
	[Address(RVA = "0x5EAAF80", Offset = "0x5EA9F80", VA = "0x5EAAF80", Slot = "37")]
	private void System_002ECollections_002EIList_002EClear()
	{
	}

	[Token(Token = "0x600058C")]
	[Address(RVA = "0x5EAAFB0", Offset = "0x5EA9FB0", VA = "0x5EAAFB0", Slot = "36")]
	private bool System_002ECollections_002EIList_002EContains(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x600058D")]
	[Address(RVA = "0x5EAAFC0", Offset = "0x5EA9FC0", VA = "0x5EAAFC0", Slot = "40")]
	private int System_002ECollections_002EIList_002EIndexOf(object value)
	{
		return default(int);
	}

	[Token(Token = "0x600058E")]
	[Address(RVA = "0x5EAAFD0", Offset = "0x5EA9FD0", VA = "0x5EAAFD0", Slot = "41")]
	private void System_002ECollections_002EIList_002EInsert(int index, object value)
	{
	}

	[Token(Token = "0x600058F")]
	[Address(RVA = "0x5EAB000", Offset = "0x5EAA000", VA = "0x5EAB000", Slot = "42")]
	private void System_002ECollections_002EIList_002ERemove(object value)
	{
	}

	[Token(Token = "0x6000590")]
	[Address(RVA = "0x5EAB030", Offset = "0x5EAA030", VA = "0x5EAB030", Slot = "43")]
	private void System_002ECollections_002EIList_002ERemoveAt(int index)
	{
	}

	[Token(Token = "0x6000592")]
	[Address(RVA = "0x5EAB070", Offset = "0x5EAA070", VA = "0x5EAB070", Slot = "17")]
	private object System_002EComponentModel_002EIBindingList_002EAddNew()
	{
		return null;
	}

	[Token(Token = "0x600059D")]
	[Address(RVA = "0x5EAB320", Offset = "0x5EAA320", VA = "0x5EAB320", Slot = "28")]
	private void System_002EComponentModel_002EIBindingList_002EAddIndex(PropertyDescriptor property)
	{
	}

	[Token(Token = "0x600059E")]
	[Address(RVA = "0x5EAB330", Offset = "0x5EAA330", VA = "0x5EAB330", Slot = "29")]
	private void System_002EComponentModel_002EIBindingList_002EApplySort(PropertyDescriptor property, ListSortDirection direction)
	{
	}

	[Token(Token = "0x600059F")]
	[Address(RVA = "0x5EAB380", Offset = "0x5EAA380", VA = "0x5EAB380", Slot = "30")]
	private int System_002EComponentModel_002EIBindingList_002EFind(PropertyDescriptor property, object key)
	{
		return default(int);
	}

	[Token(Token = "0x60005A0")]
	[Address(RVA = "0x5EAB3D0", Offset = "0x5EAA3D0", VA = "0x5EAB3D0", Slot = "31")]
	private void System_002EComponentModel_002EIBindingList_002ERemoveIndex(PropertyDescriptor property)
	{
	}

	[Token(Token = "0x60005A1")]
	[Address(RVA = "0x5EAB3E0", Offset = "0x5EAA3E0", VA = "0x5EAB3E0", Slot = "32")]
	private void System_002EComponentModel_002EIBindingList_002ERemoveSort()
	{
	}

	[Token(Token = "0x60005A2")]
	[Address(RVA = "0x5EAB430", Offset = "0x5EAA430", VA = "0x5EAB430", Slot = "49")]
	private string System_002EComponentModel_002EITypedList_002EGetListName(PropertyDescriptor[] listAccessors)
	{
		return null;
	}

	[Token(Token = "0x60005A3")]
	[Address(RVA = "0x5EAB4B0", Offset = "0x5EAA4B0", VA = "0x5EAB4B0", Slot = "50")]
	private PropertyDescriptorCollection System_002EComponentModel_002EITypedList_002EGetItemProperties(PropertyDescriptor[] listAccessors)
	{
		return null;
	}

	[Token(Token = "0x60005A4")]
	[Address(RVA = "0x5EAB630", Offset = "0x5EAA630", VA = "0x5EAB630")]
	public DataView CreateDataView(DataTable table)
	{
		return null;
	}

	[Token(Token = "0x60005A5")]
	[Address(RVA = "0x5EAB700", Offset = "0x5EAA700", VA = "0x5EAB700", Slot = "51")]
	protected virtual void OnListChanged(ListChangedEventArgs e)
	{
	}

	[Token(Token = "0x60005A6")]
	[Address(RVA = "0x5EAB810", Offset = "0x5EAA810", VA = "0x5EAB810", Slot = "52")]
	protected virtual void TableCollectionChanged(object sender, CollectionChangeEventArgs e)
	{
	}

	[Token(Token = "0x60005A7")]
	[Address(RVA = "0x5EABA70", Offset = "0x5EAAA70", VA = "0x5EABA70", Slot = "53")]
	protected virtual void RelationCollectionChanged(object sender, CollectionChangeEventArgs e)
	{
	}
}
