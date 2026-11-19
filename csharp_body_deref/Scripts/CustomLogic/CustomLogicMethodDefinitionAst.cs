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

[Token(Token = "0x200043D")]
internal class CustomLogicMethodDefinitionAst : CustomLogicBlockAst
{
	[Token(Token = "0x4001597")]
	[FieldOffset(Offset = "0x20")]
	public List<string> ParameterNames;

	[Token(Token = "0x4001598")]
	[FieldOffset(Offset = "0x28")]
	public bool Coroutine;

	[Token(Token = "0x4001599")]
	[FieldOffset(Offset = "0x30")]
	public string Name;

	[Token(Token = "0x6001A75")]
	[Address(RVA = "0x58A8C00", Offset = "0x58A7C00", VA = "0x58A8C00")]
	public CustomLogicMethodDefinitionAst(int line, bool coroutine = false)
	{
	}

	[Token(Token = "0x6001A76")]
	[Address(RVA = "0x58A90C0", Offset = "0x58A80C0", VA = "0x58A90C0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
