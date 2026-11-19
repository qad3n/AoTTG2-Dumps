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

[Token(Token = "0x2000437")]
internal class CustomLogicClassInstantiateExpressionAst : CustomLogicBaseExpressionAst
{
	[Token(Token = "0x400158B")]
	[FieldOffset(Offset = "0x18")]
	public string Name;

	[Token(Token = "0x400158C")]
	[FieldOffset(Offset = "0x20")]
	public List<CustomLogicBaseAst> Parameters;

	[Token(Token = "0x400158D")]
	[FieldOffset(Offset = "0x28")]
	public CustomLogicBaseExpressionAst Left;

	[Token(Token = "0x6001A6F")]
	[Address(RVA = "0x58A8E00", Offset = "0x58A7E00", VA = "0x58A8E00")]
	public CustomLogicClassInstantiateExpressionAst(string name, int line)
	{
	}
}
