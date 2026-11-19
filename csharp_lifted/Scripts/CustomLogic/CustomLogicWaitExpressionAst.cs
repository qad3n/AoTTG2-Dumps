// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicWaitExpressionAst
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicWaitExpressionAst.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Ast/CustomLogicWaitExpressionAst.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000444")]
internal class CustomLogicWaitExpressionAst : CustomLogicBaseExpressionAst
{
	[Token(Token = "0x40015A2")]
	[FieldOffset(Offset = "0x18")]
	public CustomLogicBaseExpressionAst WaitTime;

	[Token(Token = "0x6001A7F")]
	[Address(RVA = "0x58A9660", Offset = "0x58A8660", VA = "0x58A9660")]
	public CustomLogicWaitExpressionAst(CustomLogicBaseExpressionAst waitTime, int line)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicWaitExpressionAst.c (CustomLogic.CustomLogicWaitExpressionAst$$.ctor): clean
		base();
		this.Type = 0xf;
		this.Line = line;
		this.WaitTime = waitTime;
		return;
	}
}
