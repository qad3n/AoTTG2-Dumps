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
		[Token(Token = "0x6000589")]
		[Address(RVA = "0x2425750", Offset = "0x2423D50", VA = "0x182425750", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x600058A")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public AddInt16()
		{
		}
	}

	[Token(Token = "0x20000C9")]
	private sealed class AddInt32 : AddInstruction
	{
		[Token(Token = "0x600058B")]
		[Address(RVA = "0x24258B0", Offset = "0x2423EB0", VA = "0x1824258B0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x600058C")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public AddInt32()
		{
		}
	}

	[Token(Token = "0x20000CA")]
	private sealed class AddInt64 : AddInstruction
	{
		[Token(Token = "0x600058D")]
		[Address(RVA = "0x2425A00", Offset = "0x2424000", VA = "0x182425A00", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x600058E")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public AddInt64()
		{
		}
	}

	[Token(Token = "0x20000CB")]
	private sealed class AddUInt16 : AddInstruction
	{
		[Token(Token = "0x600058F")]
		[Address(RVA = "0x2426F10", Offset = "0x2425510", VA = "0x182426F10", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000590")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public AddUInt16()
		{
		}
	}

	[Token(Token = "0x20000CC")]
	private sealed class AddUInt32 : AddInstruction
	{
		[Token(Token = "0x6000591")]
		[Address(RVA = "0x2427070", Offset = "0x2425670", VA = "0x182427070", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000592")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public AddUInt32()
		{
		}
	}

	[Token(Token = "0x20000CD")]
	private sealed class AddUInt64 : AddInstruction
	{
		[Token(Token = "0x6000593")]
		[Address(RVA = "0x24271D0", Offset = "0x24257D0", VA = "0x1824271D0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000594")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public AddUInt64()
		{
		}
	}

	[Token(Token = "0x20000CE")]
	private sealed class AddSingle : AddInstruction
	{
		[Token(Token = "0x6000595")]
		[Address(RVA = "0x2426DA0", Offset = "0x24253A0", VA = "0x182426DA0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000596")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public AddSingle()
		{
		}
	}

	[Token(Token = "0x20000CF")]
	private sealed class AddDouble : AddInstruction
	{
		[Token(Token = "0x6000597")]
		[Address(RVA = "0x2425130", Offset = "0x2423730", VA = "0x182425130", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000598")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
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
		[Token(Token = "0x6000584")]
		[Address(RVA = "0x846F80", Offset = "0x845580", VA = "0x180846F80", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700013B")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000585")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700013C")]
	public override string InstructionName
	{
		[Token(Token = "0x6000586")]
		[Address(RVA = "0x2425720", Offset = "0x2423D20", VA = "0x182425720", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000587")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	private AddInstruction()
	{
	}

	[Token(Token = "0x6000588")]
	[Address(RVA = "0x24252A0", Offset = "0x24238A0", VA = "0x1824252A0")]
	public static Instruction Create(Type type)
	{
		return null;
	}
}
