// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.NegateCheckedInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20001DB")]
internal abstract class NegateCheckedInstruction : Instruction
{
	[Token(Token = "0x20001DC")]
	private sealed class NegateCheckedInt32 : NegateCheckedInstruction
	{
		[Token(Token = "0x6000A0B")]
		[Address(RVA = "0x5E10E90", Offset = "0x5E0FE90", VA = "0x5E10E90", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A0C")]
		[Address(RVA = "0x5E10E70", Offset = "0x5E0FE70", VA = "0x5E10E70")]
		public NegateCheckedInt32()
		{
		}
	}

	[Token(Token = "0x20001DD")]
	private sealed class NegateCheckedInt16 : NegateCheckedInstruction
	{
		[Token(Token = "0x6000A0D")]
		[Address(RVA = "0x5E10F80", Offset = "0x5E0FF80", VA = "0x5E10F80", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A0E")]
		[Address(RVA = "0x5E10E60", Offset = "0x5E0FE60", VA = "0x5E10E60")]
		public NegateCheckedInt16()
		{
		}
	}

	[Token(Token = "0x20001DE")]
	private sealed class NegateCheckedInt64 : NegateCheckedInstruction
	{
		[Token(Token = "0x6000A0F")]
		[Address(RVA = "0x5E11090", Offset = "0x5E10090", VA = "0x5E11090", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A10")]
		[Address(RVA = "0x5E10E80", Offset = "0x5E0FE80", VA = "0x5E10E80")]
		public NegateCheckedInt64()
		{
		}
	}

	[Token(Token = "0x40003C2")]
	[FieldOffset(Offset = "0x0")]
	private static Instruction s_Int16;

	[Token(Token = "0x40003C3")]
	[FieldOffset(Offset = "0x8")]
	private static Instruction s_Int32;

	[Token(Token = "0x40003C4")]
	[FieldOffset(Offset = "0x10")]
	private static Instruction s_Int64;

	[Token(Token = "0x1700020C")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000A06")]
		[Address(RVA = "0x5E10C30", Offset = "0x5E0FC30", VA = "0x5E10C30", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700020D")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000A07")]
		[Address(RVA = "0x5E10C40", Offset = "0x5E0FC40", VA = "0x5E10C40", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700020E")]
	public override string InstructionName
	{
		[Token(Token = "0x6000A08")]
		[Address(RVA = "0x5E10C50", Offset = "0x5E0FC50", VA = "0x5E10C50", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A09")]
	[Address(RVA = "0x5E10C80", Offset = "0x5E0FC80", VA = "0x5E10C80")]
	private NegateCheckedInstruction()
	{
	}

	[Token(Token = "0x6000A0A")]
	[Address(RVA = "0x5E10C90", Offset = "0x5E0FC90", VA = "0x5E10C90")]
	public static Instruction Create(Type type)
	{
		return null;
	}
}
