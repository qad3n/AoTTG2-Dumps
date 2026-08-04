// ==================== AoTTG2 cross-reference ====================
// Type: Replay.HumanReplayObject
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Replay/HumanReplayObject.c
// Prior real C# source (older reference): Assets/Scripts/Replay/ReplayObject/HumanReplayObject.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Replay;

[Token(Token = "0x20000D6")]
internal class HumanReplayObject : BaseReplayObject
{
	[Token(Token = "0x400051A")]
	[FieldOffset(Offset = "0x28")]
	public string Name;

	[Token(Token = "0x400051B")]
	[FieldOffset(Offset = "0x30")]
	public string GuildName;

	[Token(Token = "0x600041A")]
	[Address(RVA = "0x4104560", Offset = "0x4104560", VA = "0x4104560")]
	public HumanReplayObject()
	{
	}
}
