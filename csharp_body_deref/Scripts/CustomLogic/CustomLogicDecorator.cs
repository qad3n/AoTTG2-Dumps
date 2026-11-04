// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicDecorator
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicDecorator.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x20003D0")]
internal class CustomLogicDecorator
{
	[Token(Token = "0x40013CC")]
	[FieldOffset(Offset = "0x10")]
	public string Name;

	[Token(Token = "0x40013CD")]
	[FieldOffset(Offset = "0x18")]
	public List<object> Parameters;

	[Token(Token = "0x60017ED")]
	[Address(RVA = "0x1ECF6C0", Offset = "0x1ECDCC0", VA = "0x181ECF6C0")]
	public CustomLogicDecorator(string name)
	{
	}
}
