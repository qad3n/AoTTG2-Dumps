// ==================== AoTTG2 cross-reference ====================
// Type: Replay.ReplayScriptOptions
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Replay/ReplayScriptOptions.c
// Prior real C# source (older reference): Assets/Scripts/Replay/ReplayScript/ReplayScriptOptions.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using Utility;

namespace Replay;

[Token(Token = "0x200006E")]
internal class ReplayScriptOptions : BaseCSVRow
{
	[Token(Token = "0x4000228")]
	[FieldOffset(Offset = "0x10")]
	public string Version;

	[Token(Token = "0x600031F")]
	[Address(RVA = "0x576E590", Offset = "0x576D590", VA = "0x576E590")]
	public ReplayScriptOptions()
	{
		// Lifted from source/cpp/Replay/ReplayScriptOptions.c (Replay.ReplayScriptOptions$$.ctor): clean
		base();
		return;
	}
}
