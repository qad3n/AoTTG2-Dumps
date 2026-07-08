using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x200010A")]
internal sealed class DefaultValueInstruction : Instruction
{
	[Token(Token = "0x4000260")]
	[FieldOffset(Offset = "0x10")]
	private readonly Type _type;

	[Token(Token = "0x17000193")]
	public override int ProducedStack
	{
		[Token(Token = "0x600068D")]
		[Address(RVA = "0x41A54E0", Offset = "0x41A54E0", VA = "0x41A54E0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000194")]
	public override string InstructionName
	{
		[Token(Token = "0x600068E")]
		[Address(RVA = "0x41A54F0", Offset = "0x41A54F0", VA = "0x41A54F0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600068C")]
	[Address(RVA = "0x41A54B0", Offset = "0x41A54B0", VA = "0x41A54B0")]
	internal DefaultValueInstruction(Type type)
	{
	}

	[Token(Token = "0x600068F")]
	[Address(RVA = "0x41A5520", Offset = "0x41A5520", VA = "0x41A5520", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}

	[Token(Token = "0x6000690")]
	[Address(RVA = "0x41A5550", Offset = "0x41A5550", VA = "0x41A5550", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
