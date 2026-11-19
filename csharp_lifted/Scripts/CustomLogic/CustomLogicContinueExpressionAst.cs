// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicContinueExpressionAst
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicContinueExpressionAst.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Ast/CustomLogicContinueExpression.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000439")]
internal class CustomLogicContinueExpressionAst : CustomLogicBaseExpressionAst
{
	[Token(Token = "0x6001A71")]
	[Address(RVA = "0x58A8F40", Offset = "0x58A7F40", VA = "0x58A8F40")]
	public CustomLogicContinueExpressionAst(int line)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicContinueExpressionAst.c (CustomLogic.CustomLogicContinueExpressionAst$$.ctor): clean
		base();
		this.Type = 0xd;
		this.Line = line;
		return;
	}
}
