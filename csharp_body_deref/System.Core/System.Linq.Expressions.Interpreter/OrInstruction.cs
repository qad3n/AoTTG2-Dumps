using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x2000208")]
internal abstract class OrInstruction : Instruction
{
	[Token(Token = "0x2000209")]
	private sealed class OrSByte : OrInstruction
	{
		[Token(Token = "0x6000A80")]
		[Address(RVA = "0x41DBF50", Offset = "0x41DBF50", VA = "0x41DBF50", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A81")]
		[Address(RVA = "0x41DBEC0", Offset = "0x41DBEC0", VA = "0x41DBEC0")]
		public OrSByte()
		{
		}
	}

	[Token(Token = "0x200020A")]
	private sealed class OrInt16 : OrInstruction
	{
		[Token(Token = "0x6000A82")]
		[Address(RVA = "0x41DC010", Offset = "0x41DC010", VA = "0x41DC010", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A83")]
		[Address(RVA = "0x41DBED0", Offset = "0x41DBED0", VA = "0x41DBED0")]
		public OrInt16()
		{
		}
	}

	[Token(Token = "0x200020B")]
	private sealed class OrInt32 : OrInstruction
	{
		[Token(Token = "0x6000A84")]
		[Address(RVA = "0x41DC0D0", Offset = "0x41DC0D0", VA = "0x41DC0D0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A85")]
		[Address(RVA = "0x41DBEE0", Offset = "0x41DBEE0", VA = "0x41DBEE0")]
		public OrInt32()
		{
		}
	}

	[Token(Token = "0x200020C")]
	private sealed class OrInt64 : OrInstruction
	{
		[Token(Token = "0x6000A86")]
		[Address(RVA = "0x41DC190", Offset = "0x41DC190", VA = "0x41DC190", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A87")]
		[Address(RVA = "0x41DBEF0", Offset = "0x41DBEF0", VA = "0x41DBEF0")]
		public OrInt64()
		{
		}
	}

	[Token(Token = "0x200020D")]
	private sealed class OrByte : OrInstruction
	{
		[Token(Token = "0x6000A88")]
		[Address(RVA = "0x41DC260", Offset = "0x41DC260", VA = "0x41DC260", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A89")]
		[Address(RVA = "0x41DBF00", Offset = "0x41DBF00", VA = "0x41DBF00")]
		public OrByte()
		{
		}
	}

	[Token(Token = "0x200020E")]
	private sealed class OrUInt16 : OrInstruction
	{
		[Token(Token = "0x6000A8A")]
		[Address(RVA = "0x41DC320", Offset = "0x41DC320", VA = "0x41DC320", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A8B")]
		[Address(RVA = "0x41DBF10", Offset = "0x41DBF10", VA = "0x41DBF10")]
		public OrUInt16()
		{
		}
	}

	[Token(Token = "0x200020F")]
	private sealed class OrUInt32 : OrInstruction
	{
		[Token(Token = "0x6000A8C")]
		[Address(RVA = "0x41DC3E0", Offset = "0x41DC3E0", VA = "0x41DC3E0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A8D")]
		[Address(RVA = "0x41DBF20", Offset = "0x41DBF20", VA = "0x41DBF20")]
		public OrUInt32()
		{
		}
	}

	[Token(Token = "0x2000210")]
	private sealed class OrUInt64 : OrInstruction
	{
		[Token(Token = "0x6000A8E")]
		[Address(RVA = "0x41DC4B0", Offset = "0x41DC4B0", VA = "0x41DC4B0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A8F")]
		[Address(RVA = "0x41DBF30", Offset = "0x41DBF30", VA = "0x41DBF30")]
		public OrUInt64()
		{
		}
	}

	[Token(Token = "0x2000211")]
	private sealed class OrBoolean : OrInstruction
	{
		[Token(Token = "0x6000A90")]
		[Address(RVA = "0x41DC580", Offset = "0x41DC580", VA = "0x41DC580", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A91")]
		[Address(RVA = "0x41DBF40", Offset = "0x41DBF40", VA = "0x41DBF40")]
		public OrBoolean()
		{
		}
	}

	[Token(Token = "0x40003E4")]
	[FieldOffset(Offset = "0x0")]
	private static Instruction s_SByte;

	[Token(Token = "0x40003E5")]
	[FieldOffset(Offset = "0x8")]
	private static Instruction s_Int16;

	[Token(Token = "0x40003E6")]
	[FieldOffset(Offset = "0x10")]
	private static Instruction s_Int32;

	[Token(Token = "0x40003E7")]
	[FieldOffset(Offset = "0x18")]
	private static Instruction s_Int64;

	[Token(Token = "0x40003E8")]
	[FieldOffset(Offset = "0x20")]
	private static Instruction s_Byte;

	[Token(Token = "0x40003E9")]
	[FieldOffset(Offset = "0x28")]
	private static Instruction s_UInt16;

	[Token(Token = "0x40003EA")]
	[FieldOffset(Offset = "0x30")]
	private static Instruction s_UInt32;

	[Token(Token = "0x40003EB")]
	[FieldOffset(Offset = "0x38")]
	private static Instruction s_UInt64;

	[Token(Token = "0x40003EC")]
	[FieldOffset(Offset = "0x40")]
	private static Instruction s_Boolean;

	[Token(Token = "0x17000220")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000A7B")]
		[Address(RVA = "0x41DBA40", Offset = "0x41DBA40", VA = "0x41DBA40", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000221")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000A7C")]
		[Address(RVA = "0x41DBA50", Offset = "0x41DBA50", VA = "0x41DBA50", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000222")]
	public override string InstructionName
	{
		[Token(Token = "0x6000A7D")]
		[Address(RVA = "0x41DBA60", Offset = "0x41DBA60", VA = "0x41DBA60", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A7E")]
	[Address(RVA = "0x41DBA90", Offset = "0x41DBA90", VA = "0x41DBA90")]
	private OrInstruction()
	{
	}

	[Token(Token = "0x6000A7F")]
	[Address(RVA = "0x41DBAA0", Offset = "0x41DBAA0", VA = "0x41DBAA0")]
	public static Instruction Create(Type type)
	{
		return null;
	}
}
