// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.BranchFalseInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000EE")]
internal sealed class BranchFalseInstruction : OffsetInstruction
{
	[Token(Token = "0x4000236")]
	[FieldOffset(Offset = "0x0")]
	private static Instruction[] s_cache;

	[Token(Token = "0x1700015E")]
	public override Instruction[] Cache
	{
		[Token(Token = "0x6000608")]
		[Address(RVA = "0x44C7660", Offset = "0x44C7660", VA = "0x44C7660", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700015F")]
	public override string InstructionName
	{
		[Token(Token = "0x6000609")]
		[Address(RVA = "0x44C76F0", Offset = "0x44C76F0", VA = "0x44C76F0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000160")]
	public override int ConsumedStack
	{
		[Token(Token = "0x600060A")]
		[Address(RVA = "0x44C7720", Offset = "0x44C7720", VA = "0x44C7720", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600060B")]
	[Address(RVA = "0x44C7730", Offset = "0x44C7730", VA = "0x44C7730", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}

	[Token(Token = "0x600060C")]
	[Address(RVA = "0x44C7790", Offset = "0x44C7790", VA = "0x44C7790")]
	public BranchFalseInstruction()
	{
	}
}
