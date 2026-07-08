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
		[Address(RVA = "0x423C140", Offset = "0x423C140", VA = "0x423C140")]
		get
		{
			return null;
		}
		[Token(Token = "0x60002E5")]
		[Address(RVA = "0x423C150", Offset = "0x423C150", VA = "0x423C150")]
		set
		{
		}
	}

	[Token(Token = "0x17000078")]
	internal bool HasPropertyChanged
	{
		[Token(Token = "0x60002E6")]
		[Address(RVA = "0x423C170", Offset = "0x423C170", VA = "0x423C170")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000079")]
	internal int RBTreeNodeId
	{
		[Token(Token = "0x60002E7")]
		[Address(RVA = "0x423C180", Offset = "0x423C180", VA = "0x423C180")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60002E8")]
		[Address(RVA = "0x423C190", Offset = "0x423C190", VA = "0x423C190")]
		set
		{
		}
	}

	[Token(Token = "0x1700007A")]
	public string RowError
	{
		[Token(Token = "0x60002E9")]
		[Address(RVA = "0x423C250", Offset = "0x423C250", VA = "0x423C250")]
		get
		{
			return null;
		}
		[Token(Token = "0x60002EA")]
		[Address(RVA = "0x423C280", Offset = "0x423C280", VA = "0x423C280")]
		set
		{
		}
	}

	[Token(Token = "0x1700007B")]
	internal long rowID
	{
		[Token(Token = "0x60002EC")]
		[Address(RVA = "0x423C450", Offset = "0x423C450", VA = "0x423C450")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x60002ED")]
		[Address(RVA = "0x423C460", Offset = "0x423C460", VA = "0x423C460")]
		set
		{
		}
	}

	[Token(Token = "0x1700007C")]
	public DataRowState RowState
	{
		[Token(Token = "0x60002EE")]
		[Address(RVA = "0x423C4B0", Offset = "0x423C4B0", VA = "0x423C4B0")]
		get
		{
			return default(DataRowState);
		}
	}

	[Token(Token = "0x1700007D")]
	public DataTable Table
	{
		[Token(Token = "0x60002EF")]
		[Address(RVA = "0x423C750", Offset = "0x423C750", VA = "0x423C750")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700007E")]
	public string this[string columnName]
	{
		[Token(Token = "0x60002F2")]
		[Address(RVA = "0x423C920", Offset = "0x423C920", VA = "0x423C920")]
		set
		{
		}
	}

	[Token(Token = "0x1700007F")]
	public object this[DataColumn column]
	{
		[Token(Token = "0x60002F3")]
		[Address(RVA = "0x423C6E0", Offset = "0x423C6E0", VA = "0x423C6E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60002F4")]
		[Address(RVA = "0x423CA10", Offset = "0x423CA10", VA = "0x423CA10")]
		set
		{
		}
	}

	[Token(Token = "0x17000080")]
	public object this[DataColumn column, DataRowVersion version]
	{
		[Token(Token = "0x60002F5")]
		[Address(RVA = "0x423D0B0", Offset = "0x423D0B0", VA = "0x423D0B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000081")]
	public object[] ItemArray
	{
		[Token(Token = "0x60002F6")]
		[Address(RVA = "0x423D200", Offset = "0x423D200", VA = "0x423D200")]
		set
		{
		}
	}

	[Token(Token = "0x17000082")]
	public bool HasErrors
	{
		[Token(Token = "0x6000305")]
		[Address(RVA = "0x423E090", Offset = "0x423E090", VA = "0x423E090")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60002E3")]
	[Address(RVA = "0x423C090", Offset = "0x423C090", VA = "0x423C090")]
	protected internal DataRow(DataRowBuilder builder)
	{
	}

	[Token(Token = "0x60002EB")]
	[Address(RVA = "0x423C410", Offset = "0x423C410", VA = "0x423C410")]
	private void RowErrorChanged()
	{
	}

	[Token(Token = "0x60002F0")]
	[Address(RVA = "0x423C760", Offset = "0x423C760", VA = "0x423C760")]
	internal void CheckForLoops(DataRelation rel)
	{
	}

	[Token(Token = "0x60002F1")]
	[Address(RVA = "0x423C850", Offset = "0x423C850", VA = "0x423C850")]
	internal int GetNestedParentCount()
	{
		return default(int);
	}

	[Token(Token = "0x60002F7")]
	[Address(RVA = "0x423D6A0", Offset = "0x423D6A0", VA = "0x423D6A0")]
	public void AcceptChanges()
	{
	}

	[Token(Token = "0x60002F8")]
	[Address(RVA = "0x423DB40", Offset = "0x423DB40", VA = "0x423DB40")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public void BeginEdit()
	{
	}

	[Token(Token = "0x60002F9")]
	[Address(RVA = "0x423CE70", Offset = "0x423CE70", VA = "0x423CE70")]
	private bool BeginEditInternal()
	{
		return default(bool);
	}

	[Token(Token = "0x60002FA")]
	[Address(RVA = "0x423CF50", Offset = "0x423CF50", VA = "0x423CF50")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public void CancelEdit()
	{
	}

	[Token(Token = "0x60002FB")]
	[Address(RVA = "0x423CDA0", Offset = "0x423CDA0", VA = "0x423CDA0")]
	private void CheckColumn(DataColumn column)
	{
	}

	[Token(Token = "0x60002FC")]
	[Address(RVA = "0x423DB50", Offset = "0x423DB50", VA = "0x423DB50")]
	internal void CheckInTable()
	{
	}

	[Token(Token = "0x60002FD")]
	[Address(RVA = "0x423DB80", Offset = "0x423DB80", VA = "0x423DB80")]
	public void Delete()
	{
	}

	[Token(Token = "0x60002FE")]
	[Address(RVA = "0x423CFB0", Offset = "0x423CFB0", VA = "0x423CFB0")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public void EndEdit()
	{
	}

	[Token(Token = "0x60002FF")]
	[Address(RVA = "0x423DBD0", Offset = "0x423DBD0", VA = "0x423DBD0")]
	public void SetColumnError(int columnIndex, string error)
	{
	}

	[Token(Token = "0x6000300")]
	[Address(RVA = "0x423DC30", Offset = "0x423DC30", VA = "0x423DC30")]
	public void SetColumnError(DataColumn column, string error)
	{
	}

	[Token(Token = "0x6000301")]
	[Address(RVA = "0x423DF80", Offset = "0x423DF80", VA = "0x423DF80")]
	public string GetColumnError(string columnName)
	{
		return null;
	}

	[Token(Token = "0x6000302")]
	[Address(RVA = "0x423DEF0", Offset = "0x423DEF0", VA = "0x423DEF0")]
	public string GetColumnError(DataColumn column)
	{
		return null;
	}

	[Token(Token = "0x6000303")]
	[Address(RVA = "0x423DFF0", Offset = "0x423DFF0", VA = "0x423DFF0")]
	public void ClearErrors()
	{
	}

	[Token(Token = "0x6000304")]
	[Address(RVA = "0x423E040", Offset = "0x423E040", VA = "0x423E040")]
	internal void ClearError(DataColumn column)
	{
	}

	[Token(Token = "0x6000306")]
	[Address(RVA = "0x423E0B0", Offset = "0x423E0B0", VA = "0x423E0B0")]
	public DataColumn[] GetColumnsInError()
	{
		return null;
	}

	[Token(Token = "0x6000307")]
	[Address(RVA = "0x423E180", Offset = "0x423E180", VA = "0x423E180")]
	public DataRow[] GetChildRows(DataRelation relation)
	{
		return null;
	}

	[Token(Token = "0x6000308")]
	[Address(RVA = "0x423E190", Offset = "0x423E190", VA = "0x423E190")]
	public DataRow[] GetChildRows(DataRelation relation, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x6000309")]
	[Address(RVA = "0x423C9A0", Offset = "0x423C9A0", VA = "0x423C9A0")]
	internal DataColumn GetDataColumn(string columnName)
	{
		return null;
	}

	[Token(Token = "0x600030A")]
	[Address(RVA = "0x423C840", Offset = "0x423C840", VA = "0x423C840")]
	public DataRow GetParentRow(DataRelation relation)
	{
		return null;
	}

	[Token(Token = "0x600030B")]
	[Address(RVA = "0x423E2B0", Offset = "0x423E2B0", VA = "0x423E2B0")]
	public DataRow GetParentRow(DataRelation relation, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x600030C")]
	[Address(RVA = "0x423E3C0", Offset = "0x423E3C0", VA = "0x423E3C0")]
	internal DataRow GetNestedParentRow(DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x600030D")]
	[Address(RVA = "0x423E490", Offset = "0x423E490", VA = "0x423E490")]
	public DataRow[] GetParentRows(DataRelation relation)
	{
		return null;
	}

	[Token(Token = "0x600030E")]
	[Address(RVA = "0x423E4A0", Offset = "0x423E4A0", VA = "0x423E4A0")]
	public DataRow[] GetParentRows(DataRelation relation, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x600030F")]
	[Address(RVA = "0x423E5C0", Offset = "0x423E5C0", VA = "0x423E5C0")]
	internal object[] GetColumnValues(DataColumn[] columns)
	{
		return null;
	}

	[Token(Token = "0x6000310")]
	[Address(RVA = "0x423E640", Offset = "0x423E640", VA = "0x423E640")]
	internal object[] GetColumnValues(DataColumn[] columns, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x6000311")]
	[Address(RVA = "0x423E6B0", Offset = "0x423E6B0", VA = "0x423E6B0")]
	internal object[] GetKeyValues(DataKey key)
	{
		return null;
	}

	[Token(Token = "0x6000312")]
	[Address(RVA = "0x423E690", Offset = "0x423E690", VA = "0x423E690")]
	internal object[] GetKeyValues(DataKey key, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x6000313")]
	[Address(RVA = "0x423E710", Offset = "0x423E710", VA = "0x423E710")]
	internal int GetCurrentRecordNo()
	{
		return default(int);
	}

	[Token(Token = "0x6000314")]
	[Address(RVA = "0x423CE20", Offset = "0x423CE20", VA = "0x423CE20")]
	internal int GetDefaultRecord()
	{
		return default(int);
	}

	[Token(Token = "0x6000315")]
	[Address(RVA = "0x423E740", Offset = "0x423E740", VA = "0x423E740")]
	internal int GetOriginalRecordNo()
	{
		return default(int);
	}

	[Token(Token = "0x6000316")]
	[Address(RVA = "0x423CF20", Offset = "0x423CF20", VA = "0x423CF20")]
	private int GetProposedRecordNo()
	{
		return default(int);
	}

	[Token(Token = "0x6000317")]
	[Address(RVA = "0x423D0F0", Offset = "0x423D0F0", VA = "0x423D0F0")]
	internal int GetRecordFromVersion(DataRowVersion version)
	{
		return default(int);
	}

	[Token(Token = "0x6000318")]
	[Address(RVA = "0x423E770", Offset = "0x423E770", VA = "0x423E770")]
	internal DataRowVersion GetDefaultRowVersion(DataViewRowState viewState)
	{
		return default(DataRowVersion);
	}

	[Token(Token = "0x6000319")]
	[Address(RVA = "0x423E7B0", Offset = "0x423E7B0", VA = "0x423E7B0")]
	internal DataViewRowState GetRecordState(int record)
	{
		return default(DataViewRowState);
	}

	[Token(Token = "0x600031A")]
	[Address(RVA = "0x423E7F0", Offset = "0x423E7F0", VA = "0x423E7F0")]
	internal bool HasKeyChanged(DataKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x600031B")]
	[Address(RVA = "0x423E820", Offset = "0x423E820", VA = "0x423E820")]
	internal bool HasKeyChanged(DataKey key, DataRowVersion version1, DataRowVersion version2)
	{
		return default(bool);
	}

	[Token(Token = "0x600031C")]
	[Address(RVA = "0x423E920", Offset = "0x423E920", VA = "0x423E920")]
	public bool HasVersion(DataRowVersion version)
	{
		return default(bool);
	}

	[Token(Token = "0x600031D")]
	[Address(RVA = "0x423E9A0", Offset = "0x423E9A0", VA = "0x423E9A0")]
	internal bool HaveValuesChanged(DataColumn[] columns)
	{
		return default(bool);
	}

	[Token(Token = "0x600031E")]
	[Address(RVA = "0x423EA50", Offset = "0x423EA50", VA = "0x423EA50")]
	internal bool HaveValuesChanged(DataColumn[] columns, DataRowVersion version1, DataRowVersion version2)
	{
		return default(bool);
	}

	[Token(Token = "0x600031F")]
	[Address(RVA = "0x423EAF0", Offset = "0x423EAF0", VA = "0x423EAF0")]
	public void RejectChanges()
	{
	}

	[Token(Token = "0x6000320")]
	[Address(RVA = "0x423C490", Offset = "0x423C490", VA = "0x423C490")]
	internal void ResetLastChangedColumn()
	{
	}

	[Token(Token = "0x6000321")]
	[Address(RVA = "0x423F420", Offset = "0x423F420", VA = "0x423F420")]
	internal void SetKeyValues(DataKey key, object[] keyValues)
	{
	}

	[Token(Token = "0x6000322")]
	[Address(RVA = "0x423F550", Offset = "0x423F550", VA = "0x423F550")]
	internal void SetNestedParentRow(DataRow parentRow, bool setNonNested)
	{
	}

	[Token(Token = "0x6000323")]
	[Address(RVA = "0x423FA40", Offset = "0x423FA40", VA = "0x423FA40")]
	internal void SetParentRowToDBNull()
	{
	}

	[Token(Token = "0x6000324")]
	[Address(RVA = "0x423FD90", Offset = "0x423FD90", VA = "0x423FD90")]
	internal void SetParentRowToDBNull(DataRelation relation)
	{
	}

	[Token(Token = "0x6000325")]
	[Address(RVA = "0x423FF20", Offset = "0x423FF20", VA = "0x423FF20")]
	internal int CopyValuesIntoStore(ArrayList storeList, ArrayList nullbitList, int storeIndex)
	{
		return default(int);
	}
}
