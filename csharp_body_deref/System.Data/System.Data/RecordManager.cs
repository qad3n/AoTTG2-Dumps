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
		[Address(RVA = "0x4280270", Offset = "0x4280270", VA = "0x4280270")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700012B")]
	internal int MinimumCapacity
	{
		[Token(Token = "0x600072F")]
		[Address(RVA = "0x4280280", Offset = "0x4280280", VA = "0x4280280")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000730")]
		[Address(RVA = "0x4280290", Offset = "0x4280290", VA = "0x4280290")]
		set
		{
		}
	}

	[Token(Token = "0x1700012C")]
	internal int RecordCapacity
	{
		[Token(Token = "0x6000731")]
		[Address(RVA = "0x42802C0", Offset = "0x42802C0", VA = "0x42802C0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000732")]
		[Address(RVA = "0x42801E0", Offset = "0x42801E0", VA = "0x42801E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700012D")]
	internal DataRow this[int record]
	{
		[Token(Token = "0x6000738")]
		[Address(RVA = "0x42807B0", Offset = "0x42807B0", VA = "0x42807B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000739")]
		[Address(RVA = "0x42804E0", Offset = "0x42804E0", VA = "0x42804E0")]
		set
		{
		}
	}

	[Token(Token = "0x600072C")]
	[Address(RVA = "0x427FF90", Offset = "0x427FF90", VA = "0x427FF90")]
	internal RecordManager(DataTable table)
	{
	}

	[Token(Token = "0x600072D")]
	[Address(RVA = "0x4280060", Offset = "0x4280060", VA = "0x4280060")]
	private void GrowRecordCapacity()
	{
	}

	[Token(Token = "0x6000733")]
	[Address(RVA = "0x4280190", Offset = "0x4280190", VA = "0x4280190")]
	internal static int NewCapacity(int capacity)
	{
		return default(int);
	}

	[Token(Token = "0x6000734")]
	[Address(RVA = "0x42801A0", Offset = "0x42801A0", VA = "0x42801A0")]
	private int NormalizedMinimumCapacity(int capacity)
	{
		return default(int);
	}

	[Token(Token = "0x6000735")]
	[Address(RVA = "0x42802D0", Offset = "0x42802D0", VA = "0x42802D0")]
	internal int NewRecordBase()
	{
		return default(int);
	}

	[Token(Token = "0x6000736")]
	[Address(RVA = "0x4280380", Offset = "0x4280380", VA = "0x4280380")]
	internal void FreeRecord(ref int record)
	{
	}

	[Token(Token = "0x6000737")]
	[Address(RVA = "0x4280550", Offset = "0x4280550", VA = "0x4280550")]
	internal void Clear(bool clearAll)
	{
	}

	[Token(Token = "0x600073A")]
	[Address(RVA = "0x42807E0", Offset = "0x42807E0", VA = "0x42807E0")]
	internal int ImportRecord(DataTable src, int record)
	{
		return default(int);
	}

	[Token(Token = "0x600073B")]
	[Address(RVA = "0x42807F0", Offset = "0x42807F0", VA = "0x42807F0")]
	internal int CopyRecord(DataTable src, int record, int copy)
	{
		return default(int);
	}

	[Token(Token = "0x600073C")]
	[Address(RVA = "0x4280C60", Offset = "0x4280C60", VA = "0x4280C60")]
	internal void SetRowCache(DataRow[] newRows)
	{
	}
}
