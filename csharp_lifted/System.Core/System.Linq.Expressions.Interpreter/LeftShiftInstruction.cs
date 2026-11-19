// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.LeftShiftInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x200016C")]
internal abstract class LeftShiftInstruction : Instruction
{
	[Token(Token = "0x200016D")]
	private sealed class LeftShiftSByte : LeftShiftInstruction
	{
		[Token(Token = "0x6000826")]
		[Address(RVA = "0x5DF1CA0", Offset = "0x5DF0CA0", VA = "0x5DF1CA0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000827")]
		[Address(RVA = "0x5DF1C20", Offset = "0x5DF0C20", VA = "0x5DF1C20")]
		public LeftShiftSByte()
		{
		}
	}

	[Token(Token = "0x200016E")]
	private sealed class LeftShiftInt16 : LeftShiftInstruction
	{
		[Token(Token = "0x6000828")]
		[Address(RVA = "0x5DF1D90", Offset = "0x5DF0D90", VA = "0x5DF1D90", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000829")]
		[Address(RVA = "0x5DF1C30", Offset = "0x5DF0C30", VA = "0x5DF1C30")]
		public LeftShiftInt16()
		{
		}
	}

	[Token(Token = "0x200016F")]
	private sealed class LeftShiftInt32 : LeftShiftInstruction
	{
		[Token(Token = "0x600082A")]
		[Address(RVA = "0x5DF1E80", Offset = "0x5DF0E80", VA = "0x5DF1E80", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x600082B")]
		[Address(RVA = "0x5DF1C40", Offset = "0x5DF0C40", VA = "0x5DF1C40")]
		public LeftShiftInt32()
		{
		}
	}

	[Token(Token = "0x2000170")]
	private sealed class LeftShiftInt64 : LeftShiftInstruction
	{
		[Token(Token = "0x600082C")]
		[Address(RVA = "0x5DF1F60", Offset = "0x5DF0F60", VA = "0x5DF1F60", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x600082D")]
		[Address(RVA = "0x5DF1C50", Offset = "0x5DF0C50", VA = "0x5DF1C50")]
		public LeftShiftInt64()
		{
		}
	}

	[Token(Token = "0x2000171")]
	private sealed class LeftShiftByte : LeftShiftInstruction
	{
		[Token(Token = "0x600082E")]
		[Address(RVA = "0x5DF20C0", Offset = "0x5DF10C0", VA = "0x5DF20C0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x600082F")]
		[Address(RVA = "0x5DF1C60", Offset = "0x5DF0C60", VA = "0x5DF1C60")]
		public LeftShiftByte()
		{
		}
	}

	[Token(Token = "0x2000172")]
	private sealed class LeftShiftUInt16 : LeftShiftInstruction
	{
		[Token(Token = "0x6000830")]
		[Address(RVA = "0x5DF21B0", Offset = "0x5DF11B0", VA = "0x5DF21B0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000831")]
		[Address(RVA = "0x5DF1C70", Offset = "0x5DF0C70", VA = "0x5DF1C70")]
		public LeftShiftUInt16()
		{
		}
	}

	[Token(Token = "0x2000173")]
	private sealed class LeftShiftUInt32 : LeftShiftInstruction
	{
		[Token(Token = "0x6000832")]
		[Address(RVA = "0x5DF22A0", Offset = "0x5DF12A0", VA = "0x5DF22A0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000833")]
		[Address(RVA = "0x5DF1C80", Offset = "0x5DF0C80", VA = "0x5DF1C80")]
		public LeftShiftUInt32()
		{
		}
	}

	[Token(Token = "0x2000174")]
	private sealed class LeftShiftUInt64 : LeftShiftInstruction
	{
		[Token(Token = "0x6000834")]
		[Address(RVA = "0x5DF2400", Offset = "0x5DF1400", VA = "0x5DF2400", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000835")]
		[Address(RVA = "0x5DF1C90", Offset = "0x5DF0C90", VA = "0x5DF1C90")]
		public LeftShiftUInt64()
		{
		}
	}

	[Token(Token = "0x400031C")]
	[FieldOffset(Offset = "0x0")]
	private static Instruction s_SByte;

	[Token(Token = "0x400031D")]
	[FieldOffset(Offset = "0x8")]
	private static Instruction s_Int16;

	[Token(Token = "0x400031E")]
	[FieldOffset(Offset = "0x10")]
	private static Instruction s_Int32;

	[Token(Token = "0x400031F")]
	[FieldOffset(Offset = "0x18")]
	private static Instruction s_Int64;

	[Token(Token = "0x4000320")]
	[FieldOffset(Offset = "0x20")]
	private static Instruction s_Byte;

	[Token(Token = "0x4000321")]
	[FieldOffset(Offset = "0x28")]
	private static Instruction s_UInt16;

	[Token(Token = "0x4000322")]
	[FieldOffset(Offset = "0x30")]
	private static Instruction s_UInt32;

	[Token(Token = "0x4000323")]
	[FieldOffset(Offset = "0x38")]
	private static Instruction s_UInt64;

	[Token(Token = "0x170001C8")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000821")]
		[Address(RVA = "0x5DF1BC0", Offset = "0x5DF0BC0", VA = "0x5DF1BC0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001C9")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000822")]
		[Address(RVA = "0x5DF1BD0", Offset = "0x5DF0BD0", VA = "0x5DF1BD0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001CA")]
	public override string InstructionName
	{
		[Token(Token = "0x6000823")]
		[Address(RVA = "0x5DF1BE0", Offset = "0x5DF0BE0", VA = "0x5DF1BE0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000824")]
	[Address(RVA = "0x5DF1C10", Offset = "0x5DF0C10", VA = "0x5DF1C10")]
	private LeftShiftInstruction()
	{
	}

	[Token(Token = "0x6000825")]
	[Address(RVA = "0x5DEC310", Offset = "0x5DEB310", VA = "0x5DEC310")]
	public static Instruction Create(Type type)
	{
		return null;
	}
}
