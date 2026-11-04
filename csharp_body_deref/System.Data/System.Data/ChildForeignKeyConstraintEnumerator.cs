// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.ChildForeignKeyConstraintEnumerator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x200002D")]
internal sealed class ChildForeignKeyConstraintEnumerator : ForeignKeyConstraintEnumerator
{
	[Token(Token = "0x40000FD")]
	[FieldOffset(Offset = "0x28")]
	private readonly DataTable _table;

	[Token(Token = "0x6000392")]
	[Address(RVA = "0x24E4A80", Offset = "0x24E3080", VA = "0x1824E4A80")]
	public ChildForeignKeyConstraintEnumerator(DataSet dataSet, DataTable inTable)
	{
	}

	[Token(Token = "0x6000393")]
	[Address(RVA = "0x24E49C0", Offset = "0x24E2FC0", VA = "0x1824E49C0", Slot = "4")]
	protected override bool IsValidCandidate(Constraint constraint)
	{
		return default(bool);
	}
}
