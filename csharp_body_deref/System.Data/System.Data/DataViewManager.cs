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

[Token(Token = "0x2000046")]
public class DataViewManager : MarshalByValueComponent, IBindingList, IList, ICollection, IEnumerable, ITypedList
{
	[Token(Token = "0x4000155")]
	[FieldOffset(Offset = "0x20")]
	private DataViewSettingCollection _dataViewSettingsCollection;

	[Token(Token = "0x4000156")]
	[FieldOffset(Offset = "0x28")]
	private DataSet _dataSet;

	[Token(Token = "0x4000157")]
	[FieldOffset(Offset = "0x30")]
	private DataViewManagerListItemTypeDescriptor _item;

	[Token(Token = "0x4000158")]
	[FieldOffset(Offset = "0x38")]
	private bool _locked;

	[Token(Token = "0x4000159")]
	[FieldOffset(Offset = "0x3C")]
	internal int _nViews;

	[Token(Token = "0x400015A")]
	[FieldOffset(Offset = "0x0")]
	private static NotSupportedException s_notSupported;

	[Token(Token = "0x170000F1")]
	[DefaultValue(null)]
	public DataSet DataSet
	{
		[Token(Token = "0x600054C")]
		[Address(RVA = "0x4598FC0", Offset = "0x4598FC0", VA = "0x4598FC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000F2")]
	[DesignerSerializationVisibility(DesignerSerializationVisibility.Content)]
	public DataViewSettingCollection DataViewSettings
	{
		[Token(Token = "0x600054D")]
		[Address(RVA = "0x4598FD0", Offset = "0x4598FD0", VA = "0x4598FD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000F3")]
	private int System_002ECollections_002EICollection_002ECount
	{
		[Token(Token = "0x600054F")]
		[Address(RVA = "0x45990B0", Offset = "0x45990B0", VA = "0x45990B0", Slot = "45")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000F4")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x6000550")]
		[Address(RVA = "0x45990C0", Offset = "0x45990C0", VA = "0x45990C0", Slot = "46")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000F5")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x6000551")]
		[Address(RVA = "0x45990D0", Offset = "0x45990D0", VA = "0x45990D0", Slot = "47")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000F6")]
	private bool System_002ECollections_002EIList_002EIsReadOnly
	{
		[Token(Token = "0x6000552")]
		[Address(RVA = "0x45990E0", Offset = "0x45990E0", VA = "0x45990E0", Slot = "38")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000F7")]
	private bool System_002ECollections_002EIList_002EIsFixedSize
	{
		[Token(Token = "0x6000553")]
		[Address(RVA = "0x45990F0", Offset = "0x45990F0", VA = "0x45990F0", Slot = "39")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000F8")]
	private object System_002ECollections_002EIList_002EItem
	{
		[Token(Token = "0x6000555")]
		[Address(RVA = "0x4599180", Offset = "0x4599180", VA = "0x4599180", Slot = "33")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000556")]
		[Address(RVA = "0x4599190", Offset = "0x4599190", VA = "0x4599190", Slot = "34")]
		set
		{
		}
	}

	[Token(Token = "0x170000F9")]
	private bool System_002EComponentModel_002EIBindingList_002EAllowNew
	{
		[Token(Token = "0x600055E")]
		[Address(RVA = "0x45992D0", Offset = "0x45992D0", VA = "0x45992D0", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000FA")]
	private bool System_002EComponentModel_002EIBindingList_002EAllowEdit
	{
		[Token(Token = "0x6000560")]
		[Address(RVA = "0x4599330", Offset = "0x4599330", VA = "0x4599330", Slot = "18")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000FB")]
	private bool System_002EComponentModel_002EIBindingList_002EAllowRemove
	{
		[Token(Token = "0x6000561")]
		[Address(RVA = "0x4599340", Offset = "0x4599340", VA = "0x4599340", Slot = "19")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000FC")]
	private bool System_002EComponentModel_002EIBindingList_002ESupportsChangeNotification
	{
		[Token(Token = "0x6000562")]
		[Address(RVA = "0x4599350", Offset = "0x4599350", VA = "0x4599350", Slot = "20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000FD")]
	private bool System_002EComponentModel_002EIBindingList_002ESupportsSearching
	{
		[Token(Token = "0x6000563")]
		[Address(RVA = "0x4599360", Offset = "0x4599360", VA = "0x4599360", Slot = "21")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000FE")]
	private bool System_002EComponentModel_002EIBindingList_002ESupportsSorting
	{
		[Token(Token = "0x6000564")]
		[Address(RVA = "0x4599370", Offset = "0x4599370", VA = "0x4599370", Slot = "22")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000FF")]
	private bool System_002EComponentModel_002EIBindingList_002EIsSorted
	{
		[Token(Token = "0x6000565")]
		[Address(RVA = "0x4599380", Offset = "0x4599380", VA = "0x4599380", Slot = "23")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000100")]
	private PropertyDescriptor System_002EComponentModel_002EIBindingList_002ESortProperty
	{
		[Token(Token = "0x6000566")]
		[Address(RVA = "0x45993D0", Offset = "0x45993D0", VA = "0x45993D0", Slot = "24")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000101")]
	private ListSortDirection System_002EComponentModel_002EIBindingList_002ESortDirection
	{
		[Token(Token = "0x6000567")]
		[Address(RVA = "0x4599420", Offset = "0x4599420", VA = "0x4599420", Slot = "25")]
		get
		{
			return default(ListSortDirection);
		}
	}

	[Token(Token = "0x1400000B")]
	public event ListChangedEventHandler ListChanged
	{
		[Token(Token = "0x6000568")]
		[Address(RVA = "0x4599470", Offset = "0x4599470", VA = "0x4599470", Slot = "26")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000569")]
		[Address(RVA = "0x4599500", Offset = "0x4599500", VA = "0x4599500", Slot = "27")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x600054B")]
	[Address(RVA = "0x4598D00", Offset = "0x4598D00", VA = "0x4598D00")]
	internal DataViewManager(DataSet dataSet, bool locked)
	{
	}

	[Token(Token = "0x600054E")]
	[Address(RVA = "0x4598FE0", Offset = "0x4598FE0", VA = "0x4598FE0", Slot = "48")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000554")]
	[Address(RVA = "0x4599100", Offset = "0x4599100", VA = "0x4599100", Slot = "44")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6000557")]
	[Address(RVA = "0x45991C0", Offset = "0x45991C0", VA = "0x45991C0", Slot = "35")]
	private int System_002ECollections_002EIList_002EAdd(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000558")]
	[Address(RVA = "0x45991F0", Offset = "0x45991F0", VA = "0x45991F0", Slot = "37")]
	private void System_002ECollections_002EIList_002EClear()
	{
	}

	[Token(Token = "0x6000559")]
	[Address(RVA = "0x4599220", Offset = "0x4599220", VA = "0x4599220", Slot = "36")]
	private bool System_002ECollections_002EIList_002EContains(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x600055A")]
	[Address(RVA = "0x4599230", Offset = "0x4599230", VA = "0x4599230", Slot = "40")]
	private int System_002ECollections_002EIList_002EIndexOf(object value)
	{
		return default(int);
	}

	[Token(Token = "0x600055B")]
	[Address(RVA = "0x4599240", Offset = "0x4599240", VA = "0x4599240", Slot = "41")]
	private void System_002ECollections_002EIList_002EInsert(int index, object value)
	{
	}

	[Token(Token = "0x600055C")]
	[Address(RVA = "0x4599270", Offset = "0x4599270", VA = "0x4599270", Slot = "42")]
	private void System_002ECollections_002EIList_002ERemove(object value)
	{
	}

	[Token(Token = "0x600055D")]
	[Address(RVA = "0x45992A0", Offset = "0x45992A0", VA = "0x45992A0", Slot = "43")]
	private void System_002ECollections_002EIList_002ERemoveAt(int index)
	{
	}

	[Token(Token = "0x600055F")]
	[Address(RVA = "0x45992E0", Offset = "0x45992E0", VA = "0x45992E0", Slot = "17")]
	private object System_002EComponentModel_002EIBindingList_002EAddNew()
	{
		return null;
	}

	[Token(Token = "0x600056A")]
	[Address(RVA = "0x4599590", Offset = "0x4599590", VA = "0x4599590", Slot = "28")]
	private void System_002EComponentModel_002EIBindingList_002EAddIndex(PropertyDescriptor property)
	{
	}

	[Token(Token = "0x600056B")]
	[Address(RVA = "0x45995A0", Offset = "0x45995A0", VA = "0x45995A0", Slot = "29")]
	private void System_002EComponentModel_002EIBindingList_002EApplySort(PropertyDescriptor property, ListSortDirection direction)
	{
	}

	[Token(Token = "0x600056C")]
	[Address(RVA = "0x45995F0", Offset = "0x45995F0", VA = "0x45995F0", Slot = "30")]
	private int System_002EComponentModel_002EIBindingList_002EFind(PropertyDescriptor property, object key)
	{
		return default(int);
	}

	[Token(Token = "0x600056D")]
	[Address(RVA = "0x4599640", Offset = "0x4599640", VA = "0x4599640", Slot = "31")]
	private void System_002EComponentModel_002EIBindingList_002ERemoveIndex(PropertyDescriptor property)
	{
	}

	[Token(Token = "0x600056E")]
	[Address(RVA = "0x4599650", Offset = "0x4599650", VA = "0x4599650", Slot = "32")]
	private void System_002EComponentModel_002EIBindingList_002ERemoveSort()
	{
	}

	[Token(Token = "0x600056F")]
	[Address(RVA = "0x45996A0", Offset = "0x45996A0", VA = "0x45996A0", Slot = "49")]
	private string System_002EComponentModel_002EITypedList_002EGetListName(PropertyDescriptor[] listAccessors)
	{
		return null;
	}

	[Token(Token = "0x6000570")]
	[Address(RVA = "0x4599720", Offset = "0x4599720", VA = "0x4599720", Slot = "50")]
	private PropertyDescriptorCollection System_002EComponentModel_002EITypedList_002EGetItemProperties(PropertyDescriptor[] listAccessors)
	{
		return null;
	}

	[Token(Token = "0x6000571")]
	[Address(RVA = "0x45998A0", Offset = "0x45998A0", VA = "0x45998A0")]
	public DataView CreateDataView(DataTable table)
	{
		return null;
	}

	[Token(Token = "0x6000572")]
	[Address(RVA = "0x4599930", Offset = "0x4599930", VA = "0x4599930", Slot = "51")]
	protected virtual void OnListChanged(ListChangedEventArgs e)
	{
	}

	[Token(Token = "0x6000573")]
	[Address(RVA = "0x4599A20", Offset = "0x4599A20", VA = "0x4599A20", Slot = "52")]
	protected virtual void TableCollectionChanged(object sender, CollectionChangeEventArgs e)
	{
	}

	[Token(Token = "0x6000574")]
	[Address(RVA = "0x4599C40", Offset = "0x4599C40", VA = "0x4599C40", Slot = "53")]
	protected virtual void RelationCollectionChanged(object sender, CollectionChangeEventArgs e)
	{
	}
}
