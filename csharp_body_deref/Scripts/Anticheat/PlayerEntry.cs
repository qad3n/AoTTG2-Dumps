// ==================== AoTTG2 cross-reference ====================
// Type: Anticheat.PlayerEntry
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Anticheat/PlayerEntry.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Anticheat;

[Token(Token = "0x20007EC")]
internal class PlayerEntry
{
	[Token(Token = "0x40025E6")]
	[FieldOffset(Offset = "0x10")]
	public string SessionId;

	[Token(Token = "0x40025E7")]
	[FieldOffset(Offset = "0x18")]
	public string IPAddress;

	[Token(Token = "0x40025E8")]
	[FieldOffset(Offset = "0x20")]
	public string Username;

	[Token(Token = "0x40025E9")]
	[FieldOffset(Offset = "0x28")]
	public int ActorNumber;

	[Token(Token = "0x6004B65")]
	[Address(RVA = "0x43DC2F0", Offset = "0x43DC2F0", VA = "0x43DC2F0")]
	public PlayerEntry()
	{
	}
}
