// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicBreakExpressionAst
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicBreakExpressionAst.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Ast/CustomLogicBreakExpression.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000435")]
internal class CustomLogicBreakExpressionAst : CustomLogicBaseExpressionAst
{
	[Token(Token = "0x6001A69")]
	[Address(RVA = "0x58A8A60", Offset = "0x58A7A60", VA = "0x58A8A60")]
	public CustomLogicBreakExpressionAst(int line)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicBreakExpressionAst.c (CustomLogic.CustomLogicBreakExpressionAst$$.ctor): clean
		base();
		this.Type = 0xe;
		this.Line = line;
		return;
	}
}
