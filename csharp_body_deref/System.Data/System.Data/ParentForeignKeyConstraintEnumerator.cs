// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.ParentForeignKeyConstraintEnumerator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x200000E")]
internal sealed class ParentForeignKeyConstraintEnumerator : ForeignKeyConstraintEnumerator
{
	[Token(Token = "0x4000022")]
	[FieldOffset(Offset = "0x28")]
	private readonly DataTable _table;

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x4538260", Offset = "0x4538260", VA = "0x4538260")]
	public ParentForeignKeyConstraintEnumerator(DataSet dataSet, DataTable inTable)
	{
	}

	[Token(Token = "0x600006B")]
	[Address(RVA = "0x45382F0", Offset = "0x45382F0", VA = "0x45382F0", Slot = "4")]
	protected override bool IsValidCandidate(Constraint constraint)
	{
		return default(bool);
	}
}
