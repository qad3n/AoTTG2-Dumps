// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.EnterFinallyInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000F7")]
internal sealed class EnterFinallyInstruction : IndexedBranchInstruction
{
	[Token(Token = "0x400024D")]
	[FieldOffset(Offset = "0x0")]
	private static readonly EnterFinallyInstruction[] s_cache;

	[Token(Token = "0x17000177")]
	public override string InstructionName
	{
		[Token(Token = "0x6000644")]
		[Address(RVA = "0x5DDE8C0", Offset = "0x5DDD8C0", VA = "0x5DDE8C0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000178")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000645")]
		[Address(RVA = "0x5DDE8F0", Offset = "0x5DDD8F0", VA = "0x5DDE8F0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000179")]
	public override int ConsumedContinuations
	{
		[Token(Token = "0x6000646")]
		[Address(RVA = "0x5DDE900", Offset = "0x5DDD900", VA = "0x5DDE900", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000643")]
	[Address(RVA = "0x5DDE8A0", Offset = "0x5DDD8A0", VA = "0x5DDE8A0")]
	private EnterFinallyInstruction(int labelIndex)
	{
	}

	[Token(Token = "0x6000647")]
	[Address(RVA = "0x5DDE910", Offset = "0x5DDD910", VA = "0x5DDE910")]
	internal static EnterFinallyInstruction Create(int labelIndex)
	{
		return null;
	}

	[Token(Token = "0x6000648")]
	[Address(RVA = "0x5DDEA10", Offset = "0x5DDDA10", VA = "0x5DDEA10", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
