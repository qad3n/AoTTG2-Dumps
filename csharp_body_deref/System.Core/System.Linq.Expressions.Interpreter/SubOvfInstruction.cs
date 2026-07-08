using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x2000229")]
internal abstract class SubOvfInstruction : Instruction
{
	[Token(Token = "0x200022A")]
	private sealed class SubOvfInt16 : SubOvfInstruction
	{
		[Token(Token = "0x6000AD8")]
		[Address(RVA = "0x41DEA90", Offset = "0x41DEA90", VA = "0x41DEA90", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000AD9")]
		[Address(RVA = "0x41DEA30", Offset = "0x41DEA30", VA = "0x41DEA30")]
		public SubOvfInt16()
		{
		}
	}

	[Token(Token = "0x200022B")]
	private sealed class SubOvfInt32 : SubOvfInstruction
	{
		[Token(Token = "0x6000ADA")]
		[Address(RVA = "0x41DED40", Offset = "0x41DED40", VA = "0x41DED40", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000ADB")]
		[Address(RVA = "0x41DEA40", Offset = "0x41DEA40", VA = "0x41DEA40")]
		public SubOvfInt32()
		{
		}
	}

	[Token(Token = "0x200022C")]
	private sealed class SubOvfInt64 : SubOvfInstruction
	{
		[Token(Token = "0x6000ADC")]
		[Address(RVA = "0x41DEF80", Offset = "0x41DEF80", VA = "0x41DEF80", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000ADD")]
		[Address(RVA = "0x41DEA50", Offset = "0x41DEA50", VA = "0x41DEA50")]
		public SubOvfInt64()
		{
		}
	}

	[Token(Token = "0x200022D")]
	private sealed class SubOvfUInt16 : SubOvfInstruction
	{
		[Token(Token = "0x6000ADE")]
		[Address(RVA = "0x41DF1B0", Offset = "0x41DF1B0", VA = "0x41DF1B0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000ADF")]
		[Address(RVA = "0x41DEA60", Offset = "0x41DEA60", VA = "0x41DEA60")]
		public SubOvfUInt16()
		{
		}
	}

	[Token(Token = "0x200022E")]
	private sealed class SubOvfUInt32 : SubOvfInstruction
	{
		[Token(Token = "0x6000AE0")]
		[Address(RVA = "0x41DF450", Offset = "0x41DF450", VA = "0x41DF450", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000AE1")]
		[Address(RVA = "0x41DEA70", Offset = "0x41DEA70", VA = "0x41DEA70")]
		public SubOvfUInt32()
		{
		}
	}

	[Token(Token = "0x200022F")]
	private sealed class SubOvfUInt64 : SubOvfInstruction
	{
		[Token(Token = "0x6000AE2")]
		[Address(RVA = "0x41DF640", Offset = "0x41DF640", VA = "0x41DF640", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000AE3")]
		[Address(RVA = "0x41DEA80", Offset = "0x41DEA80", VA = "0x41DEA80")]
		public SubOvfUInt64()
		{
		}
	}

	[Token(Token = "0x4000402")]
	[FieldOffset(Offset = "0x0")]
	private static Instruction s_Int16;

	[Token(Token = "0x4000403")]
	[FieldOffset(Offset = "0x8")]
	private static Instruction s_Int32;

	[Token(Token = "0x4000404")]
	[FieldOffset(Offset = "0x10")]
	private static Instruction s_Int64;

	[Token(Token = "0x4000405")]
	[FieldOffset(Offset = "0x18")]
	private static Instruction s_UInt16;

	[Token(Token = "0x4000406")]
	[FieldOffset(Offset = "0x20")]
	private static Instruction s_UInt32;

	[Token(Token = "0x4000407")]
	[FieldOffset(Offset = "0x28")]
	private static Instruction s_UInt64;

	[Token(Token = "0x17000231")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000AD3")]
		[Address(RVA = "0x41DE6E0", Offset = "0x41DE6E0", VA = "0x41DE6E0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000232")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000AD4")]
		[Address(RVA = "0x41DE6F0", Offset = "0x41DE6F0", VA = "0x41DE6F0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000233")]
	public override string InstructionName
	{
		[Token(Token = "0x6000AD5")]
		[Address(RVA = "0x41DE700", Offset = "0x41DE700", VA = "0x41DE700", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000AD6")]
	[Address(RVA = "0x41DE730", Offset = "0x41DE730", VA = "0x41DE730")]
	private SubOvfInstruction()
	{
	}

	[Token(Token = "0x6000AD7")]
	[Address(RVA = "0x41DE740", Offset = "0x41DE740", VA = "0x41DE740")]
	public static Instruction Create(Type type)
	{
		return null;
	}
}
