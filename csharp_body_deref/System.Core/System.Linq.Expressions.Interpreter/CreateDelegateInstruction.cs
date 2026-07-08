using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x2000230")]
internal sealed class CreateDelegateInstruction : Instruction
{
	[Token(Token = "0x4000408")]
	[FieldOffset(Offset = "0x10")]
	private readonly LightDelegateCreator _creator;

	[Token(Token = "0x17000234")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000AE5")]
		[Address(RVA = "0x41DF860", Offset = "0x41DF860", VA = "0x41DF860", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000235")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000AE6")]
		[Address(RVA = "0x41DF880", Offset = "0x41DF880", VA = "0x41DF880", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000236")]
	public override string InstructionName
	{
		[Token(Token = "0x6000AE7")]
		[Address(RVA = "0x41DF890", Offset = "0x41DF890", VA = "0x41DF890", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000AE4")]
	[Address(RVA = "0x41DF830", Offset = "0x41DF830", VA = "0x41DF830")]
	internal CreateDelegateInstruction(LightDelegateCreator delegateCreator)
	{
	}

	[Token(Token = "0x6000AE8")]
	[Address(RVA = "0x41DF8C0", Offset = "0x41DF8C0", VA = "0x41DF8C0", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
