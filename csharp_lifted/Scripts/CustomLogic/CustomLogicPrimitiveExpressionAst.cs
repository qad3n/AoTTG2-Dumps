// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicPrimitiveExpressionAst
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicPrimitiveExpressionAst.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Ast/CustomLogicPrimitiveExpressionAst.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x200043F")]
internal class CustomLogicPrimitiveExpressionAst : CustomLogicBaseExpressionAst
{
	[Token(Token = "0x400159B")]
	[FieldOffset(Offset = "0x18")]
	public object Value;

	[Token(Token = "0x6001A78")]
	[Address(RVA = "0x58A9270", Offset = "0x58A8270", VA = "0x58A9270")]
	public CustomLogicPrimitiveExpressionAst(object value, int line)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicPrimitiveExpressionAst.c (CustomLogic.CustomLogicPrimitiveExpressionAst$$.ctor): clean
		base();
		this.Type = 7;
		this.Line = line;
		this.Value = value;
		return;
	}
}
