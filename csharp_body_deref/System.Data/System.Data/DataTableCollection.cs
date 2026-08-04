// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.DataTableCollection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Collections.Generic;
using System.ComponentModel;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x200003E")]
[DefaultEvent("CollectionChanged")]
[ListBindable(false)]
public sealed class DataTableCollection : InternalDataCollectionBase
{
	[Token(Token = "0x4000127")]
	[FieldOffset(Offset = "0x10")]
	private readonly DataSet _dataSet;

	[Token(Token = "0x4000128")]
	[FieldOffset(Offset = "0x18")]
	private readonly ArrayList _list;

	[Token(Token = "0x4000129")]
	[FieldOffset(Offset = "0x20")]
	private int _defaultNameIndex;

	[Token(Token = "0x400012A")]
	[FieldOffset(Offset = "0x28")]
	private DataTable[] _delayedAddRangeTables;

	[Token(Token = "0x400012B")]
	[FieldOffset(Offset = "0x30")]
	private CollectionChangeEventHandler _onCollectionChangedDelegate;

	[Token(Token = "0x400012C")]
	[FieldOffset(Offset = "0x38")]
	private CollectionChangeEventHandler _onCollectionChangingDelegate;

	[Token(Token = "0x400012D")]
	[FieldOffset(Offset = "0x0")]
	private static int s_objectTypeCount;

	[Token(Token = "0x400012E")]
	[FieldOffset(Offset = "0x40")]
	private readonly int _objectID;

