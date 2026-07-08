using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x200000C")]
internal class ForeignKeyConstraintEnumerator : ConstraintEnumerator
{
	[Token(Token = "0x6000065")]
	[Address(RVA = "0x41FA8C0", Offset = "0x41FA8C0", VA = "0x41FA8C0")]
	public ForeignKeyConstraintEnumerator(DataSet dataSet)
	{
	}

	[Token(Token = "0x6000066")]
	[Address(RVA = "0x41FA930", Offset = "0x41FA930", VA = "0x41FA930", Slot = "4")]
	protected override bool IsValidCandidate(Constraint constraint)
	{
		return default(bool);
	}

	[Token(Token = "0x6000067")]
	[Address(RVA = "0x41FA990", Offset = "0x41FA990", VA = "0x41FA990")]
	public ForeignKeyConstraint GetForeignKeyConstraint()
	{
		return null;
	}
}
