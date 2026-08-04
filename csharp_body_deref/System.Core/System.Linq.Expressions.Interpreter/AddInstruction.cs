// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.AddInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000C7")]
internal abstract class AddInstruction : Instruction
{
	[Token(Token = "0x20000C8")]
	private sealed class AddInt16 : AddInstruction
	{
		[Token(Token = "0x600058A")]
		[Address(RVA = "0x44C2850", Offset = "0x44C2850", VA = "0x44C2850", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x600058B")]
		[Address(RVA = "0x44C27D0", Offset = "0x44C27D0", VA = "0x44C27D0")]
		public AddInt16()
		{
		}
	}

	[Token(Token = "0x20000C9")]
	private sealed class AddInt32 : AddInstruction
	{
		[Token(Token = "0x600058C")]
		[Address(RVA = "0x44C29B0", Offset = "0x44C29B0", VA = "0x44C29B0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x600058D")]
		[Address(RVA = "0x44C27E0", Offset = "0x44C27E0", VA = "0x44C27E0")]
		public AddInt32()
		{
		}
	}

	[Token(Token = "0x20000CA")]
	private sealed class AddInt64 : AddInstruction
	{
		[Token(Token = "0x600058E")]
		[Address(RVA = "0x44C2B00", Offset = "0x44C2B00", VA = "0x44C2B00", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x600058F")]
		[Address(RVA = "0x44C27F0", Offset = "0x44C27F0", VA = "0x44C27F0")]
		public AddInt64()
		{
		}
	}

	[Token(Token = "0x20000CB")]
	private sealed class AddUInt16 : AddInstruction
	{
		[Token(Token = "0x6000590")]
		[Address(RVA = "0x44C2C60", Offset = "0x44C2C60", VA = "0x44C2C60", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000591")]
		[Address(RVA = "0x44C2800", Offset = "0x44C2800", VA = "0x44C2800")]
		public AddUInt16()
		{
		}
	}

	[Token(Token = "0x20000CC")]
	private sealed class AddUInt32 : AddInstruction
	{
		[Token(Token = "0x6000592")]
		[Address(RVA = "0x44C2DC0", Offset = "0x44C2DC0", VA = "0x44C2DC0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000593")]
		[Address(RVA = "0x44C2810", Offset = "0x44C2810", VA = "0x44C2810")]
		public AddUInt32()
		{
		}
	}

	[Token(Token = "0x20000CD")]
	private sealed class AddUInt64 : AddInstruction
	{
		[Token(Token = "0x6000594")]
		[Address(RVA = "0x44C2F20", Offset = "0x44C2F20", VA = "0x44C2F20", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000595")]
		[Address(RVA = "0x44C2820", Offset = "0x44C2820", VA = "0x44C2820")]
		public AddUInt64()
		{
		}
	}

	[Token(Token = "0x20000CE")]
	private sealed class AddSingle : AddInstruction
	{
		[Token(Token = "0x6000596")]
		[Address(RVA = "0x44C3080", Offset = "0x44C3080", VA = "0x44C3080", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000597")]
		[Address(RVA = "0x44C2830", Offset = "0x44C2830", VA = "0x44C2830")]
		public AddSingle()
		{
		}
	}

	[Token(Token = "0x20000CF")]
	private sealed class AddDouble : AddInstruction
	{
		[Token(Token = "0x6000598")]
		[Address(RVA = "0x44C31E0", Offset = "0x44C31E0", VA = "0x44C31E0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000599")]
		[Address(RVA = "0x44C2840", Offset = "0x44C2840", VA = "0x44C2840")]
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
		[Address(RVA = "0x44C23B0", Offset = "0x44C23B0", VA = "0x44C23B0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700013B")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000586")]
		[Address(RVA = "0x44C23C0", Offset = "0x44C23C0", VA = "0x44C23C0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700013C")]
	public override string InstructionName
	{
		[Token(Token = "0x6000587")]
		[Address(RVA = "0x44C23D0", Offset = "0x44C23D0", VA = "0x44C23D0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000588")]
	[Address(RVA = "0x44C2400", Offset = "0x44C2400", VA = "0x44C2400")]
	private AddInstruction()
	{
	}

	[Token(Token = "0x6000589")]
	[Address(RVA = "0x44C2410", Offset = "0x44C2410", VA = "0x44C2410")]
	public static Instruction Create(Type type)
	{
		return null;
	}
}
