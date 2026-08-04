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

[Token(Token = "0x20000D8")]
internal class ReplayScript : BaseCSVContainer
{
	[Token(Token = "0x400051D")]
	[FieldOffset(Offset = "0x10")]
	public ReplayScriptOptions Options;

	[Token(Token = "0x400051E")]
	[FieldOffset(Offset = "0x18")]
	public List<ReplayScriptEvent> Events;

	[Token(Token = "0x600041D")]
	[Address(RVA = "0x4104590", Offset = "0x4104590", VA = "0x4104590")]
	public ReplayScript()
	{
	}
}
