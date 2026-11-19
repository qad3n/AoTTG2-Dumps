// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicFieldExpressionAst
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicFieldExpressionAst.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Ast/CustomLogicFieldExpressionAst.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x200043A")]
internal class CustomLogicFieldExpressionAst : CustomLogicBaseExpressionAst
{
	[Token(Token = "0x4001590")]
	[FieldOffset(Offset = "0x18")]
	public string FieldName;

	[Token(Token = "0x4001591")]
	[FieldOffset(Offset = "0x20")]
	public CustomLogicBaseExpressionAst Left;

	[Token(Token = "0x6001A72")]
	[Address(RVA = "0x58A8F60", Offset = "0x58A7F60", VA = "0x58A8F60")]
	public CustomLogicFieldExpressionAst(string name, int line)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicFieldExpressionAst.c (CustomLogic.CustomLogicFieldExpressionAst$$.ctor): clean
		base();
		this.Type = 6;
		this.Line = line;
		this.FieldName = name;
		return;
	}
}
