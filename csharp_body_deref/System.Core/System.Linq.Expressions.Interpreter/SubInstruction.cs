using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x2000220")]
internal abstract class SubInstruction : Instruction
{
	[Token(Token = "0x2000221")]
	private sealed class SubInt16 : SubInstruction
	{
		[Token(Token = "0x6000AC3")]
		[Address(RVA = "0x41DDBE0", Offset = "0x41DDBE0", VA = "0x41DDBE0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000AC4")]
		[Address(RVA = "0x41DDB60", Offset = "0x41DDB60", VA = "0x41DDB60")]
		public SubInt16()
		{
		}
	}

	[Token(Token = "0x2000222")]
	private sealed class SubInt32 : SubInstruction
	{
		[Token(Token = "0x6000AC5")]
		[Address(RVA = "0x41DDD40", Offset = "0x41DDD40", VA = "0x41DDD40", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000AC6")]
		[Address(RVA = "0x41DDB70", Offset = "0x41DDB70", VA = "0x41DDB70")]
		public SubInt32()
		{
		}
	}

	[Token(Token = "0x2000223")]
	private sealed class SubInt64 : SubInstruction
	{
		[Token(Token = "0x6000AC7")]
		[Address(RVA = "0x41DDE90", Offset = "0x41DDE90", VA = "0x41DDE90", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000AC8")]
		[Address(RVA = "0x41DDB80", Offset = "0x41DDB80", VA = "0x41DDB80")]
		public SubInt64()
		{
		}
	}

	[Token(Token = "0x2000224")]
	private sealed class SubUInt16 : SubInstruction
	{
		[Token(Token = "0x6000AC9")]
		[Address(RVA = "0x41DDFF0", Offset = "0x41DDFF0", VA = "0x41DDFF0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000ACA")]
		[Address(RVA = "0x41DDB90", Offset = "0x41DDB90", VA = "0x41DDB90")]
		public SubUInt16()
		{
		}
	}

	[Token(Token = "0x2000225")]
	private sealed class SubUInt32 : SubInstruction
	{
		[Token(Token = "0x6000ACB")]
		[Address(RVA = "0x41DE150", Offset = "0x41DE150", VA = "0x41DE150", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000ACC")]
		[Address(RVA = "0x41DDBA0", Offset = "0x41DDBA0", VA = "0x41DDBA0")]
		public SubUInt32()
		{
		}
	}

	[Token(Token = "0x2000226")]
	private sealed class SubUInt64 : SubInstruction
	{
		[Token(Token = "0x6000ACD")]
		[Address(RVA = "0x41DE2B0", Offset = "0x41DE2B0", VA = "0x41DE2B0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000ACE")]
		[Address(RVA = "0x41DDBB0", Offset = "0x41DDBB0", VA = "0x41DDBB0")]
		public SubUInt64()
		{
		}
	}

	[Token(Token = "0x2000227")]
	private sealed class SubSingle : SubInstruction
	{
		[Token(Token = "0x6000ACF")]
		[Address(RVA = "0x41DE410", Offset = "0x41DE410", VA = "0x41DE410", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000AD0")]
		[Address(RVA = "0x41DDBC0", Offset = "0x41DDBC0", VA = "0x41DDBC0")]
		public SubSingle()
		{
		}
	}

	[Token(Token = "0x2000228")]
	private sealed class SubDouble : SubInstruction
	{
		[Token(Token = "0x6000AD1")]
		[Address(RVA = "0x41DE570", Offset = "0x41DE570", VA = "0x41DE570", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000AD2")]
		[Address(RVA = "0x41DDBD0", Offset = "0x41DDBD0", VA = "0x41DDBD0")]
		public SubDouble()
		{
		}
	}

	[Token(Token = "0x40003FA")]
	[FieldOffset(Offset = "0x0")]
	private static Instruction s_Int16;

	[Token(Token = "0x40003FB")]
	[FieldOffset(Offset = "0x8")]
	private static Instruction s_Int32;

	[Token(Token = "0x40003FC")]
	[FieldOffset(Offset = "0x10")]
	private static Instruction s_Int64;

	[Token(Token = "0x40003FD")]
	[FieldOffset(Offset = "0x18")]
	private static Instruction s_UInt16;

	[Token(Token = "0x40003FE")]
	[FieldOffset(Offset = "0x20")]
	private static Instruction s_UInt32;

	[Token(Token = "0x40003FF")]
	[FieldOffset(Offset = "0x28")]
	private static Instruction s_UInt64;

	[Token(Token = "0x4000400")]
	[FieldOffset(Offset = "0x30")]
	private static Instruction s_Single;

	[Token(Token = "0x4000401")]
	[FieldOffset(Offset = "0x38")]
	private static Instruction s_Double;

	[Token(Token = "0x1700022E")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000ABE")]
		[Address(RVA = "0x41DD740", Offset = "0x41DD740", VA = "0x41DD740", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700022F")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000ABF")]
		[Address(RVA = "0x41DD750", Offset = "0x41DD750", VA = "0x41DD750", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000230")]
	public override string InstructionName
	{
		[Token(Token = "0x6000AC0")]
		[Address(RVA = "0x41DD760", Offset = "0x41DD760", VA = "0x41DD760", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000AC1")]
	[Address(RVA = "0x41DD790", Offset = "0x41DD790", VA = "0x41DD790")]
	private SubInstruction()
	{
	}

	[Token(Token = "0x6000AC2")]
	[Address(RVA = "0x41DD7A0", Offset = "0x41DD7A0", VA = "0x41DD7A0")]
	public static Instruction Create(Type type)
	{
		return null;
	}
}
