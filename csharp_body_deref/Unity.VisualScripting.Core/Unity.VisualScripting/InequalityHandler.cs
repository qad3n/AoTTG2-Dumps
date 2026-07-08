using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x200011A")]
public class InequalityHandler : BinaryOperatorHandler
{
	[Token(Token = "0x60009AB")]
	[Address(RVA = "0x49DD320", Offset = "0x49DD320", VA = "0x49DD320")]
	public InequalityHandler()
	{
	}

	[Token(Token = "0x60009AC")]
	[Address(RVA = "0x49E3520", Offset = "0x49E3520", VA = "0x49E3520", Slot = "6")]
	protected override object BothNullHandling()
	{
		return null;
	}

	[Token(Token = "0x60009AD")]
	[Address(RVA = "0x49E3540", Offset = "0x49E3540", VA = "0x49E3540", Slot = "7")]
	protected override object SingleNullHandling()
	{
		return null;
	}

	[Token(Token = "0x60009AE")]
	[Address(RVA = "0x49E3560", Offset = "0x49E3560", VA = "0x49E3560", Slot = "5")]
	protected override object CustomHandling(object leftOperand, object rightOperand)
	{
		return null;
	}
}
