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

[Token(Token = "0x200004B")]
[DefaultEvent("CollectionChanged")]
[ListBindable(false)]
public sealed class DataTableCollection : InternalDataCollectionBase
{
	[Token(Token = "0x400016F")]
	[FieldOffset(Offset = "0x10")]
	private readonly DataSet _dataSet;

	[Token(Token = "0x4000170")]
	[FieldOffset(Offset = "0x18")]
	private readonly ArrayList _list;

	[Token(Token = "0x4000171")]
	[FieldOffset(Offset = "0x20")]
	private int _defaultNameIndex;

	[Token(Token = "0x4000172")]
	[FieldOffset(Offset = "0x28")]
	private DataTable[] _delayedAddRangeTables;

	[Token(Token = "0x4000173")]
	[FieldOffset(Offset = "0x30")]
	private CollectionChangeEventHandler _onCollectionChangedDelegate;

	[Token(Token = "0x4000174")]
	[FieldOffset(Offset = "0x38")]
	private CollectionChangeEventHandler _onCollectionChangingDelegate;

	[Token(Token = "0x4000175")]
	[FieldOffset(Offset = "0x0")]
	private static int s_objectTypeCount;

	[Token(Token = "0x4000176")]
	[FieldOffset(Offset = "0x40")]
	private readonly int _objectID;

