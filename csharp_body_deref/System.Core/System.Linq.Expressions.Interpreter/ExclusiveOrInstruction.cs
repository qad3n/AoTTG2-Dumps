using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x200012E")]
internal abstract class ExclusiveOrInstruction : Instruction
{
	[Token(Token = "0x200012F")]
	private sealed class ExclusiveOrSByte : ExclusiveOrInstruction
	{
		[Token(Token = "0x60006E2")]
		[Address(RVA = "0x41A88B0", Offset = "0x41A88B0", VA = "0x41A88B0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60006E3")]
		[Address(RVA = "0x41A8870", Offset = "0x41A8870", VA = "0x41A8870")]
		public ExclusiveOrSByte()
		{
		}
	}

	[Token(Token = "0x2000130")]
	private sealed class ExclusiveOrInt16 : ExclusiveOrInstruction
	{
		[Token(Token = "0x60006E4")]
		[Address(RVA = "0x41A8970", Offset = "0x41A8970", VA = "0x41A8970", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60006E5")]
		[Address(RVA = "0x41A8880", Offset = "0x41A8880", VA = "0x41A8880")]
		public ExclusiveOrInt16()
		{
		}
	}

	[Token(Token = "0x2000131")]
	private sealed class ExclusiveOrInt32 : ExclusiveOrInstruction
	{
		[Token(Token = "0x60006E6")]
		[Address(RVA = "0x41A8A30", Offset = "0x41A8A30", VA = "0x41A8A30", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60006E7")]
		[Address(RVA = "0x41A8890", Offset = "0x41A8890", VA = "0x41A8890")]
		public ExclusiveOrInt32()
		{
		}
	}

	[Token(Token = "0x2000132")]
	private sealed class ExclusiveOrInt64 : ExclusiveOrInstruction
	{
		[Token(Token = "0x60006E8")]
		[Address(RVA = "0x41A8AF0", Offset = "0x41A8AF0", VA = "0x41A8AF0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60006E9")]
		[Address(RVA = "0x41A88A0", Offset = "0x41A88A0", VA = "0x41A88A0")]
		public ExclusiveOrInt64()
		{
		}
	}

	[Token(Token = "0x2000133")]
	private sealed class ExclusiveOrByte : ExclusiveOrInstruction
	{
		[Token(Token = "0x60006EA")]
		[Address(RVA = "0x41A8BC0", Offset = "0x41A8BC0", VA = "0x41A8BC0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60006EB")]
		[Address(RVA = "0x41A8DF0", Offset = "0x41A8DF0", VA = "0x41A8DF0")]
		public ExclusiveOrByte()
		{
		}
	}

	[Token(Token = "0x2000134")]
	private sealed class ExclusiveOrUInt16 : ExclusiveOrInstruction
	{
		[Token(Token = "0x60006EC")]
		[Address(RVA = "0x41A8E00", Offset = "0x41A8E00", VA = "0x41A8E00", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60006ED")]
		[Address(RVA = "0x41A8F90", Offset = "0x41A8F90", VA = "0x41A8F90")]
		public ExclusiveOrUInt16()
		{
		}
	}

	[Token(Token = "0x2000135")]
	private sealed class ExclusiveOrUInt32 : ExclusiveOrInstruction
	{
		[Token(Token = "0x60006EE")]
		[Address(RVA = "0x41A8FA0", Offset = "0x41A8FA0", VA = "0x41A8FA0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60006EF")]
		[Address(RVA = "0x41A9100", Offset = "0x41A9100", VA = "0x41A9100")]
		public ExclusiveOrUInt32()
		{
		}
	}

	[Token(Token = "0x2000136")]
	private sealed class ExclusiveOrUInt64 : ExclusiveOrInstruction
	{
		[Token(Token = "0x60006F0")]
		[Address(RVA = "0x41A9110", Offset = "0x41A9110", VA = "0x41A9110", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60006F1")]
		[Address(RVA = "0x41A9270", Offset = "0x41A9270", VA = "0x41A9270")]
		public ExclusiveOrUInt64()
		{
		}
	}

	[Token(Token = "0x2000137")]
	private sealed class ExclusiveOrBoolean : ExclusiveOrInstruction
	{
		[Token(Token = "0x60006F2")]
		[Address(RVA = "0x41A9280", Offset = "0x41A9280", VA = "0x41A9280", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60006F3")]
		[Address(RVA = "0x41A9440", Offset = "0x41A9440", VA = "0x41A9440")]
		public ExclusiveOrBoolean()
		{
		}
	}

	[Token(Token = "0x4000282")]
	[FieldOffset(Offset = "0x0")]
	private static Instruction s_SByte;

	[Token(Token = "0x4000283")]
	[FieldOffset(Offset = "0x8")]
	private static Instruction s_Int16;

	[Token(Token = "0x4000284")]
	[FieldOffset(Offset = "0x10")]
	private static Instruction s_Int32;

	[Token(Token = "0x4000285")]
	[FieldOffset(Offset = "0x18")]
	private static Instruction s_Int64;

	[Token(Token = "0x4000286")]
	[FieldOffset(Offset = "0x20")]
	private static Instruction s_Byte;

	[Token(Token = "0x4000287")]
	[FieldOffset(Offset = "0x28")]
	private static Instruction s_UInt16;

	[Token(Token = "0x4000288")]
	[FieldOffset(Offset = "0x30")]
	private static Instruction s_UInt32;

	[Token(Token = "0x4000289")]
	[FieldOffset(Offset = "0x38")]
	private static Instruction s_UInt64;

	[Token(Token = "0x400028A")]
	[FieldOffset(Offset = "0x40")]
	private static Instruction s_Boolean;

	[Token(Token = "0x1700019B")]
	public override int ConsumedStack
	{
		[Token(Token = "0x60006DD")]
		[Address(RVA = "0x41A83F0", Offset = "0x41A83F0", VA = "0x41A83F0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700019C")]
	public override int ProducedStack
	{
		[Token(Token = "0x60006DE")]
		[Address(RVA = "0x41A8400", Offset = "0x41A8400", VA = "0x41A8400", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700019D")]
	public override string InstructionName
	{
		[Token(Token = "0x60006DF")]
		[Address(RVA = "0x41A8410", Offset = "0x41A8410", VA = "0x41A8410", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60006E0")]
	[Address(RVA = "0x41A8440", Offset = "0x41A8440", VA = "0x41A8440")]
	private ExclusiveOrInstruction()
	{
	}

	[Token(Token = "0x60006E1")]
	[Address(RVA = "0x41A8450", Offset = "0x41A8450", VA = "0x41A8450")]
	public static Instruction Create(Type type)
	{
		return null;
	}
}
