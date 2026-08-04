// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.NegateInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20001D4")]
internal abstract class NegateInstruction : Instruction
{
	[Token(Token = "0x20001D5")]
	private sealed class NegateInt16 : NegateInstruction
	{
		[Token(Token = "0x60009F2")]
		[Address(RVA = "0x44FB640", Offset = "0x44FB640", VA = "0x44FB640", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009F3")]
		[Address(RVA = "0x44FB5F0", Offset = "0x44FB5F0", VA = "0x44FB5F0")]
		public NegateInt16()
		{
		}
	}

	[Token(Token = "0x20001D6")]
	private sealed class NegateInt32 : NegateInstruction
	{
		[Token(Token = "0x60009F4")]
		[Address(RVA = "0x44FB6C0", Offset = "0x44FB6C0", VA = "0x44FB6C0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009F5")]
		[Address(RVA = "0x44FB600", Offset = "0x44FB600", VA = "0x44FB600")]
		public NegateInt32()
		{
		}
	}

	[Token(Token = "0x20001D7")]
	private sealed class NegateInt64 : NegateInstruction
	{
		[Token(Token = "0x60009F6")]
		[Address(RVA = "0x44FB730", Offset = "0x44FB730", VA = "0x44FB730", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009F7")]
		[Address(RVA = "0x44FB610", Offset = "0x44FB610", VA = "0x44FB610")]
		public NegateInt64()
		{
		}
	}

	[Token(Token = "0x20001D8")]
	private sealed class NegateSingle : NegateInstruction
	{
		[Token(Token = "0x60009F8")]
		[Address(RVA = "0x44FB7B0", Offset = "0x44FB7B0", VA = "0x44FB7B0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009F9")]
		[Address(RVA = "0x44FB620", Offset = "0x44FB620", VA = "0x44FB620")]
		public NegateSingle()
		{
		}
	}

	[Token(Token = "0x20001D9")]
	private sealed class NegateDouble : NegateInstruction
	{
		[Token(Token = "0x60009FA")]
		[Address(RVA = "0x44FB840", Offset = "0x44FB840", VA = "0x44FB840", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009FB")]
		[Address(RVA = "0x44FB630", Offset = "0x44FB630", VA = "0x44FB630")]
		public NegateDouble()
		{
		}
	}

	[Token(Token = "0x40003B4")]
	[FieldOffset(Offset = "0x0")]
	private static Instruction s_Int16;

	[Token(Token = "0x40003B5")]
	[FieldOffset(Offset = "0x8")]
	private static Instruction s_Int32;

	[Token(Token = "0x40003B6")]
	[FieldOffset(Offset = "0x10")]
	private static Instruction s_Int64;

	[Token(Token = "0x40003B7")]
	[FieldOffset(Offset = "0x18")]
	private static Instruction s_Single;

	[Token(Token = "0x40003B8")]
	[FieldOffset(Offset = "0x20")]
	private static Instruction s_Double;

	[Token(Token = "0x17000207")]
	public override int ConsumedStack
	{
		[Token(Token = "0x60009ED")]
		[Address(RVA = "0x44FB2F0", Offset = "0x44FB2F0", VA = "0x44FB2F0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000208")]
	public override int ProducedStack
	{
		[Token(Token = "0x60009EE")]
		[Address(RVA = "0x44FB300", Offset = "0x44FB300", VA = "0x44FB300", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000209")]
	public override string InstructionName
	{
		[Token(Token = "0x60009EF")]
		[Address(RVA = "0x44FB310", Offset = "0x44FB310", VA = "0x44FB310", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60009F0")]
	[Address(RVA = "0x44FB340", Offset = "0x44FB340", VA = "0x44FB340")]
	private NegateInstruction()
	{
	}

	[Token(Token = "0x60009F1")]
	[Address(RVA = "0x44FB350", Offset = "0x44FB350", VA = "0x44FB350")]
	public static Instruction Create(Type type)
	{
		return null;
	}
}
