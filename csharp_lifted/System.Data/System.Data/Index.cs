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

[Token(Token = "0x2000089")]
internal sealed class Index
{
	[Token(Token = "0x200008A")]
	private sealed class IndexTree : RBTree<int>
	{
		[Token(Token = "0x40002C1")]
		[FieldOffset(Offset = "0x40")]
		private readonly Index _index;

		[Token(Token = "0x60007A9")]
		[Address(RVA = "0x5ECB000", Offset = "0x5ECA000", VA = "0x5ECB000")]
		internal IndexTree(Index index)
		{
		}

		[Token(Token = "0x60007AA")]
		[Address(RVA = "0x5ECBBE0", Offset = "0x5ECABE0", VA = "0x5ECBBE0", Slot = "5")]
		protected override int CompareNode(int record1, int record2)
		{
			return default(int);
		}

		[Token(Token = "0x60007AB")]
		[Address(RVA = "0x5ECBC00", Offset = "0x5ECAC00", VA = "0x5ECBC00", Slot = "6")]
		protected override int CompareSateliteTreeNode(int record1, int record2)
		{
			return default(int);
		}
	}

	[Token(Token = "0x40002B3")]
	[FieldOffset(Offset = "0x10")]
	private readonly DataTable _table;

	[Token(Token = "0x40002B4")]
	[FieldOffset(Offset = "0x18")]
	internal readonly IndexField[] _indexFields;

	[Token(Token = "0x40002B5")]
	[FieldOffset(Offset = "0x20")]
	private readonly Comparison<DataRow> _comparison;

	[Token(Token = "0x40002B6")]
	[FieldOffset(Offset = "0x28")]
	private readonly DataViewRowState _recordStates;

	[Token(Token = "0x40002B7")]
	[FieldOffset(Offset = "0x30")]
	private WeakReference _rowFilter;

	[Token(Token = "0x40002B8")]
	[FieldOffset(Offset = "0x38")]
	private IndexTree _records;

	[Token(Token = "0x40002B9")]
	[FieldOffset(Offset = "0x40")]
	private int _recordCount;

	[Token(Token = "0x40002BA")]
	[FieldOffset(Offset = "0x44")]
	private int _refCount;

	[Token(Token = "0x40002BB")]
	[FieldOffset(Offset = "0x48")]
	private Listeners<DataViewListener> _listeners;

	[Token(Token = "0x40002BC")]
	[FieldOffset(Offset = "0x50")]
	private bool _suspendEvents;

	[Token(Token = "0x40002BD")]
	[FieldOffset(Offset = "0x51")]
	private readonly bool _isSharable;

	[Token(Token = "0x40002BE")]
	[FieldOffset(Offset = "0x52")]
	private readonly bool _hasRemoteAggregate;

	[Token(Token = "0x40002BF")]
	[FieldOffset(Offset = "0x0")]
	private static int s_objectTypeCount;

	[Token(Token = "0x40002C0")]
	[FieldOffset(Offset = "0x54")]
	private readonly int _objectID;

