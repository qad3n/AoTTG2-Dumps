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
		[Token(Token = "0x6000A01")]
		[Address(RVA = "0x44FBB30", Offset = "0x44FBB30", VA = "0x44FBB30", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A02")]
		[Address(RVA = "0x44FBB10", Offset = "0x44FBB10", VA = "0x44FBB10")]
		public NegateCheckedInt32()
		{
		}
	}

	[Token(Token = "0x20001DC")]
	private sealed class NegateCheckedInt16 : NegateCheckedInstruction
	{
		[Token(Token = "0x6000A03")]
		[Address(RVA = "0x44FBC20", Offset = "0x44FBC20", VA = "0x44FBC20", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A04")]
		[Address(RVA = "0x44FBB00", Offset = "0x44FBB00", VA = "0x44FBB00")]
		public NegateCheckedInt16()
		{
		}
	}

	[Token(Token = "0x20001DD")]
	private sealed class NegateCheckedInt64 : NegateCheckedInstruction
	{
		[Token(Token = "0x6000A05")]
		[Address(RVA = "0x44FBD30", Offset = "0x44FBD30", VA = "0x44FBD30", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A06")]
		[Address(RVA = "0x44FBB20", Offset = "0x44FBB20", VA = "0x44FBB20")]
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
		[Token(Token = "0x60009FC")]
		[Address(RVA = "0x44FB8D0", Offset = "0x44FB8D0", VA = "0x44FB8D0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700020B")]
	public override int ProducedStack
	{
		[Token(Token = "0x60009FD")]
		[Address(RVA = "0x44FB8E0", Offset = "0x44FB8E0", VA = "0x44FB8E0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700020C")]
	public override string InstructionName
	{
		[Token(Token = "0x60009FE")]
		[Address(RVA = "0x44FB8F0", Offset = "0x44FB8F0", VA = "0x44FB8F0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60009FF")]
	[Address(RVA = "0x44FB920", Offset = "0x44FB920", VA = "0x44FB920")]
	private NegateCheckedInstruction()
	{
	}

	[Token(Token = "0x6000A00")]
	[Address(RVA = "0x44FB930", Offset = "0x44FB930", VA = "0x44FB930")]
	public static Instruction Create(Type type)
	{
		return null;
	}
}
