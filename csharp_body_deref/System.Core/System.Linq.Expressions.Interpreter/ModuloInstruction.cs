using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20001BB")]
internal abstract class ModuloInstruction : Instruction
{
	[Token(Token = "0x20001BC")]
	private sealed class ModuloInt16 : ModuloInstruction
	{
		[Token(Token = "0x60009B7")]
		[Address(RVA = "0x41D3480", Offset = "0x41D3480", VA = "0x41D3480", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009B8")]
		[Address(RVA = "0x41D3400", Offset = "0x41D3400", VA = "0x41D3400")]
		public ModuloInt16()
		{
		}
	}

	[Token(Token = "0x20001BD")]
	private sealed class ModuloInt32 : ModuloInstruction
	{
		[Token(Token = "0x60009B9")]
		[Address(RVA = "0x41D35E0", Offset = "0x41D35E0", VA = "0x41D35E0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009BA")]
		[Address(RVA = "0x41D3410", Offset = "0x41D3410", VA = "0x41D3410")]
		public ModuloInt32()
		{
		}
	}

	[Token(Token = "0x20001BE")]
	private sealed class ModuloInt64 : ModuloInstruction
	{
		[Token(Token = "0x60009BB")]
		[Address(RVA = "0x41D3870", Offset = "0x41D3870", VA = "0x41D3870", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009BC")]
		[Address(RVA = "0x41D3420", Offset = "0x41D3420", VA = "0x41D3420")]
		public ModuloInt64()
		{
		}
	}

	[Token(Token = "0x20001BF")]
	private sealed class ModuloUInt16 : ModuloInstruction
	{
		[Token(Token = "0x60009BD")]
		[Address(RVA = "0x41D39D0", Offset = "0x41D39D0", VA = "0x41D39D0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009BE")]
		[Address(RVA = "0x41D3430", Offset = "0x41D3430", VA = "0x41D3430")]
		public ModuloUInt16()
		{
		}
	}

	[Token(Token = "0x20001C0")]
	private sealed class ModuloUInt32 : ModuloInstruction
	{
		[Token(Token = "0x60009BF")]
		[Address(RVA = "0x41D3B40", Offset = "0x41D3B40", VA = "0x41D3B40", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009C0")]
		[Address(RVA = "0x41D3440", Offset = "0x41D3440", VA = "0x41D3440")]
		public ModuloUInt32()
		{
		}
	}

	[Token(Token = "0x20001C1")]
	private sealed class ModuloUInt64 : ModuloInstruction
	{
		[Token(Token = "0x60009C1")]
		[Address(RVA = "0x41D3CA0", Offset = "0x41D3CA0", VA = "0x41D3CA0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009C2")]
		[Address(RVA = "0x41D3450", Offset = "0x41D3450", VA = "0x41D3450")]
		public ModuloUInt64()
		{
		}
	}

	[Token(Token = "0x20001C2")]
	private sealed class ModuloSingle : ModuloInstruction
	{
		[Token(Token = "0x60009C3")]
		[Address(RVA = "0x41D3E00", Offset = "0x41D3E00", VA = "0x41D3E00", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009C4")]
		[Address(RVA = "0x41D3460", Offset = "0x41D3460", VA = "0x41D3460")]
		public ModuloSingle()
		{
		}
	}

	[Token(Token = "0x20001C3")]
	private sealed class ModuloDouble : ModuloInstruction
	{
		[Token(Token = "0x60009C5")]
		[Address(RVA = "0x41D3F60", Offset = "0x41D3F60", VA = "0x41D3F60", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009C6")]
		[Address(RVA = "0x41D3470", Offset = "0x41D3470", VA = "0x41D3470")]
		public ModuloDouble()
		{
		}
	}

	[Token(Token = "0x400039E")]
	[FieldOffset(Offset = "0x0")]
	private static Instruction s_Int16;

	[Token(Token = "0x400039F")]
	[FieldOffset(Offset = "0x8")]
	private static Instruction s_Int32;

	[Token(Token = "0x40003A0")]
	[FieldOffset(Offset = "0x10")]
	private static Instruction s_Int64;

	[Token(Token = "0x40003A1")]
	[FieldOffset(Offset = "0x18")]
	private static Instruction s_UInt16;

	[Token(Token = "0x40003A2")]
	[FieldOffset(Offset = "0x20")]
	private static Instruction s_UInt32;

	[Token(Token = "0x40003A3")]
	[FieldOffset(Offset = "0x28")]
	private static Instruction s_UInt64;

	[Token(Token = "0x40003A4")]
	[FieldOffset(Offset = "0x30")]
	private static Instruction s_Single;

	[Token(Token = "0x40003A5")]
	[FieldOffset(Offset = "0x38")]
	private static Instruction s_Double;

	[Token(Token = "0x170001FE")]
	public override int ConsumedStack
	{
		[Token(Token = "0x60009B2")]
		[Address(RVA = "0x41D2FE0", Offset = "0x41D2FE0", VA = "0x41D2FE0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001FF")]
	public override int ProducedStack
	{
		[Token(Token = "0x60009B3")]
		[Address(RVA = "0x41D2FF0", Offset = "0x41D2FF0", VA = "0x41D2FF0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000200")]
	public override string InstructionName
	{
		[Token(Token = "0x60009B4")]
		[Address(RVA = "0x41D3000", Offset = "0x41D3000", VA = "0x41D3000", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60009B5")]
	[Address(RVA = "0x41D3030", Offset = "0x41D3030", VA = "0x41D3030")]
	private ModuloInstruction()
	{
	}

	[Token(Token = "0x60009B6")]
	[Address(RVA = "0x41D3040", Offset = "0x41D3040", VA = "0x41D3040")]
	public static Instruction Create(Type type)
	{
		return null;
	}
}
