using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20001CD")]
internal abstract class MulOvfInstruction : Instruction
{
	[Token(Token = "0x20001CE")]
	private sealed class MulOvfInt16 : MulOvfInstruction
	{
		[Token(Token = "0x60009E1")]
		[Address(RVA = "0x41D5420", Offset = "0x41D5420", VA = "0x41D5420", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009E2")]
		[Address(RVA = "0x41D53C0", Offset = "0x41D53C0", VA = "0x41D53C0")]
		public MulOvfInt16()
		{
		}
	}

	[Token(Token = "0x20001CF")]
	private sealed class MulOvfInt32 : MulOvfInstruction
	{
		[Token(Token = "0x60009E3")]
		[Address(RVA = "0x41D56D0", Offset = "0x41D56D0", VA = "0x41D56D0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009E4")]
		[Address(RVA = "0x41D53D0", Offset = "0x41D53D0", VA = "0x41D53D0")]
		public MulOvfInt32()
		{
		}
	}

	[Token(Token = "0x20001D0")]
	private sealed class MulOvfInt64 : MulOvfInstruction
	{
		[Token(Token = "0x60009E5")]
		[Address(RVA = "0x41D5910", Offset = "0x41D5910", VA = "0x41D5910", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009E6")]
		[Address(RVA = "0x41D53E0", Offset = "0x41D53E0", VA = "0x41D53E0")]
		public MulOvfInt64()
		{
		}
	}

	[Token(Token = "0x20001D1")]
	private sealed class MulOvfUInt16 : MulOvfInstruction
	{
		[Token(Token = "0x60009E7")]
		[Address(RVA = "0x41D5B50", Offset = "0x41D5B50", VA = "0x41D5B50", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009E8")]
		[Address(RVA = "0x41D53F0", Offset = "0x41D53F0", VA = "0x41D53F0")]
		public MulOvfUInt16()
		{
		}
	}

	[Token(Token = "0x20001D2")]
	private sealed class MulOvfUInt32 : MulOvfInstruction
	{
		[Token(Token = "0x60009E9")]
		[Address(RVA = "0x41D5DF0", Offset = "0x41D5DF0", VA = "0x41D5DF0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009EA")]
		[Address(RVA = "0x41D5400", Offset = "0x41D5400", VA = "0x41D5400")]
		public MulOvfUInt32()
		{
		}
	}

	[Token(Token = "0x20001D3")]
	private sealed class MulOvfUInt64 : MulOvfInstruction
	{
		[Token(Token = "0x60009EB")]
		[Address(RVA = "0x41D5FE0", Offset = "0x41D5FE0", VA = "0x41D5FE0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009EC")]
		[Address(RVA = "0x41D5410", Offset = "0x41D5410", VA = "0x41D5410")]
		public MulOvfUInt64()
		{
		}
	}

	[Token(Token = "0x40003AE")]
	[FieldOffset(Offset = "0x0")]
	private static Instruction s_Int16;

	[Token(Token = "0x40003AF")]
	[FieldOffset(Offset = "0x8")]
	private static Instruction s_Int32;

	[Token(Token = "0x40003B0")]
	[FieldOffset(Offset = "0x10")]
	private static Instruction s_Int64;

	[Token(Token = "0x40003B1")]
	[FieldOffset(Offset = "0x18")]
	private static Instruction s_UInt16;

	[Token(Token = "0x40003B2")]
	[FieldOffset(Offset = "0x20")]
	private static Instruction s_UInt32;

	[Token(Token = "0x40003B3")]
	[FieldOffset(Offset = "0x28")]
	private static Instruction s_UInt64;

	[Token(Token = "0x17000204")]
	public override int ConsumedStack
	{
		[Token(Token = "0x60009DC")]
		[Address(RVA = "0x41D5070", Offset = "0x41D5070", VA = "0x41D5070", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000205")]
	public override int ProducedStack
	{
		[Token(Token = "0x60009DD")]
		[Address(RVA = "0x41D5080", Offset = "0x41D5080", VA = "0x41D5080", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000206")]
	public override string InstructionName
	{
		[Token(Token = "0x60009DE")]
		[Address(RVA = "0x41D5090", Offset = "0x41D5090", VA = "0x41D5090", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60009DF")]
	[Address(RVA = "0x41D50C0", Offset = "0x41D50C0", VA = "0x41D50C0")]
	private MulOvfInstruction()
	{
	}

	[Token(Token = "0x60009E0")]
	[Address(RVA = "0x41D50D0", Offset = "0x41D50D0", VA = "0x41D50D0")]
	public static Instruction Create(Type type)
	{
		return null;
	}
}
