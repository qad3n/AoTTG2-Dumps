// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicFieldExpressionAst
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicFieldExpressionAst.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Ast/CustomLogicFieldExpressionAst.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x20003DB")]
internal class CustomLogicFieldExpressionAst : CustomLogicBaseExpressionAst
{
	[Token(Token = "0x40013F0")]
	[FieldOffset(Offset = "0x18")]
	public string FieldName;

	[Token(Token = "0x40013F1")]
	[FieldOffset(Offset = "0x20")]
	public CustomLogicBaseExpressionAst Left;

	[Token(Token = "0x60017FB")]
	[Address(RVA = "0x1ED0160", Offset = "0x1ECE760", VA = "0x181ED0160")]
	public CustomLogicFieldExpressionAst(string name, int line)
	{
	}
}
