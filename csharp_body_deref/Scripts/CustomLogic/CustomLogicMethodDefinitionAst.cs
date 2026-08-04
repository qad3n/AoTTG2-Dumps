// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicMethodDefinitionAst
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicMethodDefinitionAst.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Ast/CustomLogicMethodDefinitionAst.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000294")]
internal class CustomLogicMethodDefinitionAst : CustomLogicBlockAst
{
	[Token(Token = "0x4000DD9")]
	[FieldOffset(Offset = "0x20")]
	public List<string> ParameterNames;

	[Token(Token = "0x4000DDA")]
	[FieldOffset(Offset = "0x28")]
	public bool Coroutine;

	[Token(Token = "0x4000DDB")]
	[FieldOffset(Offset = "0x30")]
	public string Name;

	[Token(Token = "0x6000F7F")]
	[Address(RVA = "0x3FB86A0", Offset = "0x3FB86A0", VA = "0x3FB86A0")]
	public CustomLogicMethodDefinitionAst(int line, bool coroutine = false)
	{
	}

	[Token(Token = "0x6000F80")]
	[Address(RVA = "0x3FB8B60", Offset = "0x3FB8B60", VA = "0x3FB8B60", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
