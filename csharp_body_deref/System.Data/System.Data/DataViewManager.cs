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
		[Address(RVA = "0x425B860", Offset = "0x425B860", VA = "0x425B860")]
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
		[Address(RVA = "0x425B870", Offset = "0x425B870", VA = "0x425B870")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000F3")]
	private int System_002ECollections_002EICollection_002ECount
	{
		[Token(Token = "0x600054F")]
		[Address(RVA = "0x425B950", Offset = "0x425B950", VA = "0x425B950", Slot = "45")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000F4")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x6000550")]
		[Address(RVA = "0x425B960", Offset = "0x425B960", VA = "0x425B960", Slot = "46")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000F5")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x6000551")]
		[Address(RVA = "0x425B970", Offset = "0x425B970", VA = "0x425B970", Slot = "47")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000F6")]
	private bool System_002ECollections_002EIList_002EIsReadOnly
	{
		[Token(Token = "0x6000552")]
		[Address(RVA = "0x425B980", Offset = "0x425B980", VA = "0x425B980", Slot = "38")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000F7")]
	private bool System_002ECollections_002EIList_002EIsFixedSize
	{
		[Token(Token = "0x6000553")]
		[Address(RVA = "0x425B990", Offset = "0x425B990", VA = "0x425B990", Slot = "39")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000F8")]
	private object System_002ECollections_002EIList_002EItem
	{
		[Token(Token = "0x6000555")]
		[Address(RVA = "0x425BA20", Offset = "0x425BA20", VA = "0x425BA20", Slot = "33")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000556")]
		[Address(RVA = "0x425BA30", Offset = "0x425BA30", VA = "0x425BA30", Slot = "34")]
		set
		{
		}
	}

	[Token(Token = "0x170000F9")]
	private bool System_002EComponentModel_002EIBindingList_002EAllowNew
	{
		[Token(Token = "0x600055E")]
		[Address(RVA = "0x425BB70", Offset = "0x425BB70", VA = "0x425BB70", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000FA")]
	private bool System_002EComponentModel_002EIBindingList_002EAllowEdit
	{
		[Token(Token = "0x6000560")]
		[Address(RVA = "0x425BBD0", Offset = "0x425BBD0", VA = "0x425BBD0", Slot = "18")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000FB")]
	private bool System_002EComponentModel_002EIBindingList_002EAllowRemove
	{
		[Token(Token = "0x6000561")]
		[Address(RVA = "0x425BBE0", Offset = "0x425BBE0", VA = "0x425BBE0", Slot = "19")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000FC")]
	private bool System_002EComponentModel_002EIBindingList_002ESupportsChangeNotification
	{
		[Token(Token = "0x6000562")]
		[Address(RVA = "0x425BBF0", Offset = "0x425BBF0", VA = "0x425BBF0", Slot = "20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000FD")]
	private bool System_002EComponentModel_002EIBindingList_002ESupportsSearching
	{
		[Token(Token = "0x6000563")]
		[Address(RVA = "0x425BC00", Offset = "0x425BC00", VA = "0x425BC00", Slot = "21")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000FE")]
	private bool System_002EComponentModel_002EIBindingList_002ESupportsSorting
	{
		[Token(Token = "0x6000564")]
		[Address(RVA = "0x425BC10", Offset = "0x425BC10", VA = "0x425BC10", Slot = "22")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000FF")]
	private bool System_002EComponentModel_002EIBindingList_002EIsSorted
	{
		[Token(Token = "0x6000565")]
		[Address(RVA = "0x425BC20", Offset = "0x425BC20", VA = "0x425BC20", Slot = "23")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000100")]
	private PropertyDescriptor System_002EComponentModel_002EIBindingList_002ESortProperty
	{
		[Token(Token = "0x6000566")]
		[Address(RVA = "0x425BC70", Offset = "0x425BC70", VA = "0x425BC70", Slot = "24")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000101")]
	private ListSortDirection System_002EComponentModel_002EIBindingList_002ESortDirection
	{
		[Token(Token = "0x6000567")]
		[Address(RVA = "0x425BCC0", Offset = "0x425BCC0", VA = "0x425BCC0", Slot = "25")]
		get
		{
			return default(ListSortDirection);
		}
	}

	[Token(Token = "0x1400000B")]
	public event ListChangedEventHandler ListChanged
	{
		[Token(Token = "0x6000568")]
		[Address(RVA = "0x425BD10", Offset = "0x425BD10", VA = "0x425BD10", Slot = "26")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000569")]
		[Address(RVA = "0x425BDA0", Offset = "0x425BDA0", VA = "0x425BDA0", Slot = "27")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x600054B")]
	[Address(RVA = "0x425B5A0", Offset = "0x425B5A0", VA = "0x425B5A0")]
	internal DataViewManager(DataSet dataSet, bool locked)
	{
	}

	[Token(Token = "0x600054E")]
	[Address(RVA = "0x425B880", Offset = "0x425B880", VA = "0x425B880", Slot = "48")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000554")]
	[Address(RVA = "0x425B9A0", Offset = "0x425B9A0", VA = "0x425B9A0", Slot = "44")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6000557")]
	[Address(RVA = "0x425BA60", Offset = "0x425BA60", VA = "0x425BA60", Slot = "35")]
	private int System_002ECollections_002EIList_002EAdd(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000558")]
	[Address(RVA = "0x425BA90", Offset = "0x425BA90", VA = "0x425BA90", Slot = "37")]
	private void System_002ECollections_002EIList_002EClear()
	{
	}

	[Token(Token = "0x6000559")]
	[Address(RVA = "0x425BAC0", Offset = "0x425BAC0", VA = "0x425BAC0", Slot = "36")]
	private bool System_002ECollections_002EIList_002EContains(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x600055A")]
	[Address(RVA = "0x425BAD0", Offset = "0x425BAD0", VA = "0x425BAD0", Slot = "40")]
	private int System_002ECollections_002EIList_002EIndexOf(object value)
	{
		return default(int);
	}

	[Token(Token = "0x600055B")]
	[Address(RVA = "0x425BAE0", Offset = "0x425BAE0", VA = "0x425BAE0", Slot = "41")]
	private void System_002ECollections_002EIList_002EInsert(int index, object value)
	{
	}

	[Token(Token = "0x600055C")]
	[Address(RVA = "0x425BB10", Offset = "0x425BB10", VA = "0x425BB10", Slot = "42")]
	private void System_002ECollections_002EIList_002ERemove(object value)
	{
	}

	[Token(Token = "0x600055D")]
	[Address(RVA = "0x425BB40", Offset = "0x425BB40", VA = "0x425BB40", Slot = "43")]
	private void System_002ECollections_002EIList_002ERemoveAt(int index)
	{
	}

	[Token(Token = "0x600055F")]
	[Address(RVA = "0x425BB80", Offset = "0x425BB80", VA = "0x425BB80", Slot = "17")]
	private object System_002EComponentModel_002EIBindingList_002EAddNew()
	{
		return null;
	}

	[Token(Token = "0x600056A")]
	[Address(RVA = "0x425BE30", Offset = "0x425BE30", VA = "0x425BE30", Slot = "28")]
	private void System_002EComponentModel_002EIBindingList_002EAddIndex(PropertyDescriptor property)
	{
	}

	[Token(Token = "0x600056B")]
	[Address(RVA = "0x425BE40", Offset = "0x425BE40", VA = "0x425BE40", Slot = "29")]
	private void System_002EComponentModel_002EIBindingList_002EApplySort(PropertyDescriptor property, ListSortDirection direction)
	{
	}

	[Token(Token = "0x600056C")]
	[Address(RVA = "0x425BE90", Offset = "0x425BE90", VA = "0x425BE90", Slot = "30")]
	private int System_002EComponentModel_002EIBindingList_002EFind(PropertyDescriptor property, object key)
	{
		return default(int);
	}

	[Token(Token = "0x600056D")]
	[Address(RVA = "0x425BEE0", Offset = "0x425BEE0", VA = "0x425BEE0", Slot = "31")]
	private void System_002EComponentModel_002EIBindingList_002ERemoveIndex(PropertyDescriptor property)
	{
	}

	[Token(Token = "0x600056E")]
	[Address(RVA = "0x425BEF0", Offset = "0x425BEF0", VA = "0x425BEF0", Slot = "32")]
	private void System_002EComponentModel_002EIBindingList_002ERemoveSort()
	{
	}

	[Token(Token = "0x600056F")]
	[Address(RVA = "0x425BF40", Offset = "0x425BF40", VA = "0x425BF40", Slot = "49")]
	private string System_002EComponentModel_002EITypedList_002EGetListName(PropertyDescriptor[] listAccessors)
	{
		return null;
	}

	[Token(Token = "0x6000570")]
	[Address(RVA = "0x425BFC0", Offset = "0x425BFC0", VA = "0x425BFC0", Slot = "50")]
	private PropertyDescriptorCollection System_002EComponentModel_002EITypedList_002EGetItemProperties(PropertyDescriptor[] listAccessors)
	{
		return null;
	}

	[Token(Token = "0x6000571")]
	[Address(RVA = "0x425C140", Offset = "0x425C140", VA = "0x425C140")]
	public DataView CreateDataView(DataTable table)
	{
		return null;
	}

	[Token(Token = "0x6000572")]
	[Address(RVA = "0x425C1D0", Offset = "0x425C1D0", VA = "0x425C1D0", Slot = "51")]
	protected virtual void OnListChanged(ListChangedEventArgs e)
	{
	}

	[Token(Token = "0x6000573")]
	[Address(RVA = "0x425C2C0", Offset = "0x425C2C0", VA = "0x425C2C0", Slot = "52")]
	protected virtual void TableCollectionChanged(object sender, CollectionChangeEventArgs e)
	{
	}

	[Token(Token = "0x6000574")]
	[Address(RVA = "0x425C4E0", Offset = "0x425C4E0", VA = "0x425C4E0", Slot = "53")]
	protected virtual void RelationCollectionChanged(object sender, CollectionChangeEventArgs e)
	{
	}
}
