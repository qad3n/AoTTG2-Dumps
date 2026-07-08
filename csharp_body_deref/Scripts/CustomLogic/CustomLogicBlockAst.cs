using System.Collections.Generic;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000252")]
internal class CustomLogicBlockAst : CustomLogicBaseAst
{
	[Token(Token = "0x4000CE2")]
	[FieldOffset(Offset = "0x18")]
	public List<CustomLogicBaseAst> Statements;

	[Token(Token = "0x6000DC8")]
	[Address(RVA = "0x3CB2130", Offset = "0x3CB2130", VA = "0x3CB2130")]
	public CustomLogicBlockAst(CustomLogicAstType type, int line)
	{
	}
}
