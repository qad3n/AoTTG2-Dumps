using System.Collections.Generic;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x200025A")]
internal class CustomLogicMethodCallExpressionAst : CustomLogicBaseExpressionAst
{
	[Token(Token = "0x4000CF0")]
	[FieldOffset(Offset = "0x18")]
	public string Name;

	[Token(Token = "0x4000CF1")]
	[FieldOffset(Offset = "0x20")]
	public List<CustomLogicBaseAst> Parameters;

	[Token(Token = "0x4000CF2")]
	[FieldOffset(Offset = "0x28")]
	public CustomLogicBaseExpressionAst Left;

	[Token(Token = "0x6000DD4")]
	[Address(RVA = "0x3CB2780", Offset = "0x3CB2780", VA = "0x3CB2780")]
	public CustomLogicMethodCallExpressionAst(string name, int line)
	{
	}
}
