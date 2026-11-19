// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicMethodCallExpressionAst
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicMethodCallExpressionAst.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Ast/CustomLogicMethodCallExpressionAst.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x200043C")]
internal class CustomLogicMethodCallExpressionAst : CustomLogicBaseExpressionAst
{
	[Token(Token = "0x4001594")]
	[FieldOffset(Offset = "0x18")]
	public string Name;

	[Token(Token = "0x4001595")]
	[FieldOffset(Offset = "0x20")]
	public List<CustomLogicBaseAst> Parameters;

	[Token(Token = "0x4001596")]
	[FieldOffset(Offset = "0x28")]
	public CustomLogicBaseExpressionAst Left;

	[Token(Token = "0x6001A74")]
	[Address(RVA = "0x58A9020", Offset = "0x58A8020", VA = "0x58A9020")]
	public CustomLogicMethodCallExpressionAst(string name, int line)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMethodCallExpressionAst.c (CustomLogic.CustomLogicMethodCallExpressionAst$$.ctor): clean
		List<CustomLogicBaseAst> __this_00;

		__this_00 = new List<CustomLogicBaseAst>();
		this.Parameters = __this_00;
		base();
		this.Type = 4;
		this.Line = line;
		this.Name = name;
		return;
	}
}
