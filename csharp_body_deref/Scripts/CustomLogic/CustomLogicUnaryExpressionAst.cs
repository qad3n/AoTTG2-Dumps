// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicUnaryExpressionAst
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicUnaryExpressionAst.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x20003E3")]
internal class CustomLogicUnaryExpressionAst : CustomLogicBaseExpressionAst
{
	[Token(Token = "0x40013FF")]
	[FieldOffset(Offset = "0x18")]
	public CustomLogicBaseExpressionAst Next;

	[Token(Token = "0x4001400")]
	[FieldOffset(Offset = "0x20")]
	public CustomLogicToken Token;

	[Token(Token = "0x6001806")]
	[Address(RVA = "0x1ED3F80", Offset = "0x1ED2580", VA = "0x181ED3F80")]
	public CustomLogicUnaryExpressionAst(CustomLogicToken token, int line)
	{
	}
}
