// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.DataColumnCollection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Collections.Generic;
using System.ComponentModel;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x2000031")]
[DefaultEvent("CollectionChanged")]
public sealed class DataColumnCollection : InternalDataCollectionBase
{
	[Token(Token = "0x4000102")]
	[FieldOffset(Offset = "0x10")]
	private readonly DataTable _table;

	[Token(Token = "0x4000103")]
	[FieldOffset(Offset = "0x18")]
	private readonly ArrayList _list;

	[Token(Token = "0x4000104")]
	[FieldOffset(Offset = "0x20")]
	private int _defaultNameIndex;

	[Token(Token = "0x4000105")]
	[FieldOffset(Offset = "0x28")]
	private DataColumn[] _delayedAddRangeColumns;

	[Token(Token = "0x4000106")]
	[FieldOffset(Offset = "0x30")]
	private readonly Dictionary<string, DataColumn> _columnFromName;

	[Token(Token = "0x4000107")]
	[FieldOffset(Offset = "0x38")]
	private bool _fInClear;

	[Token(Token = "0x4000108")]
	[FieldOffset(Offset = "0x40")]
	private DataColumn[] _columnsImplementingIChangeTracking;

	[Token(Token = "0x4000109")]
	[FieldOffset(Offset = "0x48")]
	private int _nColumnsImplementingIChangeTracking;

	[Token(Token = "0x400010A")]
	[FieldOffset(Offset = "0x4C")]
	private int _nColumnsImplementingIRevertibleChangeTracking;

	[Token(Token = "0x400010B")]
	[FieldOffset(Offset = "0x50")]
	[CompilerGenerated]
	private CollectionChangeEventHandler m_CollectionChanged;

	[Token(Token = "0x400010C")]
	[FieldOffset(Offset = "0x58")]
	[CompilerGenerated]
	private CollectionChangeEventHandler CollectionChanging;

	[Token(Token = "0x400010D")]
	[FieldOffset(Offset = "0x60")]
	[CompilerGenerated]
	private CollectionChangeEventHandler m_ColumnPropertyChanged;

