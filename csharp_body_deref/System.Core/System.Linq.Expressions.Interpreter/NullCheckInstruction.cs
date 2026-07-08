using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x2000203")]
internal sealed class NullCheckInstruction : Instruction
{
	[Token(Token = "0x40003E0")]
	[FieldOffset(Offset = "0x0")]
	public static readonly Instruction Instance;

	[Token(Token = "0x17000217")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000A5E")]
		[Address(RVA = "0x41D9C10", Offset = "0x41D9C10", VA = "0x41D9C10", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000218")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000A5F")]
		[Address(RVA = "0x41D9C20", Offset = "0x41D9C20", VA = "0x41D9C20", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000219")]
	public override string InstructionName
	{
		[Token(Token = "0x6000A60")]
		[Address(RVA = "0x41D9C30", Offset = "0x41D9C30", VA = "0x41D9C30", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A5D")]
	[Address(RVA = "0x41D9C00", Offset = "0x41D9C00", VA = "0x41D9C00")]
	private NullCheckInstruction()
	{
	}

	[Token(Token = "0x6000A61")]
	[Address(RVA = "0x41D9C60", Offset = "0x41D9C60", VA = "0x41D9C60", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
