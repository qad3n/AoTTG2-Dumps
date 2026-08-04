// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.RecordManager
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x2000079")]
internal sealed class RecordManager
{
	[Token(Token = "0x400028C")]
	[FieldOffset(Offset = "0x10")]
	private readonly DataTable _table;

	[Token(Token = "0x400028D")]
	[FieldOffset(Offset = "0x18")]
	private int _lastFreeRecord;

	[Token(Token = "0x400028E")]
	[FieldOffset(Offset = "0x1C")]
	private int _minimumCapacity;

	[Token(Token = "0x400028F")]
	[FieldOffset(Offset = "0x20")]
	private int _recordCapacity;

	[Token(Token = "0x4000290")]
	[FieldOffset(Offset = "0x28")]
	private readonly List<int> _freeRecordList;

	[Token(Token = "0x4000291")]
	[FieldOffset(Offset = "0x30")]
	private DataRow[] _rows;

	[Token(Token = "0x1700012A")]
	internal int LastFreeRecord
	{
		[Token(Token = "0x600072E")]
		[Address(RVA = "0x45BD9D0", Offset = "0x45BD9D0", VA = "0x45BD9D0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700012B")]
	internal int MinimumCapacity
	{
		[Token(Token = "0x600072F")]
		[Address(RVA = "0x45BD9E0", Offset = "0x45BD9E0", VA = "0x45BD9E0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000730")]
		[Address(RVA = "0x45BD9F0", Offset = "0x45BD9F0", VA = "0x45BD9F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700012C")]
	internal int RecordCapacity
	{
		[Token(Token = "0x6000731")]
		[Address(RVA = "0x45BDA20", Offset = "0x45BDA20", VA = "0x45BDA20")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000732")]
		[Address(RVA = "0x45BD940", Offset = "0x45BD940", VA = "0x45BD940")]
		set
		{
		}
	}

	[Token(Token = "0x1700012D")]
	internal DataRow this[int record]
	{
		[Token(Token = "0x6000738")]
		[Address(RVA = "0x45BDF10", Offset = "0x45BDF10", VA = "0x45BDF10")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000739")]
		[Address(RVA = "0x45BDC40", Offset = "0x45BDC40", VA = "0x45BDC40")]
		set
		{
		}
	}

	[Token(Token = "0x600072C")]
	[Address(RVA = "0x45BD6F0", Offset = "0x45BD6F0", VA = "0x45BD6F0")]
	internal RecordManager(DataTable table)
	{
	}

	[Token(Token = "0x600072D")]
	[Address(RVA = "0x45BD7C0", Offset = "0x45BD7C0", VA = "0x45BD7C0")]
	private void GrowRecordCapacity()
	{
	}

	[Token(Token = "0x6000733")]
	[Address(RVA = "0x45BD8F0", Offset = "0x45BD8F0", VA = "0x45BD8F0")]
	internal static int NewCapacity(int capacity)
	{
		return default(int);
	}

	[Token(Token = "0x6000734")]
	[Address(RVA = "0x45BD900", Offset = "0x45BD900", VA = "0x45BD900")]
	private int NormalizedMinimumCapacity(int capacity)
	{
		return default(int);
	}

	[Token(Token = "0x6000735")]
	[Address(RVA = "0x45BDA30", Offset = "0x45BDA30", VA = "0x45BDA30")]
	internal int NewRecordBase()
	{
		return default(int);
	}

	[Token(Token = "0x6000736")]
	[Address(RVA = "0x45BDAE0", Offset = "0x45BDAE0", VA = "0x45BDAE0")]
	internal void FreeRecord(ref int record)
	{
	}

	[Token(Token = "0x6000737")]
	[Address(RVA = "0x45BDCB0", Offset = "0x45BDCB0", VA = "0x45BDCB0")]
	internal void Clear(bool clearAll)
	{
	}

	[Token(Token = "0x600073A")]
	[Address(RVA = "0x45BDF40", Offset = "0x45BDF40", VA = "0x45BDF40")]
	internal int ImportRecord(DataTable src, int record)
	{
		return default(int);
	}

	[Token(Token = "0x600073B")]
	[Address(RVA = "0x45BDF50", Offset = "0x45BDF50", VA = "0x45BDF50")]
	internal int CopyRecord(DataTable src, int record, int copy)
	{
		return default(int);
	}

	[Token(Token = "0x600073C")]
	[Address(RVA = "0x45BE3C0", Offset = "0x45BE3C0", VA = "0x45BE3C0")]
	internal void SetRowCache(DataRow[] newRows)
	{
	}
}
