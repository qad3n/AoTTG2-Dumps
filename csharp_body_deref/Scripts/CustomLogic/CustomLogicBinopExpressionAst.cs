// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicBinopExpressionAst
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicBinopExpressionAst.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Ast/CustomLogicBinopExpressionAst.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x20003D4")]
internal class CustomLogicBinopExpressionAst : CustomLogicBaseExpressionAst
{
	[Token(Token = "0x40013E3")]
	[FieldOffset(Offset = "0x18")]
	public CustomLogicBaseExpressionAst Left;

	[Token(Token = "0x40013E4")]
	[FieldOffset(Offset = "0x20")]
	public CustomLogicBaseExpressionAst Right;

	[Token(Token = "0x40013E5")]
	[FieldOffset(Offset = "0x28")]
	public CustomLogicToken Token;

	[Token(Token = "0x60017F0")]
	[Address(RVA = "0x1ECDA60", Offset = "0x1ECC060", VA = "0x181ECDA60")]
	public CustomLogicBinopExpressionAst(CustomLogicToken token, int line)
	{
	}
}
