using System.Collections;
using System.Collections.Generic;
using System.ComponentModel;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x2000043")]
[DefaultProperty("Table")]
[DefaultEvent("PositionChanged")]
public class DataView : MarshalByValueComponent, IBindingListView, IBindingList, IList, ICollection, IEnumerable, ITypedList, ISupportInitializeNotification, ISupportInitialize
{
	[Token(Token = "0x2000044")]
	private sealed class DataRowReferenceComparer : IEqualityComparer<DataRow>
	{
		[Token(Token = "0x4000150")]
		[FieldOffset(Offset = "0x0")]
		internal static readonly DataRowReferenceComparer s_default;

		[Token(Token = "0x600053A")]
		[Address(RVA = "0x425A7D0", Offset = "0x425A7D0", VA = "0x425A7D0")]
		private DataRowReferenceComparer()
		{
		}

		[Token(Token = "0x600053B")]
		[Address(RVA = "0x425A7E0", Offset = "0x425A7E0", VA = "0x425A7E0", Slot = "4")]
		public bool Equals(DataRow x, DataRow y)
		{
			return default(bool);
		}

		[Token(Token = "0x600053C")]
		[Address(RVA = "0x425A7F0", Offset = "0x425A7F0", VA = "0x425A7F0", Slot = "5")]
		public int GetHashCode(DataRow obj)
		{
			return default(int);
		}
	}

	[Token(Token = "0x4000131")]
	[FieldOffset(Offset = "0x20")]
	private DataViewManager _dataViewManager;

	[Token(Token = "0x4000132")]
	[FieldOffset(Offset = "0x28")]
	private DataTable _table;

	[Token(Token = "0x4000133")]
	[FieldOffset(Offset = "0x30")]
	private bool _locked;

	[Token(Token = "0x4000134")]
	[FieldOffset(Offset = "0x38")]
	private Index _index;

	[Token(Token = "0x4000135")]
	[FieldOffset(Offset = "0x40")]
	private Dictionary<string, Index> _findIndexes;

	[Token(Token = "0x4000136")]
	[FieldOffset(Offset = "0x48")]
	private string _sort;

	[Token(Token = "0x4000137")]
	[FieldOffset(Offset = "0x50")]
	private Comparison<DataRow> _comparison;

	[Token(Token = "0x4000138")]
	[FieldOffset(Offset = "0x58")]
	private IFilter _rowFilter;

	[Token(Token = "0x4000139")]
	[FieldOffset(Offset = "0x60")]
	private DataViewRowState _recordStates;

	[Token(Token = "0x400013A")]
	[FieldOffset(Offset = "0x64")]
	private bool _shouldOpen;

	[Token(Token = "0x400013B")]
	[FieldOffset(Offset = "0x65")]
	private bool _open;

	[Token(Token = "0x400013C")]
	[FieldOffset(Offset = "0x66")]
	private bool _allowNew;

	[Token(Token = "0x400013D")]
	[FieldOffset(Offset = "0x67")]
	private bool _allowEdit;

	[Token(Token = "0x400013E")]
	[FieldOffset(Offset = "0x68")]
	private bool _allowDelete;

	[Token(Token = "0x400013F")]
	[FieldOffset(Offset = "0x69")]
	private bool _applyDefaultSort;

	[Token(Token = "0x4000140")]
	[FieldOffset(Offset = "0x70")]
	internal DataRow _addNewRow;

	[Token(Token = "0x4000141")]
	[FieldOffset(Offset = "0x78")]
	private ListChangedEventArgs _addNewMoved;

	[Token(Token = "0x4000142")]
	[FieldOffset(Offset = "0x80")]
	private ListChangedEventHandler _onListChanged;

	[Token(Token = "0x4000143")]
	[FieldOffset(Offset = "0x0")]
	internal static ListChangedEventArgs s_resetEventArgs;

	[Token(Token = "0x4000144")]
	[FieldOffset(Offset = "0x88")]
	private DataTable _delayedTable;

	[Token(Token = "0x4000145")]
	[FieldOffset(Offset = "0x90")]
	private string _delayedRowFilter;

	[Token(Token = "0x4000146")]
	[FieldOffset(Offset = "0x98")]
	private string _delayedSort;

