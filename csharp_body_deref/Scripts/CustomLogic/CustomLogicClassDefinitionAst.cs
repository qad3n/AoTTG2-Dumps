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

[Token(Token = "0x200028D")]
internal class CustomLogicClassDefinitionAst : CustomLogicBaseAst
{
	[Token(Token = "0x4000DC9")]
	[FieldOffset(Offset = "0x18")]
	public List<CustomLogicAssignmentExpressionAst> Assignments;

	[Token(Token = "0x4000DCA")]
	[FieldOffset(Offset = "0x20")]
	public Dictionary<string, CustomLogicMethodDefinitionAst> Methods;

	[Token(Token = "0x4000DCB")]
	[FieldOffset(Offset = "0x28")]
	public CustomLogicToken Token;

	[Token(Token = "0x170001D7")]
	public CustomLogicSourceType? Namespace
	{
		[Token(Token = "0x6000F74")]
		[Address(RVA = "0x3FB8520", Offset = "0x3FB8520", VA = "0x3FB8520")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000F75")]
		[Address(RVA = "0x3FB8530", Offset = "0x3FB8530", VA = "0x3FB8530")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000F76")]
	[Address(RVA = "0x3FB8540", Offset = "0x3FB8540", VA = "0x3FB8540")]
	public CustomLogicClassDefinitionAst(CustomLogicToken token, int line)
	{
	}

	[Token(Token = "0x6000F77")]
	[Address(RVA = "0x3FB8790", Offset = "0x3FB8790", VA = "0x3FB8790")]
	public CustomLogicMethodDefinitionAst GetInit()
	{
		return null;
	}

	[Token(Token = "0x6000F78")]
	[Address(RVA = "0x3FB87F0", Offset = "0x3FB87F0", VA = "0x3FB87F0")]
	public void AddMethod(string methodName, CustomLogicMethodDefinitionAst methodAst)
	{
	}
}
