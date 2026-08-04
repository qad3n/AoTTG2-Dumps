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

[Token(Token = "0x2000293")]
internal class CustomLogicMethodCallExpressionAst : CustomLogicBaseExpressionAst
{
	[Token(Token = "0x4000DD6")]
	[FieldOffset(Offset = "0x18")]
	public string Name;

	[Token(Token = "0x4000DD7")]
	[FieldOffset(Offset = "0x20")]
	public List<CustomLogicBaseAst> Parameters;

	[Token(Token = "0x4000DD8")]
	[FieldOffset(Offset = "0x28")]
	public CustomLogicBaseExpressionAst Left;

	[Token(Token = "0x6000F7E")]
	[Address(RVA = "0x3FB8AC0", Offset = "0x3FB8AC0", VA = "0x3FB8AC0")]
	public CustomLogicMethodCallExpressionAst(string name, int line)
	{
	}
}
