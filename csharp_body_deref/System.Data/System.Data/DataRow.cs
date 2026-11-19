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

[Token(Token = "0x200003B")]
public class DataRow
{
	[Token(Token = "0x4000136")]
	[FieldOffset(Offset = "0x10")]
	private readonly DataTable _table;

	[Token(Token = "0x4000137")]
	[FieldOffset(Offset = "0x18")]
	private readonly DataColumnCollection _columns;

	[Token(Token = "0x4000138")]
	[FieldOffset(Offset = "0x20")]
	internal int _oldRecord;

	[Token(Token = "0x4000139")]
	[FieldOffset(Offset = "0x24")]
	internal int _newRecord;

	[Token(Token = "0x400013A")]
	[FieldOffset(Offset = "0x28")]
	internal int _tempRecord;

	[Token(Token = "0x400013B")]
	[FieldOffset(Offset = "0x30")]
	internal long _rowID;

	[Token(Token = "0x400013C")]
	[FieldOffset(Offset = "0x38")]
	internal DataRowAction _action;

	[Token(Token = "0x400013D")]
	[FieldOffset(Offset = "0x3C")]
	internal bool _inChangingEvent;

	[Token(Token = "0x400013E")]
	[FieldOffset(Offset = "0x3D")]
	internal bool _inDeletingEvent;

	[Token(Token = "0x400013F")]
	[FieldOffset(Offset = "0x3E")]
	internal bool _inCascade;

	[Token(Token = "0x4000140")]
	[FieldOffset(Offset = "0x40")]
	private DataColumn _lastChangedColumn;

	[Token(Token = "0x4000141")]
	[FieldOffset(Offset = "0x48")]
	private int _countColumnChange;

	[Token(Token = "0x4000142")]
	[FieldOffset(Offset = "0x50")]
	private DataError _error;

	[Token(Token = "0x4000143")]
	[FieldOffset(Offset = "0x58")]
	private int _rbTreeNodeId;

	[Token(Token = "0x4000144")]
	[FieldOffset(Offset = "0x0")]
	private static int s_objectTypeCount;

	[Token(Token = "0x4000145")]
	[FieldOffset(Offset = "0x5C")]
	internal readonly int _objectID;

	[Token(Token = "0x170000B8")]
	internal DataColumn LastChangedColumn
	{
		[Token(Token = "0x6000452")]
		[Address(RVA = "0x5E9C3D0", Offset = "0x5E9B3D0", VA = "0x5E9C3D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000453")]
		[Address(RVA = "0x5E9C3E0", Offset = "0x5E9B3E0", VA = "0x5E9C3E0")]
		set
		{
		}
	}

