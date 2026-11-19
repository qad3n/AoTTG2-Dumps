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

[Token(Token = "0x2000434")]
internal class CustomLogicBlockAst : CustomLogicBaseAst
{
	[Token(Token = "0x4001586")]
	[FieldOffset(Offset = "0x18")]
	public List<CustomLogicBaseAst> Statements;

	[Token(Token = "0x6001A68")]
	[Address(RVA = "0x58A89D0", Offset = "0x58A79D0", VA = "0x58A89D0")]
	public CustomLogicBlockAst(CustomLogicAstType type, int line)
	{
	}
}
