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
		[Token(Token = "0x6000634")]
		[Address(RVA = "0x41A3910", Offset = "0x41A3910", VA = "0x41A3910", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000173")]
	public override int ProducedContinuations
	{
		[Token(Token = "0x6000635")]
		[Address(RVA = "0x41A3940", Offset = "0x41A3940", VA = "0x41A3940", Slot = "7")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000174")]
	internal TryFaultHandler Handler
	{
		[Token(Token = "0x6000636")]
		[Address(RVA = "0x41A3950", Offset = "0x41A3950", VA = "0x41A3950")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000633")]
	[Address(RVA = "0x41A38F0", Offset = "0x41A38F0", VA = "0x41A38F0")]
	internal EnterTryFaultInstruction(int targetIndex)
	{
	}

	[Token(Token = "0x6000637")]
	[Address(RVA = "0x41A3960", Offset = "0x41A3960", VA = "0x41A3960")]
	internal void SetTryHandler(TryFaultHandler tryHandler)
	{
	}

	[Token(Token = "0x6000638")]
	[Address(RVA = "0x41A3970", Offset = "0x41A3970", VA = "0x41A3970", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
