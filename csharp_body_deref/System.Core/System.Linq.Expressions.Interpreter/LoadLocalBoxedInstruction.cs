using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20001A4")]
internal sealed class LoadLocalBoxedInstruction : LocalAccessInstruction
{
	[Token(Token = "0x170001D7")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000953")]
		[Address(RVA = "0x41D0C60", Offset = "0x41D0C60", VA = "0x41D0C60", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001D8")]
	public override string InstructionName
	{
		[Token(Token = "0x6000954")]
		[Address(RVA = "0x41D0C70", Offset = "0x41D0C70", VA = "0x41D0C70", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000952")]
	[Address(RVA = "0x41D0C40", Offset = "0x41D0C40", VA = "0x41D0C40")]
	internal LoadLocalBoxedInstruction(int index)
	{
	}

	[Token(Token = "0x6000955")]
	[Address(RVA = "0x41D0CA0", Offset = "0x41D0CA0", VA = "0x41D0CA0", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
