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
		[Address(RVA = "0x425CC10", Offset = "0x425CC10", VA = "0x425CC10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000103")]
	public string RowFilter
	{
		[Token(Token = "0x6000588")]
		[Address(RVA = "0x425CC60", Offset = "0x425CC60", VA = "0x425CC60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000104")]
	public DataViewRowState RowStateFilter
	{
		[Token(Token = "0x6000589")]
		[Address(RVA = "0x425CC70", Offset = "0x425CC70", VA = "0x425CC70")]
		get
		{
			return default(DataViewRowState);
		}
	}

	[Token(Token = "0x17000105")]
	public string Sort
	{
		[Token(Token = "0x600058A")]
		[Address(RVA = "0x425CC80", Offset = "0x425CC80", VA = "0x425CC80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000584")]
	[Address(RVA = "0x425CBA0", Offset = "0x425CBA0", VA = "0x425CBA0")]
	internal DataViewSetting()
	{
	}

	[Token(Token = "0x6000586")]
	[Address(RVA = "0x425CC20", Offset = "0x425CC20", VA = "0x425CC20")]
	internal void SetDataViewManager(DataViewManager dataViewManager)
	{
	}

	[Token(Token = "0x6000587")]
	[Address(RVA = "0x425CC40", Offset = "0x425CC40", VA = "0x425CC40")]
	internal void SetDataTable(DataTable table)
	{
	}
}
