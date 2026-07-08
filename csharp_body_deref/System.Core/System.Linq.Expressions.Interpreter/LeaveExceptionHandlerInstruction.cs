using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000FD")]
internal sealed class LeaveExceptionHandlerInstruction : IndexedBranchInstruction
{
	[Token(Token = "0x400024D")]
	[FieldOffset(Offset = "0x0")]
	private static readonly LeaveExceptionHandlerInstruction[] s_cache;

	[Token(Token = "0x400024E")]
	[FieldOffset(Offset = "0x14")]
	private readonly bool _hasValue;

	[Token(Token = "0x17000186")]
	public override string InstructionName
	{
		[Token(Token = "0x6000662")]
		[Address(RVA = "0x41A4560", Offset = "0x41A4560", VA = "0x41A4560", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000187")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000663")]
		[Address(RVA = "0x41A4590", Offset = "0x41A4590", VA = "0x41A4590", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000188")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000664")]
		[Address(RVA = "0x41A45A0", Offset = "0x41A45A0", VA = "0x41A45A0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000661")]
	[Address(RVA = "0x41A4540", Offset = "0x41A4540", VA = "0x41A4540")]
	private LeaveExceptionHandlerInstruction(int labelIndex, bool hasValue)
	{
	}

	[Token(Token = "0x6000665")]
	[Address(RVA = "0x41A45B0", Offset = "0x41A45B0", VA = "0x41A45B0")]
	internal static LeaveExceptionHandlerInstruction Create(int labelIndex, bool hasValue)
	{
		return null;
	}

	[Token(Token = "0x6000666")]
	[Address(RVA = "0x41A46D0", Offset = "0x41A46D0", VA = "0x41A46D0", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
