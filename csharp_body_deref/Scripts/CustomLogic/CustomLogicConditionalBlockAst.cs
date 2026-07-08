using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000256")]
internal class CustomLogicConditionalBlockAst : CustomLogicBlockAst
{
	[Token(Token = "0x4000CEA")]
	[FieldOffset(Offset = "0x20")]
	public CustomLogicBaseExpressionAst Condition;

	[Token(Token = "0x4000CEB")]
	[FieldOffset(Offset = "0x28")]
	public CustomLogicToken Token;

	[Token(Token = "0x6000DD0")]
	[Address(RVA = "0x3CB2600", Offset = "0x3CB2600", VA = "0x3CB2600")]
	public CustomLogicConditionalBlockAst(CustomLogicToken token, int line)
	{
	}
}
