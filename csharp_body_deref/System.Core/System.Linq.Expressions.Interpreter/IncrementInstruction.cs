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
		[Token(Token = "0x6000742")]
		[Address(RVA = "0x44D2660", Offset = "0x44D2660", VA = "0x44D2660", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000743")]
		[Address(RVA = "0x44D25E0", Offset = "0x44D25E0", VA = "0x44D25E0")]
		public IncrementInt16()
		{
		}
	}

	[Token(Token = "0x2000157")]
	private sealed class IncrementInt32 : IncrementInstruction
	{
		[Token(Token = "0x6000744")]
		[Address(RVA = "0x44D27A0", Offset = "0x44D27A0", VA = "0x44D27A0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000745")]
		[Address(RVA = "0x44D25F0", Offset = "0x44D25F0", VA = "0x44D25F0")]
		public IncrementInt32()
		{
		}
	}

	[Token(Token = "0x2000158")]
	private sealed class IncrementInt64 : IncrementInstruction
	{
		[Token(Token = "0x6000746")]
		[Address(RVA = "0x44D28B0", Offset = "0x44D28B0", VA = "0x44D28B0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000747")]
		[Address(RVA = "0x44D2600", Offset = "0x44D2600", VA = "0x44D2600")]
		public IncrementInt64()
		{
		}
	}

	[Token(Token = "0x2000159")]
	private sealed class IncrementUInt16 : IncrementInstruction
	{
		[Token(Token = "0x6000748")]
		[Address(RVA = "0x44D29C0", Offset = "0x44D29C0", VA = "0x44D29C0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000749")]
		[Address(RVA = "0x44D2610", Offset = "0x44D2610", VA = "0x44D2610")]
		public IncrementUInt16()
		{
		}
	}

	[Token(Token = "0x200015A")]
	private sealed class IncrementUInt32 : IncrementInstruction
	{
		[Token(Token = "0x600074A")]
		[Address(RVA = "0x44D2A60", Offset = "0x44D2A60", VA = "0x44D2A60", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x600074B")]
		[Address(RVA = "0x44D2620", Offset = "0x44D2620", VA = "0x44D2620")]
		public IncrementUInt32()
		{
		}
	}

	[Token(Token = "0x200015B")]
	private sealed class IncrementUInt64 : IncrementInstruction
	{
		[Token(Token = "0x600074C")]
		[Address(RVA = "0x44D2B70", Offset = "0x44D2B70", VA = "0x44D2B70", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x600074D")]
		[Address(RVA = "0x44D2630", Offset = "0x44D2630", VA = "0x44D2630")]
		public IncrementUInt64()
		{
		}
	}

	[Token(Token = "0x200015C")]
	private sealed class IncrementSingle : IncrementInstruction
	{
		[Token(Token = "0x600074E")]
		[Address(RVA = "0x44D2C80", Offset = "0x44D2C80", VA = "0x44D2C80", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x600074F")]
		[Address(RVA = "0x44D2640", Offset = "0x44D2640", VA = "0x44D2640")]
		public IncrementSingle()
		{
		}
	}

	[Token(Token = "0x200015D")]
	private sealed class IncrementDouble : IncrementInstruction
	{
		[Token(Token = "0x6000750")]
		[Address(RVA = "0x44D2DA0", Offset = "0x44D2DA0", VA = "0x44D2DA0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000751")]
		[Address(RVA = "0x44D2650", Offset = "0x44D2650", VA = "0x44D2650")]
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
		[Token(Token = "0x600073D")]
		[Address(RVA = "0x44D21C0", Offset = "0x44D21C0", VA = "0x44D21C0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001AE")]
	public override int ProducedStack
	{
		[Token(Token = "0x600073E")]
		[Address(RVA = "0x44D21D0", Offset = "0x44D21D0", VA = "0x44D21D0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001AF")]
	public override string InstructionName
	{
		[Token(Token = "0x600073F")]
		[Address(RVA = "0x44D21E0", Offset = "0x44D21E0", VA = "0x44D21E0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000740")]
	[Address(RVA = "0x44D2210", Offset = "0x44D2210", VA = "0x44D2210")]
	private IncrementInstruction()
	{
	}

	[Token(Token = "0x6000741")]
	[Address(RVA = "0x44D2220", Offset = "0x44D2220", VA = "0x44D2220")]
	public static Instruction Create(Type type)
	{
		return null;
	}
}
