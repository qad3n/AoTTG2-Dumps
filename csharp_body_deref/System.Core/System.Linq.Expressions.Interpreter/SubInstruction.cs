// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.SubInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x2000221")]
internal abstract class SubInstruction : Instruction
{
	[Token(Token = "0x2000222")]
	private sealed class SubInt16 : SubInstruction
	{
		[Token(Token = "0x6000ACD")]
		[Address(RVA = "0x5E18000", Offset = "0x5E17000", VA = "0x5E18000", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000ACE")]
		[Address(RVA = "0x5E17F80", Offset = "0x5E16F80", VA = "0x5E17F80")]
		public SubInt16()
		{
		}
	}

	[Token(Token = "0x2000223")]
	private sealed class SubInt32 : SubInstruction
	{
		[Token(Token = "0x6000ACF")]
		[Address(RVA = "0x5E18160", Offset = "0x5E17160", VA = "0x5E18160", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000AD0")]
		[Address(RVA = "0x5E17F90", Offset = "0x5E16F90", VA = "0x5E17F90")]
		public SubInt32()
		{
		}
	}

	[Token(Token = "0x2000224")]
	private sealed class SubInt64 : SubInstruction
	{
		[Token(Token = "0x6000AD1")]
		[Address(RVA = "0x5E182B0", Offset = "0x5E172B0", VA = "0x5E182B0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000AD2")]
		[Address(RVA = "0x5E17FA0", Offset = "0x5E16FA0", VA = "0x5E17FA0")]
		public SubInt64()
		{
		}
	}

	[Token(Token = "0x2000225")]
	private sealed class SubUInt16 : SubInstruction
	{
		[Token(Token = "0x6000AD3")]
		[Address(RVA = "0x5E18410", Offset = "0x5E17410", VA = "0x5E18410", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000AD4")]
		[Address(RVA = "0x5E17FB0", Offset = "0x5E16FB0", VA = "0x5E17FB0")]
		public SubUInt16()
		{
		}
	}

	[Token(Token = "0x2000226")]
	private sealed class SubUInt32 : SubInstruction
	{
		[Token(Token = "0x6000AD5")]
		[Address(RVA = "0x5E18570", Offset = "0x5E17570", VA = "0x5E18570", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000AD6")]
		[Address(RVA = "0x5E17FC0", Offset = "0x5E16FC0", VA = "0x5E17FC0")]
		public SubUInt32()
		{
		}
	}

	[Token(Token = "0x2000227")]
	private sealed class SubUInt64 : SubInstruction
	{
		[Token(Token = "0x6000AD7")]
		[Address(RVA = "0x5E186D0", Offset = "0x5E176D0", VA = "0x5E186D0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000AD8")]
		[Address(RVA = "0x5E17FD0", Offset = "0x5E16FD0", VA = "0x5E17FD0")]
		public SubUInt64()
		{
		}
	}

	[Token(Token = "0x2000228")]
	private sealed class SubSingle : SubInstruction
	{
		[Token(Token = "0x6000AD9")]
		[Address(RVA = "0x5E18830", Offset = "0x5E17830", VA = "0x5E18830", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000ADA")]
		[Address(RVA = "0x5E17FE0", Offset = "0x5E16FE0", VA = "0x5E17FE0")]
		public SubSingle()
		{
		}
	}

	[Token(Token = "0x2000229")]
	private sealed class SubDouble : SubInstruction
	{
		[Token(Token = "0x6000ADB")]
		[Address(RVA = "0x5E18990", Offset = "0x5E17990", VA = "0x5E18990", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000ADC")]
		[Address(RVA = "0x5E17FF0", Offset = "0x5E16FF0", VA = "0x5E17FF0")]
		public SubDouble()
		{
		}
	}

	[Token(Token = "0x4000403")]
	[FieldOffset(Offset = "0x0")]
	private static Instruction s_Int16;

	[Token(Token = "0x4000404")]
	[FieldOffset(Offset = "0x8")]
	private static Instruction s_Int32;

	[Token(Token = "0x4000405")]
	[FieldOffset(Offset = "0x10")]
	private static Instruction s_Int64;

	[Token(Token = "0x4000406")]
	[FieldOffset(Offset = "0x18")]
	private static Instruction s_UInt16;

	[Token(Token = "0x4000407")]
	[FieldOffset(Offset = "0x20")]
	private static Instruction s_UInt32;

	[Token(Token = "0x4000408")]
	[FieldOffset(Offset = "0x28")]
	private static Instruction s_UInt64;

	[Token(Token = "0x4000409")]
	[FieldOffset(Offset = "0x30")]
	private static Instruction s_Single;

	[Token(Token = "0x400040A")]
	[FieldOffset(Offset = "0x38")]
	private static Instruction s_Double;

	[Token(Token = "0x17000230")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000AC8")]
		[Address(RVA = "0x5E17B60", Offset = "0x5E16B60", VA = "0x5E17B60", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000231")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000AC9")]
		[Address(RVA = "0x5E17B70", Offset = "0x5E16B70", VA = "0x5E17B70", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000232")]
	public override string InstructionName
	{
		[Token(Token = "0x6000ACA")]
		[Address(RVA = "0x5E17B80", Offset = "0x5E16B80", VA = "0x5E17B80", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000ACB")]
	[Address(RVA = "0x5E17BB0", Offset = "0x5E16BB0", VA = "0x5E17BB0")]
	private SubInstruction()
	{
	}

	[Token(Token = "0x6000ACC")]
	[Address(RVA = "0x5E17BC0", Offset = "0x5E16BC0", VA = "0x5E17BC0")]
	public static Instruction Create(Type type)
	{
		return null;
	}
}
