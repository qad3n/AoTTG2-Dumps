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

[Token(Token = "0x2000049")]
[TypeConverter(typeof(ExpandableObjectConverter))]
public class DataViewSetting
{
	[Token(Token = "0x4000167")]
	[FieldOffset(Offset = "0x10")]
	private DataViewManager _dataViewManager;

	[Token(Token = "0x4000168")]
	[FieldOffset(Offset = "0x18")]
	private DataTable _table;

	[Token(Token = "0x4000169")]
	[FieldOffset(Offset = "0x20")]
	private string _sort;

	[Token(Token = "0x400016A")]
	[FieldOffset(Offset = "0x28")]
	private string _rowFilter;

	[Token(Token = "0x400016B")]
	[FieldOffset(Offset = "0x30")]
	private DataViewRowState _rowStateFilter;

	[Token(Token = "0x400016C")]
	[FieldOffset(Offset = "0x34")]
	private bool _applyDefaultSort;

	[Token(Token = "0x17000102")]
	public bool ApplyDefaultSort
	{
		[Token(Token = "0x6000585")]
		[Address(RVA = "0x459A370", Offset = "0x459A370", VA = "0x459A370")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000103")]
	public string RowFilter
	{
		[Token(Token = "0x6000588")]
		[Address(RVA = "0x459A3C0", Offset = "0x459A3C0", VA = "0x459A3C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000104")]
	public DataViewRowState RowStateFilter
	{
		[Token(Token = "0x6000589")]
		[Address(RVA = "0x459A3D0", Offset = "0x459A3D0", VA = "0x459A3D0")]
		get
		{
			return default(DataViewRowState);
		}
	}

	[Token(Token = "0x17000105")]
	public string Sort
	{
		[Token(Token = "0x600058A")]
		[Address(RVA = "0x459A3E0", Offset = "0x459A3E0", VA = "0x459A3E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000584")]
	[Address(RVA = "0x459A300", Offset = "0x459A300", VA = "0x459A300")]
	internal DataViewSetting()
	{
	}

	[Token(Token = "0x6000586")]
	[Address(RVA = "0x459A380", Offset = "0x459A380", VA = "0x459A380")]
	internal void SetDataViewManager(DataViewManager dataViewManager)
	{
	}

	[Token(Token = "0x6000587")]
	[Address(RVA = "0x459A3A0", Offset = "0x459A3A0", VA = "0x459A3A0")]
	internal void SetDataTable(DataTable table)
	{
	}
}
