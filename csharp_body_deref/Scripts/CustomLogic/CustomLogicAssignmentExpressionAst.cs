using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x200024D")]
internal class CustomLogicAssignmentExpressionAst : CustomLogicBaseExpressionAst
{
	[Token(Token = "0x4000CC7")]
	[FieldOffset(Offset = "0x18")]
	public CustomLogicBaseExpressionAst Left;

	[Token(Token = "0x4000CC8")]
	[FieldOffset(Offset = "0x20")]
	public CustomLogicToken Operator;

	[Token(Token = "0x4000CC9")]
	[FieldOffset(Offset = "0x28")]
	public CustomLogicBaseExpressionAst Right;

	[Token(Token = "0x6000DC4")]
	[Address(RVA = "0x3CB2050", Offset = "0x3CB2050", VA = "0x3CB2050")]
	public CustomLogicAssignmentExpressionAst(CustomLogicBaseExpressionAst left, CustomLogicToken @operator, int line)
	{
	}
}
