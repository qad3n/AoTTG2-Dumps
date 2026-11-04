// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.MulOvfInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20001CD")]
internal abstract class MulOvfInstruction : Instruction
{
	[Token(Token = "0x20001CE")]
	private sealed class MulOvfInt16 : MulOvfInstruction
	{
		[Token(Token = "0x60009E0")]
		[Address(RVA = "0x2475C80", Offset = "0x2474280", VA = "0x182475C80", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009E1")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public MulOvfInt16()
		{
		}
	}

	[Token(Token = "0x20001CF")]
	private sealed class MulOvfInt32 : MulOvfInstruction
	{
		[Token(Token = "0x60009E2")]
		[Address(RVA = "0x2475F80", Offset = "0x2474580", VA = "0x182475F80", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009E3")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public MulOvfInt32()
		{
		}
	}

	[Token(Token = "0x20001D0")]
	private sealed class MulOvfInt64 : MulOvfInstruction
	{
		[Token(Token = "0x60009E4")]
		[Address(RVA = "0x24761F0", Offset = "0x24747F0", VA = "0x1824761F0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009E5")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public MulOvfInt64()
		{
		}
	}

	[Token(Token = "0x20001D1")]
	private sealed class MulOvfUInt16 : MulOvfInstruction
	{
		[Token(Token = "0x60009E6")]
		[Address(RVA = "0x2476440", Offset = "0x2474A40", VA = "0x182476440", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009E7")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public MulOvfUInt16()
		{
		}
	}

	[Token(Token = "0x20001D2")]
	private sealed class MulOvfUInt32 : MulOvfInstruction
	{
		[Token(Token = "0x60009E8")]
		[Address(RVA = "0x2476720", Offset = "0x2474D20", VA = "0x182476720", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009E9")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public MulOvfUInt32()
		{
		}
	}

	[Token(Token = "0x20001D3")]
	private sealed class MulOvfUInt64 : MulOvfInstruction
	{
		[Token(Token = "0x60009EA")]
		[Address(RVA = "0x2476930", Offset = "0x2474F30", VA = "0x182476930", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009EB")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public MulOvfUInt64()
		{
		}
	}

	[Token(Token = "0x40003AE")]
	[FieldOffset(Offset = "0x0")]
	private static Instruction s_Int16;

	[Token(Token = "0x40003AF")]
	[FieldOffset(Offset = "0x8")]
	private static Instruction s_Int32;

	[Token(Token = "0x40003B0")]
	[FieldOffset(Offset = "0x10")]
	private static Instruction s_Int64;

	[Token(Token = "0x40003B1")]
	[FieldOffset(Offset = "0x18")]
	private static Instruction s_UInt16;

	[Token(Token = "0x40003B2")]
	[FieldOffset(Offset = "0x20")]
	private static Instruction s_UInt32;

	[Token(Token = "0x40003B3")]
	[FieldOffset(Offset = "0x28")]
	private static Instruction s_UInt64;

	[Token(Token = "0x17000204")]
	public override int ConsumedStack
	{
		[Token(Token = "0x60009DB")]
		[Address(RVA = "0x846F80", Offset = "0x845580", VA = "0x180846F80", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000205")]
	public override int ProducedStack
	{
		[Token(Token = "0x60009DC")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000206")]
	public override string InstructionName
	{
		[Token(Token = "0x60009DD")]
		[Address(RVA = "0x2475C50", Offset = "0x2474250", VA = "0x182475C50", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60009DE")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	private MulOvfInstruction()
	{
	}

	[Token(Token = "0x60009DF")]
	[Address(RVA = "0x24758B0", Offset = "0x2473EB0", VA = "0x1824758B0")]
	public static Instruction Create(Type type)
	{
		return null;
	}
}
