// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.MulOvfInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20001CE")]
internal abstract class MulOvfInstruction : Instruction
{
	[Token(Token = "0x20001CF")]
	private sealed class MulOvfInt16 : MulOvfInstruction
	{
		[Token(Token = "0x60009EB")]
		[Address(RVA = "0x5E0F8A0", Offset = "0x5E0E8A0", VA = "0x5E0F8A0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009EC")]
		[Address(RVA = "0x5E0F840", Offset = "0x5E0E840", VA = "0x5E0F840")]
		public MulOvfInt16()
		{
		}
	}

	[Token(Token = "0x20001D0")]
	private sealed class MulOvfInt32 : MulOvfInstruction
	{
		[Token(Token = "0x60009ED")]
		[Address(RVA = "0x5E0FB30", Offset = "0x5E0EB30", VA = "0x5E0FB30", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009EE")]
		[Address(RVA = "0x5E0F850", Offset = "0x5E0E850", VA = "0x5E0F850")]
		public MulOvfInt32()
		{
		}
	}

	[Token(Token = "0x20001D1")]
	private sealed class MulOvfInt64 : MulOvfInstruction
	{
		[Token(Token = "0x60009EF")]
		[Address(RVA = "0x5E0FD70", Offset = "0x5E0ED70", VA = "0x5E0FD70", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009F0")]
		[Address(RVA = "0x5E0F860", Offset = "0x5E0E860", VA = "0x5E0F860")]
		public MulOvfInt64()
		{
		}
	}

	[Token(Token = "0x20001D2")]
	private sealed class MulOvfUInt16 : MulOvfInstruction
	{
		[Token(Token = "0x60009F1")]
		[Address(RVA = "0x5E0FFD0", Offset = "0x5E0EFD0", VA = "0x5E0FFD0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009F2")]
		[Address(RVA = "0x5E0F870", Offset = "0x5E0E870", VA = "0x5E0F870")]
		public MulOvfUInt16()
		{
		}
	}

	[Token(Token = "0x20001D3")]
	private sealed class MulOvfUInt32 : MulOvfInstruction
	{
		[Token(Token = "0x60009F3")]
		[Address(RVA = "0x5E10270", Offset = "0x5E0F270", VA = "0x5E10270", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009F4")]
		[Address(RVA = "0x5E0F880", Offset = "0x5E0E880", VA = "0x5E0F880")]
		public MulOvfUInt32()
		{
		}
	}

	[Token(Token = "0x20001D4")]
	private sealed class MulOvfUInt64 : MulOvfInstruction
	{
		[Token(Token = "0x60009F5")]
		[Address(RVA = "0x5E10460", Offset = "0x5E0F460", VA = "0x5E10460", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009F6")]
		[Address(RVA = "0x5E0F890", Offset = "0x5E0E890", VA = "0x5E0F890")]
		public MulOvfUInt64()
		{
		}
	}

	[Token(Token = "0x40003B7")]
	[FieldOffset(Offset = "0x0")]
	private static Instruction s_Int16;

	[Token(Token = "0x40003B8")]
	[FieldOffset(Offset = "0x8")]
	private static Instruction s_Int32;

	[Token(Token = "0x40003B9")]
	[FieldOffset(Offset = "0x10")]
	private static Instruction s_Int64;

	[Token(Token = "0x40003BA")]
	[FieldOffset(Offset = "0x18")]
	private static Instruction s_UInt16;

	[Token(Token = "0x40003BB")]
	[FieldOffset(Offset = "0x20")]
	private static Instruction s_UInt32;

	[Token(Token = "0x40003BC")]
	[FieldOffset(Offset = "0x28")]
	private static Instruction s_UInt64;

	[Token(Token = "0x17000206")]
	public override int ConsumedStack
	{
		[Token(Token = "0x60009E6")]
		[Address(RVA = "0x5E0F4F0", Offset = "0x5E0E4F0", VA = "0x5E0F4F0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000207")]
	public override int ProducedStack
	{
		[Token(Token = "0x60009E7")]
		[Address(RVA = "0x5E0F500", Offset = "0x5E0E500", VA = "0x5E0F500", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000208")]
	public override string InstructionName
	{
		[Token(Token = "0x60009E8")]
		[Address(RVA = "0x5E0F510", Offset = "0x5E0E510", VA = "0x5E0F510", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60009E9")]
	[Address(RVA = "0x5E0F540", Offset = "0x5E0E540", VA = "0x5E0F540")]
	private MulOvfInstruction()
	{
	}

	[Token(Token = "0x60009EA")]
	[Address(RVA = "0x5E0F550", Offset = "0x5E0E550", VA = "0x5E0F550")]
	public static Instruction Create(Type type)
	{
		return null;
	}
}
