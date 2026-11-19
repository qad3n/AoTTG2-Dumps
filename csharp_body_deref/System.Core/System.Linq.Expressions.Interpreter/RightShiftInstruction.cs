// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.RightShiftInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x2000213")]
internal abstract class RightShiftInstruction : Instruction
{
	[Token(Token = "0x2000214")]
	private sealed class RightShiftSByte : RightShiftInstruction
	{
		[Token(Token = "0x6000AA1")]
		[Address(RVA = "0x5E16F80", Offset = "0x5E15F80", VA = "0x5E16F80", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000AA2")]
		[Address(RVA = "0x5E16F00", Offset = "0x5E15F00", VA = "0x5E16F00")]
		public RightShiftSByte()
		{
		}
	}

	[Token(Token = "0x2000215")]
	private sealed class RightShiftInt16 : RightShiftInstruction
	{
		[Token(Token = "0x6000AA3")]
		[Address(RVA = "0x5E17030", Offset = "0x5E16030", VA = "0x5E17030", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000AA4")]
		[Address(RVA = "0x5E16F10", Offset = "0x5E15F10", VA = "0x5E16F10")]
		public RightShiftInt16()
		{
		}
	}

	[Token(Token = "0x2000216")]
	private sealed class RightShiftInt32 : RightShiftInstruction
	{
		[Token(Token = "0x6000AA5")]
		[Address(RVA = "0x5E170E0", Offset = "0x5E160E0", VA = "0x5E170E0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000AA6")]
		[Address(RVA = "0x5E16F20", Offset = "0x5E15F20", VA = "0x5E16F20")]
		public RightShiftInt32()
		{
		}
	}

	[Token(Token = "0x2000217")]
	private sealed class RightShiftInt64 : RightShiftInstruction
	{
		[Token(Token = "0x6000AA7")]
		[Address(RVA = "0x5E17190", Offset = "0x5E16190", VA = "0x5E17190", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000AA8")]
		[Address(RVA = "0x5E16F30", Offset = "0x5E15F30", VA = "0x5E16F30")]
		public RightShiftInt64()
		{
		}
	}

	[Token(Token = "0x2000218")]
	private sealed class RightShiftByte : RightShiftInstruction
	{
		[Token(Token = "0x6000AA9")]
		[Address(RVA = "0x5E17260", Offset = "0x5E16260", VA = "0x5E17260", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000AAA")]
		[Address(RVA = "0x5E16F40", Offset = "0x5E15F40", VA = "0x5E16F40")]
		public RightShiftByte()
		{
		}
	}

	[Token(Token = "0x2000219")]
	private sealed class RightShiftUInt16 : RightShiftInstruction
	{
		[Token(Token = "0x6000AAB")]
		[Address(RVA = "0x5E17310", Offset = "0x5E16310", VA = "0x5E17310", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000AAC")]
		[Address(RVA = "0x5E16F50", Offset = "0x5E15F50", VA = "0x5E16F50")]
		public RightShiftUInt16()
		{
		}
	}

	[Token(Token = "0x200021A")]
	private sealed class RightShiftUInt32 : RightShiftInstruction
	{
		[Token(Token = "0x6000AAD")]
		[Address(RVA = "0x5E173C0", Offset = "0x5E163C0", VA = "0x5E173C0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000AAE")]
		[Address(RVA = "0x5E16F60", Offset = "0x5E15F60", VA = "0x5E16F60")]
		public RightShiftUInt32()
		{
		}
	}

	[Token(Token = "0x200021B")]
	private sealed class RightShiftUInt64 : RightShiftInstruction
	{
		[Token(Token = "0x6000AAF")]
		[Address(RVA = "0x5E17480", Offset = "0x5E16480", VA = "0x5E17480", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000AB0")]
		[Address(RVA = "0x5E16F70", Offset = "0x5E15F70", VA = "0x5E16F70")]
		public RightShiftUInt64()
		{
		}
	}

	[Token(Token = "0x40003F6")]
	[FieldOffset(Offset = "0x0")]
	private static Instruction s_SByte;

	[Token(Token = "0x40003F7")]
	[FieldOffset(Offset = "0x8")]
	private static Instruction s_Int16;

	[Token(Token = "0x40003F8")]
	[FieldOffset(Offset = "0x10")]
	private static Instruction s_Int32;

	[Token(Token = "0x40003F9")]
	[FieldOffset(Offset = "0x18")]
	private static Instruction s_Int64;

	[Token(Token = "0x40003FA")]
	[FieldOffset(Offset = "0x20")]
	private static Instruction s_Byte;

	[Token(Token = "0x40003FB")]
	[FieldOffset(Offset = "0x28")]
	private static Instruction s_UInt16;

	[Token(Token = "0x40003FC")]
	[FieldOffset(Offset = "0x30")]
	private static Instruction s_UInt32;

	[Token(Token = "0x40003FD")]
	[FieldOffset(Offset = "0x38")]
	private static Instruction s_UInt64;

	[Token(Token = "0x17000225")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000A9C")]
		[Address(RVA = "0x5E16AE0", Offset = "0x5E15AE0", VA = "0x5E16AE0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000226")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000A9D")]
		[Address(RVA = "0x5E16AF0", Offset = "0x5E15AF0", VA = "0x5E16AF0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000227")]
	public override string InstructionName
	{
		[Token(Token = "0x6000A9E")]
		[Address(RVA = "0x5E16B00", Offset = "0x5E15B00", VA = "0x5E16B00", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A9F")]
	[Address(RVA = "0x5E16B30", Offset = "0x5E15B30", VA = "0x5E16B30")]
	private RightShiftInstruction()
	{
	}

	[Token(Token = "0x6000AA0")]
	[Address(RVA = "0x5E16B40", Offset = "0x5E15B40", VA = "0x5E16B40")]
	public static Instruction Create(Type type)
	{
		return null;
	}
}
