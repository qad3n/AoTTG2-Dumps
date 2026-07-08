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
		[Address(RVA = "0x41FA8B0", Offset = "0x41FA8B0", VA = "0x41FA8B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x41FA490", Offset = "0x41FA490", VA = "0x41FA490")]
	public ConstraintEnumerator(DataSet dataSet)
	{
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x41FA500", Offset = "0x41FA500", VA = "0x41FA500")]
	public bool GetNext()
	{
		return default(bool);
	}

	[Token(Token = "0x6000062")]
	[Address(RVA = "0x41FA890", Offset = "0x41FA890", VA = "0x41FA890")]
	public Constraint GetConstraint()
	{
		return null;
	}

	[Token(Token = "0x6000063")]
	[Address(RVA = "0x41FA8A0", Offset = "0x41FA8A0", VA = "0x41FA8A0", Slot = "4")]
	protected virtual bool IsValidCandidate(Constraint constraint)
	{
		return default(bool);
	}
}
