using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x200021F")]
internal sealed class DupInstruction : Instruction
{
	[Token(Token = "0x40003F9")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly DupInstruction Instance;

	[Token(Token = "0x1700022C")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000ABA")]
		[Address(RVA = "0x41DD670", Offset = "0x41DD670", VA = "0x41DD670", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700022D")]
	public override string InstructionName
	{
		[Token(Token = "0x6000ABB")]
		[Address(RVA = "0x41DD680", Offset = "0x41DD680", VA = "0x41DD680", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000AB9")]
	[Address(RVA = "0x41DD660", Offset = "0x41DD660", VA = "0x41DD660")]
	private DupInstruction()
	{
	}

	[Token(Token = "0x6000ABC")]
	[Address(RVA = "0x41DD6B0", Offset = "0x41DD6B0", VA = "0x41DD6B0", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