	[Token(Token = "0x17000131")]
	internal bool HasRemoteAggregate
	{
		[Token(Token = "0x600076F")]
		[Address(RVA = "0x5EC8CD0", Offset = "0x5EC7CD0", VA = "0x5EC8CD0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000132")]
	internal int ObjectID
	{
		[Token(Token = "0x6000770")]
		[Address(RVA = "0x5EC8CE0", Offset = "0x5EC7CE0", VA = "0x5EC8CE0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000133")]
	public DataViewRowState RecordStates
	{
		[Token(Token = "0x6000771")]
		[Address(RVA = "0x5EC8CF0", Offset = "0x5EC7CF0", VA = "0x5EC8CF0")]
		get
		{
			return default(DataViewRowState);
		}
	}

	[Token(Token = "0x17000134")]
	public IFilter RowFilter
	{
		[Token(Token = "0x6000772")]
		[Address(RVA = "0x5EC8D00", Offset = "0x5EC7D00", VA = "0x5EC8D00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000135")]
	public bool HasDuplicates
	{
		[Token(Token = "0x6000774")]
		[Address(RVA = "0x5EC8DD0", Offset = "0x5EC7DD0", VA = "0x5EC8DD0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000136")]
	public int RecordCount
	{
		[Token(Token = "0x6000775")]
		[Address(RVA = "0x5EC8E10", Offset = "0x5EC7E10", VA = "0x5EC8E10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000137")]
	public int RefCount
	{
		[Token(Token = "0x600077A")]
		[Address(RVA = "0x5EC9120", Offset = "0x5EC8120", VA = "0x5EC9120")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000138")]
	private bool DoListChanged
	{
		[Token(Token = "0x600079C")]
		[Address(RVA = "0x5ECAD60", Offset = "0x5EC9D60", VA = "0x5ECAD60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000139")]
	internal DataTable Table
	{
		[Token(Token = "0x60007A6")]
		[Address(RVA = "0x5ECBBD0", Offset = "0x5ECABD0", VA = "0x5ECBBD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600076A")]
	[Address(RVA = "0x5EC8360", Offset = "0x5EC7360", VA = "0x5EC8360")]
	public Index(DataTable table, IndexField[] indexFields, DataViewRowState recordStates, IFilter rowFilter)
	{
	}

	[Token(Token = "0x600076B")]
	[Address(RVA = "0x5EC8690", Offset = "0x5EC7690", VA = "0x5EC8690")]
	public Index(DataTable table, Comparison<DataRow> comparison, DataViewRowState recordStates, IFilter rowFilter)
	{
	}

	[Token(Token = "0x600076C")]
	[Address(RVA = "0x5EC86F0", Offset = "0x5EC76F0", VA = "0x5EC86F0")]
	private static IndexField[] GetAllFields(DataColumnCollection columns)
	{
		return null;
	}

	[Token(Token = "0x600076D")]
	[Address(RVA = "0x5EC8370", Offset = "0x5EC7370", VA = "0x5EC8370")]
	private Index(DataTable table, IndexField[] indexFields, Comparison<DataRow> comparison, DataViewRowState recordStates, IFilter rowFilter)
	{
	}

	[Token(Token = "0x600076E")]
	[Address(RVA = "0x5EC8C50", Offset = "0x5EC7C50", VA = "0x5EC8C50")]
	public bool Equal(IndexField[] indexDesc, DataViewRowState recordStates, IFilter rowFilter)
	{
		return default(bool);
	}

	[Token(Token = "0x6000773")]
	[Address(RVA = "0x5EC8D80", Offset = "0x5EC7D80", VA = "0x5EC8D80")]
	public int GetRecord(int recordIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000776")]
	[Address(RVA = "0x5EC8E20", Offset = "0x5EC7E20", VA = "0x5EC8E20")]
	private bool AcceptRecord(int record)
	{
		return default(bool);
	}

	[Token(Token = "0x6000777")]
	[Address(RVA = "0x5EC8EB0", Offset = "0x5EC7EB0", VA = "0x5EC8EB0")]
	private bool AcceptRecord(int record, IFilter filter)
	{
		return default(bool);
	}

	[Token(Token = "0x6000778")]
	[Address(RVA = "0x5EC9080", Offset = "0x5EC8080", VA = "0x5EC9080")]
	internal void ListChangedAdd(DataViewListener listener)
	{
	}

	[Token(Token = "0x6000779")]
	[Address(RVA = "0x5EC90D0", Offset = "0x5EC80D0", VA = "0x5EC90D0")]
	internal void ListChangedRemove(DataViewListener listener)
	{
	}

	[Token(Token = "0x600077B")]
	[Address(RVA = "0x5EC9130", Offset = "0x5EC8130", VA = "0x5EC9130")]
	public void AddRef()
	{
	}

	[Token(Token = "0x600077C")]
	[Address(RVA = "0x5EC9350", Offset = "0x5EC8350", VA = "0x5EC9350")]
	public int RemoveRef()
	{
		return default(int);
	}

	[Token(Token = "0x600077D")]
	[Address(RVA = "0x5EC9530", Offset = "0x5EC8530", VA = "0x5EC9530")]
	private void ApplyChangeAction(int record, int action, int changeRecord)
	{
	}

	[Token(Token = "0x600077E")]
	[Address(RVA = "0x5EC9AD0", Offset = "0x5EC8AD0", VA = "0x5EC9AD0")]
	public bool CheckUnique()
	{
		return default(bool);
	}

	[Token(Token = "0x600077F")]
	[Address(RVA = "0x5EC9B20", Offset = "0x5EC8B20", VA = "0x5EC9B20")]
	private int CompareRecords(int record1, int record2)
	{
		return default(int);
	}

	[Token(Token = "0x6000780")]
	[Address(RVA = "0x5EC9C90", Offset = "0x5EC8C90", VA = "0x5EC9C90")]
	private int CompareDataRows(int record1, int record2)
	{
		return default(int);
	}

	[Token(Token = "0x6000781")]
	[Address(RVA = "0x5EC9CF0", Offset = "0x5EC8CF0", VA = "0x5EC9CF0")]
	private int CompareDuplicateRecords(int record1, int record2)
	{
		return default(int);
	}

	[Token(Token = "0x6000782")]
	[Address(RVA = "0x5EC9E50", Offset = "0x5EC8E50", VA = "0x5EC9E50")]
	private int CompareRecordToKey(int record1, object[] vals)
	{
		return default(int);
	}

	[Token(Token = "0x6000783")]
	[Address(RVA = "0x5EC9F10", Offset = "0x5EC8F10", VA = "0x5EC9F10")]
	public void DeleteRecordFromIndex(int recordIndex)
	{
	}

	[Token(Token = "0x6000784")]
	[Address(RVA = "0x5EC9A70", Offset = "0x5EC8A70", VA = "0x5EC9A70")]
	private void DeleteRecord(int recordIndex)
	{
	}

	[Token(Token = "0x6000785")]
	[Address(RVA = "0x5EC9F20", Offset = "0x5EC8F20", VA = "0x5EC9F20")]
	private void DeleteRecord(int recordIndex, bool fireEvent)
	{
	}

	[Token(Token = "0x6000786")]
	[Address(RVA = "0x5ECA270", Offset = "0x5EC9270", VA = "0x5ECA270")]
	public RBTree<int>.RBTreeEnumerator GetEnumerator(int startIndex)
	{
		return default(RBTree<int>.RBTreeEnumerator);
	}

	[Token(Token = "0x6000787")]
	[Address(RVA = "0x5EC9A80", Offset = "0x5EC8A80", VA = "0x5EC9A80")]
	public int GetIndex(int record)
	{
		return default(int);
	}

	[Token(Token = "0x6000788")]
	[Address(RVA = "0x5EC98F0", Offset = "0x5EC88F0", VA = "0x5EC98F0")]
	private int GetIndex(int record, int changeRecord)
	{
		return default(int);
	}

	[Token(Token = "0x6000789")]
	[Address(RVA = "0x5EBF3D0", Offset = "0x5EBE3D0", VA = "0x5EBF3D0")]
	public object[] GetUniqueKeyValues()
	{
		return null;
	}

	[Token(Token = "0x600078A")]
	[Address(RVA = "0x5ECA540", Offset = "0x5EC9540", VA = "0x5ECA540")]
	private int FindNodeByKey(object originalKey)
	{
		return default(int);
	}

	[Token(Token = "0x600078B")]
	[Address(RVA = "0x5ECA760", Offset = "0x5EC9760", VA = "0x5ECA760")]
	private int FindNodeByKeys(object[] originalKey)
	{
		return default(int);
	}

	[Token(Token = "0x600078C")]
	[Address(RVA = "0x5ECA9E0", Offset = "0x5EC99E0", VA = "0x5ECA9E0")]
	private int FindNodeByKeyRecord(int record)
	{
		return default(int);
	}

	[Token(Token = "0x600078D")]
	[Address(RVA = "0x5ECAAD0", Offset = "0x5EC9AD0", VA = "0x5ECAAD0")]
	private Range GetRangeFromNode(int nodeId)
	{
		return default(Range);
	}

	[Token(Token = "0x600078E")]
	[Address(RVA = "0x5ECABF0", Offset = "0x5EC9BF0", VA = "0x5ECABF0")]
	public Range FindRecords(object key)
	{
		return default(Range);
	}

	[Token(Token = "0x600078F")]
	[Address(RVA = "0x5EBF540", Offset = "0x5EBE540", VA = "0x5EBF540")]
	public Range FindRecords(object[] key)
	{
		return default(Range);
	}

	[Token(Token = "0x6000790")]
	[Address(RVA = "0x5ECAC10", Offset = "0x5EC9C10", VA = "0x5ECAC10")]
	internal void FireResetEvent()
	{
	}

	[Token(Token = "0x6000791")]
	[Address(RVA = "0x5ECAF90", Offset = "0x5EC9F90", VA = "0x5ECAF90")]
	private int GetChangeAction(DataViewRowState oldState, DataViewRowState newState)
	{
		return default(int);
	}

	[Token(Token = "0x6000792")]
	[Address(RVA = "0x5ECAFB0", Offset = "0x5EC9FB0", VA = "0x5ECAFB0")]
	private static int GetReplaceAction(DataViewRowState oldState)
	{
		return default(int);
	}

	[Token(Token = "0x6000793")]
	[Address(RVA = "0x5EC0170", Offset = "0x5EBF170", VA = "0x5EC0170")]
	public DataRow GetRow(int i)
	{
		return null;
	}

	[Token(Token = "0x6000794")]
	[Address(RVA = "0x5ECAFD0", Offset = "0x5EC9FD0", VA = "0x5ECAFD0")]
	public DataRow[] GetRows(object[] values)
	{
		return null;
	}

	[Token(Token = "0x6000795")]
	[Address(RVA = "0x5EBF560", Offset = "0x5EBE560", VA = "0x5EBF560")]
	public DataRow[] GetRows(Range range)
	{
		return null;
	}

	[Token(Token = "0x6000796")]
	[Address(RVA = "0x5EC87F0", Offset = "0x5EC77F0", VA = "0x5EC87F0")]
	private void InitRecords(IFilter filter)
	{
	}

	[Token(Token = "0x6000797")]
	[Address(RVA = "0x5ECB060", Offset = "0x5ECA060", VA = "0x5ECB060")]
	public int InsertRecordToIndex(int record)
	{
		return default(int);
	}

	[Token(Token = "0x6000798")]
	[Address(RVA = "0x5EC9660", Offset = "0x5EC8660", VA = "0x5EC9660")]
	private int InsertRecord(int record, bool fireEvent)
	{
		return default(int);
	}

	[Token(Token = "0x6000799")]
	[Address(RVA = "0x5ECB110", Offset = "0x5ECA110", VA = "0x5ECB110")]
	public bool IsKeyInIndex(object key)
	{
		return default(bool);
	}

	[Token(Token = "0x600079A")]
	[Address(RVA = "0x5EBF530", Offset = "0x5EBE530", VA = "0x5EBF530")]
	public bool IsKeyInIndex(object[] key)
	{
		return default(bool);
	}

	[Token(Token = "0x600079B")]
	[Address(RVA = "0x5ECB120", Offset = "0x5ECA120", VA = "0x5ECB120")]
	public bool IsKeyRecordInIndex(int record)
	{
		return default(bool);
	}

	[Token(Token = "0x600079D")]
	[Address(RVA = "0x5ECB130", Offset = "0x5ECA130", VA = "0x5ECB130")]
	private void OnListChanged(ListChangedType changedType, int newIndex, int oldIndex)
	{
	}

	[Token(Token = "0x600079E")]
	[Address(RVA = "0x5ECA190", Offset = "0x5EC9190", VA = "0x5ECA190")]
	private void OnListChanged(ListChangedType changedType, int index)
	{
	}

	[Token(Token = "0x600079F")]
	[Address(RVA = "0x5ECADC0", Offset = "0x5EC9DC0", VA = "0x5ECADC0")]
	private void OnListChanged(ListChangedEventArgs e)
	{
	}

	[Token(Token = "0x60007A0")]
	[Address(RVA = "0x5ECA060", Offset = "0x5EC9060", VA = "0x5ECA060")]
	private void MaintainDataView(ListChangedType changedType, int record, bool trackAddRemove)
	{
	}

	[Token(Token = "0x60007A1")]
	[Address(RVA = "0x5ECB220", Offset = "0x5ECA220", VA = "0x5ECB220")]
	public void Reset()
	{
	}

	[Token(Token = "0x60007A2")]
	[Address(RVA = "0x5ECB370", Offset = "0x5ECA370", VA = "0x5ECB370")]
	public void RecordChanged(int record)
	{
	}

	[Token(Token = "0x60007A3")]
	[Address(RVA = "0x5ECB4D0", Offset = "0x5ECA4D0", VA = "0x5ECB4D0")]
	public void RecordChanged(int oldIndex, int newIndex)
	{
	}

	[Token(Token = "0x60007A4")]
	[Address(RVA = "0x5ECB600", Offset = "0x5ECA600", VA = "0x5ECB600")]
	public void RecordStateChanged(int record, DataViewRowState oldState, DataViewRowState newState)
	{
	}

	[Token(Token = "0x60007A5")]
	[Address(RVA = "0x5ECB730", Offset = "0x5ECA730", VA = "0x5ECB730")]
	public void RecordStateChanged(int oldRecord, DataViewRowState oldOldState, DataViewRowState oldNewState, int newRecord, DataViewRowState newOldState, DataViewRowState newNewState)
	{
	}

	[Token(Token = "0x60007A7")]
	[Address(RVA = "0x5ECA2D0", Offset = "0x5EC92D0", VA = "0x5ECA2D0")]
	private void GetUniqueKeyValues(List<object[]> list, int curNodeId)
	{
	}

	[Token(Token = "0x60007A8")]
	internal static int IndexOfReference<T>(List<T> list, T item) where T : class
	{
		return default(int);
	}
}
