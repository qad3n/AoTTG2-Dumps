using System.Diagnostics.CodeAnalysis;
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000FB")]
internal sealed class LeaveExceptionFilterInstruction : Instruction
{
	[Token(Token = "0x4000249")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly LeaveExceptionFilterInstruction Instance;

	[Token(Token = "0x17000181")]
	public override string InstructionName
	{
		[Token(Token = "0x6000657")]
		[Address(RVA = "0x41A4360", Offset = "0x41A4360", VA = "0x41A4360", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000182")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000658")]
		[Address(RVA = "0x41A4390", Offset = "0x41A4390", VA = "0x41A4390", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000656")]
	[Address(RVA = "0x41A4350", Offset = "0x41A4350", VA = "0x41A4350")]
	private LeaveExceptionFilterInstruction()
	{
	}

	[Token(Token = "0x6000659")]
	[Address(RVA = "0x41A43A0", Offset = "0x41A43A0", VA = "0x41A43A0", Slot = "8")]
	[ExcludeFromCodeCoverage]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
