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

[Token(Token = "0x20003E2")]
internal class CustomLogicStartAst : CustomLogicBaseAst
{
	[Token(Token = "0x40013FD")]
	[FieldOffset(Offset = "0x18")]
	public Dictionary<string, CustomLogicClassDefinitionAst> Classes;

	[Token(Token = "0x40013FE")]
	[FieldOffset(Offset = "0x20")]
	public Dictionary<string, CustomLogicSourceType> ClassNamespaces;

	[Token(Token = "0x6001803")]
	[Address(RVA = "0x1ED3EB0", Offset = "0x1ED24B0", VA = "0x181ED3EB0")]
	public CustomLogicStartAst()
	{
	}

	[Token(Token = "0x6001804")]
	[Address(RVA = "0x1ED3B40", Offset = "0x1ED2140", VA = "0x181ED3B40")]
	public void AddEmptyMain()
	{
	}

	[Token(Token = "0x6001805")]
	[Address(RVA = "0x1ED39F0", Offset = "0x1ED1FF0", VA = "0x181ED39F0")]
	public void AddClass(string className, CustomLogicClassDefinitionAst classAst)
	{
	}
}
