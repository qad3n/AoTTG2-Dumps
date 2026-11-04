// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.DataViewSetting
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.ComponentModel;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x2000056")]
[TypeConverter(typeof(ExpandableObjectConverter))]
public class DataViewSetting
{
	[Token(Token = "0x40001AF")]
	[FieldOffset(Offset = "0x10")]
	private DataViewManager _dataViewManager;

	[Token(Token = "0x40001B0")]
	[FieldOffset(Offset = "0x18")]
	private DataTable _table;

	[Token(Token = "0x40001B1")]
	[FieldOffset(Offset = "0x20")]
	private string _sort;

	[Token(Token = "0x40001B2")]
	[FieldOffset(Offset = "0x28")]
	private string _rowFilter;

	[Token(Token = "0x40001B3")]
	[FieldOffset(Offset = "0x30")]
	private DataViewRowState _rowStateFilter;

	[Token(Token = "0x40001B4")]
	[FieldOffset(Offset = "0x34")]
	private bool _applyDefaultSort;

	[Token(Token = "0x17000107")]
	public bool ApplyDefaultSort
	{
		[Token(Token = "0x60005B8")]
		[Address(RVA = "0xAB9F70", Offset = "0xAB8570", VA = "0x180AB9F70")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000108")]
	public string RowFilter
	{
		[Token(Token = "0x60005BB")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000109")]
	public DataViewRowState RowStateFilter
	{
		[Token(Token = "0x60005BC")]
		[Address(RVA = "0xAB9F60", Offset = "0xAB8560", VA = "0x180AB9F60")]
		get
		{
			return default(DataViewRowState);
		}
	}

	[Token(Token = "0x1700010A")]
	public string Sort
	{
		[Token(Token = "0x60005BD")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60005B7")]
	[Address(RVA = "0x250C550", Offset = "0x250AB50", VA = "0x18250C550")]
	internal DataViewSetting()
	{
	}

	[Token(Token = "0x60005B9")]
	[Address(RVA = "0x24F27E0", Offset = "0x24F0DE0", VA = "0x1824F27E0")]
	internal void SetDataViewManager(DataViewManager dataViewManager)
	{
	}

	[Token(Token = "0x60005BA")]
	[Address(RVA = "0x250C530", Offset = "0x250AB30", VA = "0x18250C530")]
	internal void SetDataTable(DataTable table)
	{
	}
}
