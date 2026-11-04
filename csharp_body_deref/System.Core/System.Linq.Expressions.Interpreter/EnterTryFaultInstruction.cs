// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.EnterTryFaultInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000F5")]
internal sealed class EnterTryFaultInstruction : IndexedBranchInstruction
{
	[Token(Token = "0x4000243")]
	[FieldOffset(Offset = "0x18")]
	private TryFaultHandler _tryHandler;

	[Token(Token = "0x17000172")]
	public override string InstructionName
	{
		[Token(Token = "0x6000633")]
		[Address(RVA = "0x242E4F0", Offset = "0x242CAF0", VA = "0x18242E4F0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000173")]
	public override int ProducedContinuations
	{
		[Token(Token = "0x6000634")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "7")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000174")]
	internal TryFaultHandler Handler
	{
		[Token(Token = "0x6000635")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000632")]
	[Address(RVA = "0x1A29130", Offset = "0x1A27730", VA = "0x181A29130")]
	internal EnterTryFaultInstruction(int targetIndex)
	{
	}

	[Token(Token = "0x6000636")]
	[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
	internal void SetTryHandler(TryFaultHandler tryHandler)
	{
	}

	[Token(Token = "0x6000637")]
	[Address(RVA = "0x242E290", Offset = "0x242C890", VA = "0x18242E290", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
