using System.Collections.Generic;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x200025F")]
internal class CustomLogicStartAst : CustomLogicBaseAst
{
	[Token(Token = "0x4000CF9")]
	[FieldOffset(Offset = "0x18")]
	public Dictionary<string, CustomLogicClassDefinitionAst> Classes;

	[Token(Token = "0x4000CFA")]
	[FieldOffset(Offset = "0x20")]
	public Dictionary<string, CustomLogicSourceType> ClassNamespaces;

	[Token(Token = "0x6000DDA")]
	[Address(RVA = "0x3CB2A50", Offset = "0x3CB2A50", VA = "0x3CB2A50")]
	public CustomLogicStartAst()
	{
	}

	[Token(Token = "0x6000DDB")]
	[Address(RVA = "0x3CB2B20", Offset = "0x3CB2B20", VA = "0x3CB2B20")]
	public void AddEmptyMain()
	{
	}

	[Token(Token = "0x6000DDC")]
	[Address(RVA = "0x3CB2BF0", Offset = "0x3CB2BF0", VA = "0x3CB2BF0")]
	public void AddClass(string className, CustomLogicClassDefinitionAst classAst)
	{
	}
}
