using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x200021D")]
internal sealed class LoadCachedObjectInstruction : Instruction
{
	[Token(Token = "0x40003F7")]
	[FieldOffset(Offset = "0x10")]
	private readonly uint _index;

	[Token(Token = "0x17000228")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000AAF")]
		[Address(RVA = "0x41DD310", Offset = "0x41DD310", VA = "0x41DD310", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000229")]
	public override string InstructionName
	{
		[Token(Token = "0x6000AB0")]
		[Address(RVA = "0x41DD320", Offset = "0x41DD320", VA = "0x41DD320", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000AAE")]
	[Address(RVA = "0x41DD2F0", Offset = "0x41DD2F0", VA = "0x41DD2F0")]
	internal LoadCachedObjectInstruction(uint index)
	{
	}

	[Token(Token = "0x6000AB1")]
	[Address(RVA = "0x41DD350", Offset = "0x41DD350", VA = "0x41DD350", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}

	[Token(Token = "0x6000AB2")]
	[Address(RVA = "0x41DD3F0", Offset = "0x41DD3F0", VA = "0x41DD3F0", Slot = "10")]
	public override string ToDebugString(int instructionIndex, object cookie, Func<int, int> labelIndexer, IReadOnlyList<object> objects)
	{
		return null;
	}

	[Token(Token = "0x6000AB3")]
	[Address(RVA = "0x41DD520", Offset = "0x41DD520", VA = "0x41DD520", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
