using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20001C4")]
internal abstract class MulInstruction : Instruction
{
	[Token(Token = "0x20001C5")]
	private sealed class MulInt16 : MulInstruction
	{
		[Token(Token = "0x60009CC")]
		[Address(RVA = "0x41D4570", Offset = "0x41D4570", VA = "0x41D4570", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009CD")]
		[Address(RVA = "0x41D44F0", Offset = "0x41D44F0", VA = "0x41D44F0")]
		public MulInt16()
		{
		}
	}

	[Token(Token = "0x20001C6")]
	private sealed class MulInt32 : MulInstruction
	{
		[Token(Token = "0x60009CE")]
		[Address(RVA = "0x41D46D0", Offset = "0x41D46D0", VA = "0x41D46D0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009CF")]
		[Address(RVA = "0x41D4500", Offset = "0x41D4500", VA = "0x41D4500")]
		public MulInt32()
		{
		}
	}

	[Token(Token = "0x20001C7")]
	private sealed class MulInt64 : MulInstruction
	{
		[Token(Token = "0x60009D0")]
		[Address(RVA = "0x41D4820", Offset = "0x41D4820", VA = "0x41D4820", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009D1")]
		[Address(RVA = "0x41D4510", Offset = "0x41D4510", VA = "0x41D4510")]
		public MulInt64()
		{
		}
	}

	[Token(Token = "0x20001C8")]
	private sealed class MulUInt16 : MulInstruction
	{
		[Token(Token = "0x60009D2")]
		[Address(RVA = "0x41D4980", Offset = "0x41D4980", VA = "0x41D4980", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009D3")]
		[Address(RVA = "0x41D4520", Offset = "0x41D4520", VA = "0x41D4520")]
		public MulUInt16()
		{
		}
	}

	[Token(Token = "0x20001C9")]
	private sealed class MulUInt32 : MulInstruction
	{
		[Token(Token = "0x60009D4")]
		[Address(RVA = "0x41D4AE0", Offset = "0x41D4AE0", VA = "0x41D4AE0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009D5")]
		[Address(RVA = "0x41D4530", Offset = "0x41D4530", VA = "0x41D4530")]
		public MulUInt32()
		{
		}
	}

	[Token(Token = "0x20001CA")]
	private sealed class MulUInt64 : MulInstruction
	{
		[Token(Token = "0x60009D6")]
		[Address(RVA = "0x41D4C40", Offset = "0x41D4C40", VA = "0x41D4C40", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009D7")]
		[Address(RVA = "0x41D4540", Offset = "0x41D4540", VA = "0x41D4540")]
		public MulUInt64()
		{
		}
	}

	[Token(Token = "0x20001CB")]
	private sealed class MulSingle : MulInstruction
	{
		[Token(Token = "0x60009D8")]
		[Address(RVA = "0x41D4DA0", Offset = "0x41D4DA0", VA = "0x41D4DA0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009D9")]
		[Address(RVA = "0x41D4550", Offset = "0x41D4550", VA = "0x41D4550")]
		public MulSingle()
		{
		}
	}

	[Token(Token = "0x20001CC")]
	private sealed class MulDouble : MulInstruction
	{
		[Token(Token = "0x60009DA")]
		[Address(RVA = "0x41D4F00", Offset = "0x41D4F00", VA = "0x41D4F00", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009DB")]
		[Address(RVA = "0x41D4560", Offset = "0x41D4560", VA = "0x41D4560")]
		public MulDouble()
		{
		}
	}

	[Token(Token = "0x40003A6")]
	[FieldOffset(Offset = "0x0")]
	private static Instruction s_Int16;

	[Token(Token = "0x40003A7")]
	[FieldOffset(Offset = "0x8")]
	private static Instruction s_Int32;

	[Token(Token = "0x40003A8")]
	[FieldOffset(Offset = "0x10")]
	private static Instruction s_Int64;

	[Token(Token = "0x40003A9")]
	[FieldOffset(Offset = "0x18")]
	private static Instruction s_UInt16;

	[Token(Token = "0x40003AA")]
	[FieldOffset(Offset = "0x20")]
	private static Instruction s_UInt32;

	[Token(Token = "0x40003AB")]
	[FieldOffset(Offset = "0x28")]
	private static Instruction s_UInt64;

	[Token(Token = "0x40003AC")]
	[FieldOffset(Offset = "0x30")]
	private static Instruction s_Single;

	[Token(Token = "0x40003AD")]
	[FieldOffset(Offset = "0x38")]
	private static Instruction s_Double;

	[Token(Token = "0x17000201")]
	public override int ConsumedStack
	{
		[Token(Token = "0x60009C7")]
		[Address(RVA = "0x41D40D0", Offset = "0x41D40D0", VA = "0x41D40D0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000202")]
	public override int ProducedStack
	{
		[Token(Token = "0x60009C8")]
		[Address(RVA = "0x41D40E0", Offset = "0x41D40E0", VA = "0x41D40E0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000203")]
	public override string InstructionName
	{
		[Token(Token = "0x60009C9")]
		[Address(RVA = "0x41D40F0", Offset = "0x41D40F0", VA = "0x41D40F0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60009CA")]
	[Address(RVA = "0x41D4120", Offset = "0x41D4120", VA = "0x41D4120")]
	private MulInstruction()
	{
	}

	[Token(Token = "0x60009CB")]
	[Address(RVA = "0x41D4130", Offset = "0x41D4130", VA = "0x41D4130")]
	public static Instruction Create(Type type)
	{
		return null;
	}
}