	[Token(Token = "0x170000CC")]
	protected override ArrayList List
	{
		[Token(Token = "0x60004D3")]
		[Address(RVA = "0x5EA18B0", Offset = "0x5EA08B0", VA = "0x5EA18B0", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000CD")]
	internal int ObjectID
	{
		[Token(Token = "0x60004D4")]
		[Address(RVA = "0x5EA18C0", Offset = "0x5EA08C0", VA = "0x5EA18C0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000CE")]
	public DataTable this[int index]
	{
		[Token(Token = "0x60004D5")]
		[Address(RVA = "0x5EA18D0", Offset = "0x5EA08D0", VA = "0x5EA18D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000CF")]
	public DataTable this[string name]
	{
		[Token(Token = "0x60004D6")]
		[Address(RVA = "0x5E8F000", Offset = "0x5E8E000", VA = "0x5E8F000")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D0")]
	public DataTable this[string name, string tableNamespace]
	{
		[Token(Token = "0x60004D7")]
		[Address(RVA = "0x5E8F0E0", Offset = "0x5E8E0E0", VA = "0x5E8F0E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x14000008")]
	public event CollectionChangeEventHandler CollectionChanged
	{
		[Token(Token = "0x60004DB")]
		[Address(RVA = "0x5EA26F0", Offset = "0x5EA16F0", VA = "0x5EA26F0")]
		add
		{
		}
		[Token(Token = "0x60004DC")]
		[Address(RVA = "0x5EA2810", Offset = "0x5EA1810", VA = "0x5EA2810")]
		remove
		{
		}
	}

	[Token(Token = "0x60004D2")]
	[Address(RVA = "0x5EA1750", Offset = "0x5EA0750", VA = "0x5EA1750")]
	internal DataTableCollection(DataSet dataSet)
	{
	}

	[Token(Token = "0x60004D8")]
	[Address(RVA = "0x5EA1EB0", Offset = "0x5EA0EB0", VA = "0x5EA1EB0")]
	internal DataTable GetTable(string name, string ns)
	{
		return null;
	}

	[Token(Token = "0x60004D9")]
	[Address(RVA = "0x5EA1FD0", Offset = "0x5EA0FD0", VA = "0x5EA1FD0")]
	internal DataTable GetTableSmart(string name, string ns)
	{
		return null;
	}

	[Token(Token = "0x60004DA")]
	[Address(RVA = "0x5EA2110", Offset = "0x5EA1110", VA = "0x5EA2110")]
	public void Add(DataTable table)
	{
	}

	[Token(Token = "0x60004DD")]
	[Address(RVA = "0x5EA2600", Offset = "0x5EA1600", VA = "0x5EA2600")]
	private void ArrayAdd(DataTable table)
	{
	}

	[Token(Token = "0x60004DE")]
	[Address(RVA = "0x5EA2930", Offset = "0x5EA1930", VA = "0x5EA2930")]
	internal string AssignName()
	{
		return null;
	}

	[Token(Token = "0x60004DF")]
	[Address(RVA = "0x5EA2460", Offset = "0x5EA1460", VA = "0x5EA2460")]
	private void BaseAdd(DataTable table)
	{
	}

	[Token(Token = "0x60004E0")]
	[Address(RVA = "0x5EA2CB0", Offset = "0x5EA1CB0", VA = "0x5EA2CB0")]
	private void BaseGroupSwitch(DataTable[] oldArray, int oldLength, DataTable[] newArray, int newLength)
	{
	}

	[Token(Token = "0x60004E1")]
	[Address(RVA = "0x5EA2E70", Offset = "0x5EA1E70", VA = "0x5EA2E70")]
	private void BaseRemove(DataTable table)
	{
	}

	[Token(Token = "0x60004E2")]
	[Address(RVA = "0x5EA2EF0", Offset = "0x5EA1EF0", VA = "0x5EA2EF0")]
	internal bool CanRemove(DataTable table, bool fThrowException)
	{
		return default(bool);
	}

	[Token(Token = "0x60004E3")]
	[Address(RVA = "0x5EA3540", Offset = "0x5EA2540", VA = "0x5EA3540")]
	public void Clear()
	{
	}

	[Token(Token = "0x60004E4")]
	[Address(RVA = "0x5EA2A20", Offset = "0x5EA1A20", VA = "0x5EA2A20")]
	public bool Contains(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x60004E5")]
	[Address(RVA = "0x5EA3860", Offset = "0x5EA2860", VA = "0x5EA3860")]
	internal bool Contains(string name, string tableNamespace, bool checkProperty, bool caseSensitive)
	{
		return default(bool);
	}

	[Token(Token = "0x60004E6")]
	[Address(RVA = "0x5EA3A80", Offset = "0x5EA2A80", VA = "0x5EA3A80")]
	internal bool Contains(string name, bool caseSensitive)
	{
		return default(bool);
	}

	[Token(Token = "0x60004E7")]
	[Address(RVA = "0x5EA3BA0", Offset = "0x5EA2BA0", VA = "0x5EA3BA0")]
	public int IndexOf(DataTable table)
	{
		return default(int);
	}

	[Token(Token = "0x60004E8")]
	[Address(RVA = "0x5EA3C80", Offset = "0x5EA2C80", VA = "0x5EA3C80")]
	public int IndexOf(string tableName)
	{
		return default(int);
	}

	[Token(Token = "0x60004E9")]
	[Address(RVA = "0x5EA3CA0", Offset = "0x5EA2CA0", VA = "0x5EA3CA0")]
	internal int IndexOf(string tableName, string tableNamespace, bool chekforNull)
	{
		return default(int);
	}

	[Token(Token = "0x60004EA")]
	[Address(RVA = "0x5EA3D00", Offset = "0x5EA2D00", VA = "0x5EA3D00")]
	internal void ReplaceFromInference(List<DataTable> tableList)
	{
	}

	[Token(Token = "0x60004EB")]
	[Address(RVA = "0x5EA19F0", Offset = "0x5EA09F0", VA = "0x5EA19F0")]
	internal int InternalIndexOf(string tableName)
	{
		return default(int);
	}

	[Token(Token = "0x60004EC")]
	[Address(RVA = "0x5EA1CB0", Offset = "0x5EA0CB0", VA = "0x5EA1CB0")]
	internal int InternalIndexOf(string tableName, string tableNamespace)
	{
		return default(int);
	}

	[Token(Token = "0x60004ED")]
	[Address(RVA = "0x5EA3D50", Offset = "0x5EA2D50", VA = "0x5EA3D50")]
	internal void FinishInitCollection()
	{
	}

	[Token(Token = "0x60004EE")]
	[Address(RVA = "0x5EA2970", Offset = "0x5EA1970", VA = "0x5EA2970")]
	private string MakeName(int index)
	{
		return null;
	}

	[Token(Token = "0x60004EF")]
	[Address(RVA = "0x5EA2630", Offset = "0x5EA1630", VA = "0x5EA2630")]
	private void OnCollectionChanged(CollectionChangeEventArgs ccevent)
	{
	}

	[Token(Token = "0x60004F0")]
	[Address(RVA = "0x5EA23A0", Offset = "0x5EA13A0", VA = "0x5EA23A0")]
	private void OnCollectionChanging(CollectionChangeEventArgs ccevent)
	{
	}

	[Token(Token = "0x60004F1")]
	[Address(RVA = "0x5EA2A30", Offset = "0x5EA1A30", VA = "0x5EA2A30")]
	internal void RegisterName(string name, string tbNamespace)
	{
	}

	[Token(Token = "0x60004F2")]
	[Address(RVA = "0x5EA3DC0", Offset = "0x5EA2DC0", VA = "0x5EA3DC0")]
	public void Remove(DataTable table)
	{
	}

	[Token(Token = "0x60004F3")]
	[Address(RVA = "0x5EA3430", Offset = "0x5EA2430", VA = "0x5EA3430")]
	internal void UnregisterName(string name)
	{
	}
}
