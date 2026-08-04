// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.ChildForeignKeyConstraintEnumerator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x200000D")]
internal sealed class ChildForeignKeyConstraintEnumerator : ForeignKeyConstraintEnumerator
{
	[Token(Token = "0x4000021")]
	[FieldOffset(Offset = "0x28")]
	private readonly DataTable _table;

	[Token(Token = "0x6000068")]
	[Address(RVA = "0x4538150", Offset = "0x4538150", VA = "0x4538150")]
	public ChildForeignKeyConstraintEnumerator(DataSet dataSet, DataTable inTable)
	{
	}

	[Token(Token = "0x6000069")]
	[Address(RVA = "0x45381E0", Offset = "0x45381E0", VA = "0x45381E0", Slot = "4")]
	protected override bool IsValidCandidate(Constraint constraint)
	{
		return default(bool);
	}
}
