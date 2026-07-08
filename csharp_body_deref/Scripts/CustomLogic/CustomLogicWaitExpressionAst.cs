using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000262")]
internal class CustomLogicWaitExpressionAst : CustomLogicBaseExpressionAst
{
	[Token(Token = "0x4000CFE")]
	[FieldOffset(Offset = "0x18")]
	public CustomLogicBaseExpressionAst WaitTime;

	[Token(Token = "0x6000DDF")]
	[Address(RVA = "0x3CB2DD0", Offset = "0x3CB2DD0", VA = "0x3CB2DD0")]
	public CustomLogicWaitExpressionAst(CustomLogicBaseExpressionAst waitTime, int line)
	{
	}
}
