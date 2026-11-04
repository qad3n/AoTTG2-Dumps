// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.SubOvfInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x2000229")]
internal abstract class SubOvfInstruction : Instruction
{
	[Token(Token = "0x200022A")]
	private sealed class SubOvfInt16 : SubOvfInstruction
	{
		[Token(Token = "0x6000AD7")]
		[Address(RVA = "0x247F810", Offset = "0x247DE10", VA = "0x18247F810", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000AD8")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public SubOvfInt16()
		{
		}
	}

	[Token(Token = "0x200022B")]
	private sealed class SubOvfInt32 : SubOvfInstruction
	{
		[Token(Token = "0x6000AD9")]
		[Address(RVA = "0x247FB10", Offset = "0x247E110", VA = "0x18247FB10", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000ADA")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public SubOvfInt32()
		{
		}
	}

	[Token(Token = "0x200022C")]
	private sealed class SubOvfInt64 : SubOvfInstruction
	{
		[Token(Token = "0x6000ADB")]
		[Address(RVA = "0x247FD80", Offset = "0x247E380", VA = "0x18247FD80", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000ADC")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public SubOvfInt64()
		{
		}
	}

	[Token(Token = "0x200022D")]
	private sealed class SubOvfUInt16 : SubOvfInstruction
	{
		[Token(Token = "0x6000ADD")]
		[Address(RVA = "0x247FFB0", Offset = "0x247E5B0", VA = "0x18247FFB0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000ADE")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public SubOvfUInt16()
		{
		}
	}

	[Token(Token = "0x200022E")]
	private sealed class SubOvfUInt32 : SubOvfInstruction
	{
		[Token(Token = "0x6000ADF")]
		[Address(RVA = "0x24802B0", Offset = "0x247E8B0", VA = "0x1824802B0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000AE0")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public SubOvfUInt32()
		{
		}
	}

	[Token(Token = "0x200022F")]
	private sealed class SubOvfUInt64 : SubOvfInstruction
	{
		[Token(Token = "0x6000AE1")]
		[Address(RVA = "0x24804C0", Offset = "0x247EAC0", VA = "0x1824804C0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000AE2")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public SubOvfUInt64()
		{
		}
	}

	[Token(Token = "0x4000402")]
	[FieldOffset(Offset = "0x0")]
	private static Instruction s_Int16;

	[Token(Token = "0x4000403")]
	[FieldOffset(Offset = "0x8")]
	private static Instruction s_Int32;

	[Token(Token = "0x4000404")]
	[FieldOffset(Offset = "0x10")]
	private static Instruction s_Int64;

	[Token(Token = "0x4000405")]
	[FieldOffset(Offset = "0x18")]
	private static Instruction s_UInt16;

	[Token(Token = "0x4000406")]
	[FieldOffset(Offset = "0x20")]
	private static Instruction s_UInt32;

	[Token(Token = "0x4000407")]
	[FieldOffset(Offset = "0x28")]
	private static Instruction s_UInt64;

	[Token(Token = "0x17000231")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000AD2")]
		[Address(RVA = "0x846F80", Offset = "0x845580", VA = "0x180846F80", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000232")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000AD3")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000233")]
	public override string InstructionName
	{
		[Token(Token = "0x6000AD4")]
		[Address(RVA = "0x247F7E0", Offset = "0x247DDE0", VA = "0x18247F7E0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000AD5")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	private SubOvfInstruction()
	{
	}

	[Token(Token = "0x6000AD6")]
	[Address(RVA = "0x247F440", Offset = "0x247DA40", VA = "0x18247F440")]
	public static Instruction Create(Type type)
	{
		return null;
	}
}
