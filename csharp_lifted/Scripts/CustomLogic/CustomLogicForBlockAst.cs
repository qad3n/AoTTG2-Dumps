// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicForBlockAst
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicForBlockAst.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Ast/CustomLogicForBlockAst.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x200043B")]
internal class CustomLogicForBlockAst : CustomLogicBlockAst
{
	[Token(Token = "0x4001592")]
	[FieldOffset(Offset = "0x20")]
	public CustomLogicVariableExpressionAst Variable;

	[Token(Token = "0x4001593")]
	[FieldOffset(Offset = "0x28")]
	public CustomLogicBaseExpressionAst Iterable;

	[Token(Token = "0x6001A73")]
	[Address(RVA = "0x58A8FA0", Offset = "0x58A7FA0", VA = "0x58A8FA0")]
	public CustomLogicForBlockAst(int line)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicForBlockAst.c (CustomLogic.CustomLogicForBlockAst$$.ctor): clean
		List<CustomLogicBaseAst> __this_00;

		__this_00 = new List<CustomLogicBaseAst>();
		this.Statements = __this_00;
		base();
		this.Type = 0x11;
		this.Line = line;
		return;
	}
}
