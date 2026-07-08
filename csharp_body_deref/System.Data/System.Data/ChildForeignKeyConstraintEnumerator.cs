using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x200000D")]
internal sealed class ChildForeignKeyConstraintEnumerator : ForeignKeyConstraintEnumerator
{
	[Token(Token = "0x4000021")]
	[FieldOffset(Offset = "0x28")]
	private readonly DataTable _table;

	[Token(Token = "0x6000068")]
	[Address(RVA = "0x41FA9F0", Offset = "0x41FA9F0", VA = "0x41FA9F0")]
	public ChildForeignKeyConstraintEnumerator(DataSet dataSet, DataTable inTable)
	{
	}

	[Token(Token = "0x6000069")]
	[Address(RVA = "0x41FAA80", Offset = "0x41FAA80", VA = "0x41FAA80", Slot = "4")]
	protected override bool IsValidCandidate(Constraint constraint)
	{
		return default(bool);
	}
}
