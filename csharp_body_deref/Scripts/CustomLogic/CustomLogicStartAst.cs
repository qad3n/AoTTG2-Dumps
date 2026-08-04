// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicStartAst
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicStartAst.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Ast/CustomLogicStartAst.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000298")]
internal class CustomLogicStartAst : CustomLogicBaseAst
{
	[Token(Token = "0x4000DDF")]
	[FieldOffset(Offset = "0x18")]
	public Dictionary<string, CustomLogicClassDefinitionAst> Classes;

	[Token(Token = "0x4000DE0")]
	[FieldOffset(Offset = "0x20")]
	public Dictionary<string, CustomLogicSourceType> ClassNamespaces;

	[Token(Token = "0x6000F84")]
	[Address(RVA = "0x3FB8D90", Offset = "0x3FB8D90", VA = "0x3FB8D90")]
	public CustomLogicStartAst()
	{
	}

	[Token(Token = "0x6000F85")]
	[Address(RVA = "0x3FB8E60", Offset = "0x3FB8E60", VA = "0x3FB8E60")]
	public void AddEmptyMain()
	{
	}

	[Token(Token = "0x6000F86")]
	[Address(RVA = "0x3FB8F30", Offset = "0x3FB8F30", VA = "0x3FB8F30")]
	public void AddClass(string className, CustomLogicClassDefinitionAst classAst)
	{
	}
}
