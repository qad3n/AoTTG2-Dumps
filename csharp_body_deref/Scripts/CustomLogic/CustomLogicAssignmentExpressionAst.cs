// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicAssignmentExpressionAst
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicAssignmentExpressionAst.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Ast/CustomLogicAssignmentExpressionAst.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000286")]
internal class CustomLogicAssignmentExpressionAst : CustomLogicBaseExpressionAst
{
	[Token(Token = "0x4000DAD")]
	[FieldOffset(Offset = "0x18")]
	public CustomLogicBaseExpressionAst Left;

	[Token(Token = "0x4000DAE")]
	[FieldOffset(Offset = "0x20")]
	public CustomLogicToken Operator;

	[Token(Token = "0x4000DAF")]
	[FieldOffset(Offset = "0x28")]
	public CustomLogicBaseExpressionAst Right;

	[Token(Token = "0x6000F6E")]
	[Address(RVA = "0x3FB8390", Offset = "0x3FB8390", VA = "0x3FB8390")]
	public CustomLogicAssignmentExpressionAst(CustomLogicBaseExpressionAst left, CustomLogicToken @operator, int line)
	{
	}
}
