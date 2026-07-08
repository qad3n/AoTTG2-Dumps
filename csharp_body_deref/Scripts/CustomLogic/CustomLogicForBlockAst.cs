using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000259")]
internal class CustomLogicForBlockAst : CustomLogicBlockAst
{
	[Token(Token = "0x4000CEE")]
	[FieldOffset(Offset = "0x20")]
	public CustomLogicVariableExpressionAst Variable;

	[Token(Token = "0x4000CEF")]
	[FieldOffset(Offset = "0x28")]
	public CustomLogicBaseExpressionAst Iterable;

	[Token(Token = "0x6000DD3")]
	[Address(RVA = "0x3CB2700", Offset = "0x3CB2700", VA = "0x3CB2700")]
	public CustomLogicForBlockAst(int line)
	{
	}
}
