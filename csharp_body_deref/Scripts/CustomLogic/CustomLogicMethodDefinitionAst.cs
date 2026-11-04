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

[Token(Token = "0x20003DE")]
internal class CustomLogicMethodDefinitionAst : CustomLogicBlockAst
{
	[Token(Token = "0x40013F7")]
	[FieldOffset(Offset = "0x20")]
	public List<string> ParameterNames;

	[Token(Token = "0x40013F8")]
	[FieldOffset(Offset = "0x28")]
	public bool Coroutine;

	[Token(Token = "0x40013F9")]
	[FieldOffset(Offset = "0x30")]
	public string Name;

	[Token(Token = "0x60017FE")]
	[Address(RVA = "0x1ED1C70", Offset = "0x1ED0270", VA = "0x181ED1C70")]
	public CustomLogicMethodDefinitionAst(int line, bool coroutine = false)
	{
	}

	[Token(Token = "0x60017FF")]
	[Address(RVA = "0x1ED1B00", Offset = "0x1ED0100", VA = "0x181ED1B00", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
