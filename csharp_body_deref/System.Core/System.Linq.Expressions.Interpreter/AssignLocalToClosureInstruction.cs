using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20001AB")]
internal sealed class AssignLocalToClosureInstruction : LocalAccessInstruction
{
	[Token(Token = "0x170001E7")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000973")]
		[Address(RVA = "0x41D1690", Offset = "0x41D1690", VA = "0x41D1690", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001E8")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000974")]
		[Address(RVA = "0x41D16A0", Offset = "0x41D16A0", VA = "0x41D16A0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001E9")]
	public override string InstructionName
	{
		[Token(Token = "0x6000975")]
		[Address(RVA = "0x41D16B0", Offset = "0x41D16B0", VA = "0x41D16B0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000972")]
	[Address(RVA = "0x41D1670", Offset = "0x41D1670", VA = "0x41D1670")]
	internal AssignLocalToClosureInstruction(int index)
	{
	}

	[Token(Token = "0x6000976")]
	[Address(RVA = "0x41D16E0", Offset = "0x41D16E0", VA = "0x41D16E0", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
