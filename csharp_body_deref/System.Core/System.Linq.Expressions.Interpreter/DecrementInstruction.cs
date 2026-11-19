// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.DecrementInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x2000102")]
internal abstract class DecrementInstruction : Instruction
{
	[Token(Token = "0x2000103")]
	private sealed class DecrementInt16 : DecrementInstruction
	{
		[Token(Token = "0x6000686")]
		[Address(RVA = "0x5DDFD10", Offset = "0x5DDED10", VA = "0x5DDFD10", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000687")]
		[Address(RVA = "0x5DDFC90", Offset = "0x5DDEC90", VA = "0x5DDFC90")]
		public DecrementInt16()
		{
		}
	}

	[Token(Token = "0x2000104")]
	private sealed class DecrementInt32 : DecrementInstruction
	{
		[Token(Token = "0x6000688")]
		[Address(RVA = "0x5DDFD90", Offset = "0x5DDED90", VA = "0x5DDFD90", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000689")]
		[Address(RVA = "0x5DDFCA0", Offset = "0x5DDECA0", VA = "0x5DDFCA0")]
		public DecrementInt32()
		{
		}
	}

	[Token(Token = "0x2000105")]
	private sealed class DecrementInt64 : DecrementInstruction
	{
		[Token(Token = "0x600068A")]
		[Address(RVA = "0x5DDFE00", Offset = "0x5DDEE00", VA = "0x5DDFE00", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x600068B")]
		[Address(RVA = "0x5DDFCB0", Offset = "0x5DDECB0", VA = "0x5DDFCB0")]
		public DecrementInt64()
		{
		}
	}

	[Token(Token = "0x2000106")]
	private sealed class DecrementUInt16 : DecrementInstruction
	{
		[Token(Token = "0x600068C")]
		[Address(RVA = "0x5DDFE80", Offset = "0x5DDEE80", VA = "0x5DDFE80", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x600068D")]
		[Address(RVA = "0x5DDFCC0", Offset = "0x5DDECC0", VA = "0x5DDFCC0")]
		public DecrementUInt16()
		{
		}
	}

	[Token(Token = "0x2000107")]
	private sealed class DecrementUInt32 : DecrementInstruction
	{
		[Token(Token = "0x600068E")]
		[Address(RVA = "0x5DDFF00", Offset = "0x5DDEF00", VA = "0x5DDFF00", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x600068F")]
		[Address(RVA = "0x5DDFCD0", Offset = "0x5DDECD0", VA = "0x5DDFCD0")]
		public DecrementUInt32()
		{
		}
	}

	[Token(Token = "0x2000108")]
	private sealed class DecrementUInt64 : DecrementInstruction
	{
		[Token(Token = "0x6000690")]
		[Address(RVA = "0x5DDFF80", Offset = "0x5DDEF80", VA = "0x5DDFF80", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000691")]
		[Address(RVA = "0x5DDFCE0", Offset = "0x5DDECE0", VA = "0x5DDFCE0")]
		public DecrementUInt64()
		{
		}
	}

	[Token(Token = "0x2000109")]
	private sealed class DecrementSingle : DecrementInstruction
	{
		[Token(Token = "0x6000692")]
		[Address(RVA = "0x5DE0000", Offset = "0x5DDF000", VA = "0x5DE0000", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000693")]
		[Address(RVA = "0x5DDFCF0", Offset = "0x5DDECF0", VA = "0x5DDFCF0")]
		public DecrementSingle()
		{
		}
	}

	[Token(Token = "0x200010A")]
	private sealed class DecrementDouble : DecrementInstruction
	{
		[Token(Token = "0x6000694")]
		[Address(RVA = "0x5DE0090", Offset = "0x5DDF090", VA = "0x5DE0090", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000695")]
		[Address(RVA = "0x5DDFD00", Offset = "0x5DDED00", VA = "0x5DDFD00")]
		public DecrementDouble()
		{
		}
	}

	[Token(Token = "0x4000261")]
	[FieldOffset(Offset = "0x0")]
	private static Instruction s_Int16;

	[Token(Token = "0x4000262")]
	[FieldOffset(Offset = "0x8")]
	private static Instruction s_Int32;

	[Token(Token = "0x4000263")]
	[FieldOffset(Offset = "0x10")]
	private static Instruction s_Int64;

	[Token(Token = "0x4000264")]
	[FieldOffset(Offset = "0x18")]
	private static Instruction s_UInt16;

	[Token(Token = "0x4000265")]
	[FieldOffset(Offset = "0x20")]
	private static Instruction s_UInt32;

	[Token(Token = "0x4000266")]
	[FieldOffset(Offset = "0x28")]
	private static Instruction s_UInt64;

	[Token(Token = "0x4000267")]
	[FieldOffset(Offset = "0x30")]
	private static Instruction s_Single;

	[Token(Token = "0x4000268")]
	[FieldOffset(Offset = "0x38")]
	private static Instruction s_Double;

	[Token(Token = "0x17000192")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000681")]
		[Address(RVA = "0x5DDF870", Offset = "0x5DDE870", VA = "0x5DDF870", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000193")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000682")]
		[Address(RVA = "0x5DDF880", Offset = "0x5DDE880", VA = "0x5DDF880", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000194")]
	public override string InstructionName
	{
		[Token(Token = "0x6000683")]
		[Address(RVA = "0x5DDF890", Offset = "0x5DDE890", VA = "0x5DDF890", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000684")]
	[Address(RVA = "0x5DDF8C0", Offset = "0x5DDE8C0", VA = "0x5DDF8C0")]
	private DecrementInstruction()
	{
	}

	[Token(Token = "0x6000685")]
	[Address(RVA = "0x5DDF8D0", Offset = "0x5DDE8D0", VA = "0x5DDF8D0")]
	public static Instruction Create(Type type)
	{
		return null;
	}
}
