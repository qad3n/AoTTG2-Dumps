using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20001F9")]
internal abstract class NotInstruction : Instruction
{
	[Token(Token = "0x20001FA")]
	private sealed class NotBoolean : NotInstruction
	{
		[Token(Token = "0x6000A4B")]
		[Address(RVA = "0x41D97B0", Offset = "0x41D97B0", VA = "0x41D97B0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A4C")]
		[Address(RVA = "0x41D9720", Offset = "0x41D9720", VA = "0x41D9720")]
		public NotBoolean()
		{
		}
	}

	[Token(Token = "0x20001FB")]
	private sealed class NotInt64 : NotInstruction
	{
		[Token(Token = "0x6000A4D")]
		[Address(RVA = "0x41D9830", Offset = "0x41D9830", VA = "0x41D9830", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A4E")]
		[Address(RVA = "0x41D9730", Offset = "0x41D9730", VA = "0x41D9730")]
		public NotInt64()
		{
		}
	}

	[Token(Token = "0x20001FC")]
	private sealed class NotInt32 : NotInstruction
	{
		[Token(Token = "0x6000A4F")]
		[Address(RVA = "0x41D98B0", Offset = "0x41D98B0", VA = "0x41D98B0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A50")]
		[Address(RVA = "0x41D9740", Offset = "0x41D9740", VA = "0x41D9740")]
		public NotInt32()
		{
		}
	}

	[Token(Token = "0x20001FD")]
	private sealed class NotInt16 : NotInstruction
	{
		[Token(Token = "0x6000A51")]
		[Address(RVA = "0x41D9920", Offset = "0x41D9920", VA = "0x41D9920", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A52")]
		[Address(RVA = "0x41D9750", Offset = "0x41D9750", VA = "0x41D9750")]
		public NotInt16()
		{
		}
	}

	[Token(Token = "0x20001FE")]
	private sealed class NotUInt64 : NotInstruction
	{
		[Token(Token = "0x6000A53")]
		[Address(RVA = "0x41D9990", Offset = "0x41D9990", VA = "0x41D9990", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A54")]
		[Address(RVA = "0x41D9760", Offset = "0x41D9760", VA = "0x41D9760")]
		public NotUInt64()
		{
		}
	}

	[Token(Token = "0x20001FF")]
	private sealed class NotUInt32 : NotInstruction
	{
		[Token(Token = "0x6000A55")]
		[Address(RVA = "0x41D9A10", Offset = "0x41D9A10", VA = "0x41D9A10", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A56")]
		[Address(RVA = "0x41D9770", Offset = "0x41D9770", VA = "0x41D9770")]
		public NotUInt32()
		{
		}
	}

	[Token(Token = "0x2000200")]
	private sealed class NotUInt16 : NotInstruction
	{
		[Token(Token = "0x6000A57")]
		[Address(RVA = "0x41D9A90", Offset = "0x41D9A90", VA = "0x41D9A90", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A58")]
		[Address(RVA = "0x41D9780", Offset = "0x41D9780", VA = "0x41D9780")]
		public NotUInt16()
		{
		}
	}

	[Token(Token = "0x2000201")]
	private sealed class NotByte : NotInstruction
	{
		[Token(Token = "0x6000A59")]
		[Address(RVA = "0x41D9B10", Offset = "0x41D9B10", VA = "0x41D9B10", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A5A")]
		[Address(RVA = "0x41D9790", Offset = "0x41D9790", VA = "0x41D9790")]
		public NotByte()
		{
		}
	}

	[Token(Token = "0x2000202")]
	private sealed class NotSByte : NotInstruction
	{
		[Token(Token = "0x6000A5B")]
		[Address(RVA = "0x41D9B90", Offset = "0x41D9B90", VA = "0x41D9B90", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A5C")]
		[Address(RVA = "0x41D97A0", Offset = "0x41D97A0", VA = "0x41D97A0")]
		public NotSByte()
		{
		}
	}

	[Token(Token = "0x40003D7")]
	[FieldOffset(Offset = "0x0")]
	public static Instruction s_Boolean;

	[Token(Token = "0x40003D8")]
	[FieldOffset(Offset = "0x8")]
	public static Instruction s_Int64;

	[Token(Token = "0x40003D9")]
	[FieldOffset(Offset = "0x10")]
	public static Instruction s_Int32;

	[Token(Token = "0x40003DA")]
	[FieldOffset(Offset = "0x18")]
	public static Instruction s_Int16;

	[Token(Token = "0x40003DB")]
	[FieldOffset(Offset = "0x20")]
	public static Instruction s_UInt64;

	[Token(Token = "0x40003DC")]
	[FieldOffset(Offset = "0x28")]
	public static Instruction s_UInt32;

	[Token(Token = "0x40003DD")]
	[FieldOffset(Offset = "0x30")]
	public static Instruction s_UInt16;

	[Token(Token = "0x40003DE")]
	[FieldOffset(Offset = "0x38")]
	public static Instruction s_Byte;

	[Token(Token = "0x40003DF")]
	[FieldOffset(Offset = "0x40")]
	public static Instruction s_SByte;

	[Token(Token = "0x17000214")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000A47")]
		[Address(RVA = "0x41D92B0", Offset = "0x41D92B0", VA = "0x41D92B0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000215")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000A48")]
		[Address(RVA = "0x41D92C0", Offset = "0x41D92C0", VA = "0x41D92C0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000216")]
	public override string InstructionName
	{
		[Token(Token = "0x6000A49")]
		[Address(RVA = "0x41D92D0", Offset = "0x41D92D0", VA = "0x41D92D0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A46")]
	[Address(RVA = "0x41D92A0", Offset = "0x41D92A0", VA = "0x41D92A0")]
	private NotInstruction()
	{
	}

	[Token(Token = "0x6000A4A")]
	[Address(RVA = "0x41D9300", Offset = "0x41D9300", VA = "0x41D9300")]
	public static Instruction Create(Type type)
	{
		return null;
	}
}
