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
		[Address(RVA = "0x24F8FD0", Offset = "0x24F75D0", VA = "0x1824F8FD0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000453")]
		[Address(RVA = "0x24F9A30", Offset = "0x24F8030", VA = "0x1824F9A30")]
		set
		{
		}
	}

	[Token(Token = "0x170000B9")]
	internal bool HasPropertyChanged
	{
		[Token(Token = "0x6000454")]
		[Address(RVA = "0x24F8DD0", Offset = "0x24F73D0", VA = "0x1824F8DD0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000BA")]
	internal int RBTreeNodeId
	{
		[Token(Token = "0x6000455")]
		[Address(RVA = "0x1BD3CB0", Offset = "0x1BD22B0", VA = "0x181BD3CB0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000456")]
		[Address(RVA = "0x24F9A40", Offset = "0x24F8040", VA = "0x1824F9A40")]
		set
		{
		}
	}

	[Token(Token = "0x170000BB")]
	public string RowError
	{
		[Token(Token = "0x6000457")]
		[Address(RVA = "0x24F8FE0", Offset = "0x24F75E0", VA = "0x1824F8FE0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000458")]
		[Address(RVA = "0x24F9AF0", Offset = "0x24F80F0", VA = "0x1824F9AF0")]
		set
		{
		}
	}

	[Token(Token = "0x170000BC")]
	internal long rowID
	{
		[Token(Token = "0x600045A")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x600045B")]
		[Address(RVA = "0x24F9CC0", Offset = "0x24F82C0", VA = "0x1824F9CC0")]
		set
		{
		}
	}

	[Token(Token = "0x170000BD")]
	public DataRowState RowState
	{
		[Token(Token = "0x600045C")]
		[Address(RVA = "0x24F9010", Offset = "0x24F7610", VA = "0x1824F9010")]
		get
		{
			return default(DataRowState);
		}
	}

	[Token(Token = "0x170000BE")]
	public DataTable Table
	{
		[Token(Token = "0x600045D")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000BF")]
	public string this[string columnName]
	{
		[Token(Token = "0x6000460")]
		[Address(RVA = "0x24F95E0", Offset = "0x24F7BE0", VA = "0x1824F95E0")]
		set
		{
		}
	}

	[Token(Token = "0x170000C0")]
	public object this[DataColumn column]
	{
		[Token(Token = "0x6000461")]
		[Address(RVA = "0x24F8EC0", Offset = "0x24F74C0", VA = "0x1824F8EC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000462")]
		[Address(RVA = "0x24F9620", Offset = "0x24F7C20", VA = "0x1824F9620")]
		set
		{
		}
	}

	[Token(Token = "0x170000C1")]
	public object this[DataColumn column, DataRowVersion version]
	{
		[Token(Token = "0x6000463")]
		[Address(RVA = "0x24F8DE0", Offset = "0x24F73E0", VA = "0x1824F8DE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C2")]
	public object[] ItemArray
	{
		[Token(Token = "0x6000464")]
		[Address(RVA = "0x24F91B0", Offset = "0x24F77B0", VA = "0x1824F91B0")]
		set
		{
		}
	}

	[Token(Token = "0x170000C3")]
	public bool HasErrors
	{
		[Token(Token = "0x6000473")]
		[Address(RVA = "0x24F8D90", Offset = "0x24F7390", VA = "0x1824F8D90")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000451")]
	[Address(RVA = "0x24F8CE0", Offset = "0x24F72E0", VA = "0x1824F8CE0")]
	protected internal DataRow(DataRowBuilder builder)
	{
	}

	[Token(Token = "0x6000459")]
	[Address(RVA = "0x24F7F90", Offset = "0x24F6590", VA = "0x1824F7F90")]
	private void RowErrorChanged()
	{
	}

	[Token(Token = "0x600045E")]
	[Address(RVA = "0x24F5D50", Offset = "0x24F4350", VA = "0x1824F5D50")]
	internal void CheckForLoops(DataRelation rel)
	{
	}

	[Token(Token = "0x600045F")]
	[Address(RVA = "0x24F6D90", Offset = "0x24F5390", VA = "0x1824F6D90")]
	internal int GetNestedParentCount()
	{
		return default(int);
	}

	[Token(Token = "0x6000465")]
	[Address(RVA = "0x24F58A0", Offset = "0x24F3EA0", VA = "0x1824F58A0")]
	public void AcceptChanges()
	{
	}

	[Token(Token = "0x6000466")]
	[Address(RVA = "0x24F5C10", Offset = "0x24F4210", VA = "0x1824F5C10")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public void BeginEdit()
	{
	}

	[Token(Token = "0x6000467")]
	[Address(RVA = "0x24F5B30", Offset = "0x24F4130", VA = "0x1824F5B30")]
	private bool BeginEditInternal()
	{
		return default(bool);
	}

	[Token(Token = "0x6000468")]
	[Address(RVA = "0x24F5C20", Offset = "0x24F4220", VA = "0x1824F5C20")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public void CancelEdit()
	{
	}

	[Token(Token = "0x6000469")]
	[Address(RVA = "0x24F5C90", Offset = "0x24F4290", VA = "0x1824F5C90")]
	private void CheckColumn(DataColumn column)
	{
	}

	[Token(Token = "0x600046A")]
	[Address(RVA = "0x24F5E40", Offset = "0x24F4440", VA = "0x1824F5E40")]
	internal void CheckInTable()
	{
	}

	[Token(Token = "0x600046B")]
	[Address(RVA = "0x24F63D0", Offset = "0x24F49D0", VA = "0x1824F63D0")]
	public void Delete()
	{
	}

	[Token(Token = "0x600046C")]
	[Address(RVA = "0x24F6440", Offset = "0x24F4A40", VA = "0x1824F6440")]
	[EditorBrowsable(EditorBrowsableState.Advanced)]
	public void EndEdit()
	{
	}

	[Token(Token = "0x600046D")]
	[Address(RVA = "0x24F82A0", Offset = "0x24F68A0", VA = "0x1824F82A0")]
	public void SetColumnError(int columnIndex, string error)
	{
	}

	[Token(Token = "0x600046E")]
	[Address(RVA = "0x24F7FE0", Offset = "0x24F65E0", VA = "0x1824F7FE0")]
	public void SetColumnError(DataColumn column, string error)
	{
	}

	[Token(Token = "0x600046F")]
	[Address(RVA = "0x24F67C0", Offset = "0x24F4DC0", VA = "0x1824F67C0")]
	public string GetColumnError(string columnName)
	{
		return null;
	}

	[Token(Token = "0x6000470")]
	[Address(RVA = "0x24F67F0", Offset = "0x24F4DF0", VA = "0x1824F67F0")]
	public string GetColumnError(DataColumn column)
	{
		return null;
	}

	[Token(Token = "0x6000471")]
	[Address(RVA = "0x24F5F70", Offset = "0x24F4570", VA = "0x1824F5F70")]
	public void ClearErrors()
	{
	}

	[Token(Token = "0x6000472")]
	[Address(RVA = "0x24F5E80", Offset = "0x24F4480", VA = "0x1824F5E80")]
	internal void ClearError(DataColumn column)
	{
	}

	[Token(Token = "0x6000474")]
	[Address(RVA = "0x24F6A60", Offset = "0x24F5060", VA = "0x1824F6A60")]
	public DataColumn[] GetColumnsInError()
	{
		return null;
	}

	[Token(Token = "0x6000475")]
	[Address(RVA = "0x24F6520", Offset = "0x24F4B20", VA = "0x1824F6520")]
	public DataRow[] GetChildRows(DataRelation relation)
	{
		return null;
	}

	[Token(Token = "0x6000476")]
	[Address(RVA = "0x24F6530", Offset = "0x24F4B30", VA = "0x1824F6530")]
	public DataRow[] GetChildRows(DataRelation relation, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x6000477")]
	[Address(RVA = "0x24F6BD0", Offset = "0x24F51D0", VA = "0x1824F6BD0")]
	internal DataColumn GetDataColumn(string columnName)
	{
		return null;
	}

	[Token(Token = "0x6000478")]
	[Address(RVA = "0x24F7250", Offset = "0x24F5850", VA = "0x1824F7250")]
	public DataRow GetParentRow(DataRelation relation)
	{
		return null;
	}

	[Token(Token = "0x6000479")]
	[Address(RVA = "0x24F6F70", Offset = "0x24F5570", VA = "0x1824F6F70")]
	public DataRow GetParentRow(DataRelation relation, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x600047A")]
	[Address(RVA = "0x24F6E60", Offset = "0x24F5460", VA = "0x1824F6E60")]
	internal DataRow GetNestedParentRow(DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x600047B")]
	[Address(RVA = "0x24F74F0", Offset = "0x24F5AF0", VA = "0x1824F74F0")]
	public DataRow[] GetParentRows(DataRelation relation)
	{
		return null;
	}

	[Token(Token = "0x600047C")]
	[Address(RVA = "0x24F7260", Offset = "0x24F5860", VA = "0x1824F7260")]
	public DataRow[] GetParentRows(DataRelation relation, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x600047D")]
	[Address(RVA = "0x24F6A10", Offset = "0x24F5010", VA = "0x1824F6A10")]
	internal object[] GetColumnValues(DataColumn[] columns)
	{
		return null;
	}

	[Token(Token = "0x600047E")]
	[Address(RVA = "0x24F69B0", Offset = "0x24F4FB0", VA = "0x1824F69B0")]
	internal object[] GetColumnValues(DataColumn[] columns, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x600047F")]
	[Address(RVA = "0x24F6CE0", Offset = "0x24F52E0", VA = "0x1824F6CE0")]
	internal object[] GetKeyValues(DataKey key)
	{
		return null;
	}

	[Token(Token = "0x6000480")]
	[Address(RVA = "0x24F6D60", Offset = "0x24F5360", VA = "0x1824F6D60")]
	internal object[] GetKeyValues(DataKey key, DataRowVersion version)
	{
		return null;
	}

	[Token(Token = "0x6000481")]
	[Address(RVA = "0x24F6B90", Offset = "0x24F5190", VA = "0x1824F6B90")]
	internal int GetCurrentRecordNo()
	{
		return default(int);
	}

	[Token(Token = "0x6000482")]
	[Address(RVA = "0x24F6C50", Offset = "0x24F5250", VA = "0x1824F6C50")]
	internal int GetDefaultRecord()
	{
		return default(int);
	}

	[Token(Token = "0x6000483")]
	[Address(RVA = "0x24F6F30", Offset = "0x24F5530", VA = "0x1824F6F30")]
	internal int GetOriginalRecordNo()
	{
		return default(int);
	}

	[Token(Token = "0x6000484")]
	[Address(RVA = "0x24F7500", Offset = "0x24F5B00", VA = "0x1824F7500")]
	private int GetProposedRecordNo()
	{
		return default(int);
	}

	[Token(Token = "0x6000485")]
	[Address(RVA = "0x24F7540", Offset = "0x24F5B40", VA = "0x1824F7540")]
	internal int GetRecordFromVersion(DataRowVersion version)
	{
		return default(int);
	}

	[Token(Token = "0x6000486")]
	[Address(RVA = "0x24F6CB0", Offset = "0x24F52B0", VA = "0x1824F6CB0")]
	internal DataRowVersion GetDefaultRowVersion(DataViewRowState viewState)
	{
		return default(DataRowVersion);
	}

	[Token(Token = "0x6000487")]
	[Address(RVA = "0x24F7630", Offset = "0x24F5C30", VA = "0x1824F7630")]
	internal DataViewRowState GetRecordState(int record)
	{
		return default(DataViewRowState);
	}

	[Token(Token = "0x6000488")]
	[Address(RVA = "0x24F7680", Offset = "0x24F5C80", VA = "0x1824F7680")]
	internal bool HasKeyChanged(DataKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000489")]
	[Address(RVA = "0x24F76B0", Offset = "0x24F5CB0", VA = "0x1824F76B0")]
	internal bool HasKeyChanged(DataKey key, DataRowVersion version1, DataRowVersion version2)
	{
		return default(bool);
	}

	[Token(Token = "0x600048A")]
	[Address(RVA = "0x24F7740", Offset = "0x24F5D40", VA = "0x1824F7740")]
	public bool HasVersion(DataRowVersion version)
	{
		return default(bool);
	}

	[Token(Token = "0x600048B")]
	[Address(RVA = "0x24F77D0", Offset = "0x24F5DD0", VA = "0x1824F77D0")]
	internal bool HaveValuesChanged(DataColumn[] columns)
	{
		return default(bool);
	}

	[Token(Token = "0x600048C")]
	[Address(RVA = "0x24F7920", Offset = "0x24F5F20", VA = "0x1824F7920")]
	internal bool HaveValuesChanged(DataColumn[] columns, DataRowVersion version1, DataRowVersion version2)
	{
		return default(bool);
	}

	[Token(Token = "0x600048D")]
	[Address(RVA = "0x24F7AB0", Offset = "0x24F60B0", VA = "0x1824F7AB0")]
	public void RejectChanges()
	{
	}

	[Token(Token = "0x600048E")]
	[Address(RVA = "0x24F7F60", Offset = "0x24F6560", VA = "0x1824F7F60")]
	internal void ResetLastChangedColumn()
	{
	}

	[Token(Token = "0x600048F")]
	[Address(RVA = "0x24F8320", Offset = "0x24F6920", VA = "0x1824F8320")]
	internal void SetKeyValues(DataKey key, object[] keyValues)
	{
	}

	[Token(Token = "0x6000490")]
	[Address(RVA = "0x24F8420", Offset = "0x24F6A20", VA = "0x1824F8420")]
	internal void SetNestedParentRow(DataRow parentRow, bool setNonNested)
	{
	}

	[Token(Token = "0x6000491")]
	[Address(RVA = "0x24F8740", Offset = "0x24F6D40", VA = "0x1824F8740")]
	internal void SetParentRowToDBNull()
	{
	}

	[Token(Token = "0x6000492")]
	[Address(RVA = "0x24F8B20", Offset = "0x24F7120", VA = "0x1824F8B20")]
	internal void SetParentRowToDBNull(DataRelation relation)
	{
	}

	[Token(Token = "0x6000493")]
	[Address(RVA = "0x24F6040", Offset = "0x24F4640", VA = "0x1824F6040")]
	internal int CopyValuesIntoStore(ArrayList storeList, ArrayList nullbitList, int storeIndex)
	{
		return default(int);
	}
}
