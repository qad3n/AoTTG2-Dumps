using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x200010B")]
internal abstract class DivInstruction : Instruction
{
	[Token(Token = "0x200010C")]
	private sealed class DivInt16 : DivInstruction
	{
		[Token(Token = "0x6000696")]
		[Address(RVA = "0x41A5A50", Offset = "0x41A5A50", VA = "0x41A5A50", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000697")]
		[Address(RVA = "0x41A59D0", Offset = "0x41A59D0", VA = "0x41A59D0")]
		public DivInt16()
		{
		}
	}

	[Token(Token = "0x200010D")]
	private sealed class DivInt32 : DivInstruction
	{
		[Token(Token = "0x6000698")]
		[Address(RVA = "0x41A5BB0", Offset = "0x41A5BB0", VA = "0x41A5BB0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000699")]
		[Address(RVA = "0x41A59E0", Offset = "0x41A59E0", VA = "0x41A59E0")]
		public DivInt32()
		{
		}
	}

	[Token(Token = "0x200010E")]
	private sealed class DivInt64 : DivInstruction
	{
		[Token(Token = "0x600069A")]
		[Address(RVA = "0x41A5D00", Offset = "0x41A5D00", VA = "0x41A5D00", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x600069B")]
		[Address(RVA = "0x41A59F0", Offset = "0x41A59F0", VA = "0x41A59F0")]
		public DivInt64()
		{
		}
	}

	[Token(Token = "0x200010F")]
	private sealed class DivUInt16 : DivInstruction
	{
		[Token(Token = "0x600069C")]
		[Address(RVA = "0x41A5E60", Offset = "0x41A5E60", VA = "0x41A5E60", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x600069D")]
		[Address(RVA = "0x41A5A00", Offset = "0x41A5A00", VA = "0x41A5A00")]
		public DivUInt16()
		{
		}
	}

	[Token(Token = "0x2000110")]
	private sealed class DivUInt32 : DivInstruction
	{
		[Token(Token = "0x600069E")]
		[Address(RVA = "0x41A5FD0", Offset = "0x41A5FD0", VA = "0x41A5FD0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x600069F")]
		[Address(RVA = "0x41A5A10", Offset = "0x41A5A10", VA = "0x41A5A10")]
		public DivUInt32()
		{
		}
	}

	[Token(Token = "0x2000111")]
	private sealed class DivUInt64 : DivInstruction
	{
		[Token(Token = "0x60006A0")]
		[Address(RVA = "0x41A6130", Offset = "0x41A6130", VA = "0x41A6130", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60006A1")]
		[Address(RVA = "0x41A5A20", Offset = "0x41A5A20", VA = "0x41A5A20")]
		public DivUInt64()
		{
		}
	}

	[Token(Token = "0x2000112")]
	private sealed class DivSingle : DivInstruction
	{
		[Token(Token = "0x60006A2")]
		[Address(RVA = "0x41A6290", Offset = "0x41A6290", VA = "0x41A6290", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60006A3")]
		[Address(RVA = "0x41A5A30", Offset = "0x41A5A30", VA = "0x41A5A30")]
		public DivSingle()
		{
		}
	}

	[Token(Token = "0x2000113")]
	private sealed class DivDouble : DivInstruction
	{
		[Token(Token = "0x60006A4")]
		[Address(RVA = "0x41A63F0", Offset = "0x41A63F0", VA = "0x41A63F0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60006A5")]
		[Address(RVA = "0x41A5A40", Offset = "0x41A5A40", VA = "0x41A5A40")]
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
		[Address(RVA = "0x41A55B0", Offset = "0x41A55B0", VA = "0x41A55B0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000196")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000692")]
		[Address(RVA = "0x41A55C0", Offset = "0x41A55C0", VA = "0x41A55C0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000197")]
	public override string InstructionName
	{
		[Token(Token = "0x6000693")]
		[Address(RVA = "0x41A55D0", Offset = "0x41A55D0", VA = "0x41A55D0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000694")]
	[Address(RVA = "0x41A5600", Offset = "0x41A5600", VA = "0x41A5600")]
	private DivInstruction()
	{
	}

	[Token(Token = "0x6000695")]
	[Address(RVA = "0x41A5610", Offset = "0x41A5610", VA = "0x41A5610")]
	public static Instruction Create(Type type)
	{
		return null;
	}
}
