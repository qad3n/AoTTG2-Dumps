// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.ForeignKeyConstraintEnumerator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x200002C")]
internal class ForeignKeyConstraintEnumerator : ConstraintEnumerator
{
	[Token(Token = "0x600038F")]
	[Address(RVA = "0x24E9F10", Offset = "0x24E8510", VA = "0x1824E9F10")]
	public ForeignKeyConstraintEnumerator(DataSet dataSet)
	{
	}

	[Token(Token = "0x6000390")]
	[Address(RVA = "0x24FE500", Offset = "0x24FCB00", VA = "0x1824FE500", Slot = "4")]
	protected override bool IsValidCandidate(Constraint constraint)
	{
		return default(bool);
	}

	[Token(Token = "0x6000391")]
	[Address(RVA = "0x24FE490", Offset = "0x24FCA90", VA = "0x1824FE490")]
	public ForeignKeyConstraint GetForeignKeyConstraint()
	{
		return null;
	}
}
