// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.MulInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20001C4")]
internal abstract class MulInstruction : Instruction
{
	[Token(Token = "0x20001C5")]
	private sealed class MulInt16 : MulInstruction
	{
		[Token(Token = "0x60009CB")]
		[Address(RVA = "0x2475490", Offset = "0x2473A90", VA = "0x182475490", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009CC")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public MulInt16()
		{
		}
	}

	[Token(Token = "0x20001C6")]
	private sealed class MulInt32 : MulInstruction
	{
		[Token(Token = "0x60009CD")]
		[Address(RVA = "0x24755F0", Offset = "0x2473BF0", VA = "0x1824755F0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009CE")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public MulInt32()
		{
		}
	}

	[Token(Token = "0x20001C7")]
	private sealed class MulInt64 : MulInstruction
	{
		[Token(Token = "0x60009CF")]
		[Address(RVA = "0x2475750", Offset = "0x2473D50", VA = "0x182475750", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009D0")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public MulInt64()
		{
		}
	}

	[Token(Token = "0x20001C8")]
	private sealed class MulUInt16 : MulInstruction
	{
		[Token(Token = "0x60009D1")]
		[Address(RVA = "0x2476CB0", Offset = "0x24752B0", VA = "0x182476CB0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009D2")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public MulUInt16()
		{
		}
	}

	[Token(Token = "0x20001C9")]
	private sealed class MulUInt32 : MulInstruction
	{
		[Token(Token = "0x60009D3")]
		[Address(RVA = "0x2476E10", Offset = "0x2475410", VA = "0x182476E10", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009D4")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public MulUInt32()
		{
		}
	}

	[Token(Token = "0x20001CA")]
	private sealed class MulUInt64 : MulInstruction
	{
		[Token(Token = "0x60009D5")]
		[Address(RVA = "0x2476F70", Offset = "0x2475570", VA = "0x182476F70", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009D6")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public MulUInt64()
		{
		}
	}

	[Token(Token = "0x20001CB")]
	private sealed class MulSingle : MulInstruction
	{
		[Token(Token = "0x60009D7")]
		[Address(RVA = "0x2476B40", Offset = "0x2475140", VA = "0x182476B40", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009D8")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public MulSingle()
		{
		}
	}

	[Token(Token = "0x20001CC")]
	private sealed class MulDouble : MulInstruction
	{
		[Token(Token = "0x60009D9")]
		[Address(RVA = "0x2474E70", Offset = "0x2473470", VA = "0x182474E70", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009DA")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public MulDouble()
		{
		}
	}

	[Token(Token = "0x40003A6")]
	[FieldOffset(Offset = "0x0")]
	private static Instruction s_Int16;

	[Token(Token = "0x40003A7")]
	[FieldOffset(Offset = "0x8")]
	private static Instruction s_Int32;

	[Token(Token = "0x40003A8")]
	[FieldOffset(Offset = "0x10")]
	private static Instruction s_Int64;

	[Token(Token = "0x40003A9")]
	[FieldOffset(Offset = "0x18")]
	private static Instruction s_UInt16;

	[Token(Token = "0x40003AA")]
	[FieldOffset(Offset = "0x20")]
	private static Instruction s_UInt32;

	[Token(Token = "0x40003AB")]
	[FieldOffset(Offset = "0x28")]
	private static Instruction s_UInt64;

	[Token(Token = "0x40003AC")]
	[FieldOffset(Offset = "0x30")]
	private static Instruction s_Single;

	[Token(Token = "0x40003AD")]
	[FieldOffset(Offset = "0x38")]
	private static Instruction s_Double;

	[Token(Token = "0x17000201")]
	public override int ConsumedStack
	{
		[Token(Token = "0x60009C6")]
		[Address(RVA = "0x846F80", Offset = "0x845580", VA = "0x180846F80", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000202")]
	public override int ProducedStack
	{
		[Token(Token = "0x60009C7")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000203")]
	public override string InstructionName
	{
		[Token(Token = "0x60009C8")]
		[Address(RVA = "0x2475460", Offset = "0x2473A60", VA = "0x182475460", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60009C9")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	private MulInstruction()
	{
	}

	[Token(Token = "0x60009CA")]
	[Address(RVA = "0x2474FE0", Offset = "0x24735E0", VA = "0x182474FE0")]
	public static Instruction Create(Type type)
	{
		return null;
	}
}
