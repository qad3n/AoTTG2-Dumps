// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicConditionalBlockAst
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicConditionalBlockAst.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Ast/CustomLogicConditionalBlockAst.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000438")]
internal class CustomLogicConditionalBlockAst : CustomLogicBlockAst
{
	[Token(Token = "0x400158E")]
	[FieldOffset(Offset = "0x20")]
	public CustomLogicBaseExpressionAst Condition;

	[Token(Token = "0x400158F")]
	[FieldOffset(Offset = "0x28")]
	public CustomLogicToken Token;

	[Token(Token = "0x6001A70")]
	[Address(RVA = "0x58A8EA0", Offset = "0x58A7EA0", VA = "0x58A8EA0")]
	public CustomLogicConditionalBlockAst(CustomLogicToken token, int line)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicConditionalBlockAst.c (CustomLogic.CustomLogicConditionalBlockAst$$.ctor): clean
		List<CustomLogicBaseAst> __this_00;

		__this_00 = new List<CustomLogicBaseAst>();
		this.Statements = __this_00;
		base();
		this.Type = 0x10;
		this.Line = line;
		this.Token = token;
		return;
	}
}
