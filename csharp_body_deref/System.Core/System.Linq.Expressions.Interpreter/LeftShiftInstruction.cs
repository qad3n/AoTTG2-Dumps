using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x200016B")]
internal abstract class LeftShiftInstruction : Instruction
{
	[Token(Token = "0x200016C")]
	private sealed class LeftShiftSByte : LeftShiftInstruction
	{
		[Token(Token = "0x600081C")]
		[Address(RVA = "0x41B7120", Offset = "0x41B7120", VA = "0x41B7120", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x600081D")]
		[Address(RVA = "0x41B70A0", Offset = "0x41B70A0", VA = "0x41B70A0")]
		public LeftShiftSByte()
		{
		}
	}

	[Token(Token = "0x200016D")]
	private sealed class LeftShiftInt16 : LeftShiftInstruction
	{
		[Token(Token = "0x600081E")]
		[Address(RVA = "0x41B7210", Offset = "0x41B7210", VA = "0x41B7210", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x600081F")]
		[Address(RVA = "0x41B70B0", Offset = "0x41B70B0", VA = "0x41B70B0")]
		public LeftShiftInt16()
		{
		}
	}

	[Token(Token = "0x200016E")]
	private sealed class LeftShiftInt32 : LeftShiftInstruction
	{
		[Token(Token = "0x6000820")]
		[Address(RVA = "0x41B7300", Offset = "0x41B7300", VA = "0x41B7300", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000821")]
		[Address(RVA = "0x41B70C0", Offset = "0x41B70C0", VA = "0x41B70C0")]
		public LeftShiftInt32()
		{
		}
	}

	[Token(Token = "0x200016F")]
	private sealed class LeftShiftInt64 : LeftShiftInstruction
	{
		[Token(Token = "0x6000822")]
		[Address(RVA = "0x41B73E0", Offset = "0x41B73E0", VA = "0x41B73E0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000823")]
		[Address(RVA = "0x41B70D0", Offset = "0x41B70D0", VA = "0x41B70D0")]
		public LeftShiftInt64()
		{
		}
	}

	[Token(Token = "0x2000170")]
	private sealed class LeftShiftByte : LeftShiftInstruction
	{
		[Token(Token = "0x6000824")]
		[Address(RVA = "0x41B7540", Offset = "0x41B7540", VA = "0x41B7540", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000825")]
		[Address(RVA = "0x41B70E0", Offset = "0x41B70E0", VA = "0x41B70E0")]
		public LeftShiftByte()
		{
		}
	}

	[Token(Token = "0x2000171")]
	private sealed class LeftShiftUInt16 : LeftShiftInstruction
	{
		[Token(Token = "0x6000826")]
		[Address(RVA = "0x41B7630", Offset = "0x41B7630", VA = "0x41B7630", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000827")]
		[Address(RVA = "0x41B70F0", Offset = "0x41B70F0", VA = "0x41B70F0")]
		public LeftShiftUInt16()
		{
		}
	}

	[Token(Token = "0x2000172")]
	private sealed class LeftShiftUInt32 : LeftShiftInstruction
	{
		[Token(Token = "0x6000828")]
		[Address(RVA = "0x41B7720", Offset = "0x41B7720", VA = "0x41B7720", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000829")]
		[Address(RVA = "0x41B7100", Offset = "0x41B7100", VA = "0x41B7100")]
		public LeftShiftUInt32()
		{
		}
	}

	[Token(Token = "0x2000173")]
	private sealed class LeftShiftUInt64 : LeftShiftInstruction
	{
		[Token(Token = "0x600082A")]
		[Address(RVA = "0x41B7880", Offset = "0x41B7880", VA = "0x41B7880", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x600082B")]
		[Address(RVA = "0x41B7110", Offset = "0x41B7110", VA = "0x41B7110")]
		public LeftShiftUInt64()
		{
		}
	}

	[Token(Token = "0x4000313")]
	[FieldOffset(Offset = "0x0")]
	private static Instruction s_SByte;

	[Token(Token = "0x4000314")]
	[FieldOffset(Offset = "0x8")]
	private static Instruction s_Int16;

	[Token(Token = "0x4000315")]
	[FieldOffset(Offset = "0x10")]
	private static Instruction s_Int32;

	[Token(Token = "0x4000316")]
	[FieldOffset(Offset = "0x18")]
	private static Instruction s_Int64;

	[Token(Token = "0x4000317")]
	[FieldOffset(Offset = "0x20")]
	private static Instruction s_Byte;

	[Token(Token = "0x4000318")]
	[FieldOffset(Offset = "0x28")]
	private static Instruction s_UInt16;

	[Token(Token = "0x4000319")]
	[FieldOffset(Offset = "0x30")]
	private static Instruction s_UInt32;

	[Token(Token = "0x400031A")]
	[FieldOffset(Offset = "0x38")]
	private static Instruction s_UInt64;

	[Token(Token = "0x170001C6")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000817")]
		[Address(RVA = "0x41B7040", Offset = "0x41B7040", VA = "0x41B7040", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001C7")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000818")]
		[Address(RVA = "0x41B7050", Offset = "0x41B7050", VA = "0x41B7050", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001C8")]
	public override string InstructionName
	{
		[Token(Token = "0x6000819")]
		[Address(RVA = "0x41B7060", Offset = "0x41B7060", VA = "0x41B7060", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600081A")]
	[Address(RVA = "0x41B7090", Offset = "0x41B7090", VA = "0x41B7090")]
	private LeftShiftInstruction()
	{
	}

	[Token(Token = "0x600081B")]
	[Address(RVA = "0x41B1750", Offset = "0x41B1750", VA = "0x41B1750")]
	public static Instruction Create(Type type)
	{
		return null;
	}
}
