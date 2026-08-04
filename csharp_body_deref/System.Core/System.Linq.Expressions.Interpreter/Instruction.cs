// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.Instruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x200015E")]
internal abstract class Instruction
{
	[Token(Token = "0x170001B0")]
	public virtual int ConsumedStack
	{
		[Token(Token = "0x6000752")]
		[Address(RVA = "0x44D2EC0", Offset = "0x44D2EC0", VA = "0x44D2EC0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001B1")]
	public virtual int ProducedStack
	{
		[Token(Token = "0x6000753")]
		[Address(RVA = "0x44D2ED0", Offset = "0x44D2ED0", VA = "0x44D2ED0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001B2")]
	public virtual int ConsumedContinuations
	{
		[Token(Token = "0x6000754")]
		[Address(RVA = "0x44D2EE0", Offset = "0x44D2EE0", VA = "0x44D2EE0", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001B3")]
	public virtual int ProducedContinuations
	{
		[Token(Token = "0x6000755")]
		[Address(RVA = "0x44D2EF0", Offset = "0x44D2EF0", VA = "0x44D2EF0", Slot = "7")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001B4")]
	public int StackBalance
	{
		[Token(Token = "0x6000756")]
		[Address(RVA = "0x44D2F00", Offset = "0x44D2F00", VA = "0x44D2F00")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001B5")]
	public int ContinuationsBalance
	{
		[Token(Token = "0x6000757")]
		[Address(RVA = "0x44D2F40", Offset = "0x44D2F40", VA = "0x44D2F40")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001B6")]
	public abstract string InstructionName
	{
		[Token(Token = "0x6000759")]
		get;
	}

	[Token(Token = "0x6000758")]
	public abstract int Run(InterpretedFrame frame);

	[Token(Token = "0x600075A")]
	[Address(RVA = "0x44D2F80", Offset = "0x44D2F80", VA = "0x44D2F80", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600075B")]
	[Address(RVA = "0x44D2FD0", Offset = "0x44D2FD0", VA = "0x44D2FD0", Slot = "10")]
	public virtual string ToDebugString(int instructionIndex, object cookie, Func<int, int> labelIndexer, IReadOnlyList<object> objects)
	{
		return null;
	}

	[Token(Token = "0x600075C")]
	[Address(RVA = "0x44CE890", Offset = "0x44CE890", VA = "0x44CE890")]
	protected static void NullCheck(object o)
	{
	}

	[Token(Token = "0x600075D")]
	[Address(RVA = "0x44CE580", Offset = "0x44CE580", VA = "0x44CE580")]
	protected Instruction()
	{
	}
}
