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
		[Token(Token = "0x6000AC3")]
		[Address(RVA = "0x4502CE0", Offset = "0x4502CE0", VA = "0x4502CE0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000AC4")]
		[Address(RVA = "0x4502C60", Offset = "0x4502C60", VA = "0x4502C60")]
		public SubInt16()
		{
		}
	}

	[Token(Token = "0x2000222")]
	private sealed class SubInt32 : SubInstruction
	{
		[Token(Token = "0x6000AC5")]
		[Address(RVA = "0x4502E40", Offset = "0x4502E40", VA = "0x4502E40", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000AC6")]
		[Address(RVA = "0x4502C70", Offset = "0x4502C70", VA = "0x4502C70")]
		public SubInt32()
		{
		}
	}

	[Token(Token = "0x2000223")]
	private sealed class SubInt64 : SubInstruction
	{
		[Token(Token = "0x6000AC7")]
		[Address(RVA = "0x4502F90", Offset = "0x4502F90", VA = "0x4502F90", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000AC8")]
		[Address(RVA = "0x4502C80", Offset = "0x4502C80", VA = "0x4502C80")]
		public SubInt64()
		{
		}
	}

	[Token(Token = "0x2000224")]
	private sealed class SubUInt16 : SubInstruction
	{
		[Token(Token = "0x6000AC9")]
		[Address(RVA = "0x45030F0", Offset = "0x45030F0", VA = "0x45030F0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000ACA")]
		[Address(RVA = "0x4502C90", Offset = "0x4502C90", VA = "0x4502C90")]
		public SubUInt16()
		{
		}
	}

	[Token(Token = "0x2000225")]
	private sealed class SubUInt32 : SubInstruction
	{
		[Token(Token = "0x6000ACB")]
		[Address(RVA = "0x4503250", Offset = "0x4503250", VA = "0x4503250", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000ACC")]
		[Address(RVA = "0x4502CA0", Offset = "0x4502CA0", VA = "0x4502CA0")]
		public SubUInt32()
		{
		}
	}

	[Token(Token = "0x2000226")]
	private sealed class SubUInt64 : SubInstruction
	{
		[Token(Token = "0x6000ACD")]
		[Address(RVA = "0x45033B0", Offset = "0x45033B0", VA = "0x45033B0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000ACE")]
		[Address(RVA = "0x4502CB0", Offset = "0x4502CB0", VA = "0x4502CB0")]
		public SubUInt64()
		{
		}
	}

	[Token(Token = "0x2000227")]
	private sealed class SubSingle : SubInstruction
	{
		[Token(Token = "0x6000ACF")]
		[Address(RVA = "0x4503510", Offset = "0x4503510", VA = "0x4503510", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000AD0")]
		[Address(RVA = "0x4502CC0", Offset = "0x4502CC0", VA = "0x4502CC0")]
		public SubSingle()
		{
		}
	}

	[Token(Token = "0x2000228")]
	private sealed class SubDouble : SubInstruction
	{
		[Token(Token = "0x6000AD1")]
		[Address(RVA = "0x4503670", Offset = "0x4503670", VA = "0x4503670", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000AD2")]
		[Address(RVA = "0x4502CD0", Offset = "0x4502CD0", VA = "0x4502CD0")]
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
		[Token(Token = "0x6000ABE")]
		[Address(RVA = "0x4502840", Offset = "0x4502840", VA = "0x4502840", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700022F")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000ABF")]
		[Address(RVA = "0x4502850", Offset = "0x4502850", VA = "0x4502850", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000230")]
	public override string InstructionName
	{
		[Token(Token = "0x6000AC0")]
		[Address(RVA = "0x4502860", Offset = "0x4502860", VA = "0x4502860", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000AC1")]
	[Address(RVA = "0x4502890", Offset = "0x4502890", VA = "0x4502890")]
	private SubInstruction()
	{
	}

	[Token(Token = "0x6000AC2")]
	[Address(RVA = "0x45028A0", Offset = "0x45028A0", VA = "0x45028A0")]
	public static Instruction Create(Type type)
	{
		return null;
	}
}
