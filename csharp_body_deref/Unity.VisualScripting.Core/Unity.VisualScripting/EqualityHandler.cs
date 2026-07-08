using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000110")]
public class EqualityHandler : BinaryOperatorHandler
{
	[Token(Token = "0x600080E")]
	[Address(RVA = "0x49C1730", Offset = "0x49C1730", VA = "0x49C1730")]
	public EqualityHandler()
	{
	}

	[Token(Token = "0x600080F")]
	[Address(RVA = "0x49C7930", Offset = "0x49C7930", VA = "0x49C7930", Slot = "6")]
	protected override object BothNullHandling()
	{
		return null;
	}

	[Token(Token = "0x6000810")]
	[Address(RVA = "0x49C7950", Offset = "0x49C7950", VA = "0x49C7950", Slot = "7")]
	protected override object SingleNullHandling()
	{
		return null;
	}

	[Token(Token = "0x6000811")]
	[Address(RVA = "0x49C7970", Offset = "0x49C7970", VA = "0x49C7970", Slot = "5")]
	protected override object CustomHandling(object leftOperand, object rightOperand)
	{
		return null;
	}
}
