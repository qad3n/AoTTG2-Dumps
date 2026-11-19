// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicUnaryExpressionAst
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicUnaryExpressionAst.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000442")]
internal class CustomLogicUnaryExpressionAst : CustomLogicBaseExpressionAst
{
	[Token(Token = "0x400159F")]
	[FieldOffset(Offset = "0x18")]
	public CustomLogicBaseExpressionAst Next;

	[Token(Token = "0x40015A0")]
	[FieldOffset(Offset = "0x20")]
	public CustomLogicToken Token;

	[Token(Token = "0x6001A7D")]
	[Address(RVA = "0x58A95E0", Offset = "0x58A85E0", VA = "0x58A95E0")]
	public CustomLogicUnaryExpressionAst(CustomLogicToken token, int line)
	{
	}
}
