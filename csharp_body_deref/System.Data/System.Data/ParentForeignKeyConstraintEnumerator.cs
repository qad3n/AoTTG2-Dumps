// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.ParentForeignKeyConstraintEnumerator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x200002E")]
internal sealed class ParentForeignKeyConstraintEnumerator : ForeignKeyConstraintEnumerator
{
	[Token(Token = "0x40000FE")]
	[FieldOffset(Offset = "0x28")]
	private readonly DataTable _table;

	[Token(Token = "0x6000394")]
	[Address(RVA = "0x24E4A80", Offset = "0x24E3080", VA = "0x1824E4A80")]
	public ParentForeignKeyConstraintEnumerator(DataSet dataSet, DataTable inTable)
	{
	}

	[Token(Token = "0x6000395")]
	[Address(RVA = "0x24FF180", Offset = "0x24FD780", VA = "0x1824FF180", Slot = "4")]
	protected override bool IsValidCandidate(Constraint constraint)
	{
		return default(bool);
	}
}
