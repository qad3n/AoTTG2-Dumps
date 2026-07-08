using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20001A7")]
internal sealed class AssignLocalInstruction : LocalAccessInstruction, IBoxableInstruction
{
	[Token(Token = "0x170001DD")]
	public override int ConsumedStack
	{
		[Token(Token = "0x600095F")]
		[Address(RVA = "0x41D10C0", Offset = "0x41D10C0", VA = "0x41D10C0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001DE")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000960")]
		[Address(RVA = "0x41D10D0", Offset = "0x41D10D0", VA = "0x41D10D0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001DF")]
	public override string InstructionName
	{
		[Token(Token = "0x6000961")]
		[Address(RVA = "0x41D10E0", Offset = "0x41D10E0", VA = "0x41D10E0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600095E")]
	[Address(RVA = "0x41D10A0", Offset = "0x41D10A0", VA = "0x41D10A0")]
	internal AssignLocalInstruction(int index)
	{
	}

	[Token(Token = "0x6000962")]
	[Address(RVA = "0x41D1110", Offset = "0x41D1110", VA = "0x41D1110", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}

	[Token(Token = "0x6000963")]
	[Address(RVA = "0x41D1190", Offset = "0x41D1190", VA = "0x41D1190", Slot = "11")]
	public Instruction BoxIfIndexMatches(int index)
	{
		return null;
	}
}
