using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20001E0")]
internal abstract class NotEqualInstruction : Instruction
{
	[Token(Token = "0x20001E1")]
	private sealed class NotEqualBoolean : NotEqualInstruction
	{
		[Token(Token = "0x6000A16")]
		[Address(RVA = "0x41D8130", Offset = "0x41D8130", VA = "0x41D8130", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A17")]
		[Address(RVA = "0x41D8060", Offset = "0x41D8060", VA = "0x41D8060")]
		public NotEqualBoolean()
		{
		}
	}

	[Token(Token = "0x20001E2")]
	private sealed class NotEqualSByte : NotEqualInstruction
	{
		[Token(Token = "0x6000A18")]
		[Address(RVA = "0x41D81F0", Offset = "0x41D81F0", VA = "0x41D81F0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A19")]
		[Address(RVA = "0x41D8070", Offset = "0x41D8070", VA = "0x41D8070")]
		public NotEqualSByte()
		{
		}
	}

	[Token(Token = "0x20001E3")]
	private sealed class NotEqualInt16 : NotEqualInstruction
	{
		[Token(Token = "0x6000A1A")]
		[Address(RVA = "0x41D82B0", Offset = "0x41D82B0", VA = "0x41D82B0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A1B")]
		[Address(RVA = "0x41D8080", Offset = "0x41D8080", VA = "0x41D8080")]
		public NotEqualInt16()
		{
		}
	}

	[Token(Token = "0x20001E4")]
	private sealed class NotEqualChar : NotEqualInstruction
	{
		[Token(Token = "0x6000A1C")]
		[Address(RVA = "0x41D8370", Offset = "0x41D8370", VA = "0x41D8370", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A1D")]
		[Address(RVA = "0x41D8090", Offset = "0x41D8090", VA = "0x41D8090")]
		public NotEqualChar()
		{
		}
	}

	[Token(Token = "0x20001E5")]
	private sealed class NotEqualInt32 : NotEqualInstruction
	{
		[Token(Token = "0x6000A1E")]
		[Address(RVA = "0x41D8430", Offset = "0x41D8430", VA = "0x41D8430", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A1F")]
		[Address(RVA = "0x41D80A0", Offset = "0x41D80A0", VA = "0x41D80A0")]
		public NotEqualInt32()
		{
		}
	}

	[Token(Token = "0x20001E6")]
	private sealed class NotEqualInt64 : NotEqualInstruction
	{
		[Token(Token = "0x6000A20")]
		[Address(RVA = "0x41D84E0", Offset = "0x41D84E0", VA = "0x41D84E0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A21")]
		[Address(RVA = "0x41D80B0", Offset = "0x41D80B0", VA = "0x41D80B0")]
		public NotEqualInt64()
		{
		}
	}

	[Token(Token = "0x20001E7")]
	private sealed class NotEqualByte : NotEqualInstruction
	{
		[Token(Token = "0x6000A22")]
		[Address(RVA = "0x41D8590", Offset = "0x41D8590", VA = "0x41D8590", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A23")]
		[Address(RVA = "0x41D80C0", Offset = "0x41D80C0", VA = "0x41D80C0")]
		public NotEqualByte()
		{
		}
	}

	[Token(Token = "0x20001E8")]
	private sealed class NotEqualUInt16 : NotEqualInstruction
	{
		[Token(Token = "0x6000A24")]
		[Address(RVA = "0x41D8650", Offset = "0x41D8650", VA = "0x41D8650", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A25")]
		[Address(RVA = "0x41D80D0", Offset = "0x41D80D0", VA = "0x41D80D0")]
		public NotEqualUInt16()
		{
		}
	}

	[Token(Token = "0x20001E9")]
	private sealed class NotEqualUInt32 : NotEqualInstruction
	{
		[Token(Token = "0x6000A26")]
		[Address(RVA = "0x41D8710", Offset = "0x41D8710", VA = "0x41D8710", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A27")]
		[Address(RVA = "0x41D80E0", Offset = "0x41D80E0", VA = "0x41D80E0")]
		public NotEqualUInt32()
		{
		}
	}

	[Token(Token = "0x20001EA")]
	private sealed class NotEqualUInt64 : NotEqualInstruction
	{
		[Token(Token = "0x6000A28")]
		[Address(RVA = "0x41D87C0", Offset = "0x41D87C0", VA = "0x41D87C0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A29")]
		[Address(RVA = "0x41D80F0", Offset = "0x41D80F0", VA = "0x41D80F0")]
		public NotEqualUInt64()
		{
		}
	}

	[Token(Token = "0x20001EB")]
	private sealed class NotEqualSingle : NotEqualInstruction
	{
		[Token(Token = "0x6000A2A")]
		[Address(RVA = "0x41D8870", Offset = "0x41D8870", VA = "0x41D8870", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A2B")]
		[Address(RVA = "0x41D8100", Offset = "0x41D8100", VA = "0x41D8100")]
		public NotEqualSingle()
		{
		}
	}

	[Token(Token = "0x20001EC")]
	private sealed class NotEqualDouble : NotEqualInstruction
	{
		[Token(Token = "0x6000A2C")]
		[Address(RVA = "0x41D8940", Offset = "0x41D8940", VA = "0x41D8940", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A2D")]
		[Address(RVA = "0x41D8110", Offset = "0x41D8110", VA = "0x41D8110")]
		public NotEqualDouble()
		{
		}
	}

	[Token(Token = "0x20001ED")]
	private sealed class NotEqualReference : NotEqualInstruction
	{
		[Token(Token = "0x6000A2E")]
		[Address(RVA = "0x41D8A10", Offset = "0x41D8A10", VA = "0x41D8A10", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A2F")]
		[Address(RVA = "0x41D8120", Offset = "0x41D8120", VA = "0x41D8120")]
		public NotEqualReference()
		{
		}
	}

	[Token(Token = "0x20001EE")]
	private sealed class NotEqualSByteLiftedToNull : NotEqualInstruction
	{
		[Token(Token = "0x6000A30")]
		[Address(RVA = "0x41D8A60", Offset = "0x41D8A60", VA = "0x41D8A60", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A31")]
		[Address(RVA = "0x41D7FB0", Offset = "0x41D7FB0", VA = "0x41D7FB0")]
		public NotEqualSByteLiftedToNull()
		{
		}
	}

	[Token(Token = "0x20001EF")]
	private sealed class NotEqualInt16LiftedToNull : NotEqualInstruction
	{
		[Token(Token = "0x6000A32")]
		[Address(RVA = "0x41D8B20", Offset = "0x41D8B20", VA = "0x41D8B20", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A33")]
		[Address(RVA = "0x41D7FC0", Offset = "0x41D7FC0", VA = "0x41D7FC0")]
		public NotEqualInt16LiftedToNull()
		{
		}
	}

	[Token(Token = "0x20001F0")]
	private sealed class NotEqualCharLiftedToNull : NotEqualInstruction
	{
		[Token(Token = "0x6000A34")]
		[Address(RVA = "0x41D8BE0", Offset = "0x41D8BE0", VA = "0x41D8BE0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A35")]
		[Address(RVA = "0x41D7FD0", Offset = "0x41D7FD0", VA = "0x41D7FD0")]
		public NotEqualCharLiftedToNull()
		{
		}
	}

	[Token(Token = "0x20001F1")]
	private sealed class NotEqualInt32LiftedToNull : NotEqualInstruction
	{
		[Token(Token = "0x6000A36")]
		[Address(RVA = "0x41D8CA0", Offset = "0x41D8CA0", VA = "0x41D8CA0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A37")]
		[Address(RVA = "0x41D7FE0", Offset = "0x41D7FE0", VA = "0x41D7FE0")]
		public NotEqualInt32LiftedToNull()
		{
		}
	}

	[Token(Token = "0x20001F2")]
	private sealed class NotEqualInt64LiftedToNull : NotEqualInstruction
	{
		[Token(Token = "0x6000A38")]
		[Address(RVA = "0x41D8D60", Offset = "0x41D8D60", VA = "0x41D8D60", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A39")]
		[Address(RVA = "0x41D7FF0", Offset = "0x41D7FF0", VA = "0x41D7FF0")]
		public NotEqualInt64LiftedToNull()
		{
		}
	}

	[Token(Token = "0x20001F3")]
	private sealed class NotEqualByteLiftedToNull : NotEqualInstruction
	{
		[Token(Token = "0x6000A3A")]
		[Address(RVA = "0x41D8E10", Offset = "0x41D8E10", VA = "0x41D8E10", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A3B")]
		[Address(RVA = "0x41D8000", Offset = "0x41D8000", VA = "0x41D8000")]
		public NotEqualByteLiftedToNull()
		{
		}
	}

	[Token(Token = "0x20001F4")]
	private sealed class NotEqualUInt16LiftedToNull : NotEqualInstruction
	{
		[Token(Token = "0x6000A3C")]
		[Address(RVA = "0x41D8ED0", Offset = "0x41D8ED0", VA = "0x41D8ED0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A3D")]
		[Address(RVA = "0x41D8010", Offset = "0x41D8010", VA = "0x41D8010")]
		public NotEqualUInt16LiftedToNull()
		{
		}
	}

	[Token(Token = "0x20001F5")]
	private sealed class NotEqualUInt32LiftedToNull : NotEqualInstruction
	{
		[Token(Token = "0x6000A3E")]
		[Address(RVA = "0x41D8F90", Offset = "0x41D8F90", VA = "0x41D8F90", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A3F")]
		[Address(RVA = "0x41D8020", Offset = "0x41D8020", VA = "0x41D8020")]
		public NotEqualUInt32LiftedToNull()
		{
		}
	}

	[Token(Token = "0x20001F6")]
	private sealed class NotEqualUInt64LiftedToNull : NotEqualInstruction
	{
		[Token(Token = "0x6000A40")]
		[Address(RVA = "0x41D9050", Offset = "0x41D9050", VA = "0x41D9050", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A41")]
		[Address(RVA = "0x41D8030", Offset = "0x41D8030", VA = "0x41D8030")]
		public NotEqualUInt64LiftedToNull()
		{
		}
	}

	[Token(Token = "0x20001F7")]
	private sealed class NotEqualSingleLiftedToNull : NotEqualInstruction
	{
		[Token(Token = "0x6000A42")]
		[Address(RVA = "0x41D9100", Offset = "0x41D9100", VA = "0x41D9100", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A43")]
		[Address(RVA = "0x41D8040", Offset = "0x41D8040", VA = "0x41D8040")]
		public NotEqualSingleLiftedToNull()
		{
		}
	}

	[Token(Token = "0x20001F8")]
	private sealed class NotEqualDoubleLiftedToNull : NotEqualInstruction
	{
		[Token(Token = "0x6000A44")]
		[Address(RVA = "0x41D91D0", Offset = "0x41D91D0", VA = "0x41D91D0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A45")]
		[Address(RVA = "0x41D8050", Offset = "0x41D8050", VA = "0x41D8050")]
		public NotEqualDoubleLiftedToNull()
		{
		}
	}

	[Token(Token = "0x40003BF")]
	[FieldOffset(Offset = "0x0")]
	private static Instruction s_reference;

	[Token(Token = "0x40003C0")]
	[FieldOffset(Offset = "0x8")]
	private static Instruction s_Boolean;

	[Token(Token = "0x40003C1")]
	[FieldOffset(Offset = "0x10")]
	private static Instruction s_SByte;

	[Token(Token = "0x40003C2")]
	[FieldOffset(Offset = "0x18")]
	private static Instruction s_Int16;

	[Token(Token = "0x40003C3")]
	[FieldOffset(Offset = "0x20")]
	private static Instruction s_Char;

	[Token(Token = "0x40003C4")]
	[FieldOffset(Offset = "0x28")]
	private static Instruction s_Int32;

	[Token(Token = "0x40003C5")]
	[FieldOffset(Offset = "0x30")]
	private static Instruction s_Int64;

	[Token(Token = "0x40003C6")]
	[FieldOffset(Offset = "0x38")]
	private static Instruction s_Byte;

	[Token(Token = "0x40003C7")]
	[FieldOffset(Offset = "0x40")]
	private static Instruction s_UInt16;

	[Token(Token = "0x40003C8")]
	[FieldOffset(Offset = "0x48")]
	private static Instruction s_UInt32;

	[Token(Token = "0x40003C9")]
	[FieldOffset(Offset = "0x50")]
	private static Instruction s_UInt64;

	[Token(Token = "0x40003CA")]
	[FieldOffset(Offset = "0x58")]
	private static Instruction s_Single;

	[Token(Token = "0x40003CB")]
	[FieldOffset(Offset = "0x60")]
	private static Instruction s_Double;

	[Token(Token = "0x40003CC")]
	[FieldOffset(Offset = "0x68")]
	private static Instruction s_SByteLiftedToNull;

	[Token(Token = "0x40003CD")]
	[FieldOffset(Offset = "0x70")]
	private static Instruction s_Int16LiftedToNull;

	[Token(Token = "0x40003CE")]
	[FieldOffset(Offset = "0x78")]
	private static Instruction s_CharLiftedToNull;

	[Token(Token = "0x40003CF")]
	[FieldOffset(Offset = "0x80")]
	private static Instruction s_Int32LiftedToNull;

	[Token(Token = "0x40003D0")]
	[FieldOffset(Offset = "0x88")]
	private static Instruction s_Int64LiftedToNull;

	[Token(Token = "0x40003D1")]
	[FieldOffset(Offset = "0x90")]
	private static Instruction s_ByteLiftedToNull;

	[Token(Token = "0x40003D2")]
	[FieldOffset(Offset = "0x98")]
	private static Instruction s_UInt16LiftedToNull;

	[Token(Token = "0x40003D3")]
	[FieldOffset(Offset = "0xA0")]
	private static Instruction s_UInt32LiftedToNull;

	[Token(Token = "0x40003D4")]
	[FieldOffset(Offset = "0xA8")]
	private static Instruction s_UInt64LiftedToNull;

	[Token(Token = "0x40003D5")]
	[FieldOffset(Offset = "0xB0")]
	private static Instruction s_SingleLiftedToNull;

	[Token(Token = "0x40003D6")]
	[FieldOffset(Offset = "0xB8")]
	private static Instruction s_DoubleLiftedToNull;

	[Token(Token = "0x17000211")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000A11")]
		[Address(RVA = "0x41D7540", Offset = "0x41D7540", VA = "0x41D7540", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000212")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000A12")]
		[Address(RVA = "0x41D7550", Offset = "0x41D7550", VA = "0x41D7550", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000213")]
	public override string InstructionName
	{
		[Token(Token = "0x6000A13")]
		[Address(RVA = "0x41D7560", Offset = "0x41D7560", VA = "0x41D7560", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A14")]
	[Address(RVA = "0x41D7590", Offset = "0x41D7590", VA = "0x41D7590")]
	private NotEqualInstruction()
	{
	}

	[Token(Token = "0x6000A15")]
	[Address(RVA = "0x41D75A0", Offset = "0x41D75A0", VA = "0x41D75A0")]
	public static Instruction Create(Type type, bool liftedToNull)
	{
		return null;
	}
}
