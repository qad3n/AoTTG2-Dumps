using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000261")]
internal class CustomLogicVariableExpressionAst : CustomLogicBaseExpressionAst
{
	[Token(Token = "0x4000CFD")]
	[FieldOffset(Offset = "0x18")]
	public string Name;

	[Token(Token = "0x6000DDE")]
	[Address(RVA = "0x3CB2D90", Offset = "0x3CB2D90", VA = "0x3CB2D90")]
	public CustomLogicVariableExpressionAst(string name, int line)
	{
	}
}
