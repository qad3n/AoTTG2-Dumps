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
		[Token(Token = "0x600067B")]
		[Address(RVA = "0x242C0C0", Offset = "0x242A6C0", VA = "0x18242C0C0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x600067C")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public DecrementInt16()
		{
		}
	}

	[Token(Token = "0x2000103")]
	private sealed class DecrementInt32 : DecrementInstruction
	{
		[Token(Token = "0x600067D")]
		[Address(RVA = "0x242C140", Offset = "0x242A740", VA = "0x18242C140", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x600067E")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public DecrementInt32()
		{
		}
	}

	[Token(Token = "0x2000104")]
	private sealed class DecrementInt64 : DecrementInstruction
	{
		[Token(Token = "0x600067F")]
		[Address(RVA = "0x242C1C0", Offset = "0x242A7C0", VA = "0x18242C1C0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000680")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public DecrementInt64()
		{
		}
	}

	[Token(Token = "0x2000105")]
	private sealed class DecrementUInt16 : DecrementInstruction
	{
		[Token(Token = "0x6000681")]
		[Address(RVA = "0x242C2E0", Offset = "0x242A8E0", VA = "0x18242C2E0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000682")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public DecrementUInt16()
		{
		}
	}

	[Token(Token = "0x2000106")]
	private sealed class DecrementUInt32 : DecrementInstruction
	{
		[Token(Token = "0x6000683")]
		[Address(RVA = "0x242C360", Offset = "0x242A960", VA = "0x18242C360", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000684")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public DecrementUInt32()
		{
		}
	}

	[Token(Token = "0x2000107")]
	private sealed class DecrementUInt64 : DecrementInstruction
	{
		[Token(Token = "0x6000685")]
		[Address(RVA = "0x242C3E0", Offset = "0x242A9E0", VA = "0x18242C3E0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000686")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public DecrementUInt64()
		{
		}
	}

	[Token(Token = "0x2000108")]
	private sealed class DecrementSingle : DecrementInstruction
	{
		[Token(Token = "0x6000687")]
		[Address(RVA = "0x242C250", Offset = "0x242A850", VA = "0x18242C250", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000688")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public DecrementSingle()
		{
		}
	}

	[Token(Token = "0x2000109")]
	private sealed class DecrementDouble : DecrementInstruction
	{
		[Token(Token = "0x6000689")]
		[Address(RVA = "0x242BB80", Offset = "0x242A180", VA = "0x18242BB80", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x600068A")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
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
		[Token(Token = "0x6000676")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000191")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000677")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000192")]
	public override string InstructionName
	{
		[Token(Token = "0x6000678")]
		[Address(RVA = "0x242C090", Offset = "0x242A690", VA = "0x18242C090", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000679")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	private DecrementInstruction()
	{
	}

	[Token(Token = "0x600067A")]
	[Address(RVA = "0x242BC10", Offset = "0x242A210", VA = "0x18242BC10")]
	public static Instruction Create(Type type)
	{
		return null;
	}
}
