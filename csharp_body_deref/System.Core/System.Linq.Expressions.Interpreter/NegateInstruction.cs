using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20001D4")]
internal abstract class NegateInstruction : Instruction
{
	[Token(Token = "0x20001D5")]
	private sealed class NegateInt16 : NegateInstruction
	{
		[Token(Token = "0x60009F2")]
		[Address(RVA = "0x41D6540", Offset = "0x41D6540", VA = "0x41D6540", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009F3")]
		[Address(RVA = "0x41D64F0", Offset = "0x41D64F0", VA = "0x41D64F0")]
		public NegateInt16()
		{
		}
	}

	[Token(Token = "0x20001D6")]
	private sealed class NegateInt32 : NegateInstruction
	{
		[Token(Token = "0x60009F4")]
		[Address(RVA = "0x41D65C0", Offset = "0x41D65C0", VA = "0x41D65C0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009F5")]
		[Address(RVA = "0x41D6500", Offset = "0x41D6500", VA = "0x41D6500")]
		public NegateInt32()
		{
		}
	}

	[Token(Token = "0x20001D7")]
	private sealed class NegateInt64 : NegateInstruction
	{
		[Token(Token = "0x60009F6")]
		[Address(RVA = "0x41D6630", Offset = "0x41D6630", VA = "0x41D6630", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009F7")]
		[Address(RVA = "0x41D6510", Offset = "0x41D6510", VA = "0x41D6510")]
		public NegateInt64()
		{
		}
	}

	[Token(Token = "0x20001D8")]
	private sealed class NegateSingle : NegateInstruction
	{
		[Token(Token = "0x60009F8")]
		[Address(RVA = "0x41D66B0", Offset = "0x41D66B0", VA = "0x41D66B0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009F9")]
		[Address(RVA = "0x41D6520", Offset = "0x41D6520", VA = "0x41D6520")]
		public NegateSingle()
		{
		}
	}

	[Token(Token = "0x20001D9")]
	private sealed class NegateDouble : NegateInstruction
	{
		[Token(Token = "0x60009FA")]
		[Address(RVA = "0x41D6740", Offset = "0x41D6740", VA = "0x41D6740", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009FB")]
		[Address(RVA = "0x41D6530", Offset = "0x41D6530", VA = "0x41D6530")]
		public NegateDouble()
		{
		}
	}

	[Token(Token = "0x40003B4")]
	[FieldOffset(Offset = "0x0")]
	private static Instruction s_Int16;

	[Token(Token = "0x40003B5")]
	[FieldOffset(Offset = "0x8")]
	private static Instruction s_Int32;

	[Token(Token = "0x40003B6")]
	[FieldOffset(Offset = "0x10")]
	private static Instruction s_Int64;

	[Token(Token = "0x40003B7")]
	[FieldOffset(Offset = "0x18")]
	private static Instruction s_Single;

	[Token(Token = "0x40003B8")]
	[FieldOffset(Offset = "0x20")]
	private static Instruction s_Double;

	[Token(Token = "0x17000207")]
	public override int ConsumedStack
	{
		[Token(Token = "0x60009ED")]
		[Address(RVA = "0x41D61F0", Offset = "0x41D61F0", VA = "0x41D61F0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000208")]
	public override int ProducedStack
	{
		[Token(Token = "0x60009EE")]
		[Address(RVA = "0x41D6200", Offset = "0x41D6200", VA = "0x41D6200", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000209")]
	public override string InstructionName
	{
		[Token(Token = "0x60009EF")]
		[Address(RVA = "0x41D6210", Offset = "0x41D6210", VA = "0x41D6210", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60009F0")]
	[Address(RVA = "0x41D6240", Offset = "0x41D6240", VA = "0x41D6240")]
	private NegateInstruction()
	{
	}

	[Token(Token = "0x60009F1")]
	[Address(RVA = "0x41D6250", Offset = "0x41D6250", VA = "0x41D6250")]
	public static Instruction Create(Type type)
	{
		return null;
	}
}
