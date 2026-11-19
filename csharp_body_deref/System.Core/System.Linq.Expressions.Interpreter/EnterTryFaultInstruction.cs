// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.EnterTryFaultInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000F6")]
internal sealed class EnterTryFaultInstruction : IndexedBranchInstruction
{
	[Token(Token = "0x400024C")]
	[FieldOffset(Offset = "0x18")]
	private TryFaultHandler _tryHandler;

	[Token(Token = "0x17000174")]
	public override string InstructionName
	{
		[Token(Token = "0x600063E")]
		[Address(RVA = "0x5DDE610", Offset = "0x5DDD610", VA = "0x5DDE610", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000175")]
	public override int ProducedContinuations
	{
		[Token(Token = "0x600063F")]
		[Address(RVA = "0x5DDE640", Offset = "0x5DDD640", VA = "0x5DDE640", Slot = "7")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000176")]
	internal TryFaultHandler Handler
	{
		[Token(Token = "0x6000640")]
		[Address(RVA = "0x5DDE650", Offset = "0x5DDD650", VA = "0x5DDE650")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600063D")]
	[Address(RVA = "0x5DDE5F0", Offset = "0x5DDD5F0", VA = "0x5DDE5F0")]
	internal EnterTryFaultInstruction(int targetIndex)
	{
	}

	[Token(Token = "0x6000641")]
	[Address(RVA = "0x5DDE660", Offset = "0x5DDD660", VA = "0x5DDE660")]
	internal void SetTryHandler(TryFaultHandler tryHandler)
	{
	}

	[Token(Token = "0x6000642")]
	[Address(RVA = "0x5DDE670", Offset = "0x5DDD670", VA = "0x5DDE670", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
