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
		[Address(RVA = "0x5E90130", Offset = "0x5E8F130", VA = "0x5E90130")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600038A")]
	[Address(RVA = "0x5E8FD20", Offset = "0x5E8ED20", VA = "0x5E8FD20")]
	public ConstraintEnumerator(DataSet dataSet)
	{
	}

	[Token(Token = "0x600038B")]
	[Address(RVA = "0x5E8FD90", Offset = "0x5E8ED90", VA = "0x5E8FD90")]
	public bool GetNext()
	{
		return default(bool);
	}

	[Token(Token = "0x600038C")]
	[Address(RVA = "0x5E90110", Offset = "0x5E8F110", VA = "0x5E90110")]
	public Constraint GetConstraint()
	{
		return null;
	}

	[Token(Token = "0x600038D")]
	[Address(RVA = "0x5E90120", Offset = "0x5E8F120", VA = "0x5E90120", Slot = "4")]
	protected virtual bool IsValidCandidate(Constraint constraint)
	{
		return default(bool);
	}
}
