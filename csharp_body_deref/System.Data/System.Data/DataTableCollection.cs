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
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000CD")]
	internal int ObjectID
	{
		[Token(Token = "0x60004D4")]
		[Address(RVA = "0x58A8B0", Offset = "0x588EB0", VA = "0x18058A8B0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000CE")]
	public DataTable this[int index]
	{
		[Token(Token = "0x60004D5")]
		[Address(RVA = "0x24FD920", Offset = "0x24FBF20", VA = "0x1824FD920")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000CF")]
	public DataTable this[string name]
	{
		[Token(Token = "0x60004D6")]
		[Address(RVA = "0x24FD810", Offset = "0x24FBE10", VA = "0x1824FD810")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D0")]
	public DataTable this[string name, string tableNamespace]
	{
		[Token(Token = "0x60004D7")]
		[Address(RVA = "0x24FD9F0", Offset = "0x24FBFF0", VA = "0x1824FD9F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x14000008")]
	public event CollectionChangeEventHandler CollectionChanged
	{
		[Token(Token = "0x60004DB")]
		[Address(RVA = "0x24FD700", Offset = "0x24FBD00", VA = "0x1824FD700")]
		add
		{
		}
		[Token(Token = "0x60004DC")]
		[Address(RVA = "0x24FDB20", Offset = "0x24FC120", VA = "0x1824FDB20")]
		remove
		{
		}
	}

	[Token(Token = "0x60004D2")]
	[Address(RVA = "0x24FD5A0", Offset = "0x24FBBA0", VA = "0x1824FD5A0")]
	internal DataTableCollection(DataSet dataSet)
	{
	}

	[Token(Token = "0x60004D8")]
	[Address(RVA = "0x24FC670", Offset = "0x24FAC70", VA = "0x1824FC670")]
	internal DataTable GetTable(string name, string ns)
	{
		return null;
	}

	[Token(Token = "0x60004D9")]
	[Address(RVA = "0x24FC520", Offset = "0x24FAB20", VA = "0x1824FC520")]
	internal DataTable GetTableSmart(string name, string ns)
	{
		return null;
	}

	[Token(Token = "0x60004DA")]
	[Address(RVA = "0x24FAF00", Offset = "0x24F9500", VA = "0x1824FAF00")]
	public void Add(DataTable table)
	{
	}

	[Token(Token = "0x60004DD")]
	[Address(RVA = "0x24FB160", Offset = "0x24F9760", VA = "0x1824FB160")]
	private void ArrayAdd(DataTable table)
	{
	}

	[Token(Token = "0x60004DE")]
	[Address(RVA = "0x24FB190", Offset = "0x24F9790", VA = "0x1824FB190")]
	internal string AssignName()
	{
		return null;
	}

	[Token(Token = "0x60004DF")]
	[Address(RVA = "0x24FB260", Offset = "0x24F9860", VA = "0x1824FB260")]
	private void BaseAdd(DataTable table)
	{
	}

	[Token(Token = "0x60004E0")]
	[Address(RVA = "0x24FB4B0", Offset = "0x24F9AB0", VA = "0x1824FB4B0")]
	private void BaseGroupSwitch(DataTable[] oldArray, int oldLength, DataTable[] newArray, int newLength)
	{
	}

	[Token(Token = "0x60004E1")]
	[Address(RVA = "0x24FB610", Offset = "0x24F9C10", VA = "0x1824FB610")]
	private void BaseRemove(DataTable table)
	{
	}

	[Token(Token = "0x60004E2")]
	[Address(RVA = "0x24FB790", Offset = "0x24F9D90", VA = "0x1824FB790")]
	internal bool CanRemove(DataTable table, bool fThrowException)
	{
		return default(bool);
	}

	[Token(Token = "0x60004E3")]
	[Address(RVA = "0x24FBE90", Offset = "0x24FA490", VA = "0x1824FBE90")]
	public void Clear()
	{
	}

	[Token(Token = "0x60004E4")]
	[Address(RVA = "0x24FC2E0", Offset = "0x24FA8E0", VA = "0x1824FC2E0")]
	public bool Contains(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x60004E5")]
	[Address(RVA = "0x24FC300", Offset = "0x24FA900", VA = "0x1824FC300")]
	internal bool Contains(string name, string tableNamespace, bool checkProperty, bool caseSensitive)
	{
		return default(bool);
	}

	[Token(Token = "0x60004E6")]
	[Address(RVA = "0x24FC180", Offset = "0x24FA780", VA = "0x1824FC180")]
	internal bool Contains(string name, bool caseSensitive)
	{
		return default(bool);
	}

	[Token(Token = "0x60004E7")]
	[Address(RVA = "0x24FC850", Offset = "0x24FAE50", VA = "0x1824FC850")]
	public int IndexOf(DataTable table)
	{
		return default(int);
	}

	[Token(Token = "0x60004E8")]
	[Address(RVA = "0x24FC7A0", Offset = "0x24FADA0", VA = "0x1824FC7A0")]
	public int IndexOf(string tableName)
	{
		return default(int);
	}

	[Token(Token = "0x60004E9")]
	[Address(RVA = "0x24FC7C0", Offset = "0x24FADC0", VA = "0x1824FC7C0")]
	internal int IndexOf(string tableName, string tableNamespace, bool chekforNull)
	{
		return default(int);
	}

	[Token(Token = "0x60004EA")]
	[Address(RVA = "0x24FD430", Offset = "0x24FBA30", VA = "0x1824FD430")]
	internal void ReplaceFromInference(List<DataTable> tableList)
	{
	}

	[Token(Token = "0x60004EB")]
	[Address(RVA = "0x24FC940", Offset = "0x24FAF40", VA = "0x1824FC940")]
	internal int InternalIndexOf(string tableName)
	{
		return default(int);
	}

	[Token(Token = "0x60004EC")]
	[Address(RVA = "0x24FCBC0", Offset = "0x24FB1C0", VA = "0x1824FCBC0")]
	internal int InternalIndexOf(string tableName, string tableNamespace)
	{
		return default(int);
	}

	[Token(Token = "0x60004ED")]
	[Address(RVA = "0x24FC4A0", Offset = "0x24FAAA0", VA = "0x1824FC4A0")]
	internal void FinishInitCollection()
	{
	}

	[Token(Token = "0x60004EE")]
	[Address(RVA = "0x24FCDC0", Offset = "0x24FB3C0", VA = "0x1824FCDC0")]
	private string MakeName(int index)
	{
		return null;
	}

	[Token(Token = "0x60004EF")]
	[Address(RVA = "0x24FCE60", Offset = "0x24FB460", VA = "0x1824FCE60")]
	private void OnCollectionChanged(CollectionChangeEventArgs ccevent)
	{
	}

	[Token(Token = "0x60004F0")]
	[Address(RVA = "0x24FCF20", Offset = "0x24FB520", VA = "0x1824FCF20")]
	private void OnCollectionChanging(CollectionChangeEventArgs ccevent)
	{
	}

	[Token(Token = "0x60004F1")]
	[Address(RVA = "0x24FCFE0", Offset = "0x24FB5E0", VA = "0x1824FCFE0")]
	internal void RegisterName(string name, string tbNamespace)
	{
	}

	[Token(Token = "0x60004F2")]
	[Address(RVA = "0x24FD270", Offset = "0x24FB870", VA = "0x1824FD270")]
	public void Remove(DataTable table)
	{
	}

	[Token(Token = "0x60004F3")]
	[Address(RVA = "0x24FD490", Offset = "0x24FBA90", VA = "0x1824FD490")]
	internal void UnregisterName(string name)
	{
	}
}
