using System.Collections;
using System.Collections.Generic;
using System.ComponentModel;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x2000015")]
[DefaultEvent("CollectionChanged")]
public sealed class DataColumnCollection : InternalDataCollectionBase
{
	[Token(Token = "0x4000050")]
	[FieldOffset(Offset = "0x10")]
	private readonly DataTable _table;

	[Token(Token = "0x4000051")]
	[FieldOffset(Offset = "0x18")]
	private readonly ArrayList _list;

	[Token(Token = "0x4000052")]
	[FieldOffset(Offset = "0x20")]
	private int _defaultNameIndex;

	[Token(Token = "0x4000053")]
	[FieldOffset(Offset = "0x28")]
	private DataColumn[] _delayedAddRangeColumns;

	[Token(Token = "0x4000054")]
	[FieldOffset(Offset = "0x30")]
	private readonly Dictionary<string, DataColumn> _columnFromName;

	[Token(Token = "0x4000055")]
	[FieldOffset(Offset = "0x38")]
	private bool _fInClear;

	[Token(Token = "0x4000056")]
	[FieldOffset(Offset = "0x40")]
	private DataColumn[] _columnsImplementingIChangeTracking;

	[Token(Token = "0x4000057")]
	[FieldOffset(Offset = "0x48")]
	private int _nColumnsImplementingIChangeTracking;

	[Token(Token = "0x4000058")]
	[FieldOffset(Offset = "0x4C")]
	private int _nColumnsImplementingIRevertibleChangeTracking;

	[Token(Token = "0x400005A")]
	[FieldOffset(Offset = "0x58")]
	[CompilerGenerated]
	private CollectionChangeEventHandler CollectionChanging;

