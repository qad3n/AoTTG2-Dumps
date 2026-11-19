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

[Token(Token = "0x2000682")]
internal class HumanAICallback
{
	[Token(Token = "0x4001D33")]
	[FieldOffset(Offset = "0x10")]
	public Action OnIdle;

	[Token(Token = "0x4001D34")]
	[FieldOffset(Offset = "0x18")]
	public Action PreAction;

	[Token(Token = "0x4001D35")]
	[FieldOffset(Offset = "0x20")]
	public Action PostAction;

	[Token(Token = "0x4001D36")]
	[FieldOffset(Offset = "0x28")]
	public Action MoveToCallback;

	[Token(Token = "0x6003EEE")]
	[Address(RVA = "0x5AAA8B0", Offset = "0x5AA98B0", VA = "0x5AAA8B0")]
	public HumanAICallback()
	{
	}
}
