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
		[Address(RVA = "0x41ADDC0", Offset = "0x41ADDC0", VA = "0x41ADDC0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001B1")]
	public virtual int ProducedStack
	{
		[Token(Token = "0x6000753")]
		[Address(RVA = "0x41ADDD0", Offset = "0x41ADDD0", VA = "0x41ADDD0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001B2")]
	public virtual int ConsumedContinuations
	{
		[Token(Token = "0x6000754")]
		[Address(RVA = "0x41ADDE0", Offset = "0x41ADDE0", VA = "0x41ADDE0", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001B3")]
	public virtual int ProducedContinuations
	{
		[Token(Token = "0x6000755")]
		[Address(RVA = "0x41ADDF0", Offset = "0x41ADDF0", VA = "0x41ADDF0", Slot = "7")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001B4")]
	public int StackBalance
	{
		[Token(Token = "0x6000756")]
		[Address(RVA = "0x41ADE00", Offset = "0x41ADE00", VA = "0x41ADE00")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001B5")]
	public int ContinuationsBalance
	{
		[Token(Token = "0x6000757")]
		[Address(RVA = "0x41ADE40", Offset = "0x41ADE40", VA = "0x41ADE40")]
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
	[Address(RVA = "0x41ADE80", Offset = "0x41ADE80", VA = "0x41ADE80", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600075B")]
	[Address(RVA = "0x41ADED0", Offset = "0x41ADED0", VA = "0x41ADED0", Slot = "10")]
	public virtual string ToDebugString(int instructionIndex, object cookie, Func<int, int> labelIndexer, IReadOnlyList<object> objects)
	{
		return null;
	}

	[Token(Token = "0x600075C")]
	[Address(RVA = "0x41A9790", Offset = "0x41A9790", VA = "0x41A9790")]
	protected static void NullCheck(object o)
	{
	}

	[Token(Token = "0x600075D")]
	[Address(RVA = "0x41A9480", Offset = "0x41A9480", VA = "0x41A9480")]
	protected Instruction()
	{
	}
}
