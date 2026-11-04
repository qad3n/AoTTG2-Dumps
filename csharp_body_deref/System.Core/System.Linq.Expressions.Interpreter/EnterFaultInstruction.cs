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
		[Token(Token = "0x6000645")]
		[Address(RVA = "0x242DA50", Offset = "0x242C050", VA = "0x18242DA50", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700017B")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000646")]
		[Address(RVA = "0x846F80", Offset = "0x845580", VA = "0x180846F80", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000644")]
	[Address(RVA = "0x1A29130", Offset = "0x1A27730", VA = "0x181A29130")]
	private EnterFaultInstruction(int labelIndex)
	{
	}

	[Token(Token = "0x6000647")]
	[Address(RVA = "0x242D860", Offset = "0x242BE60", VA = "0x18242D860")]
	internal static EnterFaultInstruction Create(int labelIndex)
	{
		return null;
	}

	[Token(Token = "0x6000648")]
	[Address(RVA = "0x242D970", Offset = "0x242BF70", VA = "0x18242D970", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
