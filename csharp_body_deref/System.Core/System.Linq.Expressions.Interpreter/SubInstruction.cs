// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.SubInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x2000220")]
internal abstract class SubInstruction : Instruction
{
	[Token(Token = "0x2000221")]
	private sealed class SubInt16 : SubInstruction
	{
		[Token(Token = "0x6000AC2")]
		[Address(RVA = "0x247F030", Offset = "0x247D630", VA = "0x18247F030", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000AC3")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public SubInt16()
		{
		}
	}

	[Token(Token = "0x2000222")]
	private sealed class SubInt32 : SubInstruction
	{
		[Token(Token = "0x6000AC4")]
		[Address(RVA = "0x247F190", Offset = "0x247D790", VA = "0x18247F190", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000AC5")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public SubInt32()
		{
		}
	}

	[Token(Token = "0x2000223")]
	private sealed class SubInt64 : SubInstruction
	{
		[Token(Token = "0x6000AC6")]
		[Address(RVA = "0x247F2E0", Offset = "0x247D8E0", VA = "0x18247F2E0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000AC7")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public SubInt64()
		{
		}
	}

	[Token(Token = "0x2000224")]
	private sealed class SubUInt16 : SubInstruction
	{
		[Token(Token = "0x6000AC8")]
		[Address(RVA = "0x2480840", Offset = "0x247EE40", VA = "0x182480840", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000AC9")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public SubUInt16()
		{
		}
	}

	[Token(Token = "0x2000225")]
	private sealed class SubUInt32 : SubInstruction
	{
		[Token(Token = "0x6000ACA")]
		[Address(RVA = "0x24809A0", Offset = "0x247EFA0", VA = "0x1824809A0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000ACB")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public SubUInt32()
		{
		}
	}

	[Token(Token = "0x2000226")]
	private sealed class SubUInt64 : SubInstruction
	{
		[Token(Token = "0x6000ACC")]
		[Address(RVA = "0x2480B00", Offset = "0x247F100", VA = "0x182480B00", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000ACD")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public SubUInt64()
		{
		}
	}

	[Token(Token = "0x2000227")]
	private sealed class SubSingle : SubInstruction
	{
		[Token(Token = "0x6000ACE")]
		[Address(RVA = "0x24806D0", Offset = "0x247ECD0", VA = "0x1824806D0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000ACF")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public SubSingle()
		{
		}
	}

	[Token(Token = "0x2000228")]
	private sealed class SubDouble : SubInstruction
	{
		[Token(Token = "0x6000AD0")]
		[Address(RVA = "0x247EA10", Offset = "0x247D010", VA = "0x18247EA10", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000AD1")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public SubDouble()
		{
		}
	}

	[Token(Token = "0x40003FA")]
	[FieldOffset(Offset = "0x0")]
	private static Instruction s_Int16;

	[Token(Token = "0x40003FB")]
	[FieldOffset(Offset = "0x8")]
	private static Instruction s_Int32;

	[Token(Token = "0x40003FC")]
	[FieldOffset(Offset = "0x10")]
	private static Instruction s_Int64;

	[Token(Token = "0x40003FD")]
	[FieldOffset(Offset = "0x18")]
	private static Instruction s_UInt16;

	[Token(Token = "0x40003FE")]
	[FieldOffset(Offset = "0x20")]
	private static Instruction s_UInt32;

	[Token(Token = "0x40003FF")]
	[FieldOffset(Offset = "0x28")]
	private static Instruction s_UInt64;

	[Token(Token = "0x4000400")]
	[FieldOffset(Offset = "0x30")]
	private static Instruction s_Single;

	[Token(Token = "0x4000401")]
	[FieldOffset(Offset = "0x38")]
	private static Instruction s_Double;

	[Token(Token = "0x1700022E")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000ABD")]
		[Address(RVA = "0x846F80", Offset = "0x845580", VA = "0x180846F80", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700022F")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000ABE")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000230")]
	public override string InstructionName
	{
		[Token(Token = "0x6000ABF")]
		[Address(RVA = "0x247F000", Offset = "0x247D600", VA = "0x18247F000", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000AC0")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	private SubInstruction()
	{
	}

	[Token(Token = "0x6000AC1")]
	[Address(RVA = "0x247EB80", Offset = "0x247D180", VA = "0x18247EB80")]
	public static Instruction Create(Type type)
	{
		return null;
	}
}
