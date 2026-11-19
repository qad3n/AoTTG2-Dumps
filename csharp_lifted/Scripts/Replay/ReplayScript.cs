// ==================== AoTTG2 cross-reference ====================
// Type: Replay.ReplayScript
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Replay/ReplayScript.c
// Prior real C# source (older reference): Assets/Scripts/Replay/ReplayScript/ReplayScript.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Utility;

namespace Replay;

[Token(Token = "0x200006C")]
internal class ReplayScript : BaseCSVContainer
{
	[Token(Token = "0x4000222")]
	[FieldOffset(Offset = "0x10")]
	public ReplayScriptOptions Options;

	[Token(Token = "0x4000223")]
	[FieldOffset(Offset = "0x18")]
	public List<ReplayScriptEvent> Events;

	[Token(Token = "0x600031D")]
	[Address(RVA = "0x576E500", Offset = "0x576D500", VA = "0x576E500")]
	public ReplayScript()
	{
		// Lifted from source/cpp/Replay/ReplayScript.c (Replay.ReplayScript$$.ctor): clean
		base();
		return;
	}
}
