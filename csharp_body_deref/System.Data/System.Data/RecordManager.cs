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

[Token(Token = "0x2000083")]
internal sealed class RecordManager
{
	[Token(Token = "0x400029F")]
	[FieldOffset(Offset = "0x10")]
	private readonly DataTable _table;

	[Token(Token = "0x40002A0")]
	[FieldOffset(Offset = "0x18")]
	private int _lastFreeRecord;

	[Token(Token = "0x40002A1")]
	[FieldOffset(Offset = "0x1C")]
	private int _minimumCapacity;

	[Token(Token = "0x40002A2")]
	[FieldOffset(Offset = "0x20")]
	private int _recordCapacity;

	[Token(Token = "0x40002A3")]
	[FieldOffset(Offset = "0x28")]
	private readonly List<int> _freeRecordList;

	[Token(Token = "0x40002A4")]
	[FieldOffset(Offset = "0x30")]
	private DataRow[] _rows;

	[Token(Token = "0x1700012D")]
	internal int LastFreeRecord
	{
		[Token(Token = "0x600074D")]
		[Address(RVA = "0x5EC6660", Offset = "0x5EC5660", VA = "0x5EC6660")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700012E")]
	internal int MinimumCapacity
	{
		[Token(Token = "0x600074E")]
		[Address(RVA = "0x5EC6670", Offset = "0x5EC5670", VA = "0x5EC6670")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600074F")]
		[Address(RVA = "0x5EC6680", Offset = "0x5EC5680", VA = "0x5EC6680")]
		set
		{
		}
	}

	[Token(Token = "0x1700012F")]
	internal int RecordCapacity
	{
		[Token(Token = "0x6000750")]
		[Address(RVA = "0x5EC66B0", Offset = "0x5EC56B0", VA = "0x5EC66B0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000751")]
		[Address(RVA = "0x5EC65D0", Offset = "0x5EC55D0", VA = "0x5EC65D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000130")]
	internal DataRow this[int record]
	{
		[Token(Token = "0x6000757")]
		[Address(RVA = "0x5EC6B70", Offset = "0x5EC5B70", VA = "0x5EC6B70")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000758")]
		[Address(RVA = "0x5EC68D0", Offset = "0x5EC58D0", VA = "0x5EC68D0")]
		set
		{
		}
	}

	[Token(Token = "0x600074B")]
	[Address(RVA = "0x5EC6390", Offset = "0x5EC5390", VA = "0x5EC6390")]
	internal RecordManager(DataTable table)
	{
	}

	[Token(Token = "0x600074C")]
	[Address(RVA = "0x5EC6460", Offset = "0x5EC5460", VA = "0x5EC6460")]
	private void GrowRecordCapacity()
	{
	}

	[Token(Token = "0x6000752")]
	[Address(RVA = "0x5EC6570", Offset = "0x5EC5570", VA = "0x5EC6570")]
	internal static int NewCapacity(int capacity)
	{
		return default(int);
	}

	[Token(Token = "0x6000753")]
	[Address(RVA = "0x5EC6590", Offset = "0x5EC5590", VA = "0x5EC6590")]
	private int NormalizedMinimumCapacity(int capacity)
	{
		return default(int);
	}

	[Token(Token = "0x6000754")]
	[Address(RVA = "0x5EC66C0", Offset = "0x5EC56C0", VA = "0x5EC66C0")]
	internal int NewRecordBase()
	{
		return default(int);
	}

	[Token(Token = "0x6000755")]
	[Address(RVA = "0x5EC6770", Offset = "0x5EC5770", VA = "0x5EC6770")]
	internal void FreeRecord(ref int record)
	{
	}

	[Token(Token = "0x6000756")]
	[Address(RVA = "0x5EC6940", Offset = "0x5EC5940", VA = "0x5EC6940")]
	internal void Clear(bool clearAll)
	{
	}

	[Token(Token = "0x6000759")]
	[Address(RVA = "0x5EC6BA0", Offset = "0x5EC5BA0", VA = "0x5EC6BA0")]
	internal int ImportRecord(DataTable src, int record)
	{
		return default(int);
	}

	[Token(Token = "0x600075A")]
	[Address(RVA = "0x5EC6BB0", Offset = "0x5EC5BB0", VA = "0x5EC6BB0")]
	internal int CopyRecord(DataTable src, int record, int copy)
	{
		return default(int);
	}

	[Token(Token = "0x600075B")]
	[Address(RVA = "0x5EC6F50", Offset = "0x5EC5F50", VA = "0x5EC6F50")]
	internal void SetRowCache(DataRow[] newRows)
	{
	}
}
