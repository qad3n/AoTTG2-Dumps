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
		[Token(Token = "0x60009CC")]
		[Address(RVA = "0x44F9670", Offset = "0x44F9670", VA = "0x44F9670", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009CD")]
		[Address(RVA = "0x44F95F0", Offset = "0x44F95F0", VA = "0x44F95F0")]
		public MulInt16()
		{
		}
	}

	[Token(Token = "0x20001C6")]
	private sealed class MulInt32 : MulInstruction
	{
		[Token(Token = "0x60009CE")]
		[Address(RVA = "0x44F97D0", Offset = "0x44F97D0", VA = "0x44F97D0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009CF")]
		[Address(RVA = "0x44F9600", Offset = "0x44F9600", VA = "0x44F9600")]
		public MulInt32()
		{
		}
	}

	[Token(Token = "0x20001C7")]
	private sealed class MulInt64 : MulInstruction
	{
		[Token(Token = "0x60009D0")]
		[Address(RVA = "0x44F9920", Offset = "0x44F9920", VA = "0x44F9920", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009D1")]
		[Address(RVA = "0x44F9610", Offset = "0x44F9610", VA = "0x44F9610")]
		public MulInt64()
		{
		}
	}

	[Token(Token = "0x20001C8")]
	private sealed class MulUInt16 : MulInstruction
	{
		[Token(Token = "0x60009D2")]
		[Address(RVA = "0x44F9A80", Offset = "0x44F9A80", VA = "0x44F9A80", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009D3")]
		[Address(RVA = "0x44F9620", Offset = "0x44F9620", VA = "0x44F9620")]
		public MulUInt16()
		{
		}
	}

	[Token(Token = "0x20001C9")]
	private sealed class MulUInt32 : MulInstruction
	{
		[Token(Token = "0x60009D4")]
		[Address(RVA = "0x44F9BE0", Offset = "0x44F9BE0", VA = "0x44F9BE0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009D5")]
		[Address(RVA = "0x44F9630", Offset = "0x44F9630", VA = "0x44F9630")]
		public MulUInt32()
		{
		}
	}

	[Token(Token = "0x20001CA")]
	private sealed class MulUInt64 : MulInstruction
	{
		[Token(Token = "0x60009D6")]
		[Address(RVA = "0x44F9D40", Offset = "0x44F9D40", VA = "0x44F9D40", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009D7")]
		[Address(RVA = "0x44F9640", Offset = "0x44F9640", VA = "0x44F9640")]
		public MulUInt64()
		{
		}
	}

	[Token(Token = "0x20001CB")]
	private sealed class MulSingle : MulInstruction
	{
		[Token(Token = "0x60009D8")]
		[Address(RVA = "0x44F9EA0", Offset = "0x44F9EA0", VA = "0x44F9EA0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009D9")]
		[Address(RVA = "0x44F9650", Offset = "0x44F9650", VA = "0x44F9650")]
		public MulSingle()
		{
		}
	}

	[Token(Token = "0x20001CC")]
	private sealed class MulDouble : MulInstruction
	{
		[Token(Token = "0x60009DA")]
		[Address(RVA = "0x44FA000", Offset = "0x44FA000", VA = "0x44FA000", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009DB")]
		[Address(RVA = "0x44F9660", Offset = "0x44F9660", VA = "0x44F9660")]
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
		[Token(Token = "0x60009C7")]
		[Address(RVA = "0x44F91D0", Offset = "0x44F91D0", VA = "0x44F91D0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000202")]
	public override int ProducedStack
	{
		[Token(Token = "0x60009C8")]
		[Address(RVA = "0x44F91E0", Offset = "0x44F91E0", VA = "0x44F91E0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000203")]
	public override string InstructionName
	{
		[Token(Token = "0x60009C9")]
		[Address(RVA = "0x44F91F0", Offset = "0x44F91F0", VA = "0x44F91F0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60009CA")]
	[Address(RVA = "0x44F9220", Offset = "0x44F9220", VA = "0x44F9220")]
	private MulInstruction()
	{
	}

	[Token(Token = "0x60009CB")]
	[Address(RVA = "0x44F9230", Offset = "0x44F9230", VA = "0x44F9230")]
	public static Instruction Create(Type type)
	{
		return null;
	}
}
