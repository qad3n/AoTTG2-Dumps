// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicBinopExpressionAst
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicBinopExpressionAst.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Ast/CustomLogicBinopExpressionAst.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x200028A")]
internal class CustomLogicBinopExpressionAst : CustomLogicBaseExpressionAst
{
	[Token(Token = "0x4000DC5")]
	[FieldOffset(Offset = "0x18")]
	public CustomLogicBaseExpressionAst Left;

	[Token(Token = "0x4000DC6")]
	[FieldOffset(Offset = "0x20")]
	public CustomLogicBaseExpressionAst Right;

	[Token(Token = "0x4000DC7")]
	[FieldOffset(Offset = "0x28")]
	public CustomLogicToken Token;

	[Token(Token = "0x6000F71")]
	[Address(RVA = "0x3FB8430", Offset = "0x3FB8430", VA = "0x3FB8430")]
	public CustomLogicBinopExpressionAst(CustomLogicToken token, int line)
	{
	}
}
