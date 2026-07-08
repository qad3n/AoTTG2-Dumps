using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x2000198")]
internal sealed class ParameterByRefUpdater : ByRefUpdater
{
	[Token(Token = "0x4000373")]
	[FieldOffset(Offset = "0x18")]
	private readonly LocalVariable _parameter;

	[Token(Token = "0x60008E3")]
	[Address(RVA = "0x41CC540", Offset = "0x41CC540", VA = "0x41CC540")]
	public ParameterByRefUpdater(LocalVariable parameter, int argumentIndex)
	{
	}

	[Token(Token = "0x60008E4")]
	[Address(RVA = "0x41CC570", Offset = "0x41CC570", VA = "0x41CC570", Slot = "4")]
	public override void Update(InterpretedFrame frame, object value)
	{
	}
}
