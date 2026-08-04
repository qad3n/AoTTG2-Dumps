// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.ConstraintEnumerator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x200000B")]
internal class ConstraintEnumerator
{
	[Token(Token = "0x400001E")]
	[FieldOffset(Offset = "0x10")]
	private IEnumerator _tables;

	[Token(Token = "0x400001F")]
	[FieldOffset(Offset = "0x18")]
	private IEnumerator _constraints;

	[Token(Token = "0x4000020")]
	[FieldOffset(Offset = "0x20")]
	private Constraint _currentObject;

	[Token(Token = "0x1700000F")]
	protected Constraint CurrentObject
	{
		[Token(Token = "0x6000064")]
		[Address(RVA = "0x4538010", Offset = "0x4538010", VA = "0x4538010")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x4537BF0", Offset = "0x4537BF0", VA = "0x4537BF0")]
	public ConstraintEnumerator(DataSet dataSet)
	{
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x4537C60", Offset = "0x4537C60", VA = "0x4537C60")]
	public bool GetNext()
	{
		return default(bool);
	}

	[Token(Token = "0x6000062")]
	[Address(RVA = "0x4537FF0", Offset = "0x4537FF0", VA = "0x4537FF0")]
	public Constraint GetConstraint()
	{
		return null;
	}

	[Token(Token = "0x6000063")]
	[Address(RVA = "0x4538000", Offset = "0x4538000", VA = "0x4538000", Slot = "4")]
	protected virtual bool IsValidCandidate(Constraint constraint)
	{
		return default(bool);
	}
}
