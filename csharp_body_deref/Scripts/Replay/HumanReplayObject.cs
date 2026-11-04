// ==================== AoTTG2 cross-reference ====================
// Type: Replay.HumanReplayObject
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Replay/HumanReplayObject.c
// Prior real C# source (older reference): Assets/Scripts/Replay/ReplayObject/HumanReplayObject.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Replay;

[Token(Token = "0x20000F6")]
internal class HumanReplayObject : BaseReplayObject
{
	[Token(Token = "0x40005BA")]
	[FieldOffset(Offset = "0x28")]
	public string Name;

	[Token(Token = "0x40005BB")]
	[FieldOffset(Offset = "0x30")]
	public string GuildName;

	[Token(Token = "0x60004B3")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public HumanReplayObject()
	{
	}
}
