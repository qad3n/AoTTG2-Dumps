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
	[Address(RVA = "0x5E90140", Offset = "0x5E8F140", VA = "0x5E90140")]
	public ForeignKeyConstraintEnumerator(DataSet dataSet)
	{
	}

	[Token(Token = "0x6000390")]
	[Address(RVA = "0x5E901B0", Offset = "0x5E8F1B0", VA = "0x5E901B0", Slot = "4")]
	protected override bool IsValidCandidate(Constraint constraint)
	{
		return default(bool);
	}

	[Token(Token = "0x6000391")]
	[Address(RVA = "0x5E90210", Offset = "0x5E8F210", VA = "0x5E90210")]
	public ForeignKeyConstraint GetForeignKeyConstraint()
	{
		return null;
	}
}
