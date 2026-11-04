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

[Token(Token = "0x200002B")]
internal class ConstraintEnumerator
{
	[Token(Token = "0x40000FA")]
	[FieldOffset(Offset = "0x10")]
	private IEnumerator _tables;

	[Token(Token = "0x40000FB")]
	[FieldOffset(Offset = "0x18")]
	private IEnumerator _constraints;

	[Token(Token = "0x40000FC")]
	[FieldOffset(Offset = "0x20")]
	private Constraint _currentObject;

	[Token(Token = "0x17000085")]
	protected Constraint CurrentObject
	{
		[Token(Token = "0x600038E")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600038A")]
	[Address(RVA = "0x24E9F10", Offset = "0x24E8510", VA = "0x1824E9F10")]
	public ConstraintEnumerator(DataSet dataSet)
	{
	}

	[Token(Token = "0x600038B")]
	[Address(RVA = "0x24E9CE0", Offset = "0x24E82E0", VA = "0x1824E9CE0")]
	public bool GetNext()
	{
		return default(bool);
	}

	[Token(Token = "0x600038C")]
	[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
	public Constraint GetConstraint()
	{
		return null;
	}

	[Token(Token = "0x600038D")]
	[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "4")]
	protected virtual bool IsValidCandidate(Constraint constraint)
	{
		return default(bool);
	}
}
