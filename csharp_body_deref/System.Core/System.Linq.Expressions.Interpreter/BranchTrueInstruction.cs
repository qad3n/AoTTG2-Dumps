// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.BranchTrueInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000EF")]
internal sealed class BranchTrueInstruction : OffsetInstruction
{
	[Token(Token = "0x4000237")]
	[FieldOffset(Offset = "0x0")]
	private static Instruction[] s_cache;

	[Token(Token = "0x17000161")]
	public override Instruction[] Cache
	{
		[Token(Token = "0x600060D")]
		[Address(RVA = "0x44C77A0", Offset = "0x44C77A0", VA = "0x44C77A0", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000162")]
	public override string InstructionName
	{
		[Token(Token = "0x600060E")]
		[Address(RVA = "0x44C7830", Offset = "0x44C7830", VA = "0x44C7830", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000163")]
	public override int ConsumedStack
	{
		[Token(Token = "0x600060F")]
		[Address(RVA = "0x44C7860", Offset = "0x44C7860", VA = "0x44C7860", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000610")]
	[Address(RVA = "0x44C7870", Offset = "0x44C7870", VA = "0x44C7870", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}

	[Token(Token = "0x6000611")]
	[Address(RVA = "0x44C78D0", Offset = "0x44C78D0", VA = "0x44C78D0")]
	public BranchTrueInstruction()
	{
	}
}
