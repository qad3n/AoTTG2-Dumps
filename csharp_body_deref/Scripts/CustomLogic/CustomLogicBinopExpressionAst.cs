using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000251")]
internal class CustomLogicBinopExpressionAst : CustomLogicBaseExpressionAst
{
	[Token(Token = "0x4000CDF")]
	[FieldOffset(Offset = "0x18")]
	public CustomLogicBaseExpressionAst Left;

	[Token(Token = "0x4000CE0")]
	[FieldOffset(Offset = "0x20")]
	public CustomLogicBaseExpressionAst Right;

	[Token(Token = "0x4000CE1")]
	[FieldOffset(Offset = "0x28")]
	public CustomLogicToken Token;

	[Token(Token = "0x6000DC7")]
	[Address(RVA = "0x3CB20F0", Offset = "0x3CB20F0", VA = "0x3CB20F0")]
	public CustomLogicBinopExpressionAst(CustomLogicToken token, int line)
	{
	}
}
