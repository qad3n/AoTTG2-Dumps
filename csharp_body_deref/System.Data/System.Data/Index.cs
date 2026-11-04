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
		[Address(RVA = "0x251B1A0", Offset = "0x25197A0", VA = "0x18251B1A0")]
		internal IndexTree(Index index)
		{
		}

		[Token(Token = "0x60007AA")]
		[Address(RVA = "0x251B160", Offset = "0x2519760", VA = "0x18251B160", Slot = "5")]
		protected override int CompareNode(int record1, int record2)
		{
			return default(int);
		}

		[Token(Token = "0x60007AB")]
		[Address(RVA = "0x251B180", Offset = "0x2519780", VA = "0x18251B180", Slot = "6")]
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
		[Address(RVA = "0x251ECE0", Offset = "0x251D2E0", VA = "0x18251ECE0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000132")]
	internal int ObjectID
	{
		[Token(Token = "0x6000770")]
		[Address(RVA = "0xB57820", Offset = "0xB55E20", VA = "0x180B57820")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000133")]
	public DataViewRowState RecordStates
	{
		[Token(Token = "0x6000771")]
		[Address(RVA = "0x585030", Offset = "0x583630", VA = "0x180585030")]
		get
		{
			return default(DataViewRowState);
		}
	}

	[Token(Token = "0x17000134")]
	public IFilter RowFilter
	{
		[Token(Token = "0x6000772")]
		[Address(RVA = "0x251ECF0", Offset = "0x251D2F0", VA = "0x18251ECF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000135")]
	public bool HasDuplicates
	{
		[Token(Token = "0x6000774")]
		[Address(RVA = "0x251EC90", Offset = "0x251D290", VA = "0x18251EC90")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000136")]
	public int RecordCount
	{
		[Token(Token = "0x6000775")]
		[Address(RVA = "0x58A8B0", Offset = "0x588EB0", VA = "0x18058A8B0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000137")]
	public int RefCount
	{
		[Token(Token = "0x600077A")]
		[Address(RVA = "0x58A870", Offset = "0x588E70", VA = "0x18058A870")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000138")]
	private bool DoListChanged
	{
		[Token(Token = "0x600079C")]
		[Address(RVA = "0x251EC20", Offset = "0x251D220", VA = "0x18251EC20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000139")]
	internal DataTable Table
	{
		[Token(Token = "0x60007A6")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600076A")]
	[Address(RVA = "0x251EBF0", Offset = "0x251D1F0", VA = "0x18251EBF0")]
	public Index(DataTable table, IndexField[] indexFields, DataViewRowState recordStates, IFilter rowFilter)
	{
	}

	[Token(Token = "0x600076B")]
	[Address(RVA = "0x251E770", Offset = "0x251CD70", VA = "0x18251E770")]
	public Index(DataTable table, Comparison<DataRow> comparison, DataViewRowState recordStates, IFilter rowFilter)
	{
	}

	[Token(Token = "0x600076C")]
	[Address(RVA = "0x251C520", Offset = "0x251AB20", VA = "0x18251C520")]
	private static IndexField[] GetAllFields(DataColumnCollection columns)
	{
		return null;
	}

	[Token(Token = "0x600076D")]
	[Address(RVA = "0x251E8C0", Offset = "0x251CEC0", VA = "0x18251E8C0")]
	private Index(DataTable table, IndexField[] indexFields, Comparison<DataRow> comparison, DataViewRowState recordStates, IFilter rowFilter)
	{
	}

	[Token(Token = "0x600076E")]
	[Address(RVA = "0x251BCF0", Offset = "0x251A2F0", VA = "0x18251BCF0")]
	public bool Equal(IndexField[] indexDesc, DataViewRowState recordStates, IFilter rowFilter)
	{
		return default(bool);
	}

	[Token(Token = "0x6000773")]
	[Address(RVA = "0x251CA20", Offset = "0x251B020", VA = "0x18251CA20")]
	public int GetRecord(int recordIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000776")]
	[Address(RVA = "0x251B350", Offset = "0x2519950", VA = "0x18251B350")]
	private bool AcceptRecord(int record)
	{
		return default(bool);
	}

	[Token(Token = "0x6000777")]
	[Address(RVA = "0x251B200", Offset = "0x2519800", VA = "0x18251B200")]
	private bool AcceptRecord(int record, IFilter filter)
	{
		return default(bool);
	}

	[Token(Token = "0x6000778")]
	[Address(RVA = "0x251D790", Offset = "0x251BD90", VA = "0x18251D790")]
	internal void ListChangedAdd(DataViewListener listener)
	{
	}

	[Token(Token = "0x6000779")]
	[Address(RVA = "0x251D7F0", Offset = "0x251BDF0", VA = "0x18251D7F0")]
	internal void ListChangedRemove(DataViewListener listener)
	{
	}

	[Token(Token = "0x600077B")]
	[Address(RVA = "0x251B380", Offset = "0x2519980", VA = "0x18251B380")]
	public void AddRef()
	{
	}

	[Token(Token = "0x600077C")]
	[Address(RVA = "0x251E3E0", Offset = "0x251C9E0", VA = "0x18251E3E0")]
	public int RemoveRef()
	{
		return default(int);
	}

	[Token(Token = "0x600077D")]
	[Address(RVA = "0x251B580", Offset = "0x2519B80", VA = "0x18251B580")]
	private void ApplyChangeAction(int record, int action, int changeRecord)
	{
	}

	[Token(Token = "0x600077E")]
	[Address(RVA = "0x251B650", Offset = "0x2519C50", VA = "0x18251B650")]
	public bool CheckUnique()
	{
		return default(bool);
	}

	[Token(Token = "0x600077F")]
	[Address(RVA = "0x251B9C0", Offset = "0x2519FC0", VA = "0x18251B9C0")]
	private int CompareRecords(int record1, int record2)
	{
		return default(int);
	}

	[Token(Token = "0x6000780")]
	[Address(RVA = "0x251B6A0", Offset = "0x2519CA0", VA = "0x18251B6A0")]
	private int CompareDataRows(int record1, int record2)
	{
		return default(int);
	}

	[Token(Token = "0x6000781")]
	[Address(RVA = "0x251B710", Offset = "0x2519D10", VA = "0x18251B710")]
	private int CompareDuplicateRecords(int record1, int record2)
	{
		return default(int);
	}

	[Token(Token = "0x6000782")]
	[Address(RVA = "0x251B900", Offset = "0x2519F00", VA = "0x18251B900")]
	private int CompareRecordToKey(int record1, object[] vals)
	{
		return default(int);
	}

	[Token(Token = "0x6000783")]
	[Address(RVA = "0x251BBB0", Offset = "0x251A1B0", VA = "0x18251BBB0")]
	public void DeleteRecordFromIndex(int recordIndex)
	{
	}

	[Token(Token = "0x6000784")]
	[Address(RVA = "0x251BCE0", Offset = "0x251A2E0", VA = "0x18251BCE0")]
	private void DeleteRecord(int recordIndex)
	{
	}

	[Token(Token = "0x6000785")]
	[Address(RVA = "0x251BBC0", Offset = "0x251A1C0", VA = "0x18251BBC0")]
	private void DeleteRecord(int recordIndex, bool fireEvent)
	{
	}

	[Token(Token = "0x6000786")]
	[Address(RVA = "0x251C640", Offset = "0x251AC40", VA = "0x18251C640")]
	public RBTree<int>.RBTreeEnumerator GetEnumerator(int startIndex)
	{
		return default(RBTree<int>.RBTreeEnumerator);
	}

	[Token(Token = "0x6000787")]
	[Address(RVA = "0x251C6B0", Offset = "0x251ACB0", VA = "0x18251C6B0")]
	public int GetIndex(int record)
	{
		return default(int);
	}

	[Token(Token = "0x6000788")]
	[Address(RVA = "0x251C710", Offset = "0x251AD10", VA = "0x18251C710")]
	private int GetIndex(int record, int changeRecord)
	{
		return default(int);
	}

	[Token(Token = "0x6000789")]
	[Address(RVA = "0x251CD60", Offset = "0x251B360", VA = "0x18251CD60")]
	public object[] GetUniqueKeyValues()
	{
		return null;
	}

	[Token(Token = "0x600078A")]
	[Address(RVA = "0x251BE70", Offset = "0x251A470", VA = "0x18251BE70")]
	private int FindNodeByKey(object originalKey)
	{
		return default(int);
	}

	[Token(Token = "0x600078B")]
	[Address(RVA = "0x251C070", Offset = "0x251A670", VA = "0x18251C070")]
	private int FindNodeByKeys(object[] originalKey)
	{
		return default(int);
	}

	[Token(Token = "0x600078C")]
	[Address(RVA = "0x251BD90", Offset = "0x251A390", VA = "0x18251BD90")]
	private int FindNodeByKeyRecord(int record)
	{
		return default(int);
	}

	[Token(Token = "0x600078D")]
	[Address(RVA = "0x251C8B0", Offset = "0x251AEB0", VA = "0x18251C8B0")]
	private Range GetRangeFromNode(int nodeId)
	{
		return default(Range);
	}

	[Token(Token = "0x600078E")]
	[Address(RVA = "0x251C3A0", Offset = "0x251A9A0", VA = "0x18251C3A0")]
	public Range FindRecords(object key)
	{
		return default(Range);
	}

	[Token(Token = "0x600078F")]
	[Address(RVA = "0x251C350", Offset = "0x251A950", VA = "0x18251C350")]
	public Range FindRecords(object[] key)
	{
		return default(Range);
	}

	[Token(Token = "0x6000790")]
	[Address(RVA = "0x251C3F0", Offset = "0x251A9F0", VA = "0x18251C3F0")]
	internal void FireResetEvent()
	{
	}

	[Token(Token = "0x6000791")]
	[Address(RVA = "0x251C620", Offset = "0x251AC20", VA = "0x18251C620")]
	private int GetChangeAction(DataViewRowState oldState, DataViewRowState newState)
	{
		return default(int);
	}

	[Token(Token = "0x6000792")]
	[Address(RVA = "0x251CA80", Offset = "0x251B080", VA = "0x18251CA80")]
	private static int GetReplaceAction(DataViewRowState oldState)
	{
		return default(int);
	}

	[Token(Token = "0x6000793")]
	[Address(RVA = "0x251CAA0", Offset = "0x251B0A0", VA = "0x18251CAA0")]
	public DataRow GetRow(int i)
	{
		return null;
	}

	[Token(Token = "0x6000794")]
	[Address(RVA = "0x251CD10", Offset = "0x251B310", VA = "0x18251CD10")]
	public DataRow[] GetRows(object[] values)
	{
		return null;
	}

	[Token(Token = "0x6000795")]
	[Address(RVA = "0x251CB30", Offset = "0x251B130", VA = "0x18251CB30")]
	public DataRow[] GetRows(Range range)
	{
		return null;
	}

	[Token(Token = "0x6000796")]
	[Address(RVA = "0x251D060", Offset = "0x251B660", VA = "0x18251D060")]
	private void InitRecords(IFilter filter)
	{
	}

	[Token(Token = "0x6000797")]
	[Address(RVA = "0x251D3E0", Offset = "0x251B9E0", VA = "0x18251D3E0")]
	public int InsertRecordToIndex(int record)
	{
		return default(int);
	}

	[Token(Token = "0x6000798")]
	[Address(RVA = "0x251D440", Offset = "0x251BA40", VA = "0x18251D440")]
	private int InsertRecord(int record, bool fireEvent)
	{
		return default(int);
	}

	[Token(Token = "0x6000799")]
	[Address(RVA = "0x251D670", Offset = "0x251BC70", VA = "0x18251D670")]
	public bool IsKeyInIndex(object key)
	{
		return default(bool);
	}

	[Token(Token = "0x600079A")]
	[Address(RVA = "0x251D690", Offset = "0x251BC90", VA = "0x18251D690")]
	public bool IsKeyInIndex(object[] key)
	{
		return default(bool);
	}

	[Token(Token = "0x600079B")]
	[Address(RVA = "0x251D6B0", Offset = "0x251BCB0", VA = "0x18251D6B0")]
	public bool IsKeyRecordInIndex(int record)
	{
		return default(bool);
	}

	[Token(Token = "0x600079D")]
	[Address(RVA = "0x251DA50", Offset = "0x251C050", VA = "0x18251DA50")]
	private void OnListChanged(ListChangedType changedType, int newIndex, int oldIndex)
	{
	}

	[Token(Token = "0x600079E")]
	[Address(RVA = "0x251D980", Offset = "0x251BF80", VA = "0x18251D980")]
	private void OnListChanged(ListChangedType changedType, int index)
	{
	}

	[Token(Token = "0x600079F")]
	[Address(RVA = "0x251DB30", Offset = "0x251C130", VA = "0x18251DB30")]
	private void OnListChanged(ListChangedEventArgs e)
	{
	}

	[Token(Token = "0x60007A0")]
	[Address(RVA = "0x251D850", Offset = "0x251BE50", VA = "0x18251D850")]
	private void MaintainDataView(ListChangedType changedType, int record, bool trackAddRemove)
	{
	}

	[Token(Token = "0x60007A1")]
	[Address(RVA = "0x251E590", Offset = "0x251CB90", VA = "0x18251E590")]
	public void Reset()
	{
	}

	[Token(Token = "0x60007A2")]
	[Address(RVA = "0x251DE20", Offset = "0x251C420", VA = "0x18251DE20")]
	public void RecordChanged(int record)
	{
	}

	[Token(Token = "0x60007A3")]
	[Address(RVA = "0x251DCE0", Offset = "0x251C2E0", VA = "0x18251DCE0")]
	public void RecordChanged(int oldIndex, int newIndex)
	{
	}

	[Token(Token = "0x60007A4")]
	[Address(RVA = "0x251E2E0", Offset = "0x251C8E0", VA = "0x18251E2E0")]
	public void RecordStateChanged(int record, DataViewRowState oldState, DataViewRowState newState)
	{
	}

	[Token(Token = "0x60007A5")]
	[Address(RVA = "0x251DF60", Offset = "0x251C560", VA = "0x18251DF60")]
	public void RecordStateChanged(int oldRecord, DataViewRowState oldOldState, DataViewRowState oldNewState, int newRecord, DataViewRowState newOldState, DataViewRowState newNewState)
	{
	}

	[Token(Token = "0x60007A7")]
	[Address(RVA = "0x251CE30", Offset = "0x251B430", VA = "0x18251CE30")]
	private void GetUniqueKeyValues(List<object[]> list, int curNodeId)
	{
	}

	[Token(Token = "0x60007A8")]
	internal static int IndexOfReference<T>(List<T> list, T item) where T : class
	{
		return default(int);
	}
}
