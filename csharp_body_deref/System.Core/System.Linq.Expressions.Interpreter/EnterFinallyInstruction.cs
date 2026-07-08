using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000F6")]
internal sealed class EnterFinallyInstruction : IndexedBranchInstruction
{
	[Token(Token = "0x4000244")]
	[FieldOffset(Offset = "0x0")]
	private static readonly EnterFinallyInstruction[] s_cache;

	[Token(Token = "0x17000175")]
	public override string InstructionName
	{
		[Token(Token = "0x600063A")]
		[Address(RVA = "0x41A3C20", Offset = "0x41A3C20", VA = "0x41A3C20", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000176")]
	public override int ProducedStack
	{
		[Token(Token = "0x600063B")]
		[Address(RVA = "0x41A3C50", Offset = "0x41A3C50", VA = "0x41A3C50", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000177")]
	public override int ConsumedContinuations
	{
		[Token(Token = "0x600063C")]
		[Address(RVA = "0x41A3C60", Offset = "0x41A3C60", VA = "0x41A3C60", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000639")]
	[Address(RVA = "0x41A3C00", Offset = "0x41A3C00", VA = "0x41A3C00")]
	private EnterFinallyInstruction(int labelIndex)
	{
	}

	[Token(Token = "0x600063D")]
	[Address(RVA = "0x41A3C70", Offset = "0x41A3C70", VA = "0x41A3C70")]
	internal static EnterFinallyInstruction Create(int labelIndex)
	{
		return null;
	}

	[Token(Token = "0x600063E")]
	[Address(RVA = "0x41A3D70", Offset = "0x41A3D70", VA = "0x41A3D70", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
