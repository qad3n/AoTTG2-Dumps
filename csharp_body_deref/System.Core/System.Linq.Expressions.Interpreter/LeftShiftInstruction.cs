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
		[Token(Token = "0x600081C")]
		[Address(RVA = "0x44DC220", Offset = "0x44DC220", VA = "0x44DC220", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x600081D")]
		[Address(RVA = "0x44DC1A0", Offset = "0x44DC1A0", VA = "0x44DC1A0")]
		public LeftShiftSByte()
		{
		}
	}

	[Token(Token = "0x200016D")]
	private sealed class LeftShiftInt16 : LeftShiftInstruction
	{
		[Token(Token = "0x600081E")]
		[Address(RVA = "0x44DC310", Offset = "0x44DC310", VA = "0x44DC310", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x600081F")]
		[Address(RVA = "0x44DC1B0", Offset = "0x44DC1B0", VA = "0x44DC1B0")]
		public LeftShiftInt16()
		{
		}
	}

	[Token(Token = "0x200016E")]
	private sealed class LeftShiftInt32 : LeftShiftInstruction
	{
		[Token(Token = "0x6000820")]
		[Address(RVA = "0x44DC400", Offset = "0x44DC400", VA = "0x44DC400", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000821")]
		[Address(RVA = "0x44DC1C0", Offset = "0x44DC1C0", VA = "0x44DC1C0")]
		public LeftShiftInt32()
		{
		}
	}

	[Token(Token = "0x200016F")]
	private sealed class LeftShiftInt64 : LeftShiftInstruction
	{
		[Token(Token = "0x6000822")]
		[Address(RVA = "0x44DC4E0", Offset = "0x44DC4E0", VA = "0x44DC4E0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000823")]
		[Address(RVA = "0x44DC1D0", Offset = "0x44DC1D0", VA = "0x44DC1D0")]
		public LeftShiftInt64()
		{
		}
	}

	[Token(Token = "0x2000170")]
	private sealed class LeftShiftByte : LeftShiftInstruction
	{
		[Token(Token = "0x6000824")]
		[Address(RVA = "0x44DC640", Offset = "0x44DC640", VA = "0x44DC640", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000825")]
		[Address(RVA = "0x44DC1E0", Offset = "0x44DC1E0", VA = "0x44DC1E0")]
		public LeftShiftByte()
		{
		}
	}

	[Token(Token = "0x2000171")]
	private sealed class LeftShiftUInt16 : LeftShiftInstruction
	{
		[Token(Token = "0x6000826")]
		[Address(RVA = "0x44DC730", Offset = "0x44DC730", VA = "0x44DC730", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000827")]
		[Address(RVA = "0x44DC1F0", Offset = "0x44DC1F0", VA = "0x44DC1F0")]
		public LeftShiftUInt16()
		{
		}
	}

	[Token(Token = "0x2000172")]
	private sealed class LeftShiftUInt32 : LeftShiftInstruction
	{
		[Token(Token = "0x6000828")]
		[Address(RVA = "0x44DC820", Offset = "0x44DC820", VA = "0x44DC820", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000829")]
		[Address(RVA = "0x44DC200", Offset = "0x44DC200", VA = "0x44DC200")]
		public LeftShiftUInt32()
		{
		}
	}

	[Token(Token = "0x2000173")]
	private sealed class LeftShiftUInt64 : LeftShiftInstruction
	{
		[Token(Token = "0x600082A")]
		[Address(RVA = "0x44DC980", Offset = "0x44DC980", VA = "0x44DC980", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x600082B")]
		[Address(RVA = "0x44DC210", Offset = "0x44DC210", VA = "0x44DC210")]
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
		[Address(RVA = "0x44DC140", Offset = "0x44DC140", VA = "0x44DC140", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001C7")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000818")]
		[Address(RVA = "0x44DC150", Offset = "0x44DC150", VA = "0x44DC150", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001C8")]
	public override string InstructionName
	{
		[Token(Token = "0x6000819")]
		[Address(RVA = "0x44DC160", Offset = "0x44DC160", VA = "0x44DC160", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600081A")]
	[Address(RVA = "0x44DC190", Offset = "0x44DC190", VA = "0x44DC190")]
	private LeftShiftInstruction()
	{
	}

	[Token(Token = "0x600081B")]
	[Address(RVA = "0x44D6850", Offset = "0x44D6850", VA = "0x44D6850")]
	public static Instruction Create(Type type)
	{
		return null;
	}
}
