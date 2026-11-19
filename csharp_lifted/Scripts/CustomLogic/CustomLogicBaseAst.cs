// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicBaseAst
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicBaseAst.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Ast/CustomLogicBaseAst.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000430")]
internal class CustomLogicBaseAst
{
	[Token(Token = "0x400156E")]
	[FieldOffset(Offset = "0x10")]
	public CustomLogicAstType Type;

	[Token(Token = "0x400156F")]
	[FieldOffset(Offset = "0x14")]
	public int Line;

	[Token(Token = "0x6001A65")]
	[Address(RVA = "0x58A8970", Offset = "0x58A7970", VA = "0x58A8970")]
	public CustomLogicBaseAst(CustomLogicAstType type, int line)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicBaseAst.c (CustomLogic.CustomLogicBaseAst$$.ctor): clean
		base();
		this.Type = type;
		this.Line = line;
		return;
	}
}
