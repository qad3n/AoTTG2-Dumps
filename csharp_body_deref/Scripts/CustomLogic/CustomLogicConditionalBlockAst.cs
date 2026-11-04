// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicConditionalBlockAst
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicConditionalBlockAst.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Ast/CustomLogicConditionalBlockAst.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x20003D9")]
internal class CustomLogicConditionalBlockAst : CustomLogicBlockAst
{
	[Token(Token = "0x40013EE")]
	[FieldOffset(Offset = "0x20")]
	public CustomLogicBaseExpressionAst Condition;

	[Token(Token = "0x40013EF")]
	[FieldOffset(Offset = "0x28")]
	public CustomLogicToken Token;

	[Token(Token = "0x60017F9")]
	[Address(RVA = "0x1ECF650", Offset = "0x1ECDC50", VA = "0x181ECF650")]
	public CustomLogicConditionalBlockAst(CustomLogicToken token, int line)
	{
	}
}
