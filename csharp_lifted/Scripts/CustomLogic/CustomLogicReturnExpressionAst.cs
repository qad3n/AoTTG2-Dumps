// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicReturnExpressionAst
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicReturnExpressionAst.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Ast/CustomLogicReturnExpressionAst.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000440")]
internal class CustomLogicReturnExpressionAst : CustomLogicBaseExpressionAst
{
	[Token(Token = "0x400159C")]
	[FieldOffset(Offset = "0x18")]
	public CustomLogicBaseExpressionAst ReturnValue;

	[Token(Token = "0x6001A79")]
	[Address(RVA = "0x58A92B0", Offset = "0x58A82B0", VA = "0x58A92B0")]
	public CustomLogicReturnExpressionAst(CustomLogicBaseExpressionAst returnValue, int line)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicReturnExpressionAst.c (CustomLogic.CustomLogicReturnExpressionAst$$.ctor): clean
		base();
		this.Type = 0xc;
		this.Line = line;
		this.ReturnValue = returnValue;
		return;
	}
}
