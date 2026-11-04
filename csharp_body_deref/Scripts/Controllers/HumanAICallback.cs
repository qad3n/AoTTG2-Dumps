// ==================== AoTTG2 cross-reference ====================
// Type: Controllers.HumanAICallback
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Controllers/HumanAICallback.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Controllers;

[Token(Token = "0x2000623")]
internal class HumanAICallback
{
	[Token(Token = "0x4001B90")]
	[FieldOffset(Offset = "0x10")]
	public Action OnIdle;

	[Token(Token = "0x4001B91")]
	[FieldOffset(Offset = "0x18")]
	public Action PreAction;

	[Token(Token = "0x4001B92")]
	[FieldOffset(Offset = "0x20")]
	public Action PostAction;

	[Token(Token = "0x4001B93")]
	[FieldOffset(Offset = "0x28")]
	public Action MoveToCallback;

	[Token(Token = "0x6003C5F")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public HumanAICallback()
	{
	}
}
