using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x200025E")]
internal class CustomLogicReturnExpressionAst : CustomLogicBaseExpressionAst
{
	[Token(Token = "0x4000CF8")]
	[FieldOffset(Offset = "0x18")]
	public CustomLogicBaseExpressionAst ReturnValue;

	[Token(Token = "0x6000DD9")]
	[Address(RVA = "0x3CB2A10", Offset = "0x3CB2A10", VA = "0x3CB2A10")]
	public CustomLogicReturnExpressionAst(CustomLogicBaseExpressionAst returnValue, int line)
	{
	}
}
