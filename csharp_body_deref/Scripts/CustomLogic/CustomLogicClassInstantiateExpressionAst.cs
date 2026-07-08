using System.Collections.Generic;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000255")]
internal class CustomLogicClassInstantiateExpressionAst : CustomLogicBaseExpressionAst
{
	[Token(Token = "0x4000CE7")]
	[FieldOffset(Offset = "0x18")]
	public string Name;

	[Token(Token = "0x4000CE8")]
	[FieldOffset(Offset = "0x20")]
	public List<CustomLogicBaseAst> Parameters;

	[Token(Token = "0x4000CE9")]
	[FieldOffset(Offset = "0x28")]
	public CustomLogicBaseExpressionAst Left;

	[Token(Token = "0x6000DCF")]
	[Address(RVA = "0x3CB2560", Offset = "0x3CB2560", VA = "0x3CB2560")]
	public CustomLogicClassInstantiateExpressionAst(string name, int line)
	{
	}
}
