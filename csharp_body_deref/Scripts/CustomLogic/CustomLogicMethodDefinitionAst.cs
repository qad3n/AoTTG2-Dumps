using System.Collections.Generic;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x200025B")]
internal class CustomLogicMethodDefinitionAst : CustomLogicBlockAst
{
	[Token(Token = "0x4000CF3")]
	[FieldOffset(Offset = "0x20")]
	public List<string> ParameterNames;

	[Token(Token = "0x4000CF4")]
	[FieldOffset(Offset = "0x28")]
	public bool Coroutine;

	[Token(Token = "0x4000CF5")]
	[FieldOffset(Offset = "0x30")]
	public string Name;

	[Token(Token = "0x6000DD5")]
	[Address(RVA = "0x3CB2360", Offset = "0x3CB2360", VA = "0x3CB2360")]
	public CustomLogicMethodDefinitionAst(int line, bool coroutine = false)
	{
	}

	[Token(Token = "0x6000DD6")]
	[Address(RVA = "0x3CB2820", Offset = "0x3CB2820", VA = "0x3CB2820", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
