// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.DecrementInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x2000101")]
internal abstract class DecrementInstruction : Instruction
{
	[Token(Token = "0x2000102")]
	private sealed class DecrementInt16 : DecrementInstruction
	{
		[Token(Token = "0x600067C")]
		[Address(RVA = "0x44CA1A0", Offset = "0x44CA1A0", VA = "0x44CA1A0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x600067D")]
		[Address(RVA = "0x44CA120", Offset = "0x44CA120", VA = "0x44CA120")]
		public DecrementInt16()
		{
		}
	}

	[Token(Token = "0x2000103")]
	private sealed class DecrementInt32 : DecrementInstruction
	{
		[Token(Token = "0x600067E")]
		[Address(RVA = "0x44CA220", Offset = "0x44CA220", VA = "0x44CA220", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x600067F")]
		[Address(RVA = "0x44CA130", Offset = "0x44CA130", VA = "0x44CA130")]
		public DecrementInt32()
		{
		}
	}

	[Token(Token = "0x2000104")]
	private sealed class DecrementInt64 : DecrementInstruction
	{
		[Token(Token = "0x6000680")]
		[Address(RVA = "0x44CA290", Offset = "0x44CA290", VA = "0x44CA290", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000681")]
		[Address(RVA = "0x44CA140", Offset = "0x44CA140", VA = "0x44CA140")]
		public DecrementInt64()
		{
		}
	}

	[Token(Token = "0x2000105")]
	private sealed class DecrementUInt16 : DecrementInstruction
	{
		[Token(Token = "0x6000682")]
		[Address(RVA = "0x44CA310", Offset = "0x44CA310", VA = "0x44CA310", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000683")]
		[Address(RVA = "0x44CA150", Offset = "0x44CA150", VA = "0x44CA150")]
		public DecrementUInt16()
		{
		}
	}

	[Token(Token = "0x2000106")]
	private sealed class DecrementUInt32 : DecrementInstruction
	{
		[Token(Token = "0x6000684")]
		[Address(RVA = "0x44CA390", Offset = "0x44CA390", VA = "0x44CA390", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000685")]
		[Address(RVA = "0x44CA160", Offset = "0x44CA160", VA = "0x44CA160")]
		public DecrementUInt32()
		{
		}
	}

	[Token(Token = "0x2000107")]
	private sealed class DecrementUInt64 : DecrementInstruction
	{
		[Token(Token = "0x6000686")]
		[Address(RVA = "0x44CA410", Offset = "0x44CA410", VA = "0x44CA410", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000687")]
		[Address(RVA = "0x44CA170", Offset = "0x44CA170", VA = "0x44CA170")]
		public DecrementUInt64()
		{
		}
	}

	[Token(Token = "0x2000108")]
	private sealed class DecrementSingle : DecrementInstruction
	{
		[Token(Token = "0x6000688")]
		[Address(RVA = "0x44CA490", Offset = "0x44CA490", VA = "0x44CA490", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000689")]
		[Address(RVA = "0x44CA180", Offset = "0x44CA180", VA = "0x44CA180")]
		public DecrementSingle()
		{
		}
	}

	[Token(Token = "0x2000109")]
	private sealed class DecrementDouble : DecrementInstruction
	{
		[Token(Token = "0x600068A")]
		[Address(RVA = "0x44CA520", Offset = "0x44CA520", VA = "0x44CA520", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x600068B")]
		[Address(RVA = "0x44CA190", Offset = "0x44CA190", VA = "0x44CA190")]
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
		[Address(RVA = "0x44C9D00", Offset = "0x44C9D00", VA = "0x44C9D00", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000191")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000678")]
		[Address(RVA = "0x44C9D10", Offset = "0x44C9D10", VA = "0x44C9D10", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000192")]
	public override string InstructionName
	{
		[Token(Token = "0x6000679")]
		[Address(RVA = "0x44C9D20", Offset = "0x44C9D20", VA = "0x44C9D20", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600067A")]
	[Address(RVA = "0x44C9D50", Offset = "0x44C9D50", VA = "0x44C9D50")]
	private DecrementInstruction()
	{
	}

	[Token(Token = "0x600067B")]
	[Address(RVA = "0x44C9D60", Offset = "0x44C9D60", VA = "0x44C9D60")]
	public static Instruction Create(Type type)
	{
		return null;
	}
}
