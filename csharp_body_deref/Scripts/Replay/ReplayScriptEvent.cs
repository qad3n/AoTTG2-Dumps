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

[Token(Token = "0x200006D")]
internal class ReplayScriptEvent : BaseCSVRow
{
	[Token(Token = "0x4000224")]
	[FieldOffset(Offset = "0x10")]
	public float Time;

	[Token(Token = "0x4000225")]
	[FieldOffset(Offset = "0x18")]
	public string Category;

	[Token(Token = "0x4000226")]
	[FieldOffset(Offset = "0x20")]
	public string Action;

	[Token(Token = "0x4000227")]
	[FieldOffset(Offset = "0x28")]
	public List<string> Parameters;

	[Token(Token = "0x600031E")]
	[Address(RVA = "0x576E510", Offset = "0x576D510", VA = "0x576E510")]
	public ReplayScriptEvent()
	{
	}
}
