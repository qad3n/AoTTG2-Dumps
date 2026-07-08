using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x200000E")]
internal sealed class ParentForeignKeyConstraintEnumerator : ForeignKeyConstraintEnumerator
{
	[Token(Token = "0x4000022")]
	[FieldOffset(Offset = "0x28")]
	private readonly DataTable _table;

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x41FAB00", Offset = "0x41FAB00", VA = "0x41FAB00")]
	public ParentForeignKeyConstraintEnumerator(DataSet dataSet, DataTable inTable)
	{
	}

	[Token(Token = "0x600006B")]
	[Address(RVA = "0x41FAB90", Offset = "0x41FAB90", VA = "0x41FAB90", Slot = "4")]
	protected override bool IsValidCandidate(Constraint constraint)
	{
		return default(bool);
	}
}
