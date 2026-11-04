// ==================== AoTTG2 cross-reference ====================
// Type: Replay.ReplayScript
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Replay/ReplayScript.c
// Prior real C# source (older reference): Assets/Scripts/Replay/ReplayScript/ReplayScript.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Utility;

namespace Replay;

[Token(Token = "0x20000F8")]
internal class ReplayScript : BaseCSVContainer
{
	[Token(Token = "0x40005BD")]
	[FieldOffset(Offset = "0x10")]
	public ReplayScriptOptions Options;

	[Token(Token = "0x40005BE")]
	[FieldOffset(Offset = "0x18")]
	public List<ReplayScriptEvent> Events;

	[Token(Token = "0x60004B6")]
	[Address(RVA = "0x1F251D0", Offset = "0x1F237D0", VA = "0x181F251D0")]
	public ReplayScript()
	{
	}
}
