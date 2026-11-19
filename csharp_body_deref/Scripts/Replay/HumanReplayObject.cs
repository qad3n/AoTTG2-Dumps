// ==================== AoTTG2 cross-reference ====================
// Type: Replay.HumanReplayObject
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Replay/HumanReplayObject.c
// Prior real C# source (older reference): Assets/Scripts/Replay/ReplayObject/HumanReplayObject.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Replay;

[Token(Token = "0x200006A")]
internal class HumanReplayObject : BaseReplayObject
{
	[Token(Token = "0x400021F")]
	[FieldOffset(Offset = "0x28")]
	public string Name;

	[Token(Token = "0x4000220")]
	[FieldOffset(Offset = "0x30")]
	public string GuildName;

	[Token(Token = "0x600031A")]
	[Address(RVA = "0x576E4D0", Offset = "0x576D4D0", VA = "0x576E4D0")]
	public HumanReplayObject()
	{
	}
}
