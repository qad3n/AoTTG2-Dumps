// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.DivInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x200010B")]
internal abstract class DivInstruction : Instruction
{
	[Token(Token = "0x200010C")]
	private sealed class DivInt16 : DivInstruction
	{
		[Token(Token = "0x6000696")]
		[Address(RVA = "0x44CAB50", Offset = "0x44CAB50", VA = "0x44CAB50", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000697")]
		[Address(RVA = "0x44CAAD0", Offset = "0x44CAAD0", VA = "0x44CAAD0")]
		public DivInt16()
		{
		}
	}

	[Token(Token = "0x200010D")]
	private sealed class DivInt32 : DivInstruction
	{
		[Token(Token = "0x6000698")]
		[Address(RVA = "0x44CACB0", Offset = "0x44CACB0", VA = "0x44CACB0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000699")]
		[Address(RVA = "0x44CAAE0", Offset = "0x44CAAE0", VA = "0x44CAAE0")]
		public DivInt32()
		{
		}
	}

	[Token(Token = "0x200010E")]
	private sealed class DivInt64 : DivInstruction
	{
		[Token(Token = "0x600069A")]
		[Address(RVA = "0x44CAE00", Offset = "0x44CAE00", VA = "0x44CAE00", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x600069B")]
		[Address(RVA = "0x44CAAF0", Offset = "0x44CAAF0", VA = "0x44CAAF0")]
		public DivInt64()
		{
		}
	}

	[Token(Token = "0x200010F")]
	private sealed class DivUInt16 : DivInstruction
	{
		[Token(Token = "0x600069C")]
		[Address(RVA = "0x44CAF60", Offset = "0x44CAF60", VA = "0x44CAF60", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x600069D")]
		[Address(RVA = "0x44CAB00", Offset = "0x44CAB00", VA = "0x44CAB00")]
		public DivUInt16()
		{
		}
	}

	[Token(Token = "0x2000110")]
	private sealed class DivUInt32 : DivInstruction
	{
		[Token(Token = "0x600069E")]
		[Address(RVA = "0x44CB0D0", Offset = "0x44CB0D0", VA = "0x44CB0D0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x600069F")]
		[Address(RVA = "0x44CAB10", Offset = "0x44CAB10", VA = "0x44CAB10")]
		public DivUInt32()
		{
		}
	}

	[Token(Token = "0x2000111")]
	private sealed class DivUInt64 : DivInstruction
	{
		[Token(Token = "0x60006A0")]
		[Address(RVA = "0x44CB230", Offset = "0x44CB230", VA = "0x44CB230", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60006A1")]
		[Address(RVA = "0x44CAB20", Offset = "0x44CAB20", VA = "0x44CAB20")]
		public DivUInt64()
		{
		}
	}

	[Token(Token = "0x2000112")]
	private sealed class DivSingle : DivInstruction
	{
		[Token(Token = "0x60006A2")]
		[Address(RVA = "0x44CB390", Offset = "0x44CB390", VA = "0x44CB390", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60006A3")]
		[Address(RVA = "0x44CAB30", Offset = "0x44CAB30", VA = "0x44CAB30")]
		public DivSingle()
		{
		}
	}

	[Token(Token = "0x2000113")]
	private sealed class DivDouble : DivInstruction
	{
		[Token(Token = "0x60006A4")]
		[Address(RVA = "0x44CB4F0", Offset = "0x44CB4F0", VA = "0x44CB4F0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60006A5")]
		[Address(RVA = "0x44CAB40", Offset = "0x44CAB40", VA = "0x44CAB40")]
		public DivDouble()
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

	[Token(Token = "0x17000195")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000691")]
		[Address(RVA = "0x44CA6B0", Offset = "0x44CA6B0", VA = "0x44CA6B0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000196")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000692")]
		[Address(RVA = "0x44CA6C0", Offset = "0x44CA6C0", VA = "0x44CA6C0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000197")]
	public override string InstructionName
	{
		[Token(Token = "0x6000693")]
		[Address(RVA = "0x44CA6D0", Offset = "0x44CA6D0", VA = "0x44CA6D0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000694")]
	[Address(RVA = "0x44CA700", Offset = "0x44CA700", VA = "0x44CA700")]
	private DivInstruction()
	{
	}

	[Token(Token = "0x6000695")]
	[Address(RVA = "0x44CA710", Offset = "0x44CA710", VA = "0x44CA710")]
	public static Instruction Create(Type type)
	{
		return null;
	}
}
