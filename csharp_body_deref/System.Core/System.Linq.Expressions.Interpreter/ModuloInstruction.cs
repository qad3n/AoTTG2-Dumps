// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.ModuloInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20001BB")]
internal abstract class ModuloInstruction : Instruction
{
	[Token(Token = "0x20001BC")]
	private sealed class ModuloInt16 : ModuloInstruction
	{
		[Token(Token = "0x60009B6")]
		[Address(RVA = "0x2474470", Offset = "0x2472A70", VA = "0x182474470", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009B7")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public ModuloInt16()
		{
		}
	}

	[Token(Token = "0x20001BD")]
	private sealed class ModuloInt32 : ModuloInstruction
	{
		[Token(Token = "0x60009B8")]
		[Address(RVA = "0x24745E0", Offset = "0x2472BE0", VA = "0x1824745E0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009B9")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public ModuloInt32()
		{
		}
	}

	[Token(Token = "0x20001BE")]
	private sealed class ModuloInt64 : ModuloInstruction
	{
		[Token(Token = "0x60009BA")]
		[Address(RVA = "0x2474740", Offset = "0x2472D40", VA = "0x182474740", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009BB")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public ModuloInt64()
		{
		}
	}

	[Token(Token = "0x20001BF")]
	private sealed class ModuloUInt16 : ModuloInstruction
	{
		[Token(Token = "0x60009BC")]
		[Address(RVA = "0x2474A20", Offset = "0x2473020", VA = "0x182474A20", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009BD")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public ModuloUInt16()
		{
		}
	}

	[Token(Token = "0x20001C0")]
	private sealed class ModuloUInt32 : ModuloInstruction
	{
		[Token(Token = "0x60009BE")]
		[Address(RVA = "0x2474B90", Offset = "0x2473190", VA = "0x182474B90", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009BF")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public ModuloUInt32()
		{
		}
	}

	[Token(Token = "0x20001C1")]
	private sealed class ModuloUInt64 : ModuloInstruction
	{
		[Token(Token = "0x60009C0")]
		[Address(RVA = "0x2474D00", Offset = "0x2473300", VA = "0x182474D00", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009C1")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public ModuloUInt64()
		{
		}
	}

	[Token(Token = "0x20001C2")]
	private sealed class ModuloSingle : ModuloInstruction
	{
		[Token(Token = "0x60009C2")]
		[Address(RVA = "0x24748B0", Offset = "0x2472EB0", VA = "0x1824748B0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009C3")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public ModuloSingle()
		{
		}
	}

	[Token(Token = "0x20001C3")]
	private sealed class ModuloDouble : ModuloInstruction
	{
		[Token(Token = "0x60009C4")]
		[Address(RVA = "0x2473E50", Offset = "0x2472450", VA = "0x182473E50", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009C5")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
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
		[Token(Token = "0x60009B1")]
		[Address(RVA = "0x846F80", Offset = "0x845580", VA = "0x180846F80", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001FF")]
	public override int ProducedStack
	{
		[Token(Token = "0x60009B2")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000200")]
	public override string InstructionName
	{
		[Token(Token = "0x60009B3")]
		[Address(RVA = "0x2474440", Offset = "0x2472A40", VA = "0x182474440", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60009B4")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	private ModuloInstruction()
	{
	}

	[Token(Token = "0x60009B5")]
	[Address(RVA = "0x2473FC0", Offset = "0x24725C0", VA = "0x182473FC0")]
	public static Instruction Create(Type type)
	{
		return null;
	}
}
