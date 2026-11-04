// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicClassInstantiateExpressionAst
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicClassInstantiateExpressionAst.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Ast/CustomLogicClassInstantiateExpressionAst.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x20003D8")]
internal class CustomLogicClassInstantiateExpressionAst : CustomLogicBaseExpressionAst
{
	[Token(Token = "0x40013EB")]
	[FieldOffset(Offset = "0x18")]
	public string Name;

	[Token(Token = "0x40013EC")]
	[FieldOffset(Offset = "0x20")]
	public List<CustomLogicBaseAst> Parameters;

	[Token(Token = "0x40013ED")]
	[FieldOffset(Offset = "0x28")]
	public CustomLogicBaseExpressionAst Left;

	[Token(Token = "0x60017F8")]
	[Address(RVA = "0x1ECDE30", Offset = "0x1ECC430", VA = "0x181ECDE30")]
	public CustomLogicClassInstantiateExpressionAst(string name, int line)
	{
	}
}
