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
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		private DataRowReferenceComparer()
		{
		}

		[Token(Token = "0x600056E")]
		[Address(RVA = "0xC7E810", Offset = "0xC7CE10", VA = "0x180C7E810", Slot = "4")]
		public bool Equals(DataRow x, DataRow y)
		{
			return default(bool);
		}

		[Token(Token = "0x600056F")]
		[Address(RVA = "0x2509740", Offset = "0x2507D40", VA = "0x182509740", Slot = "5")]
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
		[Address(RVA = "0x12BF1A0", Offset = "0x12BD7A0", VA = "0x1812BF1A0")]
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
		[Address(RVA = "0x2510370", Offset = "0x250E970", VA = "0x182510370")]
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
		[Address(RVA = "0x2510380", Offset = "0x250E980", VA = "0x182510380")]
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
		[Address(RVA = "0x2510FA0", Offset = "0x250F5A0", VA = "0x182510FA0", Slot = "52")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000D9")]
	private int CountFromIndex
	{
		[Token(Token = "0x600050B")]
		[Address(RVA = "0x2510F70", Offset = "0x250F570", VA = "0x182510F70")]
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
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
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
		[Address(RVA = "0x2510FF0", Offset = "0x250F5F0", VA = "0x182510FF0", Slot = "58")]
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
		[Address(RVA = "0x2511000", Offset = "0x250F600", VA = "0x182511000")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000DD")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x600050F")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "54")]
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
		[Address(RVA = "0x2511010", Offset = "0x250F610", VA = "0x182511010", Slot = "63")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000511")]
		[Address(RVA = "0x25112D0", Offset = "0x250F8D0", VA = "0x1825112D0", Slot = "64")]
		set
		{
		}
	}

	[Token(Token = "0x170000DF")]
	[DefaultValue(DataViewRowState.CurrentRows)]
	public DataViewRowState RowStateFilter
	{
		[Token(Token = "0x6000512")]
		[Address(RVA = "0x1A2A530", Offset = "0x1A28B30", VA = "0x181A2A530")]
		get
		{
			return default(DataViewRowState);
		}
		[Token(Token = "0x6000513")]
		[Address(RVA = "0x25114B0", Offset = "0x250FAB0", VA = "0x1825114B0")]
		set
		{
		}
	}

	[Token(Token = "0x170000E0")]
	[DefaultValue("")]
	public string Sort
	{
		[Token(Token = "0x6000514")]
		[Address(RVA = "0x25110A0", Offset = "0x250F6A0", VA = "0x1825110A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000515")]
		[Address(RVA = "0x25115F0", Offset = "0x250FBF0", VA = "0x1825115F0")]
		set
		{
		}
	}

	[Token(Token = "0x170000E1")]
	internal Comparison<DataRow> SortComparison
	{
		[Token(Token = "0x6000516")]
		[Address(RVA = "0x5853D0", Offset = "0x5839D0", VA = "0x1805853D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000E2")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x6000517")]
		[Address(RVA = "0x611510", Offset = "0x60FB10", VA = "0x180611510", Slot = "53")]
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
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000519")]
		[Address(RVA = "0x25117C0", Offset = "0x250FDC0", VA = "0x1825117C0")]
		set
		{
		}
	}

	// C# has no syntax for parameterized property 'System.Collections.IList.Item'.
	// Its 'property:' attributes below are ignored by the compiler (CS0657).
	[property: Token(Token = "0x170000E4")]
	[Token(Token = "0x600051A")]
	[Address(RVA = "0x250FA40", Offset = "0x250E040", VA = "0x18250FA40", Slot = "40")]
	private object System_002ECollections_002EIList_002Eget_Item(int recordIndex)
	{
		return null;
	}

	[Token(Token = "0x600051B")]
	[Address(RVA = "0x250FAA0", Offset = "0x250E0A0", VA = "0x18250FAA0", Slot = "41")]
	private void System_002ECollections_002EIList_002Eset_Item(int recordIndex, object value)
	{
	}

	[Token(Token = "0x170000E5")]
	public DataRowView this[int recordIndex]
	{
		[Token(Token = "0x600051C")]
		[Address(RVA = "0x250FA40", Offset = "0x250E040", VA = "0x18250FA40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000E6")]
	private bool System_002ECollections_002EIList_002EIsReadOnly
	{
		[Token(Token = "0x600052A")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "45")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000E7")]
	private bool System_002ECollections_002EIList_002EIsFixedSize
	{
		[Token(Token = "0x600052B")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "46")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000E8")]
	private bool System_002EComponentModel_002EIBindingList_002EAllowNew
	{
		[Token(Token = "0x6000536")]
		[Address(RVA = "0x2510380", Offset = "0x250E980", VA = "0x182510380", Slot = "23")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000E9")]
	private bool System_002EComponentModel_002EIBindingList_002EAllowEdit
	{
		[Token(Token = "0x6000538")]
		[Address(RVA = "0x2510370", Offset = "0x250E970", VA = "0x182510370", Slot = "25")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000EA")]
	private bool System_002EComponentModel_002EIBindingList_002EAllowRemove
	{
		[Token(Token = "0x6000539")]
		[Address(RVA = "0x12BF1A0", Offset = "0x12BD7A0", VA = "0x1812BF1A0", Slot = "26")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000EB")]
	private bool System_002EComponentModel_002EIBindingList_002ESupportsChangeNotification
	{
		[Token(Token = "0x600053A")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "27")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000EC")]
	private bool System_002EComponentModel_002EIBindingList_002ESupportsSearching
	{
		[Token(Token = "0x600053B")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "28")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000ED")]
	private bool System_002EComponentModel_002EIBindingList_002ESupportsSorting
	{
		[Token(Token = "0x600053C")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "29")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000EE")]
	private bool System_002EComponentModel_002EIBindingList_002EIsSorted
	{
		[Token(Token = "0x600053D")]
		[Address(RVA = "0x2510390", Offset = "0x250E990", VA = "0x182510390", Slot = "30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000EF")]
	private PropertyDescriptor System_002EComponentModel_002EIBindingList_002ESortProperty
	{
		[Token(Token = "0x600053E")]
		[Address(RVA = "0x2510430", Offset = "0x250EA30", VA = "0x182510430", Slot = "31")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000F0")]
	private ListSortDirection System_002EComponentModel_002EIBindingList_002ESortDirection
	{
		[Token(Token = "0x6000540")]
		[Address(RVA = "0x25103F0", Offset = "0x250E9F0", VA = "0x1825103F0", Slot = "32")]
		get
		{
			return default(ListSortDirection);
		}
	}

	[Token(Token = "0x170000F1")]
	private string System_002EComponentModel_002EIBindingListView_002EFilter
	{
		[Token(Token = "0x600054D")]
		[Address(RVA = "0x250FF40", Offset = "0x250E540", VA = "0x18250FF40", Slot = "17")]
		get
		{
			return null;
		}
		[Token(Token = "0x600054E")]
		[Address(RVA = "0x250FF70", Offset = "0x250E570", VA = "0x18250FF70", Slot = "18")]
		set
		{
		}
	}

	[Token(Token = "0x170000F2")]
	private ListSortDescriptionCollection System_002EComponentModel_002EIBindingListView_002ESortDescriptions
	{
		[Token(Token = "0x600054F")]
		[Address(RVA = "0x250FF60", Offset = "0x250E560", VA = "0x18250FF60", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000F3")]
	private bool System_002EComponentModel_002EIBindingListView_002ESupportsAdvancedSorting
	{
		[Token(Token = "0x6000551")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "21")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000F4")]
	private bool System_002EComponentModel_002EIBindingListView_002ESupportsFiltering
	{
		[Token(Token = "0x6000552")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "22")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000F5")]
	internal int ObjectID
	{
		[Token(Token = "0x600056B")]
		[Address(RVA = "0x16F8DE0", Offset = "0x16F73E0", VA = "0x1816F8DE0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x14000009")]
	public event ListChangedEventHandler ListChanged
	{
		[Token(Token = "0x6000541")]
		[Address(RVA = "0x2510E40", Offset = "0x250F440", VA = "0x182510E40", Slot = "33")]
		add
		{
		}
		[Token(Token = "0x6000542")]
		[Address(RVA = "0x25111A0", Offset = "0x250F7A0", VA = "0x1825111A0", Slot = "34")]
		remove
		{
		}
	}

	[Token(Token = "0x1400000A")]
	public event EventHandler Initialized
	{
		[Token(Token = "0x6000543")]
		[Address(RVA = "0x2510DA0", Offset = "0x250F3A0", VA = "0x182510DA0", Slot = "59")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000544")]
		[Address(RVA = "0x2511100", Offset = "0x250F700", VA = "0x182511100", Slot = "60")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000505")]
	[Address(RVA = "0x2510A10", Offset = "0x250F010", VA = "0x182510A10")]
	internal DataView(DataTable table, bool locked)
	{
	}

	[Token(Token = "0x6000506")]
	[Address(RVA = "0x2510D30", Offset = "0x250F330", VA = "0x182510D30")]
	public DataView(DataTable table)
	{
	}

	[Token(Token = "0x600051D")]
	[Address(RVA = "0x250C7D0", Offset = "0x250ADD0", VA = "0x18250C7D0", Slot = "65")]
	public virtual DataRowView AddNew()
	{
		return null;
	}

	[Token(Token = "0x600051E")]
	[Address(RVA = "0x250CA90", Offset = "0x250B090", VA = "0x18250CA90", Slot = "61")]
	public void BeginInit()
	{
	}

	[Token(Token = "0x600051F")]
	[Address(RVA = "0x250D6D0", Offset = "0x250BCD0", VA = "0x18250D6D0", Slot = "62")]
	public void EndInit()
	{
	}

	[Token(Token = "0x6000520")]
	[Address(RVA = "0x250CAA0", Offset = "0x250B0A0", VA = "0x18250CAA0")]
	private void CheckOpen()
	{
	}

	[Token(Token = "0x6000521")]
	[Address(RVA = "0x250CAE0", Offset = "0x250B0E0", VA = "0x18250CAE0")]
	private void CheckSort(string sort)
	{
	}

	[Token(Token = "0x6000522")]
	[Address(RVA = "0x250CD70", Offset = "0x250B370", VA = "0x18250CD70")]
	protected void Close()
	{
	}

	[Token(Token = "0x6000523")]
	[Address(RVA = "0x250D000", Offset = "0x250B600", VA = "0x18250D000", Slot = "51")]
	public void CopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6000524")]
	[Address(RVA = "0x250D160", Offset = "0x250B760", VA = "0x18250D160")]
	private void CopyTo(DataRowView[] array, int index)
	{
	}

	[Token(Token = "0x6000525")]
	[Address(RVA = "0x250D640", Offset = "0x250BC40", VA = "0x18250D640")]
	public void Delete(int index)
	{
	}

	[Token(Token = "0x6000526")]
	[Address(RVA = "0x250D450", Offset = "0x250BA50", VA = "0x18250D450")]
	internal void Delete(DataRow row)
	{
	}

	[Token(Token = "0x6000527")]
	[Address(RVA = "0x250D670", Offset = "0x250BC70", VA = "0x18250D670", Slot = "12")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000528")]
	[Address(RVA = "0x250DA70", Offset = "0x250C070", VA = "0x18250DA70")]
	internal void FinishAddNew(bool success)
	{
	}

	[Token(Token = "0x6000529")]
	[Address(RVA = "0x250DC60", Offset = "0x250C260", VA = "0x18250DC60", Slot = "55")]
	public IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x600052C")]
	[Address(RVA = "0x250F700", Offset = "0x250DD00", VA = "0x18250F700", Slot = "42")]
	private int System_002ECollections_002EIList_002EAdd(object value)
	{
		return default(int);
	}

	[Token(Token = "0x600052D")]
	[Address(RVA = "0x250F790", Offset = "0x250DD90", VA = "0x18250F790", Slot = "44")]
	private void System_002ECollections_002EIList_002EClear()
	{
	}

	[Token(Token = "0x600052E")]
	[Address(RVA = "0x250F7C0", Offset = "0x250DDC0", VA = "0x18250F7C0", Slot = "43")]
	private bool System_002ECollections_002EIList_002EContains(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x600052F")]
	[Address(RVA = "0x250F850", Offset = "0x250DE50", VA = "0x18250F850", Slot = "47")]
	private int System_002ECollections_002EIList_002EIndexOf(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000530")]
	[Address(RVA = "0x250E690", Offset = "0x250CC90", VA = "0x18250E690")]
	internal int IndexOf(DataRowView rowview)
	{
		return default(int);
	}

	[Token(Token = "0x6000531")]
	[Address(RVA = "0x250E620", Offset = "0x250CC20", VA = "0x18250E620")]
	private int IndexOfDataRowView(DataRowView rowview)
	{
		return default(int);
	}

	[Token(Token = "0x6000532")]
	[Address(RVA = "0x250F8E0", Offset = "0x250DEE0", VA = "0x18250F8E0", Slot = "48")]
	private void System_002ECollections_002EIList_002EInsert(int index, object value)
	{
	}

	[Token(Token = "0x6000533")]
	[Address(RVA = "0x250F910", Offset = "0x250DF10", VA = "0x18250F910", Slot = "49")]
	private void System_002ECollections_002EIList_002ERemove(object value)
	{
	}

	[Token(Token = "0x6000534")]
	[Address(RVA = "0x250D640", Offset = "0x250BC40", VA = "0x18250D640", Slot = "50")]
	private void System_002ECollections_002EIList_002ERemoveAt(int index)
	{
	}

	[Token(Token = "0x6000535")]
	[Address(RVA = "0x250DD00", Offset = "0x250C300", VA = "0x18250DD00")]
	internal Index GetFindIndex(string column, bool keepIndex)
	{
		return null;
	}

	[Token(Token = "0x6000537")]
	[Address(RVA = "0x12B3680", Offset = "0x12B1C80", VA = "0x1812B3680", Slot = "24")]
	private object System_002EComponentModel_002EIBindingList_002EAddNew()
	{
		return null;
	}

	[Token(Token = "0x600053F")]
	[Address(RVA = "0x250E440", Offset = "0x250CA40", VA = "0x18250E440")]
	internal PropertyDescriptor GetSortProperty()
	{
		return null;
	}

	[Token(Token = "0x6000545")]
	[Address(RVA = "0x250FF90", Offset = "0x250E590", VA = "0x18250FF90", Slot = "35")]
	private void System_002EComponentModel_002EIBindingList_002EAddIndex(PropertyDescriptor property)
	{
	}

	[Token(Token = "0x6000546")]
	[Address(RVA = "0x250FFD0", Offset = "0x250E5D0", VA = "0x18250FFD0", Slot = "36")]
	private void System_002EComponentModel_002EIBindingList_002EApplySort(PropertyDescriptor property, ListSortDirection direction)
	{
	}

	[Token(Token = "0x6000547")]
	[Address(RVA = "0x2510000", Offset = "0x250E600", VA = "0x182510000", Slot = "37")]
	private int System_002EComponentModel_002EIBindingList_002EFind(PropertyDescriptor property, object key)
	{
		return default(int);
	}

	[Token(Token = "0x6000548")]
	[Address(RVA = "0x2510280", Offset = "0x250E880", VA = "0x182510280", Slot = "38")]
	private void System_002EComponentModel_002EIBindingList_002ERemoveIndex(PropertyDescriptor property)
	{
	}

	[Token(Token = "0x6000549")]
	[Address(RVA = "0x25102C0", Offset = "0x250E8C0", VA = "0x1825102C0", Slot = "39")]
	private void System_002EComponentModel_002EIBindingList_002ERemoveSort()
	{
	}

	[Token(Token = "0x600054A")]
	[Address(RVA = "0x250FAD0", Offset = "0x250E0D0", VA = "0x18250FAD0", Slot = "16")]
	private void System_002EComponentModel_002EIBindingListView_002EApplySort(ListSortDescriptionCollection sorts)
	{
	}

	[Token(Token = "0x600054B")]
	[Address(RVA = "0x250D360", Offset = "0x250B960", VA = "0x18250D360")]
	private string CreateSortString(PropertyDescriptor property, ListSortDirection direction)
	{
		return null;
	}

	[Token(Token = "0x600054C")]
	[Address(RVA = "0x250FE80", Offset = "0x250E480", VA = "0x18250FE80", Slot = "20")]
	private void System_002EComponentModel_002EIBindingListView_002ERemoveFilter()
	{
	}

	[Token(Token = "0x6000550")]
	[Address(RVA = "0x250E1B0", Offset = "0x250C7B0", VA = "0x18250E1B0")]
	internal ListSortDescriptionCollection GetSortDescriptions()
	{
		return null;
	}

	[Token(Token = "0x6000553")]
	[Address(RVA = "0x2510590", Offset = "0x250EB90", VA = "0x182510590", Slot = "56")]
	private string System_002EComponentModel_002EITypedList_002EGetListName(PropertyDescriptor[] listAccessors)
	{
		return null;
	}

	[Token(Token = "0x6000554")]
	[Address(RVA = "0x25104C0", Offset = "0x250EAC0", VA = "0x1825104C0", Slot = "57")]
	private PropertyDescriptorCollection System_002EComponentModel_002EITypedList_002EGetItemProperties(PropertyDescriptor[] listAccessors)
	{
		return null;
	}

	[Token(Token = "0x6000555")]
	[Address(RVA = "0x58A570", Offset = "0x588B70", VA = "0x18058A570", Slot = "66")]
	internal virtual IFilter GetFilter()
	{
		return null;
	}

	[Token(Token = "0x6000556")]
	[Address(RVA = "0x250DEB0", Offset = "0x250C4B0", VA = "0x18250DEB0")]
	private int GetRecord(int recordIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000557")]
	[Address(RVA = "0x250E050", Offset = "0x250C650", VA = "0x18250E050")]
	internal DataRow GetRow(int index)
	{
		return null;
	}

	[Token(Token = "0x6000558")]
	[Address(RVA = "0x250DFD0", Offset = "0x250C5D0", VA = "0x18250DFD0")]
	private DataRowView GetRowView(int record)
	{
		return null;
	}

	[Token(Token = "0x6000559")]
	[Address(RVA = "0x250DF70", Offset = "0x250C570", VA = "0x18250DF70")]
	private DataRowView GetRowView(DataRow dr)
	{
		return null;
	}

	[Token(Token = "0x600055A")]
	[Address(RVA = "0x250E5A0", Offset = "0x250CBA0", VA = "0x18250E5A0", Slot = "67")]
	protected virtual void IndexListChanged(object sender, ListChangedEventArgs e)
	{
	}

	[Token(Token = "0x600055B")]
	[Address(RVA = "0x250E4D0", Offset = "0x250CAD0", VA = "0x18250E4D0")]
	internal void IndexListChangedInternal(ListChangedEventArgs e)
	{
	}

	[Token(Token = "0x600055C")]
	[Address(RVA = "0x250E800", Offset = "0x250CE00", VA = "0x18250E800")]
	internal void MaintainDataView(ListChangedType changedType, DataRow row, bool trackAddRemove)
	{
	}

	[Token(Token = "0x600055D")]
	[Address(RVA = "0x250EB60", Offset = "0x250D160", VA = "0x18250EB60", Slot = "68")]
	protected virtual void OnListChanged(ListChangedEventArgs e)
	{
	}

	[Token(Token = "0x600055E")]
	[Address(RVA = "0x250EAE0", Offset = "0x250D0E0", VA = "0x18250EAE0")]
	private void OnInitialized()
	{
	}

	[Token(Token = "0x600055F")]
	[Address(RVA = "0x250F2D0", Offset = "0x250D8D0", VA = "0x18250F2D0")]
	protected void Reset()
	{
	}

	[Token(Token = "0x6000560")]
	[Address(RVA = "0x250F050", Offset = "0x250D650", VA = "0x18250F050")]
	internal void ResetRowViewCache()
	{
	}

	[Token(Token = "0x6000561")]
	[Address(RVA = "0x250F300", Offset = "0x250D900", VA = "0x18250F300")]
	internal void SetDataViewManager(DataViewManager dataViewManager)
	{
	}

	[Token(Token = "0x6000562")]
	[Address(RVA = "0x250F6E0", Offset = "0x250DCE0", VA = "0x18250F6E0", Slot = "69")]
	internal virtual void SetIndex(string newSort, DataViewRowState newRowStates, IFilter newRowFilter)
	{
	}

	[Token(Token = "0x6000563")]
	[Address(RVA = "0x250F4A0", Offset = "0x250DAA0", VA = "0x18250F4A0")]
	internal void SetIndex2(string newSort, DataViewRowState newRowStates, IFilter newRowFilter, bool fireEvent)
	{
	}

	[Token(Token = "0x6000564")]
	[Address(RVA = "0x2510960", Offset = "0x250EF60", VA = "0x182510960")]
	protected void UpdateIndex()
	{
	}

	[Token(Token = "0x6000565")]
	[Address(RVA = "0x2510980", Offset = "0x250EF80", VA = "0x182510980", Slot = "70")]
	protected virtual void UpdateIndex(bool force)
	{
	}

	[Token(Token = "0x6000566")]
	[Address(RVA = "0x2510610", Offset = "0x250EC10", VA = "0x182510610")]
	internal void UpdateIndex(bool force, bool fireEvent)
	{
	}

	[Token(Token = "0x6000567")]
	[Address(RVA = "0x250CB40", Offset = "0x250B140", VA = "0x18250CB40")]
	internal void ChildRelationCollectionChanged(object sender, CollectionChangeEventArgs e)
	{
	}

	[Token(Token = "0x6000568")]
	[Address(RVA = "0x250EE20", Offset = "0x250D420", VA = "0x18250EE20")]
	internal void ParentRelationCollectionChanged(object sender, CollectionChangeEventArgs e)
	{
	}

	[Token(Token = "0x6000569")]
	[Address(RVA = "0x250CDD0", Offset = "0x250B3D0", VA = "0x18250CDD0", Slot = "71")]
	protected virtual void ColumnCollectionChanged(object sender, CollectionChangeEventArgs e)
	{
	}

	[Token(Token = "0x600056A")]
	[Address(RVA = "0x250CDB0", Offset = "0x250B3B0", VA = "0x18250CDB0")]
	internal void ColumnCollectionChangedInternal(object sender, CollectionChangeEventArgs e)
	{
	}
}
