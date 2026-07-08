using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000260")]
internal class CustomLogicUnaryExpressionAst : CustomLogicBaseExpressionAst
{
	[Token(Token = "0x4000CFB")]
	[FieldOffset(Offset = "0x18")]
	public CustomLogicBaseExpressionAst Next;

	[Token(Token = "0x4000CFC")]
	[FieldOffset(Offset = "0x20")]
	public CustomLogicToken Token;

	[Token(Token = "0x6000DDD")]
	[Address(RVA = "0x3CB2D50", Offset = "0x3CB2D50", VA = "0x3CB2D50")]
	public CustomLogicUnaryExpressionAst(CustomLogicToken token, int line)
	{
	}
}
