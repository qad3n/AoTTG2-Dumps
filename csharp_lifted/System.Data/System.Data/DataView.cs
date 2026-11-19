// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.DataView
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Collections.Generic;
using System.ComponentModel;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x2000050")]
[DefaultEvent("PositionChanged")]
[DefaultProperty("Table")]
public class DataView : MarshalByValueComponent, IBindingListView, IBindingList, IList, ICollection, IEnumerable, ITypedList, ISupportInitializeNotification, ISupportInitialize
{
	[Token(Token = "0x2000051")]
	private sealed class DataRowReferenceComparer : IEqualityComparer<DataRow>
	{
		[Token(Token = "0x4000198")]
		[FieldOffset(Offset = "0x0")]
		internal static readonly DataRowReferenceComparer s_default;

		[Token(Token = "0x600056D")]
		[Address(RVA = "0x5EAA160", Offset = "0x5EA9160", VA = "0x5EAA160")]
		private DataRowReferenceComparer()
		{
		}

		[Token(Token = "0x600056E")]
		[Address(RVA = "0x5EAA170", Offset = "0x5EA9170", VA = "0x5EAA170", Slot = "4")]
		public bool Equals(DataRow x, DataRow y)
		{
			return default(bool);
		}

		[Token(Token = "0x600056F")]
		[Address(RVA = "0x5EAA180", Offset = "0x5EA9180", VA = "0x5EAA180", Slot = "5")]
		public int GetHashCode(DataRow obj)
		{
			return default(int);
		}
	}

	[Token(Token = "0x4000179")]
	[FieldOffset(Offset = "0x20")]
	private DataViewManager _dataViewManager;

	[Token(Token = "0x400017A")]
	[FieldOffset(Offset = "0x28")]
	private DataTable _table;

	[Token(Token = "0x400017B")]
	[FieldOffset(Offset = "0x30")]
	private bool _locked;

	[Token(Token = "0x400017C")]
	[FieldOffset(Offset = "0x38")]
	private Index _index;

	[Token(Token = "0x400017D")]
	[FieldOffset(Offset = "0x40")]
	private Dictionary<string, Index> _findIndexes;

	[Token(Token = "0x400017E")]
	[FieldOffset(Offset = "0x48")]
	private string _sort;

	[Token(Token = "0x400017F")]
	[FieldOffset(Offset = "0x50")]
	private Comparison<DataRow> _comparison;

	[Token(Token = "0x4000180")]
	[FieldOffset(Offset = "0x58")]
	private IFilter _rowFilter;

	[Token(Token = "0x4000181")]
	[FieldOffset(Offset = "0x60")]
	private DataViewRowState _recordStates;

	[Token(Token = "0x4000182")]
	[FieldOffset(Offset = "0x64")]
	private bool _shouldOpen;

	[Token(Token = "0x4000183")]
	[FieldOffset(Offset = "0x65")]
	private bool _open;

	[Token(Token = "0x4000184")]
	[FieldOffset(Offset = "0x66")]
	private bool _allowNew;

	[Token(Token = "0x4000185")]
	[FieldOffset(Offset = "0x67")]
	private bool _allowEdit;

	[Token(Token = "0x4000186")]
	[FieldOffset(Offset = "0x68")]
	private bool _allowDelete;

	[Token(Token = "0x4000187")]
	[FieldOffset(Offset = "0x69")]
	private bool _applyDefaultSort;

	[Token(Token = "0x4000188")]
	[FieldOffset(Offset = "0x70")]
	internal DataRow _addNewRow;

	[Token(Token = "0x4000189")]
	[FieldOffset(Offset = "0x78")]
	private ListChangedEventArgs _addNewMoved;

	[Token(Token = "0x400018A")]
	[FieldOffset(Offset = "0x80")]
	private ListChangedEventHandler _onListChanged;

	[Token(Token = "0x400018B")]
	[FieldOffset(Offset = "0x0")]
	internal static ListChangedEventArgs s_resetEventArgs;

