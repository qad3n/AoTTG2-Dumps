using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x2000197")]
internal abstract class ByRefUpdater
{
	[Token(Token = "0x4000372")]
	[FieldOffset(Offset = "0x10")]
	public readonly int ArgumentIndex;

	[Token(Token = "0x60008E0")]
	[Address(RVA = "0x41CC510", Offset = "0x41CC510", VA = "0x41CC510")]
	public ByRefUpdater(int argumentIndex)
	{
	}

	[Token(Token = "0x60008E1")]
	public abstract void Update(InterpretedFrame frame, object value);

	[Token(Token = "0x60008E2")]
	[Address(RVA = "0x41CC530", Offset = "0x41CC530", VA = "0x41CC530", Slot = "5")]
	public virtual void UndefineTemps(InstructionList instructions, LocalVariables locals)
	{
	}
}
