// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.DataRow
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.ComponentModel;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x200002A")]
public class DataRow
{
	[Token(Token = "0x4000084")]
	[FieldOffset(Offset = "0x10")]
	private readonly DataTable _table;

	[Token(Token = "0x4000085")]
	[FieldOffset(Offset = "0x18")]
	private readonly DataColumnCollection _columns;

	[Token(Token = "0x4000086")]
	[FieldOffset(Offset = "0x20")]
	internal int _oldRecord;

	[Token(Token = "0x4000087")]
	[FieldOffset(Offset = "0x24")]
	internal int _newRecord;

	[Token(Token = "0x4000088")]
	[FieldOffset(Offset = "0x28")]
	internal int _tempRecord;

	[Token(Token = "0x4000089")]
	[FieldOffset(Offset = "0x30")]
	internal long _rowID;

	[Token(Token = "0x400008A")]
	[FieldOffset(Offset = "0x38")]
	internal DataRowAction _action;

	[Token(Token = "0x400008B")]
	[FieldOffset(Offset = "0x3C")]
	internal bool _inChangingEvent;

	[Token(Token = "0x400008C")]
	[FieldOffset(Offset = "0x3D")]
	internal bool _inDeletingEvent;

	[Token(Token = "0x400008D")]
	[FieldOffset(Offset = "0x3E")]
	internal bool _inCascade;

	[Token(Token = "0x400008E")]
	[FieldOffset(Offset = "0x40")]
	private DataColumn _lastChangedColumn;

	[Token(Token = "0x400008F")]
	[FieldOffset(Offset = "0x48")]
	private int _countColumnChange;

	[Token(Token = "0x4000090")]
	[FieldOffset(Offset = "0x50")]
	private DataError _error;

	[Token(Token = "0x4000091")]
	[FieldOffset(Offset = "0x58")]
	private int _rbTreeNodeId;

	[Token(Token = "0x4000092")]
	[FieldOffset(Offset = "0x0")]
	private static int s_objectTypeCount;

	[Token(Token = "0x4000093")]
	[FieldOffset(Offset = "0x5C")]
	internal readonly int _objectID;

