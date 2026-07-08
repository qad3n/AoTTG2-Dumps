using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20001A6")]
internal sealed class LoadLocalFromClosureBoxedInstruction : LocalAccessInstruction
{
	[Token(Token = "0x170001DB")]
	public override int ProducedStack
	{
		[Token(Token = "0x600095B")]
		[Address(RVA = "0x41D0FD0", Offset = "0x41D0FD0", VA = "0x41D0FD0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001DC")]
	public override string InstructionName
	{
		[Token(Token = "0x600095C")]
		[Address(RVA = "0x41D0FE0", Offset = "0x41D0FE0", VA = "0x41D0FE0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600095A")]
	[Address(RVA = "0x41D0FB0", Offset = "0x41D0FB0", VA = "0x41D0FB0")]
	internal LoadLocalFromClosureBoxedInstruction(int index)
	{
	}

	[Token(Token = "0x600095D")]
	[Address(RVA = "0x41D1010", Offset = "0x41D1010", VA = "0x41D1010", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
