// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.EnterFaultInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000F8")]
internal sealed class EnterFaultInstruction : IndexedBranchInstruction
{
	[Token(Token = "0x4000246")]
	[FieldOffset(Offset = "0x0")]
	private static readonly EnterFaultInstruction[] s_cache;

	[Token(Token = "0x1700017A")]
	public override string InstructionName
	{
		[Token(Token = "0x6000646")]
		[Address(RVA = "0x44C9080", Offset = "0x44C9080", VA = "0x44C9080", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700017B")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000647")]
		[Address(RVA = "0x44C90B0", Offset = "0x44C90B0", VA = "0x44C90B0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000645")]
	[Address(RVA = "0x44C9060", Offset = "0x44C9060", VA = "0x44C9060")]
	private EnterFaultInstruction(int labelIndex)
	{
	}

	[Token(Token = "0x6000648")]
	[Address(RVA = "0x44C90C0", Offset = "0x44C90C0", VA = "0x44C90C0")]
	internal static EnterFaultInstruction Create(int labelIndex)
	{
		return null;
	}

	[Token(Token = "0x6000649")]
	[Address(RVA = "0x44C91C0", Offset = "0x44C91C0", VA = "0x44C91C0", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
