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
		[Address(RVA = "0x4252CA0", Offset = "0x4252CA0", VA = "0x4252CA0", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C8")]
	internal int ObjectID
	{
		[Token(Token = "0x60004A1")]
		[Address(RVA = "0x4252CB0", Offset = "0x4252CB0", VA = "0x4252CB0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000C9")]
	public DataTable this[int index]
	{
		[Token(Token = "0x60004A2")]
		[Address(RVA = "0x4242460", Offset = "0x4242460", VA = "0x4242460")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000CA")]
	public DataTable this[string name]
	{
		[Token(Token = "0x60004A3")]
		[Address(RVA = "0x423BC20", Offset = "0x423BC20", VA = "0x423BC20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000CB")]
	public DataTable this[string name, string tableNamespace]
	{
		[Token(Token = "0x60004A4")]
		[Address(RVA = "0x423BD00", Offset = "0x423BD00", VA = "0x423BD00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x14000008")]
	public event CollectionChangeEventHandler CollectionChanged
	{
		[Token(Token = "0x60004A8")]
		[Address(RVA = "0x42535D0", Offset = "0x42535D0", VA = "0x42535D0")]
		add
		{
		}
		[Token(Token = "0x60004A9")]
		[Address(RVA = "0x42536F0", Offset = "0x42536F0", VA = "0x42536F0")]
		remove
		{
		}
	}

	[Token(Token = "0x600049F")]
	[Address(RVA = "0x4242070", Offset = "0x4242070", VA = "0x4242070")]
	internal DataTableCollection(DataSet dataSet)
	{
	}

	[Token(Token = "0x60004A5")]
	[Address(RVA = "0x4253070", Offset = "0x4253070", VA = "0x4253070")]
	internal DataTable GetTable(string name, string ns)
	{
		return null;
	}

	[Token(Token = "0x60004A6")]
	[Address(RVA = "0x4253190", Offset = "0x4253190", VA = "0x4253190")]
	internal DataTable GetTableSmart(string name, string ns)
	{
		return null;
	}

	[Token(Token = "0x60004A7")]
	[Address(RVA = "0x4244580", Offset = "0x4244580", VA = "0x4244580")]
	public void Add(DataTable table)
	{
	}

	[Token(Token = "0x60004AA")]
	[Address(RVA = "0x42534E0", Offset = "0x42534E0", VA = "0x42534E0")]
	private void ArrayAdd(DataTable table)
	{
	}

	[Token(Token = "0x60004AB")]
	[Address(RVA = "0x4253810", Offset = "0x4253810", VA = "0x4253810")]
	internal string AssignName()
	{
		return null;
	}

	[Token(Token = "0x60004AC")]
	[Address(RVA = "0x4253390", Offset = "0x4253390", VA = "0x4253390")]
	private void BaseAdd(DataTable table)
	{
	}

	[Token(Token = "0x60004AD")]
	[Address(RVA = "0x4253BB0", Offset = "0x4253BB0", VA = "0x4253BB0")]
	private void BaseGroupSwitch(DataTable[] oldArray, int oldLength, DataTable[] newArray, int newLength)
	{
	}

	[Token(Token = "0x60004AE")]
	[Address(RVA = "0x4253D50", Offset = "0x4253D50", VA = "0x4253D50")]
	private void BaseRemove(DataTable table)
	{
	}

	[Token(Token = "0x60004AF")]
	[Address(RVA = "0x4253DE0", Offset = "0x4253DE0", VA = "0x4253DE0")]
	internal bool CanRemove(DataTable table, bool fThrowException)
	{
		return default(bool);
	}

	[Token(Token = "0x60004B0")]
	[Address(RVA = "0x4251BB0", Offset = "0x4251BB0", VA = "0x4251BB0")]
	public void Clear()
	{
	}

	[Token(Token = "0x60004B1")]
	[Address(RVA = "0x4253900", Offset = "0x4253900", VA = "0x4253900")]
	public bool Contains(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x60004B2")]
	[Address(RVA = "0x4248170", Offset = "0x4248170", VA = "0x4248170")]
	internal bool Contains(string name, string tableNamespace, bool checkProperty, bool caseSensitive)
	{
		return default(bool);
	}

	[Token(Token = "0x60004B3")]
	[Address(RVA = "0x42544D0", Offset = "0x42544D0", VA = "0x42544D0")]
	internal bool Contains(string name, bool caseSensitive)
	{
		return default(bool);
	}

	[Token(Token = "0x60004B4")]
	[Address(RVA = "0x42463E0", Offset = "0x42463E0", VA = "0x42463E0")]
	public int IndexOf(DataTable table)
	{
		return default(int);
	}

	[Token(Token = "0x60004B5")]
	[Address(RVA = "0x42545F0", Offset = "0x42545F0", VA = "0x42545F0")]
	public int IndexOf(string tableName)
	{
		return default(int);
	}

	[Token(Token = "0x60004B6")]
	[Address(RVA = "0x4254610", Offset = "0x4254610", VA = "0x4254610")]
	internal int IndexOf(string tableName, string tableNamespace, bool chekforNull)
	{
		return default(int);
	}

	[Token(Token = "0x60004B7")]
	[Address(RVA = "0x4254670", Offset = "0x4254670", VA = "0x4254670")]
	internal void ReplaceFromInference(List<DataTable> tableList)
	{
	}

	[Token(Token = "0x60004B8")]
	[Address(RVA = "0x4252CC0", Offset = "0x4252CC0", VA = "0x4252CC0")]
	internal int InternalIndexOf(string tableName)
	{
		return default(int);
	}

	[Token(Token = "0x60004B9")]
	[Address(RVA = "0x4252EB0", Offset = "0x4252EB0", VA = "0x4252EB0")]
	internal int InternalIndexOf(string tableName, string tableNamespace)
	{
		return default(int);
	}

	[Token(Token = "0x60004BA")]
	[Address(RVA = "0x4249D50", Offset = "0x4249D50", VA = "0x4249D50")]
	internal void FinishInitCollection()
	{
	}

	[Token(Token = "0x60004BB")]
	[Address(RVA = "0x4253850", Offset = "0x4253850", VA = "0x4253850")]
	private string MakeName(int index)
	{
		return null;
	}

	[Token(Token = "0x60004BC")]
	[Address(RVA = "0x4253510", Offset = "0x4253510", VA = "0x4253510")]
	private void OnCollectionChanged(CollectionChangeEventArgs ccevent)
	{
	}

	[Token(Token = "0x60004BD")]
	[Address(RVA = "0x42532D0", Offset = "0x42532D0", VA = "0x42532D0")]
	private void OnCollectionChanging(CollectionChangeEventArgs ccevent)
	{
	}

	[Token(Token = "0x60004BE")]
	[Address(RVA = "0x4253910", Offset = "0x4253910", VA = "0x4253910")]
	internal void RegisterName(string name, string tbNamespace)
	{
	}

	[Token(Token = "0x60004BF")]
	[Address(RVA = "0x42546C0", Offset = "0x42546C0", VA = "0x42546C0")]
	public void Remove(DataTable table)
	{
	}

	[Token(Token = "0x60004C0")]
	[Address(RVA = "0x42543B0", Offset = "0x42543B0", VA = "0x42543B0")]
	internal void UnregisterName(string name)
	{
	}
}