	[Token(Token = "0x4000147")]
	[FieldOffset(Offset = "0xA0")]
	private DataViewRowState _delayedRecordStates;

	[Token(Token = "0x4000148")]
	[FieldOffset(Offset = "0xA4")]
	private bool _fInitInProgress;

	[Token(Token = "0x4000149")]
	[FieldOffset(Offset = "0xA5")]
	private bool _fEndInitInProgress;

	[Token(Token = "0x400014A")]
	[FieldOffset(Offset = "0xA8")]
	private Dictionary<DataRow, DataRowView> _rowViewCache;

	[Token(Token = "0x400014B")]
	[FieldOffset(Offset = "0xB0")]
	private readonly Dictionary<DataRow, DataRowView> _rowViewBuffer;

	[Token(Token = "0x400014C")]
	[FieldOffset(Offset = "0xB8")]
	private DataViewListener _dvListener;

	[Token(Token = "0x400014D")]
	[FieldOffset(Offset = "0x8")]
	private static int s_objectTypeCount;

	[Token(Token = "0x400014E")]
	[FieldOffset(Offset = "0xC0")]
	private readonly int _objectID;

	[Token(Token = "0x170000D0")]
	[DefaultValue(true)]
	public bool AllowDelete
	{
		[Token(Token = "0x60004D4")]
		[Address(RVA = "0x4255350", Offset = "0x4255350", VA = "0x4255350")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000D1")]
	[DefaultValue(true)]
	public bool AllowEdit
	{
		[Token(Token = "0x60004D5")]
		[Address(RVA = "0x4255360", Offset = "0x4255360", VA = "0x4255360")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000D2")]
	[DefaultValue(true)]
	public bool AllowNew
	{
		[Token(Token = "0x60004D6")]
		[Address(RVA = "0x4255370", Offset = "0x4255370", VA = "0x4255370")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000D3")]
	[Browsable(false)]
	public int Count
	{
		[Token(Token = "0x60004D7")]
		[Address(RVA = "0x4255380", Offset = "0x4255380", VA = "0x4255380", Slot = "52")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000D4")]
	private int CountFromIndex
	{
		[Token(Token = "0x60004D8")]
		[Address(RVA = "0x42553D0", Offset = "0x42553D0", VA = "0x42553D0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000D5")]
	[Browsable(false)]
	public DataViewManager DataViewManager
	{
		[Token(Token = "0x60004D9")]
		[Address(RVA = "0x42553F0", Offset = "0x42553F0", VA = "0x42553F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D6")]
	[Browsable(false)]
	public bool IsInitialized
	{
		[Token(Token = "0x60004DA")]
		[Address(RVA = "0x4255400", Offset = "0x4255400", VA = "0x4255400", Slot = "58")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000D7")]
	[Browsable(false)]
	protected bool IsOpen
	{
		[Token(Token = "0x60004DB")]
		[Address(RVA = "0x4255410", Offset = "0x4255410", VA = "0x4255410")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000D8")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x60004DC")]
		[Address(RVA = "0x4255420", Offset = "0x4255420", VA = "0x4255420", Slot = "54")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000D9")]
	[DefaultValue("")]
	public virtual string RowFilter
	{
		[Token(Token = "0x60004DD")]
		[Address(RVA = "0x4255430", Offset = "0x4255430", VA = "0x4255430", Slot = "63")]
		get
		{
			return null;
		}
		[Token(Token = "0x60004DE")]
		[Address(RVA = "0x4255490", Offset = "0x4255490", VA = "0x4255490", Slot = "64")]
		set
		{
		}
	}

	[Token(Token = "0x170000DA")]
	[DefaultValue(DataViewRowState.CurrentRows)]
	public DataViewRowState RowStateFilter
	{
		[Token(Token = "0x60004DF")]
		[Address(RVA = "0x42556A0", Offset = "0x42556A0", VA = "0x42556A0")]
		get
		{
			return default(DataViewRowState);
		}
		[Token(Token = "0x60004E0")]
		[Address(RVA = "0x42556B0", Offset = "0x42556B0", VA = "0x42556B0")]
		set
		{
		}
	}

	[Token(Token = "0x170000DB")]
	[DefaultValue("")]
	public string Sort
	{
		[Token(Token = "0x60004E1")]
		[Address(RVA = "0x42557F0", Offset = "0x42557F0", VA = "0x42557F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60004E2")]
		[Address(RVA = "0x4255840", Offset = "0x4255840", VA = "0x4255840")]
		set
		{
		}
	}

	[Token(Token = "0x170000DC")]
	internal Comparison<DataRow> SortComparison
	{
		[Token(Token = "0x60004E3")]
		[Address(RVA = "0x4255A80", Offset = "0x4255A80", VA = "0x4255A80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000DD")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x60004E4")]
		[Address(RVA = "0x4255A90", Offset = "0x4255A90", VA = "0x4255A90", Slot = "53")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000DE")]
	[TypeConverter(typeof(DataTableTypeConverter))]
	[DefaultValue(null)]
	[RefreshProperties(RefreshProperties.All)]
	public DataTable Table
	{
		[Token(Token = "0x60004E5")]
		[Address(RVA = "0x4255AA0", Offset = "0x4255AA0", VA = "0x4255AA0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60004E6")]
		[Address(RVA = "0x4255AB0", Offset = "0x4255AB0", VA = "0x4255AB0")]
		set
		{
		}
	}

	[Token(Token = "0x170000DF")]
	private object System_002ECollections_002EIList_002EItem
	{
		[Token(Token = "0x60004E7")]
		[Address(RVA = "0x4255D50", Offset = "0x4255D50", VA = "0x4255D50", Slot = "40")]
		get
		{
			return null;
		}
		[Token(Token = "0x60004E8")]
		[Address(RVA = "0x4255E10", Offset = "0x4255E10", VA = "0x4255E10", Slot = "41")]
		set
		{
		}
	}

	[Token(Token = "0x170000E0")]
	public DataRowView this[int recordIndex]
	{
		[Token(Token = "0x60004E9")]
		[Address(RVA = "0x4255DB0", Offset = "0x4255DB0", VA = "0x4255DB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000E1")]
	private bool System_002ECollections_002EIList_002EIsReadOnly
	{
		[Token(Token = "0x60004F7")]
		[Address(RVA = "0x4257110", Offset = "0x4257110", VA = "0x4257110", Slot = "45")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000E2")]
	private bool System_002ECollections_002EIList_002EIsFixedSize
	{
		[Token(Token = "0x60004F8")]
		[Address(RVA = "0x4257120", Offset = "0x4257120", VA = "0x4257120", Slot = "46")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000E3")]
	private bool System_002EComponentModel_002EIBindingList_002EAllowNew
	{
		[Token(Token = "0x6000503")]
		[Address(RVA = "0x4257670", Offset = "0x4257670", VA = "0x4257670", Slot = "23")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000E4")]
	private bool System_002EComponentModel_002EIBindingList_002EAllowEdit
	{
		[Token(Token = "0x6000505")]
		[Address(RVA = "0x42576A0", Offset = "0x42576A0", VA = "0x42576A0", Slot = "25")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000E5")]
	private bool System_002EComponentModel_002EIBindingList_002EAllowRemove
	{
		[Token(Token = "0x6000506")]
		[Address(RVA = "0x42576B0", Offset = "0x42576B0", VA = "0x42576B0", Slot = "26")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000E6")]
	private bool System_002EComponentModel_002EIBindingList_002ESupportsChangeNotification
	{
		[Token(Token = "0x6000507")]
		[Address(RVA = "0x42576C0", Offset = "0x42576C0", VA = "0x42576C0", Slot = "27")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000E7")]
	private bool System_002EComponentModel_002EIBindingList_002ESupportsSearching
	{
		[Token(Token = "0x6000508")]
		[Address(RVA = "0x42576D0", Offset = "0x42576D0", VA = "0x42576D0", Slot = "28")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000E8")]
	private bool System_002EComponentModel_002EIBindingList_002ESupportsSorting
	{
		[Token(Token = "0x6000509")]
		[Address(RVA = "0x42576E0", Offset = "0x42576E0", VA = "0x42576E0", Slot = "29")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000E9")]
	private bool System_002EComponentModel_002EIBindingList_002EIsSorted
	{
		[Token(Token = "0x600050A")]
		[Address(RVA = "0x42576F0", Offset = "0x42576F0", VA = "0x42576F0", Slot = "30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000EA")]
	private PropertyDescriptor System_002EComponentModel_002EIBindingList_002ESortProperty
	{
		[Token(Token = "0x600050B")]
		[Address(RVA = "0x4257740", Offset = "0x4257740", VA = "0x4257740", Slot = "31")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000EB")]
	private ListSortDirection System_002EComponentModel_002EIBindingList_002ESortDirection
	{
		[Token(Token = "0x600050D")]
		[Address(RVA = "0x4257840", Offset = "0x4257840", VA = "0x4257840", Slot = "32")]
		get
		{
			return default(ListSortDirection);
		}
	}

	[Token(Token = "0x170000EC")]
	private string System_002EComponentModel_002EIBindingListView_002EFilter
	{
		[Token(Token = "0x600051A")]
		[Address(RVA = "0x4258930", Offset = "0x4258930", VA = "0x4258930", Slot = "17")]
		get
		{
			return null;
		}
		[Token(Token = "0x600051B")]
		[Address(RVA = "0x4258950", Offset = "0x4258950", VA = "0x4258950", Slot = "18")]
		set
		{
		}
	}

	[Token(Token = "0x170000ED")]
	private ListSortDescriptionCollection System_002EComponentModel_002EIBindingListView_002ESortDescriptions
	{
		[Token(Token = "0x600051C")]
		[Address(RVA = "0x4258970", Offset = "0x4258970", VA = "0x4258970", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000EE")]
	private bool System_002EComponentModel_002EIBindingListView_002ESupportsAdvancedSorting
	{
		[Token(Token = "0x600051E")]
		[Address(RVA = "0x4258D00", Offset = "0x4258D00", VA = "0x4258D00", Slot = "21")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000EF")]
	private bool System_002EComponentModel_002EIBindingListView_002ESupportsFiltering
	{
		[Token(Token = "0x600051F")]
		[Address(RVA = "0x4258D10", Offset = "0x4258D10", VA = "0x4258D10", Slot = "22")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000F0")]
	internal int ObjectID
	{
		[Token(Token = "0x6000538")]
		[Address(RVA = "0x425A740", Offset = "0x425A740", VA = "0x425A740")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x14000009")]
	public event ListChangedEventHandler ListChanged
	{
		[Token(Token = "0x600050E")]
		[Address(RVA = "0x4257870", Offset = "0x4257870", VA = "0x4257870", Slot = "33")]
		add
		{
		}
		[Token(Token = "0x600050F")]
		[Address(RVA = "0x4257990", Offset = "0x4257990", VA = "0x4257990", Slot = "34")]
		remove
		{
		}
	}

	[Token(Token = "0x1400000A")]
	public event EventHandler Initialized
	{
		[Token(Token = "0x6000510")]
		[Address(RVA = "0x4257AB0", Offset = "0x4257AB0", VA = "0x4257AB0", Slot = "59")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000511")]
		[Address(RVA = "0x4257B50", Offset = "0x4257B50", VA = "0x4257B50", Slot = "60")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60004D2")]
	[Address(RVA = "0x4254D60", Offset = "0x4254D60", VA = "0x4254D60")]
	internal DataView(DataTable table, bool locked)
	{
	}

	[Token(Token = "0x60004D3")]
	[Address(RVA = "0x4255050", Offset = "0x4255050", VA = "0x4255050")]
	public DataView(DataTable table)
	{
	}

	[Token(Token = "0x60004EA")]
	[Address(RVA = "0x4255F50", Offset = "0x4255F50", VA = "0x4255F50", Slot = "65")]
	public virtual DataRowView AddNew()
	{
		return null;
	}

	[Token(Token = "0x60004EB")]
	[Address(RVA = "0x42564E0", Offset = "0x42564E0", VA = "0x42564E0", Slot = "61")]
	public void BeginInit()
	{
	}

	[Token(Token = "0x60004EC")]
	[Address(RVA = "0x42564F0", Offset = "0x42564F0", VA = "0x42564F0", Slot = "62")]
	public void EndInit()
	{
	}

	[Token(Token = "0x60004ED")]
	[Address(RVA = "0x4256350", Offset = "0x4256350", VA = "0x4256350")]
	private void CheckOpen()
	{
	}

	[Token(Token = "0x60004EE")]
	[Address(RVA = "0x4255A30", Offset = "0x4255A30", VA = "0x4255A30")]
	private void CheckSort(string sort)
	{
	}

	[Token(Token = "0x60004EF")]
	[Address(RVA = "0x42567E0", Offset = "0x42567E0", VA = "0x42567E0")]
	protected void Close()
	{
	}

	[Token(Token = "0x60004F0")]
	[Address(RVA = "0x4256840", Offset = "0x4256840", VA = "0x4256840", Slot = "51")]
	public void CopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x60004F1")]
	[Address(RVA = "0x4256AE0", Offset = "0x4256AE0", VA = "0x4256AE0")]
	private void CopyTo(DataRowView[] array, int index)
	{
	}

	[Token(Token = "0x60004F2")]
	[Address(RVA = "0x4256D90", Offset = "0x4256D90", VA = "0x4256D90")]
	public void Delete(int index)
	{
	}

	[Token(Token = "0x60004F3")]
	[Address(RVA = "0x4256DB0", Offset = "0x4256DB0", VA = "0x4256DB0")]
	internal void Delete(DataRow row)
	{
	}

	[Token(Token = "0x60004F4")]
	[Address(RVA = "0x4257000", Offset = "0x4257000", VA = "0x4257000", Slot = "12")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60004F5")]
	[Address(RVA = "0x42416B0", Offset = "0x42416B0", VA = "0x42416B0")]
	internal void FinishAddNew(bool success)
	{
	}

	[Token(Token = "0x60004F6")]
	[Address(RVA = "0x4257060", Offset = "0x4257060", VA = "0x4257060", Slot = "55")]
	public IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60004F9")]
	[Address(RVA = "0x4257130", Offset = "0x4257130", VA = "0x4257130", Slot = "42")]
	private int System_002ECollections_002EIList_002EAdd(object value)
	{
		return default(int);
	}

	[Token(Token = "0x60004FA")]
	[Address(RVA = "0x42571B0", Offset = "0x42571B0", VA = "0x42571B0", Slot = "44")]
	private void System_002ECollections_002EIList_002EClear()
	{
	}

	[Token(Token = "0x60004FB")]
	[Address(RVA = "0x42571E0", Offset = "0x42571E0", VA = "0x42571E0", Slot = "43")]
	private bool System_002ECollections_002EIList_002EContains(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60004FC")]
	[Address(RVA = "0x4257260", Offset = "0x4257260", VA = "0x4257260", Slot = "47")]
	private int System_002ECollections_002EIList_002EIndexOf(object value)
	{
		return default(int);
	}

	[Token(Token = "0x60004FD")]
	[Address(RVA = "0x4256380", Offset = "0x4256380", VA = "0x4256380")]
	internal int IndexOf(DataRowView rowview)
	{
		return default(int);
	}

	[Token(Token = "0x60004FE")]
	[Address(RVA = "0x42572D0", Offset = "0x42572D0", VA = "0x42572D0")]
	private int IndexOfDataRowView(DataRowView rowview)
	{
		return default(int);
	}

	[Token(Token = "0x60004FF")]
	[Address(RVA = "0x4257340", Offset = "0x4257340", VA = "0x4257340", Slot = "48")]
	private void System_002ECollections_002EIList_002EInsert(int index, object value)
	{
	}

	[Token(Token = "0x6000500")]
	[Address(RVA = "0x4257370", Offset = "0x4257370", VA = "0x4257370", Slot = "49")]
	private void System_002ECollections_002EIList_002ERemove(object value)
	{
	}

	[Token(Token = "0x6000501")]
	[Address(RVA = "0x42574A0", Offset = "0x42574A0", VA = "0x42574A0", Slot = "50")]
	private void System_002ECollections_002EIList_002ERemoveAt(int index)
	{
	}

	[Token(Token = "0x6000502")]
	[Address(RVA = "0x42574C0", Offset = "0x42574C0", VA = "0x42574C0")]
	internal Index GetFindIndex(string column, bool keepIndex)
	{
		return null;
	}

	[Token(Token = "0x6000504")]
	[Address(RVA = "0x4257680", Offset = "0x4257680", VA = "0x4257680", Slot = "24")]
	private object System_002EComponentModel_002EIBindingList_002EAddNew()
	{
		return null;
	}

	[Token(Token = "0x600050C")]
	[Address(RVA = "0x42577C0", Offset = "0x42577C0", VA = "0x42577C0")]
	internal PropertyDescriptor GetSortProperty()
	{
		return null;
	}

	[Token(Token = "0x6000512")]
	[Address(RVA = "0x4257BF0", Offset = "0x4257BF0", VA = "0x4257BF0", Slot = "35")]
	private void System_002EComponentModel_002EIBindingList_002EAddIndex(PropertyDescriptor property)
	{
	}

	[Token(Token = "0x6000513")]
	[Address(RVA = "0x4257C30", Offset = "0x4257C30", VA = "0x4257C30", Slot = "36")]
	private void System_002EComponentModel_002EIBindingList_002EApplySort(PropertyDescriptor property, ListSortDirection direction)
	{
	}

	[Token(Token = "0x6000514")]
	[Address(RVA = "0x4257D20", Offset = "0x4257D20", VA = "0x4257D20", Slot = "37")]
	private int System_002EComponentModel_002EIBindingList_002EFind(PropertyDescriptor property, object key)
	{
		return default(int);
	}

	[Token(Token = "0x6000515")]
	[Address(RVA = "0x4258050", Offset = "0x4258050", VA = "0x4258050", Slot = "38")]
	private void System_002EComponentModel_002EIBindingList_002ERemoveIndex(PropertyDescriptor property)
	{
	}

	[Token(Token = "0x6000516")]
	[Address(RVA = "0x4258090", Offset = "0x4258090", VA = "0x4258090", Slot = "39")]
	private void System_002EComponentModel_002EIBindingList_002ERemoveSort()
	{
	}

	[Token(Token = "0x6000517")]
	[Address(RVA = "0x4258180", Offset = "0x4258180", VA = "0x4258180", Slot = "16")]
	private void System_002EComponentModel_002EIBindingListView_002EApplySort(ListSortDescriptionCollection sorts)
	{
	}

	[Token(Token = "0x6000518")]
	[Address(RVA = "0x4257C50", Offset = "0x4257C50", VA = "0x4257C50")]
	private string CreateSortString(PropertyDescriptor property, ListSortDirection direction)
	{
		return null;
	}

	[Token(Token = "0x6000519")]
	[Address(RVA = "0x4258840", Offset = "0x4258840", VA = "0x4258840", Slot = "20")]
	private void System_002EComponentModel_002EIBindingListView_002ERemoveFilter()
	{
	}

	[Token(Token = "0x600051D")]
	[Address(RVA = "0x4258980", Offset = "0x4258980", VA = "0x4258980")]
	internal ListSortDescriptionCollection GetSortDescriptions()
	{
		return null;
	}

	[Token(Token = "0x6000520")]
	[Address(RVA = "0x4258D20", Offset = "0x4258D20", VA = "0x4258D20", Slot = "56")]
	private string System_002EComponentModel_002EITypedList_002EGetListName(PropertyDescriptor[] listAccessors)
	{
		return null;
	}

	[Token(Token = "0x6000521")]
	[Address(RVA = "0x4258D80", Offset = "0x4258D80", VA = "0x4258D80", Slot = "57")]
	private PropertyDescriptorCollection System_002EComponentModel_002EITypedList_002EGetItemProperties(PropertyDescriptor[] listAccessors)
	{
		return null;
	}

	[Token(Token = "0x6000522")]
	[Address(RVA = "0x4258E20", Offset = "0x4258E20", VA = "0x4258E20", Slot = "66")]
	internal virtual IFilter GetFilter()
	{
		return null;
	}

	[Token(Token = "0x6000523")]
	[Address(RVA = "0x4258E30", Offset = "0x4258E30", VA = "0x4258E30")]
	private int GetRecord(int recordIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000524")]
	[Address(RVA = "0x4255E40", Offset = "0x4255E40", VA = "0x4255E40")]
	internal DataRow GetRow(int index)
	{
		return null;
	}

	[Token(Token = "0x6000525")]
	[Address(RVA = "0x4256A70", Offset = "0x4256A70", VA = "0x4256A70")]
	private DataRowView GetRowView(int record)
	{
		return null;
	}

	[Token(Token = "0x6000526")]
	[Address(RVA = "0x4255F00", Offset = "0x4255F00", VA = "0x4255F00")]
	private DataRowView GetRowView(DataRow dr)
	{
		return null;
	}

	[Token(Token = "0x6000527")]
	[Address(RVA = "0x4258F10", Offset = "0x4258F10", VA = "0x4258F10", Slot = "67")]
	protected virtual void IndexListChanged(object sender, ListChangedEventArgs e)
	{
	}

	[Token(Token = "0x6000528")]
	[Address(RVA = "0x4258FA0", Offset = "0x4258FA0", VA = "0x4258FA0")]
	internal void IndexListChangedInternal(ListChangedEventArgs e)
	{
	}

	[Token(Token = "0x6000529")]
	[Address(RVA = "0x4259060", Offset = "0x4259060", VA = "0x4259060")]
	internal void MaintainDataView(ListChangedType changedType, DataRow row, bool trackAddRemove)
	{
	}

	[Token(Token = "0x600052A")]
	[Address(RVA = "0x4259700", Offset = "0x4259700", VA = "0x4259700", Slot = "68")]
	protected virtual void OnListChanged(ListChangedEventArgs e)
	{
	}

	[Token(Token = "0x600052B")]
	[Address(RVA = "0x4256760", Offset = "0x4256760", VA = "0x4256760")]
	private void OnInitialized()
	{
	}

	[Token(Token = "0x600052C")]
	[Address(RVA = "0x4259B40", Offset = "0x4259B40", VA = "0x4259B40")]
	protected void Reset()
	{
	}

	[Token(Token = "0x600052D")]
	[Address(RVA = "0x42593A0", Offset = "0x42593A0", VA = "0x42593A0")]
	internal void ResetRowViewCache()
	{
	}

	[Token(Token = "0x600052E")]
	[Address(RVA = "0x4241380", Offset = "0x4241380", VA = "0x4241380")]
	internal void SetDataViewManager(DataViewManager dataViewManager)
	{
	}

	[Token(Token = "0x600052F")]
	[Address(RVA = "0x4259B60", Offset = "0x4259B60", VA = "0x4259B60", Slot = "69")]
	internal virtual void SetIndex(string newSort, DataViewRowState newRowStates, IFilter newRowFilter)
	{
	}

	[Token(Token = "0x6000530")]
	[Address(RVA = "0x42550B0", Offset = "0x42550B0", VA = "0x42550B0")]
	internal void SetIndex2(string newSort, DataViewRowState newRowStates, IFilter newRowFilter, bool fireEvent)
	{
	}

	[Token(Token = "0x6000531")]
	[Address(RVA = "0x4256820", Offset = "0x4256820", VA = "0x4256820")]
	protected void UpdateIndex()
	{
	}

	[Token(Token = "0x6000532")]
	[Address(RVA = "0x4259FD0", Offset = "0x4259FD0", VA = "0x4259FD0", Slot = "70")]
	protected virtual void UpdateIndex(bool force)
	{
	}

	[Token(Token = "0x6000533")]
	[Address(RVA = "0x4259B70", Offset = "0x4259B70", VA = "0x4259B70")]
	internal void UpdateIndex(bool force, bool fireEvent)
	{
	}

	[Token(Token = "0x6000534")]
	[Address(RVA = "0x4259FE0", Offset = "0x4259FE0", VA = "0x4259FE0")]
	internal void ChildRelationCollectionChanged(object sender, CollectionChangeEventArgs e)
	{
	}

	[Token(Token = "0x6000535")]
	[Address(RVA = "0x425A270", Offset = "0x425A270", VA = "0x425A270")]
	internal void ParentRelationCollectionChanged(object sender, CollectionChangeEventArgs e)
	{
	}

	[Token(Token = "0x6000536")]
	[Address(RVA = "0x425A500", Offset = "0x425A500", VA = "0x425A500", Slot = "71")]
	protected virtual void ColumnCollectionChanged(object sender, CollectionChangeEventArgs e)
	{
	}

	[Token(Token = "0x6000537")]
	[Address(RVA = "0x425A720", Offset = "0x425A720", VA = "0x425A720")]
	internal void ColumnCollectionChangedInternal(object sender, CollectionChangeEventArgs e)
	{
	}
}
