// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.IncrementInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x2000155")]
internal abstract class IncrementInstruction : Instruction
{
	[Token(Token = "0x2000156")]
	private sealed class IncrementInt16 : IncrementInstruction
	{
		[Token(Token = "0x6000741")]
		[Address(RVA = "0x24492C0", Offset = "0x24478C0", VA = "0x1824492C0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000742")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public IncrementInt16()
		{
		}
	}

	[Token(Token = "0x2000157")]
	private sealed class IncrementInt32 : IncrementInstruction
	{
		[Token(Token = "0x6000743")]
		[Address(RVA = "0x2449410", Offset = "0x2447A10", VA = "0x182449410", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000744")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public IncrementInt32()
		{
		}
	}

	[Token(Token = "0x2000158")]
	private sealed class IncrementInt64 : IncrementInstruction
	{
		[Token(Token = "0x6000745")]
		[Address(RVA = "0x2449540", Offset = "0x2447B40", VA = "0x182449540", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000746")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public IncrementInt64()
		{
		}
	}

	[Token(Token = "0x2000159")]
	private sealed class IncrementUInt16 : IncrementInstruction
	{
		[Token(Token = "0x6000747")]
		[Address(RVA = "0x24497C0", Offset = "0x2447DC0", VA = "0x1824497C0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000748")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public IncrementUInt16()
		{
		}
	}

	[Token(Token = "0x200015A")]
	private sealed class IncrementUInt32 : IncrementInstruction
	{
		[Token(Token = "0x6000749")]
		[Address(RVA = "0x2449910", Offset = "0x2447F10", VA = "0x182449910", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x600074A")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public IncrementUInt32()
		{
		}
	}

	[Token(Token = "0x200015B")]
	private sealed class IncrementUInt64 : IncrementInstruction
	{
		[Token(Token = "0x600074B")]
		[Address(RVA = "0x2449A50", Offset = "0x2448050", VA = "0x182449A50", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x600074C")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public IncrementUInt64()
		{
		}
	}

	[Token(Token = "0x200015C")]
	private sealed class IncrementSingle : IncrementInstruction
	{
		[Token(Token = "0x600074D")]
		[Address(RVA = "0x2449680", Offset = "0x2447C80", VA = "0x182449680", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x600074E")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public IncrementSingle()
		{
		}
	}

	[Token(Token = "0x200015D")]
	private sealed class IncrementDouble : IncrementInstruction
	{
		[Token(Token = "0x600074F")]
		[Address(RVA = "0x2448CD0", Offset = "0x24472D0", VA = "0x182448CD0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000750")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public IncrementDouble()
		{
		}
	}

	[Token(Token = "0x40002BA")]
	[FieldOffset(Offset = "0x0")]
	private static Instruction s_Int16;

	[Token(Token = "0x40002BB")]
	[FieldOffset(Offset = "0x8")]
	private static Instruction s_Int32;

	[Token(Token = "0x40002BC")]
	[FieldOffset(Offset = "0x10")]
	private static Instruction s_Int64;

	[Token(Token = "0x40002BD")]
	[FieldOffset(Offset = "0x18")]
	private static Instruction s_UInt16;

	[Token(Token = "0x40002BE")]
	[FieldOffset(Offset = "0x20")]
	private static Instruction s_UInt32;

	[Token(Token = "0x40002BF")]
	[FieldOffset(Offset = "0x28")]
	private static Instruction s_UInt64;

	[Token(Token = "0x40002C0")]
	[FieldOffset(Offset = "0x30")]
	private static Instruction s_Single;

	[Token(Token = "0x40002C1")]
	[FieldOffset(Offset = "0x38")]
	private static Instruction s_Double;

	[Token(Token = "0x170001AD")]
	public override int ConsumedStack
	{
		[Token(Token = "0x600073C")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001AE")]
	public override int ProducedStack
	{
		[Token(Token = "0x600073D")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001AF")]
	public override string InstructionName
	{
		[Token(Token = "0x600073E")]
		[Address(RVA = "0x2449290", Offset = "0x2447890", VA = "0x182449290", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600073F")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	private IncrementInstruction()
	{
	}

	[Token(Token = "0x6000740")]
	[Address(RVA = "0x2448E10", Offset = "0x2447410", VA = "0x182448E10")]
	public static Instruction Create(Type type)
	{
		return null;
	}
}
