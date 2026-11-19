// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.DataKey
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x2000035")]
internal readonly struct DataKey
{
	[Token(Token = "0x4000114")]
	[FieldOffset(Offset = "0x0")]
	private readonly DataColumn[] _columns;

	[Token(Token = "0x17000096")]
	internal DataColumn[] ColumnsReference
	{
		[Token(Token = "0x60003DF")]
		[Address(RVA = "0x5E944F0", Offset = "0x5E934F0", VA = "0x5E944F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000097")]
	internal bool HasValue
	{
		[Token(Token = "0x60003E0")]
		[Address(RVA = "0x5E94500", Offset = "0x5E93500", VA = "0x5E94500")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000098")]
	internal DataTable Table
	{
		[Token(Token = "0x60003E1")]
		[Address(RVA = "0x5E8FCF0", Offset = "0x5E8ECF0", VA = "0x5E8FCF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60003DE")]
	[Address(RVA = "0x5E94240", Offset = "0x5E93240", VA = "0x5E94240")]
	internal DataKey(DataColumn[] columns, bool copyColumns)
	{
	}

	[Token(Token = "0x60003E2")]
	[Address(RVA = "0x5E94460", Offset = "0x5E93460", VA = "0x5E94460")]
	internal void CheckState()
	{
	}

	[Token(Token = "0x60003E3")]
	[Address(RVA = "0x5E94510", Offset = "0x5E93510", VA = "0x5E94510")]
	internal bool ColumnsEqual(DataKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x60003E4")]
	[Address(RVA = "0x5E94520", Offset = "0x5E93520", VA = "0x5E94520")]
	internal static bool ColumnsEqual(DataColumn[] column1, DataColumn[] column2)
	{
		return default(bool);
	}

	[Token(Token = "0x60003E5")]
	[Address(RVA = "0x5E92AB0", Offset = "0x5E91AB0", VA = "0x5E92AB0")]
	internal bool ContainsColumn(DataColumn column)
	{
		return default(bool);
	}

	[Token(Token = "0x60003E6")]
	[Address(RVA = "0x5E945F0", Offset = "0x5E935F0", VA = "0x5E945F0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60003E7")]
	[Address(RVA = "0x5E94640", Offset = "0x5E93640", VA = "0x5E94640", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60003E8")]
	[Address(RVA = "0x5E94720", Offset = "0x5E93720", VA = "0x5E94720")]
	internal bool Equals(DataKey value)
	{
		return default(bool);
	}

	[Token(Token = "0x60003E9")]
	[Address(RVA = "0x5E947A0", Offset = "0x5E937A0", VA = "0x5E947A0")]
	internal string[] GetColumnNames()
	{
		return null;
	}

	[Token(Token = "0x60003EA")]
	[Address(RVA = "0x5E94870", Offset = "0x5E93870", VA = "0x5E94870")]
	internal IndexField[] GetIndexDesc()
	{
		return null;
	}

	[Token(Token = "0x60003EB")]
	[Address(RVA = "0x5E94980", Offset = "0x5E93980", VA = "0x5E94980")]
	internal object[] GetKeyValues(int record)
	{
		return null;
	}

	[Token(Token = "0x60003EC")]
	[Address(RVA = "0x5E94AA0", Offset = "0x5E93AA0", VA = "0x5E94AA0")]
	internal Index GetSortIndex()
	{
		return null;
	}

	[Token(Token = "0x60003ED")]
	[Address(RVA = "0x5E94AF0", Offset = "0x5E93AF0", VA = "0x5E94AF0")]
	internal Index GetSortIndex(DataViewRowState recordStates)
	{
		return null;
	}

	[Token(Token = "0x60003EE")]
	[Address(RVA = "0x5E94B40", Offset = "0x5E93B40", VA = "0x5E94B40")]
	internal bool RecordsEqual(int record1, int record2)
	{
		return default(bool);
	}

	[Token(Token = "0x60003EF")]
	[Address(RVA = "0x5E94BB0", Offset = "0x5E93BB0", VA = "0x5E94BB0")]
	internal DataColumn[] ToArray()
	{
		return null;
	}
}
