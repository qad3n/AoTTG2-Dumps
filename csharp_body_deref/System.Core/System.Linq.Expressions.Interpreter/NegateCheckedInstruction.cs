// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.NegateCheckedInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20001DA")]
internal abstract class NegateCheckedInstruction : Instruction
{
	[Token(Token = "0x20001DB")]
	private sealed class NegateCheckedInt32 : NegateCheckedInstruction
	{
		[Token(Token = "0x6000A00")]
		[Address(RVA = "0x2477780", Offset = "0x2475D80", VA = "0x182477780", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A01")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public NegateCheckedInt32()
		{
		}
	}

	[Token(Token = "0x20001DC")]
	private sealed class NegateCheckedInt16 : NegateCheckedInstruction
	{
		[Token(Token = "0x6000A02")]
		[Address(RVA = "0x24775F0", Offset = "0x2475BF0", VA = "0x1824775F0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A03")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public NegateCheckedInt16()
		{
		}
	}

	[Token(Token = "0x20001DD")]
	private sealed class NegateCheckedInt64 : NegateCheckedInstruction
	{
		[Token(Token = "0x6000A04")]
		[Address(RVA = "0x24778C0", Offset = "0x2475EC0", VA = "0x1824778C0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A05")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public NegateCheckedInt64()
		{
		}
	}

	[Token(Token = "0x40003B9")]
	[FieldOffset(Offset = "0x0")]
	private static Instruction s_Int16;

	[Token(Token = "0x40003BA")]
	[FieldOffset(Offset = "0x8")]
	private static Instruction s_Int32;

	[Token(Token = "0x40003BB")]
	[FieldOffset(Offset = "0x10")]
	private static Instruction s_Int64;

	[Token(Token = "0x1700020A")]
	public override int ConsumedStack
	{
		[Token(Token = "0x60009FB")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700020B")]
	public override int ProducedStack
	{
		[Token(Token = "0x60009FC")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700020C")]
	public override string InstructionName
	{
		[Token(Token = "0x60009FD")]
		[Address(RVA = "0x24775C0", Offset = "0x2475BC0", VA = "0x1824775C0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60009FE")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	private NegateCheckedInstruction()
	{
	}

	[Token(Token = "0x60009FF")]
	[Address(RVA = "0x24773C0", Offset = "0x24759C0", VA = "0x1824773C0")]
	public static Instruction Create(Type type)
	{
		return null;
	}
}
