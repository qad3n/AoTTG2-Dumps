using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000258")]
internal class CustomLogicFieldExpressionAst : CustomLogicBaseExpressionAst
{
	[Token(Token = "0x4000CEC")]
	[FieldOffset(Offset = "0x18")]
	public string FieldName;

	[Token(Token = "0x4000CED")]
	[FieldOffset(Offset = "0x20")]
	public CustomLogicBaseExpressionAst Left;

	[Token(Token = "0x6000DD2")]
	[Address(RVA = "0x3CB26C0", Offset = "0x3CB26C0", VA = "0x3CB26C0")]
	public CustomLogicFieldExpressionAst(string name, int line)
	{
	}
}
