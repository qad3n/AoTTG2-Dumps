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
		[Token(Token = "0x6000751")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001B1")]
	public virtual int ProducedStack
	{
		[Token(Token = "0x6000752")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001B2")]
	public virtual int ConsumedContinuations
	{
		[Token(Token = "0x6000753")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001B3")]
	public virtual int ProducedContinuations
	{
		[Token(Token = "0x6000754")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "7")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001B4")]
	public int StackBalance
	{
		[Token(Token = "0x6000755")]
		[Address(RVA = "0x244E830", Offset = "0x244CE30", VA = "0x18244E830")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001B5")]
	public int ContinuationsBalance
	{
		[Token(Token = "0x6000756")]
		[Address(RVA = "0x244E7E0", Offset = "0x244CDE0", VA = "0x18244E7E0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001B6")]
	public abstract string InstructionName
	{
		[Token(Token = "0x6000758")]
		get;
	}

	[Token(Token = "0x6000757")]
	public abstract int Run(InterpretedFrame frame);

	[Token(Token = "0x6000759")]
	[Address(RVA = "0x244E790", Offset = "0x244CD90", VA = "0x18244E790", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600075A")]
	[Address(RVA = "0x1AC8190", Offset = "0x1AC6790", VA = "0x181AC8190", Slot = "10")]
	public virtual string ToDebugString(int instructionIndex, object cookie, Func<int, int> labelIndexer, IReadOnlyList<object> objects)
	{
		return null;
	}

	[Token(Token = "0x600075B")]
	[Address(RVA = "0x244E770", Offset = "0x244CD70", VA = "0x18244E770")]
	protected static void NullCheck(object o)
	{
	}

	[Token(Token = "0x600075C")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected Instruction()
	{
	}
}