	[Token(Token = "0x170000B9")]
	internal bool HasPropertyChanged
	{
		[Token(Token = "0x6000454")]
		[Address(RVA = "0x5E9C3F0", Offset = "0x5E9B3F0", VA = "0x5E9C3F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000BA")]
	internal int RBTreeNodeId
	{
		[Token(Token = "0x6000455")]
		[Address(RVA = "0x5E9C400", Offset = "0x5E9B400", VA = "0x5E9C400")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000456")]
		[Address(RVA = "0x5E9C410", Offset = "0x5E9B410", VA = "0x5E9C410")]
		set
		{
		}
	}

	[Token(Token = "0x170000BB")]
	public string RowError
	{
		[Token(Token = "0x6000457")]
		[Address(RVA = "0x5E9C4D0", Offset = "0x5E9B4D0", VA = "0x5E9C4D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000458")]
		[Address(RVA = "0x5E9C500", Offset = "0x5E9B500", VA = "0x5E9C500")]
		set
		{
		}
	}

	[Token(Token = "0x170000BC")]
	internal long rowID
	{
		[Token(Token = "0x600045A")]
		[Address(RVA = "0x5E9C750", Offset = "0x5E9B750", VA = "0x5E9C750")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x600045B")]
		[Address(RVA = "0x5E9C760", Offset = "0x5E9B760", VA = "0x5E9C760")]
		set
		{
		}
	}

	[Token(Token = "0x170000BD")]
	public DataRowState RowState
	{
		[Token(Token = "0x600045C")]
		[Address(RVA = "0x5E9C7B0", Offset = "0x5E9B7B0", VA = "0x5E9C7B0")]
		get
		{
			return default(DataRowState);
		}
	}

	[Token(Token = "0x170000BE")]
	public DataTable Table
	{
		[Token(Token = "0x600045D")]
		[Address(RVA = "0x5E9CA30", Offset = "0x5E9BA30", VA = "0x5E9CA30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000BF")]
	public string this[string columnName]
	{
		[Token(Token = "0x6000460")]
		[Address(RVA = "0x5E9CB00", Offset = "0x5E9BB00", VA = "0x5E9CB00")]
		set
		{
		}
	}

	[Token(Token = "0x170000C0")]
	public object this[DataColumn column]
	{
		[Token(Token = "0x6000461")]
		[Address(RVA = "0x5E9C9C0", Offset = "0x5E9B9C0", VA = "0x5E9C9C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000462")]
		[Address(RVA = "0x5E9CBE0", Offset = "0x5E9BBE0", VA = "0x5E9CBE0")]
		set
		{
		}
	}

	[Token(Token = "0x170000C1")]
	public object this[DataColumn column, DataRowVersion version]
	{
		[Token(Token = "0x6000463")]
		[Address(RVA = "0x5E9D2C0", Offset = "0x5E9C2C0", VA = "0x5E9D2C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C2")]
	public object[] ItemArray
	{
		[Token(Token = "0x6000464")]
		[Address(RVA = "0x5E9D3D0", Offset = "0x5E9C3D0", VA = "0x5E9D3D0")]
		set
		{
		}
	}

	[Token(Token = "0x170000C3")]
	public bool HasErrors
	{
		[Token(Token = "0x6000473")]
		[Address(RVA = "0x5E9E1F0", Offset = "0x5E9D1F0", VA = "0x5E9E1F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000451")]
	[Address(RVA = "0x5E9C320", Offset = "0x5E9B320", VA = "0x5E9C320")]
	protected internal DataRow(DataRowBuilder builder)
	{
	}

	[Token(Token = "0x6000459")]
	[Address(RVA = "0x5E9C710", Offset = "0x5E9B710", VA = "0x5E9C710")]
	private void RowErrorChanged()
	{
	}

	[Token(Token = "0x600045E")]
	[Address(RVA = "0x5E980A0", Offset = "0x5E970A0", VA = "0x5E980A0")]
	internal void CheckForLoops(DataRelation rel)
	{
	}

	[Token(Token = "0x600045F")]
	[Address(RVA = "0x5E9CA40", Offset = "0x5E9BA40", VA = "0x5E9CA40")]
	internal int GetNestedParentCount()
	{
		return default(int);
	}

	[Token(Token = "0x6000465")]
	[Address(RVA = "0x5E9D890", Offset = "0x5E9C890", VA = "0x5E9D890")]
	public void AcceptChanges()
	{
	}

	[Token(Token = "0x6000466")]
	[Address(RVA = "0x5E9DC70", Offset = "0x5E9CC70", VA = "0x5E9DC70")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public void BeginEdit()
	{
	}

	[Token(Token = "0x6000467")]
	[Address(RVA = "0x5E9D090", Offset = "0x5E9C090", VA = "0x5E9D090")]
	private bool BeginEditInternal()
	{
		return default(bool);
	}

	[Token(Token = "0x6000468")]
	[Address(RVA = "0x5E9D170", Offset = "0x5E9C170", VA = "0x5E9D170")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public void CancelEdit()
	{
	}

	[Token(Token = "0x6000469")]
	[Address(RVA = "0x5E9CFC0", Offset = "0x5E9BFC0", VA = "0x5E9CFC0")]
	private void CheckColumn(DataColumn column)
	{
	}

	[Token(Token = "0x600046A")]
	[Address(RVA = "0x5E9DC80", Offset = "0x5E9CC80", VA = "0x5E9DC80")]
	internal void CheckInTable()
	{
	}

	[Token(Token = "0x600046B")]
	[Address(RVA = "0x5E9DCB0", Offset = "0x5E9CCB0", VA = "0x5E9DCB0")]
	public void Delete()
	{
	}

	[Token(Token = "0x600046C")]
	[Address(RVA = "0x5E9D1D0", Offset = "0x5E9C1D0", VA = "0x5E9D1D0")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public void EndEdit()
	{
	}

	[Token(Token = "0x600046D")]
	[Address(RVA = "0x5E9DD00", Offset = "0x5E9CD00", VA = "0x5E9DD00")]
	public void SetColumnError(int columnIndex, string error)
	{
	}

	[Token(Token = "0x600046E")]
	[Address(RVA = "0x5E9DD60", Offset = "0x5E9CD60", VA = "0x5E9DD60")]
	public void SetColumnError(DataColumn column, string error)
	{
	}

	[Token(Token = "0x600046F")]
	[Address(RVA = "0x5E9E0A0", Offset = "0x5E9D0A0", VA = "0x5E9E0A0")]
	public string GetColumnError(string columnName)
	{
		return null;
	}

	[Token(Token = "0x6000470")]
	[Address(RVA = "0x5E9DFA0", Offset = "0x5E9CFA0", VA = "0x5E9DFA0")]
	public string GetColumnError(DataColumn column)
	{
		return null;
	}

	[Token(Token = "0x6000471")]
	[Address(RVA = "0x5E9E110", Offset = "0x5E9D110", VA = "0x5E9E110")]
	public void ClearErrors()
	{
	}

	[Token(Token = "0x6000472")]
	[Address(RVA = "0x5E92A60", Offset = "0x5E91A60", VA = "0x5E92A60")]
	internal void ClearError(DataColumn column)
	{
	}

	[Token(Token = "0x6000474")]
	[Address(RVA = "0x5E9E220", Offset = "0x5E9D220", VA = "0x5E9E220")]
	public DataColumn[] GetColumnsInError()
	{
		return null;
	}

	[Token(Token = "0x6000475")]
	[Address(RVA = "0x5E9E2F0", Offset = "0x5E9D2F0", VA = "0x5E9E2F0")]
	public DataRow[] GetChildRows(DataRelation relation)
	{
		return null;
	}

	[Token(Token = "0x6000476")]
	[Address(RVA = "0x5E9E300", Offset = "0x5E9D300", VA = "0x5E9E300")]
	public DataRow[] GetChildRows(DataRelation relation, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x6000477")]
	[Address(RVA = "0x5E9CB70", Offset = "0x5E9BB70", VA = "0x5E9CB70")]
	internal DataColumn GetDataColumn(string columnName)
	{
		return null;
	}

	[Token(Token = "0x6000478")]
	[Address(RVA = "0x5E98180", Offset = "0x5E97180", VA = "0x5E98180")]
	public DataRow GetParentRow(DataRelation relation)
	{
		return null;
	}

	[Token(Token = "0x6000479")]
	[Address(RVA = "0x5E9E430", Offset = "0x5E9D430", VA = "0x5E9E430")]
	public DataRow GetParentRow(DataRelation relation, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x600047A")]
	[Address(RVA = "0x5E9E550", Offset = "0x5E9D550", VA = "0x5E9E550")]
	internal DataRow GetNestedParentRow(DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x600047B")]
	[Address(RVA = "0x5E9E600", Offset = "0x5E9D600", VA = "0x5E9E600")]
	public DataRow[] GetParentRows(DataRelation relation)
	{
		return null;
	}

	[Token(Token = "0x600047C")]
	[Address(RVA = "0x5E9E610", Offset = "0x5E9D610", VA = "0x5E9E610")]
	public DataRow[] GetParentRows(DataRelation relation, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x600047D")]
	[Address(RVA = "0x5E9E740", Offset = "0x5E9D740", VA = "0x5E9E740")]
	internal object[] GetColumnValues(DataColumn[] columns)
	{
		return null;
	}

	[Token(Token = "0x600047E")]
	[Address(RVA = "0x5E9E7C0", Offset = "0x5E9D7C0", VA = "0x5E9E7C0")]
	internal object[] GetColumnValues(DataColumn[] columns, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x600047F")]
	[Address(RVA = "0x5E9E810", Offset = "0x5E9D810", VA = "0x5E9E810")]
	internal object[] GetKeyValues(DataKey key)
	{
		return null;
	}

	[Token(Token = "0x6000480")]
	[Address(RVA = "0x5E95970", Offset = "0x5E94970", VA = "0x5E95970")]
	internal object[] GetKeyValues(DataKey key, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x6000481")]
	[Address(RVA = "0x5E9E870", Offset = "0x5E9D870", VA = "0x5E9E870")]
	internal int GetCurrentRecordNo()
	{
		return default(int);
	}

	[Token(Token = "0x6000482")]
	[Address(RVA = "0x5E9D040", Offset = "0x5E9C040", VA = "0x5E9D040")]
	internal int GetDefaultRecord()
	{
		return default(int);
	}

	[Token(Token = "0x6000483")]
	[Address(RVA = "0x5E9E8A0", Offset = "0x5E9D8A0", VA = "0x5E9E8A0")]
	internal int GetOriginalRecordNo()
	{
		return default(int);
	}

	[Token(Token = "0x6000484")]
	[Address(RVA = "0x5E9D140", Offset = "0x5E9C140", VA = "0x5E9D140")]
	private int GetProposedRecordNo()
	{
		return default(int);
	}

	[Token(Token = "0x6000485")]
	[Address(RVA = "0x5E9D300", Offset = "0x5E9C300", VA = "0x5E9D300")]
	internal int GetRecordFromVersion(DataRowVersion version)
	{
		return default(int);
	}

	[Token(Token = "0x6000486")]
	[Address(RVA = "0x5E9E8D0", Offset = "0x5E9D8D0", VA = "0x5E9E8D0")]
	internal DataRowVersion GetDefaultRowVersion(DataViewRowState viewState)
	{
		return default(DataRowVersion);
	}

	[Token(Token = "0x6000487")]
	[Address(RVA = "0x5E9E910", Offset = "0x5E9D910", VA = "0x5E9E910")]
	internal DataViewRowState GetRecordState(int record)
	{
		return default(DataViewRowState);
	}

	[Token(Token = "0x6000488")]
	[Address(RVA = "0x5E9E950", Offset = "0x5E9D950", VA = "0x5E9E950")]
	internal bool HasKeyChanged(DataKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000489")]
	[Address(RVA = "0x5E9E960", Offset = "0x5E9D960", VA = "0x5E9E960")]
	internal bool HasKeyChanged(DataKey key, DataRowVersion version1, DataRowVersion version2)
	{
		return default(bool);
	}

	[Token(Token = "0x600048A")]
	[Address(RVA = "0x5E95DA0", Offset = "0x5E94DA0", VA = "0x5E95DA0")]
	public bool HasVersion(DataRowVersion version)
	{
		return default(bool);
	}

	[Token(Token = "0x600048B")]
	[Address(RVA = "0x5E9EAD0", Offset = "0x5E9DAD0", VA = "0x5E9EAD0")]
	internal bool HaveValuesChanged(DataColumn[] columns)
	{
		return default(bool);
	}

	[Token(Token = "0x600048C")]
	[Address(RVA = "0x5E9EB60", Offset = "0x5E9DB60", VA = "0x5E9EB60")]
	internal bool HaveValuesChanged(DataColumn[] columns, DataRowVersion version1, DataRowVersion version2)
	{
		return default(bool);
	}

	[Token(Token = "0x600048D")]
	[Address(RVA = "0x5E9EC00", Offset = "0x5E9DC00", VA = "0x5E9EC00")]
	public void RejectChanges()
	{
	}

	[Token(Token = "0x600048E")]
	[Address(RVA = "0x5E9C790", Offset = "0x5E9B790", VA = "0x5E9C790")]
	internal void ResetLastChangedColumn()
	{
	}

	[Token(Token = "0x600048F")]
	[Address(RVA = "0x5E9F2D0", Offset = "0x5E9E2D0", VA = "0x5E9F2D0")]
	internal void SetKeyValues(DataKey key, object[] keyValues)
	{
	}

	[Token(Token = "0x6000490")]
	[Address(RVA = "0x5E9F3F0", Offset = "0x5E9E3F0", VA = "0x5E9F3F0")]
	internal void SetNestedParentRow(DataRow parentRow, bool setNonNested)
	{
	}

	[Token(Token = "0x6000491")]
	[Address(RVA = "0x5E9F850", Offset = "0x5E9E850", VA = "0x5E9F850")]
	internal void SetParentRowToDBNull()
	{
	}

	[Token(Token = "0x6000492")]
	[Address(RVA = "0x5E9FB50", Offset = "0x5E9EB50", VA = "0x5E9FB50")]
	internal void SetParentRowToDBNull(DataRelation relation)
	{
	}

	[Token(Token = "0x6000493")]
	[Address(RVA = "0x5E9FCF0", Offset = "0x5E9ECF0", VA = "0x5E9FCF0")]
	internal int CopyValuesIntoStore(ArrayList storeList, ArrayList nullbitList, int storeIndex)
	{
		return default(int);
	}
}
