using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000103")]
public sealed class AdditionHandler : BinaryOperatorHandler
{
	[Token(Token = "0x60006D4")]
	[Address(RVA = "0x49AC7A0", Offset = "0x49AC7A0", VA = "0x49AC7A0")]
	public AdditionHandler()
	{
	}

	[Token(Token = "0x60006D5")]
	[Address(RVA = "0x49B2AE0", Offset = "0x49B2AE0", VA = "0x49B2AE0", Slot = "5")]
	protected override object CustomHandling(object leftOperand, object rightOperand)
	{
		return null;
	}
}