	[Token(Token = "0x17000087")]
	protected override ArrayList List
	{
		[Token(Token = "0x600039E")]
		[Address(RVA = "0x5E908D0", Offset = "0x5E8F8D0", VA = "0x5E908D0", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000088")]
	internal DataColumn[] ColumnsImplementingIChangeTracking
	{
		[Token(Token = "0x600039F")]
		[Address(RVA = "0x5E908E0", Offset = "0x5E8F8E0", VA = "0x5E908E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000089")]
	internal int ColumnsImplementingIChangeTrackingCount
	{
		[Token(Token = "0x60003A0")]
		[Address(RVA = "0x5E908F0", Offset = "0x5E8F8F0", VA = "0x5E908F0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700008A")]
	internal int ColumnsImplementingIRevertibleChangeTrackingCount
	{
		[Token(Token = "0x60003A1")]
		[Address(RVA = "0x5E90900", Offset = "0x5E8F900", VA = "0x5E90900")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700008B")]
	public DataColumn this[int index]
	{
		[Token(Token = "0x60003A2")]
		[Address(RVA = "0x5E90910", Offset = "0x5E8F910", VA = "0x5E90910")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700008C")]
	public DataColumn this[string name]
	{
		[Token(Token = "0x60003A3")]
		[Address(RVA = "0x5E8EED0", Offset = "0x5E8DED0", VA = "0x5E8EED0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700008D")]
	internal DataColumn this[string name, string ns]
	{
		[Token(Token = "0x60003A4")]
		[Address(RVA = "0x5E90C20", Offset = "0x5E8FC20", VA = "0x5E90C20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x14000003")]
	public event CollectionChangeEventHandler CollectionChanged
	{
		[Token(Token = "0x60003A7")]
		[Address(RVA = "0x5E91500", Offset = "0x5E90500", VA = "0x5E91500")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60003A8")]
		[Address(RVA = "0x5E91590", Offset = "0x5E90590", VA = "0x5E91590")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000004")]
	internal event CollectionChangeEventHandler ColumnPropertyChanged
	{
		[Token(Token = "0x60003A9")]
		[Address(RVA = "0x5E91620", Offset = "0x5E90620", VA = "0x5E91620")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60003AA")]
		[Address(RVA = "0x5E916B0", Offset = "0x5E906B0", VA = "0x5E916B0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x600039D")]
	[Address(RVA = "0x5E90710", Offset = "0x5E8F710", VA = "0x5E90710")]
	internal DataColumnCollection(DataTable table)
	{
	}

	[Token(Token = "0x60003A5")]
	[Address(RVA = "0x5E90CC0", Offset = "0x5E8FCC0", VA = "0x5E90CC0")]
	public void Add(DataColumn column)
	{
	}

	[Token(Token = "0x60003A6")]
	[Address(RVA = "0x5E90CD0", Offset = "0x5E8FCD0", VA = "0x5E90CD0")]
	internal void AddAt(int index, DataColumn column)
	{
	}

	[Token(Token = "0x60003AB")]
	[Address(RVA = "0x5E913C0", Offset = "0x5E903C0", VA = "0x5E913C0")]
	private void ArrayAdd(DataColumn column)
	{
	}

	[Token(Token = "0x60003AC")]
	[Address(RVA = "0x5E91350", Offset = "0x5E90350", VA = "0x5E91350")]
	private void ArrayAdd(int index, DataColumn column)
	{
	}

	[Token(Token = "0x60003AD")]
	[Address(RVA = "0x5E91770", Offset = "0x5E90770", VA = "0x5E91770")]
	private void ArrayRemove(DataColumn column)
	{
	}

	[Token(Token = "0x60003AE")]
	[Address(RVA = "0x5E919E0", Offset = "0x5E909E0", VA = "0x5E919E0")]
	internal string AssignName()
	{
		return null;
	}

	[Token(Token = "0x60003AF")]
	[Address(RVA = "0x5E90FE0", Offset = "0x5E8FFE0", VA = "0x5E90FE0")]
	private void BaseAdd(DataColumn column)
	{
	}

	[Token(Token = "0x60003B0")]
	[Address(RVA = "0x5E91EF0", Offset = "0x5E90EF0", VA = "0x5E91EF0")]
	private void BaseGroupSwitch(DataColumn[] oldArray, int oldLength, DataColumn[] newArray, int newLength)
	{
	}

	[Token(Token = "0x60003B1")]
	[Address(RVA = "0x5E920F0", Offset = "0x5E910F0", VA = "0x5E920F0")]
	private void BaseRemove(DataColumn column)
	{
	}

	[Token(Token = "0x60003B2")]
	[Address(RVA = "0x5E92250", Offset = "0x5E91250", VA = "0x5E92250")]
	internal bool CanRemove(DataColumn column, bool fThrowException)
	{
		return default(bool);
	}

	[Token(Token = "0x60003B3")]
	[Address(RVA = "0x5E91740", Offset = "0x5E90740", VA = "0x5E91740")]
	private void CheckIChangeTracking(DataColumn column)
	{
	}

	[Token(Token = "0x60003B4")]
	[Address(RVA = "0x5E92C00", Offset = "0x5E91C00", VA = "0x5E92C00")]
	public void Clear()
	{
	}

	[Token(Token = "0x60003B5")]
	[Address(RVA = "0x5E92F10", Offset = "0x5E91F10", VA = "0x5E92F10")]
	public bool Contains(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x60003B6")]
	[Address(RVA = "0x5E92F90", Offset = "0x5E91F90", VA = "0x5E92F90")]
	internal bool Contains(string name, bool caseSensitive)
	{
		return default(bool);
	}

	[Token(Token = "0x60003B7")]
	[Address(RVA = "0x5E93020", Offset = "0x5E92020", VA = "0x5E93020")]
	public int IndexOf(string columnName)
	{
		return default(int);
	}

	[Token(Token = "0x60003B8")]
	[Address(RVA = "0x5E90A30", Offset = "0x5E8FA30", VA = "0x5E90A30")]
	internal int IndexOfCaseInsensitive(string name)
	{
		return default(int);
	}

	[Token(Token = "0x60003B9")]
	[Address(RVA = "0x5E93120", Offset = "0x5E92120", VA = "0x5E93120")]
	internal void FinishInitCollection()
	{
	}

	[Token(Token = "0x60003BA")]
	[Address(RVA = "0x5E91A70", Offset = "0x5E90A70", VA = "0x5E91A70")]
	private string MakeName(int index)
	{
		return null;
	}

	[Token(Token = "0x60003BB")]
	[Address(RVA = "0x5E91450", Offset = "0x5E90450", VA = "0x5E91450")]
	private void OnCollectionChanged(CollectionChangeEventArgs ccevent)
	{
	}

	[Token(Token = "0x60003BC")]
	[Address(RVA = "0x5E90FC0", Offset = "0x5E8FFC0", VA = "0x5E90FC0")]
	private void OnCollectionChanging(CollectionChangeEventArgs ccevent)
	{
	}

	[Token(Token = "0x60003BD")]
	[Address(RVA = "0x5E93200", Offset = "0x5E92200", VA = "0x5E93200")]
	internal void OnColumnPropertyChanged(CollectionChangeEventArgs ccevent)
	{
	}

	[Token(Token = "0x60003BE")]
	[Address(RVA = "0x5E91B20", Offset = "0x5E90B20", VA = "0x5E91B20")]
	internal void RegisterColumnName(string name, DataColumn column)
	{
	}

	[Token(Token = "0x60003BF")]
	[Address(RVA = "0x5E93250", Offset = "0x5E92250", VA = "0x5E93250")]
	internal bool CanRegisterName(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x60003C0")]
	[Address(RVA = "0x5E932A0", Offset = "0x5E922A0", VA = "0x5E932A0")]
	public void Remove(DataColumn column)
	{
	}

	[Token(Token = "0x60003C1")]
	[Address(RVA = "0x5E91DD0", Offset = "0x5E90DD0", VA = "0x5E91DD0")]
	internal void UnregisterName(string name)
	{
	}

	[Token(Token = "0x60003C2")]
	[Address(RVA = "0x5E92B20", Offset = "0x5E91B20", VA = "0x5E92B20")]
	private void AddColumnsImplementingIChangeTrackingList(DataColumn dataColumn)
	{
	}

	[Token(Token = "0x60003C3")]
	[Address(RVA = "0x5E91890", Offset = "0x5E90890", VA = "0x5E91890")]
	private void RemoveColumnsImplementingIChangeTrackingList(DataColumn dataColumn)
	{
	}
}
