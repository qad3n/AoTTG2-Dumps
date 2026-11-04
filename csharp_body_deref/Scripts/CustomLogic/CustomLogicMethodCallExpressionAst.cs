// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicMethodCallExpressionAst
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicMethodCallExpressionAst.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Ast/CustomLogicMethodCallExpressionAst.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x20003DD")]
internal class CustomLogicMethodCallExpressionAst : CustomLogicBaseExpressionAst
{
	[Token(Token = "0x40013F4")]
	[FieldOffset(Offset = "0x18")]
	public string Name;

	[Token(Token = "0x40013F5")]
	[FieldOffset(Offset = "0x20")]
	public List<CustomLogicBaseAst> Parameters;

	[Token(Token = "0x40013F6")]
	[FieldOffset(Offset = "0x28")]
	public CustomLogicBaseExpressionAst Left;

	[Token(Token = "0x60017FD")]
	[Address(RVA = "0x1ED1A60", Offset = "0x1ED0060", VA = "0x181ED1A60")]
	public CustomLogicMethodCallExpressionAst(string name, int line)
	{
	}
}
