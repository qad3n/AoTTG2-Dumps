using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x2000101")]
internal abstract class DecrementInstruction : Instruction
{
	[Token(Token = "0x2000102")]
	private sealed class DecrementInt16 : DecrementInstruction
	{
		[Token(Token = "0x600067C")]
		[Address(RVA = "0x41A50A0", Offset = "0x41A50A0", VA = "0x41A50A0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x600067D")]
		[Address(RVA = "0x41A5020", Offset = "0x41A5020", VA = "0x41A5020")]
		public DecrementInt16()
		{
		}
	}

	[Token(Token = "0x2000103")]
	private sealed class DecrementInt32 : DecrementInstruction
	{
		[Token(Token = "0x600067E")]
		[Address(RVA = "0x41A5120", Offset = "0x41A5120", VA = "0x41A5120", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x600067F")]
		[Address(RVA = "0x41A5030", Offset = "0x41A5030", VA = "0x41A5030")]
		public DecrementInt32()
		{
		}
	}

	[Token(Token = "0x2000104")]
	private sealed class DecrementInt64 : DecrementInstruction
	{
		[Token(Token = "0x6000680")]
		[Address(RVA = "0x41A5190", Offset = "0x41A5190", VA = "0x41A5190", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000681")]
		[Address(RVA = "0x41A5040", Offset = "0x41A5040", VA = "0x41A5040")]
		public DecrementInt64()
		{
		}
	}

	[Token(Token = "0x2000105")]
	private sealed class DecrementUInt16 : DecrementInstruction
	{
		[Token(Token = "0x6000682")]
		[Address(RVA = "0x41A5210", Offset = "0x41A5210", VA = "0x41A5210", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000683")]
		[Address(RVA = "0x41A5050", Offset = "0x41A5050", VA = "0x41A5050")]
		public DecrementUInt16()
		{
		}
	}

	[Token(Token = "0x2000106")]
	private sealed class DecrementUInt32 : DecrementInstruction
	{
		[Token(Token = "0x6000684")]
		[Address(RVA = "0x41A5290", Offset = "0x41A5290", VA = "0x41A5290", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000685")]
		[Address(RVA = "0x41A5060", Offset = "0x41A5060", VA = "0x41A5060")]
		public DecrementUInt32()
		{
		}
	}

	[Token(Token = "0x2000107")]
	private sealed class DecrementUInt64 : DecrementInstruction
	{
		[Token(Token = "0x6000686")]
		[Address(RVA = "0x41A5310", Offset = "0x41A5310", VA = "0x41A5310", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000687")]
		[Address(RVA = "0x41A5070", Offset = "0x41A5070", VA = "0x41A5070")]
		public DecrementUInt64()
		{
		}
	}

	[Token(Token = "0x2000108")]
	private sealed class DecrementSingle : DecrementInstruction
	{
		[Token(Token = "0x6000688")]
		[Address(RVA = "0x41A5390", Offset = "0x41A5390", VA = "0x41A5390", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000689")]
		[Address(RVA = "0x41A5080", Offset = "0x41A5080", VA = "0x41A5080")]
		public DecrementSingle()
		{
		}
	}

	[Token(Token = "0x2000109")]
	private sealed class DecrementDouble : DecrementInstruction
	{
		[Token(Token = "0x600068A")]
		[Address(RVA = "0x41A5420", Offset = "0x41A5420", VA = "0x41A5420", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x600068B")]
		[Address(RVA = "0x41A5090", Offset = "0x41A5090", VA = "0x41A5090")]
		public DecrementDouble()
		{
		}
	}

	[Token(Token = "0x4000258")]
	[FieldOffset(Offset = "0x0")]
	private static Instruction s_Int16;

	[Token(Token = "0x4000259")]
	[FieldOffset(Offset = "0x8")]
	private static Instruction s_Int32;

	[Token(Token = "0x400025A")]
	[FieldOffset(Offset = "0x10")]
	private static Instruction s_Int64;

	[Token(Token = "0x400025B")]
	[FieldOffset(Offset = "0x18")]
	private static Instruction s_UInt16;

	[Token(Token = "0x400025C")]
	[FieldOffset(Offset = "0x20")]
	private static Instruction s_UInt32;

	[Token(Token = "0x400025D")]
	[FieldOffset(Offset = "0x28")]
	private static Instruction s_UInt64;

	[Token(Token = "0x400025E")]
	[FieldOffset(Offset = "0x30")]
	private static Instruction s_Single;

	[Token(Token = "0x400025F")]
	[FieldOffset(Offset = "0x38")]
	private static Instruction s_Double;

	[Token(Token = "0x17000190")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000677")]
		[Address(RVA = "0x41A4C00", Offset = "0x41A4C00", VA = "0x41A4C00", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000191")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000678")]
		[Address(RVA = "0x41A4C10", Offset = "0x41A4C10", VA = "0x41A4C10", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000192")]
	public override string InstructionName
	{
		[Token(Token = "0x6000679")]
		[Address(RVA = "0x41A4C20", Offset = "0x41A4C20", VA = "0x41A4C20", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600067A")]
	[Address(RVA = "0x41A4C50", Offset = "0x41A4C50", VA = "0x41A4C50")]
	private DecrementInstruction()
	{
	}

	[Token(Token = "0x600067B")]
	[Address(RVA = "0x41A4C60", Offset = "0x41A4C60", VA = "0x41A4C60")]
	public static Instruction Create(Type type)
	{
		return null;
	}
}
