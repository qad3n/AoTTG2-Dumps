using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000C7")]
internal abstract class AddInstruction : Instruction
{
	[Token(Token = "0x20000C8")]
	private sealed class AddInt16 : AddInstruction
	{
		[Token(Token = "0x600058A")]
		[Address(RVA = "0x419D750", Offset = "0x419D750", VA = "0x419D750", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x600058B")]
		[Address(RVA = "0x419D6D0", Offset = "0x419D6D0", VA = "0x419D6D0")]
		public AddInt16()
		{
		}
	}

	[Token(Token = "0x20000C9")]
	private sealed class AddInt32 : AddInstruction
	{
		[Token(Token = "0x600058C")]
		[Address(RVA = "0x419D8B0", Offset = "0x419D8B0", VA = "0x419D8B0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x600058D")]
		[Address(RVA = "0x419D6E0", Offset = "0x419D6E0", VA = "0x419D6E0")]
		public AddInt32()
		{
		}
	}

	[Token(Token = "0x20000CA")]
	private sealed class AddInt64 : AddInstruction
	{
		[Token(Token = "0x600058E")]
		[Address(RVA = "0x419DA00", Offset = "0x419DA00", VA = "0x419DA00", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x600058F")]
		[Address(RVA = "0x419D6F0", Offset = "0x419D6F0", VA = "0x419D6F0")]
		public AddInt64()
		{
		}
	}

	[Token(Token = "0x20000CB")]
	private sealed class AddUInt16 : AddInstruction
	{
		[Token(Token = "0x6000590")]
		[Address(RVA = "0x419DB60", Offset = "0x419DB60", VA = "0x419DB60", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000591")]
		[Address(RVA = "0x419D700", Offset = "0x419D700", VA = "0x419D700")]
		public AddUInt16()
		{
		}
	}

	[Token(Token = "0x20000CC")]
	private sealed class AddUInt32 : AddInstruction
	{
		[Token(Token = "0x6000592")]
		[Address(RVA = "0x419DCC0", Offset = "0x419DCC0", VA = "0x419DCC0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000593")]
		[Address(RVA = "0x419D710", Offset = "0x419D710", VA = "0x419D710")]
		public AddUInt32()
		{
		}
	}

	[Token(Token = "0x20000CD")]
	private sealed class AddUInt64 : AddInstruction
	{
		[Token(Token = "0x6000594")]
		[Address(RVA = "0x419DE20", Offset = "0x419DE20", VA = "0x419DE20", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000595")]
		[Address(RVA = "0x419D720", Offset = "0x419D720", VA = "0x419D720")]
		public AddUInt64()
		{
		}
	}

	[Token(Token = "0x20000CE")]
	private sealed class AddSingle : AddInstruction
	{
		[Token(Token = "0x6000596")]
		[Address(RVA = "0x419DF80", Offset = "0x419DF80", VA = "0x419DF80", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000597")]
		[Address(RVA = "0x419D730", Offset = "0x419D730", VA = "0x419D730")]
		public AddSingle()
		{
		}
	}

	[Token(Token = "0x20000CF")]
	private sealed class AddDouble : AddInstruction
	{
		[Token(Token = "0x6000598")]
		[Address(RVA = "0x419E0E0", Offset = "0x419E0E0", VA = "0x419E0E0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000599")]
		[Address(RVA = "0x419D740", Offset = "0x419D740", VA = "0x419D740")]
		public AddDouble()
		{
		}
	}

	[Token(Token = "0x400020B")]
	[FieldOffset(Offset = "0x0")]
	private static Instruction s_Int16;

	[Token(Token = "0x400020C")]
	[FieldOffset(Offset = "0x8")]
	private static Instruction s_Int32;

	[Token(Token = "0x400020D")]
	[FieldOffset(Offset = "0x10")]
	private static Instruction s_Int64;

	[Token(Token = "0x400020E")]
	[FieldOffset(Offset = "0x18")]
	private static Instruction s_UInt16;

	[Token(Token = "0x400020F")]
	[FieldOffset(Offset = "0x20")]
	private static Instruction s_UInt32;

	[Token(Token = "0x4000210")]
	[FieldOffset(Offset = "0x28")]
	private static Instruction s_UInt64;

	[Token(Token = "0x4000211")]
	[FieldOffset(Offset = "0x30")]
	private static Instruction s_Single;

	[Token(Token = "0x4000212")]
	[FieldOffset(Offset = "0x38")]
	private static Instruction s_Double;

	[Token(Token = "0x1700013A")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000585")]
		[Address(RVA = "0x419D2B0", Offset = "0x419D2B0", VA = "0x419D2B0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700013B")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000586")]
		[Address(RVA = "0x419D2C0", Offset = "0x419D2C0", VA = "0x419D2C0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700013C")]
	public override string InstructionName
	{
		[Token(Token = "0x6000587")]
		[Address(RVA = "0x419D2D0", Offset = "0x419D2D0", VA = "0x419D2D0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000588")]
	[Address(RVA = "0x419D300", Offset = "0x419D300", VA = "0x419D300")]
	private AddInstruction()
	{
	}

	[Token(Token = "0x6000589")]
	[Address(RVA = "0x419D310", Offset = "0x419D310", VA = "0x419D310")]
	public static Instruction Create(Type type)
	{
		return null;
	}
}
