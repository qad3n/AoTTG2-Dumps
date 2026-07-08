using System.Diagnostics.CodeAnalysis;
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000FA")]
internal sealed class EnterExceptionFilterInstruction : Instruction
{
	[Token(Token = "0x4000248")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly EnterExceptionFilterInstruction Instance;

	[Token(Token = "0x1700017F")]
	public override string InstructionName
	{
		[Token(Token = "0x6000652")]
		[Address(RVA = "0x41A4290", Offset = "0x41A4290", VA = "0x41A4290", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000180")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000653")]
		[Address(RVA = "0x41A42C0", Offset = "0x41A42C0", VA = "0x41A42C0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000651")]
	[Address(RVA = "0x41A4280", Offset = "0x41A4280", VA = "0x41A4280")]
	private EnterExceptionFilterInstruction()
	{
	}

	[Token(Token = "0x6000654")]
	[Address(RVA = "0x41A42D0", Offset = "0x41A42D0", VA = "0x41A42D0", Slot = "8")]
	[ExcludeFromCodeCoverage]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
