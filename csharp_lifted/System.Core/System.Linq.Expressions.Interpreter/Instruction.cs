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

[Token(Token = "0x200015F")]
internal abstract class Instruction
{
	[Token(Token = "0x170001B2")]
	public virtual int ConsumedStack
	{
		[Token(Token = "0x600075C")]
		[Address(RVA = "0x5DE8B40", Offset = "0x5DE7B40", VA = "0x5DE8B40", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001B3")]
	public virtual int ProducedStack
	{
		[Token(Token = "0x600075D")]
		[Address(RVA = "0x5DE8B50", Offset = "0x5DE7B50", VA = "0x5DE8B50", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001B4")]
	public virtual int ConsumedContinuations
	{
		[Token(Token = "0x600075E")]
		[Address(RVA = "0x5DE8B60", Offset = "0x5DE7B60", VA = "0x5DE8B60", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001B5")]
	public virtual int ProducedContinuations
	{
		[Token(Token = "0x600075F")]
		[Address(RVA = "0x5DE8B70", Offset = "0x5DE7B70", VA = "0x5DE8B70", Slot = "7")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001B6")]
	public int StackBalance
	{
		[Token(Token = "0x6000760")]
		[Address(RVA = "0x5DE8B80", Offset = "0x5DE7B80", VA = "0x5DE8B80")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001B7")]
	public int ContinuationsBalance
	{
		[Token(Token = "0x6000761")]
		[Address(RVA = "0x5DE8BC0", Offset = "0x5DE7BC0", VA = "0x5DE8BC0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001B8")]
	public abstract string InstructionName
	{
		[Token(Token = "0x6000763")]
		get;
	}

	[Token(Token = "0x6000762")]
	public abstract int Run(InterpretedFrame frame);

	[Token(Token = "0x6000764")]
	[Address(RVA = "0x5DE8C00", Offset = "0x5DE7C00", VA = "0x5DE8C00", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000765")]
	[Address(RVA = "0x5DE8C50", Offset = "0x5DE7C50", VA = "0x5DE8C50", Slot = "10")]
	public virtual string ToDebugString(int instructionIndex, object cookie, Func<int, int> labelIndexer, IReadOnlyList<object> objects)
	{
		return null;
	}

	[Token(Token = "0x6000766")]
	[Address(RVA = "0x5DE4470", Offset = "0x5DE3470", VA = "0x5DE4470")]
	protected static void NullCheck(object o)
	{
	}

	[Token(Token = "0x6000767")]
	[Address(RVA = "0x5DE4160", Offset = "0x5DE3160", VA = "0x5DE4160")]
	protected Instruction()
	{
	}
}
