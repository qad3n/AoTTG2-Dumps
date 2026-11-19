// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.ModuloInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20001BC")]
internal abstract class ModuloInstruction : Instruction
{
	[Token(Token = "0x20001BD")]
	private sealed class ModuloInt16 : ModuloInstruction
	{
		[Token(Token = "0x60009C1")]
		[Address(RVA = "0x5E0D8D0", Offset = "0x5E0C8D0", VA = "0x5E0D8D0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009C2")]
		[Address(RVA = "0x5E0D850", Offset = "0x5E0C850", VA = "0x5E0D850")]
		public ModuloInt16()
		{
		}
	}

	[Token(Token = "0x20001BE")]
	private sealed class ModuloInt32 : ModuloInstruction
	{
		[Token(Token = "0x60009C3")]
		[Address(RVA = "0x5E0DA30", Offset = "0x5E0CA30", VA = "0x5E0DA30", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009C4")]
		[Address(RVA = "0x5E0D860", Offset = "0x5E0C860", VA = "0x5E0D860")]
		public ModuloInt32()
		{
		}
	}

	[Token(Token = "0x20001BF")]
	private sealed class ModuloInt64 : ModuloInstruction
	{
		[Token(Token = "0x60009C5")]
		[Address(RVA = "0x5E0DCC0", Offset = "0x5E0CCC0", VA = "0x5E0DCC0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009C6")]
		[Address(RVA = "0x5E0D870", Offset = "0x5E0C870", VA = "0x5E0D870")]
		public ModuloInt64()
		{
		}
	}

	[Token(Token = "0x20001C0")]
	private sealed class ModuloUInt16 : ModuloInstruction
	{
		[Token(Token = "0x60009C7")]
		[Address(RVA = "0x5E0DE40", Offset = "0x5E0CE40", VA = "0x5E0DE40", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009C8")]
		[Address(RVA = "0x5E0D880", Offset = "0x5E0C880", VA = "0x5E0D880")]
		public ModuloUInt16()
		{
		}
	}

	[Token(Token = "0x20001C1")]
	private sealed class ModuloUInt32 : ModuloInstruction
	{
		[Token(Token = "0x60009C9")]
		[Address(RVA = "0x5E0DFA0", Offset = "0x5E0CFA0", VA = "0x5E0DFA0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009CA")]
		[Address(RVA = "0x5E0D890", Offset = "0x5E0C890", VA = "0x5E0D890")]
		public ModuloUInt32()
		{
		}
	}

	[Token(Token = "0x20001C2")]
	private sealed class ModuloUInt64 : ModuloInstruction
	{
		[Token(Token = "0x60009CB")]
		[Address(RVA = "0x5E0E100", Offset = "0x5E0D100", VA = "0x5E0E100", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009CC")]
		[Address(RVA = "0x5E0D8A0", Offset = "0x5E0C8A0", VA = "0x5E0D8A0")]
		public ModuloUInt64()
		{
		}
	}

	[Token(Token = "0x20001C3")]
	private sealed class ModuloSingle : ModuloInstruction
	{
		[Token(Token = "0x60009CD")]
		[Address(RVA = "0x5E0E280", Offset = "0x5E0D280", VA = "0x5E0E280", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009CE")]
		[Address(RVA = "0x5E0D8B0", Offset = "0x5E0C8B0", VA = "0x5E0D8B0")]
		public ModuloSingle()
		{
		}
	}

	[Token(Token = "0x20001C4")]
	private sealed class ModuloDouble : ModuloInstruction
	{
		[Token(Token = "0x60009CF")]
		[Address(RVA = "0x5E0E3E0", Offset = "0x5E0D3E0", VA = "0x5E0E3E0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009D0")]
		[Address(RVA = "0x5E0D8C0", Offset = "0x5E0C8C0", VA = "0x5E0D8C0")]
		public ModuloDouble()
		{
		}
	}

	[Token(Token = "0x40003A7")]
	[FieldOffset(Offset = "0x0")]
	private static Instruction s_Int16;

	[Token(Token = "0x40003A8")]
	[FieldOffset(Offset = "0x8")]
	private static Instruction s_Int32;

	[Token(Token = "0x40003A9")]
	[FieldOffset(Offset = "0x10")]
	private static Instruction s_Int64;

	[Token(Token = "0x40003AA")]
	[FieldOffset(Offset = "0x18")]
	private static Instruction s_UInt16;

	[Token(Token = "0x40003AB")]
	[FieldOffset(Offset = "0x20")]
	private static Instruction s_UInt32;

	[Token(Token = "0x40003AC")]
	[FieldOffset(Offset = "0x28")]
	private static Instruction s_UInt64;

	[Token(Token = "0x40003AD")]
	[FieldOffset(Offset = "0x30")]
	private static Instruction s_Single;

	[Token(Token = "0x40003AE")]
	[FieldOffset(Offset = "0x38")]
	private static Instruction s_Double;

	[Token(Token = "0x17000200")]
	public override int ConsumedStack
	{
		[Token(Token = "0x60009BC")]
		[Address(RVA = "0x5E0D430", Offset = "0x5E0C430", VA = "0x5E0D430", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000201")]
	public override int ProducedStack
	{
		[Token(Token = "0x60009BD")]
		[Address(RVA = "0x5E0D440", Offset = "0x5E0C440", VA = "0x5E0D440", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000202")]
	public override string InstructionName
	{
		[Token(Token = "0x60009BE")]
		[Address(RVA = "0x5E0D450", Offset = "0x5E0C450", VA = "0x5E0D450", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60009BF")]
	[Address(RVA = "0x5E0D480", Offset = "0x5E0C480", VA = "0x5E0D480")]
	private ModuloInstruction()
	{
	}

	[Token(Token = "0x60009C0")]
	[Address(RVA = "0x5E0D490", Offset = "0x5E0C490", VA = "0x5E0D490")]
	public static Instruction Create(Type type)
	{
		return null;
	}
}
