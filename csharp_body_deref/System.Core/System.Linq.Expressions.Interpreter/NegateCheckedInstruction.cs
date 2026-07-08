using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20001DA")]
internal abstract class NegateCheckedInstruction : Instruction
{
	[Token(Token = "0x20001DB")]
	private sealed class NegateCheckedInt32 : NegateCheckedInstruction
	{
		[Token(Token = "0x6000A01")]
		[Address(RVA = "0x41D6A30", Offset = "0x41D6A30", VA = "0x41D6A30", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A02")]
		[Address(RVA = "0x41D6A10", Offset = "0x41D6A10", VA = "0x41D6A10")]
		public NegateCheckedInt32()
		{
		}
	}

	[Token(Token = "0x20001DC")]
	private sealed class NegateCheckedInt16 : NegateCheckedInstruction
	{
		[Token(Token = "0x6000A03")]
		[Address(RVA = "0x41D6B20", Offset = "0x41D6B20", VA = "0x41D6B20", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A04")]
		[Address(RVA = "0x41D6A00", Offset = "0x41D6A00", VA = "0x41D6A00")]
		public NegateCheckedInt16()
		{
		}
	}

	[Token(Token = "0x20001DD")]
	private sealed class NegateCheckedInt64 : NegateCheckedInstruction
	{
		[Token(Token = "0x6000A05")]
		[Address(RVA = "0x41D6C30", Offset = "0x41D6C30", VA = "0x41D6C30", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A06")]
		[Address(RVA = "0x41D6A20", Offset = "0x41D6A20", VA = "0x41D6A20")]
		public NegateCheckedInt64()
		{
		}
	}

	[Token(Token = "0x40003B9")]
	[FieldOffset(Offset = "0x0")]
	private static Instruction s_Int16;

	[Token(Token = "0x40003BA")]
	[FieldOffset(Offset = "0x8")]
	private static Instruction s_Int32;

	[Token(Token = "0x40003BB")]
	[FieldOffset(Offset = "0x10")]
	private static Instruction s_Int64;

	[Token(Token = "0x1700020A")]
	public override int ConsumedStack
	{
		[Token(Token = "0x60009FC")]
		[Address(RVA = "0x41D67D0", Offset = "0x41D67D0", VA = "0x41D67D0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700020B")]
	public override int ProducedStack
	{
		[Token(Token = "0x60009FD")]
		[Address(RVA = "0x41D67E0", Offset = "0x41D67E0", VA = "0x41D67E0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700020C")]
	public override string InstructionName
	{
		[Token(Token = "0x60009FE")]
		[Address(RVA = "0x41D67F0", Offset = "0x41D67F0", VA = "0x41D67F0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60009FF")]
	[Address(RVA = "0x41D6820", Offset = "0x41D6820", VA = "0x41D6820")]
	private NegateCheckedInstruction()
	{
	}

	[Token(Token = "0x6000A00")]
	[Address(RVA = "0x41D6830", Offset = "0x41D6830", VA = "0x41D6830")]
	public static Instruction Create(Type type)
	{
		return null;
	}
}
