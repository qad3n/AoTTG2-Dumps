using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000E4")]
internal sealed class GetArrayItemInstruction : Instruction
{
	[Token(Token = "0x4000227")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly GetArrayItemInstruction Instance;

	[Token(Token = "0x1700014C")]
	public override int ConsumedStack
	{
		[Token(Token = "0x60005D2")]
		[Address(RVA = "0x41A04A0", Offset = "0x41A04A0", VA = "0x41A04A0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700014D")]
	public override int ProducedStack
	{
		[Token(Token = "0x60005D3")]
		[Address(RVA = "0x41A04B0", Offset = "0x41A04B0", VA = "0x41A04B0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700014E")]
	public override string InstructionName
	{
		[Token(Token = "0x60005D4")]
		[Address(RVA = "0x41A04C0", Offset = "0x41A04C0", VA = "0x41A04C0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60005D1")]
	[Address(RVA = "0x41A0490", Offset = "0x41A0490", VA = "0x41A0490")]
	private GetArrayItemInstruction()
	{
	}

	[Token(Token = "0x60005D5")]
	[Address(RVA = "0x41A04F0", Offset = "0x41A04F0", VA = "0x41A04F0", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
