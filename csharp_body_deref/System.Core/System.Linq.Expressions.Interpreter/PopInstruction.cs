using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x200021E")]
internal sealed class PopInstruction : Instruction
{
	[Token(Token = "0x40003F8")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly PopInstruction Instance;

	[Token(Token = "0x1700022A")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000AB5")]
		[Address(RVA = "0x41DD590", Offset = "0x41DD590", VA = "0x41DD590", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700022B")]
	public override string InstructionName
	{
		[Token(Token = "0x6000AB6")]
		[Address(RVA = "0x41DD5A0", Offset = "0x41DD5A0", VA = "0x41DD5A0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000AB4")]
	[Address(RVA = "0x41DD580", Offset = "0x41DD580", VA = "0x41DD580")]
	private PopInstruction()
	{
	}

	[Token(Token = "0x6000AB7")]
	[Address(RVA = "0x41DD5D0", Offset = "0x41DD5D0", VA = "0x41DD5D0", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
