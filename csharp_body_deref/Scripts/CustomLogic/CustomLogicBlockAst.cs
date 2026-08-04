// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicBlockAst
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicBlockAst.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Ast/CustomLogicBlockAst.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x200028B")]
internal class CustomLogicBlockAst : CustomLogicBaseAst
{
	[Token(Token = "0x4000DC8")]
	[FieldOffset(Offset = "0x18")]
	public List<CustomLogicBaseAst> Statements;

	[Token(Token = "0x6000F72")]
	[Address(RVA = "0x3FB8470", Offset = "0x3FB8470", VA = "0x3FB8470")]
	public CustomLogicBlockAst(CustomLogicAstType type, int line)
	{
	}
}
