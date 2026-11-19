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

[Token(Token = "0x2000441")]
internal class CustomLogicStartAst : CustomLogicBaseAst
{
	[Token(Token = "0x400159D")]
	[FieldOffset(Offset = "0x18")]
	public Dictionary<string, CustomLogicClassDefinitionAst> Classes;

	[Token(Token = "0x400159E")]
	[FieldOffset(Offset = "0x20")]
	public Dictionary<string, CustomLogicSourceType> ClassNamespaces;

	[Token(Token = "0x6001A7A")]
	[Address(RVA = "0x58A92F0", Offset = "0x58A82F0", VA = "0x58A92F0")]
	public CustomLogicStartAst()
	{
	}

	[Token(Token = "0x6001A7B")]
	[Address(RVA = "0x58A93C0", Offset = "0x58A83C0", VA = "0x58A93C0")]
	public void AddEmptyMain()
	{
	}

	[Token(Token = "0x6001A7C")]
	[Address(RVA = "0x58A9490", Offset = "0x58A8490", VA = "0x58A9490")]
	public void AddClass(string className, CustomLogicClassDefinitionAst classAst)
	{
	}
}
