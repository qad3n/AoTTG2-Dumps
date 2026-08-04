// ==================== AoTTG2 cross-reference ====================
// Type: Replay.ReplayScriptEvent
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Replay/ReplayScriptEvent.c
// Prior real C# source (older reference): Assets/Scripts/Replay/ReplayScript/ReplayScriptEvent.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Utility;

namespace Replay;

[Token(Token = "0x20000D9")]
internal class ReplayScriptEvent : BaseCSVRow
{
	[Token(Token = "0x400051F")]
	[FieldOffset(Offset = "0x10")]
	public float Time;

	[Token(Token = "0x4000520")]
	[FieldOffset(Offset = "0x18")]
	public string Category;

	[Token(Token = "0x4000521")]
	[FieldOffset(Offset = "0x20")]
	public string Action;

	[Token(Token = "0x4000522")]
	[FieldOffset(Offset = "0x28")]
	public List<string> Parameters;

	[Token(Token = "0x600041E")]
	[Address(RVA = "0x41045A0", Offset = "0x41045A0", VA = "0x41045A0")]
	public ReplayScriptEvent()
	{
	}
}
