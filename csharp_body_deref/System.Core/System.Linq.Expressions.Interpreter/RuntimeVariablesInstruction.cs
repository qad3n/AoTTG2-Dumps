using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20001B6")]
internal sealed class RuntimeVariablesInstruction : Instruction
{
	[Token(Token = "0x4000390")]
	[FieldOffset(Offset = "0x10")]
	private readonly int _count;

	[Token(Token = "0x170001F5")]
	public override int ProducedStack
	{
		[Token(Token = "0x600099B")]
		[Address(RVA = "0x41D23B0", Offset = "0x41D23B0", VA = "0x41D23B0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001F6")]
	public override int ConsumedStack
	{
		[Token(Token = "0x600099C")]
		[Address(RVA = "0x41D23C0", Offset = "0x41D23C0", VA = "0x41D23C0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001F7")]
	public override string InstructionName
	{
		[Token(Token = "0x600099D")]
		[Address(RVA = "0x41D23D0", Offset = "0x41D23D0", VA = "0x41D23D0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600099A")]
	[Address(RVA = "0x41D2390", Offset = "0x41D2390", VA = "0x41D2390")]
	public RuntimeVariablesInstruction(int count)
	{
	}

	[Token(Token = "0x600099E")]
	[Address(RVA = "0x41D2400", Offset = "0x41D2400", VA = "0x41D2400", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
