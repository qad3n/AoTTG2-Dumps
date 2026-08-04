// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Index
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.ComponentModel;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x200007F")]
internal sealed class Index
{
	[Token(Token = "0x2000080")]
	private sealed class IndexTree : RBTree<int>
	{
		[Token(Token = "0x40002AE")]
		[FieldOffset(Offset = "0x40")]
		private readonly Index _index;

		[Token(Token = "0x600078A")]
		[Address(RVA = "0x45C25C0", Offset = "0x45C25C0", VA = "0x45C25C0")]
		internal IndexTree(Index index)
		{
		}

		[Token(Token = "0x600078B")]
		[Address(RVA = "0x45C31C0", Offset = "0x45C31C0", VA = "0x45C31C0", Slot = "5")]
		protected override int CompareNode(int record1, int record2)
		{
			return default(int);
		}

		[Token(Token = "0x600078C")]
		[Address(RVA = "0x45C31E0", Offset = "0x45C31E0", VA = "0x45C31E0", Slot = "6")]
		protected override int CompareSateliteTreeNode(int record1, int record2)
		{
			return default(int);
		}
	}

	[Token(Token = "0x40002A0")]
	[FieldOffset(Offset = "0x10")]
	private readonly DataTable _table;

	[Token(Token = "0x40002A1")]
	[FieldOffset(Offset = "0x18")]
	internal readonly IndexField[] _indexFields;

	[Token(Token = "0x40002A2")]
	[FieldOffset(Offset = "0x20")]
	private readonly Comparison<DataRow> _comparison;

	[Token(Token = "0x40002A3")]
	[FieldOffset(Offset = "0x28")]
	private readonly DataViewRowState _recordStates;

	[Token(Token = "0x40002A4")]
	[FieldOffset(Offset = "0x30")]
	private WeakReference _rowFilter;

	[Token(Token = "0x40002A5")]
	[FieldOffset(Offset = "0x38")]
	private IndexTree _records;

	[Token(Token = "0x40002A6")]
	[FieldOffset(Offset = "0x40")]
	private int _recordCount;

	[Token(Token = "0x40002A7")]
	[FieldOffset(Offset = "0x44")]
	private int _refCount;

	[Token(Token = "0x40002A8")]
	[FieldOffset(Offset = "0x48")]
	private Listeners<DataViewListener> _listeners;

	[Token(Token = "0x40002A9")]
	[FieldOffset(Offset = "0x50")]
	private bool _suspendEvents;

	[Token(Token = "0x40002AA")]
	[FieldOffset(Offset = "0x51")]
	private readonly bool _isSharable;

	[Token(Token = "0x40002AB")]
	[FieldOffset(Offset = "0x52")]
	private readonly bool _hasRemoteAggregate;

	[Token(Token = "0x40002AC")]
	[FieldOffset(Offset = "0x0")]
	private static int s_objectTypeCount;

	[Token(Token = "0x40002AD")]
	[FieldOffset(Offset = "0x54")]
	private readonly int _objectID;

