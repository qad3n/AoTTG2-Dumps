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

[Token(Token = "0x2000436")]
internal class CustomLogicClassDefinitionAst : CustomLogicBaseAst
{
	[Token(Token = "0x4001587")]
	[FieldOffset(Offset = "0x18")]
	public List<CustomLogicAssignmentExpressionAst> Assignments;

	[Token(Token = "0x4001588")]
	[FieldOffset(Offset = "0x20")]
	public Dictionary<string, CustomLogicMethodDefinitionAst> Methods;

	[Token(Token = "0x4001589")]
	[FieldOffset(Offset = "0x28")]
	public CustomLogicToken Token;

	[Token(Token = "0x170002CB")]
	public CustomLogicSourceType? Namespace
	{
		[Token(Token = "0x6001A6A")]
		[Address(RVA = "0x58A8A80", Offset = "0x58A7A80", VA = "0x58A8A80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001A6B")]
		[Address(RVA = "0x58A8A90", Offset = "0x58A7A90", VA = "0x58A8A90")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6001A6C")]
	[Address(RVA = "0x58A8AA0", Offset = "0x58A7AA0", VA = "0x58A8AA0")]
	public CustomLogicClassDefinitionAst(CustomLogicToken token, int line)
	{
	}

	[Token(Token = "0x6001A6D")]
	[Address(RVA = "0x58A8CF0", Offset = "0x58A7CF0", VA = "0x58A8CF0")]
	public CustomLogicMethodDefinitionAst GetInit()
	{
		return null;
	}

	[Token(Token = "0x6001A6E")]
	[Address(RVA = "0x58A8D50", Offset = "0x58A7D50", VA = "0x58A8D50")]
	public void AddMethod(string methodName, CustomLogicMethodDefinitionAst methodAst)
	{
	}
}
