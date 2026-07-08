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
		[Address(RVA = "0x4284E60", Offset = "0x4284E60", VA = "0x4284E60")]
		internal IndexTree(Index index)
		{
		}

		[Token(Token = "0x600078B")]
		[Address(RVA = "0x4285A60", Offset = "0x4285A60", VA = "0x4285A60", Slot = "5")]
		protected override int CompareNode(int record1, int record2)
		{
			return default(int);
		}

		[Token(Token = "0x600078C")]
		[Address(RVA = "0x4285A80", Offset = "0x4285A80", VA = "0x4285A80", Slot = "6")]
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
		[Address(RVA = "0x4282A70", Offset = "0x4282A70", VA = "0x4282A70")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700012F")]
	internal int ObjectID
	{
		[Token(Token = "0x6000751")]
		[Address(RVA = "0x4282A80", Offset = "0x4282A80", VA = "0x4282A80")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000130")]
	public DataViewRowState RecordStates
	{
		[Token(Token = "0x6000752")]
		[Address(RVA = "0x4282A90", Offset = "0x4282A90", VA = "0x4282A90")]
		get
		{
			return default(DataViewRowState);
		}
	}

	[Token(Token = "0x17000131")]
	public IFilter RowFilter
	{
		[Token(Token = "0x6000753")]
		[Address(RVA = "0x4282AA0", Offset = "0x4282AA0", VA = "0x4282AA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000132")]
	public bool HasDuplicates
	{
		[Token(Token = "0x6000755")]
		[Address(RVA = "0x4282B70", Offset = "0x4282B70", VA = "0x4282B70")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000133")]
	public int RecordCount
	{
		[Token(Token = "0x6000756")]
		[Address(RVA = "0x4282BB0", Offset = "0x4282BB0", VA = "0x4282BB0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000134")]
	public int RefCount
	{
		[Token(Token = "0x600075B")]
		[Address(RVA = "0x4282EC0", Offset = "0x4282EC0", VA = "0x4282EC0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000135")]
	private bool DoListChanged
	{
		[Token(Token = "0x600077D")]
		[Address(RVA = "0x4284BC0", Offset = "0x4284BC0", VA = "0x4284BC0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000136")]
	internal DataTable Table
	{
		[Token(Token = "0x6000787")]
		[Address(RVA = "0x4285A50", Offset = "0x4285A50", VA = "0x4285A50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600074B")]
	[Address(RVA = "0x4282050", Offset = "0x4282050", VA = "0x4282050")]
	public Index(DataTable table, IndexField[] indexFields, DataViewRowState recordStates, IFilter rowFilter)
	{
	}

	[Token(Token = "0x600074C")]
	[Address(RVA = "0x4282380", Offset = "0x4282380", VA = "0x4282380")]
	public Index(DataTable table, Comparison<DataRow> comparison, DataViewRowState recordStates, IFilter rowFilter)
	{
	}

	[Token(Token = "0x600074D")]
	[Address(RVA = "0x42823E0", Offset = "0x42823E0", VA = "0x42823E0")]
	private static IndexField[] GetAllFields(DataColumnCollection columns)
	{
		return null;
	}

	[Token(Token = "0x600074E")]
	[Address(RVA = "0x4282060", Offset = "0x4282060", VA = "0x4282060")]
	private Index(DataTable table, IndexField[] indexFields, Comparison<DataRow> comparison, DataViewRowState recordStates, IFilter rowFilter)
	{
	}

	[Token(Token = "0x600074F")]
	[Address(RVA = "0x42829F0", Offset = "0x42829F0", VA = "0x42829F0")]
	public bool Equal(IndexField[] indexDesc, DataViewRowState recordStates, IFilter rowFilter)
	{
		return default(bool);
	}

	[Token(Token = "0x6000754")]
	[Address(RVA = "0x4282B20", Offset = "0x4282B20", VA = "0x4282B20")]
	public int GetRecord(int recordIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000757")]
	[Address(RVA = "0x4282BC0", Offset = "0x4282BC0", VA = "0x4282BC0")]
	private bool AcceptRecord(int record)
	{
		return default(bool);
	}

	[Token(Token = "0x6000758")]
	[Address(RVA = "0x4282C50", Offset = "0x4282C50", VA = "0x4282C50")]
	private bool AcceptRecord(int record, IFilter filter)
	{
		return default(bool);
	}

	[Token(Token = "0x6000759")]
	[Address(RVA = "0x4282E20", Offset = "0x4282E20", VA = "0x4282E20")]
	internal void ListChangedAdd(DataViewListener listener)
	{
	}

	[Token(Token = "0x600075A")]
	[Address(RVA = "0x4282E70", Offset = "0x4282E70", VA = "0x4282E70")]
	internal void ListChangedRemove(DataViewListener listener)
	{
	}

	[Token(Token = "0x600075C")]
	[Address(RVA = "0x4282ED0", Offset = "0x4282ED0", VA = "0x4282ED0")]
	public void AddRef()
	{
	}

	[Token(Token = "0x600075D")]
	[Address(RVA = "0x4283130", Offset = "0x4283130", VA = "0x4283130")]
	public int RemoveRef()
	{
		return default(int);
	}

	[Token(Token = "0x600075E")]
	[Address(RVA = "0x4283330", Offset = "0x4283330", VA = "0x4283330")]
	private void ApplyChangeAction(int record, int action, int changeRecord)
	{
	}

	[Token(Token = "0x600075F")]
	[Address(RVA = "0x42838D0", Offset = "0x42838D0", VA = "0x42838D0")]
	public bool CheckUnique()
	{
		return default(bool);
	}

	[Token(Token = "0x6000760")]
	[Address(RVA = "0x4283920", Offset = "0x4283920", VA = "0x4283920")]
	private int CompareRecords(int record1, int record2)
	{
		return default(int);
	}

	[Token(Token = "0x6000761")]
	[Address(RVA = "0x4283AA0", Offset = "0x4283AA0", VA = "0x4283AA0")]
	private int CompareDataRows(int record1, int record2)
	{
		return default(int);
	}

	[Token(Token = "0x6000762")]
	[Address(RVA = "0x4283B00", Offset = "0x4283B00", VA = "0x4283B00")]
	private int CompareDuplicateRecords(int record1, int record2)
	{
		return default(int);
	}

	[Token(Token = "0x6000763")]
	[Address(RVA = "0x4283C60", Offset = "0x4283C60", VA = "0x4283C60")]
	private int CompareRecordToKey(int record1, object[] vals)
	{
		return default(int);
	}

	[Token(Token = "0x6000764")]
	[Address(RVA = "0x4283D10", Offset = "0x4283D10", VA = "0x4283D10")]
	public void DeleteRecordFromIndex(int recordIndex)
	{
	}

	[Token(Token = "0x6000765")]
	[Address(RVA = "0x4283870", Offset = "0x4283870", VA = "0x4283870")]
	private void DeleteRecord(int recordIndex)
	{
	}

	[Token(Token = "0x6000766")]
	[Address(RVA = "0x4283D20", Offset = "0x4283D20", VA = "0x4283D20")]
	private void DeleteRecord(int recordIndex, bool fireEvent)
	{
	}

	[Token(Token = "0x6000767")]
	[Address(RVA = "0x4284090", Offset = "0x4284090", VA = "0x4284090")]
	public RBTree<int>.RBTreeEnumerator GetEnumerator(int startIndex)
	{
		return default(RBTree<int>.RBTreeEnumerator);
	}

	[Token(Token = "0x6000768")]
	[Address(RVA = "0x4283880", Offset = "0x4283880", VA = "0x4283880")]
	public int GetIndex(int record)
	{
		return default(int);
	}

	[Token(Token = "0x6000769")]
	[Address(RVA = "0x42836F0", Offset = "0x42836F0", VA = "0x42836F0")]
	private int GetIndex(int record, int changeRecord)
	{
		return default(int);
	}

	[Token(Token = "0x600076A")]
	[Address(RVA = "0x42787C0", Offset = "0x42787C0", VA = "0x42787C0")]
	public object[] GetUniqueKeyValues()
	{
		return null;
	}

	[Token(Token = "0x600076B")]
	[Address(RVA = "0x4284370", Offset = "0x4284370", VA = "0x4284370")]
	private int FindNodeByKey(object originalKey)
	{
		return default(int);
	}

	[Token(Token = "0x600076C")]
	[Address(RVA = "0x42845A0", Offset = "0x42845A0", VA = "0x42845A0")]
	private int FindNodeByKeys(object[] originalKey)
	{
		return default(int);
	}

	[Token(Token = "0x600076D")]
	[Address(RVA = "0x4284830", Offset = "0x4284830", VA = "0x4284830")]
	private int FindNodeByKeyRecord(int record)
	{
		return default(int);
	}

	[Token(Token = "0x600076E")]
	[Address(RVA = "0x4284930", Offset = "0x4284930", VA = "0x4284930")]
	private Range GetRangeFromNode(int nodeId)
	{
		return default(Range);
	}

	[Token(Token = "0x600076F")]
	[Address(RVA = "0x4284A50", Offset = "0x4284A50", VA = "0x4284A50")]
	public Range FindRecords(object key)
	{
		return default(Range);
	}

	[Token(Token = "0x6000770")]
	[Address(RVA = "0x4278930", Offset = "0x4278930", VA = "0x4278930")]
	public Range FindRecords(object[] key)
	{
		return default(Range);
	}

	[Token(Token = "0x6000771")]
	[Address(RVA = "0x4284A70", Offset = "0x4284A70", VA = "0x4284A70")]
	internal void FireResetEvent()
	{
	}

	[Token(Token = "0x6000772")]
	[Address(RVA = "0x4284DF0", Offset = "0x4284DF0", VA = "0x4284DF0")]
	private int GetChangeAction(DataViewRowState oldState, DataViewRowState newState)
	{
		return default(int);
	}

	[Token(Token = "0x6000773")]
	[Address(RVA = "0x4284E10", Offset = "0x4284E10", VA = "0x4284E10")]
	private static int GetReplaceAction(DataViewRowState oldState)
	{
		return default(int);
	}

	[Token(Token = "0x6000774")]
	[Address(RVA = "0x42796B0", Offset = "0x42796B0", VA = "0x42796B0")]
	public DataRow GetRow(int i)
	{
		return null;
	}

	[Token(Token = "0x6000775")]
	[Address(RVA = "0x4284E30", Offset = "0x4284E30", VA = "0x4284E30")]
	public DataRow[] GetRows(object[] values)
	{
		return null;
	}

	[Token(Token = "0x6000776")]
	[Address(RVA = "0x4278950", Offset = "0x4278950", VA = "0x4278950")]
	public DataRow[] GetRows(Range range)
	{
		return null;
	}

	[Token(Token = "0x6000777")]
	[Address(RVA = "0x42824F0", Offset = "0x42824F0", VA = "0x42824F0")]
	private void InitRecords(IFilter filter)
	{
	}

	[Token(Token = "0x6000778")]
	[Address(RVA = "0x4284EC0", Offset = "0x4284EC0", VA = "0x4284EC0")]
	public int InsertRecordToIndex(int record)
	{
		return default(int);
	}

	[Token(Token = "0x6000779")]
	[Address(RVA = "0x4283460", Offset = "0x4283460", VA = "0x4283460")]
	private int InsertRecord(int record, bool fireEvent)
	{
		return default(int);
	}

	[Token(Token = "0x600077A")]
	[Address(RVA = "0x4284F70", Offset = "0x4284F70", VA = "0x4284F70")]
	public bool IsKeyInIndex(object key)
	{
		return default(bool);
	}

	[Token(Token = "0x600077B")]
	[Address(RVA = "0x4278920", Offset = "0x4278920", VA = "0x4278920")]
	public bool IsKeyInIndex(object[] key)
	{
		return default(bool);
	}

	[Token(Token = "0x600077C")]
	[Address(RVA = "0x4284F80", Offset = "0x4284F80", VA = "0x4284F80")]
	public bool IsKeyRecordInIndex(int record)
	{
		return default(bool);
	}

	[Token(Token = "0x600077E")]
	[Address(RVA = "0x4284F90", Offset = "0x4284F90", VA = "0x4284F90")]
	private void OnListChanged(ListChangedType changedType, int newIndex, int oldIndex)
	{
	}

	[Token(Token = "0x600077F")]
	[Address(RVA = "0x4283F90", Offset = "0x4283F90", VA = "0x4283F90")]
	private void OnListChanged(ListChangedType changedType, int index)
	{
	}

	[Token(Token = "0x6000780")]
	[Address(RVA = "0x4284C20", Offset = "0x4284C20", VA = "0x4284C20")]
	private void OnListChanged(ListChangedEventArgs e)
	{
	}

	[Token(Token = "0x6000781")]
	[Address(RVA = "0x4283E60", Offset = "0x4283E60", VA = "0x4283E60")]
	private void MaintainDataView(ListChangedType changedType, int record, bool trackAddRemove)
	{
	}

	[Token(Token = "0x6000782")]
	[Address(RVA = "0x42850A0", Offset = "0x42850A0", VA = "0x42850A0")]
	public void Reset()
	{
	}

	[Token(Token = "0x6000783")]
	[Address(RVA = "0x42851F0", Offset = "0x42851F0", VA = "0x42851F0")]
	public void RecordChanged(int record)
	{
	}

	[Token(Token = "0x6000784")]
	[Address(RVA = "0x4285350", Offset = "0x4285350", VA = "0x4285350")]
	public void RecordChanged(int oldIndex, int newIndex)
	{
	}

	[Token(Token = "0x6000785")]
	[Address(RVA = "0x4285480", Offset = "0x4285480", VA = "0x4285480")]
	public void RecordStateChanged(int record, DataViewRowState oldState, DataViewRowState newState)
	{
	}

	[Token(Token = "0x6000786")]
	[Address(RVA = "0x42855B0", Offset = "0x42855B0", VA = "0x42855B0")]
	public void RecordStateChanged(int oldRecord, DataViewRowState oldOldState, DataViewRowState oldNewState, int newRecord, DataViewRowState newOldState, DataViewRowState newNewState)
	{
	}

	[Token(Token = "0x6000788")]
	[Address(RVA = "0x42840F0", Offset = "0x42840F0", VA = "0x42840F0")]
	private void GetUniqueKeyValues(List<object[]> list, int curNodeId)
	{
	}

	[Token(Token = "0x6000789")]
	internal static int IndexOfReference<T>(List<T> list, T item) where T : class
	{
		return default(int);
	}
}
