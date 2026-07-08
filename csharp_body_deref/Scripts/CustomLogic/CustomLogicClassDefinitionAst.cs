using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000254")]
internal class CustomLogicClassDefinitionAst : CustomLogicBaseAst
{
	[Token(Token = "0x4000CE3")]
	[FieldOffset(Offset = "0x18")]
	public List<CustomLogicAssignmentExpressionAst> Assignments;

	[Token(Token = "0x4000CE4")]
	[FieldOffset(Offset = "0x20")]
	public Dictionary<string, CustomLogicMethodDefinitionAst> Methods;

	[Token(Token = "0x4000CE5")]
	[FieldOffset(Offset = "0x28")]
	public CustomLogicToken Token;

	[Token(Token = "0x1700017E")]
	public CustomLogicSourceType? Namespace
	{
		[Token(Token = "0x6000DCA")]
		[Address(RVA = "0x3CB21E0", Offset = "0x3CB21E0", VA = "0x3CB21E0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000DCB")]
		[Address(RVA = "0x3CB21F0", Offset = "0x3CB21F0", VA = "0x3CB21F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000DCC")]
	[Address(RVA = "0x3CB2200", Offset = "0x3CB2200", VA = "0x3CB2200")]
	public CustomLogicClassDefinitionAst(CustomLogicToken token, int line)
	{
	}

	[Token(Token = "0x6000DCD")]
	[Address(RVA = "0x3CB2450", Offset = "0x3CB2450", VA = "0x3CB2450")]
	public CustomLogicMethodDefinitionAst GetInit()
	{
		return null;
	}

	[Token(Token = "0x6000DCE")]
	[Address(RVA = "0x3CB24B0", Offset = "0x3CB24B0", VA = "0x3CB24B0")]
	public void AddMethod(string methodName, CustomLogicMethodDefinitionAst methodAst)
	{
	}
}
