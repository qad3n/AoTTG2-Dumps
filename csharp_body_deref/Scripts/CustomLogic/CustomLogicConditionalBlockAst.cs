// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicConditionalBlockAst
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicConditionalBlockAst.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Ast/CustomLogicConditionalBlockAst.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x200028F")]
internal class CustomLogicConditionalBlockAst : CustomLogicBlockAst
{
	[Token(Token = "0x4000DD0")]
	[FieldOffset(Offset = "0x20")]
	public CustomLogicBaseExpressionAst Condition;

	[Token(Token = "0x4000DD1")]
	[FieldOffset(Offset = "0x28")]
	public CustomLogicToken Token;

	[Token(Token = "0x6000F7A")]
	[Address(RVA = "0x3FB8940", Offset = "0x3FB8940", VA = "0x3FB8940")]
	public CustomLogicConditionalBlockAst(CustomLogicToken token, int line)
	{
	}
}
