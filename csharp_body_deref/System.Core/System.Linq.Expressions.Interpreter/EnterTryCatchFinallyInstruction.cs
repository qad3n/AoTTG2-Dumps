using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000F4")]
internal sealed class EnterTryCatchFinallyInstruction : IndexedBranchInstruction
{
	[Token(Token = "0x4000241")]
	[FieldOffset(Offset = "0x14")]
	private readonly bool _hasFinally;

	[Token(Token = "0x4000242")]
	[FieldOffset(Offset = "0x18")]
	private TryCatchFinallyHandler _tryHandler;

	[Token(Token = "0x1700016F")]
	internal TryCatchFinallyHandler Handler
	{
		[Token(Token = "0x600062B")]
		[Address(RVA = "0x41A3110", Offset = "0x41A3110", VA = "0x41A3110")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000170")]
	public override int ProducedContinuations
	{
		[Token(Token = "0x600062C")]
		[Address(RVA = "0x41A3120", Offset = "0x41A3120", VA = "0x41A3120", Slot = "7")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000171")]
	public override string InstructionName
	{
		[Token(Token = "0x6000631")]
		[Address(RVA = "0x41A3820", Offset = "0x41A3820", VA = "0x41A3820", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600062A")]
	[Address(RVA = "0x41A3100", Offset = "0x41A3100", VA = "0x41A3100")]
	internal void SetTryHandler(TryCatchFinallyHandler tryHandler)
	{
	}

	[Token(Token = "0x600062D")]
	[Address(RVA = "0x41A3130", Offset = "0x41A3130", VA = "0x41A3130")]
	private EnterTryCatchFinallyInstruction(int targetIndex, bool hasFinally)
	{
	}

	[Token(Token = "0x600062E")]
	[Address(RVA = "0x41A3150", Offset = "0x41A3150", VA = "0x41A3150")]
	internal static EnterTryCatchFinallyInstruction CreateTryFinally(int labelIndex)
	{
		return null;
	}

	[Token(Token = "0x600062F")]
	[Address(RVA = "0x41A31A0", Offset = "0x41A31A0", VA = "0x41A31A0")]
	internal static EnterTryCatchFinallyInstruction CreateTryCatch()
	{
		return null;
	}

	[Token(Token = "0x6000630")]
	[Address(RVA = "0x41A31F0", Offset = "0x41A31F0", VA = "0x41A31F0", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}

	[Token(Token = "0x6000632")]
	[Address(RVA = "0x41A3870", Offset = "0x41A3870", VA = "0x41A3870", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
