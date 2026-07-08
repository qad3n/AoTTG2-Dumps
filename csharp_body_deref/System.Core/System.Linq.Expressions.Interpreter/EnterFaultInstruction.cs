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
		[Address(RVA = "0x41A3F80", Offset = "0x41A3F80", VA = "0x41A3F80", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700017B")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000647")]
		[Address(RVA = "0x41A3FB0", Offset = "0x41A3FB0", VA = "0x41A3FB0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000645")]
	[Address(RVA = "0x41A3F60", Offset = "0x41A3F60", VA = "0x41A3F60")]
	private EnterFaultInstruction(int labelIndex)
	{
	}

	[Token(Token = "0x6000648")]
	[Address(RVA = "0x41A3FC0", Offset = "0x41A3FC0", VA = "0x41A3FC0")]
	internal static EnterFaultInstruction Create(int labelIndex)
	{
		return null;
	}

	[Token(Token = "0x6000649")]
	[Address(RVA = "0x41A40C0", Offset = "0x41A40C0", VA = "0x41A40C0", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
