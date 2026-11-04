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
		[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700012E")]
	internal int MinimumCapacity
	{
		[Token(Token = "0x600074E")]
		[Address(RVA = "0xD23EC0", Offset = "0xD224C0", VA = "0x180D23EC0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600074F")]
		[Address(RVA = "0x25241C0", Offset = "0x25227C0", VA = "0x1825241C0")]
		set
		{
		}
	}

	[Token(Token = "0x1700012F")]
	internal int RecordCapacity
	{
		[Token(Token = "0x6000750")]
		[Address(RVA = "0xA4C170", Offset = "0xA4A770", VA = "0x180A4C170")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000751")]
		[Address(RVA = "0x2524200", Offset = "0x2522800", VA = "0x182524200")]
		set
		{
		}
	}

	[Token(Token = "0x17000130")]
	internal DataRow this[int record]
	{
		[Token(Token = "0x6000757")]
		[Address(RVA = "0x2524110", Offset = "0x2522710", VA = "0x182524110")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000758")]
		[Address(RVA = "0x2524140", Offset = "0x2522740", VA = "0x182524140")]
		set
		{
		}
	}

	[Token(Token = "0x600074B")]
	[Address(RVA = "0x2524030", Offset = "0x2522630", VA = "0x182524030")]
	internal RecordManager(DataTable table)
	{
	}

	[Token(Token = "0x600074C")]
	[Address(RVA = "0x2523CB0", Offset = "0x25222B0", VA = "0x182523CB0")]
	private void GrowRecordCapacity()
	{
	}

	[Token(Token = "0x6000752")]
	[Address(RVA = "0x2523ED0", Offset = "0x25224D0", VA = "0x182523ED0")]
	internal static int NewCapacity(int capacity)
	{
		return default(int);
	}

	[Token(Token = "0x6000753")]
	[Address(RVA = "0x2523FB0", Offset = "0x25225B0", VA = "0x182523FB0")]
	private int NormalizedMinimumCapacity(int capacity)
	{
		return default(int);
	}

	[Token(Token = "0x6000754")]
	[Address(RVA = "0x2523EE0", Offset = "0x25224E0", VA = "0x182523EE0")]
	internal int NewRecordBase()
	{
		return default(int);
	}

	[Token(Token = "0x6000755")]
	[Address(RVA = "0x2523B40", Offset = "0x2522140", VA = "0x182523B40")]
	internal void FreeRecord(ref int record)
	{
	}

	[Token(Token = "0x6000756")]
	[Address(RVA = "0x25236F0", Offset = "0x2521CF0", VA = "0x1825236F0")]
	internal void Clear(bool clearAll)
	{
	}

	[Token(Token = "0x6000759")]
	[Address(RVA = "0x2523EB0", Offset = "0x25224B0", VA = "0x182523EB0")]
	internal int ImportRecord(DataTable src, int record)
	{
		return default(int);
	}

	[Token(Token = "0x600075A")]
	[Address(RVA = "0x2523900", Offset = "0x2521F00", VA = "0x182523900")]
	internal int CopyRecord(DataTable src, int record, int copy)
	{
		return default(int);
	}

	[Token(Token = "0x600075B")]
	[Address(RVA = "0x2523FF0", Offset = "0x25225F0", VA = "0x182523FF0")]
	internal void SetRowCache(DataRow[] newRows)
	{
	}
}
