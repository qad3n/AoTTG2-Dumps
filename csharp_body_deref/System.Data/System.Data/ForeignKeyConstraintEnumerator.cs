// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.ForeignKeyConstraintEnumerator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x200000C")]
internal class ForeignKeyConstraintEnumerator : ConstraintEnumerator
{
	[Token(Token = "0x6000065")]
	[Address(RVA = "0x4538020", Offset = "0x4538020", VA = "0x4538020")]
	public ForeignKeyConstraintEnumerator(DataSet dataSet)
	{
	}

	[Token(Token = "0x6000066")]
	[Address(RVA = "0x4538090", Offset = "0x4538090", VA = "0x4538090", Slot = "4")]
	protected override bool IsValidCandidate(Constraint constraint)
	{
		return default(bool);
	}

	[Token(Token = "0x6000067")]
	[Address(RVA = "0x45380F0", Offset = "0x45380F0", VA = "0x45380F0")]
	public ForeignKeyConstraint GetForeignKeyConstraint()
	{
		return null;
	}
}
