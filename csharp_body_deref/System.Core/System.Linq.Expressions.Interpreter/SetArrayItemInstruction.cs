using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000E5")]
internal sealed class SetArrayItemInstruction : Instruction
{
	[Token(Token = "0x4000228")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly SetArrayItemInstruction Instance;

	[Token(Token = "0x1700014F")]
	public override int ConsumedStack
	{
		[Token(Token = "0x60005D8")]
		[Address(RVA = "0x41A0600", Offset = "0x41A0600", VA = "0x41A0600", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000150")]
	public override string InstructionName
	{
		[Token(Token = "0x60005D9")]
		[Address(RVA = "0x41A0610", Offset = "0x41A0610", VA = "0x41A0610", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60005D7")]
	[Address(RVA = "0x41A05F0", Offset = "0x41A05F0", VA = "0x41A05F0")]
	private SetArrayItemInstruction()
	{
	}

	[Token(Token = "0x60005DA")]
	[Address(RVA = "0x41A0640", Offset = "0x41A0640", VA = "0x41A0640", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