	[Token(Token = "0x400018C")]
	[FieldOffset(Offset = "0x88")]
	private DataTable _delayedTable;

	[Token(Token = "0x400018D")]
	[FieldOffset(Offset = "0x90")]
	private string _delayedRowFilter;

	[Token(Token = "0x400018E")]
	[FieldOffset(Offset = "0x98")]
	private string _delayedSort;

	[Token(Token = "0x400018F")]
	[FieldOffset(Offset = "0xA0")]
	private DataViewRowState _delayedRecordStates;

	[Token(Token = "0x4000190")]
	[FieldOffset(Offset = "0xA4")]
	private bool _fInitInProgress;

	[Token(Token = "0x4000191")]
	[FieldOffset(Offset = "0xA5")]
	private bool _fEndInitInProgress;

	[Token(Token = "0x4000192")]
	[FieldOffset(Offset = "0xA8")]
	private Dictionary<DataRow, DataRowView> _rowViewCache;

	[Token(Token = "0x4000193")]
	[FieldOffset(Offset = "0xB0")]
	private readonly Dictionary<DataRow, DataRowView> _rowViewBuffer;

	[Token(Token = "0x4000194")]
	[FieldOffset(Offset = "0xB8")]
	private DataViewListener _dvListener;

	[Token(Token = "0x4000195")]
	[FieldOffset(Offset = "0x8")]
	private static int s_objectTypeCount;

	[Token(Token = "0x4000196")]
	[FieldOffset(Offset = "0xC0")]
	private readonly int _objectID;

	[Token(Token = "0x4000197")]
	[FieldOffset(Offset = "0xC8")]
	[CompilerGenerated]
	private EventHandler m_Initialized;