	[Token(Token = "0x17000077")]
	internal DataColumn LastChangedColumn
	{
		[Token(Token = "0x60002E4")]
		[Address(RVA = "0x45798A0", Offset = "0x45798A0", VA = "0x45798A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60002E5")]
		[Address(RVA = "0x45798B0", Offset = "0x45798B0", VA = "0x45798B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000078")]
	internal bool HasPropertyChanged
	{
		[Token(Token = "0x60002E6")]
		[Address(RVA = "0x45798D0", Offset = "0x45798D0", VA = "0x45798D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000079")]
	internal int RBTreeNodeId
	{
		[Token(Token = "0x60002E7")]
		[Address(RVA = "0x45798E0", Offset = "0x45798E0", VA = "0x45798E0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60002E8")]
		[Address(RVA = "0x45798F0", Offset = "0x45798F0", VA = "0x45798F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700007A")]
	public string RowError
	{
		[Token(Token = "0x60002E9")]
		[Address(RVA = "0x45799B0", Offset = "0x45799B0", VA = "0x45799B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60002EA")]
		[Address(RVA = "0x45799E0", Offset = "0x45799E0", VA = "0x45799E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700007B")]
	internal long rowID
	{
		[Token(Token = "0x60002EC")]
		[Address(RVA = "0x4579BB0", Offset = "0x4579BB0", VA = "0x4579BB0")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x60002ED")]
		[Address(RVA = "0x4579BC0", Offset = "0x4579BC0", VA = "0x4579BC0")]
		set
		{
		}
	}

	[Token(Token = "0x1700007C")]
	public DataRowState RowState
	{
		[Token(Token = "0x60002EE")]
		[Address(RVA = "0x4579C10", Offset = "0x4579C10", VA = "0x4579C10")]
		get
		{
			return default(DataRowState);
		}
	}

	[Token(Token = "0x1700007D")]
	public DataTable Table
	{
		[Token(Token = "0x60002EF")]
		[Address(RVA = "0x4579EB0", Offset = "0x4579EB0", VA = "0x4579EB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700007E")]
	public string this[string columnName]
	{
		[Token(Token = "0x60002F2")]
		[Address(RVA = "0x457A080", Offset = "0x457A080", VA = "0x457A080")]
		set
		{
		}
	}

	[Token(Token = "0x1700007F")]
	public object this[DataColumn column]
	{
		[Token(Token = "0x60002F3")]
		[Address(RVA = "0x4579E40", Offset = "0x4579E40", VA = "0x4579E40")]
		get
		{
			return null;
		}
		[Token(Token = "0x60002F4")]
		[Address(RVA = "0x457A170", Offset = "0x457A170", VA = "0x457A170")]
		set
		{
		}
	}

	[Token(Token = "0x17000080")]
	public object this[DataColumn column, DataRowVersion version]
	{
		[Token(Token = "0x60002F5")]
		[Address(RVA = "0x457A810", Offset = "0x457A810", VA = "0x457A810")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000081")]
	public object[] ItemArray
	{
		[Token(Token = "0x60002F6")]
		[Address(RVA = "0x457A960", Offset = "0x457A960", VA = "0x457A960")]
		set
		{
		}
	}

	[Token(Token = "0x17000082")]
	public bool HasErrors
	{
		[Token(Token = "0x6000305")]
		[Address(RVA = "0x457B7F0", Offset = "0x457B7F0", VA = "0x457B7F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60002E3")]
	[Address(RVA = "0x45797F0", Offset = "0x45797F0", VA = "0x45797F0")]
	protected internal DataRow(DataRowBuilder builder)
	{
	}

	[Token(Token = "0x60002EB")]
	[Address(RVA = "0x4579B70", Offset = "0x4579B70", VA = "0x4579B70")]
	private void RowErrorChanged()
	{
	}

	[Token(Token = "0x60002F0")]
	[Address(RVA = "0x4579EC0", Offset = "0x4579EC0", VA = "0x4579EC0")]
	internal void CheckForLoops(DataRelation rel)
	{
	}

	[Token(Token = "0x60002F1")]
	[Address(RVA = "0x4579FB0", Offset = "0x4579FB0", VA = "0x4579FB0")]
	internal int GetNestedParentCount()
	{
		return default(int);
	}

	[Token(Token = "0x60002F7")]
	[Address(RVA = "0x457AE00", Offset = "0x457AE00", VA = "0x457AE00")]
	public void AcceptChanges()
	{
	}

	[Token(Token = "0x60002F8")]
	[Address(RVA = "0x457B2A0", Offset = "0x457B2A0", VA = "0x457B2A0")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public void BeginEdit()
	{
	}

	[Token(Token = "0x60002F9")]
	[Address(RVA = "0x457A5D0", Offset = "0x457A5D0", VA = "0x457A5D0")]
	private bool BeginEditInternal()
	{
		return default(bool);
	}

	[Token(Token = "0x60002FA")]
	[Address(RVA = "0x457A6B0", Offset = "0x457A6B0", VA = "0x457A6B0")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public void CancelEdit()
	{
	}

	[Token(Token = "0x60002FB")]
	[Address(RVA = "0x457A500", Offset = "0x457A500", VA = "0x457A500")]
	private void CheckColumn(DataColumn column)
	{
	}

	[Token(Token = "0x60002FC")]
	[Address(RVA = "0x457B2B0", Offset = "0x457B2B0", VA = "0x457B2B0")]
	internal void CheckInTable()
	{
	}

	[Token(Token = "0x60002FD")]
	[Address(RVA = "0x457B2E0", Offset = "0x457B2E0", VA = "0x457B2E0")]
	public void Delete()
	{
	}

	[Token(Token = "0x60002FE")]
	[Address(RVA = "0x457A710", Offset = "0x457A710", VA = "0x457A710")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public void EndEdit()
	{
	}

	[Token(Token = "0x60002FF")]
	[Address(RVA = "0x457B330", Offset = "0x457B330", VA = "0x457B330")]
	public void SetColumnError(int columnIndex, string error)
	{
	}

	[Token(Token = "0x6000300")]
	[Address(RVA = "0x457B390", Offset = "0x457B390", VA = "0x457B390")]
	public void SetColumnError(DataColumn column, string error)
	{
	}

	[Token(Token = "0x6000301")]
	[Address(RVA = "0x457B6E0", Offset = "0x457B6E0", VA = "0x457B6E0")]
	public string GetColumnError(string columnName)
	{
		return null;
	}

	[Token(Token = "0x6000302")]
	[Address(RVA = "0x457B650", Offset = "0x457B650", VA = "0x457B650")]
	public string GetColumnError(DataColumn column)
	{
		return null;
	}

	[Token(Token = "0x6000303")]
	[Address(RVA = "0x457B750", Offset = "0x457B750", VA = "0x457B750")]
	public void ClearErrors()
	{
	}

	[Token(Token = "0x6000304")]
	[Address(RVA = "0x457B7A0", Offset = "0x457B7A0", VA = "0x457B7A0")]
	internal void ClearError(DataColumn column)
	{
	}

	[Token(Token = "0x6000306")]
	[Address(RVA = "0x457B810", Offset = "0x457B810", VA = "0x457B810")]
	public DataColumn[] GetColumnsInError()
	{
		return null;
	}

	[Token(Token = "0x6000307")]
	[Address(RVA = "0x457B8E0", Offset = "0x457B8E0", VA = "0x457B8E0")]
	public DataRow[] GetChildRows(DataRelation relation)
	{
		return null;
	}

	[Token(Token = "0x6000308")]
	[Address(RVA = "0x457B8F0", Offset = "0x457B8F0", VA = "0x457B8F0")]
	public DataRow[] GetChildRows(DataRelation relation, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x6000309")]
	[Address(RVA = "0x457A100", Offset = "0x457A100", VA = "0x457A100")]
	internal DataColumn GetDataColumn(string columnName)
	{
		return null;
	}

	[Token(Token = "0x600030A")]
	[Address(RVA = "0x4579FA0", Offset = "0x4579FA0", VA = "0x4579FA0")]
	public DataRow GetParentRow(DataRelation relation)
	{
		return null;
	}

	[Token(Token = "0x600030B")]
	[Address(RVA = "0x457BA10", Offset = "0x457BA10", VA = "0x457BA10")]
	public DataRow GetParentRow(DataRelation relation, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x600030C")]
	[Address(RVA = "0x457BB20", Offset = "0x457BB20", VA = "0x457BB20")]
	internal DataRow GetNestedParentRow(DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x600030D")]
	[Address(RVA = "0x457BBF0", Offset = "0x457BBF0", VA = "0x457BBF0")]
	public DataRow[] GetParentRows(DataRelation relation)
	{
		return null;
	}

	[Token(Token = "0x600030E")]
	[Address(RVA = "0x457BC00", Offset = "0x457BC00", VA = "0x457BC00")]
	public DataRow[] GetParentRows(DataRelation relation, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x600030F")]
	[Address(RVA = "0x457BD20", Offset = "0x457BD20", VA = "0x457BD20")]
	internal object[] GetColumnValues(DataColumn[] columns)
	{
		return null;
	}

	[Token(Token = "0x6000310")]
	[Address(RVA = "0x457BDA0", Offset = "0x457BDA0", VA = "0x457BDA0")]
	internal object[] GetColumnValues(DataColumn[] columns, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x6000311")]
	[Address(RVA = "0x457BE10", Offset = "0x457BE10", VA = "0x457BE10")]
	internal object[] GetKeyValues(DataKey key)
	{
		return null;
	}

	[Token(Token = "0x6000312")]
	[Address(RVA = "0x457BDF0", Offset = "0x457BDF0", VA = "0x457BDF0")]
	internal object[] GetKeyValues(DataKey key, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x6000313")]
	[Address(RVA = "0x457BE70", Offset = "0x457BE70", VA = "0x457BE70")]
	internal int GetCurrentRecordNo()
	{
		return default(int);
	}

	[Token(Token = "0x6000314")]
	[Address(RVA = "0x457A580", Offset = "0x457A580", VA = "0x457A580")]
	internal int GetDefaultRecord()
	{
		return default(int);
	}

	[Token(Token = "0x6000315")]
	[Address(RVA = "0x457BEA0", Offset = "0x457BEA0", VA = "0x457BEA0")]
	internal int GetOriginalRecordNo()
	{
		return default(int);
	}

	[Token(Token = "0x6000316")]
	[Address(RVA = "0x457A680", Offset = "0x457A680", VA = "0x457A680")]
	private int GetProposedRecordNo()
	{
		return default(int);
	}

	[Token(Token = "0x6000317")]
	[Address(RVA = "0x457A850", Offset = "0x457A850", VA = "0x457A850")]
	internal int GetRecordFromVersion(DataRowVersion version)
	{
		return default(int);
	}

	[Token(Token = "0x6000318")]
	[Address(RVA = "0x457BED0", Offset = "0x457BED0", VA = "0x457BED0")]
	internal DataRowVersion GetDefaultRowVersion(DataViewRowState viewState)
	{
		return default(DataRowVersion);
	}

	[Token(Token = "0x6000319")]
	[Address(RVA = "0x457BF10", Offset = "0x457BF10", VA = "0x457BF10")]
	internal DataViewRowState GetRecordState(int record)
	{
		return default(DataViewRowState);
	}

	[Token(Token = "0x600031A")]
	[Address(RVA = "0x457BF50", Offset = "0x457BF50", VA = "0x457BF50")]
	internal bool HasKeyChanged(DataKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x600031B")]
	[Address(RVA = "0x457BF80", Offset = "0x457BF80", VA = "0x457BF80")]
	internal bool HasKeyChanged(DataKey key, DataRowVersion version1, DataRowVersion version2)
	{
		return default(bool);
	}

	[Token(Token = "0x600031C")]
	[Address(RVA = "0x457C080", Offset = "0x457C080", VA = "0x457C080")]
	public bool HasVersion(DataRowVersion version)
	{
		return default(bool);
	}

	[Token(Token = "0x600031D")]
	[Address(RVA = "0x457C100", Offset = "0x457C100", VA = "0x457C100")]
	internal bool HaveValuesChanged(DataColumn[] columns)
	{
		return default(bool);
	}

	[Token(Token = "0x600031E")]
	[Address(RVA = "0x457C1B0", Offset = "0x457C1B0", VA = "0x457C1B0")]
	internal bool HaveValuesChanged(DataColumn[] columns, DataRowVersion version1, DataRowVersion version2)
	{
		return default(bool);
	}

	[Token(Token = "0x600031F")]
	[Address(RVA = "0x457C250", Offset = "0x457C250", VA = "0x457C250")]
	public void RejectChanges()
	{
	}

	[Token(Token = "0x6000320")]
	[Address(RVA = "0x4579BF0", Offset = "0x4579BF0", VA = "0x4579BF0")]
	internal void ResetLastChangedColumn()
	{
	}

	[Token(Token = "0x6000321")]
	[Address(RVA = "0x457CB80", Offset = "0x457CB80", VA = "0x457CB80")]
	internal void SetKeyValues(DataKey key, object[] keyValues)
	{
	}

	[Token(Token = "0x6000322")]
	[Address(RVA = "0x457CCB0", Offset = "0x457CCB0", VA = "0x457CCB0")]
	internal void SetNestedParentRow(DataRow parentRow, bool setNonNested)
	{
	}

	[Token(Token = "0x6000323")]
	[Address(RVA = "0x457D1A0", Offset = "0x457D1A0", VA = "0x457D1A0")]
	internal void SetParentRowToDBNull()
	{
	}

	[Token(Token = "0x6000324")]
	[Address(RVA = "0x457D4F0", Offset = "0x457D4F0", VA = "0x457D4F0")]
	internal void SetParentRowToDBNull(DataRelation relation)
	{
	}

	[Token(Token = "0x6000325")]
	[Address(RVA = "0x457D680", Offset = "0x457D680", VA = "0x457D680")]
	internal int CopyValuesIntoStore(ArrayList storeList, ArrayList nullbitList, int storeIndex)
	{
		return default(int);
	}
}
