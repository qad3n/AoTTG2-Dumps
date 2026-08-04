// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicFieldExpressionAst
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicFieldExpressionAst.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Ast/CustomLogicFieldExpressionAst.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000291")]
internal class CustomLogicFieldExpressionAst : CustomLogicBaseExpressionAst
{
	[Token(Token = "0x4000DD2")]
	[FieldOffset(Offset = "0x18")]
	public string FieldName;

	[Token(Token = "0x4000DD3")]
	[FieldOffset(Offset = "0x20")]
	public CustomLogicBaseExpressionAst Left;

	[Token(Token = "0x6000F7C")]
	[Address(RVA = "0x3FB8A00", Offset = "0x3FB8A00", VA = "0x3FB8A00")]
	public CustomLogicFieldExpressionAst(string name, int line)
	{
	}
}
