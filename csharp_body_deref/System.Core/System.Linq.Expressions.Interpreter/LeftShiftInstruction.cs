// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.LeftShiftInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x200016B")]
internal abstract class LeftShiftInstruction : Instruction
{
	[Token(Token = "0x200016C")]
	private sealed class LeftShiftSByte : LeftShiftInstruction
	{
		[Token(Token = "0x600081B")]
		[Address(RVA = "0x24517A0", Offset = "0x244FDA0", VA = "0x1824517A0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x600081C")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public LeftShiftSByte()
		{
		}
	}

	[Token(Token = "0x200016D")]
	private sealed class LeftShiftInt16 : LeftShiftInstruction
	{
		[Token(Token = "0x600081D")]
		[Address(RVA = "0x2451370", Offset = "0x244F970", VA = "0x182451370", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x600081E")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public LeftShiftInt16()
		{
		}
	}

	[Token(Token = "0x200016E")]
	private sealed class LeftShiftInt32 : LeftShiftInstruction
	{
		[Token(Token = "0x600081F")]
		[Address(RVA = "0x24514C0", Offset = "0x244FAC0", VA = "0x1824514C0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000820")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public LeftShiftInt32()
		{
		}
	}

	[Token(Token = "0x200016F")]
	private sealed class LeftShiftInt64 : LeftShiftInstruction
	{
		[Token(Token = "0x6000821")]
		[Address(RVA = "0x2451600", Offset = "0x244FC00", VA = "0x182451600", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000822")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public LeftShiftInt64()
		{
		}
	}

	[Token(Token = "0x2000170")]
	private sealed class LeftShiftByte : LeftShiftInstruction
	{
		[Token(Token = "0x6000823")]
		[Address(RVA = "0x2450D80", Offset = "0x244F380", VA = "0x182450D80", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000824")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public LeftShiftByte()
		{
		}
	}

	[Token(Token = "0x2000171")]
	private sealed class LeftShiftUInt16 : LeftShiftInstruction
	{
		[Token(Token = "0x6000825")]
		[Address(RVA = "0x2451940", Offset = "0x244FF40", VA = "0x182451940", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000826")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public LeftShiftUInt16()
		{
		}
	}

	[Token(Token = "0x2000172")]
	private sealed class LeftShiftUInt32 : LeftShiftInstruction
	{
		[Token(Token = "0x6000827")]
		[Address(RVA = "0x2451A90", Offset = "0x2450090", VA = "0x182451A90", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000828")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public LeftShiftUInt32()
		{
		}
	}

	[Token(Token = "0x2000173")]
	private sealed class LeftShiftUInt64 : LeftShiftInstruction
	{
		[Token(Token = "0x6000829")]
		[Address(RVA = "0x2451C30", Offset = "0x2450230", VA = "0x182451C30", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x600082A")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
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
		[Token(Token = "0x6000816")]
		[Address(RVA = "0x846F80", Offset = "0x845580", VA = "0x180846F80", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001C7")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000817")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001C8")]
	public override string InstructionName
	{
		[Token(Token = "0x6000818")]
		[Address(RVA = "0x2451340", Offset = "0x244F940", VA = "0x182451340", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000819")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	private LeftShiftInstruction()
	{
	}

	[Token(Token = "0x600081A")]
	[Address(RVA = "0x2450EC0", Offset = "0x244F4C0", VA = "0x182450EC0")]
	public static Instruction Create(Type type)
	{
		return null;
	}
}