	[Token(Token = "0x170000C7")]
	protected override ArrayList List
	{
		[Token(Token = "0x60004A0")]
		[Address(RVA = "0x4590400", Offset = "0x4590400", VA = "0x4590400", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C8")]
	internal int ObjectID
	{
		[Token(Token = "0x60004A1")]
		[Address(RVA = "0x4590410", Offset = "0x4590410", VA = "0x4590410")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000C9")]
	public DataTable this[int index]
	{
		[Token(Token = "0x60004A2")]
		[Address(RVA = "0x457FBC0", Offset = "0x457FBC0", VA = "0x457FBC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000CA")]
	public DataTable this[string name]
	{
		[Token(Token = "0x60004A3")]
		[Address(RVA = "0x4579380", Offset = "0x4579380", VA = "0x4579380")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000CB")]
	public DataTable this[string name, string tableNamespace]
	{
		[Token(Token = "0x60004A4")]
		[Address(RVA = "0x4579460", Offset = "0x4579460", VA = "0x4579460")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x14000008")]
	public event CollectionChangeEventHandler CollectionChanged
	{
		[Token(Token = "0x60004A8")]
		[Address(RVA = "0x4590D30", Offset = "0x4590D30", VA = "0x4590D30")]
		add
		{
		}
		[Token(Token = "0x60004A9")]
		[Address(RVA = "0x4590E50", Offset = "0x4590E50", VA = "0x4590E50")]
		remove
		{
		}
	}

	[Token(Token = "0x600049F")]
	[Address(RVA = "0x457F7D0", Offset = "0x457F7D0", VA = "0x457F7D0")]
	internal DataTableCollection(DataSet dataSet)
	{
	}

	[Token(Token = "0x60004A5")]
	[Address(RVA = "0x45907D0", Offset = "0x45907D0", VA = "0x45907D0")]
	internal DataTable GetTable(string name, string ns)
	{
		return null;
	}

	[Token(Token = "0x60004A6")]
	[Address(RVA = "0x45908F0", Offset = "0x45908F0", VA = "0x45908F0")]
	internal DataTable GetTableSmart(string name, string ns)
	{
		return null;
	}

	[Token(Token = "0x60004A7")]
	[Address(RVA = "0x4581CE0", Offset = "0x4581CE0", VA = "0x4581CE0")]
	public void Add(DataTable table)
	{
	}

	[Token(Token = "0x60004AA")]
	[Address(RVA = "0x4590C40", Offset = "0x4590C40", VA = "0x4590C40")]
	private void ArrayAdd(DataTable table)
	{
	}

	[Token(Token = "0x60004AB")]
	[Address(RVA = "0x4590F70", Offset = "0x4590F70", VA = "0x4590F70")]
	internal string AssignName()
	{
		return null;
	}

	[Token(Token = "0x60004AC")]
	[Address(RVA = "0x4590AF0", Offset = "0x4590AF0", VA = "0x4590AF0")]
	private void BaseAdd(DataTable table)
	{
	}

	[Token(Token = "0x60004AD")]
	[Address(RVA = "0x4591310", Offset = "0x4591310", VA = "0x4591310")]
	private void BaseGroupSwitch(DataTable[] oldArray, int oldLength, DataTable[] newArray, int newLength)
	{
	}

	[Token(Token = "0x60004AE")]
	[Address(RVA = "0x45914B0", Offset = "0x45914B0", VA = "0x45914B0")]
	private void BaseRemove(DataTable table)
	{
	}

	[Token(Token = "0x60004AF")]
	[Address(RVA = "0x4591540", Offset = "0x4591540", VA = "0x4591540")]
	internal bool CanRemove(DataTable table, bool fThrowException)
	{
		return default(bool);
	}

	[Token(Token = "0x60004B0")]
	[Address(RVA = "0x458F310", Offset = "0x458F310", VA = "0x458F310")]
	public void Clear()
	{
	}

	[Token(Token = "0x60004B1")]
	[Address(RVA = "0x4591060", Offset = "0x4591060", VA = "0x4591060")]
	public bool Contains(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x60004B2")]
	[Address(RVA = "0x45858D0", Offset = "0x45858D0", VA = "0x45858D0")]
	internal bool Contains(string name, string tableNamespace, bool checkProperty, bool caseSensitive)
	{
		return default(bool);
	}

	[Token(Token = "0x60004B3")]
	[Address(RVA = "0x4591C30", Offset = "0x4591C30", VA = "0x4591C30")]
	internal bool Contains(string name, bool caseSensitive)
	{
		return default(bool);
	}

	[Token(Token = "0x60004B4")]
	[Address(RVA = "0x4583B40", Offset = "0x4583B40", VA = "0x4583B40")]
	public int IndexOf(DataTable table)
	{
		return default(int);
	}

	[Token(Token = "0x60004B5")]
	[Address(RVA = "0x4591D50", Offset = "0x4591D50", VA = "0x4591D50")]
	public int IndexOf(string tableName)
	{
		return default(int);
	}

	[Token(Token = "0x60004B6")]
	[Address(RVA = "0x4591D70", Offset = "0x4591D70", VA = "0x4591D70")]
	internal int IndexOf(string tableName, string tableNamespace, bool chekforNull)
	{
		return default(int);
	}

	[Token(Token = "0x60004B7")]
	[Address(RVA = "0x4591DD0", Offset = "0x4591DD0", VA = "0x4591DD0")]
	internal void ReplaceFromInference(List<DataTable> tableList)
	{
	}

	[Token(Token = "0x60004B8")]
	[Address(RVA = "0x4590420", Offset = "0x4590420", VA = "0x4590420")]
	internal int InternalIndexOf(string tableName)
	{
		return default(int);
	}

	[Token(Token = "0x60004B9")]
	[Address(RVA = "0x4590610", Offset = "0x4590610", VA = "0x4590610")]
	internal int InternalIndexOf(string tableName, string tableNamespace)
	{
		return default(int);
	}

	[Token(Token = "0x60004BA")]
	[Address(RVA = "0x45874B0", Offset = "0x45874B0", VA = "0x45874B0")]
	internal void FinishInitCollection()
	{
	}

	[Token(Token = "0x60004BB")]
	[Address(RVA = "0x4590FB0", Offset = "0x4590FB0", VA = "0x4590FB0")]
	private string MakeName(int index)
	{
		return null;
	}

	[Token(Token = "0x60004BC")]
	[Address(RVA = "0x4590C70", Offset = "0x4590C70", VA = "0x4590C70")]
	private void OnCollectionChanged(CollectionChangeEventArgs ccevent)
	{
	}

	[Token(Token = "0x60004BD")]
	[Address(RVA = "0x4590A30", Offset = "0x4590A30", VA = "0x4590A30")]
	private void OnCollectionChanging(CollectionChangeEventArgs ccevent)
	{
	}

	[Token(Token = "0x60004BE")]
	[Address(RVA = "0x4591070", Offset = "0x4591070", VA = "0x4591070")]
	internal void RegisterName(string name, string tbNamespace)
	{
	}

	[Token(Token = "0x60004BF")]
	[Address(RVA = "0x4591E20", Offset = "0x4591E20", VA = "0x4591E20")]
	public void Remove(DataTable table)
	{
	}

	[Token(Token = "0x60004C0")]
	[Address(RVA = "0x4591B10", Offset = "0x4591B10", VA = "0x4591B10")]
	internal void UnregisterName(string name)
	{
	}
}
