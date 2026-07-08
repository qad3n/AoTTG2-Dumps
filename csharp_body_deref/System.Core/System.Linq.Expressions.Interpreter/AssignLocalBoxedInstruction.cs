using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20001A9")]
internal sealed class AssignLocalBoxedInstruction : LocalAccessInstruction
{
	[Token(Token = "0x170001E2")]
	public override int ConsumedStack
	{
		[Token(Token = "0x600096A")]
		[Address(RVA = "0x41D1350", Offset = "0x41D1350", VA = "0x41D1350", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001E3")]
	public override int ProducedStack
	{
		[Token(Token = "0x600096B")]
		[Address(RVA = "0x41D1360", Offset = "0x41D1360", VA = "0x41D1360", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001E4")]
	public override string InstructionName
	{
		[Token(Token = "0x600096C")]
		[Address(RVA = "0x41D1370", Offset = "0x41D1370", VA = "0x41D1370", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000969")]
	[Address(RVA = "0x41D1330", Offset = "0x41D1330", VA = "0x41D1330")]
	internal AssignLocalBoxedInstruction(int index)
	{
	}

	[Token(Token = "0x600096D")]
	[Address(RVA = "0x41D13A0", Offset = "0x41D13A0", VA = "0x41D13A0", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
