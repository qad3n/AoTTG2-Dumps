using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000D0")]
internal abstract class AddOvfInstruction : Instruction
{
	[Token(Token = "0x20000D1")]
	private sealed class AddOvfInt16 : AddOvfInstruction
	{
		[Token(Token = "0x600059F")]
		[Address(RVA = "0x419E600", Offset = "0x419E600", VA = "0x419E600", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60005A0")]
		[Address(RVA = "0x419E5A0", Offset = "0x419E5A0", VA = "0x419E5A0")]
		public AddOvfInt16()
		{
		}
	}

	[Token(Token = "0x20000D2")]
	private sealed class AddOvfInt32 : AddOvfInstruction
	{
		[Token(Token = "0x60005A1")]
		[Address(RVA = "0x419E8B0", Offset = "0x419E8B0", VA = "0x419E8B0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60005A2")]
		[Address(RVA = "0x419E5B0", Offset = "0x419E5B0", VA = "0x419E5B0")]
		public AddOvfInt32()
		{
		}
	}

	[Token(Token = "0x20000D3")]
	private sealed class AddOvfInt64 : AddOvfInstruction
	{
		[Token(Token = "0x60005A3")]
		[Address(RVA = "0x419EAF0", Offset = "0x419EAF0", VA = "0x419EAF0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60005A4")]
		[Address(RVA = "0x419E5C0", Offset = "0x419E5C0", VA = "0x419E5C0")]
		public AddOvfInt64()
		{
		}
	}

	[Token(Token = "0x20000D4")]
	private sealed class AddOvfUInt16 : AddOvfInstruction
	{
		[Token(Token = "0x60005A5")]
		[Address(RVA = "0x419ED20", Offset = "0x419ED20", VA = "0x419ED20", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60005A6")]
		[Address(RVA = "0x419E5D0", Offset = "0x419E5D0", VA = "0x419E5D0")]
		public AddOvfUInt16()
		{
		}
	}

	[Token(Token = "0x20000D5")]
	private sealed class AddOvfUInt32 : AddOvfInstruction
	{
		[Token(Token = "0x60005A7")]
		[Address(RVA = "0x419EFC0", Offset = "0x419EFC0", VA = "0x419EFC0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60005A8")]
		[Address(RVA = "0x419E5E0", Offset = "0x419E5E0", VA = "0x419E5E0")]
		public AddOvfUInt32()
		{
		}
	}

	[Token(Token = "0x20000D6")]
	private sealed class AddOvfUInt64 : AddOvfInstruction
	{
		[Token(Token = "0x60005A9")]
		[Address(RVA = "0x419F1C0", Offset = "0x419F1C0", VA = "0x419F1C0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60005AA")]
		[Address(RVA = "0x419E5F0", Offset = "0x419E5F0", VA = "0x419E5F0")]
		public AddOvfUInt64()
		{
		}
	}

	[Token(Token = "0x4000213")]
	[FieldOffset(Offset = "0x0")]
	private static Instruction s_Int16;

	[Token(Token = "0x4000214")]
	[FieldOffset(Offset = "0x8")]
	private static Instruction s_Int32;

	[Token(Token = "0x4000215")]
	[FieldOffset(Offset = "0x10")]
	private static Instruction s_Int64;

	[Token(Token = "0x4000216")]
	[FieldOffset(Offset = "0x18")]
	private static Instruction s_UInt16;

	[Token(Token = "0x4000217")]
	[FieldOffset(Offset = "0x20")]
	private static Instruction s_UInt32;

	[Token(Token = "0x4000218")]
	[FieldOffset(Offset = "0x28")]
	private static Instruction s_UInt64;

	[Token(Token = "0x1700013D")]
	public override int ConsumedStack
	{
		[Token(Token = "0x600059A")]
		[Address(RVA = "0x419E250", Offset = "0x419E250", VA = "0x419E250", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700013E")]
	public override int ProducedStack
	{
		[Token(Token = "0x600059B")]
		[Address(RVA = "0x419E260", Offset = "0x419E260", VA = "0x419E260", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700013F")]
	public override string InstructionName
	{
		[Token(Token = "0x600059C")]
		[Address(RVA = "0x419E270", Offset = "0x419E270", VA = "0x419E270", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600059D")]
	[Address(RVA = "0x419E2A0", Offset = "0x419E2A0", VA = "0x419E2A0")]
	private AddOvfInstruction()
	{
	}

	[Token(Token = "0x600059E")]
	[Address(RVA = "0x419E2B0", Offset = "0x419E2B0", VA = "0x419E2B0")]
	public static Instruction Create(Type type)
	{
		return null;
	}
}
