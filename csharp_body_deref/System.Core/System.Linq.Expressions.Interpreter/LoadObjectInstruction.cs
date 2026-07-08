using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x200021C")]
internal sealed class LoadObjectInstruction : Instruction
{
	[Token(Token = "0x40003F6")]
	[FieldOffset(Offset = "0x10")]
	private readonly object _value;

	[Token(Token = "0x17000226")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000AAA")]
		[Address(RVA = "0x41DD1A0", Offset = "0x41DD1A0", VA = "0x41DD1A0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000227")]
	public override string InstructionName
	{
		[Token(Token = "0x6000AAB")]
		[Address(RVA = "0x41DD1B0", Offset = "0x41DD1B0", VA = "0x41DD1B0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000AA9")]
	[Address(RVA = "0x41DD170", Offset = "0x41DD170", VA = "0x41DD170")]
	internal LoadObjectInstruction(object value)
	{
	}

	[Token(Token = "0x6000AAC")]
	[Address(RVA = "0x41DD1E0", Offset = "0x41DD1E0", VA = "0x41DD1E0", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}

	[Token(Token = "0x6000AAD")]
	[Address(RVA = "0x41DD260", Offset = "0x41DD260", VA = "0x41DD260", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
