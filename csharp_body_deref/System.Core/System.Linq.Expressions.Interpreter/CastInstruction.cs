using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x200023C")]
internal abstract class CastInstruction : Instruction
{
	[Token(Token = "0x200023D")]
	private sealed class CastInstructionT<T> : CastInstruction
	{
		[Token(Token = "0x6000B16")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000B17")]
		public CastInstructionT()
		{
		}
	}

	[Token(Token = "0x200023E")]
	private abstract class CastInstructionNoT : CastInstruction
	{
		[Token(Token = "0x200023F")]
		private sealed class Ref : CastInstructionNoT
		{
			[Token(Token = "0x6000B1C")]
			[Address(RVA = "0x41E0F60", Offset = "0x41E0F60", VA = "0x41E0F60")]
			public Ref(Type t)
			{
			}

			[Token(Token = "0x6000B1D")]
			[Address(RVA = "0x41E10E0", Offset = "0x41E10E0", VA = "0x41E10E0", Slot = "11")]
			protected override void ConvertNull(InterpretedFrame frame)
			{
			}
		}

		[Token(Token = "0x2000240")]
		private sealed class Value : CastInstructionNoT
		{
			[Token(Token = "0x6000B1E")]
			[Address(RVA = "0x41E0F30", Offset = "0x41E0F30", VA = "0x41E0F30")]
			public Value(Type t)
			{
			}

			[Token(Token = "0x6000B1F")]
			[Address(RVA = "0x41E1100", Offset = "0x41E1100", VA = "0x41E1100", Slot = "11")]
			protected override void ConvertNull(InterpretedFrame frame)
			{
			}
		}

		[Token(Token = "0x4000422")]
		[FieldOffset(Offset = "0x10")]
		private readonly Type _t;

		[Token(Token = "0x6000B18")]
		[Address(RVA = "0x41E0F00", Offset = "0x41E0F00", VA = "0x41E0F00")]
		protected CastInstructionNoT(Type t)
		{
		}

		[Token(Token = "0x6000B19")]
		[Address(RVA = "0x41E0E30", Offset = "0x41E0E30", VA = "0x41E0E30")]
		public new static CastInstruction Create(Type t)
		{
			return null;
		}

		[Token(Token = "0x6000B1A")]
		[Address(RVA = "0x41E0F90", Offset = "0x41E0F90", VA = "0x41E0F90", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000B1B")]
		protected abstract void ConvertNull(InterpretedFrame frame);
	}

	[Token(Token = "0x4000413")]
	[FieldOffset(Offset = "0x0")]
	private static CastInstruction s_Boolean;

	[Token(Token = "0x4000414")]
	[FieldOffset(Offset = "0x8")]
	private static CastInstruction s_Byte;

	[Token(Token = "0x4000415")]
	[FieldOffset(Offset = "0x10")]
	private static CastInstruction s_Char;

	[Token(Token = "0x4000416")]
	[FieldOffset(Offset = "0x18")]
	private static CastInstruction s_DateTime;

	[Token(Token = "0x4000417")]
	[FieldOffset(Offset = "0x20")]
	private static CastInstruction s_Decimal;

	[Token(Token = "0x4000418")]
	[FieldOffset(Offset = "0x28")]
	private static CastInstruction s_Double;

	[Token(Token = "0x4000419")]
	[FieldOffset(Offset = "0x30")]
	private static CastInstruction s_Int16;

	[Token(Token = "0x400041A")]
	[FieldOffset(Offset = "0x38")]
	private static CastInstruction s_Int32;

	[Token(Token = "0x400041B")]
	[FieldOffset(Offset = "0x40")]
	private static CastInstruction s_Int64;

	[Token(Token = "0x400041C")]
	[FieldOffset(Offset = "0x48")]
	private static CastInstruction s_SByte;

	[Token(Token = "0x400041D")]
	[FieldOffset(Offset = "0x50")]
	private static CastInstruction s_Single;

	[Token(Token = "0x400041E")]
	[FieldOffset(Offset = "0x58")]
	private static CastInstruction s_String;

	[Token(Token = "0x400041F")]
	[FieldOffset(Offset = "0x60")]
	private static CastInstruction s_UInt16;

	[Token(Token = "0x4000420")]
	[FieldOffset(Offset = "0x68")]
	private static CastInstruction s_UInt32;

	[Token(Token = "0x4000421")]
	[FieldOffset(Offset = "0x70")]
	private static CastInstruction s_UInt64;

	[Token(Token = "0x17000245")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000B11")]
		[Address(RVA = "0x41E06B0", Offset = "0x41E06B0", VA = "0x41E06B0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000246")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000B12")]
		[Address(RVA = "0x41E06C0", Offset = "0x41E06C0", VA = "0x41E06C0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000247")]
	public override string InstructionName
	{
		[Token(Token = "0x6000B13")]
		[Address(RVA = "0x41E06D0", Offset = "0x41E06D0", VA = "0x41E06D0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000B14")]
	[Address(RVA = "0x41E0700", Offset = "0x41E0700", VA = "0x41E0700")]
	public static Instruction Create(Type t)
	{
		return null;
	}

	[Token(Token = "0x6000B15")]
	[Address(RVA = "0x41E0EF0", Offset = "0x41E0EF0", VA = "0x41E0EF0")]
	protected CastInstruction()
	{
	}
}