	[Token(Token = "0x170000D5")]
	[DefaultValue(true)]
	public bool AllowDelete
	{
		[Token(Token = "0x6000507")]
		[Address(RVA = "0x5EA4D50", Offset = "0x5EA3D50", VA = "0x5EA4D50")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000D6")]
	[DefaultValue(true)]
	public bool AllowEdit
	{
		[Token(Token = "0x6000508")]
		[Address(RVA = "0x5EA4D60", Offset = "0x5EA3D60", VA = "0x5EA4D60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000D7")]
	[DefaultValue(true)]
	public bool AllowNew
	{
		[Token(Token = "0x6000509")]
		[Address(RVA = "0x5EA4D70", Offset = "0x5EA3D70", VA = "0x5EA4D70")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000D8")]
	[Browsable(false)]
	public int Count
	{
		[Token(Token = "0x600050A")]
		[Address(RVA = "0x5EA4D80", Offset = "0x5EA3D80", VA = "0x5EA4D80", Slot = "52")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000D9")]
	private int CountFromIndex
	{
		[Token(Token = "0x600050B")]
		[Address(RVA = "0x5EA4DD0", Offset = "0x5EA3DD0", VA = "0x5EA4DD0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000DA")]
	[Browsable(false)]
	public DataViewManager DataViewManager
	{
		[Token(Token = "0x600050C")]
		[Address(RVA = "0x5EA4DF0", Offset = "0x5EA3DF0", VA = "0x5EA4DF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000DB")]
	[Browsable(false)]
	public bool IsInitialized
	{
		[Token(Token = "0x600050D")]
		[Address(RVA = "0x5EA4E00", Offset = "0x5EA3E00", VA = "0x5EA4E00", Slot = "58")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000DC")]
	[Browsable(false)]
	protected bool IsOpen
	{
		[Token(Token = "0x600050E")]
		[Address(RVA = "0x5EA4E10", Offset = "0x5EA3E10", VA = "0x5EA4E10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000DD")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x600050F")]
		[Address(RVA = "0x5EA4E20", Offset = "0x5EA3E20", VA = "0x5EA4E20", Slot = "54")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000DE")]
	[DefaultValue("")]
	public virtual string RowFilter
	{
		[Token(Token = "0x6000510")]
		[Address(RVA = "0x5EA4E30", Offset = "0x5EA3E30", VA = "0x5EA4E30", Slot = "63")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000511")]
		[Address(RVA = "0x5EA4EF0", Offset = "0x5EA3EF0", VA = "0x5EA4EF0", Slot = "64")]
		set
		{
		}
	}

	[Token(Token = "0x170000DF")]
	[DefaultValue(DataViewRowState.CurrentRows)]
	public DataViewRowState RowStateFilter
	{
		[Token(Token = "0x6000512")]
		[Address(RVA = "0x5EA5110", Offset = "0x5EA4110", VA = "0x5EA5110")]
		get
		{
			return default(DataViewRowState);
		}
		[Token(Token = "0x6000513")]
		[Address(RVA = "0x5EA5120", Offset = "0x5EA4120", VA = "0x5EA5120")]
		set
		{
		}
	}

	[Token(Token = "0x170000E0")]
	[DefaultValue("")]
	public string Sort
	{
		[Token(Token = "0x6000514")]
		[Address(RVA = "0x5EA5260", Offset = "0x5EA4260", VA = "0x5EA5260")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000515")]
		[Address(RVA = "0x5EA52B0", Offset = "0x5EA42B0", VA = "0x5EA52B0")]
		set
		{
		}
	}

	[Token(Token = "0x170000E1")]
	internal Comparison<DataRow> SortComparison
	{
		[Token(Token = "0x6000516")]
		[Address(RVA = "0x5EA54F0", Offset = "0x5EA44F0", VA = "0x5EA54F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000E2")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x6000517")]
		[Address(RVA = "0x5EA5500", Offset = "0x5EA4500", VA = "0x5EA5500", Slot = "53")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000E3")]
	[DefaultValue(null)]
	[RefreshProperties(RefreshProperties.All)]
	[TypeConverter(typeof(DataTableTypeConverter))]
	public DataTable Table
	{
		[Token(Token = "0x6000518")]
		[Address(RVA = "0x5EA5510", Offset = "0x5EA4510", VA = "0x5EA5510")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000519")]
		[Address(RVA = "0x5EA5520", Offset = "0x5EA4520", VA = "0x5EA5520")]
		set
		{
		}
	}

	// C# has no syntax for parameterized property 'System.Collections.IList.Item'.
	// Its 'property:' attributes below are ignored by the compiler (CS0657).
	[property: Token(Token = "0x170000E4")]
	[Token(Token = "0x600051A")]
	[Address(RVA = "0x5EA5810", Offset = "0x5EA4810", VA = "0x5EA5810", Slot = "40")]
	private object System_002ECollections_002EIList_002Eget_Item(int recordIndex)
	{
		return null;
	}

	[Token(Token = "0x600051B")]
	[Address(RVA = "0x5EA58D0", Offset = "0x5EA48D0", VA = "0x5EA58D0", Slot = "41")]
	private void System_002ECollections_002EIList_002Eset_Item(int recordIndex, object value)
	{
	}

	[Token(Token = "0x170000E5")]
	public DataRowView this[int recordIndex]
	{
		[Token(Token = "0x600051C")]
		[Address(RVA = "0x5EA5870", Offset = "0x5EA4870", VA = "0x5EA5870")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000E6")]
	private bool System_002ECollections_002EIList_002EIsReadOnly
	{
		[Token(Token = "0x600052A")]
		[Address(RVA = "0x5EA6C00", Offset = "0x5EA5C00", VA = "0x5EA6C00", Slot = "45")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000E7")]
	private bool System_002ECollections_002EIList_002EIsFixedSize
	{
		[Token(Token = "0x600052B")]
		[Address(RVA = "0x5EA6C10", Offset = "0x5EA5C10", VA = "0x5EA6C10", Slot = "46")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000E8")]
	private bool System_002EComponentModel_002EIBindingList_002EAllowNew
	{
		[Token(Token = "0x6000536")]
		[Address(RVA = "0x5EA7150", Offset = "0x5EA6150", VA = "0x5EA7150", Slot = "23")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000E9")]
	private bool System_002EComponentModel_002EIBindingList_002EAllowEdit
	{
		[Token(Token = "0x6000538")]
		[Address(RVA = "0x5EA7180", Offset = "0x5EA6180", VA = "0x5EA7180", Slot = "25")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000EA")]
	private bool System_002EComponentModel_002EIBindingList_002EAllowRemove
	{
		[Token(Token = "0x6000539")]
		[Address(RVA = "0x5EA7190", Offset = "0x5EA6190", VA = "0x5EA7190", Slot = "26")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000EB")]
	private bool System_002EComponentModel_002EIBindingList_002ESupportsChangeNotification
	{
		[Token(Token = "0x600053A")]
		[Address(RVA = "0x5EA71A0", Offset = "0x5EA61A0", VA = "0x5EA71A0", Slot = "27")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000EC")]
	private bool System_002EComponentModel_002EIBindingList_002ESupportsSearching
	{
		[Token(Token = "0x600053B")]
		[Address(RVA = "0x5EA71B0", Offset = "0x5EA61B0", VA = "0x5EA71B0", Slot = "28")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000ED")]
	private bool System_002EComponentModel_002EIBindingList_002ESupportsSorting
	{
		[Token(Token = "0x600053C")]
		[Address(RVA = "0x5EA71C0", Offset = "0x5EA61C0", VA = "0x5EA71C0", Slot = "29")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000EE")]
	private bool System_002EComponentModel_002EIBindingList_002EIsSorted
	{
		[Token(Token = "0x600053D")]
		[Address(RVA = "0x5EA71D0", Offset = "0x5EA61D0", VA = "0x5EA71D0", Slot = "30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000EF")]
	private PropertyDescriptor System_002EComponentModel_002EIBindingList_002ESortProperty
	{
		[Token(Token = "0x600053E")]
		[Address(RVA = "0x5EA7230", Offset = "0x5EA6230", VA = "0x5EA7230", Slot = "31")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000F0")]
	private ListSortDirection System_002EComponentModel_002EIBindingList_002ESortDirection
	{
		[Token(Token = "0x6000540")]
		[Address(RVA = "0x5EA7330", Offset = "0x5EA6330", VA = "0x5EA7330", Slot = "32")]
		get
		{
			return default(ListSortDirection);
		}
	}

	[Token(Token = "0x170000F1")]
	private string System_002EComponentModel_002EIBindingListView_002EFilter
	{
		[Token(Token = "0x600054D")]
		[Address(RVA = "0x5EA8260", Offset = "0x5EA7260", VA = "0x5EA8260", Slot = "17")]
		get
		{
			return null;
		}
		[Token(Token = "0x600054E")]
		[Address(RVA = "0x5EA8280", Offset = "0x5EA7280", VA = "0x5EA8280", Slot = "18")]
		set
		{
		}
	}

	[Token(Token = "0x170000F2")]
	private ListSortDescriptionCollection System_002EComponentModel_002EIBindingListView_002ESortDescriptions
	{
		[Token(Token = "0x600054F")]
		[Address(RVA = "0x5EA82A0", Offset = "0x5EA72A0", VA = "0x5EA82A0", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000F3")]
	private bool System_002EComponentModel_002EIBindingListView_002ESupportsAdvancedSorting
	{
		[Token(Token = "0x6000551")]
		[Address(RVA = "0x5EA8580", Offset = "0x5EA7580", VA = "0x5EA8580", Slot = "21")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000F4")]
	private bool System_002EComponentModel_002EIBindingListView_002ESupportsFiltering
	{
		[Token(Token = "0x6000552")]
		[Address(RVA = "0x5EA8590", Offset = "0x5EA7590", VA = "0x5EA8590", Slot = "22")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000F5")]
	internal int ObjectID
	{
		[Token(Token = "0x600056B")]
		[Address(RVA = "0x5EAA0D0", Offset = "0x5EA90D0", VA = "0x5EAA0D0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x14000009")]
	public event ListChangedEventHandler ListChanged
	{
		[Token(Token = "0x6000541")]
		[Address(RVA = "0x5EA7360", Offset = "0x5EA6360", VA = "0x5EA7360", Slot = "33")]
		add
		{
		}
		[Token(Token = "0x6000542")]
		[Address(RVA = "0x5EA7490", Offset = "0x5EA6490", VA = "0x5EA7490", Slot = "34")]
		remove
		{
		}
	}

	[Token(Token = "0x1400000A")]
	public event EventHandler Initialized
	{
		[Token(Token = "0x6000543")]
		[Address(RVA = "0x5EA75C0", Offset = "0x5EA65C0", VA = "0x5EA75C0", Slot = "59")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000544")]
		[Address(RVA = "0x5EA7660", Offset = "0x5EA6660", VA = "0x5EA7660", Slot = "60")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000505")]
	[Address(RVA = "0x5EA44E0", Offset = "0x5EA34E0", VA = "0x5EA44E0")]
	internal DataView(DataTable table, bool locked)
	{
	}

	[Token(Token = "0x6000506")]
	[Address(RVA = "0x5EA4A80", Offset = "0x5EA3A80", VA = "0x5EA4A80")]
	public DataView(DataTable table)
	{
	}

	[Token(Token = "0x600051D")]
	[Address(RVA = "0x5EA5A10", Offset = "0x5EA4A10", VA = "0x5EA5A10", Slot = "65")]
	public virtual DataRowView AddNew()
	{
		return null;
	}

	[Token(Token = "0x600051E")]
	[Address(RVA = "0x5EA5E70", Offset = "0x5EA4E70", VA = "0x5EA5E70", Slot = "61")]
	public void BeginInit()
	{
	}

	[Token(Token = "0x600051F")]
	[Address(RVA = "0x5EA5E80", Offset = "0x5EA4E80", VA = "0x5EA5E80", Slot = "62")]
	public void EndInit()
	{
	}

	[Token(Token = "0x6000520")]
	[Address(RVA = "0x5EA5D40", Offset = "0x5EA4D40", VA = "0x5EA5D40")]
	private void CheckOpen()
	{
	}

	[Token(Token = "0x6000521")]
	[Address(RVA = "0x5EA54A0", Offset = "0x5EA44A0", VA = "0x5EA54A0")]
	private void CheckSort(string sort)
	{
	}

	[Token(Token = "0x6000522")]
	[Address(RVA = "0x5EA6170", Offset = "0x5EA5170", VA = "0x5EA6170")]
	protected void Close()
	{
	}

	[Token(Token = "0x6000523")]
	[Address(RVA = "0x5EA61D0", Offset = "0x5EA51D0", VA = "0x5EA61D0", Slot = "51")]
	public void CopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6000524")]
	[Address(RVA = "0x5EA6450", Offset = "0x5EA5450", VA = "0x5EA6450")]
	private void CopyTo(DataRowView[] array, int index)
	{
	}

	[Token(Token = "0x6000525")]
	[Address(RVA = "0x5EA6700", Offset = "0x5EA5700", VA = "0x5EA6700")]
	public void Delete(int index)
	{
	}

	[Token(Token = "0x6000526")]
	[Address(RVA = "0x5EA6720", Offset = "0x5EA5720", VA = "0x5EA6720")]
	internal void Delete(DataRow row)
	{
	}

	[Token(Token = "0x6000527")]
	[Address(RVA = "0x5EA6AF0", Offset = "0x5EA5AF0", VA = "0x5EA6AF0", Slot = "12")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000528")]
	[Address(RVA = "0x5EA68E0", Offset = "0x5EA58E0", VA = "0x5EA68E0")]
	internal void FinishAddNew(bool success)
	{
	}

	[Token(Token = "0x6000529")]
	[Address(RVA = "0x5EA6B50", Offset = "0x5EA5B50", VA = "0x5EA6B50", Slot = "55")]
	public IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x600052C")]
	[Address(RVA = "0x5EA6C20", Offset = "0x5EA5C20", VA = "0x5EA6C20", Slot = "42")]
	private int System_002ECollections_002EIList_002EAdd(object value)
	{
		return default(int);
	}

	[Token(Token = "0x600052D")]
	[Address(RVA = "0x5EA6CA0", Offset = "0x5EA5CA0", VA = "0x5EA6CA0", Slot = "44")]
	private void System_002ECollections_002EIList_002EClear()
	{
	}

	[Token(Token = "0x600052E")]
	[Address(RVA = "0x5EA6CD0", Offset = "0x5EA5CD0", VA = "0x5EA6CD0", Slot = "43")]
	private bool System_002ECollections_002EIList_002EContains(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x600052F")]
	[Address(RVA = "0x5EA6D50", Offset = "0x5EA5D50", VA = "0x5EA6D50", Slot = "47")]
	private int System_002ECollections_002EIList_002EIndexOf(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000530")]
	[Address(RVA = "0x5EA5D70", Offset = "0x5EA4D70", VA = "0x5EA5D70")]
	internal int IndexOf(DataRowView rowview)
	{
		return default(int);
	}

	[Token(Token = "0x6000531")]
	[Address(RVA = "0x5EA6DC0", Offset = "0x5EA5DC0", VA = "0x5EA6DC0")]
	private int IndexOfDataRowView(DataRowView rowview)
	{
		return default(int);
	}

	[Token(Token = "0x6000532")]
	[Address(RVA = "0x5EA6E20", Offset = "0x5EA5E20", VA = "0x5EA6E20", Slot = "48")]
	private void System_002ECollections_002EIList_002EInsert(int index, object value)
	{
	}

	[Token(Token = "0x6000533")]
	[Address(RVA = "0x5EA6E50", Offset = "0x5EA5E50", VA = "0x5EA6E50", Slot = "49")]
	private void System_002ECollections_002EIList_002ERemove(object value)
	{
	}

	[Token(Token = "0x6000534")]
	[Address(RVA = "0x5EA6F80", Offset = "0x5EA5F80", VA = "0x5EA6F80", Slot = "50")]
	private void System_002ECollections_002EIList_002ERemoveAt(int index)
	{
	}

	[Token(Token = "0x6000535")]
	[Address(RVA = "0x5EA6FA0", Offset = "0x5EA5FA0", VA = "0x5EA6FA0")]
	internal Index GetFindIndex(string column, bool keepIndex)
	{
		return null;
	}

	[Token(Token = "0x6000537")]
	[Address(RVA = "0x5EA7160", Offset = "0x5EA6160", VA = "0x5EA7160", Slot = "24")]
	private object System_002EComponentModel_002EIBindingList_002EAddNew()
	{
		return null;
	}

	[Token(Token = "0x600053F")]
	[Address(RVA = "0x5EA72B0", Offset = "0x5EA62B0", VA = "0x5EA72B0")]
	internal PropertyDescriptor GetSortProperty()
	{
		return null;
	}

	[Token(Token = "0x6000545")]
	[Address(RVA = "0x5EA7700", Offset = "0x5EA6700", VA = "0x5EA7700", Slot = "35")]
	private void System_002EComponentModel_002EIBindingList_002EAddIndex(PropertyDescriptor property)
	{
	}

	[Token(Token = "0x6000546")]
	[Address(RVA = "0x5EA7740", Offset = "0x5EA6740", VA = "0x5EA7740", Slot = "36")]
	private void System_002EComponentModel_002EIBindingList_002EApplySort(PropertyDescriptor property, ListSortDirection direction)
	{
	}

	[Token(Token = "0x6000547")]
	[Address(RVA = "0x5EA7830", Offset = "0x5EA6830", VA = "0x5EA7830", Slot = "37")]
	private int System_002EComponentModel_002EIBindingList_002EFind(PropertyDescriptor property, object key)
	{
		return default(int);
	}

	[Token(Token = "0x6000548")]
	[Address(RVA = "0x5EA7A90", Offset = "0x5EA6A90", VA = "0x5EA7A90", Slot = "38")]
	private void System_002EComponentModel_002EIBindingList_002ERemoveIndex(PropertyDescriptor property)
	{
	}

	[Token(Token = "0x6000549")]
	[Address(RVA = "0x5EA7AD0", Offset = "0x5EA6AD0", VA = "0x5EA7AD0", Slot = "39")]
	private void System_002EComponentModel_002EIBindingList_002ERemoveSort()
	{
	}

	[Token(Token = "0x600054A")]
	[Address(RVA = "0x5EA7BC0", Offset = "0x5EA6BC0", VA = "0x5EA7BC0", Slot = "16")]
	private void System_002EComponentModel_002EIBindingListView_002EApplySort(ListSortDescriptionCollection sorts)
	{
	}

	[Token(Token = "0x600054B")]
	[Address(RVA = "0x5EA7760", Offset = "0x5EA6760", VA = "0x5EA7760")]
	private string CreateSortString(PropertyDescriptor property, ListSortDirection direction)
	{
		return null;
	}

	[Token(Token = "0x600054C")]
	[Address(RVA = "0x5EA8170", Offset = "0x5EA7170", VA = "0x5EA8170", Slot = "20")]
	private void System_002EComponentModel_002EIBindingListView_002ERemoveFilter()
	{
	}

	[Token(Token = "0x6000550")]
	[Address(RVA = "0x5EA82B0", Offset = "0x5EA72B0", VA = "0x5EA82B0")]
	internal ListSortDescriptionCollection GetSortDescriptions()
	{
		return null;
	}

	[Token(Token = "0x6000553")]
	[Address(RVA = "0x5EA85A0", Offset = "0x5EA75A0", VA = "0x5EA85A0", Slot = "56")]
	private string System_002EComponentModel_002EITypedList_002EGetListName(PropertyDescriptor[] listAccessors)
	{
		return null;
	}

	[Token(Token = "0x6000554")]
	[Address(RVA = "0x5EA8600", Offset = "0x5EA7600", VA = "0x5EA8600", Slot = "57")]
	private PropertyDescriptorCollection System_002EComponentModel_002EITypedList_002EGetItemProperties(PropertyDescriptor[] listAccessors)
	{
		return null;
	}

	[Token(Token = "0x6000555")]
	[Address(RVA = "0x5EA86A0", Offset = "0x5EA76A0", VA = "0x5EA86A0", Slot = "66")]
	internal virtual IFilter GetFilter()
	{
		return null;
	}

	[Token(Token = "0x6000556")]
	[Address(RVA = "0x5EA86B0", Offset = "0x5EA76B0", VA = "0x5EA86B0")]
	private int GetRecord(int recordIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000557")]
	[Address(RVA = "0x5EA5900", Offset = "0x5EA4900", VA = "0x5EA5900")]
	internal DataRow GetRow(int index)
	{
		return null;
	}

	[Token(Token = "0x6000558")]
	[Address(RVA = "0x5EA63E0", Offset = "0x5EA53E0", VA = "0x5EA63E0")]
	private DataRowView GetRowView(int record)
	{
		return null;
	}

	[Token(Token = "0x6000559")]
	[Address(RVA = "0x5EA59C0", Offset = "0x5EA49C0", VA = "0x5EA59C0")]
	private DataRowView GetRowView(DataRow dr)
	{
		return null;
	}

	[Token(Token = "0x600055A")]
	[Address(RVA = "0x5EA8750", Offset = "0x5EA7750", VA = "0x5EA8750", Slot = "67")]
	protected virtual void IndexListChanged(object sender, ListChangedEventArgs e)
	{
	}

	[Token(Token = "0x600055B")]
	[Address(RVA = "0x5EA87E0", Offset = "0x5EA77E0", VA = "0x5EA87E0")]
	internal void IndexListChangedInternal(ListChangedEventArgs e)
	{
	}

	[Token(Token = "0x600055C")]
	[Address(RVA = "0x5EA88A0", Offset = "0x5EA78A0", VA = "0x5EA88A0")]
	internal void MaintainDataView(ListChangedType changedType, DataRow row, bool trackAddRemove)
	{
	}

	[Token(Token = "0x600055D")]
	[Address(RVA = "0x5EA8EB0", Offset = "0x5EA7EB0", VA = "0x5EA8EB0", Slot = "68")]
	protected virtual void OnListChanged(ListChangedEventArgs e)
	{
	}

	[Token(Token = "0x600055E")]
	[Address(RVA = "0x5EA60F0", Offset = "0x5EA50F0", VA = "0x5EA60F0")]
	private void OnInitialized()
	{
	}

	[Token(Token = "0x600055F")]
	[Address(RVA = "0x5EA9250", Offset = "0x5EA8250", VA = "0x5EA9250")]
	protected void Reset()
	{
	}

	[Token(Token = "0x6000560")]
	[Address(RVA = "0x5EA8BB0", Offset = "0x5EA7BB0", VA = "0x5EA8BB0")]
	internal void ResetRowViewCache()
	{
	}

	[Token(Token = "0x6000561")]
	[Address(RVA = "0x5EA9270", Offset = "0x5EA8270", VA = "0x5EA9270")]
	internal void SetDataViewManager(DataViewManager dataViewManager)
	{
	}

	[Token(Token = "0x6000562")]
	[Address(RVA = "0x5EA94C0", Offset = "0x5EA84C0", VA = "0x5EA94C0", Slot = "69")]
	internal virtual void SetIndex(string newSort, DataViewRowState newRowStates, IFilter newRowFilter)
	{
	}

	[Token(Token = "0x6000563")]
	[Address(RVA = "0x5EA4AE0", Offset = "0x5EA3AE0", VA = "0x5EA4AE0")]
	internal void SetIndex2(string newSort, DataViewRowState newRowStates, IFilter newRowFilter, bool fireEvent)
	{
	}

	[Token(Token = "0x6000564")]
	[Address(RVA = "0x5EA61B0", Offset = "0x5EA51B0", VA = "0x5EA61B0")]
	protected void UpdateIndex()
	{
	}

	[Token(Token = "0x6000565")]
	[Address(RVA = "0x5EA9870", Offset = "0x5EA8870", VA = "0x5EA9870", Slot = "70")]
	protected virtual void UpdateIndex(bool force)
	{
	}

	[Token(Token = "0x6000566")]
	[Address(RVA = "0x5EA94D0", Offset = "0x5EA84D0", VA = "0x5EA94D0")]
	internal void UpdateIndex(bool force, bool fireEvent)
	{
	}

	[Token(Token = "0x6000567")]
	[Address(RVA = "0x5EA9A50", Offset = "0x5EA8A50", VA = "0x5EA9A50")]
	internal void ChildRelationCollectionChanged(object sender, CollectionChangeEventArgs e)
	{
	}

	[Token(Token = "0x6000568")]
	[Address(RVA = "0x5EA9C70", Offset = "0x5EA8C70", VA = "0x5EA9C70")]
	internal void ParentRelationCollectionChanged(object sender, CollectionChangeEventArgs e)
	{
	}

	[Token(Token = "0x6000569")]
	[Address(RVA = "0x5EA9E90", Offset = "0x5EA8E90", VA = "0x5EA9E90", Slot = "71")]
	protected virtual void ColumnCollectionChanged(object sender, CollectionChangeEventArgs e)
	{
	}

	[Token(Token = "0x600056A")]
	[Address(RVA = "0x5EAA0B0", Offset = "0x5EA90B0", VA = "0x5EAA0B0")]
	internal void ColumnCollectionChangedInternal(object sender, CollectionChangeEventArgs e)
	{
	}
}
