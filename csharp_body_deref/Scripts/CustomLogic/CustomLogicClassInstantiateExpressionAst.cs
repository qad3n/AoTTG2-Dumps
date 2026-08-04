// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicClassInstantiateExpressionAst
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicClassInstantiateExpressionAst.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Ast/CustomLogicClassInstantiateExpressionAst.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x200028E")]
internal class CustomLogicClassInstantiateExpressionAst : CustomLogicBaseExpressionAst
{
	[Token(Token = "0x4000DCD")]
	[FieldOffset(Offset = "0x18")]
	public string Name;

	[Token(Token = "0x4000DCE")]
	[FieldOffset(Offset = "0x20")]
	public List<CustomLogicBaseAst> Parameters;

	[Token(Token = "0x4000DCF")]
	[FieldOffset(Offset = "0x28")]
	public CustomLogicBaseExpressionAst Left;

	[Token(Token = "0x6000F79")]
	[Address(RVA = "0x3FB88A0", Offset = "0x3FB88A0", VA = "0x3FB88A0")]
	public CustomLogicClassInstantiateExpressionAst(string name, int line)
	{
	}
}
