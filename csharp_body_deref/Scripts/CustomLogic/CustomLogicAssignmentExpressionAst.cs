// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicAssignmentExpressionAst
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicAssignmentExpressionAst.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Ast/CustomLogicAssignmentExpressionAst.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x20003CF")]
internal class CustomLogicAssignmentExpressionAst : CustomLogicBaseExpressionAst
{
	[Token(Token = "0x40013C8")]
	[FieldOffset(Offset = "0x18")]
	public CustomLogicBaseExpressionAst Left;

	[Token(Token = "0x40013C9")]
	[FieldOffset(Offset = "0x20")]
	public CustomLogicToken Operator;

	[Token(Token = "0x40013CA")]
	[FieldOffset(Offset = "0x28")]
	public CustomLogicBaseExpressionAst Right;

	[Token(Token = "0x40013CB")]
	[FieldOffset(Offset = "0x30")]
	public List<CustomLogicDecorator> Decorators;

	[Token(Token = "0x60017EC")]
	[Address(RVA = "0x1ECD9B0", Offset = "0x1ECBFB0", VA = "0x181ECD9B0")]
	public CustomLogicAssignmentExpressionAst(CustomLogicBaseExpressionAst left, CustomLogicToken @operator, int line)
	{
	}
}
