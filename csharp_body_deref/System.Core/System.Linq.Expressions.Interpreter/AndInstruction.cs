using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000D7")]
internal abstract class AndInstruction : Instruction
{
	[Token(Token = "0x20000D8")]
	private sealed class AndSByte : AndInstruction
	{
		[Token(Token = "0x60005B0")]
		[Address(RVA = "0x419F8D0", Offset = "0x419F8D0", VA = "0x419F8D0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60005B1")]
		[Address(RVA = "0x419F840", Offset = "0x419F840", VA = "0x419F840")]
		public AndSByte()
		{
		}
	}

	[Token(Token = "0x20000D9")]
	private sealed class AndInt16 : AndInstruction
	{
		[Token(Token = "0x60005B2")]
		[Address(RVA = "0x419F990", Offset = "0x419F990", VA = "0x419F990", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60005B3")]
		[Address(RVA = "0x419F850", Offset = "0x419F850", VA = "0x419F850")]
		public AndInt16()
		{
		}
	}

	[Token(Token = "0x20000DA")]
	private sealed class AndInt32 : AndInstruction
	{
		[Token(Token = "0x60005B4")]
		[Address(RVA = "0x419FA50", Offset = "0x419FA50", VA = "0x419FA50", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60005B5")]
		[Address(RVA = "0x419F860", Offset = "0x419F860", VA = "0x419F860")]
		public AndInt32()
		{
		}
	}

	[Token(Token = "0x20000DB")]
	private sealed class AndInt64 : AndInstruction
	{
		[Token(Token = "0x60005B6")]
		[Address(RVA = "0x419FB10", Offset = "0x419FB10", VA = "0x419FB10", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60005B7")]
		[Address(RVA = "0x419F870", Offset = "0x419F870", VA = "0x419F870")]
		public AndInt64()
		{
		}
	}

	[Token(Token = "0x20000DC")]
	private sealed class AndByte : AndInstruction
	{
		[Token(Token = "0x60005B8")]
		[Address(RVA = "0x419FBE0", Offset = "0x419FBE0", VA = "0x419FBE0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60005B9")]
		[Address(RVA = "0x419F880", Offset = "0x419F880", VA = "0x419F880")]
		public AndByte()
		{
		}
	}

	[Token(Token = "0x20000DD")]
	private sealed class AndUInt16 : AndInstruction
	{
		[Token(Token = "0x60005BA")]
		[Address(RVA = "0x419FCA0", Offset = "0x419FCA0", VA = "0x419FCA0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60005BB")]
		[Address(RVA = "0x419F890", Offset = "0x419F890", VA = "0x419F890")]
		public AndUInt16()
		{
		}
	}

	[Token(Token = "0x20000DE")]
	private sealed class AndUInt32 : AndInstruction
	{
		[Token(Token = "0x60005BC")]
		[Address(RVA = "0x419FD60", Offset = "0x419FD60", VA = "0x419FD60", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60005BD")]
		[Address(RVA = "0x419F8A0", Offset = "0x419F8A0", VA = "0x419F8A0")]
		public AndUInt32()
		{
		}
	}

	[Token(Token = "0x20000DF")]
	private sealed class AndUInt64 : AndInstruction
	{
		[Token(Token = "0x60005BE")]
		[Address(RVA = "0x419FE30", Offset = "0x419FE30", VA = "0x419FE30", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60005BF")]
		[Address(RVA = "0x419F8B0", Offset = "0x419F8B0", VA = "0x419F8B0")]
		public AndUInt64()
		{
		}
	}

	[Token(Token = "0x20000E0")]
	private sealed class AndBoolean : AndInstruction
	{
		[Token(Token = "0x60005C0")]
		[Address(RVA = "0x419FF00", Offset = "0x419FF00", VA = "0x419FF00", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60005C1")]
		[Address(RVA = "0x419F8C0", Offset = "0x419F8C0", VA = "0x419F8C0")]
		public AndBoolean()
		{
		}
	}

	[Token(Token = "0x4000219")]
	[FieldOffset(Offset = "0x0")]
	private static Instruction s_SByte;

	[Token(Token = "0x400021A")]
	[FieldOffset(Offset = "0x8")]
	private static Instruction s_Int16;

	[Token(Token = "0x400021B")]
	[FieldOffset(Offset = "0x10")]
	private static Instruction s_Int32;

	[Token(Token = "0x400021C")]
	[FieldOffset(Offset = "0x18")]
	private static Instruction s_Int64;

	[Token(Token = "0x400021D")]
	[FieldOffset(Offset = "0x20")]
	private static Instruction s_Byte;

	[Token(Token = "0x400021E")]
	[FieldOffset(Offset = "0x28")]
	private static Instruction s_UInt16;

	[Token(Token = "0x400021F")]
	[FieldOffset(Offset = "0x30")]
	private static Instruction s_UInt32;

	[Token(Token = "0x4000220")]
	[FieldOffset(Offset = "0x38")]
	private static Instruction s_UInt64;

	[Token(Token = "0x4000221")]
	[FieldOffset(Offset = "0x40")]
	private static Instruction s_Boolean;

	[Token(Token = "0x17000140")]
	public override int ConsumedStack
	{
		[Token(Token = "0x60005AB")]
		[Address(RVA = "0x419F3C0", Offset = "0x419F3C0", VA = "0x419F3C0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000141")]
	public override int ProducedStack
	{
		[Token(Token = "0x60005AC")]
		[Address(RVA = "0x419F3D0", Offset = "0x419F3D0", VA = "0x419F3D0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000142")]
	public override string InstructionName
	{
		[Token(Token = "0x60005AD")]
		[Address(RVA = "0x419F3E0", Offset = "0x419F3E0", VA = "0x419F3E0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60005AE")]
	[Address(RVA = "0x419F410", Offset = "0x419F410", VA = "0x419F410")]
	private AndInstruction()
	{
	}

	[Token(Token = "0x60005AF")]
	[Address(RVA = "0x419F420", Offset = "0x419F420", VA = "0x419F420")]
	public static Instruction Create(Type type)
	{
		return null;
	}
}
