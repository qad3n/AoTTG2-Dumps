// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicClassDefinitionAst
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicClassDefinitionAst.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Ast/CustomLogicClassDefinitionAst.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x20003D7")]
internal class CustomLogicClassDefinitionAst : CustomLogicBaseAst
{
	[Token(Token = "0x40013E7")]
	[FieldOffset(Offset = "0x18")]
	public List<CustomLogicAssignmentExpressionAst> Assignments;

	[Token(Token = "0x40013E8")]
	[FieldOffset(Offset = "0x20")]
	public Dictionary<string, CustomLogicMethodDefinitionAst> Methods;

	[Token(Token = "0x40013E9")]
	[FieldOffset(Offset = "0x28")]
	public CustomLogicToken Token;

	[Token(Token = "0x1700028A")]
	public CustomLogicSourceType? Namespace
	{
		[Token(Token = "0x60017F3")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60017F4")]
		[Address(RVA = "0x1C61410", Offset = "0x1C5FA10", VA = "0x181C61410")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x60017F5")]
	[Address(RVA = "0x1ECDC80", Offset = "0x1ECC280", VA = "0x181ECDC80")]
	public CustomLogicClassDefinitionAst(CustomLogicToken token, int line)
	{
	}

	[Token(Token = "0x60017F6")]
	[Address(RVA = "0x1ECDC20", Offset = "0x1ECC220", VA = "0x181ECDC20")]
	public CustomLogicMethodDefinitionAst GetInit()
	{
		return null;
	}

	[Token(Token = "0x60017F7")]
	[Address(RVA = "0x1ECDB60", Offset = "0x1ECC160", VA = "0x181ECDB60")]
	public void AddMethod(string methodName, CustomLogicMethodDefinitionAst methodAst)
	{
	}
}