	[Token(Token = "0x17000046")]
	protected override ArrayList List
	{
		[Token(Token = "0x6000109")]
		[Address(RVA = "0x4206040", Offset = "0x4206040", VA = "0x4206040", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000047")]
	internal DataColumn[] ColumnsImplementingIChangeTracking
	{
		[Token(Token = "0x600010A")]
		[Address(RVA = "0x4206050", Offset = "0x4206050", VA = "0x4206050")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000048")]
	internal int ColumnsImplementingIChangeTrackingCount
	{
		[Token(Token = "0x600010B")]
		[Address(RVA = "0x4206060", Offset = "0x4206060", VA = "0x4206060")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000049")]
	internal int ColumnsImplementingIRevertibleChangeTrackingCount
	{
		[Token(Token = "0x600010C")]
		[Address(RVA = "0x4206070", Offset = "0x4206070", VA = "0x4206070")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700004A")]
	public DataColumn this[int index]
	{
		[Token(Token = "0x600010D")]
		[Address(RVA = "0x4206080", Offset = "0x4206080", VA = "0x4206080")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700004B")]
	public DataColumn this[string name]
	{
		[Token(Token = "0x600010E")]
		[Address(RVA = "0x41F9810", Offset = "0x41F9810", VA = "0x41F9810")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700004C")]
	internal DataColumn this[string name, string ns]
	{
		[Token(Token = "0x600010F")]
		[Address(RVA = "0x42065E0", Offset = "0x42065E0", VA = "0x42065E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x14000001")]
	public event CollectionChangeEventHandler CollectionChanged
	{
		[Token(Token = "0x6000112")]
		[Address(RVA = "0x4206FF0", Offset = "0x4206FF0", VA = "0x4206FF0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000113")]
		[Address(RVA = "0x4207080", Offset = "0x4207080", VA = "0x4207080")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000002")]
	internal event CollectionChangeEventHandler ColumnPropertyChanged
	{
		[Token(Token = "0x6000114")]
		[Address(RVA = "0x4207110", Offset = "0x4207110", VA = "0x4207110")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000115")]
		[Address(RVA = "0x42071A0", Offset = "0x42071A0", VA = "0x42071A0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000108")]
	[Address(RVA = "0x4205E80", Offset = "0x4205E80", VA = "0x4205E80")]
	internal DataColumnCollection(DataTable table)
	{
	}

	[Token(Token = "0x6000110")]
	[Address(RVA = "0x42066C0", Offset = "0x42066C0", VA = "0x42066C0")]
	public void Add(DataColumn column)
	{
	}

	[Token(Token = "0x6000111")]
	[Address(RVA = "0x42066D0", Offset = "0x42066D0", VA = "0x42066D0")]
	internal void AddAt(int index, DataColumn column)
	{
	}

	[Token(Token = "0x6000116")]
	[Address(RVA = "0x4206EB0", Offset = "0x4206EB0", VA = "0x4206EB0")]
	private void ArrayAdd(DataColumn column)
	{
	}

	[Token(Token = "0x6000117")]
	[Address(RVA = "0x4206E40", Offset = "0x4206E40", VA = "0x4206E40")]
	private void ArrayAdd(int index, DataColumn column)
	{
	}

	[Token(Token = "0x6000118")]
	[Address(RVA = "0x4207270", Offset = "0x4207270", VA = "0x4207270")]
	private void ArrayRemove(DataColumn column)
	{
	}

	[Token(Token = "0x6000119")]
	[Address(RVA = "0x42074D0", Offset = "0x42074D0", VA = "0x42074D0")]
	internal string AssignName()
	{
		return null;
	}

	[Token(Token = "0x600011A")]
	[Address(RVA = "0x4206A10", Offset = "0x4206A10", VA = "0x4206A10")]
	private void BaseAdd(DataColumn column)
	{
	}

	[Token(Token = "0x600011B")]
	[Address(RVA = "0x4207830", Offset = "0x4207830", VA = "0x4207830")]
	private void BaseGroupSwitch(DataColumn[] oldArray, int oldLength, DataColumn[] newArray, int newLength)
	{
	}

	[Token(Token = "0x600011C")]
	[Address(RVA = "0x4207A40", Offset = "0x4207A40", VA = "0x4207A40")]
	private void BaseRemove(DataColumn column)
	{
	}

	[Token(Token = "0x600011D")]
	[Address(RVA = "0x4207B60", Offset = "0x4207B60", VA = "0x4207B60")]
	internal bool CanRemove(DataColumn column, bool fThrowException)
	{
		return default(bool);
	}

	[Token(Token = "0x600011E")]
	[Address(RVA = "0x4207230", Offset = "0x4207230", VA = "0x4207230")]
	private void CheckIChangeTracking(DataColumn column)
	{
	}

	[Token(Token = "0x600011F")]
	[Address(RVA = "0x4208830", Offset = "0x4208830", VA = "0x4208830")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000120")]
	[Address(RVA = "0x4208B20", Offset = "0x4208B20", VA = "0x4208B20")]
	public bool Contains(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6000121")]
	[Address(RVA = "0x4208BA0", Offset = "0x4208BA0", VA = "0x4208BA0")]
	internal bool Contains(string name, bool caseSensitive)
	{
		return default(bool);
	}

	[Token(Token = "0x6000122")]
	[Address(RVA = "0x4208C30", Offset = "0x4208C30", VA = "0x4208C30")]
	public int IndexOf(string columnName)
	{
		return default(int);
	}

	[Token(Token = "0x6000123")]
	[Address(RVA = "0x42062B0", Offset = "0x42062B0", VA = "0x42062B0")]
	internal int IndexOfCaseInsensitive(string name)
	{
		return default(int);
	}

	[Token(Token = "0x6000124")]
	[Address(RVA = "0x4208D40", Offset = "0x4208D40", VA = "0x4208D40")]
	internal void FinishInitCollection()
	{
	}

	[Token(Token = "0x6000125")]
	[Address(RVA = "0x4207560", Offset = "0x4207560", VA = "0x4207560")]
	private string MakeName(int index)
	{
		return null;
	}

	[Token(Token = "0x6000126")]
	[Address(RVA = "0x4206F40", Offset = "0x4206F40", VA = "0x4206F40")]
	private void OnCollectionChanged(CollectionChangeEventArgs ccevent)
	{
	}

	[Token(Token = "0x6000127")]
	[Address(RVA = "0x42069F0", Offset = "0x42069F0", VA = "0x42069F0")]
	private void OnCollectionChanging(CollectionChangeEventArgs ccevent)
	{
	}

	[Token(Token = "0x6000128")]
	[Address(RVA = "0x41FE830", Offset = "0x41FE830", VA = "0x41FE830")]
	internal void OnColumnPropertyChanged(CollectionChangeEventArgs ccevent)
	{
	}

	[Token(Token = "0x6000129")]
	[Address(RVA = "0x41FE460", Offset = "0x41FE460", VA = "0x41FE460")]
	internal void RegisterColumnName(string name, DataColumn column)
	{
	}

	[Token(Token = "0x600012A")]
	[Address(RVA = "0x4209180", Offset = "0x4209180", VA = "0x4209180")]
	internal bool CanRegisterName(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x600012B")]
	[Address(RVA = "0x42091D0", Offset = "0x42091D0", VA = "0x42091D0")]
	public void Remove(DataColumn column)
	{
	}

	[Token(Token = "0x600012C")]
	[Address(RVA = "0x41FE6A0", Offset = "0x41FE6A0", VA = "0x41FE6A0")]
	internal void UnregisterName(string name)
	{
	}

	[Token(Token = "0x600012D")]
	[Address(RVA = "0x4208750", Offset = "0x4208750", VA = "0x4208750")]
	private void AddColumnsImplementingIChangeTrackingList(DataColumn dataColumn)
	{
	}

	[Token(Token = "0x600012E")]
	[Address(RVA = "0x4207390", Offset = "0x4207390", VA = "0x4207390")]
	private void RemoveColumnsImplementingIChangeTrackingList(DataColumn dataColumn)
	{
	}
}
