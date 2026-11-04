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
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000088")]
	internal DataColumn[] ColumnsImplementingIChangeTracking
	{
		[Token(Token = "0x600039F")]
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000089")]
	internal int ColumnsImplementingIChangeTrackingCount
	{
		[Token(Token = "0x60003A0")]
		[Address(RVA = "0xB3DFC0", Offset = "0xB3C5C0", VA = "0x180B3DFC0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700008A")]
	internal int ColumnsImplementingIRevertibleChangeTrackingCount
	{
		[Token(Token = "0x60003A1")]
		[Address(RVA = "0x58A610", Offset = "0x588C10", VA = "0x18058A610")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700008B")]
	public DataColumn this[int index]
	{
		[Token(Token = "0x60003A2")]
		[Address(RVA = "0x24ED240", Offset = "0x24EB840", VA = "0x1824ED240")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700008C")]
	public DataColumn this[string name]
	{
		[Token(Token = "0x60003A3")]
		[Address(RVA = "0x24ED310", Offset = "0x24EB910", VA = "0x1824ED310")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700008D")]
	internal DataColumn this[string name, string ns]
	{
		[Token(Token = "0x60003A4")]
		[Address(RVA = "0x24ED190", Offset = "0x24EB790", VA = "0x1824ED190")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x14000003")]
	public event CollectionChangeEventHandler CollectionChanged
	{
		[Token(Token = "0x60003A7")]
		[Address(RVA = "0x24ED050", Offset = "0x24EB650", VA = "0x1824ED050")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60003A8")]
		[Address(RVA = "0x24ED480", Offset = "0x24EBA80", VA = "0x1824ED480")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000004")]
	internal event CollectionChangeEventHandler ColumnPropertyChanged
	{
		[Token(Token = "0x60003A9")]
		[Address(RVA = "0x24ED0F0", Offset = "0x24EB6F0", VA = "0x1824ED0F0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60003AA")]
		[Address(RVA = "0x24ED520", Offset = "0x24EBB20", VA = "0x1824ED520")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x600039D")]
	[Address(RVA = "0x24ECF30", Offset = "0x24EB530", VA = "0x1824ECF30")]
	internal DataColumnCollection(DataTable table)
	{
	}

	[Token(Token = "0x60003A5")]
	[Address(RVA = "0x24EA9C0", Offset = "0x24E8FC0", VA = "0x1824EA9C0")]
	public void Add(DataColumn column)
	{
	}

	[Token(Token = "0x60003A6")]
	[Address(RVA = "0x24EA560", Offset = "0x24E8B60", VA = "0x1824EA560")]
	internal void AddAt(int index, DataColumn column)
	{
	}

	[Token(Token = "0x60003AB")]
	[Address(RVA = "0x24EAA50", Offset = "0x24E9050", VA = "0x1824EAA50")]
	private void ArrayAdd(DataColumn column)
	{
	}

	[Token(Token = "0x60003AC")]
	[Address(RVA = "0x24EA9D0", Offset = "0x24E8FD0", VA = "0x1824EA9D0")]
	private void ArrayAdd(int index, DataColumn column)
	{
	}

	[Token(Token = "0x60003AD")]
	[Address(RVA = "0x24EAAF0", Offset = "0x24E90F0", VA = "0x1824EAAF0")]
	private void ArrayRemove(DataColumn column)
	{
	}

	[Token(Token = "0x60003AE")]
	[Address(RVA = "0x24EAD20", Offset = "0x24E9320", VA = "0x1824EAD20")]
	internal string AssignName()
	{
		return null;
	}

	[Token(Token = "0x60003AF")]
	[Address(RVA = "0x24EAE40", Offset = "0x24E9440", VA = "0x1824EAE40")]
	private void BaseAdd(DataColumn column)
	{
	}

	[Token(Token = "0x60003B0")]
	[Address(RVA = "0x24EB1C0", Offset = "0x24E97C0", VA = "0x1824EB1C0")]
	private void BaseGroupSwitch(DataColumn[] oldArray, int oldLength, DataColumn[] newArray, int newLength)
	{
	}

	[Token(Token = "0x60003B1")]
	[Address(RVA = "0x24EB3A0", Offset = "0x24E99A0", VA = "0x1824EB3A0")]
	private void BaseRemove(DataColumn column)
	{
	}

	[Token(Token = "0x60003B2")]
	[Address(RVA = "0x24EB600", Offset = "0x24E9C00", VA = "0x1824EB600")]
	internal bool CanRemove(DataColumn column, bool fThrowException)
	{
		return default(bool);
	}

	[Token(Token = "0x60003B3")]
	[Address(RVA = "0x24EBF20", Offset = "0x24EA520", VA = "0x1824EBF20")]
	private void CheckIChangeTracking(DataColumn column)
	{
	}

	[Token(Token = "0x60003B4")]
	[Address(RVA = "0x24EBF80", Offset = "0x24EA580", VA = "0x1824EBF80")]
	public void Clear()
	{
	}

	[Token(Token = "0x60003B5")]
	[Address(RVA = "0x24EC420", Offset = "0x24EAA20", VA = "0x1824EC420")]
	public bool Contains(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x60003B6")]
	[Address(RVA = "0x24EC360", Offset = "0x24EA960", VA = "0x1824EC360")]
	internal bool Contains(string name, bool caseSensitive)
	{
		return default(bool);
	}

	[Token(Token = "0x60003B7")]
	[Address(RVA = "0x24EC700", Offset = "0x24EAD00", VA = "0x1824EC700")]
	public int IndexOf(string columnName)
	{
		return default(int);
	}

	[Token(Token = "0x60003B8")]
	[Address(RVA = "0x24EC570", Offset = "0x24EAB70", VA = "0x1824EC570")]
	internal int IndexOfCaseInsensitive(string name)
	{
		return default(int);
	}

	[Token(Token = "0x60003B9")]
	[Address(RVA = "0x24EC4B0", Offset = "0x24EAAB0", VA = "0x1824EC4B0")]
	internal void FinishInitCollection()
	{
	}

	[Token(Token = "0x60003BA")]
	[Address(RVA = "0x24EC810", Offset = "0x24EAE10", VA = "0x1824EC810")]
	private string MakeName(int index)
	{
		return null;
	}

	[Token(Token = "0x60003BB")]
	[Address(RVA = "0x24EC8B0", Offset = "0x24EAEB0", VA = "0x1824EC8B0")]
	private void OnCollectionChanged(CollectionChangeEventArgs ccevent)
	{
	}

	[Token(Token = "0x60003BC")]
	[Address(RVA = "0x24EC950", Offset = "0x24EAF50", VA = "0x1824EC950")]
	private void OnCollectionChanging(CollectionChangeEventArgs ccevent)
	{
	}

	[Token(Token = "0x60003BD")]
	[Address(RVA = "0x24EC970", Offset = "0x24EAF70", VA = "0x1824EC970")]
	internal void OnColumnPropertyChanged(CollectionChangeEventArgs ccevent)
	{
	}

	[Token(Token = "0x60003BE")]
	[Address(RVA = "0x24EC9C0", Offset = "0x24EAFC0", VA = "0x1824EC9C0")]
	internal void RegisterColumnName(string name, DataColumn column)
	{
	}

	[Token(Token = "0x60003BF")]
	[Address(RVA = "0x24EB5A0", Offset = "0x24E9BA0", VA = "0x1824EB5A0")]
	internal bool CanRegisterName(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x60003C0")]
	[Address(RVA = "0x24ECC80", Offset = "0x24EB280", VA = "0x1824ECC80")]
	public void Remove(DataColumn column)
	{
	}

	[Token(Token = "0x60003C1")]
	[Address(RVA = "0x24ECE00", Offset = "0x24EB400", VA = "0x1824ECE00")]
	internal void UnregisterName(string name)
	{
	}

	[Token(Token = "0x60003C2")]
	[Address(RVA = "0x24EA8D0", Offset = "0x24E8ED0", VA = "0x1824EA8D0")]
	private void AddColumnsImplementingIChangeTrackingList(DataColumn dataColumn)
	{
	}

	[Token(Token = "0x60003C3")]
	[Address(RVA = "0x24ECB60", Offset = "0x24EB160", VA = "0x1824ECB60")]
	private void RemoveColumnsImplementingIChangeTrackingList(DataColumn dataColumn)
	{
	}
}
