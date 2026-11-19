// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.IncrementInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x2000156")]
internal abstract class IncrementInstruction : Instruction
{
	[Token(Token = "0x2000157")]
	private sealed class IncrementInt16 : IncrementInstruction
	{
		[Token(Token = "0x600074C")]
		[Address(RVA = "0x5DE82E0", Offset = "0x5DE72E0", VA = "0x5DE82E0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x600074D")]
		[Address(RVA = "0x5DE8260", Offset = "0x5DE7260", VA = "0x5DE8260")]
		public IncrementInt16()
		{
		}
	}

	[Token(Token = "0x2000158")]
	private sealed class IncrementInt32 : IncrementInstruction
	{
		[Token(Token = "0x600074E")]
		[Address(RVA = "0x5DE8420", Offset = "0x5DE7420", VA = "0x5DE8420", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x600074F")]
		[Address(RVA = "0x5DE8270", Offset = "0x5DE7270", VA = "0x5DE8270")]
		public IncrementInt32()
		{
		}
	}

	[Token(Token = "0x2000159")]
	private sealed class IncrementInt64 : IncrementInstruction
	{
		[Token(Token = "0x6000750")]
		[Address(RVA = "0x5DE8530", Offset = "0x5DE7530", VA = "0x5DE8530", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000751")]
		[Address(RVA = "0x5DE8280", Offset = "0x5DE7280", VA = "0x5DE8280")]
		public IncrementInt64()
		{
		}
	}

	[Token(Token = "0x200015A")]
	private sealed class IncrementUInt16 : IncrementInstruction
	{
		[Token(Token = "0x6000752")]
		[Address(RVA = "0x5DE8640", Offset = "0x5DE7640", VA = "0x5DE8640", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000753")]
		[Address(RVA = "0x5DE8290", Offset = "0x5DE7290", VA = "0x5DE8290")]
		public IncrementUInt16()
		{
		}
	}

	[Token(Token = "0x200015B")]
	private sealed class IncrementUInt32 : IncrementInstruction
	{
		[Token(Token = "0x6000754")]
		[Address(RVA = "0x5DE86E0", Offset = "0x5DE76E0", VA = "0x5DE86E0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000755")]
		[Address(RVA = "0x5DE82A0", Offset = "0x5DE72A0", VA = "0x5DE82A0")]
		public IncrementUInt32()
		{
		}
	}

	[Token(Token = "0x200015C")]
	private sealed class IncrementUInt64 : IncrementInstruction
	{
		[Token(Token = "0x6000756")]
		[Address(RVA = "0x5DE87F0", Offset = "0x5DE77F0", VA = "0x5DE87F0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000757")]
		[Address(RVA = "0x5DE82B0", Offset = "0x5DE72B0", VA = "0x5DE82B0")]
		public IncrementUInt64()
		{
		}
	}

	[Token(Token = "0x200015D")]
	private sealed class IncrementSingle : IncrementInstruction
	{
		[Token(Token = "0x6000758")]
		[Address(RVA = "0x5DE8900", Offset = "0x5DE7900", VA = "0x5DE8900", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000759")]
		[Address(RVA = "0x5DE82C0", Offset = "0x5DE72C0", VA = "0x5DE82C0")]
		public IncrementSingle()
		{
		}
	}

	[Token(Token = "0x200015E")]
	private sealed class IncrementDouble : IncrementInstruction
	{
		[Token(Token = "0x600075A")]
		[Address(RVA = "0x5DE8A20", Offset = "0x5DE7A20", VA = "0x5DE8A20", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x600075B")]
		[Address(RVA = "0x5DE82D0", Offset = "0x5DE72D0", VA = "0x5DE82D0")]
		public IncrementDouble()
		{
		}
	}

	[Token(Token = "0x40002C3")]
	[FieldOffset(Offset = "0x0")]
	private static Instruction s_Int16;

	[Token(Token = "0x40002C4")]
	[FieldOffset(Offset = "0x8")]
	private static Instruction s_Int32;

	[Token(Token = "0x40002C5")]
	[FieldOffset(Offset = "0x10")]
	private static Instruction s_Int64;

	[Token(Token = "0x40002C6")]
	[FieldOffset(Offset = "0x18")]
	private static Instruction s_UInt16;

	[Token(Token = "0x40002C7")]
	[FieldOffset(Offset = "0x20")]
	private static Instruction s_UInt32;

	[Token(Token = "0x40002C8")]
	[FieldOffset(Offset = "0x28")]
	private static Instruction s_UInt64;

	[Token(Token = "0x40002C9")]
	[FieldOffset(Offset = "0x30")]
	private static Instruction s_Single;

	[Token(Token = "0x40002CA")]
	[FieldOffset(Offset = "0x38")]
	private static Instruction s_Double;

	[Token(Token = "0x170001AF")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000747")]
		[Address(RVA = "0x5DE7E40", Offset = "0x5DE6E40", VA = "0x5DE7E40", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001B0")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000748")]
		[Address(RVA = "0x5DE7E50", Offset = "0x5DE6E50", VA = "0x5DE7E50", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001B1")]
	public override string InstructionName
	{
		[Token(Token = "0x6000749")]
		[Address(RVA = "0x5DE7E60", Offset = "0x5DE6E60", VA = "0x5DE7E60", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600074A")]
	[Address(RVA = "0x5DE7E90", Offset = "0x5DE6E90", VA = "0x5DE7E90")]
	private IncrementInstruction()
	{
	}

	[Token(Token = "0x600074B")]
	[Address(RVA = "0x5DE7EA0", Offset = "0x5DE6EA0", VA = "0x5DE7EA0")]
	public static Instruction Create(Type type)
	{
		return null;
	}
}
