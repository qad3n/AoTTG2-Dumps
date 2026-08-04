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
		[Address(RVA = "0x45437A0", Offset = "0x45437A0", VA = "0x45437A0", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000047")]
	internal DataColumn[] ColumnsImplementingIChangeTracking
	{
		[Token(Token = "0x600010A")]
		[Address(RVA = "0x45437B0", Offset = "0x45437B0", VA = "0x45437B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000048")]
	internal int ColumnsImplementingIChangeTrackingCount
	{
		[Token(Token = "0x600010B")]
		[Address(RVA = "0x45437C0", Offset = "0x45437C0", VA = "0x45437C0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000049")]
	internal int ColumnsImplementingIRevertibleChangeTrackingCount
	{
		[Token(Token = "0x600010C")]
		[Address(RVA = "0x45437D0", Offset = "0x45437D0", VA = "0x45437D0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700004A")]
	public DataColumn this[int index]
	{
		[Token(Token = "0x600010D")]
		[Address(RVA = "0x45437E0", Offset = "0x45437E0", VA = "0x45437E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700004B")]
	public DataColumn this[string name]
	{
		[Token(Token = "0x600010E")]
		[Address(RVA = "0x4536F70", Offset = "0x4536F70", VA = "0x4536F70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700004C")]
	internal DataColumn this[string name, string ns]
	{
		[Token(Token = "0x600010F")]
		[Address(RVA = "0x4543D40", Offset = "0x4543D40", VA = "0x4543D40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x14000001")]
	public event CollectionChangeEventHandler CollectionChanged
	{
		[Token(Token = "0x6000112")]
		[Address(RVA = "0x4544750", Offset = "0x4544750", VA = "0x4544750")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000113")]
		[Address(RVA = "0x45447E0", Offset = "0x45447E0", VA = "0x45447E0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000002")]
	internal event CollectionChangeEventHandler ColumnPropertyChanged
	{
		[Token(Token = "0x6000114")]
		[Address(RVA = "0x4544870", Offset = "0x4544870", VA = "0x4544870")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000115")]
		[Address(RVA = "0x4544900", Offset = "0x4544900", VA = "0x4544900")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000108")]
	[Address(RVA = "0x45435E0", Offset = "0x45435E0", VA = "0x45435E0")]
	internal DataColumnCollection(DataTable table)
	{
	}

	[Token(Token = "0x6000110")]
	[Address(RVA = "0x4543E20", Offset = "0x4543E20", VA = "0x4543E20")]
	public void Add(DataColumn column)
	{
	}

	[Token(Token = "0x6000111")]
	[Address(RVA = "0x4543E30", Offset = "0x4543E30", VA = "0x4543E30")]
	internal void AddAt(int index, DataColumn column)
	{
	}

	[Token(Token = "0x6000116")]
	[Address(RVA = "0x4544610", Offset = "0x4544610", VA = "0x4544610")]
	private void ArrayAdd(DataColumn column)
	{
	}

	[Token(Token = "0x6000117")]
	[Address(RVA = "0x45445A0", Offset = "0x45445A0", VA = "0x45445A0")]
	private void ArrayAdd(int index, DataColumn column)
	{
	}

	[Token(Token = "0x6000118")]
	[Address(RVA = "0x45449D0", Offset = "0x45449D0", VA = "0x45449D0")]
	private void ArrayRemove(DataColumn column)
	{
	}

	[Token(Token = "0x6000119")]
	[Address(RVA = "0x4544C30", Offset = "0x4544C30", VA = "0x4544C30")]
	internal string AssignName()
	{
		return null;
	}

	[Token(Token = "0x600011A")]
	[Address(RVA = "0x4544170", Offset = "0x4544170", VA = "0x4544170")]
	private void BaseAdd(DataColumn column)
	{
	}

	[Token(Token = "0x600011B")]
	[Address(RVA = "0x4544F90", Offset = "0x4544F90", VA = "0x4544F90")]
	private void BaseGroupSwitch(DataColumn[] oldArray, int oldLength, DataColumn[] newArray, int newLength)
	{
	}

	[Token(Token = "0x600011C")]
	[Address(RVA = "0x45451A0", Offset = "0x45451A0", VA = "0x45451A0")]
	private void BaseRemove(DataColumn column)
	{
	}

	[Token(Token = "0x600011D")]
	[Address(RVA = "0x45452C0", Offset = "0x45452C0", VA = "0x45452C0")]
	internal bool CanRemove(DataColumn column, bool fThrowException)
	{
		return default(bool);
	}

	[Token(Token = "0x600011E")]
	[Address(RVA = "0x4544990", Offset = "0x4544990", VA = "0x4544990")]
	private void CheckIChangeTracking(DataColumn column)
	{
	}

	[Token(Token = "0x600011F")]
	[Address(RVA = "0x4545F90", Offset = "0x4545F90", VA = "0x4545F90")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000120")]
	[Address(RVA = "0x4546280", Offset = "0x4546280", VA = "0x4546280")]
	public bool Contains(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6000121")]
	[Address(RVA = "0x4546300", Offset = "0x4546300", VA = "0x4546300")]
	internal bool Contains(string name, bool caseSensitive)
	{
		return default(bool);
	}

	[Token(Token = "0x6000122")]
	[Address(RVA = "0x4546390", Offset = "0x4546390", VA = "0x4546390")]
	public int IndexOf(string columnName)
	{
		return default(int);
	}

	[Token(Token = "0x6000123")]
	[Address(RVA = "0x4543A10", Offset = "0x4543A10", VA = "0x4543A10")]
	internal int IndexOfCaseInsensitive(string name)
	{
		return default(int);
	}

	[Token(Token = "0x6000124")]
	[Address(RVA = "0x45464A0", Offset = "0x45464A0", VA = "0x45464A0")]
	internal void FinishInitCollection()
	{
	}

	[Token(Token = "0x6000125")]
	[Address(RVA = "0x4544CC0", Offset = "0x4544CC0", VA = "0x4544CC0")]
	private string MakeName(int index)
	{
		return null;
	}

	[Token(Token = "0x6000126")]
	[Address(RVA = "0x45446A0", Offset = "0x45446A0", VA = "0x45446A0")]
	private void OnCollectionChanged(CollectionChangeEventArgs ccevent)
	{
	}

	[Token(Token = "0x6000127")]
	[Address(RVA = "0x4544150", Offset = "0x4544150", VA = "0x4544150")]
	private void OnCollectionChanging(CollectionChangeEventArgs ccevent)
	{
	}

	[Token(Token = "0x6000128")]
	[Address(RVA = "0x453BF90", Offset = "0x453BF90", VA = "0x453BF90")]
	internal void OnColumnPropertyChanged(CollectionChangeEventArgs ccevent)
	{
	}

	[Token(Token = "0x6000129")]
	[Address(RVA = "0x453BBC0", Offset = "0x453BBC0", VA = "0x453BBC0")]
	internal void RegisterColumnName(string name, DataColumn column)
	{
	}

	[Token(Token = "0x600012A")]
	[Address(RVA = "0x45468E0", Offset = "0x45468E0", VA = "0x45468E0")]
	internal bool CanRegisterName(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x600012B")]
	[Address(RVA = "0x4546930", Offset = "0x4546930", VA = "0x4546930")]
	public void Remove(DataColumn column)
	{
	}

	[Token(Token = "0x600012C")]
	[Address(RVA = "0x453BE00", Offset = "0x453BE00", VA = "0x453BE00")]
	internal void UnregisterName(string name)
	{
	}

	[Token(Token = "0x600012D")]
	[Address(RVA = "0x4545EB0", Offset = "0x4545EB0", VA = "0x4545EB0")]
	private void AddColumnsImplementingIChangeTrackingList(DataColumn dataColumn)
	{
	}

	[Token(Token = "0x600012E")]
	[Address(RVA = "0x4544AF0", Offset = "0x4544AF0", VA = "0x4544AF0")]
	private void RemoveColumnsImplementingIChangeTrackingList(DataColumn dataColumn)
	{
	}
}
