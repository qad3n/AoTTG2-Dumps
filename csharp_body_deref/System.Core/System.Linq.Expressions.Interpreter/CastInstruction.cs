// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.CastInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x200023D")]
internal abstract class CastInstruction : Instruction
{
	[Token(Token = "0x200023E")]
	private sealed class CastInstructionT<T> : CastInstruction
	{
		[Token(Token = "0x6000B20")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000B21")]
		public CastInstructionT()
		{
		}
	}

	[Token(Token = "0x200023F")]
	private abstract class CastInstructionNoT : CastInstruction
	{
		[Token(Token = "0x2000240")]
		private sealed class Ref : CastInstructionNoT
		{
			[Token(Token = "0x6000B26")]
			[Address(RVA = "0x5E1B2C0", Offset = "0x5E1A2C0", VA = "0x5E1B2C0")]
			public Ref(Type t)
			{
			}

			[Token(Token = "0x6000B27")]
			[Address(RVA = "0x5E1B440", Offset = "0x5E1A440", VA = "0x5E1B440", Slot = "11")]
			protected override void ConvertNull(InterpretedFrame frame)
			{
			}
		}

		[Token(Token = "0x2000241")]
		private sealed class Value : CastInstructionNoT
		{
			[Token(Token = "0x6000B28")]
			[Address(RVA = "0x5E1B290", Offset = "0x5E1A290", VA = "0x5E1B290")]
			public Value(Type t)
			{
			}

			[Token(Token = "0x6000B29")]
			[Address(RVA = "0x5E1B460", Offset = "0x5E1A460", VA = "0x5E1B460", Slot = "11")]
			protected override void ConvertNull(InterpretedFrame frame)
			{
			}
		}

		[Token(Token = "0x400042B")]
		[FieldOffset(Offset = "0x10")]
		private readonly Type _t;

		[Token(Token = "0x6000B22")]
		[Address(RVA = "0x5E1B260", Offset = "0x5E1A260", VA = "0x5E1B260")]
		protected CastInstructionNoT(Type t)
		{
		}

		[Token(Token = "0x6000B23")]
		[Address(RVA = "0x5E1B190", Offset = "0x5E1A190", VA = "0x5E1B190")]
		public new static CastInstruction Create(Type t)
		{
			return null;
		}

		[Token(Token = "0x6000B24")]
		[Address(RVA = "0x5E1B2F0", Offset = "0x5E1A2F0", VA = "0x5E1B2F0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000B25")]
		protected abstract void ConvertNull(InterpretedFrame frame);
	}

	[Token(Token = "0x400041C")]
	[FieldOffset(Offset = "0x0")]
	private static CastInstruction s_Boolean;

	[Token(Token = "0x400041D")]
	[FieldOffset(Offset = "0x8")]
	private static CastInstruction s_Byte;

	[Token(Token = "0x400041E")]
	[FieldOffset(Offset = "0x10")]
	private static CastInstruction s_Char;

	[Token(Token = "0x400041F")]
	[FieldOffset(Offset = "0x18")]
	private static CastInstruction s_DateTime;

	[Token(Token = "0x4000420")]
	[FieldOffset(Offset = "0x20")]
	private static CastInstruction s_Decimal;

	[Token(Token = "0x4000421")]
	[FieldOffset(Offset = "0x28")]
	private static CastInstruction s_Double;

	[Token(Token = "0x4000422")]
	[FieldOffset(Offset = "0x30")]
	private static CastInstruction s_Int16;

	[Token(Token = "0x4000423")]
	[FieldOffset(Offset = "0x38")]
	private static CastInstruction s_Int32;

	[Token(Token = "0x4000424")]
	[FieldOffset(Offset = "0x40")]
	private static CastInstruction s_Int64;

	[Token(Token = "0x4000425")]
	[FieldOffset(Offset = "0x48")]
	private static CastInstruction s_SByte;

	[Token(Token = "0x4000426")]
	[FieldOffset(Offset = "0x50")]
	private static CastInstruction s_Single;

	[Token(Token = "0x4000427")]
	[FieldOffset(Offset = "0x58")]
	private static CastInstruction s_String;

	[Token(Token = "0x4000428")]
	[FieldOffset(Offset = "0x60")]
	private static CastInstruction s_UInt16;

	[Token(Token = "0x4000429")]
	[FieldOffset(Offset = "0x68")]
	private static CastInstruction s_UInt32;

	[Token(Token = "0x400042A")]
	[FieldOffset(Offset = "0x70")]
	private static CastInstruction s_UInt64;

	[Token(Token = "0x17000247")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000B1B")]
		[Address(RVA = "0x5E1AA10", Offset = "0x5E19A10", VA = "0x5E1AA10", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000248")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000B1C")]
		[Address(RVA = "0x5E1AA20", Offset = "0x5E19A20", VA = "0x5E1AA20", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000249")]
	public override string InstructionName
	{
		[Token(Token = "0x6000B1D")]
		[Address(RVA = "0x5E1AA30", Offset = "0x5E19A30", VA = "0x5E1AA30", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000B1E")]
	[Address(RVA = "0x5E1AA60", Offset = "0x5E19A60", VA = "0x5E1AA60")]
	public static Instruction Create(Type t)
	{
		return null;
	}

	[Token(Token = "0x6000B1F")]
	[Address(RVA = "0x5E1B250", Offset = "0x5E1A250", VA = "0x5E1B250")]
	protected CastInstruction()
	{
	}
}
