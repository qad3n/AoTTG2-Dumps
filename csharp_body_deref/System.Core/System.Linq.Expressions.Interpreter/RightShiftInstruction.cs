using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x2000212")]
internal abstract class RightShiftInstruction : Instruction
{
	[Token(Token = "0x2000213")]
	private sealed class RightShiftSByte : RightShiftInstruction
	{
		[Token(Token = "0x6000A97")]
		[Address(RVA = "0x41DCB70", Offset = "0x41DCB70", VA = "0x41DCB70", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A98")]
		[Address(RVA = "0x41DCAF0", Offset = "0x41DCAF0", VA = "0x41DCAF0")]
		public RightShiftSByte()
		{
		}
	}

	[Token(Token = "0x2000214")]
	private sealed class RightShiftInt16 : RightShiftInstruction
	{
		[Token(Token = "0x6000A99")]
		[Address(RVA = "0x41DCC20", Offset = "0x41DCC20", VA = "0x41DCC20", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A9A")]
		[Address(RVA = "0x41DCB00", Offset = "0x41DCB00", VA = "0x41DCB00")]
		public RightShiftInt16()
		{
		}
	}

	[Token(Token = "0x2000215")]
	private sealed class RightShiftInt32 : RightShiftInstruction
	{
		[Token(Token = "0x6000A9B")]
		[Address(RVA = "0x41DCCD0", Offset = "0x41DCCD0", VA = "0x41DCCD0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A9C")]
		[Address(RVA = "0x41DCB10", Offset = "0x41DCB10", VA = "0x41DCB10")]
		public RightShiftInt32()
		{
		}
	}

	[Token(Token = "0x2000216")]
	private sealed class RightShiftInt64 : RightShiftInstruction
	{
		[Token(Token = "0x6000A9D")]
		[Address(RVA = "0x41DCD80", Offset = "0x41DCD80", VA = "0x41DCD80", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A9E")]
		[Address(RVA = "0x41DCB20", Offset = "0x41DCB20", VA = "0x41DCB20")]
		public RightShiftInt64()
		{
		}
	}

	[Token(Token = "0x2000217")]
	private sealed class RightShiftByte : RightShiftInstruction
	{
		[Token(Token = "0x6000A9F")]
		[Address(RVA = "0x41DCE40", Offset = "0x41DCE40", VA = "0x41DCE40", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000AA0")]
		[Address(RVA = "0x41DCB30", Offset = "0x41DCB30", VA = "0x41DCB30")]
		public RightShiftByte()
		{
		}
	}

	[Token(Token = "0x2000218")]
	private sealed class RightShiftUInt16 : RightShiftInstruction
	{
		[Token(Token = "0x6000AA1")]
		[Address(RVA = "0x41DCF00", Offset = "0x41DCF00", VA = "0x41DCF00", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000AA2")]
		[Address(RVA = "0x41DCB40", Offset = "0x41DCB40", VA = "0x41DCB40")]
		public RightShiftUInt16()
		{
		}
	}

	[Token(Token = "0x2000219")]
	private sealed class RightShiftUInt32 : RightShiftInstruction
	{
		[Token(Token = "0x6000AA3")]
		[Address(RVA = "0x41DCFC0", Offset = "0x41DCFC0", VA = "0x41DCFC0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000AA4")]
		[Address(RVA = "0x41DCB50", Offset = "0x41DCB50", VA = "0x41DCB50")]
		public RightShiftUInt32()
		{
		}
	}

	[Token(Token = "0x200021A")]
	private sealed class RightShiftUInt64 : RightShiftInstruction
	{
		[Token(Token = "0x6000AA5")]
		[Address(RVA = "0x41DD080", Offset = "0x41DD080", VA = "0x41DD080", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000AA6")]
		[Address(RVA = "0x41DCB60", Offset = "0x41DCB60", VA = "0x41DCB60")]
		public RightShiftUInt64()
		{
		}
	}

	[Token(Token = "0x40003ED")]
	[FieldOffset(Offset = "0x0")]
	private static Instruction s_SByte;

	[Token(Token = "0x40003EE")]
	[FieldOffset(Offset = "0x8")]
	private static Instruction s_Int16;

	[Token(Token = "0x40003EF")]
	[FieldOffset(Offset = "0x10")]
	private static Instruction s_Int32;

	[Token(Token = "0x40003F0")]
	[FieldOffset(Offset = "0x18")]
	private static Instruction s_Int64;

	[Token(Token = "0x40003F1")]
	[FieldOffset(Offset = "0x20")]
	private static Instruction s_Byte;

	[Token(Token = "0x40003F2")]
	[FieldOffset(Offset = "0x28")]
	private static Instruction s_UInt16;

	[Token(Token = "0x40003F3")]
	[FieldOffset(Offset = "0x30")]
	private static Instruction s_UInt32;

	[Token(Token = "0x40003F4")]
	[FieldOffset(Offset = "0x38")]
	private static Instruction s_UInt64;

	[Token(Token = "0x17000223")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000A92")]
		[Address(RVA = "0x41DC6D0", Offset = "0x41DC6D0", VA = "0x41DC6D0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000224")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000A93")]
		[Address(RVA = "0x41DC6E0", Offset = "0x41DC6E0", VA = "0x41DC6E0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000225")]
	public override string InstructionName
	{
		[Token(Token = "0x6000A94")]
		[Address(RVA = "0x41DC6F0", Offset = "0x41DC6F0", VA = "0x41DC6F0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A95")]
	[Address(RVA = "0x41DC720", Offset = "0x41DC720", VA = "0x41DC720")]
	private RightShiftInstruction()
	{
	}

	[Token(Token = "0x6000A96")]
	[Address(RVA = "0x41DC730", Offset = "0x41DC730", VA = "0x41DC730")]
	public static Instruction Create(Type type)
	{
		return null;
	}
}