	[Token(Token = "0x1700012E")]
	internal bool HasRemoteAggregate
	{
		[Token(Token = "0x6000750")]
		[Address(RVA = "0x45C01D0", Offset = "0x45C01D0", VA = "0x45C01D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700012F")]
	internal int ObjectID
	{
		[Token(Token = "0x6000751")]
		[Address(RVA = "0x45C01E0", Offset = "0x45C01E0", VA = "0x45C01E0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000130")]
	public DataViewRowState RecordStates
	{
		[Token(Token = "0x6000752")]
		[Address(RVA = "0x45C01F0", Offset = "0x45C01F0", VA = "0x45C01F0")]
		get
		{
			return default(DataViewRowState);
		}
	}

	[Token(Token = "0x17000131")]
	public IFilter RowFilter
	{
		[Token(Token = "0x6000753")]
		[Address(RVA = "0x45C0200", Offset = "0x45C0200", VA = "0x45C0200")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000132")]
	public bool HasDuplicates
	{
		[Token(Token = "0x6000755")]
		[Address(RVA = "0x45C02D0", Offset = "0x45C02D0", VA = "0x45C02D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000133")]
	public int RecordCount
	{
		[Token(Token = "0x6000756")]
		[Address(RVA = "0x45C0310", Offset = "0x45C0310", VA = "0x45C0310")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000134")]
	public int RefCount
	{
		[Token(Token = "0x600075B")]
		[Address(RVA = "0x45C0620", Offset = "0x45C0620", VA = "0x45C0620")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000135")]
	private bool DoListChanged
	{
		[Token(Token = "0x600077D")]
		[Address(RVA = "0x45C2320", Offset = "0x45C2320", VA = "0x45C2320")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000136")]
	internal DataTable Table
	{
		[Token(Token = "0x6000787")]
		[Address(RVA = "0x45C31B0", Offset = "0x45C31B0", VA = "0x45C31B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600074B")]
	[Address(RVA = "0x45BF7B0", Offset = "0x45BF7B0", VA = "0x45BF7B0")]
	public Index(DataTable table, IndexField[] indexFields, DataViewRowState recordStates, IFilter rowFilter)
	{
	}

	[Token(Token = "0x600074C")]
	[Address(RVA = "0x45BFAE0", Offset = "0x45BFAE0", VA = "0x45BFAE0")]
	public Index(DataTable table, Comparison<DataRow> comparison, DataViewRowState recordStates, IFilter rowFilter)
	{
	}

	[Token(Token = "0x600074D")]
	[Address(RVA = "0x45BFB40", Offset = "0x45BFB40", VA = "0x45BFB40")]
	private static IndexField[] GetAllFields(DataColumnCollection columns)
	{
		return null;
	}

	[Token(Token = "0x600074E")]
	[Address(RVA = "0x45BF7C0", Offset = "0x45BF7C0", VA = "0x45BF7C0")]
	private Index(DataTable table, IndexField[] indexFields, Comparison<DataRow> comparison, DataViewRowState recordStates, IFilter rowFilter)
	{
	}

	[Token(Token = "0x600074F")]
	[Address(RVA = "0x45C0150", Offset = "0x45C0150", VA = "0x45C0150")]
	public bool Equal(IndexField[] indexDesc, DataViewRowState recordStates, IFilter rowFilter)
	{
		return default(bool);
	}

	[Token(Token = "0x6000754")]
	[Address(RVA = "0x45C0280", Offset = "0x45C0280", VA = "0x45C0280")]
	public int GetRecord(int recordIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000757")]
	[Address(RVA = "0x45C0320", Offset = "0x45C0320", VA = "0x45C0320")]
	private bool AcceptRecord(int record)
	{
		return default(bool);
	}

	[Token(Token = "0x6000758")]
	[Address(RVA = "0x45C03B0", Offset = "0x45C03B0", VA = "0x45C03B0")]
	private bool AcceptRecord(int record, IFilter filter)
	{
		return default(bool);
	}

	[Token(Token = "0x6000759")]
	[Address(RVA = "0x45C0580", Offset = "0x45C0580", VA = "0x45C0580")]
	internal void ListChangedAdd(DataViewListener listener)
	{
	}

	[Token(Token = "0x600075A")]
	[Address(RVA = "0x45C05D0", Offset = "0x45C05D0", VA = "0x45C05D0")]
	internal void ListChangedRemove(DataViewListener listener)
	{
	}

	[Token(Token = "0x600075C")]
	[Address(RVA = "0x45C0630", Offset = "0x45C0630", VA = "0x45C0630")]
	public void AddRef()
	{
	}

	[Token(Token = "0x600075D")]
	[Address(RVA = "0x45C0890", Offset = "0x45C0890", VA = "0x45C0890")]
	public int RemoveRef()
	{
		return default(int);
	}

	[Token(Token = "0x600075E")]
	[Address(RVA = "0x45C0A90", Offset = "0x45C0A90", VA = "0x45C0A90")]
	private void ApplyChangeAction(int record, int action, int changeRecord)
	{
	}

	[Token(Token = "0x600075F")]
	[Address(RVA = "0x45C1030", Offset = "0x45C1030", VA = "0x45C1030")]
	public bool CheckUnique()
	{
		return default(bool);
	}

	[Token(Token = "0x6000760")]
	[Address(RVA = "0x45C1080", Offset = "0x45C1080", VA = "0x45C1080")]
	private int CompareRecords(int record1, int record2)
	{
		return default(int);
	}

	[Token(Token = "0x6000761")]
	[Address(RVA = "0x45C1200", Offset = "0x45C1200", VA = "0x45C1200")]
	private int CompareDataRows(int record1, int record2)
	{
		return default(int);
	}

	[Token(Token = "0x6000762")]
	[Address(RVA = "0x45C1260", Offset = "0x45C1260", VA = "0x45C1260")]
	private int CompareDuplicateRecords(int record1, int record2)
	{
		return default(int);
	}

	[Token(Token = "0x6000763")]
	[Address(RVA = "0x45C13C0", Offset = "0x45C13C0", VA = "0x45C13C0")]
	private int CompareRecordToKey(int record1, object[] vals)
	{
		return default(int);
	}

	[Token(Token = "0x6000764")]
	[Address(RVA = "0x45C1470", Offset = "0x45C1470", VA = "0x45C1470")]
	public void DeleteRecordFromIndex(int recordIndex)
	{
	}

	[Token(Token = "0x6000765")]
	[Address(RVA = "0x45C0FD0", Offset = "0x45C0FD0", VA = "0x45C0FD0")]
	private void DeleteRecord(int recordIndex)
	{
	}

	[Token(Token = "0x6000766")]
	[Address(RVA = "0x45C1480", Offset = "0x45C1480", VA = "0x45C1480")]
	private void DeleteRecord(int recordIndex, bool fireEvent)
	{
	}

	[Token(Token = "0x6000767")]
	[Address(RVA = "0x45C17F0", Offset = "0x45C17F0", VA = "0x45C17F0")]
	public RBTree<int>.RBTreeEnumerator GetEnumerator(int startIndex)
	{
		return default(RBTree<int>.RBTreeEnumerator);
	}

	[Token(Token = "0x6000768")]
	[Address(RVA = "0x45C0FE0", Offset = "0x45C0FE0", VA = "0x45C0FE0")]
	public int GetIndex(int record)
	{
		return default(int);
	}

	[Token(Token = "0x6000769")]
	[Address(RVA = "0x45C0E50", Offset = "0x45C0E50", VA = "0x45C0E50")]
	private int GetIndex(int record, int changeRecord)
	{
		return default(int);
	}

	[Token(Token = "0x600076A")]
	[Address(RVA = "0x45B5F20", Offset = "0x45B5F20", VA = "0x45B5F20")]
	public object[] GetUniqueKeyValues()
	{
		return null;
	}

	[Token(Token = "0x600076B")]
	[Address(RVA = "0x45C1AD0", Offset = "0x45C1AD0", VA = "0x45C1AD0")]
	private int FindNodeByKey(object originalKey)
	{
		return default(int);
	}

	[Token(Token = "0x600076C")]
	[Address(RVA = "0x45C1D00", Offset = "0x45C1D00", VA = "0x45C1D00")]
	private int FindNodeByKeys(object[] originalKey)
	{
		return default(int);
	}

	[Token(Token = "0x600076D")]
	[Address(RVA = "0x45C1F90", Offset = "0x45C1F90", VA = "0x45C1F90")]
	private int FindNodeByKeyRecord(int record)
	{
		return default(int);
	}

	[Token(Token = "0x600076E")]
	[Address(RVA = "0x45C2090", Offset = "0x45C2090", VA = "0x45C2090")]
	private Range GetRangeFromNode(int nodeId)
	{
		return default(Range);
	}

	[Token(Token = "0x600076F")]
	[Address(RVA = "0x45C21B0", Offset = "0x45C21B0", VA = "0x45C21B0")]
	public Range FindRecords(object key)
	{
		return default(Range);
	}

	[Token(Token = "0x6000770")]
	[Address(RVA = "0x45B6090", Offset = "0x45B6090", VA = "0x45B6090")]
	public Range FindRecords(object[] key)
	{
		return default(Range);
	}

	[Token(Token = "0x6000771")]
	[Address(RVA = "0x45C21D0", Offset = "0x45C21D0", VA = "0x45C21D0")]
	internal void FireResetEvent()
	{
	}

	[Token(Token = "0x6000772")]
	[Address(RVA = "0x45C2550", Offset = "0x45C2550", VA = "0x45C2550")]
	private int GetChangeAction(DataViewRowState oldState, DataViewRowState newState)
	{
		return default(int);
	}

	[Token(Token = "0x6000773")]
	[Address(RVA = "0x45C2570", Offset = "0x45C2570", VA = "0x45C2570")]
	private static int GetReplaceAction(DataViewRowState oldState)
	{
		return default(int);
	}

	[Token(Token = "0x6000774")]
	[Address(RVA = "0x45B6E10", Offset = "0x45B6E10", VA = "0x45B6E10")]
	public DataRow GetRow(int i)
	{
		return null;
	}

	[Token(Token = "0x6000775")]
	[Address(RVA = "0x45C2590", Offset = "0x45C2590", VA = "0x45C2590")]
	public DataRow[] GetRows(object[] values)
	{
		return null;
	}

	[Token(Token = "0x6000776")]
	[Address(RVA = "0x45B60B0", Offset = "0x45B60B0", VA = "0x45B60B0")]
	public DataRow[] GetRows(Range range)
	{
		return null;
	}

	[Token(Token = "0x6000777")]
	[Address(RVA = "0x45BFC50", Offset = "0x45BFC50", VA = "0x45BFC50")]
	private void InitRecords(IFilter filter)
	{
	}

	[Token(Token = "0x6000778")]
	[Address(RVA = "0x45C2620", Offset = "0x45C2620", VA = "0x45C2620")]
	public int InsertRecordToIndex(int record)
	{
		return default(int);
	}

	[Token(Token = "0x6000779")]
	[Address(RVA = "0x45C0BC0", Offset = "0x45C0BC0", VA = "0x45C0BC0")]
	private int InsertRecord(int record, bool fireEvent)
	{
		return default(int);
	}

	[Token(Token = "0x600077A")]
	[Address(RVA = "0x45C26D0", Offset = "0x45C26D0", VA = "0x45C26D0")]
	public bool IsKeyInIndex(object key)
	{
		return default(bool);
	}

	[Token(Token = "0x600077B")]
	[Address(RVA = "0x45B6080", Offset = "0x45B6080", VA = "0x45B6080")]
	public bool IsKeyInIndex(object[] key)
	{
		return default(bool);
	}

	[Token(Token = "0x600077C")]
	[Address(RVA = "0x45C26E0", Offset = "0x45C26E0", VA = "0x45C26E0")]
	public bool IsKeyRecordInIndex(int record)
	{
		return default(bool);
	}

	[Token(Token = "0x600077E")]
	[Address(RVA = "0x45C26F0", Offset = "0x45C26F0", VA = "0x45C26F0")]
	private void OnListChanged(ListChangedType changedType, int newIndex, int oldIndex)
	{
	}

	[Token(Token = "0x600077F")]
	[Address(RVA = "0x45C16F0", Offset = "0x45C16F0", VA = "0x45C16F0")]
	private void OnListChanged(ListChangedType changedType, int index)
	{
	}

	[Token(Token = "0x6000780")]
	[Address(RVA = "0x45C2380", Offset = "0x45C2380", VA = "0x45C2380")]
	private void OnListChanged(ListChangedEventArgs e)
	{
	}

	[Token(Token = "0x6000781")]
	[Address(RVA = "0x45C15C0", Offset = "0x45C15C0", VA = "0x45C15C0")]
	private void MaintainDataView(ListChangedType changedType, int record, bool trackAddRemove)
	{
	}

	[Token(Token = "0x6000782")]
	[Address(RVA = "0x45C2800", Offset = "0x45C2800", VA = "0x45C2800")]
	public void Reset()
	{
	}

	[Token(Token = "0x6000783")]
	[Address(RVA = "0x45C2950", Offset = "0x45C2950", VA = "0x45C2950")]
	public void RecordChanged(int record)
	{
	}

	[Token(Token = "0x6000784")]
	[Address(RVA = "0x45C2AB0", Offset = "0x45C2AB0", VA = "0x45C2AB0")]
	public void RecordChanged(int oldIndex, int newIndex)
	{
	}

	[Token(Token = "0x6000785")]
	[Address(RVA = "0x45C2BE0", Offset = "0x45C2BE0", VA = "0x45C2BE0")]
	public void RecordStateChanged(int record, DataViewRowState oldState, DataViewRowState newState)
	{
	}

	[Token(Token = "0x6000786")]
	[Address(RVA = "0x45C2D10", Offset = "0x45C2D10", VA = "0x45C2D10")]
	public void RecordStateChanged(int oldRecord, DataViewRowState oldOldState, DataViewRowState oldNewState, int newRecord, DataViewRowState newOldState, DataViewRowState newNewState)
	{
	}

	[Token(Token = "0x6000788")]
	[Address(RVA = "0x45C1850", Offset = "0x45C1850", VA = "0x45C1850")]
	private void GetUniqueKeyValues(List<object[]> list, int curNodeId)
	{
	}

	[Token(Token = "0x6000789")]
	internal static int IndexOfReference<T>(List<T> list, T item) where T : class
	{
		return default(int);
	}
}
