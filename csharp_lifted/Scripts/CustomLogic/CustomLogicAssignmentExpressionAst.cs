// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicAssignmentExpressionAst
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicAssignmentExpressionAst.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Ast/CustomLogicAssignmentExpressionAst.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x200042E")]
internal class CustomLogicAssignmentExpressionAst : CustomLogicBaseExpressionAst
{
	[Token(Token = "0x4001568")]
	[FieldOffset(Offset = "0x18")]
	public CustomLogicBaseExpressionAst Left;

	[Token(Token = "0x4001569")]
	[FieldOffset(Offset = "0x20")]
	public CustomLogicToken Operator;

	[Token(Token = "0x400156A")]
	[FieldOffset(Offset = "0x28")]
	public CustomLogicBaseExpressionAst Right;

	[Token(Token = "0x400156B")]
	[FieldOffset(Offset = "0x30")]
	public List<CustomLogicDecorator> Decorators;

	[Token(Token = "0x6001A63")]
	[Address(RVA = "0x58A8810", Offset = "0x58A7810", VA = "0x58A8810")]
	public CustomLogicAssignmentExpressionAst(CustomLogicBaseExpressionAst left, CustomLogicToken @operator, int line)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicAssignmentExpressionAst.c (CustomLogic.CustomLogicAssignmentExpressionAst$$.ctor): 1 lines keep C-only constructs
		List<CustomLogicDecorator> __this_00;

		if (Il2CppMethodInitialized_07545acb == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(List<CustomLogicDecorator>)) ;
			Il2CppMethodInitialized_07545acb = true;
		}
		__this_00 = new List<CustomLogicDecorator>();
		this.Decorators = __this_00;
		base();
		this.Type = 3;
		this.Line = line;
		this.Left = left;
		this.Operator = @operator;
		return;
	}
}
