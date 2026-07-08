using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000E2")]
internal sealed class NewArrayInstruction : Instruction
{
	[Token(Token = "0x4000224")]
	[FieldOffset(Offset = "0x10")]
	private readonly Type _elementType;

	[Token(Token = "0x17000146")]
	public override int ConsumedStack
	{
		[Token(Token = "0x60005C8")]
		[Address(RVA = "0x41A0180", Offset = "0x41A0180", VA = "0x41A0180", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000147")]
	public override int ProducedStack
	{
		[Token(Token = "0x60005C9")]
		[Address(RVA = "0x41A0190", Offset = "0x41A0190", VA = "0x41A0190", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000148")]
	public override string InstructionName
	{
		[Token(Token = "0x60005CA")]
		[Address(RVA = "0x41A01A0", Offset = "0x41A01A0", VA = "0x41A01A0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60005C7")]
	[Address(RVA = "0x41A0150", Offset = "0x41A0150", VA = "0x41A0150")]
	internal NewArrayInstruction(Type elementType)
	{
	}

	[Token(Token = "0x60005CB")]
	[Address(RVA = "0x41A01D0", Offset = "0x41A01D0", VA = "0x41A01D0", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
