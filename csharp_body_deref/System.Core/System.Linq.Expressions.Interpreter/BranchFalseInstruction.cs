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
		[Token(Token = "0x6000607")]
		[Address(RVA = "0x24296C0", Offset = "0x2427CC0", VA = "0x1824296C0", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700015F")]
	public override string InstructionName
	{
		[Token(Token = "0x6000608")]
		[Address(RVA = "0x2429750", Offset = "0x2427D50", VA = "0x182429750", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000160")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000609")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600060A")]
	[Address(RVA = "0x2429640", Offset = "0x2427C40", VA = "0x182429640", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}

	[Token(Token = "0x600060B")]
	[Address(RVA = "0x24296B0", Offset = "0x2427CB0", VA = "0x1824296B0")]
	public BranchFalseInstruction()
	{
	}
}
